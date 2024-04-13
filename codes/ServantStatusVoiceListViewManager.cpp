void __fastcall ServantStatusVoiceListViewManager___ctor(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(
        ServantStatusVoiceListViewManager_o *this,
        int32_t *firstPriority,
        ServantVoiceRelationEntity_array *relationList,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantVoiceRelationEntity_array *v5; // x20
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
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int max_length; // w8
  VoiceMaster_o *v24; // x21
  unsigned int v25; // w23
  char v26; // w19
  ServantVoiceRelationEntity_o *v27; // x22
  __int64 v28; // x24
  __int64 v29; // x25
  DataManager_o *v30; // x24
  unsigned __int64 v31; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x25
  int32_t size; // w26
  __int64 v34; // x27
  __int64 v35; // x28
  VoiceInfo_o *v36; // x28
  int32_t v37; // w27
  int32_t v38; // w20
  ServantStatusVoiceListViewItem_o *v39; // x23
  __int64 v40; // x0
  const MethodInfo *v41; // [xsp+8h] [xbp-88h]
  VoiceMaster_o *v42; // [xsp+10h] [xbp-80h]
  ServantVoiceRelationEntity_array *v43; // [xsp+18h] [xbp-78h]
  int32_t ascendOrder; // [xsp+20h] [xbp-70h]
  unsigned int v45; // [xsp+24h] [xbp-6Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v5 = relationList;
  if ( (byte_42EBF05 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_VoiceMaster___,
      (_DWORD)firstPriority,
      (_DWORD)relationList,
      *(_QWORD *)&svtId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantStatusVoiceListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EBF05 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceMaster___);
  if ( !v5 )
    goto LABEL_27;
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v24 = (VoiceMaster_o *)Instance;
    v25 = 0;
    v26 = 1;
    ascendOrder = 0;
    v42 = (VoiceMaster_o *)Instance;
    v43 = v5;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
LABEL_28:
        v40 = sub_B5D6C8(Instance);
        sub_B5D668(v40, 0LL);
      }
      v27 = v5->m_Items[v25];
      if ( !v27 )
        goto LABEL_27;
      v29 = *(_QWORD *)&v27->fields.relationSvtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&v27->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v49.fields.currentCryptoKey = v29;
      *(_QWORD *)&v49.fields.fakeValue = v28;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v49, 0LL);
      if ( !v24 )
        goto LABEL_27;
      Instance = (DataManager_o *)VoiceMaster__getEnableInfo(v24, svtId, (int32_t)Instance, 0, 0LL, 0, 0, 0LL);
      v30 = Instance;
      if ( (v26 & 1) == 0 && ascendOrder != v27->fields.ascendOrder )
        ++*firstPriority;
      v45 = v25;
      if ( !Instance )
        goto LABEL_27;
      ascendOrder = v27->fields.ascendOrder;
      if ( SLODWORD(Instance->fields.datalist) >= 1 )
        break;
LABEL_25:
      v24 = v42;
      v5 = v43;
      v26 = 0;
      max_length = v43->max_length;
      v25 = v45 + 1;
      if ( (int)(v45 + 1) >= max_length )
        return;
    }
    v31 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v35 = *(_QWORD *)&v27->fields.relationSvtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&v27->fields.relationSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v50.fields.currentCryptoKey = v35;
      *(_QWORD *)&v50.fields.fakeValue = v34;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v50, 0LL);
      if ( v31 >= LODWORD(v30->fields.datalist) )
        goto LABEL_28;
      v36 = (VoiceInfo_o *)*((_QWORD *)&v30->fields.lookup + v31);
      v37 = (int)Instance;
      v38 = *firstPriority;
      v39 = (ServantStatusVoiceListViewItem_o *)sub_B5D694(ServantStatusVoiceListViewItem_TypeInfo);
      ServantStatusVoiceListViewItem___ctor(v39, size, svtId, v37, 0, v36, v38, 0, 0, v41);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (__int64)++v31 >= SLODWORD(v30->fields.datalist) )
        goto LABEL_25;
    }
LABEL_27:
    sub_B5D69C(Instance, v22);
  }
}


void __fastcall ServantStatusVoiceListViewManager__CreateList(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        System_Int32_array *changeSvtVoiceIdList,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x27
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
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  __int64 v120; // x22
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  const MethodInfo *v123; // x1
  int64_t v124; // x19
  VoiceMaster_o *v125; // x24
  System_Collections_Generic_List_VoiceCondType_Type__o *v126; // x19
  System_Int32_array *v127; // x9
  __int64 v128; // x8
  unsigned __int64 v129; // x10
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t maxLimitCount; // w20
  System_Int32_array *VoiceLimitCountList; // x20
  const MethodInfo *v133; // x5
  ServantVoiceRelationEntity_array *v134; // x19
  int32_t v135; // w0
  const MethodInfo *v136; // x4
  ServantVoiceRelationEntity_array *v137; // x19
  int32_t v138; // w0
  const MethodInfo *v139; // x4
  __int64 v140; // x8
  int32_t v141; // w19
  unsigned __int64 v142; // x9
  int32_t v143; // w0
  BalanceConfig_c *v144; // x8
  int32_t v145; // w19
  __int64 v146; // x1
  int64_t v147; // x23
  unsigned __int64 v148; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v149; // x20
  int32_t v150; // w24
  int32_t v151; // w19
  VoiceInfo_o *v152; // x26
  int32_t ServantIdMashu3; // w27
  ServantStatusVoiceListViewItem_o *v154; // x28
  int32_t v155; // w28
  int32_t v156; // w22
  __int64 v157; // x0
  __int64 v158; // x1
  const MethodInfo *v159; // x4
  int v160; // w8
  int64_t v161; // x26
  unsigned int i; // w25
  int64_t v163; // x23
  VoiceInfo_o *v164; // x3
  VoiceInfo_o **v165; // x23
  VoiceInfo_o *v166; // t1
  struct VoiceEntity_o *voiceEntity; // x24
  int32_t condType; // w9
  int v169; // w28
  _BOOL4 v170; // w8
  const MethodInfo *v171; // x3
  const MethodInfo *v172; // x3
  char v173; // w22
  _BOOL8 v174; // x0
  const MethodInfo *v175; // x1
  Il2CppObject *v176; // x27
  __int64 v177; // x10
  Il2CppClass *v178; // x8
  __int64 v179; // x0
  __int64 v180; // x1
  struct VoiceEntity_o *v181; // x8
  int32_t v182; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19
  __int64 v184; // x1
  System_String_o *v185; // x2
  __int64 v186; // x0
  int32_t v187; // w5
  const MethodInfo *v188; // x6
  struct VoiceEntity_o *v189; // x8
  int32_t v190; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v191; // x19
  System_String_o *v192; // x2
  int32_t v193; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x20
  bool v195; // w28
  bool v196; // w21
  int32_t size; // w24
  char v198; // w19
  VoiceInfo_o *v199; // x23
  int32_t v200; // w27
  bool v201; // w19
  ServantStatusVoiceListViewItem_o *v202; // x28
  _BOOL8 v203; // x0
  const MethodInfo *v204; // x1
  Il2CppObject *current; // x27
  __int64 v206; // x10
  Il2CppClass *klass; // x8
  __int64 v208; // x0
  int32_t v209; // w5
  const MethodInfo *v210; // x6
  __int64 v211; // x0
  __int64 v212; // x0
  __int64 v213; // x0
  int32_t v214; // w19
  BalanceConfig_c *v215; // x8
  WarMessageEntity_o *v216; // x27
  __int64 v217; // x1
  UserServantCollectionMaster_o *v218; // x19
  int64_t v219; // x20
  int32_t v220; // w0
  BalanceConfig_c *v221; // x8
  int32_t v222; // w19
  int64_t v223; // x27
  unsigned __int64 v224; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v225; // x20
  int32_t v226; // w24
  ServantStatusVoiceListViewManager_o *v227; // x25
  int32_t v228; // w19
  int32_t v229; // w21
  VoiceInfo_o *v230; // x23
  int32_t ServantIdHyde; // w28
  ServantStatusVoiceListViewItem_o *v232; // x0
  int32_t v233; // w3
  EventMissionProgressRequest_Argument_ProgressData_o *v234; // x26
  BalanceConfig_c *v235; // x8
  int v236; // w19
  int32_t v237; // w0
  BalanceConfig_c *v238; // x8
  int32_t v239; // w19
  VoiceInfo_array *EnableInfo; // x0
  __int64 v241; // x1
  VoiceInfo_array *v242; // x27
  unsigned __int64 v243; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v244; // x20
  int32_t v245; // w24
  int32_t v246; // w19
  VoiceInfo_o *v247; // x23
  int32_t ServantIdMashu2; // w26
  ServantStatusVoiceListViewItem_o *v249; // x28
  int64_t v250; // x0
  BalanceConfig_c *v251; // x8
  int64_t v252; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t MashuTdGradeUpQuestId; // w19
  int32_t MashuTdGradeUpQuestPhase; // w23
  int32_t svtVoiceId; // w19
  ServantVoiceRelationEntity_array *v257; // x19
  int32_t v258; // w0
  const MethodInfo *v259; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v260; // x8
  signed __int64 v261; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v262; // x20
  int v263; // w8
  unsigned __int64 v264; // x24
  signed __int64 v265; // x22
  __int64 v266; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v267; // x19
  ServantStatusVoiceListViewItem_o *v268; // x21
  __int64 v269; // x10
  const MethodInfo *v270; // x2
  __int64 v271; // x26
  struct System_Collections_Generic_List_ListViewItem__o *v272; // x19
  ServantStatusVoiceListViewItem_o *v273; // x22
  __int64 v274; // x10
  System_String_o *OpenName; // x19
  const MethodInfo *v276; // x1
  System_String_o *v277; // x0
  int32_t v278; // w21
  _BOOL8 v279; // x0
  __int64 v280; // x1
  const MethodInfo *v281; // x2
  __int64 v282; // x11
  __int64 v283; // x11
  Il2CppObject *v284; // x0
  UILabel_o *explanationLabel; // x19
  UILabel_o *emptyMessageLabel; // x19
  __int64 v287; // x0
  bool voiceLabelSpec; // [xsp+0h] [xbp-170h]
  const MethodInfo *v289; // [xsp+8h] [xbp-168h]
  System_String_o *v290; // [xsp+10h] [xbp-160h]
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+18h] [xbp-158h]
  unsigned __int64 v293; // [xsp+28h] [xbp-148h]
  ServantLimitAddMaster_o *v294; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList; // [xsp+38h] [xbp-138h]
  System_Int32_array *v296; // [xsp+40h] [xbp-130h]
  VoiceMaster_o *v297; // [xsp+48h] [xbp-128h]
  unsigned __int64 v298; // [xsp+50h] [xbp-120h]
  int64_t v299; // [xsp+58h] [xbp-118h]
  VoicePlayCondMaster_o *v300; // [xsp+60h] [xbp-110h]
  int32_t v301; // [xsp+6Ch] [xbp-104h]
  ServantStatusVoiceListViewManager_o *v302; // [xsp+70h] [xbp-100h]
  int32_t limitCount; // [xsp+7Ch] [xbp-F4h]
  ServantStatusListViewItem_o *v304; // [xsp+80h] [xbp-F0h]
  int32_t svtId; // [xsp+88h] [xbp-E8h]
  signed __int64 svtIda; // [xsp+88h] [xbp-E8h]
  _BYTE v307[44]; // [xsp+90h] [xbp-E0h] BYREF
  int v308; // [xsp+BCh] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v309; // [xsp+C0h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+D8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v311; // [xsp+E0h] [xbp-90h] BYREF
  ServantVoiceRelationEntity_array *afterRelationList; // [xsp+F8h] [xbp-78h] BYREF
  ServantVoiceRelationEntity_array *sameRelationList; // [xsp+100h] [xbp-70h] BYREF
  ServantVoiceRelationEntity_array *beforeRelationList; // [xsp+108h] [xbp-68h] BYREF
  int32_t firstPriority[3]; // [xsp+114h] [xbp-5Ch] BYREF

  v4 = mainInfo;
  if ( (byte_42EBF06 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)mainInfo, (_DWORD)changeSvtVoiceIdList, method);
    sub_B5D5C4(&CondType_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_VoiceMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v27, v28, v29);
    sub_B5D5C4(&DataManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v36, v37, v38);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__,
      v39,
      v40,
      v41);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__,
      v42,
      v43,
      v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v48, v49, v50);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__get_Current__,
      v51,
      v52,
      v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__, v66, v67, v68);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v69, v70, v71);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v72, v73, v74);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__, v75, v76, v77);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v78, v79, v80);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__get_Count__, v81, v82, v83);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v84, v85, v86);
    sub_B5D5C4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v87, v88, v89);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo, v90, v91, v92);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v93, v94, v95);
    sub_B5D5C4(&NetworkManager_TypeInfo, v96, v97, v98);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v99, v100, v101);
    sub_B5D5C4(&ServantStatusVoiceListViewItem_TypeInfo, v102, v103, v104);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v105, v106, v107);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_2254/*"B050"*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_15275/*"VOICE_EMPTY_MESSAGE"*/, v114, v115, v116);
    sub_B5D5C4(&StringLiteral_12195/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, v117, v118, v119);
    byte_42EBF06 = 1;
  }
  firstPriority[0] = 0;
  sameRelationList = 0LL;
  beforeRelationList = 0LL;
  afterRelationList = 0LL;
  memset(&v311, 0, sizeof(v311));
  entity = 0LL;
  v120 = StringLiteral_15275/*"VOICE_EMPTY_MESSAGE"*/;
  memset(&v309, 0, sizeof(v309));
  v308 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.execObjectExtraFlag = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v4 )
    goto LABEL_257;
  v124 = UserId;
  UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_257;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v124, UserId, 0LL);
  v125 = (VoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_VoiceMaster___);
  v300 = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v294 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  firstPriority[0] = 0;
  v126 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v126,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v126 )
    goto LABEL_257;
  disableCondTypeList = (System_Collections_Generic_List_CondType_Kind__o *)v126;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v126,
    81,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  v127 = changeSvtVoiceIdList;
  if ( !changeSvtVoiceIdList )
    goto LABEL_257;
  v128 = *(_QWORD *)&changeSvtVoiceIdList->max_length;
  v290 = (System_String_o *)v120;
  v302 = this;
  if ( (int)v128 >= 1 )
  {
    v129 = 0LL;
    v304 = v4;
    v297 = v125;
    while ( 1 )
    {
      if ( v129 >= (unsigned int)v128 )
        goto LABEL_253;
      v293 = v129;
      svtId = v127->m_Items[v129 + 1];
      UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserId )
        goto LABEL_257;
      MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)UserId,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      UserId = (int64_t)EntityDefinitely;
      if ( !EntityDefinitely )
        goto LABEL_257;
      maxLimitCount = EntityDefinitely->fields.maxLimitCount;
      UserId = (int64_t)UserServantCollectionEntity__getCostumeList(EntityDefinitely, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_257;
      VoiceLimitCountList = ServantLimitAddMaster__getVoiceLimitCountList(
                              MasterData_WarQuestSelectionMaster,
                              svtId,
                              maxLimitCount,
                              (System_Int32_array *)UserId,
                              0LL);
      UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserId )
        goto LABEL_257;
      UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)UserId,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !UserId )
        goto LABEL_257;
      ServantVoiceRelationMaster__GetRelationList_31450032(
        (ServantVoiceRelationMaster_o *)UserId,
        &beforeRelationList,
        &sameRelationList,
        &afterRelationList,
        svtId,
        v133);
      v134 = beforeRelationList;
      v135 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v134, v135, v136);
      v137 = sameRelationList;
      ++firstPriority[0];
      v138 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v137, v138, v139);
      if ( !VoiceLimitCountList )
        goto LABEL_257;
      v140 = *(_QWORD *)&VoiceLimitCountList->max_length;
      v141 = firstPriority[0];
      if ( (int)v140 >= 1 )
        break;
      v155 = firstPriority[0];
LABEL_203:
      v257 = afterRelationList;
      firstPriority[0] = v155;
      v258 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      ServantStatusVoiceListViewManager__AddItemServantVoiceRelation(this, firstPriority, v257, v258, v259);
      v127 = changeSvtVoiceIdList;
      LODWORD(v128) = changeSvtVoiceIdList->max_length;
      v129 = v293 + 1;
      if ( (__int64)(v293 + 1) >= (int)v128 )
        goto LABEL_204;
    }
    v142 = 0LL;
    v296 = VoiceLimitCountList;
    while ( 1 )
    {
      if ( v142 >= (unsigned int)v140 )
      {
        firstPriority[0] = v141;
        goto LABEL_253;
      }
      v156 = VoiceLimitCountList->m_Items[v142 + 1];
      v298 = v142;
      v157 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( !v125 )
      {
        firstPriority[0] = v141;
        sub_B5D69C(v157, v158);
      }
      v301 = v141;
      UserId = (int64_t)VoiceMaster__getEnableInfo(v125, v157, svtId, v156, disableCondTypeList, 0, 0, 0LL);
      if ( !UserId )
        goto LABEL_251;
      v160 = *(_DWORD *)(UserId + 24);
      v161 = UserId;
      limitCount = v156;
      if ( v160 >= 1 )
      {
        for ( i = 0; (int)i < v160; ++i )
        {
          if ( i >= v160 )
          {
LABEL_252:
            firstPriority[0] = v301;
            goto LABEL_253;
          }
          v163 = v161 + 8LL * (int)i;
          v166 = *(VoiceInfo_o **)(v163 + 32);
          v165 = (VoiceInfo_o **)(v163 + 32);
          v164 = v166;
          if ( !v166 )
            goto LABEL_251;
          voiceEntity = v164->fields.voiceEntity;
          if ( v156 > 10 )
            goto LABEL_88;
          if ( !voiceEntity )
            goto LABEL_251;
          if ( voiceEntity->fields.svtVoiceType != 2 )
            goto LABEL_88;
          condType = voiceEntity->fields.condType;
          if ( condType == 7 )
          {
            if ( voiceEntity->fields.condValue == 2 )
            {
              v169 = 1;
            }
            else
            {
              UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                         (ServantStatusVoiceListViewManager_o *)UserId,
                         svtId,
                         v156,
                         v164,
                         v159);
              if ( (UserId & 1) != 0 )
              {
                if ( i >= *(_DWORD *)(v161 + 24) )
                  goto LABEL_252;
                UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                           (ServantStatusVoiceListViewManager_o *)UserId,
                           svtId,
                           *v165,
                           v172);
                if ( (UserId & 1) == 0 )
                  goto LABEL_100;
                goto LABEL_62;
              }
              UserId = (int64_t)this->fields.itemList;
              if ( !UserId )
                goto LABEL_251;
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)v307,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserId,
                (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
              v311 = *(System_Collections_Generic_List_Enumerator_T__o *)v307;
              do
              {
                v203 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v311,
                         (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
                if ( !v203 )
                {
                  v169 = 1;
                  goto LABEL_116;
                }
                current = v311.fields.current;
                if ( !v311.fields.current
                  || (v206 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                      *(&v311.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v206)
                  || (ServantStatusVoiceListViewItem_c *)v311.fields.current->klass->_2.typeHierarchy[v206 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
                {
                  sub_B5D69C(v203, v204);
                }
                klass = v311.fields.current[10].klass;
                if ( !klass )
                  sub_B5D69C(v203, v204);
              }
              while ( HIDWORD(klass->_1.namespaze) != 2
                   || LODWORD(klass->_1.this_arg.data) != 7
                   || HIDWORD(klass->_1.this_arg.data) != voiceEntity->fields.condValue
                   || ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                        (ServantStatusVoiceListViewItem_o *)v311.fields.current,
                        v204) != svtId );
              v208 = ServantStatusListViewItem__get_SvtId(v304, 0LL);
              if ( i >= *(_DWORD *)(v161 + 24) )
              {
                v213 = sub_B5D6C8(v208);
                sub_B5D668(v213, 0LL);
              }
              ServantStatusVoiceListViewItem__SetLimitCount(
                (ServantStatusVoiceListViewItem_o *)current,
                v208,
                svtId,
                v156,
                *v165,
                v209,
                v210);
              v169 = 0;
LABEL_116:
              v4 = v304;
              *(_DWORD *)&v307[4 * v308++ + 24] = 701;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v311,
                (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
              if ( v308 && *(_DWORD *)&v307[4 * v308 + 20] == 701 )
              {
                --v308;
                if ( !v169 )
                  goto LABEL_100;
                goto LABEL_88;
              }
            }
            condType = voiceEntity->fields.condType;
          }
          else
          {
            v169 = 1;
          }
          v170 = v169 != 0;
          if ( condType != 18 )
            goto LABEL_87;
          if ( i >= *(_DWORD *)(v161 + 24) )
            goto LABEL_252;
          UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
                     (ServantStatusVoiceListViewManager_o *)UserId,
                     svtId,
                     v156,
                     *v165,
                     v159);
          if ( (UserId & 1) == 0 )
          {
            UserId = (int64_t)this->fields.itemList;
            if ( !UserId )
              goto LABEL_251;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v307,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserId,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v311 = *(System_Collections_Generic_List_Enumerator_T__o *)v307;
            while ( 1 )
            {
              v174 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v311,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v174 )
                break;
              v176 = v311.fields.current;
              if ( !v311.fields.current
                || (v177 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v311.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v177)
                || (ServantStatusVoiceListViewItem_c *)v311.fields.current->klass->_2.typeHierarchy[v177 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B5D69C(v174, v175);
              }
              v178 = v311.fields.current[10].klass;
              if ( !v178 )
                sub_B5D69C(v174, v175);
              if ( HIDWORD(v178->_1.namespaze) == 2
                && LODWORD(v178->_1.this_arg.data) == 18
                && ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
                     (ServantStatusVoiceListViewItem_o *)v311.fields.current,
                     v175) == svtId )
              {
                v179 = ServantStatusListViewItem__get_SvtId(v304, 0LL);
                if ( i >= *(_DWORD *)(v161 + 24) )
                {
                  v211 = sub_B5D6C8(v179);
                  sub_B5D668(v211, 0LL);
                }
                if ( !*v165 )
                  sub_B5D69C(v179, v180);
                v181 = (*v165)->fields.voiceEntity;
                if ( !v181 )
                  sub_B5D69C(v179, v180);
                v182 = v179;
                id = v181->fields.id;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                }
                v185 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(id, 0LL);
                if ( !v300 )
                  sub_B5D69C(0LL, v184);
                if ( !VoicePlayCondMaster__isVoiceCond(v300, v182, v185, 81, 0LL) )
                {
                  v186 = ServantStatusListViewItem__get_SvtId(v304, 0LL);
                  if ( i >= *(_DWORD *)(v161 + 24) )
                  {
                    v212 = sub_B5D6C8(v186);
                    sub_B5D668(v212, 0LL);
                  }
                  ServantStatusVoiceListViewItem__SetLimitCount(
                    (ServantStatusVoiceListViewItem_o *)v176,
                    v186,
                    svtId,
                    v156,
                    *v165,
                    v187,
                    v188);
                  v169 = 0;
                }
                break;
              }
            }
            v4 = v304;
            *(_DWORD *)&v307[4 * v308++ + 24] = 701;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v311,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            v170 = v169 != 0;
            if ( v308 && *(_DWORD *)&v307[4 * v308 + 20] == 701 )
            {
              --v308;
              if ( !v169 )
                goto LABEL_100;
            }
            else
            {
LABEL_87:
              if ( !v170 )
                goto LABEL_100;
            }
LABEL_88:
            v173 = 0;
            goto LABEL_89;
          }
          if ( i >= *(_DWORD *)(v161 + 24) )
            goto LABEL_252;
          UserId = ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
                     (ServantStatusVoiceListViewManager_o *)UserId,
                     svtId,
                     *v165,
                     v171);
          if ( !v169 || (UserId & 1) == 0 )
            goto LABEL_100;
LABEL_62:
          v173 = 1;
LABEL_89:
          UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( i >= *(_DWORD *)(v161 + 24) )
            goto LABEL_252;
          if ( !*v165 )
            goto LABEL_251;
          v189 = (*v165)->fields.voiceEntity;
          if ( !v189 )
            goto LABEL_251;
          v190 = UserId;
          v191 = v189->fields.id;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v192 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v191, 0LL);
          UserId = (int64_t)v300;
          if ( !v300 )
            goto LABEL_251;
          UserId = VoicePlayCondMaster__isVoiceCond(v300, v190, v192, 81, 0LL);
          if ( !voiceEntity )
            goto LABEL_251;
          v193 = voiceEntity->fields.condType;
          itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
          v195 = v193 == 18;
          v196 = v193 == 7;
          if ( !itemList )
            goto LABEL_251;
          size = itemList->fields._size;
          v198 = UserId;
          UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( i >= *(_DWORD *)(v161 + 24) )
            goto LABEL_252;
          v199 = *v165;
          v200 = UserId;
          v201 = v198 & (v195 || v196);
          voiceLabelSpec = v173;
          v156 = limitCount;
          v202 = (ServantStatusVoiceListViewItem_o *)sub_B5D694(ServantStatusVoiceListViewItem_TypeInfo);
          ServantStatusVoiceListViewItem___ctor(
            v202,
            size,
            v200,
            svtId,
            limitCount,
            v199,
            v301,
            v201,
            voiceLabelSpec,
            v289);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v202,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          this = v302;
          v4 = v304;
LABEL_100:
          v160 = *(_DWORD *)(v161 + 24);
        }
      }
      v155 = v301 + 1;
      v214 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      v215 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v215 = BalanceConfig_TypeInfo;
      }
      v125 = v297;
      if ( v214 == v215->static_fields->ServantIdJekyll )
        break;
      UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      v235 = BalanceConfig_TypeInfo;
      v236 = UserId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v235 = BalanceConfig_TypeInfo;
      }
      if ( v236 == v235->static_fields->ServantIdMashu1 )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( TutorialFlag__Get_29295864(115, 0LL) )
        {
          v237 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          v238 = BalanceConfig_TypeInfo;
          v239 = v237;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v238 = BalanceConfig_TypeInfo;
          }
          v229 = v301 + 1;
          EnableInfo = VoiceMaster__getEnableInfo(
                         v297,
                         v239,
                         v238->static_fields->ServantIdMashu2,
                         v156,
                         0LL,
                         0,
                         0,
                         0LL);
          if ( !EnableInfo )
          {
LABEL_256:
            firstPriority[0] = v301 + 1;
            sub_B5D69C(EnableInfo, v241);
          }
          v242 = EnableInfo;
          if ( (int)EnableInfo->max_length >= 1 )
          {
            v243 = 0LL;
            while ( 1 )
            {
              v244 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v302->fields.itemList;
              if ( !v244 )
                goto LABEL_256;
              v245 = v244->fields._size;
              UserId = ServantStatusListViewItem__get_SvtId(v304, 0LL);
              v246 = UserId;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              }
              if ( v243 >= v242->max_length )
                break;
              v247 = v242->m_Items[v243];
              ServantIdMashu2 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu2;
              v249 = (ServantStatusVoiceListViewItem_o *)sub_B5D694(ServantStatusVoiceListViewItem_TypeInfo);
              ServantStatusVoiceListViewItem___ctor(
                v249,
                v245,
                v246,
                ServantIdMashu2,
                limitCount,
                v247,
                v229,
                0,
                0,
                v289);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v244,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v249,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
              if ( (__int64)++v243 >= (int)v242->max_length )
                goto LABEL_177;
            }
LABEL_254:
            firstPriority[0] = v229;
LABEL_253:
            v287 = sub_B5D6C8(UserId);
            sub_B5D668(v287, 0LL);
          }
LABEL_177:
          v4 = v304;
          v156 = limitCount;
          this = v302;
          v155 = v301 + 2;
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v250 = NetworkManager__get_UserId(0LL);
        v251 = BalanceConfig_TypeInfo;
        v252 = v250;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v125 = v297;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v251 = BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v125 = v297;
        }
        static_fields = v251->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserId = CondType__IsQuestPhaseClear(v252, MashuTdGradeUpQuestId, MashuTdGradeUpQuestPhase, -1, 0, 0LL);
        if ( (UserId & 1) != 0 )
        {
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          UserId = (int64_t)v294;
          if ( !v294 )
            goto LABEL_255;
          UserId = ServantLimitAddMaster__TryGetEntity(
                     v294,
                     &entity,
                     BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                     v156,
                     0LL);
          if ( (UserId & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_255;
            UserId = (int64_t)BalanceConfig_TypeInfo;
            svtVoiceId = entity->fields.svtVoiceId;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              UserId = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( svtVoiceId != *(_DWORD *)(*(_QWORD *)(UserId + 184) + 344LL) )
            {
              v143 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
              v144 = BalanceConfig_TypeInfo;
              v145 = v143;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v144 = BalanceConfig_TypeInfo;
              }
              v301 = v155;
              UserId = (int64_t)VoiceMaster__getEnableInfo(
                                  v125,
                                  v145,
                                  v144->static_fields->ServantIdMashu3,
                                  v156,
                                  0LL,
                                  0,
                                  0,
                                  0LL);
              if ( !UserId )
                goto LABEL_251;
              v147 = UserId;
              if ( *(int *)(UserId + 24) >= 1 )
              {
                v148 = 0LL;
                while ( 1 )
                {
                  v149 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
                  if ( !v149 )
                    break;
                  v150 = v149->fields._size;
                  UserId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
                  v151 = UserId;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( v148 >= *(unsigned int *)(v147 + 24) )
                    goto LABEL_252;
                  v152 = *(VoiceInfo_o **)(v147 + 32 + 8 * v148);
                  ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
                  v154 = (ServantStatusVoiceListViewItem_o *)sub_B5D694(ServantStatusVoiceListViewItem_TypeInfo);
                  ServantStatusVoiceListViewItem___ctor(
                    v154,
                    v150,
                    v151,
                    ServantIdMashu3,
                    limitCount,
                    v152,
                    v301,
                    0,
                    0,
                    v289);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v149,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v154,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                  v4 = v304;
                  if ( (__int64)++v148 >= *(int *)(v147 + 24) )
                    goto LABEL_36;
                }
LABEL_251:
                firstPriority[0] = v301;
                sub_B5D69C(UserId, v146);
              }
LABEL_36:
              v155 = v301 + 1;
LABEL_156:
              v125 = v297;
            }
          }
        }
      }
LABEL_200:
      VoiceLimitCountList = v296;
      v141 = v155;
      LODWORD(v140) = v296->max_length;
      v142 = v298 + 1;
      if ( (__int64)(v298 + 1) >= (int)v140 )
        goto LABEL_203;
    }
    v216 = DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)v297,
             (System_String_o *)StringLiteral_2254/*"B050"*/,
             (const MethodInfo_23FB260 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__GetEntity__);
    UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_255;
    v218 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)UserId,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v219 = NetworkManager__get_UserId(0LL);
    UserId = ServantStatusListViewItem__get_SvtId(v304, 0LL);
    if ( !v218 )
      goto LABEL_255;
    UserId = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v218, v219, UserId, 0LL);
    if ( !v216 )
      goto LABEL_255;
    if ( v216->fields.condId == 17 )
    {
      if ( !UserId )
        goto LABEL_255;
      UserId = UserServantCollectionEntity__IsPlayed((UserServantCollectionEntity_o *)UserId, v216->fields.condNum, 0LL);
      if ( (UserId & 1) == 0 )
      {
        v4 = v304;
        goto LABEL_200;
      }
    }
    v220 = ServantStatusListViewItem__get_SvtId(v304, 0LL);
    v221 = BalanceConfig_TypeInfo;
    v222 = v220;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v221 = BalanceConfig_TypeInfo;
    }
    UserId = (int64_t)VoiceMaster__getEnableInfo(v297, v222, v221->static_fields->ServantIdHyde, v156, 0LL, 0, 0, 0LL);
    if ( !UserId )
      goto LABEL_255;
    v223 = UserId;
    if ( *(int *)(UserId + 24) >= 1 )
    {
      v224 = 0LL;
      v299 = UserId + 32;
      while ( 1 )
      {
        v225 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
        if ( !v225 )
          break;
        v226 = v225->fields._size;
        v227 = this;
        UserId = ServantStatusListViewItem__get_SvtId(v304, 0LL);
        v228 = UserId;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        v229 = v155;
        if ( v224 >= *(unsigned int *)(v223 + 24) )
          goto LABEL_254;
        v230 = *(VoiceInfo_o **)(v299 + 8 * v224);
        ServantIdHyde = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
        v232 = (ServantStatusVoiceListViewItem_o *)sub_B5D694(ServantStatusVoiceListViewItem_TypeInfo);
        v233 = ServantIdHyde;
        v234 = (EventMissionProgressRequest_Argument_ProgressData_o *)v232;
        v155 = v229;
        ServantStatusVoiceListViewItem___ctor(v232, v226, v228, v233, limitCount, v230, v229, 0, 0, v289);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v225,
          v234,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v224;
        this = v227;
        if ( (__int64)v224 >= *(int *)(v223 + 24) )
          goto LABEL_155;
      }
LABEL_255:
      firstPriority[0] = v155;
      sub_B5D69C(UserId, v217);
    }
LABEL_155:
    v4 = v304;
    v155 = v301 + 2;
    goto LABEL_156;
  }
LABEL_204:
  v260 = this->fields.itemList;
  if ( !v260 )
    goto LABEL_257;
  v261 = v260->fields._size;
  v262 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusVoiceListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v262,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem___ctor__);
  v263 = v261 - 1;
  if ( (int)v261 - 1 >= 1 )
  {
    v264 = 0LL;
    v265 = v263;
    v266 = 5LL;
    svtIda = v263;
    do
    {
      v267 = this->fields.itemList;
      if ( !v267 )
        goto LABEL_257;
      if ( v264 >= (unsigned int)v267->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v268 = (ServantStatusVoiceListViewItem_o *)v267->fields._items->m_Items[v264];
      if ( !v268 )
        goto LABEL_257;
      v269 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v268->klass->_2.bitflags2 + 1) < (unsigned int)v269
        || (ServantStatusVoiceListViewItem_c *)v268->klass->_2.typeHierarchy[v269 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        goto LABEL_257;
      }
      UserId = (int64_t)ServantStatusVoiceListViewItem__get_OpenName(v268, v123);
      if ( UserId )
      {
        UserId = ServantStatusVoiceListViewItem__get_DispNum(v268, v123);
        if ( !(_DWORD)UserId )
        {
          if ( !v262 )
            goto LABEL_257;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v262,
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Clear__);
          if ( (__int64)(v264 + 1) < v261 )
          {
            v271 = v266;
            while ( 1 )
            {
              v272 = v302->fields.itemList;
              if ( !v272 )
                break;
              if ( v272->fields._size <= (unsigned int)(v271 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v273 = (ServantStatusVoiceListViewItem_o *)*((_QWORD *)&v272->fields._items->obj.klass + v271);
              if ( !v273 )
                break;
              v274 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v273->klass->_2.bitflags2 + 1) < (unsigned int)v274
                || (ServantStatusVoiceListViewItem_c *)v273->klass->_2.typeHierarchy[v274 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                break;
              }
              OpenName = ServantStatusVoiceListViewItem__get_OpenName(v273, v123);
              v277 = ServantStatusVoiceListViewItem__get_OpenName(v268, v276);
              UserId = System_String__op_Equality(OpenName, v277, 0LL);
              if ( (UserId & 1) != 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v262,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v273,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__Add__);
              if ( (int)++v271 - 4 >= (int)v261 )
                goto LABEL_229;
            }
LABEL_257:
            sub_B5D69C(UserId, v123);
          }
LABEL_229:
          v265 = svtIda;
          if ( v262->fields._size >= 1 )
          {
            ServantStatusVoiceListViewItem__SetNameNum(v268, 1, v270);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v307,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v262,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewItem__GetEnumerator__);
            v278 = 2;
            v309 = *(System_Collections_Generic_List_Enumerator_T__o *)v307;
            while ( 1 )
            {
              v279 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v309,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__MoveNext__);
              if ( !v279 )
                break;
              if ( !v309.fields.current
                || (v282 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v309.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v282)
                || (ServantStatusVoiceListViewItem_c *)v309.fields.current->klass->_2.typeHierarchy[v282 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
              {
                sub_B5D69C(v279, v280);
              }
              v283 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v309.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v283 )
              {
                if ( (ServantStatusVoiceListViewItem_c *)v309.fields.current->klass->_2.typeHierarchy[v283 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
                  v284 = v309.fields.current;
                else
                  v284 = 0LL;
              }
              else
              {
                v284 = 0LL;
              }
              ServantStatusVoiceListViewItem__SetNameNum((ServantStatusVoiceListViewItem_o *)v284, v278++, v281);
            }
            *(_DWORD *)&v307[4 * v308++ + 24] = 1600;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v309,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewItem__Dispose__);
            if ( v308 )
            {
              if ( *(_DWORD *)&v307[4 * v308 + 20] == 1600 )
                --v308;
            }
          }
        }
      }
      this = v302;
      ++v264;
      ++v266;
    }
    while ( (__int64)v264 < v265 );
  }
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12195/*"SERVANT_STATUS_VOICE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_257;
  UILabel__set_text(explanationLabel, (System_String_o *)UserId, 0LL);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  UserId = (int64_t)LocalizationManager__Get(v290, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_257;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)UserId, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
}


void __fastcall ServantStatusVoiceListViewManager__DestroyList(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


ServantStatusVoiceListViewItem_o *__fastcall ServantStatusVoiceListViewManager__GetItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EBF09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusVoiceListViewItem_TypeInfo, v6, v7, v8);
    byte_42EBF09 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (ServantStatusVoiceListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantStatusVoiceListViewItem_TypeInfo )
    return (ServantStatusVoiceListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityCondAddItem(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  struct VoiceEntity_o *voiceEntity; // x8
  __int64 svtVoiceType; // x8
  __int64 v19; // x20
  struct VoiceEntity_o *v20; // x8
  System_String_o *v21; // x19
  System_String_o *v22; // x0
  __int64 v23; // x20
  int v24; // w8
  System_String_o *v25; // x19
  unsigned int v26; // w21
  __int64 v27; // x22
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v31; // x0

  if ( (byte_42EBF07 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, svtId, limitCount, voiceInfo);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v11, v12, v13);
    byte_42EBF07 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)ServantVoiceMaster__getEntity_31451972(
                                (ServantVoiceMaster_o *)Instance,
                                svtId,
                                limitCount,
                                v16);
  if ( !voiceInfo )
    goto LABEL_25;
  voiceEntity = voiceInfo->fields.voiceEntity;
  if ( !voiceEntity || !Instance )
    goto LABEL_25;
  svtVoiceType = voiceEntity->fields.svtVoiceType;
  if ( (unsigned int)svtVoiceType >= LODWORD(Instance->fields.datalist) )
  {
LABEL_26:
    v31 = sub_B5D6C8(Instance);
    sub_B5D668(v31, 0LL);
  }
  v19 = *((_QWORD *)&Instance->fields.lookup + svtVoiceType);
  if ( !v19 )
    return 0;
  Instance = (DataManager_o *)System_Int32__ToString((int)voiceInfo + 52, 0LL);
  v20 = voiceInfo->fields.voiceEntity;
  if ( !v20
    || (v21 = (System_String_o *)Instance, (Instance = (DataManager_o *)v20->fields.id) == 0LL)
    || (v22 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass[1]._1.image),
        Instance = (DataManager_o *)System_String__Concat_44580072(
                                      v21,
                                      (System_String_o *)StringLiteral_16096/*"_"*/,
                                      v22,
                                      0LL),
        (v23 = *(_QWORD *)(v19 + 32)) == 0) )
  {
LABEL_25:
    sub_B5D69C(Instance, v15);
  }
  v24 = *(_DWORD *)(v23 + 24);
  if ( v24 < 1 )
    return 0;
  v25 = (System_String_o *)Instance;
  v26 = 0;
  while ( 1 )
  {
    if ( v26 >= v24 )
      goto LABEL_26;
    v27 = *(_QWORD *)(v23 + 8LL * (int)v26 + 32);
    if ( !v27 )
      goto LABEL_25;
    v28 = *(_QWORD *)(v27 + 64);
    if ( !v28 )
      goto LABEL_25;
    if ( !*(_DWORD *)(v28 + 24) )
      goto LABEL_26;
    v29 = *(_QWORD *)(v28 + 32);
    if ( !v29 )
      goto LABEL_25;
    Instance = (DataManager_o *)System_String__op_Equality(*(System_String_o **)(v29 + 16), v25, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( *(_DWORD *)(v27 + 80) )
        return 1;
    }
    v24 = *(_DWORD *)(v23 + 24);
    if ( (int)++v26 >= v24 )
      return 0;
  }
}


bool __fastcall ServantStatusVoiceListViewManager__IsSvtVoiceEntityFriendshipCheck(
        ServantStatusVoiceListViewManager_o *this,
        int32_t svtId,
        VoiceInfo_o *voiceInfo,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t Instance; // x0
  __int64 v16; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ServantVoiceCond_array *servantVoiceConds; // x22
  int max_length; // w8
  int64_t v20; // x19
  unsigned int v21; // w23
  bool v22; // w24
  ServantVoiceCond_o *v23; // x9
  int32_t condType; // w8
  int value; // w26
  __int64 v26; // x20
  __int64 v27; // x21
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42EBF08 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, svtId, (_DWORD)voiceInfo, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EBF08 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                        MasterData_WarQuestSelectionMaster,
                        Instance,
                        svtId,
                        0LL);
  if ( !voiceInfo )
    goto LABEL_29;
  servantVoiceConds = voiceInfo->fields.servantVoiceConds;
  if ( !servantVoiceConds )
    goto LABEL_29;
  max_length = servantVoiceConds->max_length;
  if ( max_length >= 1 )
  {
    v20 = Instance;
    v21 = 0;
    v22 = 1;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v29 = sub_B5D6C8(Instance);
        sub_B5D668(v29, 0LL);
      }
      v23 = servantVoiceConds->m_Items[v21];
      if ( !v23 )
        break;
      condType = v23->fields.condType;
      value = v23->fields.value;
      if ( condType == 20 || condType == 3 )
        v22 = 0;
      if ( condType == 3 || condType == 20 )
      {
        if ( !v20 )
          break;
        v26 = *(_QWORD *)(v20 + 100);
        v27 = *(_QWORD *)(v20 + 108);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v30.fields.currentCryptoKey = v26;
        *(_QWORD *)&v30.fields.fakeValue = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
        if ( (int)Instance >= value )
          v22 = 1;
      }
      max_length = servantVoiceConds->max_length;
      if ( (int)++v21 >= max_length )
        return v22;
    }
LABEL_29:
    sub_B5D69C(Instance, v16);
  }
  return 1;
}


void __fastcall ServantStatusVoiceListViewManager__OnClickListView(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusVoiceListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x22
  __int64 v11; // x10
  ServantStatusVoiceListViewManager_CallbackFunc_o *callbackFunc; // x21
  int v13; // w20
  int32_t Index; // w0
  int32_t v15; // w1

  v9 = this;
  if ( (byte_42EBF0F & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B5D5C4(
                                                    &ServantStatusVoiceListViewItem_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)method,
                                                    v3);
    byte_42EBF0F = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v11 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (ServantStatusVoiceListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  if ( LOBYTE(linkItem[1].fields.sortValue2B) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      v13 = BYTE1(linkItem[1].fields.sortValue2B);
      Index = ListViewObject__get_Index(obj, 0LL);
      if ( v13 )
        v15 = 2;
      else
        v15 = 1;
      ServantStatusVoiceListViewManager_CallbackFunc__Invoke(callbackFunc, v15, Index, 0LL);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__OnMoveEnd(
        ServantStatusVoiceListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EBF0E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBF0E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBF0C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EBF0C = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__RequestListObject_31454404(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBF0D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EBF0D = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusVoiceListViewObject__Init(
        (ServantStatusVoiceListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusVoiceListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        ServantStatusVoiceListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_31453464(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetMode_31453464(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        int32_t select,
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  __int64 v35; // x11
  _BOOL8 v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x1
  int size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v40; // x19
  unsigned int v41; // w21
  ServantStatusVoiceListViewObject_o *v42; // x20
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  int32_t v46; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v47; // x20
  int v48; // w8
  __int64 v49; // x23
  ServantStatusVoiceListViewObject_o *v50; // x21
  System_Action_o *v51; // x22
  const MethodInfo *v52; // x3
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBF0B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, select, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Count__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__get_Item__, v22, v23, v24);
    sub_B5D5C4(&ServantStatusVoiceListViewItem_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_ServantStatusVoiceListViewManager_OnMoveEnd__, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v31, v32, v33);
    byte_42EBF0B = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( mode == 2 )
  {
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v53,
      itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    for ( i = v53; ; BYTE1(i.fields.current[12].klass) = HIDWORD(i.fields.current[1].klass) == select )
    {
      v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v36 )
        break;
      if ( !i.fields.current )
        sub_B5D69C(v36, v37);
      v35 = *(&ServantStatusVoiceListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&i.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v35
        || (ServantStatusVoiceListViewItem_c *)i.fields.current->klass->_2.typeHierarchy[v35 - 1] != ServantStatusVoiceListViewItem_TypeInfo )
      {
        sub_B5D69C(v36, v37);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                v38);
    if ( !itemList )
      goto LABEL_35;
    size = itemList->fields._size;
    v40 = itemList;
    if ( size >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        if ( size <= v41 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v42 = (ServantStatusVoiceListViewObject_o *)v40->fields._items->m_Items[v41];
        if ( !v42 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusVoiceListViewObject__Init(
          v42,
          4,
          0LL,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v43);
        size = v40->fields._size;
        if ( (int)++v41 >= size )
          return;
      }
      goto LABEL_35;
    }
  }
  else
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
    if ( mode == 3 )
    {
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusVoiceListViewManager__get_ClippingObjectList(
                                                                                                  this,
                                                                                                  v44);
      if ( !itemList )
        goto LABEL_35;
      v46 = itemList->fields._size;
      v47 = itemList;
      if ( v46 < 1 )
      {
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
          0.2,
          0LL);
      }
      else
      {
        this->fields.callbackCount = v46;
        v48 = itemList->fields._size;
        if ( v48 >= 1 )
        {
          v49 = 0LL;
          while ( 1 )
          {
            if ( v48 <= (unsigned int)v49 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v50 = (ServantStatusVoiceListViewObject_o *)v47->fields._items->m_Items[v49];
            v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v51, (Il2CppObject *)this, Method_ServantStatusVoiceListViewManager_OnMoveEnd__, 0LL);
            if ( !v50 )
              break;
            v56 = UnityEngine_Vector3__get_zero(0LL);
            ServantStatusVoiceListViewObject__Init(
              v50,
              5,
              v51,
              v56.fields.x,
              *(UnityEngine_Vector3_o *)&v56.fields.y,
              v52);
            v48 = v47->fields._size;
            if ( (int)++v49 >= v48 )
              return;
          }
LABEL_35:
          sub_B5D69C(itemList, *(_QWORD *)&mode);
        }
      }
    }
    else if ( mode == 1 )
    {
      ServantStatusVoiceListViewManager__RequestListObject_31454404(this, 3, v45);
    }
  }
}


void __fastcall ServantStatusVoiceListViewManager__SetMode_31454344(
        ServantStatusVoiceListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x3

  this->fields.callbackFunc2 = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusVoiceListViewManager__SetMode_31453464(this, mode, -1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager__SetObjectItem(
        ServantStatusVoiceListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_42EBF0A & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewManager_o *)sub_B5D5C4(
                                                    &ServantStatusVoiceListViewObject_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)item,
                                                    method);
    byte_42EBF0A = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusVoiceListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusVoiceListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusVoiceListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v13 = 3;
  else
    v13 = 2;
  ServantStatusVoiceListViewObject__Init(
    (ServantStatusVoiceListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall ServantStatusVoiceListViewManager__add_callbackFunc(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusVoiceListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusVoiceListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewManager_o *v11; // x0
  ServantStatusVoiceListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBEFF & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBEFF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v8->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantStatusVoiceListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantStatusVoiceListViewManager__add_callbackFunc2(
        ServantStatusVoiceListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBF01 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBF01 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantStatusVoiceListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ClippingObjectList(
        ServantStatusVoiceListViewManager_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  ServantStatusVoiceListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EBF04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EBF04 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (ServantStatusVoiceListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)ServantStatusVoiceListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v29;
}


System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *__fastcall ServantStatusVoiceListViewManager__get_ObjectList(
        ServantStatusVoiceListViewManager_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EBF03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EBF03 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusVoiceListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusVoiceListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusVoiceListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusVoiceListViewObject__o *)v29;
}


void __fastcall ServantStatusVoiceListViewManager__remove_callbackFunc(
        ServantStatusVoiceListViewManager_o *this,
        ServantStatusVoiceListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusVoiceListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBF00 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBF00 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusVoiceListViewManager_CallbackFunc_c *)v8->klass != ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantStatusVoiceListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall ServantStatusVoiceListViewManager__remove_callbackFunc2(
        ServantStatusVoiceListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusVoiceListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EBF02 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBF02 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantStatusVoiceListViewManager__get_ObjectList(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager_CallbackFunc___ctor(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ServantStatusVoiceListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E5DAB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&ServantStatusVoiceListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5DAB = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(ServantStatusVoiceListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__EndInvoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewManager_CallbackFunc__Invoke(
        ServantStatusVoiceListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  ServantStatusVoiceListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantStatusVoiceListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  ServantStatusVoiceListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantStatusVoiceListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}