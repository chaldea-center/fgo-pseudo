void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B190AD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleInformationComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_9632/*"NobleLevel"*/, v8, v9);
    byte_4B190AD = 1;
  }
  BattleInformationComponent_TypeInfo->static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9632/*"NobleLevel"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleInformationComponent_TypeInfo->static_fields,
    StringLiteral_9632/*"NobleLevel"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x20
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct UnityEngine_GameObject_array *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Boolean_array *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Single_array *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x20
  int v89; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Collections_Generic_List_object__o *v95; // x20
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x20
  int64_t v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int64_t v123; // x1
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x1
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7

  if ( (byte_4B190AC & 1) == 0 )
  {
    sub_1BCA7E0(&BaseBattleInfoPosData_TypeInfo, method, v2);
    sub_1BCA7E0(&bool___TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12);
    sub_1BCA7E0(&float___TypeInfo, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_25357/*"{0}th Attack"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1488/*"3rd Attack"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22607/*"overkill_"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1408/*"1st Attack"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1469/*"2nd Attack"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22606/*"overgauge_"*/, v29, v30);
    byte_4B190AC = 1;
  }
  v31 = (Il2CppObject *)sub_1BCAA2C(BaseBattleInfoPosData_TypeInfo, method, v2, v3);
  System_Object___ctor(v31, 0LL);
  this->fields.infoPosData = (struct BaseBattleInfoPosData_o *)v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.infoPosData, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v38 )
    goto LABEL_18;
  v46 = v38;
  if ( !*(_DWORD *)(v38 + 24)
    || (v47 = StringLiteral_22607/*"overkill_"*/,
        *(_QWORD *)(v38 + 32) = StringLiteral_22607/*"overkill_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), v47, v40, v41, v42, v43, v44, v45),
        *(_DWORD *)(v46 + 24) <= 1u) )
  {
LABEL_17:
    sub_1BCAA44(v38, v39);
  }
  v54 = StringLiteral_22606/*"overgauge_"*/;
  *(_QWORD *)(v46 + 40) = StringLiteral_22606/*"overgauge_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 40), v54, v48, v49, v50, v51, v52, v53);
  this->fields.overLabel = (struct System_String_array *)v46;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overLabel, v46, v55, v56, v57, v58, v59, v60);
  v61 = (struct UnityEngine_GameObject_array *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.overObjectList = v61;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overObjectList, (int64_t)v61, v62, v63, v64, v65, v66, v67);
  v68 = (struct System_Boolean_array *)sub_1BCA888(bool___TypeInfo, 2LL);
  this->fields.isAlreadyOverKill = v68;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.isAlreadyOverKill, (int64_t)v68, v69, v70, v71, v72, v73, v74);
  v75 = (struct System_Single_array *)sub_1BCA888(float___TypeInfo, 2LL);
  this->fields.timeStartOverKill = v75;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.timeStartOverKill, (int64_t)v75, v76, v77, v78, v79, v80, v81);
  v38 = sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
  v88 = v38;
  if ( !byte_4B109C1 )
  {
    v38 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v39, v82);
    byte_4B109C1 = 1;
  }
  if ( !v88 )
LABEL_18:
    sub_1BCAA3C(v38, v39);
  v89 = *(_DWORD *)(v88 + 24);
  if ( !v89 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v88 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v88 + 40) = z;
  if ( v89 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v88 + 52) = 0;
  *(_QWORD *)(v88 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v88;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.showPositions, v88, v82, v83, v84, v85, v86, v87);
  v95 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v92,
                                                       v93,
                                                       v94);
  System_Collections_Generic_List_object____ctor(
    v95,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v95;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.motionMessageObjList,
    (int64_t)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v38 = sub_1BCA888(string___TypeInfo, 4LL);
  if ( !v38 )
    goto LABEL_18;
  v108 = v38;
  if ( !*(_DWORD *)(v38 + 24) )
    goto LABEL_17;
  v109 = StringLiteral_1408/*"1st Attack"*/;
  *(_QWORD *)(v38 + 32) = StringLiteral_1408/*"1st Attack"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), v109, v102, v103, v104, v105, v106, v107);
  if ( *(_DWORD *)(v108 + 24) <= 1u )
    goto LABEL_17;
  v116 = StringLiteral_1469/*"2nd Attack"*/;
  *(_QWORD *)(v108 + 40) = StringLiteral_1469/*"2nd Attack"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 40), v116, v110, v111, v112, v113, v114, v115);
  if ( *(_DWORD *)(v108 + 24) <= 2u )
    goto LABEL_17;
  v123 = StringLiteral_1488/*"3rd Attack"*/;
  *(_QWORD *)(v108 + 48) = StringLiteral_1488/*"3rd Attack"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 48), v123, v117, v118, v119, v120, v121, v122);
  if ( *(_DWORD *)(v108 + 24) <= 3u )
    goto LABEL_17;
  v130 = StringLiteral_25357/*"{0}th Attack"*/;
  *(_QWORD *)(v108 + 56) = StringLiteral_25357/*"{0}th Attack"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 56), v130, v124, v125, v126, v127, v128, v129);
  this->fields.attackCount = (struct System_String_array *)v108;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.attackCount, v108, v131, v132, v133, v134, v135, v136);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *MessageObjectAssetName; // x21
  __int64 v13; // x1
  __int64 v14; // x22
  _QWORD *EffectAssetName; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  BattleInformationComponent_o *v30; // x0
  const MethodInfo *v31; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v33; // x4

  if ( (byte_4B1909C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, messages, *(_QWORD *)&messageType);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v8, v9);
    this = (BattleInformationComponent_o *)sub_1BCA7E0(&string___TypeInfo, v10, v11);
    byte_4B1909C = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v14 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v13);
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v14 )
    sub_1BCAA3C(EffectAssetName, v16);
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v14 + 32) = EffectAssetName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)EffectAssetName, v17, v18, v19, v20, v21, v22);
  EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v16);
    EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v14 + 24) <= 1u )
LABEL_11:
    sub_1BCAA44(EffectAssetName, v16);
  v29 = *(_QWORD *)(EffectAssetName[23] + 40LL);
  *(_QWORD *)(v14 + 40) = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 40), v29, v23, v24, v25, v26, v27, v28);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v30,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v14,
                                                   v31);
  return BattleInformationComponent__CreateBattleMessageObject_44583804(
           TargetPrefab,
           messages,
           (UnityEngine_GameObject_o *)TargetPrefab,
           parentTransform,
           v33);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_44583804(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x22
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4B1909D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___, messages, msgPrefab);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1909D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, messages);
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    v14 = UnityEngine_Object__Instantiate_object__49903816(
            (Il2CppObject *)msgPrefab,
            parentTransform,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    if ( !v14 )
      goto LABEL_13;
    v13 = (UnityEngine_GameObject_o *)v14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v14,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v14 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)v14 & 1) != 0 )
    {
      if ( Component_object )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_object,
          messages,
          v17);
        return v13;
      }
LABEL_13:
      sub_1BCAA3C(v14, v15);
    }
  }
  return v13;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_o *message,
        UnityEngine_Transform_o *parentTransform,
        float lifeTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  BattleInformationComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  BattleLogic_o *logic; // x0
  System_String_array *v17; // x20
  System_String_o *MessageObjectAssetName; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleDataDefine_c *v25; // x8
  BattleLogic_o *v26; // x22
  int64_t ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v31; // x4
  UnityEngine_GameObject_o *v32; // x19

  if ( (byte_4B1909B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, message, parentTransform);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___, v9, v10);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    byte_4B1909B = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v14 = (BattleInformationComponent_o *)sub_1BCA888(string___TypeInfo, 0LL);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_15;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
    if ( !logic )
      goto LABEL_15;
    v14 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0LL);
  }
  v17 = (System_String_array *)v14;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v14, 0, v15);
  logic = (BattleLogic_o *)sub_1BCA888(string___TypeInfo, 1LL);
  v25 = BattleDataDefine_TypeInfo;
  v26 = logic;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v13);
    v25 = BattleDataDefine_TypeInfo;
  }
  if ( !v26 )
    goto LABEL_15;
  if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
    sub_1BCAA44(logic, v13);
  ASSET_BATTLE_COMMON = (int64_t)v25->static_fields->ASSET_BATTLE_COMMON;
  v26->fields.fsm = (struct PlayMakerFSM_o *)ASSET_BATTLE_COMMON;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.fsm, ASSET_BATTLE_COMMON, v19, v20, v21, v22, v23, v24);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v28,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v26,
                                                   v29);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_44583804(
                             TargetPrefab,
                             v17,
                             (UnityEngine_GameObject_o *)TargetPrefab,
                             parentTransform,
                             v31);
  if ( !logic
    || (v32 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(logic, v13);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0LL);
  return v32;
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
  __int64 v10; // x2
  __int64 v11; // x8
  UnityEngine_GameObject_o *Object; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x19
  const MethodInfo *v15; // x2
  UnityEngine_GameObject_o *v16; // x22
  __int64 v17; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4B1909E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, isPlayer, message);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1909E = 1;
  }
  v11 = 136LL;
  if ( isPlayer )
    v11 = 128LL;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v11),
             this->fields.skillInfoRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_15;
  v14 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         Object,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_15;
  v16 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v15);
  if ( !showSkillSprite )
  {
    klass = (UnityEngine_Object_o *)v16[3].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      Object = (UnityEngine_GameObject_o *)v16[3].klass;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0LL);
          return v14;
        }
      }
LABEL_15:
      sub_1BCAA3C(Object, v13);
    }
  }
  return v14;
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *v17; // x19
  UnityEngine_GameObject_o *skillInfoPrefab; // x1
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v20; // x19
  Il2CppObject *v21; // x0
  UnityEngine_Component_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *klass; // x21
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  v8 = (Il2CppObject *)message;
  v28 = skillLevel;
  if ( (byte_4B1909F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___,
      *(_QWORD *)&overWriteSkillInfoId,
      message);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3012/*"BATTLE_SKILL_NAME_LEVEL"*/, v15, v16);
    byte_4B1909F = 1;
  }
  v17 = 0LL;
  switch ( overWriteSkillInfoId )
  {
    case 0:
      return v17;
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&overWriteSkillInfoId);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3012/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
        v21 = (Il2CppObject *)System_Int32__ToString((int32_t)&v28, 0LL);
        v8 = (Il2CppObject *)System_String__Format_62415592(v20, v8, v21, 0LL);
      }
      Object = BattleInformationComponent__CreateDefaultBattleMessageObject(
                 this,
                 (System_String_o *)v8,
                 this->fields.skillInfoRoot,
                 2.0,
                 (const MethodInfo *)isPlayer);
LABEL_13:
      v17 = Object;
      break;
    default:
      break;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&overWriteSkillInfoId);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_29;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v17,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_29;
      klass = (UnityEngine_Object_o *)Component_object[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)Component_object[3].klass;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            return v17;
          }
        }
LABEL_29:
        sub_1BCAA3C(gameObject, v23);
      }
    }
  }
  return v17;
}


void __fastcall BattleInformationComponent__CreateSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *skillSkipRoot; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *infoPosData; // x0
  UnityEngine_GameObject_o *v7; // x20
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *skillSkipPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B190AA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B190AA = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(skillSkipRoot, 0LL, 0LL) )
  {
    infoPosData = (UnityEngine_GameObject_o *)this->fields.infoPosData;
    if ( !infoPosData )
      goto LABEL_14;
    v7 = this->fields.skillSkipRoot;
    v21.fields.x = ((float (__fastcall *)(UnityEngine_GameObject_o *, const char *))infoPosData->klass[1]._1.gc_desc)(
                     infoPosData,
                     infoPosData->klass[1]._1.name);
    GameObjectExtensions__SetLocalPosition(v7, v21, 0LL);
    BattleInformationComponent__DeleteSkillSkip(this, v8);
    infoPosData = this->fields.skillSkipRoot;
    if ( !infoPosData )
      goto LABEL_14;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform(infoPosData, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0LL, 0LL);
    this->fields.skillSkipObj = Object;
    p_skillSkipObj = &this->fields.skillSkipObj;
    sub_1BCA784((PartyOrganizationUtility_o *)p_skillSkipObj, (int64_t)Object, v13, v14, v15, v16, v17, v18);
    v20 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      infoPosData = *p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive(infoPosData, 1, 0LL);
        return;
      }
LABEL_14:
      sub_1BCAA3C(infoPosData, v5);
    }
  }
}


void __fastcall BattleInformationComponent__DeleteSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_skillSkipObj; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B190AB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B190AB = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = (PartyOrganizationUtility_o *)&this->fields.skillSkipObj;
  v5 = (UnityEngine_Object_o *)skillSkipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_skillSkipObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_skillSkipObj->klass = 0LL;
    sub_1BCA784(p_skillSkipObj, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall BattleInformationComponent__DestroyDisplayingMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *commonMessageObject; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v20; // x8
  int32_t size; // w2
  int v22; // w9
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B190A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B190A4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  commonMessageObject = (UnityEngine_Object_o *)this->fields.commonMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(commonMessageObject, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Object_o *)this->fields.commonMessageObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_70154244(v16, 0LL);
  }
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)motionMessageObjList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v20 = this->fields.motionMessageObjList;
  if ( !v20 )
LABEL_19:
    sub_1BCAA3C(motionMessageObjList, v15);
  size = v20->fields._size;
  v22 = v20->fields._version + 1;
  v20->fields._size = 0;
  v20->fields._version = v22;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v20->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1909A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&messageType, method);
    sub_1BCA7E0(&StringLiteral_17299/*"battle_message_{0}"*/, v4, v5);
    byte_4B1909A = 1;
  }
  v8 = messageType;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_17299/*"battle_message_{0}"*/, v6, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__GetTargetPrefab(
        BattleInformationComponent_o *this,
        System_String_o *prefabName,
        System_String_array *assetNames,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  System_String_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Object_object__49237568; // x21

  if ( (byte_4B190A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, prefabName, assetNames);
    sub_1BCA7E0(&AssetManager_TypeInfo, v6, v7);
    this = (BattleInformationComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B190A9 = 1;
  }
  if ( !assetNames )
    goto LABEL_18;
  v10 = *(_QWORD *)&assetNames->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1BCAA44(this, prefabName);
      v12 = assetNames->m_Items[v11];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, prefabName);
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v12, 0LL);
      if ( !this )
        break;
      Object_object__49237568 = AssetData__GetObject_object__49237568(
                                  (AssetData_o *)this,
                                  prefabName,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Object_object__49237568,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v10) = assetNames->max_length;
        if ( (__int64)++v11 < (int)v10 )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_object__49237568;
    }
LABEL_18:
    sub_1BCAA3C(this, prefabName);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v38; // x1
  int64_t overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v48; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v51; // x20
  struct UnityEngine_GameObject_array *v52; // x21
  UnityEngine_GameObject_o *v53; // x22
  UnityEngine_Transform_o *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct UnityEngine_GameObject_array *v61; // x8
  struct System_Boolean_array *v62; // x8
  struct System_Single_array *v63; // x8
  Il2CppObject *Object_object__49237568; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8

  if ( (byte_4B19095 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, inperf, indata);
    sub_1BCA7E0(&AssetManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_19039/*"ef_overgauge01"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19046/*"ef_skillskip"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19095/*"effect/ef_overkill01"*/, v22, v23);
    byte_4B19095 = 1;
  }
  this->fields.perf = inperf;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)inperf,
    (int64_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v24, v25, v26, v27, v28, v29);
  this->fields.logic = inlogic;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v30, v31, v32, v33, v34, v35);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0LL, 0LL) )
  {
    overRoot = (int64_t)this->fields.playerAttackInfoPrefab;
    if ( !overRoot )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  }
  overRoot = (int64_t)this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)overRoot, 0LL),
        overRoot = (int64_t)BaseMonoBehaviour__createObject_38952608(
                              (BaseMonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_19095/*"effect/ef_overkill01"*/,
                              transform,
                              0LL,
                              0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_38:
    sub_1BCAA3C(overRoot, v38);
  }
  if ( !overObjectList->max_length )
    goto LABEL_39;
  overObjectList->m_Items[0] = (UnityEngine_GameObject_o *)overRoot;
  sub_1BCA784((PartyOrganizationUtility_o *)overObjectList->m_Items, overRoot, v41, v42, v43, v44, v45, v46);
  v48 = this->fields.overObjectList;
  if ( !v48 )
    goto LABEL_38;
  if ( !v48->max_length )
    goto LABEL_39;
  overRoot = (int64_t)v48->m_Items[0];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
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
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v38);
  overRoot = (int64_t)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
  if ( !overRoot )
    goto LABEL_38;
  v51 = (AssetData_o *)overRoot;
  overRoot = (int64_t)AssetData__GetObject_object__49237568(
                        (AssetData_o *)overRoot,
                        (System_String_o *)StringLiteral_19039/*"ef_overgauge01"*/,
                        (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !this->fields.overRoot )
    goto LABEL_38;
  v52 = this->fields.overObjectList;
  v53 = (UnityEngine_GameObject_o *)overRoot;
  v54 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  overRoot = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v53, v54, 0LL, 0LL);
  if ( !v52 )
    goto LABEL_38;
  if ( v52->max_length <= 1 )
    goto LABEL_39;
  v52->m_Items[1] = (UnityEngine_GameObject_o *)overRoot;
  sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[1], overRoot, v55, v56, v57, v58, v59, v60);
  v61 = this->fields.overObjectList;
  if ( !v61 )
    goto LABEL_38;
  if ( v61->max_length <= 1 )
    goto LABEL_39;
  overRoot = (int64_t)v61->m_Items[1];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  v62 = this->fields.isAlreadyOverKill;
  if ( !v62 )
    goto LABEL_38;
  if ( v62->max_length <= 1 )
    goto LABEL_39;
  v62->m_Items[5] = 0;
  v63 = this->fields.timeStartOverKill;
  if ( !v63 )
    goto LABEL_38;
  if ( v63->max_length <= 1 )
LABEL_39:
    sub_1BCAA44(overRoot, v38);
  v63->m_Items[2] = 0.0;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              v51,
                              (System_String_o *)StringLiteral_19046/*"ef_skillskip"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)Object_object__49237568;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillSkipPrefab,
    (int64_t)Object_object__49237568,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  GameObjectExtensions__SafeSetParent_34336992(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v71);
  overRoot = UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL);
  if ( (overRoot & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      overRoot = (int64_t)this->fields.fieldParam;
      if ( overRoot )
      {
        (*(void (__fastcall **)(int64_t, struct BattleFieldEnvironmentData_o *, _QWORD))(*(_QWORD *)overRoot + 376LL))(
          overRoot,
          data->fields._FieldEnvData_k__BackingField,
          *(_QWORD *)(*(_QWORD *)overRoot + 384LL));
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
  __int64 v2; // x2
  struct BaseBattleInfoPosData_o *BattleInfoPosData; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v13; // x1
  BattleFieldParamComponent_o *v14; // x0

  if ( (byte_4B19096 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19096 = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.infoPosData,
    (int64_t)BattleInfoPosData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    v14 = this->fields.fieldParam;
    if ( !v14 )
      sub_1BCAA3C(0LL, v13);
    BattleFieldParamComponent__UpdateView(v14, v13);
  }
}


BaseBattleInfoPosData_o *__fastcall BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleData_o *data; // x0
  int v9; // w20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x20
  __int64 v13; // x0
  __int128 v14; // q0
  __int64 v15; // d1

  if ( (byte_4B19097 & 1) == 0 )
  {
    sub_1BCA7E0(&NormalRaidTypeBossBattleInfoPosData_TypeInfo, method, v2);
    sub_1BCA7E0(&PosCountNormalBattleInfoPosData_TypeInfo, v4, v5);
    sub_1BCA7E0(&PosCountSpBattleInfoPosData_TypeInfo, v6, v7);
    byte_4B19097 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__GetRaidType(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v9 = (int)data;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0LL) )
  {
    v13 = sub_1BCAA2C(PosCountSpBattleInfoPosData_TypeInfo, method, v10, v11);
    v14 = xmmword_BD2AB0;
    v15 = 1127153664LL;
    goto LABEL_13;
  }
  if ( v9 )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getStageEntity(data, 0LL);
      if ( data )
      {
        if ( StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0LL) )
          goto LABEL_10;
        v13 = sub_1BCAA2C(NormalRaidTypeBossBattleInfoPosData_TypeInfo, method, v10, v11);
        v14 = xmmword_BD2F00;
        v15 = 1112801280LL;
LABEL_13:
        v12 = v13;
        *(_OWORD *)(v13 + 24) = v14;
        *(_QWORD *)(v13 + 40) = v15;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1BCAA3C(data, method);
  }
LABEL_10:
  v12 = sub_1BCAA2C(PosCountNormalBattleInfoPosData_TypeInfo, method, v10, v11);
  *(_DWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 24) = 0x43070000C3FA0000LL;
LABEL_14:
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  (*(void (__fastcall **)(__int64, struct BattlePerformance_o *, _QWORD))(*(_QWORD *)v12 + 408LL))(
    v12,
    this->fields.perf,
    *(_QWORD *)(*(_QWORD *)v12 + 416LL));
  return (BaseBattleInfoPosData_o *)v12;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( !actionData || (v3 = this, (this = (BattleInformationComponent_o *)this->fields.data) == 0LL) )
    sub_1BCAA3C(this, actionData);
  isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
  v7 = BattleInformationComponent__showSkillName(
         v3,
         isPlayerID,
         actionData->fields.skillMessage,
         0,
         actionData->fields.skillInfo,
         v6);
  v3->fields.commonMessageObject = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.commonMessageObject, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__ShowBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  __int64 v12; // x1
  UnityEngine_Object_o *BattleMessageObject; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UnityEngine_GameObject_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  if ( (byte_4B190A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, messages, *(_QWORD *)&messageType);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B190A8 = 1;
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
                                                    v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
          v21 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++motionMessageObjList->fields._version;
          if ( items )
          {
            size = motionMessageObjList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)motionMessageObjList,
                (Il2CppObject *)BattleMessageObject,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              motionMessageObjList->fields._size = size + 1;
              v23[4] = (Il2CppClass *)BattleMessageObject;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)(v23 + 4),
                (int64_t)BattleMessageObject,
                v14,
                v15,
                v16,
                v17,
                v18,
                v19);
            }
            return;
          }
        }
      }
LABEL_15:
      sub_1BCAA3C(motionMessageObjList, v10);
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
  GameObjectExtensions__SafeSetParent_34336992(this->fields.overRoot, fsOffsetRoot, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x1
  Il2CppObject *Component_object; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v18; // x0
  struct System_String_array *v19; // x8
  System_String_o *v20; // x0
  struct System_Boolean_array *v21; // x8

  v4 = this;
  if ( (byte_4B190A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (BattleInformationComponent_o *)sub_1BCA7E0(&StringLiteral_22588/*"out"*/, v9, v10);
    byte_4B190A6 = 1;
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
                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v13 = v4->fields.overObjectList;
  if ( !v13 )
    goto LABEL_30;
  if ( v13->max_length <= type )
    goto LABEL_31;
  v14 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v13->m_Items[type];
  if ( !this )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v14 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14, 1, 0LL);
      overLabel = v4->fields.overLabel;
      if ( overLabel )
      {
        if ( overLabel->max_length <= type )
          goto LABEL_31;
        v18 = System_String__Concat_62401220(overLabel->m_Items[type], (System_String_o *)StringLiteral_22588/*"out"*/, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_64539336((SimpleAnimation_o *)v14, v18, 0LL);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1BCAA3C(this, *(_QWORD *)&type);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
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
  v19 = v4->fields.overLabel;
  if ( !v19 )
    goto LABEL_30;
  if ( v19->max_length <= type )
    goto LABEL_31;
  v20 = System_String__Concat_62401220(v19->m_Items[type], (System_String_o *)StringLiteral_22588/*"out"*/, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_69899248(
                                           (UnityEngine_Animation_o *)Component_object,
                                           v20,
                                           0LL);
LABEL_26:
  v21 = v4->fields.isAlreadyOverKill;
  if ( !v21 )
    goto LABEL_30;
  if ( v21->max_length <= type )
LABEL_31:
    sub_1BCAA44(this, *(_QWORD *)&type);
  v21->m_Items[type + 4] = 0;
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
    sub_1BCAA3C(this, *(_QWORD *)&type);
  }
  if ( showPositions->max_length <= zureIndex )
LABEL_9:
    sub_1BCAA44(this, *(_QWORD *)&type);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  BattleInfoMessageComponent_o *v21; // x22
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v24; // x0
  BattleActionData_o *v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4B190A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, *(_QWORD *)&imageId, message);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_19078/*"effect/ef_boostitem01"*/, v11, v12);
    byte_4B190A1 = 1;
  }
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  v13 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_19078/*"effect/ef_boostitem01"*/, 0LL);
  v14 = (UnityEngine_GameObject_o *)v13;
  if ( !v13 || (UnityEngine_GameObject_c *)v13->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       v14,
                                       transform,
                                       0LL,
                                       0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      if ( !Object
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_1BCAA3C(Component_object, v19);
      }
      v21 = (BattleInfoMessageComponent_o *)Component_object;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v20);
      BattleInfoMessageComponent__setItemSprite(v21, imageId, 0, v22);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  sub_1BCACFC(v13);
  BattleInformationComponent__showSpecialName(v24, v25, v26);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x4
  int v22; // w23
  BattleInformationComponent_o *v23; // x21
  BattleInfoMessageComponent_o *v24; // x22
  const MethodInfo *v25; // x3
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  System_String_o *motionMessage; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t type; // w9
  int32_t skilllv; // w21
  const MethodInfo *v32; // x3
  struct BattleSkillInfoData_o *v33; // x8
  UnityEngine_GameObject_o *v34; // x0
  System_String_o *v35; // x24
  Il2CppObject *v36; // x0
  System_String_o **v37; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v39; // x1
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v42; // x3
  bool isPlayerID; // w0
  const MethodInfo *v44; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v46; // x4
  bool v47; // w1
  BattleInformationComponent_o *v48; // x0
  int32_t v49; // w3
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  bool v56; // w0
  int v57; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_4B190A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, actionData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3395/*"Buster!"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11070/*"Quick!"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_2499/*"Arts!"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    this = (BattleInformationComponent_o *)sub_1BCA7E0(&StringLiteral_6466/*"Extra!"*/, v19, v20);
    byte_4B190A3 = 1;
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
      v22 = (int)this;
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
      v23 = this;
      this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !v4->fields.data )
        goto LABEL_60;
      v24 = (BattleInfoMessageComponent_o *)this;
      this = (BattleInformationComponent_o *)BattleData__isPlayerID(v4->fields.data, v3->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_47:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, 1, 0LL);
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
          v35 = attackCount->m_Items[3];
          v57 = actionIndex + 1;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
          this = (BattleInformationComponent_o *)System_String__Format(v35, v36, 0LL);
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
          if ( (unsigned int)(v22 - 1) > 3 )
            v37 = (System_String_o **)&StringLiteral_1/*""*/;
          else
            v37 = (System_String_o **)*(&off_455AFE0 + v22 - 1);
          if ( v24 )
          {
            BattleInfoMessageComponent__setText_44577996(v24, (System_String_o *)actionData, *v37, v25);
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
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
                if ( !UnityEngine_Object__op_Inequality(BattleCommandCardObject, 0LL, 0LL) )
                  goto LABEL_47;
                this = (BattleInformationComponent_o *)v4->fields.data;
                if ( this )
                {
                  ServantData = BattleData__getServantData((BattleData_o *)this, v3->fields.targetId, 0LL);
                  BattleInfoMessageComponent__setCommandObject(
                    v24,
                    (UnityEngine_GameObject_o *)BattleCommandCardObject,
                    ServantData,
                    v42);
                  if ( BattleCommandCardObject )
                  {
                    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
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
          sub_1BCAA3C(this, actionData);
        }
      }
      sub_1BCAA44(this, actionData);
    }
  }
  motionMessage = v3->fields.motionMessage;
  if ( !motionMessage )
  {
    v23 = 0LL;
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
      v46 = v3->fields.skillInfo;
      v47 = isPlayerID;
      v48 = v4;
      v49 = skilllv;
    }
    else
    {
      this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(v3, 0LL);
      v23 = 0LL;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_53;
      if ( v3->fields.noOperation )
        goto LABEL_19;
      v33 = v3->fields.skillInfo;
      if ( !v33 )
        goto LABEL_60;
      if ( v33->fields.itemImageId != -1 )
      {
        v34 = BattleInformationComponent__showBoostSkillName(v4, v3->fields.imageId, v3->fields.skillMessage, v32);
LABEL_52:
        v23 = (BattleInformationComponent_o *)v34;
        goto LABEL_53;
      }
      this = (BattleInformationComponent_o *)v4->fields.data;
      if ( !this )
        goto LABEL_60;
      v56 = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
      skillMessage = v3->fields.skillMessage;
      v46 = v3->fields.skillInfo;
      v47 = v56;
      v48 = v4;
      v49 = 0;
    }
    v34 = BattleInformationComponent__showSkillName(v48, v47, skillMessage, v49, v46, v44);
    goto LABEL_52;
  }
  BattleInformationComponent__showMotionMessage(
    v4,
    motionMessage,
    v3->fields.actorId,
    v3->fields._MessageType_k__BackingField,
    v21);
LABEL_19:
  v23 = 0LL;
LABEL_53:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
  {
    v4->fields.commonMessageObject = (struct UnityEngine_GameObject_o *)v23;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.commonMessageObject,
      (int64_t)v23,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
}


void __fastcall BattleInformationComponent__showCommonMessage_44591328(
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  Il2CppObject *current; // x23
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x8
  int32_t size; // w2
  int v39; // w9
  bool HasRubyFormat; // w24
  const MethodInfo *v41; // x3
  BattleInformationComponent_o *v42; // x23
  BattleInformationComponent_o *v43; // x21
  const MethodInfo *v44; // x2
  bool isPlayerID; // w0
  const MethodInfo *v46; // x4
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v56; // x8
  __int64 v57; // x1
  BattleEffectUtility_c *v58; // x0
  System_String_o *v59; // x0
  __int64 v60; // x1
  System_String_o *v61; // x20
  AssetData_o *v62; // x20
  __int64 v63; // x1
  Il2CppObject *Object_object__49237568; // x20
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4B190A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, motionMessage, *(_QWORD *)&actorId);
    sub_1BCA7E0(&AssetManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_17310/*"battle_states_popup"*/, v31, v32);
    this = (BattleInformationComponent_o *)sub_1BCA7E0(&StringLiteral_3238/*"Battle/Effect/"*/, v33, v34);
    byte_4B190A7 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  if ( !motionMessage )
    goto LABEL_47;
  if ( motionMessage->fields._stringLength < 1 )
    return;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_47;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v66.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = v8->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_47;
  size = motionMessageObjList->fields._size;
  v39 = motionMessageObjList->fields._version + 1;
  motionMessageObjList->fields._size = 0;
  motionMessageObjList->fields._version = v39;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)motionMessageObjList->fields._items, 0, size, 0LL);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, 0x3Au, 0, 0LL);
  if ( HasRubyFormat )
    goto LABEL_17;
  v42 = this;
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
                                               v46);
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
          v43 = this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v44);
LABEL_26:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v43, 1, 0LL);
            goto LABEL_27;
          }
        }
LABEL_47:
        sub_1BCAA3C(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v41);
    }
    v43 = this;
    if ( !this )
      goto LABEL_47;
    goto LABEL_26;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_47;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0LL);
  v58 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v57);
    v58 = BattleEffectUtility_TypeInfo;
  }
  v59 = System_Int32__ToString((unsigned int)v58->static_fields + 24, 0LL);
  v61 = System_String__Concat_62401220((System_String_o *)StringLiteral_3238/*"Battle/Effect/"*/, v59, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v60);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v61, 0LL);
  if ( !LODWORD(v42->fields.m_CancellationTokenSource) )
LABEL_48:
    sub_1BCAA44(this, motionMessage);
  v62 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_62401220(
                                           (System_String_o *)StringLiteral_17310/*"battle_states_popup"*/,
                                           (System_String_o *)v42->fields.perf,
                                           0LL);
  if ( !v62 )
    goto LABEL_47;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              v62,
                              (System_String_o *)this,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
  v43 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             (UnityEngine_GameObject_o *)Object_object__49237568,
                                             v8->fields.commonMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_47;
    v43 = this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v42->fields.m_CancellationTokenSource) > 1 )
    {
      if ( !this )
        goto LABEL_47;
      EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v42->fields.data, 0LL);
      goto LABEL_26;
    }
    goto LABEL_48;
  }
LABEL_27:
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_47;
  v53 = *(_QWORD *)&this->fields.m_CachedPtr;
  v54 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v53 )
    goto LABEL_47;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v53 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v43,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = v53 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v56 + 32) = v43;
    sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)v43, v47, v48, v49, v50, v51, v52);
  }
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v47; // x26
  UnityEngine_GameObject_o *v48; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *v51; // x0
  Il2CppObject *v52; // x28
  UnityEngine_Transform_o *v53; // x0
  Il2CppObject *v54; // x27
  UnityEngine_Transform_o *v55; // x0
  Il2CppObject *v56; // x24
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x25
  __int64 v59; // x0
  __int64 v60; // x1
  System_String_o *monitor; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v63; // x1
  System_String_o *v64; // x1
  __int64 v65; // x1
  System_String_o *v66; // x22
  Il2CppObject *v67; // x0
  int v68; // w8
  Il2CppObject *v69; // x20
  __int64 v70; // x1
  Il2CppObject *v71; // x19
  __int64 v72; // x1
  BattleInformationComponent_c *v73; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v75; // x0
  __int64 v76; // x1
  BattleInformationComponent_c *v77; // x0
  System_String_o *v78; // x20
  System_String_o *v79; // x0
  int v80; // [xsp+Ch] [xbp-64h] BYREF
  int v81; // [xsp+18h] [xbp-58h] BYREF
  int32_t v82; // [xsp+1Ch] [xbp-54h] BYREF

  v82 = treasureDeviceLevel;
  if ( (byte_4B19099 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleInformationComponent_TypeInfo, *(_QWORD *)&tresureDeviceId, *(_QWORD *)&treasureDeviceLevel);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UILabel___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v20, v21);
    sub_1BCA7E0(&int_TypeInfo, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&StringLiteral_9378/*"NOBLEINFO_NP_PER"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_23230/*"rubyLabel"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_10733/*"PerLabel"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_8509/*"LevelLabel"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_9706/*"NpLevelBase"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_21480/*"mainLabel"*/, v42, v43);
    byte_4B19099 = 1;
  }
  v81 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v47 = Entity;
    Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.nobleInfoPrefab,
                                  this->fields.nobleInfoRoot,
                                  0LL,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    v48 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_21480/*"mainLabel"*/,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v51 = UnityEngine_GameObject__get_transform(v48, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v51, (System_String_o *)StringLiteral_23230/*"rubyLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v52 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v53 = UnityEngine_GameObject__get_transform(v48, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v53, (System_String_o *)StringLiteral_8509/*"LevelLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v54 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v55 = UnityEngine_GameObject__get_transform(v48, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v55, (System_String_o *)StringLiteral_10733/*"PerLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v56 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v57 = UnityEngine_GameObject__get_transform(v48, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v57, (System_String_o *)StringLiteral_9706/*"NpLevelBase"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v52 )
      goto LABEL_52;
    v58 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v52, (System_String_o *)v47[2].klass, 0LL);
    monitor = (System_String_o *)v47[1].monitor;
    if ( overrideTd )
    {
      max_length = overrideTd->max_length;
      if ( !max_length )
        goto LABEL_53;
      if ( overrideTd->m_Items[0] )
        monitor = overrideTd->m_Items[0];
      if ( max_length == 1 )
LABEL_53:
        sub_1BCAA44(v59, v60);
      v63 = overrideTd->m_Items[1];
      if ( v63 )
        UILabel__set_text((UILabel_o *)v52, v63, 0LL);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(monitor, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v48, 0LL);
      if ( !Instance )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( !Component_object )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)Component_object, monitor, 0LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v82, 0LL);
    if ( !v54 )
      goto LABEL_52;
    if ( Instance )
      v64 = (System_String_o *)Instance;
    else
      v64 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v54, v64, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_9378/*"NOBLEINFO_NP_PER"*/, 0LL);
    v80 = 100 * (treasureDevicePer / 100);
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    Instance = (DataManager_o *)System_String__Format(v66, v67, 0LL);
    if ( !v56 || (UILabel__set_text((UILabel_o *)v56, (System_String_o *)Instance, 0LL), !v58) )
LABEL_52:
      sub_1BCAA3C(Instance, v45);
    UnityEngine_GameObject__SetActive(v58, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v68 = 5;
    else
      v68 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v68 = 1;
    v81 = v68;
    v69 = UnityEngine_GameObject__GetComponent_object_(
            v48,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v71 = UnityEngine_GameObject__GetComponent_object_(
            v48,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0LL, 0LL) )
    {
      v73 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo, v72);
        v73 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v73->static_fields->NobleInfoAnimPrefix;
      v75 = System_Int32__ToString((int32_t)&v81, 0LL);
      Instance = (DataManager_o *)System_String__Concat_62401220(NobleInfoAnimPrefix, v75, 0LL);
      if ( v69 )
      {
        SimpleAnimation__Play_64539336((SimpleAnimation_o *)v69, (System_String_o *)Instance, 0LL);
        return;
      }
      goto LABEL_52;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v71, 0LL, 0LL) )
    {
      v77 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo, v76);
        v77 = BattleInformationComponent_TypeInfo;
      }
      v78 = v77->static_fields->NobleInfoAnimPrefix;
      v79 = System_Int32__ToString((int32_t)&v81, 0LL);
      Instance = (DataManager_o *)System_String__Concat_62401220(v78, v79, 0LL);
      if ( !v71 )
        goto LABEL_52;
      UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v71, (System_String_o *)Instance, 0LL);
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
    sub_1BCAA3C(this, actionData);
  if ( !isAlreadyOverKill->max_length )
    sub_1BCAA44(this, actionData);
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
    sub_1BCAA3C(this, actionData);
  if ( isAlreadyOverKill->max_length <= 1 )
    sub_1BCAA44(this, actionData);
  BattleInformationComponent__shiftOverMessage(this, 0, isAlreadyOverKill->m_Items[5], v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__showOverMessageBase(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        int32_t inOverType,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  UnityEngine_Object_o *overRoot; // x21
  UnityEngine_GameObject_o *v17; // x21
  float v18; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_Object_o *v22; // x22
  __int64 v23; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_Behaviour_o *v25; // x23
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v27; // s0
  struct System_Single_array *v28; // x8
  struct System_String_array *v29; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v31; // x8
  struct System_Boolean_array *v32; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v35; // x8

  v6 = this;
  if ( (byte_4B190A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, actionData, *(_QWORD *)&inOverType);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_20825/*"in"*/, v11, v12);
    this = (BattleInformationComponent_o *)sub_1BCA7E0(&StringLiteral_19661/*"flash"*/, v13, v14);
    byte_4B190A5 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(overRoot, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_70;
    v17 = v6->fields.overRoot;
    v18 = ((float (__fastcall *)(BattleInformationComponent_o *, void *))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data);
    GameObjectExtensions__SetLocalPositionY(v17, v18, 0LL);
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
  v20 = v6->fields.overObjectList;
  if ( !v20 )
    goto LABEL_70;
  if ( v20->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)v20->m_Items[inOverType];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (v21 = v6->fields.overObjectList) == 0LL) )
  {
LABEL_70:
    sub_1BCAA3C(this, actionData);
  }
  if ( v21->max_length <= inOverType )
    goto LABEL_71;
  v22 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v21->m_Items[inOverType];
  if ( !this )
    goto LABEL_70;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v25 = (UnityEngine_Behaviour_o *)v22;
    if ( !v22 )
      goto LABEL_70;
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v25 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      goto LABEL_70;
LABEL_29:
    UnityEngine_Behaviour__set_enabled(v25, 0, 0LL);
    UnityEngine_Behaviour__set_enabled(v25, 1, 0LL);
  }
  isAlreadyOverKill = v6->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_70;
  if ( isAlreadyOverKill->max_length <= inOverType )
    goto LABEL_71;
  if ( !isAlreadyOverKill->m_Items[inOverType + 4] )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_70;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_71;
      this = (BattleInformationComponent_o *)System_String__Concat_62401220(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20825/*"in"*/,
                                               0LL);
      if ( !v22 )
        goto LABEL_70;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_64539336(
                                               (SimpleAnimation_o *)v22,
                                               (System_String_o *)this,
                                               0LL);
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v31 = v6->fields.overLabel;
        if ( !v31 )
          goto LABEL_70;
        if ( v31->max_length <= inOverType )
          goto LABEL_71;
        this = (BattleInformationComponent_o *)System_String__Concat_62401220(
                                                 v31->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_20825/*"in"*/,
                                                 0LL);
        if ( !Component_object )
          goto LABEL_70;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_69899248(
                                                 (UnityEngine_Animation_o *)Component_object,
                                                 (System_String_o *)this,
                                                 0LL);
      }
    }
    v32 = v6->fields.isAlreadyOverKill;
    if ( !v32 )
      goto LABEL_70;
    if ( v32->max_length > inOverType )
    {
      v32->m_Items[inOverType + 4] = 1;
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
    sub_1BCAA44(this, actionData);
  }
  v27 = UnityEngine_Time__get_time(0LL);
  v28 = v6->fields.timeStartOverKill;
  if ( !v28 )
    goto LABEL_70;
  if ( v28->max_length <= inOverType )
    goto LABEL_71;
  if ( (float)(v27 - v28->m_Items[inOverType + 1]) <= 0.2 )
    return;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v29 = v6->fields.overLabel;
    if ( !v29 )
      goto LABEL_70;
    if ( v29->max_length > inOverType )
    {
      this = (BattleInformationComponent_o *)System_String__Concat_62401220(
                                               v29->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19661/*"flash"*/,
                                               0LL);
      if ( !v22 )
        goto LABEL_70;
      SimpleAnimation__Play_64539336((SimpleAnimation_o *)v22, (System_String_o *)this, 0LL);
      return;
    }
    goto LABEL_71;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v35 = v6->fields.overLabel;
  if ( !v35 )
    goto LABEL_70;
  if ( v35->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)System_String__Concat_62401220(
                                           v35->m_Items[inOverType],
                                           (System_String_o *)StringLiteral_19661/*"flash"*/,
                                           0LL);
  if ( !Component_object )
    goto LABEL_70;
  UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)Component_object, (System_String_o *)this, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Master_object; // x24
  Il2CppObject *v20; // x0
  int32_t v21; // w0
  const MethodInfo *v22; // x5
  __int64 v23; // x1
  __int64 v24; // x8
  __int64 v25; // x1
  Il2CppObject *Component_object; // x22
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B190A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, isPlayer, message);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B190A0 = 1;
  }
  entity = 0LL;
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isPlayer);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
    v20 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                            skillInfo,
                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_object )
      goto LABEL_34;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           (int32_t)v20,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v20 = entity;
      if ( !entity )
        goto LABEL_34;
      v21 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0LL);
      skillInfo = (BattleSkillInfoData_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                             this,
                                             v21,
                                             message,
                                             isPlayer,
                                             skillLevel,
                                             v22);
    }
    else
    {
      skillInfo = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPlayer);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL) )
  {
    v24 = 136LL;
    if ( isPlayer )
      v24 = 128LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v24),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v20 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)v20 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)skillInfo,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      v20 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)v20 & 1) == 0 )
        goto LABEL_32;
      if ( Component_object )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_object,
            message,
            skillLevel,
            v28);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v27);
LABEL_32:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_34:
    sub_1BCAA3C(v20, isPlayer);
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void __fastcall BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v16; // x22
  bool isPlayerID; // w0
  __int64 v18; // x8
  DataManager_o *v19; // x21
  BattleInfoMessageComponent_o *v20; // x23
  UnityEngine_Object_o *saveDataMapList; // x24
  System_String_o *monitor; // x20
  System_String_o *OverrideTDName; // x0
  System_String_o *v24; // x19
  const MethodInfo *v25; // x2
  UnityEngine_GameObject_o *v26; // x0
  bool v27; // w1

  if ( (byte_4B190A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, actionData, method);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B190A2 = 1;
  }
  if ( actionData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v16 = Entity;
        Instance = (DataManager_o *)this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
          v18 = 136LL;
          if ( isPlayerID )
            v18 = 128LL;
          Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        *(UnityEngine_GameObject_o **)((char *)&this->klass + v18),
                                        this->fields.skillInfoRoot,
                                        0LL,
                                        0LL);
          if ( Instance )
          {
            v19 = Instance;
            Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v20 = (BattleInfoMessageComponent_o *)Instance;
              saveDataMapList = (UnityEngine_Object_o *)Instance->fields.saveDataMapList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
              if ( UnityEngine_Object__op_Inequality(saveDataMapList, 0LL, 0LL) )
              {
                Instance = (DataManager_o *)v20->fields.skillSprite;
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
                monitor = (System_String_o *)v16[1].monitor;
                Instance = (DataManager_o *)BattleData__getServantData(
                                              (BattleData_o *)Instance,
                                              actionData->fields.actorId,
                                              0LL);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0LL);
                  if ( OverrideTDName )
                    v24 = OverrideTDName;
                  else
                    v24 = monitor;
                  if ( System_String__IsNullOrEmpty(v24, 0LL) )
                  {
                    v26 = (UnityEngine_GameObject_o *)v19;
                    v27 = 0;
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v20, v24, v25);
                    v27 = 1;
                    v26 = (UnityEngine_GameObject_o *)v19;
                  }
                  UnityEngine_GameObject__SetActive(v26, v27, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(Instance, v14);
  }
}


void __fastcall BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t TotalDamage; // w0
  int v14; // w19
  int m_CancellationTokenSource; // w8
  BattleInformationComponent_o *v16; // x20
  __int64 v17; // x22
  UILabel_o *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  int v21; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4B19098 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, actionData, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_21337/*"line1"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_14703/*"Total {0:#,0}"*/, v9, v10);
    this = (BattleInformationComponent_o *)sub_1BCA7E0(&StringLiteral_21338/*"line2"*/, v11, v12);
    byte_4B19098 = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0LL);
  if ( TotalDamage >= 1 )
  {
    v14 = TotalDamage;
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v4,
                                             v4->fields.totalLabelPrefab,
                                             v4->fields.totalMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_20;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v16 = this;
      if ( m_CancellationTokenSource >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v17 >= m_CancellationTokenSource )
            sub_1BCAA44(this, actionData);
          v18 = (UILabel_o *)*((_QWORD *)&v16->fields.perf + v17);
          if ( !v18 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v16->fields.perf + v17),
                                                   0LL);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          if ( !this )
            break;
          if ( System_String__Equals_62409536((System_String_o *)this, (System_String_o *)StringLiteral_21337/*"line1"*/, 0LL) )
          {
            v21 = v14;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
            v20 = System_String__Format((System_String_o *)StringLiteral_14703/*"Total {0:#,0}"*/, v19, 0LL);
            UILabel__set_text(v18, v20, 0LL);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v18,
                                                     0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_62409536(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_21338/*"line2"*/,
                                                     0LL);
          }
          m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
          if ( (int)++v17 >= m_CancellationTokenSource )
            return;
        }
LABEL_20:
        sub_1BCAA3C(this, actionData);
      }
    }
  }
}