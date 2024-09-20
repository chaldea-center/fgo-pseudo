void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5DF8A & 1) == 0 )
  {
    sub_1B885B0(&BattleInformationComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_9500/*"NobleLevel"*/);
    byte_4A5DF8A = 1;
  }
  BattleInformationComponent_TypeInfo->static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9500/*"NobleLevel"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleInformationComponent_TypeInfo->static_fields,
    StringLiteral_9500/*"NobleLevel"*/,
    v1,
    v2);
}


void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x20
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  struct UnityEngine_GameObject_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Boolean_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Single_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x20
  int v29; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x20
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3

  if ( (byte_4A5DF89 & 1) == 0 )
  {
    sub_1B885B0(&BaseBattleInfoPosData_TypeInfo);
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&float___TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3___TypeInfo);
    sub_1B885B0(&StringLiteral_25102/*"{0}th Attack"*/);
    sub_1B885B0(&StringLiteral_1492/*"3rd Attack"*/);
    sub_1B885B0(&StringLiteral_22367/*"overkill_"*/);
    sub_1B885B0(&StringLiteral_1412/*"1st Attack"*/);
    sub_1B885B0(&StringLiteral_1473/*"2nd Attack"*/);
    sub_1B885B0(&StringLiteral_22366/*"overgauge_"*/);
    byte_4A5DF89 = 1;
  }
  v3 = (Il2CppObject *)sub_1B887FC(BaseBattleInfoPosData_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.infoPosData = (struct BaseBattleInfoPosData_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.infoPosData, (int32_t)v3, v4, v5);
  v6 = sub_1B88658(string___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_18;
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v11 = StringLiteral_22367/*"overkill_"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_22367/*"overkill_"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), v11, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u) )
  {
LABEL_17:
    sub_1B88814(v6, v7);
  }
  v14 = StringLiteral_22366/*"overgauge_"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_22366/*"overgauge_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), v14, v12, v13);
  this->fields.overLabel = (struct System_String_array *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overLabel, v10, v15, v16);
  v17 = (struct UnityEngine_GameObject_array *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.overObjectList = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overObjectList, (int32_t)v17, v18, v19);
  v20 = (struct System_Boolean_array *)sub_1B88658(bool___TypeInfo, 2LL);
  this->fields.isAlreadyOverKill = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isAlreadyOverKill, (int32_t)v20, v21, v22);
  v23 = (struct System_Single_array *)sub_1B88658(float___TypeInfo, 2LL);
  this->fields.timeStartOverKill = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.timeStartOverKill, (int32_t)v23, v24, v25);
  v6 = sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
  v28 = v6;
  if ( !byte_4A55CE1 )
  {
    v6 = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v28 )
LABEL_18:
    sub_1B8880C(v6, v7);
  v29 = *(_DWORD *)(v28 + 24);
  if ( !v29 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v28 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v28 + 40) = z;
  if ( v29 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v28 + 52) = 0;
  *(_QWORD *)(v28 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.showPositions, v28, v26, v27);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.motionMessageObjList, (int32_t)v32, v33, v34);
  v6 = sub_1B88658(string___TypeInfo, 4LL);
  if ( !v6 )
    goto LABEL_18;
  v37 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_17;
  v38 = StringLiteral_1412/*"1st Attack"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_1412/*"1st Attack"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), v38, v35, v36);
  if ( *(_DWORD *)(v37 + 24) <= 1u )
    goto LABEL_17;
  v41 = StringLiteral_1473/*"2nd Attack"*/;
  *(_QWORD *)(v37 + 40) = StringLiteral_1473/*"2nd Attack"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 40), v41, v39, v40);
  if ( *(_DWORD *)(v37 + 24) <= 2u )
    goto LABEL_17;
  v44 = StringLiteral_1492/*"3rd Attack"*/;
  *(_QWORD *)(v37 + 48) = StringLiteral_1492/*"3rd Attack"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 48), v44, v42, v43);
  if ( *(_DWORD *)(v37 + 24) <= 3u )
    goto LABEL_17;
  v47 = StringLiteral_25102/*"{0}th Attack"*/;
  *(_QWORD *)(v37 + 56) = StringLiteral_25102/*"{0}th Attack"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 56), v47, v45, v46);
  this->fields.attackCount = (struct System_String_array *)v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.attackCount, v37, v48, v49);
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
  __int64 v9; // x22
  _QWORD *EffectAssetName; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  BattleInformationComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v20; // x4

  if ( (byte_4A5DF79 & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1B885B0(&string___TypeInfo);
    byte_4A5DF79 = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v9 = sub_1B88658(string___TypeInfo, 2LL);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v9 )
    sub_1B8880C(EffectAssetName, v11);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v9 + 32) = EffectAssetName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)EffectAssetName, v12, v13);
  EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v9 + 24) <= 1u )
LABEL_11:
    sub_1B88814(EffectAssetName, v11);
  v16 = *(_QWORD *)(EffectAssetName[23] + 40LL);
  *(_QWORD *)(v9 + 40) = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), v16, v14, v15);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v17,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v9,
                                                   v18);
  return BattleInformationComponent__CreateBattleMessageObject_43798408(
           TargetPrefab,
           messages,
           (UnityEngine_GameObject_o *)TargetPrefab,
           parentTransform,
           v20);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_43798408(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v8; // x22
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4A5DF7A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF7A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__49297800(
           (Il2CppObject *)msgPrefab,
           parentTransform,
           (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    if ( !v9 )
      goto LABEL_13;
    v8 = (UnityEngine_GameObject_o *)v9;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v9 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( Component_object )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_object,
          messages,
          v12);
        return v8;
      }
LABEL_13:
      sub_1B8880C(v9, v10);
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
  __int64 v9; // x1
  BattleInformationComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  BattleLogic_o *logic; // x0
  System_String_array *v13; // x20
  System_String_o *MessageObjectAssetName; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  BattleDataDefine_c *v17; // x8
  BattleLogic_o *v18; // x22
  struct System_String_o *ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v23; // x4
  UnityEngine_GameObject_o *v24; // x19

  if ( (byte_4A5DF78 & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5DF78 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v10 = (BattleInformationComponent_o *)sub_1B88658(string___TypeInfo, 0LL);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_15;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
    if ( !logic )
      goto LABEL_15;
    v10 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0LL);
  }
  v13 = (System_String_array *)v10;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v10, 0, v11);
  logic = (BattleLogic_o *)sub_1B88658(string___TypeInfo, 1LL);
  v17 = BattleDataDefine_TypeInfo;
  v18 = logic;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v17 = BattleDataDefine_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_15;
  if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
    sub_1B88814(logic, v9);
  ASSET_BATTLE_COMMON = v17->static_fields->ASSET_BATTLE_COMMON;
  v18->fields.fsm = (struct PlayMakerFSM_o *)ASSET_BATTLE_COMMON;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.fsm, (int32_t)ASSET_BATTLE_COMMON, v15, v16);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v20,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v18,
                                                   v21);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_43798408(
                             TargetPrefab,
                             v13,
                             (UnityEngine_GameObject_o *)TargetPrefab,
                             parentTransform,
                             v23);
  if ( !logic
    || (v24 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(logic, v9);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0LL);
  return v24;
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
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4A5DF7B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF7B = 1;
  }
  v9 = 136LL;
  if ( isPlayer )
    v9 = 128LL;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v9),
             this->fields.skillInfoRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_15;
  v12 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         Object,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_15;
  v14 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v13);
  if ( !showSkillSprite )
  {
    klass = (UnityEngine_Object_o *)v14[3].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      Object = (UnityEngine_GameObject_o *)v14[3].klass;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0LL);
          return v12;
        }
      }
LABEL_15:
      sub_1B8880C(Object, v11);
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
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *klass; // x21
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  v21 = skillLevel;
  if ( (byte_4A5DF7C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_2991/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_4A5DF7C = 1;
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
      goto LABEL_13;
    case 3:
      if ( skillLevel >= 1 && isPlayer )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2991/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
        v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0LL);
        message = System_String__Format_61721404(v14, (Il2CppObject *)message, v15, 0LL);
      }
      Object = BattleInformationComponent__CreateDefaultBattleMessageObject(
                 this,
                 message,
                 this->fields.skillInfoRoot,
                 2.0,
                 (const MethodInfo *)isPlayer);
LABEL_13:
      v11 = Object;
      break;
    default:
      break;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_29;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v11,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_29;
      klass = (UnityEngine_Object_o *)Component_object[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)Component_object[3].klass;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            return v11;
          }
        }
LABEL_29:
        sub_1B8880C(gameObject, v17);
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
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5DF87 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF87 = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillSkipRoot, 0LL, 0LL) )
  {
    infoPosData = (UnityEngine_GameObject_o *)this->fields.infoPosData;
    if ( !infoPosData )
      goto LABEL_14;
    v6 = this->fields.skillSkipRoot;
    v15.fields.x = ((float (__fastcall *)(UnityEngine_GameObject_o *, const char *))infoPosData->klass[1]._1.gc_desc)(
                     infoPosData,
                     infoPosData->klass[1]._1.name);
    GameObjectExtensions__SetLocalPosition(v6, v15, 0LL);
    BattleInformationComponent__DeleteSkillSkip(this, v7);
    infoPosData = this->fields.skillSkipRoot;
    if ( !infoPosData )
      goto LABEL_14;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform(infoPosData, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0LL, 0LL);
    this->fields.skillSkipObj = Object;
    p_skillSkipObj = &this->fields.skillSkipObj;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_skillSkipObj, (int32_t)Object, v12, v13);
    v14 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      infoPosData = *p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive(infoPosData, 1, 0LL);
        return;
      }
LABEL_14:
      sub_1B8880C(infoPosData, v4);
    }
  }
}


void __fastcall BattleInformationComponent__DeleteSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_skillSkipObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DF88 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF88 = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = (ServantStatusBattleListViewItem_o *)&this->fields.skillSkipObj;
  v4 = (UnityEngine_Object_o *)skillSkipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_skillSkipObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_skillSkipObj->klass = 0LL;
    sub_1B88554(p_skillSkipObj, 0, v7, v8);
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
  struct System_Collections_Generic_List_GameObject__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5DF81 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF81 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  commonMessageObject = (UnityEngine_Object_o *)this->fields.commonMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonMessageObject, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.commonMessageObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v5, 0LL);
  }
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)motionMessageObjList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v8 = this->fields.motionMessageObjList;
  if ( !v8 )
LABEL_19:
    sub_1B8880C(motionMessageObjList, v4);
  size = v8->fields._size;
  v10 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0LL);
}


System_String_o *__fastcall BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5DF77 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_17127/*"battle_message_{0}"*/);
    byte_4A5DF77 = 1;
  }
  v8 = messageType;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_17127/*"battle_message_{0}"*/, v6, 0LL);
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
  Il2CppObject *Object_object__48635516; // x21

  if ( (byte_4A5DF86 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF86 = 1;
  }
  if ( !assetNames )
    goto LABEL_18;
  v6 = *(_QWORD *)&assetNames->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1B88814(this, prefabName);
      v8 = assetNames->m_Items[v7];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v8, 0LL);
      if ( !this )
        break;
      Object_object__48635516 = AssetData__GetObject_object__48635516(
                                  (AssetData_o *)this,
                                  prefabName,
                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Object_object__48635516,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v6) = assetNames->max_length;
        if ( (__int64)++v7 < (int)v6 )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_object__48635516;
    }
LABEL_18:
    sub_1B8880C(this, prefabName);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v14; // x1
  UnityEngine_GameObject_o *overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v23; // x20
  struct UnityEngine_GameObject_array *v24; // x21
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Transform_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct UnityEngine_GameObject_array *v29; // x8
  struct System_Boolean_array *v30; // x8
  struct System_Single_array *v31; // x8
  Il2CppObject *Object_object__48635516; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8

  if ( (byte_4A5DF72 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_18845/*"ef_overgauge01"*/);
    sub_1B885B0(&StringLiteral_3209/*"Battle/Common"*/);
    sub_1B885B0(&StringLiteral_18852/*"ef_skillskip"*/);
    sub_1B885B0(&StringLiteral_18901/*"effect/ef_overkill01"*/);
    byte_4A5DF72 = 1;
  }
  this->fields.perf = inperf;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (int32_t)inlogic);
  this->fields.data = indata;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)indata, v9, v10);
  this->fields.logic = inlogic;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)inlogic, v11, v12);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0LL, 0LL) )
  {
    overRoot = this->fields.playerAttackInfoPrefab;
    if ( !overRoot )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(overRoot, 0, 0LL);
  }
  overRoot = this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform(overRoot, 0LL),
        overRoot = BaseMonoBehaviour__createObject_38240928(
                     (BaseMonoBehaviour_o *)this,
                     (System_String_o *)StringLiteral_18901/*"effect/ef_overkill01"*/,
                     transform,
                     0LL,
                     0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_38:
    sub_1B8880C(overRoot, v14);
  }
  if ( !overObjectList->max_length )
    goto LABEL_39;
  overObjectList->m_Items[0] = overRoot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overObjectList->m_Items, (int32_t)overRoot, v17, v18);
  v20 = this->fields.overObjectList;
  if ( !v20 )
    goto LABEL_38;
  if ( !v20->max_length )
    goto LABEL_39;
  overRoot = v20->m_Items[0];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0LL);
  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_38;
  if ( !isAlreadyOverKill->max_length )
    goto LABEL_39;
  isAlreadyOverKill->m_Items[4] = 0;
  timeStartOverKill = this->fields.timeStartOverKill;
  if ( !timeStartOverKill )
    goto LABEL_38;
  if ( !timeStartOverKill->max_length )
    goto LABEL_39;
  timeStartOverKill->m_Items[1] = 0.0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  overRoot = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3209/*"Battle/Common"*/, 0LL);
  if ( !overRoot )
    goto LABEL_38;
  v23 = (AssetData_o *)overRoot;
  overRoot = (UnityEngine_GameObject_o *)AssetData__GetObject_object__48635516(
                                           (AssetData_o *)overRoot,
                                           (System_String_o *)StringLiteral_18845/*"ef_overgauge01"*/,
                                           (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !this->fields.overRoot )
    goto LABEL_38;
  v24 = this->fields.overObjectList;
  v25 = overRoot;
  v26 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  overRoot = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v25, v26, 0LL, 0LL);
  if ( !v24 )
    goto LABEL_38;
  if ( v24->max_length <= 1 )
    goto LABEL_39;
  v24->m_Items[1] = overRoot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->m_Items[1], (int32_t)overRoot, v27, v28);
  v29 = this->fields.overObjectList;
  if ( !v29 )
    goto LABEL_38;
  if ( v29->max_length <= 1 )
    goto LABEL_39;
  overRoot = v29->m_Items[1];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0LL);
  v30 = this->fields.isAlreadyOverKill;
  if ( !v30 )
    goto LABEL_38;
  if ( v30->max_length <= 1 )
    goto LABEL_39;
  v30->m_Items[5] = 0;
  v31 = this->fields.timeStartOverKill;
  if ( !v31 )
    goto LABEL_38;
  if ( v31->max_length <= 1 )
LABEL_39:
    sub_1B88814(overRoot, v14);
  v31->m_Items[2] = 0.0;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              v23,
                              (System_String_o *)StringLiteral_18852/*"ef_skillskip"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)Object_object__48635516;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillSkipPrefab,
    (int32_t)Object_object__48635516,
    v33,
    v34);
  GameObjectExtensions__SafeSetParent_33730068(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL);
  if ( ((unsigned __int8)overRoot & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      overRoot = (UnityEngine_GameObject_o *)this->fields.fieldParam;
      if ( overRoot )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, struct BattleFieldEnvironmentData_o *, const char *))overRoot->klass[1]._1.gc_desc)(
          overRoot,
          data->fields._FieldEnvData_k__BackingField,
          overRoot->klass[1]._1.name);
        return;
      }
    }
    goto LABEL_38;
  }
}


void __fastcall BattleInformationComponent__InitializeEachWave(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  struct BaseBattleInfoPosData_o *BattleInfoPosData; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v7; // x1
  BattleFieldParamComponent_o *v8; // x0

  if ( (byte_4A5DF73 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF73 = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.infoPosData, (int32_t)BattleInfoPosData, v4, v5);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    v8 = this->fields.fieldParam;
    if ( !v8 )
      sub_1B8880C(0LL, v7);
    BattleFieldParamComponent__UpdateView(v8, v7);
  }
}


BaseBattleInfoPosData_o *__fastcall BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int v4; // w20
  __int64 v5; // x20
  __int64 v6; // x0
  __int128 v7; // q0
  __int64 v8; // d1

  if ( (byte_4A5DF74 & 1) == 0 )
  {
    sub_1B885B0(&NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    sub_1B885B0(&PosCountNormalBattleInfoPosData_TypeInfo);
    sub_1B885B0(&PosCountSpBattleInfoPosData_TypeInfo);
    byte_4A5DF74 = 1;
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
    v6 = sub_1B887FC(PosCountSpBattleInfoPosData_TypeInfo);
    v7 = xmmword_BB48F0;
    v8 = 1127153664LL;
    goto LABEL_13;
  }
  if ( v4 )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getStageEntity(data, 0LL);
      if ( data )
      {
        if ( StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0LL) )
          goto LABEL_10;
        v6 = sub_1B887FC(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
        v7 = xmmword_BB4D40;
        v8 = 1112801280LL;
LABEL_13:
        v5 = v6;
        *(_OWORD *)(v6 + 24) = v7;
        *(_QWORD *)(v6 + 40) = v8;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1B8880C(data, method);
  }
LABEL_10:
  v5 = sub_1B887FC(PosCountNormalBattleInfoPosData_TypeInfo);
  *(_DWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 24) = 0x43070000C3FA0000LL;
LABEL_14:
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  (*(void (__fastcall **)(__int64, struct BattlePerformance_o *, _QWORD))(*(_QWORD *)v5 + 408LL))(
    v5,
    this->fields.perf,
    *(_QWORD *)(*(_QWORD *)v5 + 416LL));
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
  UnityEngine_GameObject_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( !actionData || (v3 = this, (this = (BattleInformationComponent_o *)this->fields.data) == 0LL) )
    sub_1B8880C(this, actionData);
  isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
  v7 = BattleInformationComponent__showSkillName(
         v3,
         isPlayerID,
         actionData->fields.skillMessage,
         0,
         actionData->fields.skillInfo,
         v6);
  v3->fields.commonMessageObject = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.commonMessageObject, (int32_t)v7, v8, v9);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_GameObject_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A5DF85 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF85 = 1;
  }
  BattleInformationComponent__DestroyDisplayingMessage(this, (const MethodInfo *)messages);
  if ( !messages )
    goto LABEL_15;
  if ( *(_QWORD *)&messages->max_length )
  {
    BattleMessageObject = (UnityEngine_Object_o *)BattleInformationComponent__CreateBattleMessageObject(
                                                    (BattleInformationComponent_o *)motionMessageObjList,
                                                    messages,
                                                    messageType,
                                                    this->fields.skillInfoRoot,
                                                    v9);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          items = motionMessageObjList->fields._items;
          v14 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++motionMessageObjList->fields._version;
          if ( items )
          {
            size = motionMessageObjList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)motionMessageObjList,
                (Il2CppObject *)BattleMessageObject,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              motionMessageObjList->fields._size = size + 1;
              v16[4] = (Il2CppClass *)BattleMessageObject;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)BattleMessageObject, v11, v12);
            }
            return;
          }
        }
      }
LABEL_15:
      sub_1B8880C(motionMessageObjList, v8);
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
  GameObjectExtensions__SafeSetParent_33730068(this->fields.overRoot, fsOffsetRoot, 0LL);
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
  Il2CppObject *Component_object; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v11; // x0
  struct System_String_array *v12; // x8
  System_String_o *v13; // x0
  struct System_Boolean_array *v14; // x8

  v4 = this;
  if ( (byte_4A5DF83 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1B885B0(&StringLiteral_22348/*"out"*/);
    byte_4A5DF83 = 1;
  }
  isAlreadyOverKill = v4->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_30;
  if ( isAlreadyOverKill->max_length <= type )
    goto LABEL_31;
  if ( !isAlreadyOverKill->m_Items[type + 4] )
    return;
  overObjectList = v4->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_30;
  if ( overObjectList->max_length <= type )
    goto LABEL_31;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this )
    goto LABEL_30;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v7 = v4->fields.overObjectList;
  if ( !v7 )
    goto LABEL_30;
  if ( v7->max_length <= type )
    goto LABEL_31;
  v8 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v7->m_Items[type];
  if ( !this )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          goto LABEL_31;
        v11 = System_String__Concat_61707032(overLabel->m_Items[type], (System_String_o *)StringLiteral_22348/*"out"*/, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_63844704((SimpleAnimation_o *)v8, v11, 0LL);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1B8880C(this, *(_QWORD *)&type);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_26;
  if ( !Component_object )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
  v12 = v4->fields.overLabel;
  if ( !v12 )
    goto LABEL_30;
  if ( v12->max_length <= type )
    goto LABEL_31;
  v13 = System_String__Concat_61707032(v12->m_Items[type], (System_String_o *)StringLiteral_22348/*"out"*/, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_69204472(
                                           (UnityEngine_Animation_o *)Component_object,
                                           v13,
                                           0LL);
LABEL_26:
  v14 = v4->fields.isAlreadyOverKill;
  if ( !v14 )
    goto LABEL_30;
  if ( v14->max_length <= type )
LABEL_31:
    sub_1B88814(this, *(_QWORD *)&type);
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
    sub_1B8880C(this, *(_QWORD *)&type);
  }
  if ( showPositions->max_length <= zureIndex )
LABEL_9:
    sub_1B88814(this, *(_QWORD *)&type);
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
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  BattleInfoMessageComponent_o *v14; // x22
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v17; // x0
  BattleActionData_o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4A5DF7E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_18884/*"effect/ef_boostitem01"*/);
    byte_4A5DF7E = 1;
  }
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  v7 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_18884/*"effect/ef_boostitem01"*/, 0LL);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      if ( !Object
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_1B8880C(Component_object, v12);
      }
      v14 = (BattleInfoMessageComponent_o *)Component_object;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v13);
      BattleInfoMessageComponent__setItemSprite(v14, imageId, 0, v15);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  sub_1B88ACC(v7);
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
  BattleInformationComponent_o *v7; // x21
  BattleInfoMessageComponent_o *v8; // x22
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  __int64 v11; // x4
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  System_String_o *motionMessage; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t type; // w9
  int32_t skilllv; // w21
  const MethodInfo *v18; // x3
  struct BattleSkillInfoData_o *v19; // x8
  UnityEngine_GameObject_o *v20; // x0
  System_String_o *v21; // x24
  Il2CppObject *v22; // x0
  System_String_o **v23; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v27; // x3
  bool isPlayerID; // w0
  const MethodInfo *v29; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v31; // x4
  bool v32; // w1
  BattleInformationComponent_o *v33; // x0
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  bool v37; // w0
  int v38; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_4A5DF80 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3370/*"Buster!"*/);
    sub_1B885B0(&StringLiteral_10934/*"Quick!"*/);
    sub_1B885B0(&StringLiteral_2478/*"Arts!"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (BattleInformationComponent_o *)sub_1B885B0(&StringLiteral_6343/*"Extra!"*/);
    byte_4A5DF80 = 1;
  }
  if ( !v3 )
    goto LABEL_60;
  if ( v3->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyDisplayingMessage(v4, (const MethodInfo *)actionData);
  if ( BattleCommand__isShowCommandAction(v3->fields.type, 0LL) )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( !this )
      goto LABEL_60;
    if ( BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL) )
    {
      this = (BattleInformationComponent_o *)BattleCommand__getType(v3->fields.type, 0LL);
      if ( !v4->fields.data )
        goto LABEL_60;
      v6 = (int)this;
      this = (BattleInformationComponent_o *)BattleData__isPlayerID(v4->fields.data, v3->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_60;
      this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v4,
                                               v4->fields.playerAttackInfoPrefab,
                                               v4->fields.attackMessageRoot,
                                               0LL,
                                               0LL);
      if ( !this )
        goto LABEL_60;
      v7 = this;
      this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !v4->fields.data )
        goto LABEL_60;
      v8 = (BattleInfoMessageComponent_o *)this;
      this = (BattleInformationComponent_o *)BattleData__isPlayerID(v4->fields.data, v3->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_47:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 1, 0LL);
        goto LABEL_53;
      }
      actionIndex = v3->fields.actionIndex;
      attackCount = v4->fields.attackCount;
      if ( (int)actionIndex >= 3 )
      {
        if ( !attackCount )
          goto LABEL_60;
        if ( attackCount->max_length > 3 )
        {
          v21 = attackCount->m_Items[3];
          v38 = actionIndex + 1;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v9, v10, v11);
          this = (BattleInformationComponent_o *)System_String__Format(v21, v22, 0LL);
          actionData = (BattleActionData_o *)this;
          goto LABEL_34;
        }
      }
      else
      {
        if ( !attackCount )
          goto LABEL_60;
        if ( (unsigned int)actionIndex < attackCount->max_length )
        {
          actionData = (BattleActionData_o *)attackCount->m_Items[actionIndex];
LABEL_34:
          if ( (unsigned int)(v6 - 1) > 3 )
            v23 = (System_String_o **)&StringLiteral_1/*""*/;
          else
            v23 = (System_String_o **)*(&off_44AECF8 + v6 - 1);
          if ( v8 )
          {
            BattleInfoMessageComponent__setText_43792600(v8, (System_String_o *)actionData, *v23, v10);
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
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(BattleCommandCardObject, 0LL, 0LL) )
                  goto LABEL_47;
                this = (BattleInformationComponent_o *)v4->fields.data;
                if ( this )
                {
                  ServantData = BattleData__getServantData((BattleData_o *)this, v3->fields.targetId, 0LL);
                  BattleInfoMessageComponent__setCommandObject(
                    v8,
                    (UnityEngine_GameObject_o *)BattleCommandCardObject,
                    ServantData,
                    v27);
                  if ( BattleCommandCardObject )
                  {
                    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
                    if ( this )
                    {
                      BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0LL);
                      goto LABEL_47;
                    }
                  }
                }
              }
            }
          }
LABEL_60:
          sub_1B8880C(this, actionData);
        }
      }
      sub_1B88814(this, actionData);
    }
  }
  motionMessage = v3->fields.motionMessage;
  if ( !motionMessage )
  {
    v7 = 0LL;
    if ( BattleActionData__IsGimmick(v3, 0LL) )
      goto LABEL_53;
    this = (BattleInformationComponent_o *)BattleActionData__isSkill(v3, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      skillInfo = v3->fields.skillInfo;
      if ( !skillInfo )
        goto LABEL_60;
      type = skillInfo->fields.type;
      if ( type == 11 || type == 1 )
        skilllv = skillInfo->fields.skilllv;
      else
        skilllv = 0;
      this = (BattleInformationComponent_o *)v4->fields.data;
      if ( !this )
        goto LABEL_60;
      isPlayerID = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
      skillMessage = v3->fields.skillMessage;
      v31 = v3->fields.skillInfo;
      v32 = isPlayerID;
      v33 = v4;
      v34 = skilllv;
    }
    else
    {
      this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(v3, 0LL);
      v7 = 0LL;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_53;
      if ( v3->fields.noOperation )
        goto LABEL_19;
      v19 = v3->fields.skillInfo;
      if ( !v19 )
        goto LABEL_60;
      if ( v19->fields.itemImageId != -1 )
      {
        v20 = BattleInformationComponent__showBoostSkillName(v4, v3->fields.imageId, v3->fields.skillMessage, v18);
LABEL_52:
        v7 = (BattleInformationComponent_o *)v20;
        goto LABEL_53;
      }
      this = (BattleInformationComponent_o *)v4->fields.data;
      if ( !this )
        goto LABEL_60;
      v37 = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
      skillMessage = v3->fields.skillMessage;
      v31 = v3->fields.skillInfo;
      v32 = v37;
      v33 = v4;
      v34 = 0;
    }
    v20 = BattleInformationComponent__showSkillName(v33, v32, skillMessage, v34, v31, v29);
    goto LABEL_52;
  }
  BattleInformationComponent__showMotionMessage(
    v4,
    motionMessage,
    v3->fields.actorId,
    v3->fields._MessageType_k__BackingField,
    v5);
LABEL_19:
  v7 = 0LL;
LABEL_53:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    v4->fields.commonMessageObject = (struct UnityEngine_GameObject_o *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.commonMessageObject, (int32_t)v7, v35, v36);
  }
}


void __fastcall BattleInformationComponent__showCommonMessage_43805932(
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
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x8
  int32_t size; // w2
  int v12; // w9
  bool HasRubyFormat; // w24
  const MethodInfo *v14; // x3
  BattleInformationComponent_o *v15; // x23
  BattleInformationComponent_o *v16; // x21
  const MethodInfo *v17; // x2
  bool isPlayerID; // w0
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8
  BattleEffectUtility_c *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x20
  AssetData_o *v29; // x20
  Il2CppObject *Object_object__48635516; // x20
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4A5DF84 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17138/*"battle_states_popup"*/);
    this = (BattleInformationComponent_o *)sub_1B885B0(&StringLiteral_3214/*"Battle/Effect/"*/);
    byte_4A5DF84 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !motionMessage )
    goto LABEL_47;
  if ( motionMessage->fields._stringLength < 1 )
    return;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_47;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = v8->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_47;
  size = motionMessageObjList->fields._size;
  v12 = motionMessageObjList->fields._version + 1;
  motionMessageObjList->fields._size = 0;
  motionMessageObjList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)motionMessageObjList->fields._items, 0, size, 0LL);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, 0x3Au, 0, 0LL);
  if ( HasRubyFormat )
    goto LABEL_17;
  v15 = this;
  if ( !this )
    goto LABEL_47;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 2 )
  {
LABEL_17:
    if ( messageType == 2 )
    {
      this = (BattleInformationComponent_o *)v8->fields.data;
      if ( !this )
        goto LABEL_47;
      isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actorId, 0LL);
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultSkillMessageObject(
                                               v8,
                                               isPlayerID,
                                               motionMessage,
                                               0,
                                               v19);
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
          v16 = this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v17);
LABEL_26:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
            goto LABEL_27;
          }
        }
LABEL_47:
        sub_1B8880C(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v14);
    }
    v16 = this;
    if ( !this )
      goto LABEL_47;
    goto LABEL_26;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_47;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0LL);
  v26 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v26 = BattleEffectUtility_TypeInfo;
  }
  v27 = System_Int32__ToString((unsigned int)v26->static_fields + 24, 0LL);
  v28 = System_String__Concat_61707032((System_String_o *)StringLiteral_3214/*"Battle/Effect/"*/, v27, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v28, 0LL);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_48:
    sub_1B88814(this, motionMessage);
  v29 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_61707032(
                                           (System_String_o *)StringLiteral_17138/*"battle_states_popup"*/,
                                           (System_String_o *)v15->fields.perf,
                                           0LL);
  if ( !v29 )
    goto LABEL_47;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              v29,
                              (System_String_o *)this,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             (UnityEngine_GameObject_o *)Object_object__48635516,
                                             v8->fields.commonMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_47;
    v16 = this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
    {
      if ( !this )
        goto LABEL_47;
      EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v15->fields.data, 0LL);
      goto LABEL_26;
    }
    goto LABEL_48;
  }
LABEL_27:
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_47;
  v22 = *(_QWORD *)&this->fields.m_CachedPtr;
  v23 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v22 )
    goto LABEL_47;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v16,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = v22 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v25 + 32) = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v16, v20, v21);
  }
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
  Il2CppObject *Entity; // x0
  Il2CppObject *v15; // x26
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *v19; // x0
  Il2CppObject *v20; // x28
  UnityEngine_Transform_o *v21; // x0
  Il2CppObject *v22; // x27
  UnityEngine_Transform_o *v23; // x0
  Il2CppObject *v24; // x24
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x25
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *monitor; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v31; // x1
  System_String_o *v32; // x1
  System_String_o *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  int v38; // w8
  Il2CppObject *v39; // x20
  Il2CppObject *v40; // x19
  BattleInformationComponent_c *v41; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v43; // x0
  BattleInformationComponent_c *v44; // x0
  System_String_o *v45; // x20
  System_String_o *v46; // x0
  int v47; // [xsp+Ch] [xbp-64h] BYREF
  int v48; // [xsp+18h] [xbp-58h] BYREF
  int32_t v49; // [xsp+1Ch] [xbp-54h] BYREF

  v49 = treasureDeviceLevel;
  if ( (byte_4A5DF76 & 1) == 0 )
  {
    sub_1B885B0(&BattleInformationComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9247/*"NOBLEINFO_NP_PER"*/);
    sub_1B885B0(&StringLiteral_22983/*"rubyLabel"*/);
    sub_1B885B0(&StringLiteral_10600/*"PerLabel"*/);
    sub_1B885B0(&StringLiteral_8384/*"LevelLabel"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_9575/*"NpLevelBase"*/);
    sub_1B885B0(&StringLiteral_21254/*"mainLabel"*/);
    byte_4A5DF76 = 1;
  }
  v48 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
      goto LABEL_52;
    v16 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_21254/*"mainLabel"*/,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v19 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v19, (System_String_o *)StringLiteral_22983/*"rubyLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v20 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v21 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v21, (System_String_o *)StringLiteral_8384/*"LevelLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v22 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v23 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v23, (System_String_o *)StringLiteral_10600/*"PerLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v24 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v25 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v25, (System_String_o *)StringLiteral_9575/*"NpLevelBase"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v20 )
      goto LABEL_52;
    v26 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v20, (System_String_o *)v15[2].klass, 0LL);
    monitor = (System_String_o *)v15[1].monitor;
    if ( overrideTd )
    {
      max_length = overrideTd->max_length;
      if ( !max_length )
        goto LABEL_53;
      if ( overrideTd->m_Items[0] )
        monitor = overrideTd->m_Items[0];
      if ( max_length == 1 )
LABEL_53:
        sub_1B88814(v27, v28);
      v31 = overrideTd->m_Items[1];
      if ( v31 )
        UILabel__set_text((UILabel_o *)v20, v31, 0LL);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(monitor, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v16, 0LL);
      if ( !Instance )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( !Component_object )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)Component_object, monitor, 0LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v49, 0LL);
    if ( !v22 )
      goto LABEL_52;
    if ( Instance )
      v32 = (System_String_o *)Instance;
    else
      v32 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v22, v32, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9247/*"NOBLEINFO_NP_PER"*/, 0LL);
    v47 = 100 * (treasureDevicePer / 100);
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v34, v35, v36);
    Instance = (DataManager_o *)System_String__Format(v33, v37, 0LL);
    if ( !v24 || (UILabel__set_text((UILabel_o *)v24, (System_String_o *)Instance, 0LL), !v26) )
LABEL_52:
      sub_1B8880C(Instance, v13);
    UnityEngine_GameObject__SetActive(v26, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v38 = 5;
    else
      v38 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v38 = 1;
    v48 = v38;
    v39 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v40 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
    {
      v41 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v41 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v41->static_fields->NobleInfoAnimPrefix;
      v43 = System_Int32__ToString((int32_t)&v48, 0LL);
      Instance = (DataManager_o *)System_String__Concat_61707032(NobleInfoAnimPrefix, v43, 0LL);
      if ( v39 )
      {
        SimpleAnimation__Play_63844704((SimpleAnimation_o *)v39, (System_String_o *)Instance, 0LL);
        return;
      }
      goto LABEL_52;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
    {
      v44 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v44 = BattleInformationComponent_TypeInfo;
      }
      v45 = v44->static_fields->NobleInfoAnimPrefix;
      v46 = System_Int32__ToString((int32_t)&v48, 0LL);
      Instance = (DataManager_o *)System_String__Concat_61707032(v45, v46, 0LL);
      if ( !v40 )
        goto LABEL_52;
      UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v40, (System_String_o *)Instance, 0LL);
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
    sub_1B8880C(this, actionData);
  if ( !isAlreadyOverKill->max_length )
    sub_1B88814(this, actionData);
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
    sub_1B8880C(this, actionData);
  if ( isAlreadyOverKill->max_length <= 1 )
    sub_1B88814(this, actionData);
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
  Il2CppObject *Component_object; // x21
  UnityEngine_Behaviour_o *v15; // x23
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

  v6 = this;
  if ( (byte_4A5DF82 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20602/*"in"*/);
    this = (BattleInformationComponent_o *)sub_1B885B0(&StringLiteral_19459/*"flash"*/);
    byte_4A5DF82 = 1;
  }
  if ( !actionData )
    goto LABEL_70;
  this = (BattleInformationComponent_o *)v6->fields.data;
  if ( !this )
    goto LABEL_70;
  if ( !BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL) )
    return;
  overRoot = (UnityEngine_Object_o *)v6->fields.overRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(overRoot, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_70;
    v8 = v6->fields.overRoot;
    v9 = ((float (__fastcall *)(BattleInformationComponent_o *, void *))this->klass[1]._1.namespaze)(
           this,
           this->klass[1]._1.byval_arg.data);
    GameObjectExtensions__SetLocalPositionY(v8, v9, 0LL);
  }
  overObjectList = v6->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_70;
  if ( overObjectList->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[inOverType];
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v11 = v6->fields.overObjectList;
  if ( !v11 )
    goto LABEL_70;
  if ( v11->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)v11->m_Items[inOverType];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (v12 = v6->fields.overObjectList) == 0LL) )
  {
LABEL_70:
    sub_1B8880C(this, actionData);
  }
  if ( v12->max_length <= inOverType )
    goto LABEL_71;
  v13 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v12->m_Items[inOverType];
  if ( !this )
    goto LABEL_70;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = (UnityEngine_Behaviour_o *)v13;
    if ( !v13 )
      goto LABEL_70;
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      goto LABEL_70;
LABEL_29:
    UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
    UnityEngine_Behaviour__set_enabled(v15, 1, 0LL);
  }
  isAlreadyOverKill = v6->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_70;
  if ( isAlreadyOverKill->max_length <= inOverType )
    goto LABEL_71;
  if ( !isAlreadyOverKill->m_Items[inOverType + 4] )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_70;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_71;
      this = (BattleInformationComponent_o *)System_String__Concat_61707032(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20602/*"in"*/,
                                               0LL);
      if ( !v13 )
        goto LABEL_70;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_63844704(
                                               (SimpleAnimation_o *)v13,
                                               (System_String_o *)this,
                                               0LL);
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v21 = v6->fields.overLabel;
        if ( !v21 )
          goto LABEL_70;
        if ( v21->max_length <= inOverType )
          goto LABEL_71;
        this = (BattleInformationComponent_o *)System_String__Concat_61707032(
                                                 v21->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_20602/*"in"*/,
                                                 0LL);
        if ( !Component_object )
          goto LABEL_70;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_69204472(
                                                 (UnityEngine_Animation_o *)Component_object,
                                                 (System_String_o *)this,
                                                 0LL);
      }
    }
    v22 = v6->fields.isAlreadyOverKill;
    if ( !v22 )
      goto LABEL_70;
    if ( v22->max_length > inOverType )
    {
      v22->m_Items[inOverType + 4] = 1;
      timeStartOverKill = v6->fields.timeStartOverKill;
      time = UnityEngine_Time__get_time(0LL);
      if ( !timeStartOverKill )
        goto LABEL_70;
      if ( timeStartOverKill->max_length > inOverType )
      {
        timeStartOverKill->m_Items[inOverType + 1] = time;
        return;
      }
    }
LABEL_71:
    sub_1B88814(this, actionData);
  }
  v17 = UnityEngine_Time__get_time(0LL);
  v18 = v6->fields.timeStartOverKill;
  if ( !v18 )
    goto LABEL_70;
  if ( v18->max_length <= inOverType )
    goto LABEL_71;
  if ( (float)(v17 - v18->m_Items[inOverType + 1]) <= 0.2 )
    return;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = v6->fields.overLabel;
    if ( !v19 )
      goto LABEL_70;
    if ( v19->max_length > inOverType )
    {
      this = (BattleInformationComponent_o *)System_String__Concat_61707032(
                                               v19->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19459/*"flash"*/,
                                               0LL);
      if ( !v13 )
        goto LABEL_70;
      SimpleAnimation__Play_63844704((SimpleAnimation_o *)v13, (System_String_o *)this, 0LL);
      return;
    }
    goto LABEL_71;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v25 = v6->fields.overLabel;
  if ( !v25 )
    goto LABEL_70;
  if ( v25->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)System_String__Concat_61707032(
                                           v25->m_Items[inOverType],
                                           (System_String_o *)StringLiteral_19459/*"flash"*/,
                                           0LL);
  if ( !Component_object )
    goto LABEL_70;
  UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)Component_object, (System_String_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showSkillName(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        int32_t skillLevel,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x24
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w0
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  Il2CppObject *Component_object; // x22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5DF7D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF7D = 1;
  }
  entity = 0LL;
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
    v12 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                            skillInfo,
                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_object )
      goto LABEL_34;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           (int32_t)v12,
           (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v12 = entity;
      if ( !entity )
        goto LABEL_34;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL) )
  {
    v16 = 136LL;
    if ( isPlayer )
      v16 = 128LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v16),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)skillInfo,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) == 0 )
        goto LABEL_32;
      if ( Component_object )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_object,
            message,
            skillLevel,
            v19);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v18);
LABEL_32:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_34:
    sub_1B8880C(v12, v13);
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void __fastcall BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v8; // x22
  bool isPlayerID; // w0
  __int64 v10; // x8
  DataManager_o *v11; // x21
  BattleInfoMessageComponent_o *v12; // x23
  UnityEngine_Object_o *saveDataMapList; // x24
  System_String_o *monitor; // x20
  System_String_o *OverrideTDName; // x0
  System_String_o *v16; // x19
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x0
  bool v19; // w1

  if ( (byte_4A5DF7F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DF7F = 1;
  }
  if ( actionData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v8 = Entity;
        Instance = (DataManager_o *)this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
          v10 = 136LL;
          if ( isPlayerID )
            v10 = 128LL;
          Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        *(UnityEngine_GameObject_o **)((char *)&this->klass + v10),
                                        this->fields.skillInfoRoot,
                                        0LL,
                                        0LL);
          if ( Instance )
          {
            v11 = Instance;
            Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v12 = (BattleInfoMessageComponent_o *)Instance;
              saveDataMapList = (UnityEngine_Object_o *)Instance->fields.saveDataMapList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(saveDataMapList, 0LL, 0LL) )
              {
                Instance = (DataManager_o *)v12->fields.skillSprite;
                if ( !Instance )
                  goto LABEL_28;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0LL);
                if ( !Instance )
                  goto LABEL_28;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              }
              Instance = (DataManager_o *)this->fields.data;
              if ( Instance )
              {
                monitor = (System_String_o *)v8[1].monitor;
                Instance = (DataManager_o *)BattleData__getServantData(
                                              (BattleData_o *)Instance,
                                              actionData->fields.actorId,
                                              0LL);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0LL);
                  if ( OverrideTDName )
                    v16 = OverrideTDName;
                  else
                    v16 = monitor;
                  if ( System_String__IsNullOrEmpty(v16, 0LL) )
                  {
                    v18 = (UnityEngine_GameObject_o *)v11;
                    v19 = 0;
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v12, v16, v17);
                    v19 = 1;
                    v18 = (UnityEngine_GameObject_o *)v11;
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
LABEL_28:
    sub_1B8880C(Instance, v6);
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
  int m_CancellationTokenSource; // w8
  BattleInformationComponent_o *v8; // x20
  __int64 v9; // x22
  UILabel_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int v16; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4A5DF75 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_21111/*"line1"*/);
    sub_1B885B0(&StringLiteral_14538/*"Total {0:#,0}"*/);
    this = (BattleInformationComponent_o *)sub_1B885B0(&StringLiteral_21112/*"line2"*/);
    byte_4A5DF75 = 1;
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
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v8 = this;
      if ( m_CancellationTokenSource >= 1 )
      {
        v9 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= m_CancellationTokenSource )
            sub_1B88814(this, actionData);
          v10 = (UILabel_o *)*((_QWORD *)&v8->fields.perf + v9);
          if ( !v10 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v8->fields.perf + v9),
                                                   0LL);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          if ( !this )
            break;
          if ( System_String__Equals_61715348((System_String_o *)this, (System_String_o *)StringLiteral_21111/*"line1"*/, 0LL) )
          {
            v16 = v6;
            v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11, v12, v13);
            v15 = System_String__Format((System_String_o *)StringLiteral_14538/*"Total {0:#,0}"*/, v14, 0LL);
            UILabel__set_text(v10, v15, 0LL);
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
            this = (BattleInformationComponent_o *)System_String__Equals_61715348(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_21112/*"line2"*/,
                                                     0LL);
          }
          m_CancellationTokenSource = (int)v8->fields.m_CancellationTokenSource;
          if ( (int)++v9 >= m_CancellationTokenSource )
            return;
        }
LABEL_20:
        sub_1B8880C(this, actionData);
      }
    }
  }
}