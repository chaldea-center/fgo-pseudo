void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct BattleInformationComponent_StaticFields *static_fields; // x0

  if ( (byte_42E5971 & 1) == 0 )
  {
    sub_B5D5C4(&BattleInformationComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_9692/*"NobleLevel"*/, v4, v5, v6);
    byte_42E5971 = 1;
  }
  static_fields = BattleInformationComponent_TypeInfo->static_fields;
  static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9692/*"NobleLevel"*/;
  sub_B5D560(static_fields);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  BaseBattleInfoPosData_o *v44; // x20
  __int64 v45; // x0
  __int64 v46; // x1
  struct System_String_array *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x20
  int v51; // s0
  int v52; // s1
  int v53; // s2
  int v54; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x20
  struct System_String_array *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x0
  __int64 v62; // x0

  if ( (byte_42E5970 & 1) == 0 )
  {
    sub_B5D5C4(&BaseBattleInfoPosData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&bool___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&float___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&string___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23959/*"{0}th Attack"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1191/*"3rd Attack"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_21625/*"overkill_"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1123/*"1st Attack"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1172/*"2nd Attack"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_21624/*"overgauge_"*/, v41, v42, v43);
    byte_42E5970 = 1;
  }
  v44 = (BaseBattleInfoPosData_o *)sub_B5D694(BaseBattleInfoPosData_TypeInfo);
  BaseBattleInfoPosData___ctor(v44, 0LL);
  this->fields.infoPosData = v44;
  sub_B5D560(&this->fields.infoPosData);
  v45 = sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !v45 )
    goto LABEL_41;
  v47 = (struct System_String_array *)v45;
  v45 = StringLiteral_21625/*"overkill_"*/;
  if ( StringLiteral_21625/*"overkill_"*/ )
  {
    v45 = sub_B5D684(StringLiteral_21625/*"overkill_"*/, v47->obj.klass->_1.element_class);
    if ( !v45 )
      goto LABEL_40;
    v48 = StringLiteral_21625/*"overkill_"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( !v47->max_length )
    goto LABEL_39;
  v47->m_Items[0] = (System_String_o *)v48;
  sub_B5D560(v47->m_Items);
  v45 = StringLiteral_21624/*"overgauge_"*/;
  if ( StringLiteral_21624/*"overgauge_"*/ )
  {
    v45 = sub_B5D684(StringLiteral_21624/*"overgauge_"*/, v47->obj.klass->_1.element_class);
    if ( !v45 )
      goto LABEL_40;
    v49 = StringLiteral_21624/*"overgauge_"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_39;
  v47->m_Items[1] = (System_String_o *)v49;
  sub_B5D560(&v47->m_Items[1]);
  this->fields.overLabel = v47;
  sub_B5D560(&this->fields.overLabel);
  this->fields.overObjectList = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                                         UnityEngine_GameObject___TypeInfo,
                                                                         2LL);
  sub_B5D560(&this->fields.overObjectList);
  this->fields.isAlreadyOverKill = (struct System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, 2LL);
  sub_B5D560(&this->fields.isAlreadyOverKill);
  this->fields.timeStartOverKill = (struct System_Single_array *)sub_B5D5DC(float___TypeInfo, 2LL);
  sub_B5D560(&this->fields.timeStartOverKill);
  v50 = sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
  *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v50 )
    goto LABEL_41;
  v54 = *(_DWORD *)(v50 + 24);
  if ( !v54 || (*(_DWORD *)(v50 + 32) = v51, *(_DWORD *)(v50 + 36) = v52, *(_DWORD *)(v50 + 40) = v53, v54 == 1) )
  {
LABEL_39:
    v61 = sub_B5D6C8(v45);
    sub_B5D668(v61, 0LL);
  }
  *(_DWORD *)(v50 + 52) = 0;
  *(_QWORD *)(v50 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v50;
  sub_B5D560(&this->fields.showPositions);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v55;
  sub_B5D560(&this->fields.motionMessageObjList);
  v45 = sub_B5D5DC(string___TypeInfo, 4LL);
  if ( !v45 )
LABEL_41:
    sub_B5D69C(v45, v46);
  v56 = (struct System_String_array *)v45;
  v45 = StringLiteral_1123/*"1st Attack"*/;
  if ( StringLiteral_1123/*"1st Attack"*/ )
  {
    v45 = sub_B5D684(StringLiteral_1123/*"1st Attack"*/, v56->obj.klass->_1.element_class);
    if ( !v45 )
      goto LABEL_40;
    v57 = StringLiteral_1123/*"1st Attack"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( !v56->max_length )
    goto LABEL_39;
  v56->m_Items[0] = (System_String_o *)v57;
  sub_B5D560(v56->m_Items);
  v45 = StringLiteral_1172/*"2nd Attack"*/;
  if ( StringLiteral_1172/*"2nd Attack"*/ )
  {
    v45 = sub_B5D684(StringLiteral_1172/*"2nd Attack"*/, v56->obj.klass->_1.element_class);
    if ( !v45 )
      goto LABEL_40;
    v58 = StringLiteral_1172/*"2nd Attack"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v56->max_length <= 1 )
    goto LABEL_39;
  v56->m_Items[1] = (System_String_o *)v58;
  sub_B5D560(&v56->m_Items[1]);
  v45 = StringLiteral_1191/*"3rd Attack"*/;
  if ( StringLiteral_1191/*"3rd Attack"*/ )
  {
    v45 = sub_B5D684(StringLiteral_1191/*"3rd Attack"*/, v56->obj.klass->_1.element_class);
    if ( !v45 )
      goto LABEL_40;
    v59 = StringLiteral_1191/*"3rd Attack"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( v56->max_length <= 2 )
    goto LABEL_39;
  v56->m_Items[2] = (System_String_o *)v59;
  sub_B5D560(&v56->m_Items[2]);
  v45 = StringLiteral_23959/*"{0}th Attack"*/;
  if ( StringLiteral_23959/*"{0}th Attack"*/ )
  {
    v45 = sub_B5D684(StringLiteral_23959/*"{0}th Attack"*/, v56->obj.klass->_1.element_class);
    if ( v45 )
    {
      v60 = StringLiteral_23959/*"{0}th Attack"*/;
      goto LABEL_37;
    }
LABEL_40:
    v62 = sub_B5D6BC();
    sub_B5D668(v62, 0LL);
  }
  v60 = 0LL;
LABEL_37:
  if ( v56->max_length <= 3 )
    goto LABEL_39;
  v56->m_Items[3] = (System_String_o *)v60;
  sub_B5D560(&v56->m_Items[3]);
  this->fields.attackCount = v56;
  sub_B5D560(&this->fields.attackCount);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *MessageObjectAssetName; // x21
  System_String_array *v15; // x22
  System_String_o *EffectAssetName; // x0
  __int64 v17; // x1
  System_String_o *v18; // x23
  System_String_o *v19; // x23
  BattleInformationComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *TargetPrefab; // x0
  const MethodInfo *v23; // x4
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42E5960 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, (_DWORD)messages, messageType, parentTransform);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v8, v9, v10);
    this = (BattleInformationComponent_o *)sub_B5D5C4(&string___TypeInfo, v11, v12, v13);
    byte_42E5960 = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v15 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 2LL);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v15 )
    sub_B5D69C(EffectAssetName, v17);
  v18 = EffectAssetName;
  if ( EffectAssetName )
  {
    EffectAssetName = (System_String_o *)sub_B5D684(EffectAssetName, v15->obj.klass->_1.element_class);
    if ( !EffectAssetName )
      goto LABEL_18;
  }
  if ( !v15->max_length )
    goto LABEL_17;
  v15->m_Items[0] = v18;
  sub_B5D560(v15->m_Items);
  EffectAssetName = (System_String_o *)BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = (System_String_o *)BattleDataDefine_TypeInfo;
  }
  v19 = *(System_String_o **)(*(_QWORD *)&EffectAssetName[7].fields + 40LL);
  if ( v19 )
  {
    EffectAssetName = (System_String_o *)sub_B5D684(v19, v15->obj.klass->_1.element_class);
    if ( !EffectAssetName )
    {
LABEL_18:
      v26 = sub_B5D6BC();
      sub_B5D668(v26, 0LL);
    }
  }
  if ( v15->max_length <= 1 )
  {
LABEL_17:
    v25 = sub_B5D6C8(EffectAssetName);
    sub_B5D668(v25, 0LL);
  }
  v15->m_Items[1] = v19;
  sub_B5D560(&v15->m_Items[1]);
  TargetPrefab = BattleInformationComponent__GetTargetPrefab(v20, MessageObjectAssetName, v15, v21);
  return BattleInformationComponent__CreateBattleMessageObject_19659064(
           (BattleInformationComponent_o *)TargetPrefab,
           messages,
           TargetPrefab,
           parentTransform,
           v23);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_19659064(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *v14; // x22
  UILabel_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42E5961 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___,
      (_DWORD)messages,
      (_DWORD)msgPrefab,
      parentTransform);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E5961 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__Instantiate_UILabel_(
            (UILabel_o *)msgPrefab,
            parentTransform,
            (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    if ( !v15 )
      goto LABEL_15;
    v14 = (UnityEngine_GameObject_o *)v15;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v15,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v15 = (UILabel_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_srcLineSprite,
          messages,
          0LL);
        return v14;
      }
LABEL_15:
      sub_B5D69C(v15, v16);
    }
  }
  return v14;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_o *message,
        UnityEngine_Transform_o *parentTransform,
        float lifeTime,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x1
  BattleInformationComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  BattleLogic_o *logic; // x0
  System_String_array *v19; // x20
  System_String_o *MessageObjectAssetName; // x21
  System_String_array *v21; // x22
  BattleDataDefine_c *v22; // x8
  System_String_o *ASSET_BATTLE_COMMON; // x23
  BattleInformationComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *TargetPrefab; // x0
  const MethodInfo *v27; // x4
  UnityEngine_GameObject_o *v28; // x19
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_42E595F & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, (_DWORD)message, (_DWORD)parentTransform, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___, v9, v10, v11);
    sub_B5D5C4(&string___TypeInfo, v12, v13, v14);
    byte_42E595F = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v16 = (BattleInformationComponent_o *)sub_B5D5DC(string___TypeInfo, 0LL);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_18;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, v15);
    if ( !logic )
      goto LABEL_18;
    v16 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0LL);
  }
  v19 = (System_String_array *)v16;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v16, 0, v17);
  logic = (BattleLogic_o *)sub_B5D5DC(string___TypeInfo, 1LL);
  v21 = (System_String_array *)logic;
  v22 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v22 = BattleDataDefine_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_18;
  ASSET_BATTLE_COMMON = v22->static_fields->ASSET_BATTLE_COMMON;
  if ( ASSET_BATTLE_COMMON )
  {
    logic = (BattleLogic_o *)sub_B5D684(ASSET_BATTLE_COMMON, v21->obj.klass->_1.element_class);
    if ( !logic )
    {
      v31 = sub_B5D6BC();
      sub_B5D668(v31, 0LL);
    }
  }
  if ( !v21->max_length )
  {
    v30 = sub_B5D6C8(logic);
    sub_B5D668(v30, 0LL);
  }
  v21->m_Items[0] = ASSET_BATTLE_COMMON;
  sub_B5D560(v21->m_Items);
  TargetPrefab = BattleInformationComponent__GetTargetPrefab(v24, MessageObjectAssetName, v21, v25);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_19659064(
                             (BattleInformationComponent_o *)TargetPrefab,
                             v19,
                             TargetPrefab,
                             parentTransform,
                             v27);
  if ( !logic
    || (v28 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(logic, v15);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0LL);
  return v28;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultSkillMessageObject(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        bool showSkillSprite,
        const MethodInfo *method)
{
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  UnityEngine_GameObject_o *Object; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x19
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Object_o *v18; // x20

  if ( (byte_42E5962 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___,
      isPlayer,
      (_DWORD)message,
      showSkillSprite);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E5962 = 1;
  }
  v12 = 128LL;
  if ( isPlayer )
    v12 = 120LL;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v12),
             this->fields.skillInfoRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_16;
  v15 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         Object,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_16;
  v17 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v16);
  if ( !showSkillSprite )
  {
    v18 = *(UnityEngine_Object_o **)&v17[2].fields.m_CachedPtr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      Object = *(UnityEngine_GameObject_o **)&v17[2].fields.m_CachedPtr;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0LL);
          return v15;
        }
      }
LABEL_16:
      sub_B5D69C(Object, v14);
    }
  }
  return v15;
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
  Il2CppObject *v8; // x21
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_GameObject_o *v20; // x19
  UnityEngine_GameObject_o *skillInfoPrefab; // x1
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v23; // x19
  Il2CppObject *v24; // x0
  UnityEngine_Component_o *gameObject; // x0
  __int64 v26; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x21
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  v8 = (Il2CppObject *)message;
  v30 = skillLevel;
  if ( (byte_42E5963 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___,
      overWriteSkillInfoId,
      (_DWORD)message,
      isPlayer);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2579/*"BATTLE_SKILL_NAME_LEVEL"*/, v17, v18, v19);
    byte_42E5963 = 1;
  }
  v20 = 0LL;
  switch ( overWriteSkillInfoId )
  {
    case 0:
      return v20;
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
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2579/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
        v24 = (Il2CppObject *)System_Int32__ToString((int32_t)&v30, 0LL);
        v8 = (Il2CppObject *)System_String__Format_44573324(v23, v8, v24, 0LL);
      }
      Object = BattleInformationComponent__CreateDefaultBattleMessageObject(
                 this,
                 (System_String_o *)v8,
                 this->fields.skillInfoRoot,
                 2.0,
                 (const MethodInfo *)isPlayer);
LABEL_14:
      v20 = Object;
      break;
    default:
      break;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_33;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v20,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
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
            return v20;
          }
        }
LABEL_33:
        sub_B5D69C(gameObject, v26);
      }
    }
  }
  return v20;
}


void __fastcall BattleInformationComponent__CreateSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *skillSkipRoot; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *infoPosData; // x0
  UnityEngine_GameObject_o *v8; // x20
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *skillSkipPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x20
  UnityEngine_Object_o *skillSkipObj; // x19
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E596E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E596E = 1;
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
    v8 = this->fields.skillSkipRoot;
    v15.fields.x = ((float (__fastcall *)(UnityEngine_GameObject_o *, const char *))infoPosData->klass[1]._1.gc_desc)(
                     infoPosData,
                     infoPosData->klass[1]._1.name);
    GameObjectExtensions__SetLocalPosition(v8, v15, 0LL);
    BattleInformationComponent__DeleteSkillSkip(this, v9);
    infoPosData = this->fields.skillSkipRoot;
    if ( !infoPosData )
      goto LABEL_16;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform(infoPosData, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0LL, 0LL);
    p_skillSkipObj = &this->fields.skillSkipObj;
    this->fields.skillSkipObj = Object;
    sub_B5D560(&this->fields.skillSkipObj);
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
      sub_B5D69C(infoPosData, v6);
    }
  }
}


void __fastcall BattleInformationComponent__DeleteSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  UnityEngine_Object_o *v8; // x20

  if ( (byte_42E596F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E596F = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = &this->fields.skillSkipObj;
  v6 = (UnityEngine_Object_o *)skillSkipObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v8, 0LL);
    *p_skillSkipObj = 0LL;
    sub_B5D560(p_skillSkipObj);
  }
}


void __fastcall BattleInformationComponent__DestroyDisplayingMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Object_o *commonMessageObject; // x20
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E5968 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E5968 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  commonMessageObject = (UnityEngine_Object_o *)this->fields.commonMessageObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commonMessageObject, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Object_o *)this->fields.commonMessageObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v22, 0LL);
  }
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)motionMessageObjList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
LABEL_20:
    sub_B5D69C(motionMessageObjList, v21);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)motionMessageObjList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


System_String_o *__fastcall BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E595E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, messageType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_16867/*"battle_message_{0}"*/, v5, v6, v7);
    byte_42E595E = 1;
  }
  v10 = messageType;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_16867/*"battle_message_{0}"*/, v8, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__GetTargetPrefab(
        BattleInformationComponent_o *this,
        System_String_o *prefabName,
        System_String_array *assetNames,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  System_String_o *v14; // x21
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  __int64 v17; // x0

  if ( (byte_42E596D & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)prefabName, (_DWORD)assetNames, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    this = (BattleInformationComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E596D = 1;
  }
  if ( !assetNames )
    goto LABEL_20;
  v12 = *(_QWORD *)&assetNames->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      v14 = assetNames->m_Items[v13];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v14, 0LL);
      if ( !this )
        break;
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 (AssetData_o *)this,
                                                                 prefabName,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v12) = assetNames->max_length;
        if ( (__int64)++v13 < (int)v12 )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
    }
LABEL_20:
    sub_B5D69C(this, prefabName);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v28; // x1
  __int64 overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *overObjectList; // x21
  UnityEngine_GameObject_o *v32; // x20
  struct UnityEngine_GameObject_array *v33; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v36; // x20
  struct UnityEngine_GameObject_array *v37; // x21
  UnityEngine_GameObject_o *v38; // x22
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x22
  struct UnityEngine_GameObject_array *v41; // x8
  struct System_Boolean_array *v42; // x8
  struct System_Single_array *v43; // x8
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8
  __int64 v46; // x0
  __int64 v47; // x0

  if ( (byte_42E5959 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)inperf, (_DWORD)indata, inlogic);
    sub_B5D5C4(&AssetManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_18427/*"ef_overgauge01"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_18434/*"ef_skillskip"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_18483/*"effect/ef_overkill01"*/, v24, v25, v26);
    byte_42E5959 = 1;
  }
  this->fields.perf = inperf;
  sub_B5D560(&this->fields.perf);
  this->fields.data = indata;
  sub_B5D560(&this->fields.data);
  this->fields.logic = inlogic;
  sub_B5D560(&this->fields.logic);
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
        overRoot = (__int64)BaseMonoBehaviour__createObject_21082944(
                              (BaseMonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_18483/*"effect/ef_overkill01"*/,
                              transform,
                              0LL,
                              0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_45:
    sub_B5D69C(overRoot, v28);
  }
  v32 = (UnityEngine_GameObject_o *)overRoot;
  if ( overRoot )
  {
    overRoot = sub_B5D684(overRoot, overObjectList->obj.klass->_1.element_class);
    if ( !overRoot )
      goto LABEL_47;
  }
  if ( !overObjectList->max_length )
    goto LABEL_46;
  overObjectList->m_Items[0] = v32;
  sub_B5D560(overObjectList->m_Items);
  v33 = this->fields.overObjectList;
  if ( !v33 )
    goto LABEL_45;
  if ( !v33->max_length )
    goto LABEL_46;
  overRoot = (__int64)v33->m_Items[0];
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
    v46 = sub_B5D6C8(overRoot);
    sub_B5D668(v46, 0LL);
  }
  timeStartOverKill->m_Items[1] = 0.0;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  overRoot = (__int64)AssetManager__getAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, 0LL);
  if ( !overRoot )
    goto LABEL_45;
  v36 = (AssetData_o *)overRoot;
  overRoot = (__int64)AssetData__GetObject_WarBoardWaitTimeSetting_(
                        (AssetData_o *)overRoot,
                        (System_String_o *)StringLiteral_18427/*"ef_overgauge01"*/,
                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !this->fields.overRoot )
    goto LABEL_45;
  v37 = this->fields.overObjectList;
  v38 = (UnityEngine_GameObject_o *)overRoot;
  v39 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  overRoot = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v38, v39, 0LL, 0LL);
  if ( !v37 )
    goto LABEL_45;
  v40 = (UnityEngine_GameObject_o *)overRoot;
  if ( overRoot )
  {
    overRoot = sub_B5D684(overRoot, v37->obj.klass->_1.element_class);
    if ( !overRoot )
    {
LABEL_47:
      v47 = sub_B5D6BC();
      sub_B5D668(v47, 0LL);
    }
  }
  if ( v37->max_length <= 1 )
    goto LABEL_46;
  v37->m_Items[1] = v40;
  sub_B5D560(&v37->m_Items[1]);
  v41 = this->fields.overObjectList;
  if ( !v41 )
    goto LABEL_45;
  if ( v41->max_length <= 1 )
    goto LABEL_46;
  overRoot = (__int64)v41->m_Items[1];
  if ( !overRoot )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  v42 = this->fields.isAlreadyOverKill;
  if ( !v42 )
    goto LABEL_45;
  if ( v42->max_length <= 1 )
    goto LABEL_46;
  v42->m_Items[5] = 0;
  v43 = this->fields.timeStartOverKill;
  if ( !v43 )
    goto LABEL_45;
  if ( v43->max_length <= 1 )
    goto LABEL_46;
  v43->m_Items[2] = 0.0;
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      v36,
                                                                      (System_String_o *)StringLiteral_18434/*"ef_skillskip"*/,
                                                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  sub_B5D560(&this->fields.skillSkipPrefab);
  GameObjectExtensions__SafeSetParent_32436524(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v6; // x1
  BattleFieldParamComponent_o *v7; // x0

  if ( (byte_42E595A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E595A = 1;
  }
  this->fields.infoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  sub_B5D560(&this->fields.infoPosData);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    v7 = this->fields.fieldParam;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    BattleFieldParamComponent__UpdateView(v7, v6);
  }
}


BaseBattleInfoPosData_o *__fastcall BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleData_o *data; // x0
  int v12; // w20
  PosCountSpBattleInfoPosData_o *v13; // x20

  if ( (byte_42E595B & 1) == 0 )
  {
    sub_B5D5C4(&NormalRaidTypeBossBattleInfoPosData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PosCountNormalBattleInfoPosData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PosCountSpBattleInfoPosData_TypeInfo, v8, v9, v10);
    byte_42E595B = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__GetRaidType(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v12 = (int)data;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0LL) )
  {
    v13 = (PosCountSpBattleInfoPosData_o *)sub_B5D694(PosCountSpBattleInfoPosData_TypeInfo);
    PosCountSpBattleInfoPosData___ctor(v13, 0LL);
    if ( !v13 )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( !v12 )
    goto LABEL_10;
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getStageEntity(data, 0LL)) == 0LL )
LABEL_15:
    sub_B5D69C(data, method);
  if ( !StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0LL) )
  {
    v13 = (PosCountSpBattleInfoPosData_o *)sub_B5D694(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    NormalRaidTypeBossBattleInfoPosData___ctor((NormalRaidTypeBossBattleInfoPosData_o *)v13, 0LL);
    if ( !v13 )
      goto LABEL_15;
    goto LABEL_13;
  }
LABEL_10:
  v13 = (PosCountSpBattleInfoPosData_o *)sub_B5D694(PosCountNormalBattleInfoPosData_TypeInfo);
  PosCountNormalBattleInfoPosData___ctor((PosCountNormalBattleInfoPosData_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
LABEL_13:
  ((void (__fastcall *)(PosCountSpBattleInfoPosData_o *, struct BattlePerformance_o *, void *))v13->klass->vtable._6_Init.method)(
    v13,
    this->fields.perf,
    v13->klass[1]._1.image);
  return (BaseBattleInfoPosData_o *)v13;
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
    sub_B5D69C(this, actionData);
  isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
  v3->fields.commonMessageObject = BattleInformationComponent__showSkillName(
                                     v3,
                                     isPlayerID,
                                     actionData->fields.skillMessage,
                                     0,
                                     actionData->fields.skillInfo,
                                     v6);
  sub_B5D560(&v3->fields.commonMessageObject);
}


void __fastcall BattleInformationComponent__ShowBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  UnityEngine_Object_o *BattleMessageObject; // x20

  if ( (byte_42E596C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, (_DWORD)messages, messageType, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E596C = 1;
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
                                                    v12);
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
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          return;
        }
      }
LABEL_13:
      sub_B5D69C(motionMessageObjList, v11);
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
  GameObjectExtensions__SafeSetParent_32436524(this->fields.overRoot, fsOffsetRoot, 0LL);
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
  __int64 v3; // x3
  BattleInformationComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v17; // x8
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v21; // x0
  struct System_String_array *v22; // x8
  System_String_o *v23; // x0
  struct System_Boolean_array *v24; // x8
  __int64 v25; // x0

  v5 = this;
  if ( (byte_42E596A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (BattleInformationComponent_o *)sub_B5D5C4(&StringLiteral_21608/*"out"*/, v12, v13, v14);
    byte_42E596A = 1;
  }
  isAlreadyOverKill = v5->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_32;
  if ( isAlreadyOverKill->max_length <= type )
    goto LABEL_33;
  if ( !isAlreadyOverKill->m_Items[type + 4] )
    return;
  overObjectList = v5->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_32;
  if ( overObjectList->max_length <= type )
    goto LABEL_33;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this )
    goto LABEL_32;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v17 = v5->fields.overObjectList;
  if ( !v17 )
    goto LABEL_32;
  if ( v17->max_length <= type )
    goto LABEL_33;
  v18 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v17->m_Items[type];
  if ( !this )
    goto LABEL_32;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v18 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 1, 0LL);
      overLabel = v5->fields.overLabel;
      if ( overLabel )
      {
        if ( overLabel->max_length <= type )
          goto LABEL_33;
        v21 = System_String__Concat_44577788(overLabel->m_Items[type], (System_String_o *)StringLiteral_21608/*"out"*/, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_16676044((SimpleAnimation_o *)v18, v21, 0LL);
        goto LABEL_28;
      }
    }
LABEL_32:
    sub_B5D69C(this, *(_QWORD *)&type);
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
  v22 = v5->fields.overLabel;
  if ( !v22 )
    goto LABEL_32;
  if ( v22->max_length <= type )
    goto LABEL_33;
  v23 = System_String__Concat_44577788(v22->m_Items[type], (System_String_o *)StringLiteral_21608/*"out"*/, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_51249124(
                                           (UnityEngine_Animation_o *)Component_srcLineSprite,
                                           v23,
                                           0LL);
LABEL_28:
  v24 = v5->fields.isAlreadyOverKill;
  if ( !v24 )
    goto LABEL_32;
  if ( v24->max_length <= type )
  {
LABEL_33:
    v25 = sub_B5D6C8(this);
    sub_B5D668(v25, 0LL);
  }
  v24->m_Items[type + 4] = 0;
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
    sub_B5D69C(this, *(_QWORD *)&type);
  }
  if ( showPositions->max_length <= zureIndex )
  {
LABEL_9:
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  BattleInfoMessageComponent_o *v23; // x22
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v26; // x0
  BattleActionData_o *v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_42E5965 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___,
      imageId,
      (_DWORD)message,
      method);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_18466/*"effect/ef_boostitem01"*/, v13, v14, v15);
    byte_42E5965 = 1;
  }
  if ( !message || message->fields.m_stringLength < 1 )
    return 0LL;
  v16 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_18466/*"effect/ef_boostitem01"*/, 0LL);
  v17 = (UnityEngine_GameObject_o *)v16;
  if ( !v16 || (UnityEngine_GameObject_c *)v16->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       v17,
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
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_B5D69C(Component_srcLineSprite, v21);
      }
      v23 = (BattleInfoMessageComponent_o *)Component_srcLineSprite;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_srcLineSprite, message, v22);
      BattleInfoMessageComponent__setItemSprite(v23, imageId, 0, v24);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  v26 = (BattleInformationComponent_o *)sub_B5D990(v16);
  BattleInformationComponent__showSpecialName(v26, v27, v28);
  return result;
}


void __fastcall BattleInformationComponent__showCommonMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData_o *v4; // x20
  BattleInformationComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  const MethodInfo *v30; // x4
  int v31; // w23
  UnityEngine_GameObject_o *v32; // x21
  BattleInfoMessageComponent_o *v33; // x22
  const MethodInfo *v34; // x3
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  System_String_o *motionMessage; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t type; // w9
  int32_t skilllv; // w21
  const MethodInfo *v41; // x3
  struct BattleSkillInfoData_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  System_String_o *v44; // x24
  Il2CppObject *v45; // x0
  System_String_o **v46; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v50; // x3
  bool isPlayerID; // w0
  const MethodInfo *v52; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v54; // x4
  bool v55; // w1
  BattleInformationComponent_o *v56; // x0
  int32_t v57; // w3
  bool v58; // w0
  __int64 v59; // x0
  int v60; // [xsp+Ch] [xbp-34h] BYREF

  v4 = actionData;
  v5 = this;
  if ( (byte_42E5967 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___,
      (_DWORD)actionData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v6, v7, v8);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2951/*"Buster!"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11123/*"Quick!"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_2115/*"Arts!"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    this = (BattleInformationComponent_o *)sub_B5D5C4(&StringLiteral_6390/*"Extra!"*/, v27, v28, v29);
    byte_42E5967 = 1;
  }
  if ( !v4 )
    goto LABEL_62;
  if ( v4->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyDisplayingMessage(v5, (const MethodInfo *)actionData);
  if ( BattleCommand__isShowCommandAction(v4->fields.type, 0LL) )
  {
    this = (BattleInformationComponent_o *)v5->fields.data;
    if ( !this )
      goto LABEL_62;
    if ( BattleData__isPlayerID((BattleData_o *)this, v4->fields.actorId, 0LL) )
    {
      this = (BattleInformationComponent_o *)BattleCommand__getType(v4->fields.type, 0LL);
      if ( !v5->fields.data )
        goto LABEL_62;
      v31 = (int)this;
      this = (BattleInformationComponent_o *)BattleData__isPlayerID(v5->fields.data, v4->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_62;
      this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v5,
                                               v5->fields.playerAttackInfoPrefab,
                                               v5->fields.attackMessageRoot,
                                               0LL,
                                               0LL);
      if ( !this )
        goto LABEL_62;
      v32 = (UnityEngine_GameObject_o *)this;
      this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !v5->fields.data )
        goto LABEL_62;
      v33 = (BattleInfoMessageComponent_o *)this;
      this = (BattleInformationComponent_o *)BattleData__isPlayerID(v5->fields.data, v4->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_48:
        UnityEngine_GameObject__SetActive(v32, 1, 0LL);
        goto LABEL_54;
      }
      actionIndex = v4->fields.actionIndex;
      attackCount = v5->fields.attackCount;
      if ( (int)actionIndex >= 3 )
      {
        if ( !attackCount )
          goto LABEL_62;
        if ( attackCount->max_length > 3 )
        {
          v44 = attackCount->m_Items[3];
          v60 = actionIndex + 1;
          v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
          this = (BattleInformationComponent_o *)System_String__Format(v44, v45, 0LL);
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
          if ( (unsigned int)(v31 - 1) > 3 )
          {
            v46 = (System_String_o **)&StringLiteral_1/*""*/;
            if ( !v33 )
              goto LABEL_62;
          }
          else
          {
            v46 = (System_String_o **)*(&off_3F18240 + v31 - 1);
            if ( !v33 )
              goto LABEL_62;
          }
          BattleInfoMessageComponent__setText_19652844(v33, (System_String_o *)actionData, *v46, v34);
          perf = v5->fields.perf;
          if ( perf )
          {
            this = (BattleInformationComponent_o *)perf->fields.commandPerf;
            if ( this )
            {
              BattleCommandCardObject = (UnityEngine_Object_o *)BattlePerformanceCommandCard__getBattleCommandCardObject(
                                                                  (BattlePerformanceCommandCard_o *)this,
                                                                  v4->fields.actionIndex,
                                                                  0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(BattleCommandCardObject, 0LL, 0LL) )
                goto LABEL_48;
              this = (BattleInformationComponent_o *)v5->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, v4->fields.targetId, 0LL);
                BattleInfoMessageComponent__setCommandObject(
                  v33,
                  (UnityEngine_GameObject_o *)BattleCommandCardObject,
                  ServantData,
                  v50);
                if ( BattleCommandCardObject )
                {
                  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
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
          sub_B5D69C(this, actionData);
        }
      }
      v59 = sub_B5D6C8(this);
      sub_B5D668(v59, 0LL);
    }
  }
  motionMessage = v4->fields.motionMessage;
  if ( motionMessage )
  {
    BattleInformationComponent__showMotionMessage(
      v5,
      motionMessage,
      v4->fields.actorId,
      v4->fields._MessageType_k__BackingField,
      v30);
    goto LABEL_19;
  }
  v32 = 0LL;
  if ( BattleActionData__IsGimmick(v4, 0LL) )
    goto LABEL_54;
  this = (BattleInformationComponent_o *)BattleActionData__isSkill(v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    skillInfo = v4->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_62;
    type = skillInfo->fields.type;
    if ( type == 11 || type == 1 )
      skilllv = skillInfo->fields.skilllv;
    else
      skilllv = 0;
    this = (BattleInformationComponent_o *)v5->fields.data;
    if ( !this )
      goto LABEL_62;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)this, v4->fields.actorId, 0LL);
    skillMessage = v4->fields.skillMessage;
    v54 = v4->fields.skillInfo;
    v55 = isPlayerID;
    v56 = v5;
    v57 = skilllv;
    goto LABEL_52;
  }
  this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(v4, 0LL);
  v32 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_54;
  if ( v4->fields.noOperation )
  {
LABEL_19:
    v32 = 0LL;
    goto LABEL_54;
  }
  v42 = v4->fields.skillInfo;
  if ( !v42 )
    goto LABEL_62;
  if ( v42->fields.itemImageId == -1 )
  {
    this = (BattleInformationComponent_o *)v5->fields.data;
    if ( !this )
      goto LABEL_62;
    v58 = BattleData__isPlayerID((BattleData_o *)this, v4->fields.actorId, 0LL);
    skillMessage = v4->fields.skillMessage;
    v54 = v4->fields.skillInfo;
    v55 = v58;
    v56 = v5;
    v57 = 0;
LABEL_52:
    v43 = BattleInformationComponent__showSkillName(v56, v55, skillMessage, v57, v54, v52);
    goto LABEL_53;
  }
  v43 = BattleInformationComponent__showBoostSkillName(v5, v4->fields.imageId, v4->fields.skillMessage, v41);
LABEL_53:
  v32 = v43;
LABEL_54:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL) )
  {
    v5->fields.commonMessageObject = v32;
    sub_B5D560(&v5->fields.commonMessageObject);
  }
}


void __fastcall BattleInformationComponent__showCommonMessage_19666988(
        BattleInformationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__showMotionMessage(
        BattleInformationComponent_o *this,
        System_String_o *motionMessage,
        int32_t actorId,
        int32_t messageType,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  Il2CppObject *current; // x23
  bool HasRubyFormat; // w24
  const MethodInfo *v53; // x3
  BattleInformationComponent_o *v54; // x23
  UnityEngine_GameObject_o *v55; // x21
  const MethodInfo *v56; // x2
  bool isPlayerID; // w0
  const MethodInfo *v58; // x4
  BattleEffectUtility_c *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x20
  AssetData_o *v62; // x20
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v64; // x0
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-60h] BYREF

  v8 = this;
  if ( (byte_42E596B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_AssetData_GetObject_GameObject____68807504,
      (_DWORD)motionMessage,
      actorId,
      *(_QWORD *)&messageType);
    sub_B5D5C4(&AssetManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&char___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16878/*"battle_states_popup"*/, v45, v46, v47);
    this = (BattleInformationComponent_o *)sub_B5D5C4(&StringLiteral_2813/*"Battle/Effect/"*/, v48, v49, v50);
    byte_42E596B = 1;
  }
  memset(&v66, 0, sizeof(v66));
  if ( !motionMessage )
    goto LABEL_49;
  if ( motionMessage->fields.m_stringLength < 1 )
    return;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v66,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v66.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  this = (BattleInformationComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_49;
  if ( !LODWORD(this->fields.perf) )
    goto LABEL_50;
  LOWORD(this->fields.data) = 58;
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, (System_Char_array *)this, 0LL);
  if ( HasRubyFormat )
    goto LABEL_18;
  v54 = this;
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
                                               v58);
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
          v55 = (UnityEngine_GameObject_o *)this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v56);
LABEL_45:
            UnityEngine_GameObject__SetActive(v55, 1, 0LL);
            goto LABEL_46;
          }
        }
LABEL_49:
        sub_B5D69C(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v53);
      if ( !this )
        goto LABEL_49;
    }
    v55 = (UnityEngine_GameObject_o *)this;
    goto LABEL_45;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_49;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0LL);
  v59 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v59 = BattleEffectUtility_TypeInfo;
  }
  v60 = System_Int32__ToString((unsigned int)v59->static_fields + 24, 0LL);
  v61 = System_String__Concat_44577788((System_String_o *)StringLiteral_2813/*"Battle/Effect/"*/, v60, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v61, 0LL);
  if ( !LODWORD(v54->fields.perf) )
  {
LABEL_50:
    v64 = sub_B5D6C8(this);
    sub_B5D668(v64, 0LL);
  }
  v62 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_44577788(
                                           (System_String_o *)StringLiteral_16878/*"battle_states_popup"*/,
                                           (System_String_o *)v54->fields.data,
                                           0LL);
  if ( !v62 )
    goto LABEL_49;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 v62,
                                                                 (System_String_o *)this,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v55 = 0LL;
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
    v55 = (UnityEngine_GameObject_o *)this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v54->fields.perf) > 1 )
    {
      if ( !this )
        goto LABEL_49;
      EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v54->fields.logic, 0LL);
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
    (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  DataManager_o *Instance; // x0
  __int64 v61; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v63; // x26
  UnityEngine_GameObject_o *v64; // x21
  UnityEngine_Transform_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x23
  UnityEngine_Transform_o *v67; // x0
  WebViewObject_o *v68; // x28
  UnityEngine_Transform_o *v69; // x0
  WebViewObject_o *v70; // x27
  UnityEngine_Transform_o *v71; // x0
  WebViewObject_o *v72; // x24
  UnityEngine_Transform_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x25
  __int64 v75; // x0
  System_String_o *age; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v78; // x1
  System_String_o *v79; // x1
  System_String_o *v80; // x22
  Il2CppObject *v81; // x0
  int v82; // w8
  SimpleAnimation_o *Component_srcLineSprite; // x20
  UnityEngine_Animation_o *v84; // x19
  BattleInformationComponent_c *v85; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v87; // x0
  BattleInformationComponent_c *v88; // x0
  System_String_o *v89; // x20
  System_String_o *v90; // x0
  __int64 v91; // x0
  int v92; // [xsp+4h] [xbp-5Ch] BYREF
  int v93; // [xsp+8h] [xbp-58h] BYREF
  int32_t v94; // [xsp+Ch] [xbp-54h] BYREF

  v94 = treasureDeviceLevel;
  if ( (byte_42E595D & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleInformationComponent_TypeInfo,
      tresureDeviceId,
      treasureDeviceLevel,
      *(_QWORD *)&treasureDevicePer);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UILabel___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v24, v25, v26);
    sub_B5D5C4(&int_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_9401/*"NOBLEINFO_NP_PER"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_22167/*"rubyLabel"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_10755/*"PerLabel"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_8601/*"LevelLabel"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_1/*""*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_9803/*"NpLevelBase"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_20618/*"mainLabel"*/, v57, v58, v59);
    byte_42E595D = 1;
  }
  v93 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v63 = Entity;
    Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.nobleInfoPrefab,
                                  this->fields.nobleInfoRoot,
                                  0LL,
                                  0LL);
    if ( !Instance )
      goto LABEL_57;
    v64 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_20618/*"mainLabel"*/,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_57;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v67 = UnityEngine_GameObject__get_transform(v64, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v67, (System_String_o *)StringLiteral_22167/*"rubyLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v68 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v69 = UnityEngine_GameObject__get_transform(v64, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v69, (System_String_o *)StringLiteral_8601/*"LevelLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v70 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v71 = UnityEngine_GameObject__get_transform(v64, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v71, (System_String_o *)StringLiteral_10755/*"PerLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v72 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v73 = UnityEngine_GameObject__get_transform(v64, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v73, (System_String_o *)StringLiteral_9803/*"NpLevelBase"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v68 )
      goto LABEL_57;
    v74 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v68, v63->fields.name, 0LL);
    age = v63->fields.age;
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
        v91 = sub_B5D6C8(v75);
        sub_B5D668(v91, 0LL);
      }
      v78 = overrideTd->m_Items[1];
      if ( v78 )
        UILabel__set_text((UILabel_o *)v68, v78, 0LL);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(age, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v64, 0LL);
      if ( !Instance )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( !Component_WebViewObject )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)Component_WebViewObject, age, 0LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v94, 0LL);
    if ( !v70 )
      goto LABEL_57;
    if ( Instance )
      v79 = (System_String_o *)Instance;
    else
      v79 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v70, v79, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_9401/*"NOBLEINFO_NP_PER"*/, 0LL);
    v92 = 100 * (treasureDevicePer / 100);
    v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
    Instance = (DataManager_o *)System_String__Format(v80, v81, 0LL);
    if ( !v72 || (UILabel__set_text((UILabel_o *)v72, (System_String_o *)Instance, 0LL), !v74) )
LABEL_57:
      sub_B5D69C(Instance, v61);
    UnityEngine_GameObject__SetActive(v74, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v82 = 5;
    else
      v82 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v82 = 1;
    v93 = v82;
    Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v64,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v84 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v64,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v85 = BattleInformationComponent_TypeInfo;
      if ( (BYTE3(BattleInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v85 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v85->static_fields->NobleInfoAnimPrefix;
      v87 = System_Int32__ToString((int32_t)&v93, 0LL);
      Instance = (DataManager_o *)System_String__Concat_44577788(NobleInfoAnimPrefix, v87, 0LL);
      if ( Component_srcLineSprite )
      {
        SimpleAnimation__Play_16676044(Component_srcLineSprite, (System_String_o *)Instance, 0LL);
        return;
      }
      goto LABEL_57;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v84, 0LL, 0LL) )
    {
      v88 = BattleInformationComponent_TypeInfo;
      if ( (BYTE3(BattleInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v88 = BattleInformationComponent_TypeInfo;
      }
      v89 = v88->static_fields->NobleInfoAnimPrefix;
      v90 = System_Int32__ToString((int32_t)&v93, 0LL);
      Instance = (DataManager_o *)System_String__Concat_44577788(v89, v90, 0LL);
      if ( !v84 )
        goto LABEL_57;
      UnityEngine_Animation__Play_51249124(v84, (System_String_o *)Instance, 0LL);
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
    sub_B5D69C(this, actionData);
  if ( !isAlreadyOverKill->max_length )
  {
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
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
    sub_B5D69C(this, actionData);
  if ( isAlreadyOverKill->max_length <= 1 )
  {
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *overRoot; // x21
  UnityEngine_GameObject_o *v20; // x21
  float v21; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v23; // x8
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Behaviour_o *v27; // x0
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v29; // s0
  struct System_Single_array *v30; // x8
  struct System_String_array *v31; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v33; // x8
  struct System_Boolean_array *v34; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v37; // x8
  __int64 v38; // x0

  v6 = this;
  if ( (byte_42E5969 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)actionData, inOverType, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_20008/*"in"*/, v13, v14, v15);
    this = (BattleInformationComponent_o *)sub_B5D5C4(&StringLiteral_18996/*"flash"*/, v16, v17, v18);
    byte_42E5969 = 1;
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
    v20 = v6->fields.overRoot;
    v21 = ((float (__fastcall *)(BattleInformationComponent_o *, void *))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data);
    GameObjectExtensions__SetLocalPositionY(v20, v21, 0LL);
  }
  overObjectList = v6->fields.overObjectList;
  if ( !overObjectList )
LABEL_78:
    sub_B5D69C(this, actionData);
  if ( overObjectList->max_length <= inOverType )
    goto LABEL_79;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v23 = v6->fields.overObjectList;
  if ( !v23 )
    goto LABEL_78;
  if ( v23->max_length <= inOverType )
    goto LABEL_79;
  this = (BattleInformationComponent_o *)v23->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v24 = v6->fields.overObjectList;
  if ( !v24 )
    goto LABEL_78;
  if ( v24->max_length <= inOverType )
  {
LABEL_79:
    v38 = sub_B5D6C8(this);
    sub_B5D668(v38, 0LL);
  }
  v25 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v24->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_78;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v25, 0, 0LL);
    v27 = (UnityEngine_Behaviour_o *)v25;
LABEL_33:
    UnityEngine_Behaviour__set_enabled(v27, 1, 0LL);
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
    v27 = (UnityEngine_Behaviour_o *)Component_srcLineSprite;
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
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_78;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_79;
      this = (BattleInformationComponent_o *)System_String__Concat_44577788(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20008/*"in"*/,
                                               0LL);
      if ( !v25 )
        goto LABEL_78;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_16676044(
                                               (SimpleAnimation_o *)v25,
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
        v33 = v6->fields.overLabel;
        if ( !v33 )
          goto LABEL_78;
        if ( v33->max_length <= inOverType )
          goto LABEL_79;
        this = (BattleInformationComponent_o *)System_String__Concat_44577788(
                                                 v33->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_20008/*"in"*/,
                                                 0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_78;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_51249124(
                                                 (UnityEngine_Animation_o *)Component_srcLineSprite,
                                                 (System_String_o *)this,
                                                 0LL);
      }
    }
    v34 = v6->fields.isAlreadyOverKill;
    if ( !v34 )
      goto LABEL_78;
    if ( v34->max_length > inOverType )
    {
      v34->m_Items[inOverType + 4] = 1;
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
  v29 = UnityEngine_Time__get_time(0LL);
  v30 = v6->fields.timeStartOverKill;
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
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v31 = v6->fields.overLabel;
      if ( !v31 )
        goto LABEL_78;
      if ( v31->max_length > inOverType )
      {
        this = (BattleInformationComponent_o *)System_String__Concat_44577788(
                                                 v31->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_18996/*"flash"*/,
                                                 0LL);
        if ( v25 )
        {
          SimpleAnimation__Play_16676044((SimpleAnimation_o *)v25, (System_String_o *)this, 0LL);
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
      v37 = v6->fields.overLabel;
      if ( !v37 )
        goto LABEL_78;
      if ( v37->max_length <= inOverType )
        goto LABEL_79;
      this = (BattleInformationComponent_o *)System_String__Concat_44577788(
                                               v37->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_18996/*"flash"*/,
                                               0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_78;
      UnityEngine_Animation__Play_51249124(
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
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x24
  WarEntity_o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w0
  const MethodInfo *v27; // x5
  __int64 v28; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E5964 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, isPlayer, (_DWORD)message, *(_QWORD *)&skillLevel);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E5964 = 1;
  }
  entity = 0LL;
  if ( !message || message->fields.m_stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
    v24 = (WarEntity_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                           skillInfo,
                           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           (int32_t)v24,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v24 = entity;
      if ( !entity )
        goto LABEL_38;
      v26 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0LL);
      skillInfo = (BattleSkillInfoData_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                             this,
                                             v26,
                                             message,
                                             isPlayer,
                                             skillLevel,
                                             v27);
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
    v28 = 128LL;
    if ( isPlayer )
      v28 = 120LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v28),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v24 = (WarEntity_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)v24 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)skillInfo,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = (WarEntity_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)v24 & 1) == 0 )
        goto LABEL_36;
      if ( Component_srcLineSprite )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_srcLineSprite,
            message,
            skillLevel,
            v31);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_srcLineSprite, message, v30);
LABEL_36:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_38:
    sub_B5D69C(v24, v25);
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void __fastcall BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  void *Instance; // x0
  __int64 v19; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v21; // x22
  bool isPlayerID; // w0
  __int64 v23; // x8
  UnityEngine_GameObject_o *v24; // x21
  BattleInfoMessageComponent_o *v25; // x23
  UnityEngine_Object_o *v26; // x24
  System_String_o *age; // x20
  System_String_o *OverrideTDName; // x0
  System_String_o *v29; // x19
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *v31; // x0
  bool v32; // w1

  if ( (byte_42E5966 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, (_DWORD)actionData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E5966 = 1;
  }
  if ( actionData )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v21 = Entity;
        Instance = this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
          v23 = 128LL;
          if ( isPlayerID )
            v23 = 120LL;
          Instance = BaseMonoBehaviour__createObject(
                       (BaseMonoBehaviour_o *)this,
                       *(UnityEngine_GameObject_o **)((char *)&this->klass + v23),
                       this->fields.skillInfoRoot,
                       0LL,
                       0LL);
          if ( Instance )
          {
            v24 = (UnityEngine_GameObject_o *)Instance;
            Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v25 = (BattleInfoMessageComponent_o *)Instance;
              v26 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 8);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
              {
                Instance = v25->fields.skillSprite;
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
                age = v21->fields.age;
                Instance = BattleData__getServantData((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0LL);
                  if ( OverrideTDName )
                    v29 = OverrideTDName;
                  else
                    v29 = age;
                  if ( System_String__IsNullOrEmpty(v29, 0LL) )
                  {
                    v31 = v24;
                    v32 = 0;
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v25, v29, v30);
                    v32 = 1;
                    v31 = v24;
                  }
                  UnityEngine_GameObject__SetActive(v31, v32, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B5D69C(Instance, v19);
  }
}


void __fastcall BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleInformationComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t TotalDamage; // w0
  int v19; // w19
  int perf; // w8
  BattleInformationComponent_o *v21; // x20
  __int64 v22; // x22
  UILabel_o *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  __int64 v26; // x0
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_42E595C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___,
      (_DWORD)actionData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_20486/*"line1"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_14687/*"Total {0:#,0}"*/, v12, v13, v14);
    this = (BattleInformationComponent_o *)sub_B5D5C4(&StringLiteral_20487/*"line2"*/, v15, v16, v17);
    byte_42E595C = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0LL);
  if ( TotalDamage >= 1 )
  {
    v19 = TotalDamage;
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v5,
                                             v5->fields.totalLabelPrefab,
                                             v5->fields.totalMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_20;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      perf = (int)this->fields.perf;
      v21 = this;
      if ( perf >= 1 )
      {
        v22 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v22 >= perf )
          {
            v26 = sub_B5D6C8(this);
            sub_B5D668(v26, 0LL);
          }
          v23 = (UILabel_o *)*((_QWORD *)&v21->fields.data + v22);
          if ( !v23 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v21->fields.data + v22),
                                                   0LL);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          if ( !this )
            break;
          if ( System_String__Equals_44565128((System_String_o *)this, (System_String_o *)StringLiteral_20486/*"line1"*/, 0LL) )
          {
            v27 = v19;
            v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
            v25 = System_String__Format((System_String_o *)StringLiteral_14687/*"Total {0:#,0}"*/, v24, 0LL);
            UILabel__set_text(v23, v25, 0LL);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v23,
                                                     0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_44565128(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_20487/*"line2"*/,
                                                     0LL);
          }
          perf = (int)v21->fields.perf;
          if ( (int)++v22 >= perf )
            return;
        }
LABEL_20:
        sub_B5D69C(this, actionData);
      }
    }
  }
}