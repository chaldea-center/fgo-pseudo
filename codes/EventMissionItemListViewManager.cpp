void __fastcall EventMissionItemListViewManager___ctor(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E904F & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E904F = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dialogTitle, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dialogMessage, v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dialogGetable, v20, v21, v22, v23, v24, v25, v26);
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  }
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager__AcceptReward(
        EventMissionItemListViewManager_o *this,
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  __int64 v101; // x23
  __int64 Instance; // x0
  const MethodInfo *v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v112; // x8
  const MethodInfo *v113; // x1
  System_Text_StringBuilder_o *v114; // x21
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Text_StringBuilder_o *v121; // x0
  System_Text_StringBuilder_o *v122; // x21
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  __int64 v129; // x28
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  Il2CppObject **v136; // x22
  __int64 v137; // x24
  il2cpp_array_size_t v138; // w21
  Il2CppClass **v139; // x27
  Il2CppClass *v140; // x8
  char *v141; // x27
  Il2CppClass *v142; // t1
  EventRewardSetEntity_o *SetRewardData; // x23
  System_Int32_array **v144; // x1
  Il2CppObject **v145; // x20
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Int32_array **name; // x1
  struct GetSvts_array *getSvtList; // x8
  SummonAssetManager_o *v160; // x19
  System_Action_o *v161; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v162; // x23
  __int64 v163; // x28
  GiftEntity_o **m_Items; // x21
  GiftEntity_o *v165; // x8
  GiftEntity_o *v166; // x8
  ServantEntity_o *v167; // x25
  bool IsCombineMaterial; // w26
  System_String_o *v169; // x0
  System_Text_StringBuilder_o *klass; // x26
  GiftEntity_o *v171; // x8
  Il2CppObject *v172; // x25
  Il2CppObject *v173; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v174; // x1
  GiftEntity_o *v175; // x8
  GiftEntity_o *v176; // x8
  bool IsCountableWithPlus; // w0
  Il2CppObject **v178; // x8
  Il2CppObject *v179; // x26
  System_Text_StringBuilder_o *v180; // x25
  int32_t getQpValue; // w8
  GiftEntity_o *v182; // x8
  System_String_o *v183; // x27
  Il2CppObject *v184; // x0
  System_Text_StringBuilder_o *monitor; // x26
  System_String_o *v186; // x1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v187; // x22
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Action_o *v194; // x22
  CommonUI_o *v195; // x19
  System_String_o *v196; // x0
  System_String_o *v197; // x0
  Il2CppObject *v198; // x22
  System_String_o *v199; // x20
  System_Action_o *v200; // x21
  __int64 v201; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v202; // [xsp+38h] [xbp-78h]
  __int64 v203; // [xsp+40h] [xbp-70h]
  int32_t num; // [xsp+4Ch] [xbp-64h] BYREF
  WarEntity_o *v205; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42E903A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor___68739288, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__, v62, v63, v64);
    sub_B5D5C4(&EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__, v68, v69, v70);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__, v71, v72, v73);
    sub_B5D5C4(&EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_8840/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_23975/*"{0}×{1:#,0}"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_24017/*"×"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_8835/*"MISSION_ACTION_ITEM_FORMAT"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_1/*""*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_30/*"\n "*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_24279/*"＋"*/, v98, v99, v100);
    byte_42E903A = 1;
  }
  v205 = 0LL;
  entity = 0LL;
  v101 = sub_B5D694(EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass56_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_0_o *)v101,
    0LL);
  if ( !v101 )
    goto LABEL_122;
  *(_QWORD *)(v101 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v101 + 16),
    (System_Int32_array **)this,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_122;
  if ( !Instance )
    goto LABEL_122;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v112 = this->fields.missionToRecieve;
  if ( !v112 )
    goto LABEL_122;
  if ( !Instance )
    goto LABEL_122;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v112->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v113);
  v114 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v114, 0LL);
  *(_QWORD *)(v101 + 32) = v114;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v101 + 32),
    (System_Int32_array **)v114,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v121 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v121, 0LL);
  v122 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v122, 0LL);
  *(_QWORD *)(v101 + 24) = v122;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v101 + 24),
    (System_Int32_array **)v122,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  v129 = sub_B5D694(EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass56_1___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v129,
    0LL);
  if ( !v129 )
    goto LABEL_122;
  *(_QWORD *)(v129 + 40) = v101;
  v136 = (Il2CppObject **)(v129 + 40);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v129 + 40),
    (System_Int32_array **)v101,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  Instance = (__int64)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_122;
  if ( *(_DWORD *)(Instance + 80) == 1 )
  {
    *(_DWORD *)(v129 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_122;
    v137 = *(_QWORD *)&GiftListById->max_length;
    if ( (int)v137 >= 1 )
    {
      v138 = 0;
      while ( 1 )
      {
        v139 = &GiftListById->obj.klass + (int)v138;
        v142 = v139[4];
        v141 = (char *)(v139 + 4);
        v140 = v142;
        if ( !v142 )
          break;
        Instance = Gift__IsServant_28424960(HIDWORD(v140->_1.name), 0LL);
        if ( (Instance & 1) == 0 )
        {
          if ( v138 >= GiftListById->max_length )
            goto LABEL_123;
          if ( !*(_QWORD *)v141 )
            break;
          Instance = Gift__IsCommandCode_28425356(*(_DWORD *)(*(_QWORD *)v141 + 20LL), 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v138 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !*(_QWORD *)v141 )
              break;
            Instance = Gift__IsCostumeRelease(*(_DWORD *)(*(_QWORD *)v141 + 20LL), 0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( v138 >= GiftListById->max_length )
                goto LABEL_123;
              if ( !*(_QWORD *)v141 || !Instance )
                break;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &entity,
                           *(_DWORD *)(*(_QWORD *)v141 + 24LL),
                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !entity || !Instance )
                  break;
                Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, entity->fields.id, 0LL);
                if ( (Instance & 1) == 0 )
                  ++*(_DWORD *)(v129 + 24);
              }
            }
          }
        }
        if ( (int)++v138 >= (int)v137 )
          goto LABEL_41;
        if ( v138 >= GiftListById->max_length )
        {
LABEL_123:
          v201 = sub_B5D6C8(Instance);
          sub_B5D668(v201, 0LL);
        }
      }
LABEL_122:
      sub_B5D69C(Instance, v103);
    }
LABEL_41:
    v203 = v129;
    v202 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v202,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v162 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v162,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v137 >= 1 )
    {
      v163 = 0LL;
      m_Items = GiftListById->m_Items;
      do
      {
        if ( (unsigned int)v163 >= GiftListById->max_length )
          goto LABEL_123;
        v165 = m_Items[v163];
        if ( !v165 )
          goto LABEL_122;
        Instance = Gift__IsServant_28424960(v165->fields.type, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_122;
          Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( (unsigned int)v163 >= GiftListById->max_length )
            goto LABEL_123;
          v166 = m_Items[v163];
          if ( !v166 )
            goto LABEL_122;
          if ( !Instance )
            goto LABEL_122;
          Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v166->fields.objectId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_122;
          v167 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
          Instance = SvtType__IsStatusUp(v167->fields.type, 0LL);
          if ( IsCombineMaterial || (Instance & 1) != 0 )
          {
            if ( !*v136 )
              goto LABEL_122;
            Instance = (__int64)(*v136)[2].klass;
            if ( !Instance )
              goto LABEL_122;
            v169 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 360LL))(
                                        Instance,
                                        *(_QWORD *)(*(_QWORD *)Instance + 368LL));
            Instance = System_String__IsNullOrEmpty(v169, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !*v136 )
                goto LABEL_122;
              Instance = (__int64)(*v136)[2].klass;
              if ( !Instance )
                goto LABEL_122;
              Instance = (__int64)System_Text_StringBuilder__Append_42953744(
                                    (System_Text_StringBuilder_o *)Instance,
                                    (System_String_o *)StringLiteral_30/*"\n "*/,
                                    0LL);
            }
            if ( !*v136 )
              goto LABEL_122;
            klass = (System_Text_StringBuilder_o *)(*v136)[2].klass;
            Instance = (__int64)ServantEntity__getName(v167, 0, -1, 0LL);
            if ( (unsigned int)v163 >= GiftListById->max_length )
              goto LABEL_123;
            v171 = m_Items[v163];
            if ( !v171 )
              goto LABEL_122;
            v172 = (Il2CppObject *)Instance;
            num = v171->fields.num;
            v173 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
            Instance = (__int64)System_String__Format_44573324((System_String_o *)StringLiteral_23975/*"{0}×{1:#,0}"*/, v172, v173, 0LL);
            if ( !klass )
              goto LABEL_122;
            Instance = (__int64)System_Text_StringBuilder__Append_42953744(klass, (System_String_o *)Instance, 0LL);
            if ( (unsigned int)v163 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !v162 )
              goto LABEL_122;
            v174 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v163];
            Instance = (__int64)v162;
LABEL_108:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              v174,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
          }
        }
        else
        {
          if ( (unsigned int)v163 >= GiftListById->max_length )
            goto LABEL_123;
          v175 = m_Items[v163];
          if ( !v175 )
            goto LABEL_122;
          Instance = Gift__IsItem_28424904(v175->fields.type, 0LL);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_122;
            Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( (unsigned int)v163 >= GiftListById->max_length )
              goto LABEL_123;
            v176 = m_Items[v163];
            if ( !v176 || !Instance )
              goto LABEL_122;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &v205,
                         v176->fields.objectId,
                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v205 || !Instance )
                goto LABEL_122;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v205->fields.id, 0LL);
              if ( (Instance & 1) == 0 )
              {
                if ( !v205 )
                  goto LABEL_122;
                IsCountableWithPlus = ItemType__IsCountableWithPlus(v205->fields.bannerId, 0LL);
                v178 = (Il2CppObject **)&StringLiteral_24279/*"＋"*/;
                if ( !IsCountableWithPlus )
                  v178 = (Il2CppObject **)&StringLiteral_24017/*"×"*/;
                v179 = *v178;
                v180 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
                System_Text_StringBuilder___ctor(v180, 0LL);
                if ( !v205 || !v180 )
                  goto LABEL_122;
                System_Text_StringBuilder__Append_42953744(v180, v205->fields.age, 0LL);
                if ( this->fields.isQpMaxAlert && this->fields.getQpValue )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                  getQpValue = this->fields.getQpValue;
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                  if ( (unsigned int)v163 >= GiftListById->max_length )
                    goto LABEL_123;
                  v182 = m_Items[v163];
                  if ( !v182 )
                    goto LABEL_122;
                  getQpValue = v182->fields.num;
                }
                v183 = (System_String_o *)Instance;
                num = getQpValue;
                v184 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
                Instance = (__int64)System_Text_StringBuilder__AppendFormat_42960296(v180, v183, v179, v184, 0LL);
                if ( !*v136 )
                  goto LABEL_122;
                monitor = (System_Text_StringBuilder_o *)(*v136)[1].monitor;
                if ( *(int *)(v203 + 24) >= 2 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8835/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                  if ( !monitor )
                    goto LABEL_122;
                  Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                                        monitor,
                                        (System_String_o *)Instance,
                                        (Il2CppObject *)v180,
                                        0LL);
                  if ( !*v136 )
                    goto LABEL_122;
                  Instance = (__int64)(*v136)[1].monitor;
                  if ( !Instance )
                    goto LABEL_122;
                  v186 = (System_String_o *)StringLiteral_30/*"\n "*/;
                }
                else
                {
                  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v180->klass->vtable._3_ToString.method)(
                               v180,
                               v180->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                  if ( !monitor )
                    goto LABEL_122;
                  v186 = (System_String_o *)Instance;
                  Instance = (__int64)monitor;
                }
                Instance = (__int64)System_Text_StringBuilder__Append_42953744(
                                      (System_Text_StringBuilder_o *)Instance,
                                      v186,
                                      0LL);
                if ( (unsigned int)v163 >= GiftListById->max_length )
                  goto LABEL_123;
                Instance = (__int64)v202;
                if ( !v202 )
                  goto LABEL_122;
                v174 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v163];
                goto LABEL_108;
              }
            }
          }
        }
        ++v163;
      }
      while ( (int)v163 < (int)v137 );
    }
    v187 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v187,
      (System_Collections_Generic_IEnumerable_T__o *)v202,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_GiftEntity___ctor___68739288);
    *(_QWORD *)(v203 + 16) = v187;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v203 + 16),
      (System_Int32_array **)v187,
      v188,
      v189,
      v190,
      v191,
      v192,
      v193);
    Instance = *(_QWORD *)(v203 + 16);
    if ( !Instance )
      goto LABEL_122;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v162,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v194 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v194,
      (Il2CppObject *)v203,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v194, 0LL);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, v103);
    v144 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v129 + 32) = StringLiteral_1/*""*/;
    v145 = (Il2CppObject **)(v129 + 32);
    sub_B5D560((BattleServantConfConponent_o *)(v129 + 32), v144, v146, v147, v148, v149, v150, v151);
    if ( !SetRewardData )
      goto LABEL_122;
    name = (System_Int32_array **)SetRewardData->fields.name;
    *v145 = (Il2CppObject *)name;
    sub_B5D560((BattleServantConfConponent_o *)(v129 + 32), name, v152, v153, v154, v155, v156, v157);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (__int64)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_122;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v160 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v161 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v161,
        (Il2CppObject *)v129,
        Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__,
        0LL);
      if ( !v160 )
        goto LABEL_122;
      SummonAssetManager__LoadSummonAssets(v160, v161, 0LL);
    }
    else
    {
      v195 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v196 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v197 = System_String__Format(v196, *v145, 0LL);
      v198 = *v136;
      v199 = v197;
      v200 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v200,
        v198,
        Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__,
        0LL);
      if ( !v195 )
        goto LABEL_122;
      CommonUI__OpenNotificationDialog(
        v195,
        (System_String_o *)StringLiteral_1/*""*/,
        v199,
        v200,
        150,
        0,
        0,
        0,
        1,
        0,
        1,
        0,
        0LL,
        0LL);
    }
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_122;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__CreateList(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  EventMissionItemListViewManager__CreateList_25971028(this, missionList, eventId, isDailyMission, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__CreateList_25971028(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  __int64 v39; // x1
  struct UIScrollView_o *scrollView; // x8
  WarEntity_o *Entity; // x23
  bool v42; // w8
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x8
  unsigned __int64 v50; // x26
  bool v51; // w22
  EventMissionEntity_o *v52; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  EventMissionItemListViewItem_o *v54; // x24
  const MethodInfo *v55; // x3
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v58; // x21
  __int64 v59; // x0

  if ( (byte_42E9029 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)missionList, eventId, isDailyMission);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, v35, v36, v37);
    byte_42E9029 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_36;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             eventId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v42 = Instance > *(_QWORD *)&Entity->fields.eventId && Instance <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v42;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  Instance = UserMissionNewManager__ReadData(0LL);
  if ( !missionList )
    goto LABEL_36;
  v49 = *(_QWORD *)&missionList->max_length;
  if ( (int)v49 >= 1 )
  {
    v50 = 0LL;
    v51 = isDailyMission;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)v49 )
      {
        v59 = sub_B5D6C8(Instance);
        sub_B5D668(v59, 0LL);
      }
      v52 = missionList->m_Items[v50];
      itemList = this->fields.itemList;
      v54 = (EventMissionItemListViewItem_o *)sub_B5D694(EventMissionItemListViewItem_TypeInfo);
      EventMissionItemListViewItem___ctor(v54, v52, v51, v55);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v49) = missionList->max_length;
      if ( (__int64)++v50 >= (int)v49 )
        goto LABEL_22;
    }
LABEL_36:
    sub_B5D69C(Instance, v39);
  }
LABEL_22:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !byte_42E90E5 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)sort, (_DWORD)v43, v44);
    byte_42E90E5 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
  EventMissionItemListViewManager__setList(this, (const MethodInfo *)sort);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v58 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v58 )
      goto LABEL_36;
    UILabel__set_text(v58, (System_String_o *)Instance, 0LL);
  }
  this->fields.currentEventId = eventId;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


TerminalTransitionInfo_o *__fastcall EventMissionItemListViewManager__CreateTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v20; // x21
  EventMissionActionInfo_o *v21; // x20
  EventMissionActionEntity_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **vals; // x1
  EventMissionItemListViewManager_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42E9038 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, missionId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5, v6, v7);
    sub_B5D5C4(&EventMissionActionInfo_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&TerminalTransitionInfo_TypeInfo, v14, v15, v16);
    byte_42E9038 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                            (EventMissionActionAddMaster_o *)Instance,
                                            missionId,
                                            5,
                                            4,
                                            0LL);
  if ( EntityFromIdProgressTypeAndActionType )
  {
    v20 = EntityFromIdProgressTypeAndActionType;
    v21 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor_27154404(v21, v20, 0LL);
LABEL_11:
    v22 = (EventMissionActionEntity_o *)sub_B5D694(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v22, 0LL);
    if ( v22 )
    {
      v22->fields.missionId = missionId;
      if ( v21 )
      {
        vals = (System_Int32_array **)v21->fields.vals;
        v22->fields.vals = (struct System_String_array *)vals;
        sub_B5D560((BattleServantConfConponent_o *)&v22->fields.vals, vals, v23, v24, v25, v26, v27, v28);
        VoiceAssetName = (System_Int32_array **)EventMissionItemListViewManager__GetVoiceAssetName(
                                                  v30,
                                                  v21->fields.vals,
                                                  v31);
        *(_QWORD *)&v22->fields.optionId = VoiceAssetName;
        sub_B5D560((BattleServantConfConponent_o *)&v22->fields.optionId, VoiceAssetName, v33, v34, v35, v36, v37, v38);
        return (TerminalTransitionInfo_o *)v22;
      }
    }
LABEL_15:
    sub_B5D69C(Instance, v18);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v22 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
          (EventMissionActionMaster_o *)Instance,
          missionId,
          5,
          4,
          0LL);
  if ( v22 )
  {
    v21 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v21, v22, 0LL);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v22;
}


void __fastcall EventMissionItemListViewManager__Decide(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventMissionItemListViewManager__dialogCallback(this, 1, v2);
}


void __fastcall EventMissionItemListViewManager__DestroyList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


float __fastcall EventMissionItemListViewManager__DoMoveEaseOut(
        EventMissionItemListViewManager_o *this,
        float currentTime,
        float duration,
        float startValue,
        float changeValue,
        const MethodInfo *method)
{
  float v6; // s0
  float v9; // s0
  float v10; // s1
  float v11; // s0

  v6 = currentTime / (float)(duration * 0.5);
  if ( v6 >= 1.0 )
  {
    v11 = exp2f((float)(v6 + -1.0) * -10.0);
    v10 = changeValue * 0.5;
    v9 = 2.0 - v11;
  }
  else
  {
    v9 = powf(v6, 5.0);
    v10 = changeValue * 0.5;
  }
  return (float)(v10 * v9) + startValue;
}


void __fastcall EventMissionItemListViewManager__EndMaxErrorDialog(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventMissionItemListViewManager__dialogCallback(this, 0, v2);
}


int32_t __fastcall EventMissionItemListViewManager__GetCostumeReleaseItemObjectId(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeReleaseItemObjectId;
}


bool __fastcall EventMissionItemListViewManager__GetIsCostumeReleaseItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isGetCostumeReleaseItem;
}


bool __fastcall EventMissionItemListViewManager__GetIsQpMaxAlert(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_Int32_array **v22; // x1
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  _DWORD *SelfUserGame; // x0
  __int64 v38; // x1
  _DWORD *v39; // x22
  int32_t v40; // w23
  int32_t QpMax; // w8
  int v42; // w23
  int32_t v43; // w24
  System_String_o *v44; // x23
  Il2CppObject *v45; // x24
  System_String_o *v46; // x0
  BalanceConfig_c *v47; // x8
  Il2CppObject *v48; // x25
  Il2CppObject *v49; // x0
  struct System_String_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t v57; // w8
  int32_t num; // w8
  System_String_o *v59; // x23
  System_String_o *NumberFormat; // x0
  int32_t v61; // w8
  Il2CppObject *v62; // x22
  System_String_o *v63; // x0
  BalanceConfig_c *v64; // x8
  Il2CppObject *v65; // x24
  Il2CppObject *v66; // x0
  struct System_String_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  bool result; // w0

  if ( (byte_42E904B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)giftEnt, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_8849/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_8852/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E904B = 1;
  }
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dialogTitle,
    v22,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v23 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dialogMessage, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dialogGetable, v30, v31, v32, v33, v34, v35, v36);
  this->fields.isQpAlreadyMax = 0;
  this->fields.getQpValue = 0;
  this->fields.overQpValue = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_30;
  v39 = SelfUserGame;
  v40 = SelfUserGame[24];
  SelfUserGame = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)SelfUserGame + 23) + 4LL);
  if ( v40 >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8849/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v59 = (System_String_o *)SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v61 = v39[24];
      v62 = (Il2CppObject *)NumberFormat;
      v63 = LocalizationManager__GetNumberFormat(v61, 0LL);
      v64 = BalanceConfig_TypeInfo;
      v65 = (Il2CppObject *)v63;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v64 = BalanceConfig_TypeInfo;
      }
      v66 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v64->static_fields->QpMax, 0LL);
      v67 = System_String__Format_44578852(v59, v62, v65, v66, 0LL);
      this->fields.dialogMessage = v67;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.dialogMessage,
        (System_Int32_array **)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      num = giftEnt->fields.num;
      goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(SelfUserGame, v38);
  }
  if ( !giftEnt )
    goto LABEL_30;
  v42 = v39[24];
  v43 = giftEnt->fields.num;
  if ( (*((_BYTE *)SelfUserGame + 307) & 4) != 0 && !SelfUserGame[56] )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v43 + v42 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8852/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v45 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v46 = LocalizationManager__GetNumberFormat(v39[24], 0LL);
    v47 = BalanceConfig_TypeInfo;
    v48 = (Il2CppObject *)v46;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    v49 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v47->static_fields->QpMax, 0LL);
    v50 = System_String__Format_44578852(v44, v45, v48, v49, 0LL);
    this->fields.dialogMessage = v50;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.dialogMessage,
      (System_Int32_array **)v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    v57 = BalanceConfig_TypeInfo->static_fields->QpMax - v39[24];
    this->fields.getQpValue = v57;
    num = giftEnt->fields.num - v57;
LABEL_28:
    result = 1;
    this->fields.overQpValue = num;
    return result;
  }
  return 0;
}


EventMissionItemListViewItem_o *__fastcall EventMissionItemListViewManager__GetItem(
        EventMissionItemListViewManager_o *this,
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

  if ( (byte_42E902F & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E902F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (EventMissionItemListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EventMissionItemListViewItem_TypeInfo )
    return (EventMissionItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall EventMissionItemListViewManager__GetReplaceDialogMessage(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *beforeGiftEntity,
        GiftEntity_o *AfterGiftEntity,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  ConstantStrMaster_o *v26; // x21
  System_Int32_array **Value; // x24
  System_Int32_array **v28; // x23
  System_String_o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Object_array *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x19
  __int64 v58; // x0
  __int64 v59; // x0

  if ( (byte_42E9031 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ConstantStrMaster___,
      (_DWORD)beforeGiftEntity,
      (_DWORD)AfterGiftEntity,
      method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&object___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5718/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5719/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5786/*"EVENT_REWARD_REPLACE_MSG"*/, v21, v22, v23);
    byte_42E9031 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v26 = Master_WarQuestSelectionMaster;
  Value = (System_Int32_array **)ConstantStrMaster__GetValue(
                                   Master_WarQuestSelectionMaster,
                                   (System_String_o *)StringLiteral_5719/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/,
                                   0LL);
  v28 = (System_Int32_array **)ConstantStrMaster__GetValue(v26, (System_String_o *)StringLiteral_5718/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5786/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v36 = (System_Object_array *)Master_WarQuestSelectionMaster;
  if ( Value )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B5D684(
                                                              Value,
                                                              Master_WarQuestSelectionMaster->klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( !v36->max_length )
    goto LABEL_27;
  v36->m_Items[0] = (Il2CppObject *)Value;
  sub_B5D560((BattleServantConfConponent_o *)v36->m_Items, Value, v30, v31, v32, v33, v34, v35);
  if ( v28 )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B5D684(v28, v36->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( v36->max_length <= 1 )
    goto LABEL_27;
  v36->m_Items[1] = (Il2CppObject *)v28;
  sub_B5D560((BattleServantConfConponent_o *)&v36->m_Items[1], v28, v37, v38, v39, v40, v41, v42);
  if ( !beforeGiftEntity )
    goto LABEL_26;
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v49 = (System_Int32_array **)Master_WarQuestSelectionMaster;
  if ( Master_WarQuestSelectionMaster )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B5D684(
                                                              Master_WarQuestSelectionMaster,
                                                              v36->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
    {
LABEL_28:
      v59 = sub_B5D6BC(Master_WarQuestSelectionMaster);
      sub_B5D668(v59, 0LL);
    }
  }
  if ( v36->max_length <= 2 )
    goto LABEL_27;
  v36->m_Items[2] = (Il2CppObject *)v49;
  sub_B5D560((BattleServantConfConponent_o *)&v36->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
  if ( !AfterGiftEntity )
LABEL_26:
    sub_B5D69C(Master_WarQuestSelectionMaster, v25);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v56 = (System_Int32_array **)Master_WarQuestSelectionMaster;
  if ( Master_WarQuestSelectionMaster )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B5D684(
                                                              Master_WarQuestSelectionMaster,
                                                              v36->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( v36->max_length <= 3 )
  {
LABEL_27:
    v58 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v58, 0LL);
  }
  v36->m_Items[3] = (Il2CppObject *)v56;
  sub_B5D560((BattleServantConfConponent_o *)&v36->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
  return System_String__Format_44656512(v29, v36, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewManager__GetVoiceAssetName(
        EventMissionItemListViewManager_o *this,
        System_String_array *afterActionVals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  signed int max_length; // w8
  System_String_o **p_webView; // x20
  signed int v13; // w21
  System_String_o *result; // x0
  WebViewManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x9
  __int64 v18; // x0
  EventMissionItemListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_42E9039 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, (_DWORD)afterActionVals, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    this = (EventMissionItemListViewManager_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E9039 = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    p_webView = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_webView;
  }
  p_webView = (System_String_o **)&StringLiteral_1/*""*/;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)max_length )
    {
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
    }
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v13], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v13 += 2;
    if ( v13 >= max_length )
      return *p_webView;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.basePanel) == 0LL )
    sub_B5D69C(Instance, v16);
  v17 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v17
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[v17 - 1] == EventRewardRootComponent_TypeInfo )
  {
    p_webView = (System_String_o **)&Instance[14].fields.webView;
    return *p_webView;
  }
  v19 = (EventMissionItemListViewManager_o *)sub_B5D990(Instance);
  EventMissionItemListViewManager__AcceptReward(v19, v20);
  return result;
}


void __fastcall EventMissionItemListViewManager__ModifyItem(
        EventMissionItemListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v33; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  MissionListViewItem_o *current; // x22
  __int64 v37; // x10
  __int64 MissionId; // x0
  __int64 v39; // x1
  int v40; // w2
  __int64 v41; // x3
  struct EventMissionEntity_o *v42; // x8
  int32_t v43; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v45; // x1
  struct ListViewObject_o *v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E9040 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12, v13);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E9040 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve
      || !MasterData_WarQuestSelectionMaster
      || (Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int64_t)Instance,
                                        missionToRecieve->fields.id,
                                        0LL),
          !this->fields.itemList) )
    {
LABEL_35:
      sub_B5D69C(Instance, v30);
    }
    v33 = Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v47,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v48 = v47;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v48,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v34 )
        break;
      current = (MissionListViewItem_o *)v48.fields.current;
      if ( !v48.fields.current
        || (v37 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v48.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v37)
        || (EventMissionItemListViewItem_c *)v48.fields.current->klass->_2.typeHierarchy[v37 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B5D69C(v34, v35);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v48.fields.current, 0LL);
      v42 = this->fields.missionToRecieve;
      if ( !v42 )
        sub_B5D69C(MissionId, v39);
      v43 = MissionId;
      if ( (_DWORD)MissionId == v42->fields.id )
      {
        if ( !byte_42E5F9E )
        {
          MissionId = sub_B5D5C4(&EventRewardSaveData_TypeInfo, v39, v40, v41);
          byte_42E5F9E = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v43;
        if ( !v33 )
          sub_B5D69C(MissionId, v39);
        MissionListViewItem__ModifyItem(current, LODWORD(v33->fields.lookup) == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v46 = current->fields.viewObject;
        if ( !v46 )
          sub_B5D69C(0LL, v45);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v46->klass->vtable._5_SetItem.method)(
          v46,
          current,
          v46->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v48,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinish,
        EventMissionActionInfo_o *eventMissionActionInfo,
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
  EventMissionItemListViewItem_o *Item; // x0
  __int64 v22; // x1
  ListViewItem_o *v23; // x22
  UnityEngine_Object_o *viewObject; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v26; // x3
  System_Collections_IEnumerator_o *v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E902B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      index,
      (_DWORD)onFinish,
      eventMissionActionInfo);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E902B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_18;
  v23 = (ListViewItem_o *)Item;
  viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v28,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v28,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v28.fields.current == v23 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v23, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v28,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Item = (EventMissionItemListViewItem_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( this->fields.tempFilterStatus == 1
      && (!eventMissionActionInfo || eventMissionActionInfo->fields.missionActionType == 4) )
    {
      v27 = EventMissionItemListViewManager__SetPreviousFilter(this, v23->fields.sortIndex, onFinish, v26);
    }
    else
    {
      v27 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v23->fields.sortIndex, onFinish, v26);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
  }
  else
  {
LABEL_18:
    if ( !onFinish )
      sub_B5D69C(Item, v22);
    System_Action__Invoke(onFinish, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E902D & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo, index, (_DWORD)onFinished, method);
    byte_42E902D = 1;
  }
  v7 = sub_B5D694(EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo);
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__40___ctor(
    (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventMissionItemListViewManager__OnChangeAlphaAnim(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionItemListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x1
  int size; // w21
  __int64 v11; // x22

  if ( (byte_42E9043 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v5, v6, v7);
    byte_42E9043 = 1;
  }
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      ObjectList = EventMissionItemListViewManager__get_ObjectList(this, v9);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_EventMissionItemListViewObject__o *)ObjectList->fields._items->m_Items[v11];
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v9);
      if ( (int)++v11 >= size )
        return;
    }
LABEL_12:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall EventMissionItemListViewManager__OnClickFilterList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_42E9046 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9046 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_32A3C10[filterStatus];
  EventMissionItemListViewManager__setList(this, v5);
}


void __fastcall EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  EventMissionItemListViewItem_o *EventMissionEntity; // x0
  MissionListViewItem_o *v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x10
  System_Int32_array **Item; // x0
  MissionListViewItem_o **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct EventMissionEntity_o *eventMissionEnt; // x8
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v53; // x2
  GiftMaster_o *v54; // x22
  GiftEntity_o *v55; // x22
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v58; // x21
  WebViewManager_o *Instance; // x19
  const MethodInfo *v60; // x3
  System_String_o *ReplaceDialogMessage; // x21
  System_Action_o *v62; // x22
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  EventMissionEntity_o *v65; // x1
  const MethodInfo *v66; // x2

  if ( (byte_42E9030 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventMissionItemListViewManager_OnClickListView__, v12, v13, v14);
    sub_B5D5C4(&EventMissionItemListViewObject_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v24, v25, v26);
    sub_B5D5C4(&EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42E9030 = 1;
  }
  v33 = sub_B5D694(EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass45_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass45_0_o *)v33,
    0LL);
  if ( !v33 )
    goto LABEL_43;
  *(_QWORD *)(v33 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  if ( !this->fields.isClickListViewEnabled )
    return;
  if ( !obj )
    goto LABEL_43;
  v42 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v42 )
    goto LABEL_43;
  if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[v42 - 1] != EventMissionItemListViewObject_TypeInfo )
    goto LABEL_43;
  Item = (System_Int32_array **)EventMissionItemListViewObject__GetItem(
                                  (EventMissionItemListViewObject_o *)obj,
                                  (const MethodInfo *)v35);
  *(_QWORD *)(v33 + 24) = Item;
  v44 = (MissionListViewItem_o **)(v33 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 24), Item, v45, v46, v47, v48, v49, v50);
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  EventMissionEntity = *(EventMissionItemListViewItem_o **)(v33 + 24);
  if ( !EventMissionEntity )
    goto LABEL_43;
  EventMissionEntity = (EventMissionItemListViewItem_o *)((__int64 (__fastcall *)(EventMissionItemListViewItem_o *, void *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method)(
                                                           EventMissionEntity,
                                                           EventMissionEntity->klass[1]._1.image);
  v35 = *v44;
  if ( ((unsigned __int8)EventMissionEntity & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_43;
    eventMissionEnt = v35->fields.eventMissionEnt;
    if ( !eventMissionEnt )
      goto LABEL_43;
    if ( ((v35->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1)) == 0 )
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v35, 0LL);
      return;
    }
  }
  else if ( !v35 )
  {
    goto LABEL_43;
  }
  if ( v35->fields.progStatus == 3 )
  {
    if ( this->fields.filterStatus == 1 )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v44, 0LL);
      if ( !EventMissionEntity )
        goto LABEL_43;
      this->fields.tempSelectDispNo = EventMissionEntity->fields.sortValue0;
      v35 = *v44;
      if ( !*v44 )
        goto LABEL_43;
    }
    if ( EventMissionItemListViewItem__GetIsRewardQp((EventMissionItemListViewItem_o *)v35, (const MethodInfo *)v35) )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)*v44;
      if ( !*v44 )
        goto LABEL_43;
      IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(EventMissionEntity, (const MethodInfo *)v35);
      this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v53);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EventMissionEntity = (EventMissionItemListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !*v44
      || (v54 = (GiftMaster_o *)EventMissionEntity,
          (EventMissionEntity = (EventMissionItemListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v44, 0LL)) == 0LL)
      || !v54 )
    {
LABEL_43:
      sub_B5D69C(EventMissionEntity, v35);
    }
    EventMissionEntity = (EventMissionItemListViewItem_o *)GiftMaster__getDataById(
                                                             v54,
                                                             HIDWORD(EventMissionEntity->fields.sortValue2B),
                                                             0LL);
    if ( !EventMissionEntity
      || (v55 = (GiftEntity_o *)EventMissionEntity, !LOBYTE(EventMissionEntity->fields.sortValue1)) )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)*v44;
      if ( *v44 )
      {
        v65 = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)EventMissionEntity, 0LL);
        EventMissionItemListViewManager__recieveReward(this, v65, v66);
        return;
      }
      goto LABEL_43;
    }
    if ( !*v44 )
      goto LABEL_43;
    giftEnts = (*v44)->fields.giftEnts;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0LL);
    if ( IconGiftEntity )
    {
      v58 = IconGiftEntity;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                               (EventMissionItemListViewManager_o *)Instance,
                               v58,
                               v55,
                               v60);
      v62 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v62,
        (Il2CppObject *)v33,
        Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          ReplaceDialogMessage,
          v62,
          -1,
          0,
          0,
          0,
          1,
          0,
          1,
          0,
          0LL,
          0LL);
        return;
      }
      goto LABEL_43;
    }
  }
  else
  {
    v63 = Method_EventMissionItemListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v63 = (_QWORD *)sub_B5D5CC(Method_EventMissionItemListViewManager_OnClickListView__);
    v64 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v63, v63[3]);
    OverwriteAssetSoundName__PlaySystemSe(v64, 2, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_o *closeCallback,
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
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x21
  EventMissionItemListViewManager___c_c *v31; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__76_0; // x22
  Il2CppObject *v34; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct EventMissionEntity_o *v42; // x8

  if ( (byte_42E9049 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_GiftEntity___, (_DWORD)closeCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_GiftEntity__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_GiftEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__, v21, v22, v23);
    sub_B5D5C4(&EventMissionItemListViewManager___c_TypeInfo, v24, v25, v26);
    byte_42E9049 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, missionToRecieve->fields.giftId, 0LL);
  v31 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v31 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__76_0,
      v34,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_GiftEntity__bool___ctor__);
    v35 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v35->__9__76_0 = (struct System_Func_GiftEntity__bool__o *)_9__76_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v35->__9__76_0,
      (System_Int32_array **)_9__76_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)GiftListById,
         (System_Func_T__bool__o *)_9__76_0,
         (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (GiftMaster_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v42 = this->fields.missionToRecieve;
      if ( v42 )
      {
        if ( Master_WarQuestSelectionMaster )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_WarQuestSelectionMaster,
            this->fields.currentEventId,
            v42->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B5D69C(Master_WarQuestSelectionMaster, v28);
  }
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall EventMissionItemListViewManager__OpenQpMaxAlertDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_String_o *v31; // x21
  System_String_o *v32; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_String_o *v37; // x22
  System_Action_o *v38; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v40; // x20
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_o *decide; // [xsp+28h] [xbp-58h]

  if ( (byte_42E904C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventMissionItemListViewManager_Decide__, v10, v11, v12);
    sub_B5D5C4(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__, v13, v14, v15);
    sub_B5D5C4(&Method_EventMissionItemListViewManager_TransitionToCombineScene__, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11913/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11912/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11919/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v28, v29, v30);
    byte_42E904C = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dialogCallBack,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decide = LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11919/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v37 = v32;
  v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_B5D69C(v41, v42);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    decide,
    v31,
    v37,
    v38,
    onTransition,
    v40,
    1,
    0LL);
}


void __fastcall EventMissionItemListViewManager__RedisplayEventUI(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *titleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E904A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SceneList_TypeInfo, v5, v6, v7);
    byte_42E904A = 1;
  }
  m_Handle = 0;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(72, 0LL);
    if ( !System_String__op_Inequality(name, SceneName, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( gameObject )
      {
        TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)gameObject, 0LL);
        return;
      }
LABEL_15:
      sub_B5D69C(gameObject, v10);
    }
  }
}


void __fastcall EventMissionItemListViewManager__RefrashListDisp(
        EventMissionItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionItemListViewObject__o *ObjectList; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_EventMissionItemListViewObject__o *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x11
  __int64 v29; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v32; // w8
  __int64 v33; // x21
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E9044 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v20, v21, v22);
    byte_42E9044 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v25 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v26 )
      break;
    if ( !v35.fields.current
      || (v28 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v35.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (EventMissionItemListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v28 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B5D69C(v26, v27);
    }
    v29 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v35.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v29 )
    {
      if ( (EventMissionItemListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v29 - 1] == EventMissionItemListViewItem_TypeInfo )
        current = v35.fields.current;
      else
        current = 0LL;
    }
    else
    {
      current = 0LL;
    }
    ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
      current,
      current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v25 )
    goto LABEL_25;
  size = v25->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v32 = v25->fields._size;
    if ( v32 >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v32 <= (unsigned int)v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ObjectList = (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v25->fields._items->m_Items[v33];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventMissionItemListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v32 = v25->fields._size;
        if ( (int)++v33 >= v32 )
          return;
      }
LABEL_25:
      sub_B5D69C(ObjectList, v24);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_25988572(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x21
  __int64 v28; // x10
  const MethodInfo *v29; // x1
  int32_t size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v31; // x21
  int v32; // w8
  __int64 v33; // x23
  __int64 v34; // x8
  __int64 v35; // x22
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9045 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      missionId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v21, v22, v23);
    byte_42E9045 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    current = v37.fields.current;
    if ( !v37.fields.current
      || (v28 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v37.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (EventMissionItemListViewItem_c *)v37.fields.current->klass->_2.typeHierarchy[v28 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B5D69C(v25, v26);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v37.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                              this,
                                                                                              v29);
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  v31 = itemList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v32 = itemList->fields._size;
    if ( v32 >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v32 <= (unsigned int)v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v34 = (__int64)v31->fields._items + 8 * v33;
        v35 = *(_QWORD *)(v34 + 32);
        if ( !v35 )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewObject__GetItem(
                                                                                                    *(EventMissionItemListViewObject_o **)(v34 + 32),
                                                                                                    *(const MethodInfo **)&missionId);
        if ( !itemList )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewItem__get_MissionId(
                                                                                                    (MissionListViewItem_o *)itemList,
                                                                                                    0LL);
        if ( (_DWORD)itemList == missionId )
          itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)(*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v35 + 456LL))(v35, this->fields.isInput, *(_QWORD *)(*(_QWORD *)v35 + 464LL));
        v32 = v31->fields._size;
        if ( (int)++v33 >= v32 )
          return;
      }
LABEL_24:
      sub_B5D69C(itemList, *(_QWORD *)&missionId);
    }
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_42E9037 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9037 = 1;
  }
  if ( !byte_42E90E6 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E90E6 = 1;
  }
  TerminalTransitionInfo = EventMissionItemListViewManager__CreateTerminalTransitionInfo(
                             this,
                             EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField,
                             v2);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(TerminalTransitionInfo, 0LL);
}


void __fastcall EventMissionItemListViewManager__SetOpenItem(
        EventMissionItemListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v29; // x1
  struct EventMissionItemListViewItem_o *v30; // x21
  int v31; // w1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9041 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18425/*"ef_mission_extric01"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20828/*"modifyOpenItem"*/, v20, v21, v22);
    byte_42E9041 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B5D69C(0LL, v24);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v41,
        ObjectList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v42 = v41;
      while ( 1 )
      {
        v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v42,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v25 )
          break;
        current = v42.fields.current;
        if ( !v42.fields.current )
          sub_B5D69C(v25, v26);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v42.fields.current,
                                          v26);
        v30 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_B5D69C(0LL, v29);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_42E5F9E )
          {
            sub_B5D5C4(&EventRewardSaveData_TypeInfo, v31, (_DWORD)v32, v33);
            byte_42E5F9E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v30;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v30,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v30, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18425/*"ef_mission_extric01"*/, transform, v40);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v42,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20828/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__SetPreviousFilter(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E902C & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo, index, (_DWORD)onFinished, method);
    byte_42E902C = 1;
  }
  v7 = sub_B5D694(EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo);
  EventMissionItemListViewManager__SetPreviousFilter_d__39___ctor(
    (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__SetScrollEnable(
        EventMissionItemListViewManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v5; // w20

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (v5 = enable,
        UnityEngine_Behaviour__set_enabled(scrollView, enable, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollBar) == 0LL) )
  {
    sub_B5D69C(scrollView, enable);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E904D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E904D = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
  EventMissionItemListViewManager__dialogCallback(this, 0, v7);
}


int32_t __fastcall EventMissionItemListViewManager___SetPreviousFilter_b__39_0(
        EventMissionItemListViewManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  int32_t tempSelectDispNo; // w22
  int32_t v8; // w8
  int v9; // w9
  int v10; // w8

  if ( (byte_42E9050 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, x, y, method);
    byte_42E9050 = 1;
  }
  tempSelectDispNo = this->fields.tempSelectDispNo;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v8 = this->fields.tempSelectDispNo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v8 = this->fields.tempSelectDispNo;
    }
  }
  else
  {
    v8 = this->fields.tempSelectDispNo;
  }
  v9 = x - tempSelectDispNo;
  if ( x - tempSelectDispNo < 0 )
    v9 = tempSelectDispNo - x;
  v10 = y - v8;
  if ( v10 < 0 )
    v10 = -v10;
  if ( v9 >= v10 )
    return y;
  else
    return x;
}


void __fastcall EventMissionItemListViewManager___modifyOpenItem_b__64_0(
        EventMissionItemListViewManager_o *this,
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x20
  void *Instance; // x0
  const MethodInfo *targetMissionId; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIdProgressTypeAndActionType; // x0
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v80; // x21
  __int64 v81; // x0
  __int64 v82; // x1
  struct EventMissionEntity_o *v83; // x8
  Il2CppObject *v84; // x22
  EventMissionActionInfo_o *v85; // x21
  __int64 v86; // x0
  __int64 v87; // x1
  int v88; // w21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__64_1; // x21
  Il2CppObject *v91; // x22
  struct EventMissionItemListViewManager___c_StaticFields *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v100; // x8
  __int64 v101; // x8
  int32_t v102; // w0
  const MethodInfo *v103; // x2
  __int64 v104; // x0
  System_Collections_Generic_List_Enumerator_T__o v105; // [xsp+8h] [xbp-A8h] BYREF
  int v106[2]; // [xsp+20h] [xbp-90h]
  int v107; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v108; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_42E9051 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMissionActionInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventMissionActionInfo__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__,
      v29,
      v30,
      v31);
    sub_B5D5C4(&EventMissionActionInfo_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62, v63, v64);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__, v65, v66, v67);
    sub_B5D5C4(&EventMissionItemListViewManager___c_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_16429/*"actionAfterCallback"*/, v71, v72, v73);
    byte_42E9051 = 1;
  }
  memset(&v109, 0, sizeof(v109));
  memset(&v108, 0, sizeof(v108));
  v107 = 0;
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_43;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType((EventMissionActionAddMaster_o *)Instance, missionToRecieve->fields.id, 5, 3, 0LL);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v105,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v109 = v105;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v109,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v109.fields.current;
      v80 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27154404(v80, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v74 )
        sub_B5D69C(v81, v82);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v74,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v106[0] = 185;
    v107 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v109,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v107 = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v83 = this->fields.missionToRecieve;
    if ( !v83 )
      goto LABEL_43;
    if ( !Instance )
      goto LABEL_43;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v83->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v105,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v108 = v105;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v108,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v84 = v108.fields.current;
      v85 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v85, (EventMissionActionEntity_o *)v84, 0LL);
      if ( !v74 )
        sub_B5D69C(v86, v87);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v74,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v106[0] = 185;
    v88 = ++v107;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v108,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v88 && v106[v88 - 1] == 185 )
      v107 = v88 - 1;
  }
  Instance = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    Instance = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = (struct EventMissionItemListViewManager___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__64_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__64_1;
  if ( !_9__64_1 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v91 = (Il2CppObject *)static_fields->__9;
    _9__64_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionActionInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__64_1,
      v91,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionActionInfo___ctor__);
    v92 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v92->__9__64_1 = (struct System_Comparison_EventMissionActionInfo__o *)_9__64_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v92->__9__64_1,
      (System_Int32_array **)_9__64_1,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
  }
  if ( !v74 )
    goto LABEL_43;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v74,
    (System_Comparison_T__o *)_9__64_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  size = v74->fields._size;
  if ( size <= 0 )
    goto LABEL_39;
  v100 = v74->fields._items->m_Items[size - 1];
  if ( !v100 || (v101 = *(_QWORD *)&v100->fields.addCount) == 0 )
LABEL_43:
    sub_B5D69C(Instance, targetMissionId);
  if ( !*(_DWORD *)(v101 + 24) )
  {
    v104 = sub_B5D6C8(Instance);
    sub_B5D668(v104, 0LL);
  }
  v102 = System_Int32__Parse(*(System_String_o **)(v101 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v102 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_25988572(this, (int32_t)targetMissionId, v103);
    goto LABEL_41;
  }
LABEL_39:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_41:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16429/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0LL);
}


void __fastcall EventMissionItemListViewManager__actionAfterCallback(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *actionCallback; // x19
  BattleServantConfConponent_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (BattleServantConfConponent_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0LL;
    sub_B5D560(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__afterReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E903B & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewManager__afterReward_d__57_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E903B = 1;
  }
  v5 = sub_B5D694(EventMissionItemListViewManager__afterReward_d__57_TypeInfo);
  EventMissionItemListViewManager__afterReward_d__57___ctor(
    (EventMissionItemListViewManager__afterReward_d__57_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventMissionItemListViewManager__checkAcceptable(
        EventMissionItemListViewManager_o *this,
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
  int64_t Instance; // x0
  __int64 v42; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v44; // x8
  int64_t v45; // x20
  int64_t v46; // x21
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t v54; // w21
  BalanceConfig_c *v55; // x0
  int32_t PresentBoxMax; // w8
  int v57; // w20
  EventMissionItemListViewManager___c_c *v58; // x0
  struct EventMissionItemListViewManager___c_StaticFields *v59; // x8
  System_Action_o *_9__49_0; // x20
  Il2CppObject *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct EventMissionItemListViewManager___c_StaticFields *v68; // x0
  BattleServantConfConponent_o *p__9__49_0; // x0
  __int64 *v70; // x8
  EventMissionItemListViewManager___c_c *v71; // x0
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  Il2CppObject *v73; // x21
  struct EventMissionItemListViewManager___c_StaticFields *v74; // x0

  if ( (byte_42E9033 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__, v26, v27, v28);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__, v29, v30, v31);
    sub_B5D5C4(&EventMissionItemListViewManager___c_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_12387/*"SHOW_MSG"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_11270/*"REWARD_ACCEPTABLE"*/, v38, v39, v40);
    byte_42E9033 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_51;
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v44 = this->fields.missionToRecieve;
  if ( !v44 )
    goto LABEL_51;
  if ( v44->fields.rewardType == 1 )
  {
    v45 = Instance;
    if ( !Instance )
      goto LABEL_51;
    if ( Gift__IsServant_28424960(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_51;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_51;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            *(_DWORD *)(v45 + 24),
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_51;
      v46 = Instance;
      if ( SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
        || SvtType__IsStatusUp(*(_DWORD *)(v46 + 84), 0LL) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_51;
        Instance = (int64_t)UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
        if ( !Instance )
          goto LABEL_51;
        v54 = *(_DWORD *)(Instance + 24);
        v55 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v55 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v55->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v54 )
        {
          v71 = EventMissionItemListViewManager___c_TypeInfo;
          if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v71 = EventMissionItemListViewManager___c_TypeInfo;
          }
          static_fields = v71->static_fields;
          _9__49_0 = static_fields->__9__49_0;
          if ( !_9__49_0 )
          {
            if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v71);
              static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v73 = (Il2CppObject *)static_fields->__9;
            _9__49_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              _9__49_0,
              v73,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__,
              0LL);
            v74 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v74->__9__49_0 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v74->__9__49_0;
            goto LABEL_48;
          }
LABEL_49:
          this->fields.ShowMSG = _9__49_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.ShowMSG,
            (System_Int32_array **)_9__49_0,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
          Instance = (int64_t)this->fields.targetFSM;
          if ( Instance )
          {
            v70 = &StringLiteral_12387/*"SHOW_MSG"*/;
            goto LABEL_39;
          }
LABEL_51:
          sub_B5D69C(Instance, v42);
        }
        v57 = *(_DWORD *)(v45 + 28);
        if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v57 + v54 > PresentBoxMax )
        {
          v58 = EventMissionItemListViewManager___c_TypeInfo;
          if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v58 = EventMissionItemListViewManager___c_TypeInfo;
          }
          v59 = v58->static_fields;
          _9__49_0 = v59->__9__49_1;
          if ( !_9__49_0 )
          {
            if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v58);
              v59 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v61 = (Il2CppObject *)v59->__9;
            _9__49_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              _9__49_0,
              v61,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__,
              0LL);
            v68 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v68->__9__49_1 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v68->__9__49_1;
LABEL_48:
            sub_B5D560(p__9__49_0, (System_Int32_array **)_9__49_0, v62, v63, v64, v65, v66, v67);
            goto LABEL_49;
          }
          goto LABEL_49;
        }
      }
    }
  }
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_51;
  v70 = &StringLiteral_11270/*"REWARD_ACCEPTABLE"*/;
LABEL_39:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v70, 0LL);
}


void __fastcall EventMissionItemListViewManager__dialogCallback(
        EventMissionItemListViewManager_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *dialogCallBack; // x21

  if ( (byte_42E904E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, result, (_DWORD)method, v3);
    byte_42E904E = 1;
  }
  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    this->fields.dialogCallBack = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.dialogCallBack,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(dialogCallBack, result, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventMissionItemListViewManager__endloadEffect(
        EventMissionItemListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  BattleServantConfConponent_o *static_fields; // x0
  AutomatedAction_o *Instance; // x0
  __int64 v15; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v17; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v19; // x8

  if ( (byte_42E903E & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10, v11, v12);
    byte_42E903E = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventMissionItemListViewManager_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B5D560(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0LL) )
    {
      filterStatus = this->fields.filterStatus;
      if ( filterStatus )
      {
        this->fields.tempFilterStatus = filterStatus;
        this->fields.filterStatus = 0;
        EventMissionItemListViewManager__setList(this, v17);
      }
    }
    else
    {
      EventMissionItemListViewManager__RefrashListDisp(this, v17);
    }
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v19 = this->fields.missionToRecieve;
    if ( !v19 || !Instance )
LABEL_13:
      sub_B5D69C(Instance, v15);
    AutomatedAction__SetMissionAction(Instance, v19->fields.id, 5, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventMissionItemListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
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
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *transform; // x19
  int v19; // s0
  UnityEngine_Transform_o *v22; // x19
  int v23; // s0

  if ( (byte_42E903F & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)parentTr, (_DWORD)method, v3);
    sub_B5D5C4(&EventMissionItemListViewManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E903F = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v17 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL),
        v22 = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL),
        !v22) )
  {
LABEL_12:
    sub_B5D69C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  return v17;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
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
  EventMissionItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E9028 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E9028 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
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
      Component_srcLineSprite = (EventMissionItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(Component_srcLineSprite, v36);
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v29;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9027 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___, (_DWORD)method, v2, v3);
    byte_42E9027 = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_1E649B4 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
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
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_42E903D & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventMissionItemListViewManager_endloadEffect__, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5920/*"Effect/EventMission"*/, v11, v12, v13);
    byte_42E903D = 1;
  }
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5920/*"Effect/EventMission"*/, v14, 1, 0LL);
}


void __fastcall EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMissionItemListViewManager_o *v5; // x19
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
  __int64 *v24; // x8
  Il2CppObject *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  EventMissionItemListViewManager_o *v32; // x20
  struct ListViewIndicator_o *indicator; // x8
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ListViewIndicator_o *v41; // x8
  System_Int32_array **klass; // x1
  int v43; // w2
  __int64 v44; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20
  __int64 v47; // x0

  v5 = this;
  if ( (byte_42E9036 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___,
      (_DWORD)result,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v18, v19, v20);
    this = (EventMissionItemListViewManager_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v21, v22, v23);
    byte_42E9036 = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( !System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    v25 = (Il2CppObject *)System_String__Concat_44580072(
                            (System_String_o *)StringLiteral_15824/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16061/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                  v25,
                                                  (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v32 = this;
      if ( !LODWORD(this->fields.dropObjectList) )
        goto LABEL_23;
      indicator = this->fields.indicator;
      if ( !indicator )
        goto LABEL_22;
      v34 = *(System_Int32_array ***)&indicator->fields.m_CachedPtr;
      v5->fields.getSvtList = (struct GetSvts_array *)v34;
      sub_B5D560((BattleServantConfConponent_o *)&v5->fields.getSvtList, v34, v26, v27, v28, v29, v30, v31);
      if ( !LODWORD(v32->fields.dropObjectList) )
      {
LABEL_23:
        v47 = sub_B5D6C8(this);
        sub_B5D668(v47, 0LL);
      }
      v41 = v32->fields.indicator;
      if ( v41 )
      {
        klass = (System_Int32_array **)v41[1].klass;
        v5->fields.getCommandCodeList = (struct GetCommandCodes_array *)klass;
        sub_B5D560((BattleServantConfConponent_o *)&v5->fields.getCommandCodeList, klass, v35, v36, v37, v38, v39, v40);
        missionToRecieve = v5->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_42E5F9E )
          {
            sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)result, v43, v44);
            byte_42E5F9E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          EventMissionItemListViewManager__SaveTerminalTransitionInfo(v5, (const MethodInfo *)result);
          this = (EventMissionItemListViewManager_o *)v5->fields.touchBlockObj;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (EventMissionItemListViewManager_o *)v5->fields.targetFSM;
            if ( this )
            {
              v24 = &StringLiteral_11212/*"REQUEST_OK"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_B5D69C(this, result);
  }
  this = (EventMissionItemListViewManager_o *)v5->fields.targetFSM;
  if ( !this )
    goto LABEL_22;
  v24 = &StringLiteral_11210/*"REQUEST_NG"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v24, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
        EventMissionItemListViewManager_o *this,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x20
  __int64 v33; // x10
  __int64 v34; // x1
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *monitor; // x21
  __int64 v38; // x1
  EventMissionItemListViewObject_o *v39; // x0
  __int64 v40; // x9
  UnityEngine_Object_o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x0
  System_Action_o *v44; // x20
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E9042 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12, v13);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, v17, v18, v19);
    sub_B5D5C4(&EventMissionItemListViewObject_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E9042 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v45,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v46 = v45;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v46,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v30 )
        break;
      current = v46.fields.current;
      if ( !v46.fields.current
        || (v33 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v46.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v33)
        || (EventMissionItemListViewItem_c *)v46.fields.current->klass->_2.typeHierarchy[v33 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B5D69C(v30, v31);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v46.fields.current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_B5D69C(0LL, v34);
      if ( MissionId == MissionListViewItem__get_MissionId(openTargetItem, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v39 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v39 )
            sub_B5D69C(0LL, v38);
          v40 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v40
            || (EventMissionItemListViewObject_c *)v39->klass->_2.typeHierarchy[v40 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            v43 = sub_B5D990(v39);
LABEL_31:
            sub_B5D69C(v43, v42);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v39,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v41 = (UnityEngine_Object_o *)current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
      {
        v43 = (__int64)current[6].monitor;
        if ( !v43 )
          goto LABEL_31;
        (*(void (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v43 + 392LL))(
          v43,
          current,
          *(_QWORD *)(*(_QWORD *)v43 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v46,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v44, 0LL);
}


void __fastcall EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
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
  __int64 v21; // x22
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct EventMissionEntity_o **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Action_int__o *v37; // x20
  const MethodInfo *v38; // x2
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  struct EventMissionEntity_o *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_42E9032 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)missionEntity, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_EventMissionItemListViewManager_recieveReward__, v9, v10, v11);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8846/*"MISSION_REWARD"*/, v18, v19, v20);
    byte_42E9032 = 1;
  }
  v21 = sub_B5D694(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass47_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_10;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = missionEntity;
  v30 = (struct EventMissionEntity_o **)(v21 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)missionEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( this->fields.isQpMaxAlert )
  {
    v37 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v37,
      (Il2CppObject *)v21,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v37, v38);
    return;
  }
  v39 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 75) & 2) != 0 )
    v39 = (_QWORD *)sub_B5D5CC(Method_EventMissionItemListViewManager_recieveReward__);
  v40 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v39, v39[3]);
  OverwriteAssetSoundName__PlaySystemSe(v40, 8, 0LL);
  v41 = *v30;
  this->fields.missionToRecieve = *v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.missionToRecieve,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_B5D69C(targetFSM, v23);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8846/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__requestMissionReward(
        EventMissionItemListViewManager_o *this,
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
  MissionNotifyManager_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v21; // x1
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_42E9035 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventMissionItemListViewManager_missionRewardCallback__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v17, v18, v19);
    byte_42E9035 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  MissionNotifyManager__StartPause(Request_WarBoardWallAttackRequest, 0LL);
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v22,
                                                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v21);
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Request_WarBoardWallAttackRequest,
    missionToRecieve->fields.id,
    0LL);
}


void __fastcall EventMissionItemListViewManager__setAfterAction(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AutomatedAction_o *Instance; // x0
  __int64 v6; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_42E903C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E903C = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_B5D69C(Instance, v6);
    AutomatedAction__SetMissionAction(Instance, missionToRecieve->fields.id, 5, 1, 0LL);
  }
  else
  {
    EventMissionItemListViewManager__loadOpenMissionEffect(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__setFilterId(
        EventMissionItemListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  EventMissionItemListViewManager__setList(this, *(const MethodInfo **)&id);
}


void __fastcall EventMissionItemListViewManager__setFilterName(
        EventMissionItemListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *filterBtnTxt; // x21
  __int64 v7; // x1
  UISprite_o *v8; // x0

  if ( (byte_42E9048 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)targetFile, (_DWORD)method, v3);
    byte_42E9048 = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0LL, 0LL) )
  {
    v8 = this->fields.filterBtnTxt;
    if ( !v8 || (UISprite__set_spriteName(v8, targetFile, 0LL), (v8 = this->fields.filterBtnTxt) == 0LL) )
      sub_B5D69C(v8, v7);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
      v8,
      v8->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventMissionItemListViewManager__setList(
        EventMissionItemListViewManager_o *this,
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
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v21; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v32; // w2
  bool v33; // w2
  bool v34; // w2
  bool v35; // w2
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int32_t filterStatus; // w19

  if ( (byte_42E9047 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17255/*"btn_txt_completed"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17288/*"btn_txt_receipt"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17287/*"btn_txt_progress"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17271/*"btn_txt_notopen"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17238/*"btn_txt_all"*/, v17, v18, v19);
    byte_42E9047 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v21 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34029496(v21, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17238/*"btn_txt_all"*/, v30);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 15, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 16, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v32 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17288/*"btn_txt_receipt"*/, v30);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v33 = 0;
      goto LABEL_21;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17287/*"btn_txt_progress"*/, v30);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v33 = 1;
LABEL_21:
      ListViewSort__SetFilter(operationSortInfo, 14, v33, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v35 = 0;
LABEL_27:
      ListViewSort__SetFilter(operationSortInfo, 15, v35, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v34 = 0;
LABEL_29:
      ListViewSort__SetFilter(operationSortInfo, 16, v34, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v32 = 0;
LABEL_31:
      ListViewSort__SetFilter(operationSortInfo, 17, v32, 0LL);
LABEL_32:
      operationSortInfo = this->fields.baseSortInfo;
      if ( !operationSortInfo )
LABEL_36:
        sub_B5D69C(operationSortInfo, v29);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_42E5F9D )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, v36, v37, v38);
        byte_42E5F9D = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17271/*"btn_txt_notopen"*/, v30);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v35 = 1;
      goto LABEL_27;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17255/*"btn_txt_completed"*/, v30);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 14, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 15, 0, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v34 = 1;
      goto LABEL_29;
    default:
      goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__setMissionListIdx(
        EventMissionItemListViewManager_o *this,
        bool isRaid,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMissionItemListViewManager_o *v5; // x19
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
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  signed __int64 size; // x22
  const MethodInfo *v21; // x2
  int MissionId_k__BackingField; // w20
  unsigned __int64 v23; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v24; // x24
  ListViewItem_o *v25; // x8
  __int64 v26; // x11

  v5 = this;
  if ( (byte_42E902E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, isRaid, (_DWORD)method, v3);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13, v14);
    this = (EventMissionItemListViewManager_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v15,
                                                  v16,
                                                  v17);
    byte_42E902E = 1;
  }
  if ( !byte_42E90E5 )
  {
    this = (EventMissionItemListViewManager_o *)sub_B5D5C4(&EventRewardSaveData_TypeInfo, isRaid, (_DWORD)method, v3);
    byte_42E90E5 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  size = itemList->fields._size;
  if ( byte_42E90E6 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    this = (EventMissionItemListViewManager_o *)sub_B5D5C4(&EventRewardSaveData_TypeInfo, isRaid, (_DWORD)method, v3);
    byte_42E90E6 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
      if ( !this )
        goto LABEL_31;
      this = (EventMissionItemListViewManager_o *)EventMissionConditionMaster__getTodayFirstMissionId(
                                                    (EventMissionConditionMaster_o *)this,
                                                    v5->fields.currentEventId,
                                                    v21);
      MissionId_k__BackingField = (int)this;
      goto LABEL_14;
    }
  }
  MissionId_k__BackingField = static_fields->_MissionId_k__BackingField;
LABEL_14:
  if ( (int)size >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v24 = v5->fields.itemList;
      if ( !v24 )
        break;
      if ( v23 >= (unsigned int)v24->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v25 = v24->fields._items->m_Items[v23];
      if ( v25
        && (v26 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
      {
        if ( (EventMissionItemListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1] == EventMissionItemListViewItem_TypeInfo )
          this = (EventMissionItemListViewManager_o *)v24->fields._items->m_Items[v23];
        else
          this = 0LL;
      }
      else
      {
        this = 0LL;
      }
      if ( MissionId_k__BackingField >= 1 )
      {
        if ( !this )
          break;
        this = (EventMissionItemListViewManager_o *)MissionListViewItem__get_MissionId(
                                                      (MissionListViewItem_o *)this,
                                                      0LL);
        if ( (_DWORD)this == MissionId_k__BackingField )
          goto LABEL_30;
      }
      if ( (__int64)++v23 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B5D69C(this, isRaid);
  }
LABEL_29:
  LODWORD(v23) = 0;
LABEL_30:
  ListViewManager__SetTopItem((ListViewManager_o *)v5, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__setNextMissionInfo(
        EventMissionItemListViewManager_o *this,
        EventMissionActionInfo_o *currentMissionActionInfo,
        EventMissionActionInfo_o *eventMissionActionInfo,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventMissionItemListViewManager_o *v12; // x19
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
  int v34; // w8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x23
  unsigned __int64 v37; // x21
  ListViewItem_o *v38; // x8
  __int64 v39; // x11
  __int64 v40; // x11
  MissionListViewItem_o *v41; // x0
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  System_Action_o *v43; // x22
  const MethodInfo *v44; // x4
  System_Action_o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  v12 = this;
  if ( (byte_42E902A & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Action_TypeInfo,
      (_DWORD)currentMissionActionInfo,
      (_DWORD)eventMissionActionInfo,
      *(_QWORD *)&missionID);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v13, v14, v15);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__, v19, v20, v21);
    sub_B5D5C4(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v28, v29, v30);
    this = (EventMissionItemListViewManager_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v31,
                                                  v32,
                                                  v33);
    byte_42E902A = 1;
  }
  v12->fields.targetMissionId = missionID;
  if ( callback )
  {
    v12->fields.actionCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v12->fields.actionCallback,
      (System_Int32_array **)callback,
      (System_String_array **)eventMissionActionInfo,
      *(System_String_array ***)&missionID,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
  }
  if ( eventMissionActionInfo )
  {
    if ( !currentMissionActionInfo )
      goto LABEL_37;
    if ( currentMissionActionInfo->fields.missionActionType == 3 )
    {
      if ( eventMissionActionInfo->fields.missionActionType == 3 )
        v34 = 1056964608;
      else
        v34 = 1069547520;
      LODWORD(v12->fields.endEffectTime) = v34;
    }
  }
  itemList = v12->fields.itemList;
  if ( !itemList )
LABEL_37:
    sub_B5D69C(this, currentMissionActionInfo);
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v38 = itemList->fields._items->m_Items[v37];
      if ( !v38 )
        goto LABEL_37;
      v39 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v39
        || (EventMissionItemListViewItem_c *)v38->klass->_2.typeHierarchy[v39 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v40 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v38->klass->_2.bitflags2 + 1) >= (unsigned int)v40 )
        v41 = (EventMissionItemListViewItem_c *)v38->klass->_2.typeHierarchy[v40 - 1] == EventMissionItemListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v37]
            : 0LL;
      else
        v41 = 0LL;
      this = (EventMissionItemListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v41, 0LL);
      if ( !this )
        goto LABEL_37;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_31;
      if ( (__int64)++v37 >= size )
        break;
      itemList = v12->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  LODWORD(v37) = 0;
LABEL_31:
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_37;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v12->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v12, v37, v43, eventMissionActionInfo, v44);
  }
  else
  {
    v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__,
      0LL);
    v12->fields.callbackAfterScroll = v45;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v12->fields.callbackAfterScroll,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    ListViewManager__MoveTopItem((ListViewManager_o *)v12, v37, 1, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *ShowMSG; // x0

  if ( (byte_42E9034 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5564/*"END_NOTICE"*/, (_DWORD)method, v2, v3);
    byte_42E9034 = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B5D69C(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5564/*"END_NOTICE"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__40___ctor(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__40__MoveNext(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *v4; // x19
  float v5; // s1
  float v6; // s9
  float v7; // s1
  float v8; // s9
  float timer_5__5; // s9
  float duration_5__4; // s0
  bool result; // w0
  float deltaTime; // s0
  float v13; // s0
  float v14; // s0
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( _1__state == 1 )
  {
    duration_5__4 = this->fields._duration_5__4;
    timer_5__5 = this->fields._timer_5__5;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)_4__this->fields.scrollBar;
    if ( !this )
      goto LABEL_22;
    v4->fields._start_5__2 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)_4__this->fields.scrollBar;
    if ( !this )
      goto LABEL_22;
    UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0LL);
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_22;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
    if ( !this )
      goto LABEL_22;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)_4__this->fields.scrollBar;
    if ( !this
      || (v6 = v5,
          UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL),
          (this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)_4__this->fields.scrollView) == 0LL)
      || (this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)UnityEngine_Component__get_transform(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)this,
                                                  0LL),
          (this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)_4__this->fields.seed) == 0LL) )
    {
LABEL_22:
      sub_B5D69C(this, method);
    }
    v8 = v7 - v6;
    LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)this, v4->fields.index, 0LL);
    LocalPosition.fields.x = fabsf(LocalPosition.fields.y);
    LocalPosition.fields.y = v4->fields._start_5__2;
    LocalPosition.fields.x = LocalPosition.fields.x / v8;
    v4->fields._end_5__3 = LocalPosition.fields.x;
    LocalPosition.fields.y = (float)((float)(v8 * (float)(LocalPosition.fields.x - LocalPosition.fields.y)) + -2000.0)
                           / 2000.0;
    timer_5__5 = 0.0;
    duration_5__4 = fminf(UnityEngine_Mathf__Max(0.0, LocalPosition.fields.y, 0LL) + 1.0, 3.0);
    v4->fields._duration_5__4 = duration_5__4;
    v4->fields._timer_5__5 = 0.0;
  }
  if ( timer_5__5 >= duration_5__4 )
  {
    if ( _4__this )
    {
      this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)_4__this->fields.scrollBar;
      if ( this )
      {
        UIProgressBar__set_value((UIProgressBar_o *)this, v4->fields._end_5__3, 0LL);
        ActionExtensions__Call(v4->fields.onFinished, 0LL);
        return 0;
      }
    }
    goto LABEL_22;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v13 = UnityEngine_Mathf__Clamp(timer_5__5 + deltaTime, 0.0, v4->fields._duration_5__4, 0LL);
  v4->fields._timer_5__5 = v13;
  if ( !_4__this )
    goto LABEL_22;
  v14 = EventMissionItemListViewManager__DoMoveEaseOut(
          _4__this,
          v13,
          v4->fields._duration_5__4,
          v4->fields._start_5__2,
          v4->fields._end_5__3 - v4->fields._start_5__2,
          0LL);
  this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)_4__this->fields.scrollBar;
  if ( !this )
    goto LABEL_22;
  UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__MoveEaseScroll_IE_d__40__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__40__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__40__System_IDisposable_Dispose(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__39___ctor(
        EventMissionItemListViewManager__SetPreviousFilter_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__39__MoveNext(
        EventMissionItemListViewManager__SetPreviousFilter_d__39_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventMissionItemListViewManager__SetPreviousFilter_d__39_o *v4; // x20
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v40; // x0
  int32_t v41; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  signed __int64 size; // x22
  System_Collections_Generic_List_int__o *v44; // x20
  unsigned __int64 i; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v46; // x25
  ListViewItem_o *v47; // x8
  __int64 v48; // x11
  __int64 v49; // x11
  MissionListViewItem_o *v50; // x0
  System_Func_int__int__int__o *v51; // x21
  int32_t v52; // w0
  int32_t v53; // w21
  int32_t v54; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v57; // x19
  Il2CppObject **p__2__current; // x20

  v4 = this;
  if ( (byte_42E656C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Aggregate_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_int__int__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_int__int__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__IndexOf__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v32, v33, v34);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)sub_B5D5C4(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v35,
                                                                           v36,
                                                                           v37);
    byte_42E656C = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        openItemTime = _4__this->fields.openItemTime;
        endEffectTime = _4__this->fields.endEffectTime;
        v57 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v57, openItemTime + endEffectTime, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v57;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        *((_DWORD *)p__2__current - 2) = 2;
        LOBYTE(v41) = 1;
        return v41;
      }
      goto LABEL_35;
    }
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        v40 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v4->fields.index, v4->fields.onFinished, 0LL);
        v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                    (UnityEngine_MonoBehaviour_o *)_4__this,
                                                    v40,
                                                    0LL);
        sub_B5D560(&v4->fields.__2__current);
        LOBYTE(v41) = 1;
        v4->fields.__1__state = 1;
        return v41;
      }
LABEL_35:
      sub_B5D69C(this, method);
    }
LABEL_33:
    LOBYTE(v41) = 0;
    return v41;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_35;
  *(_QWORD *)&_4__this->fields.filterStatus = (unsigned int)_4__this->fields.tempFilterStatus;
  EventMissionItemListViewManager__setList(_4__this, 0LL);
  itemSortList = _4__this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_33;
  size = itemSortList->fields._size;
  if ( (int)size < 3 || !_4__this->fields.tempSelectDispNo )
    goto LABEL_33;
  v44 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v46 = _4__this->fields.itemSortList;
    if ( !v46 )
      goto LABEL_35;
    if ( i >= (unsigned int)v46->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v47 = v46->fields._items->m_Items[i];
    if ( !v47 )
      goto LABEL_35;
    v48 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v47->klass->_2.bitflags2 + 1) < (unsigned int)v48
      || (EventMissionItemListViewItem_c *)v47->klass->_2.typeHierarchy[v48 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      goto LABEL_35;
    }
    v49 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v47->klass->_2.bitflags2 + 1) >= (unsigned int)v49 )
      v50 = (EventMissionItemListViewItem_c *)v47->klass->_2.typeHierarchy[v49 - 1] == EventMissionItemListViewItem_TypeInfo
          ? (MissionListViewItem_o *)v46->fields._items->m_Items[i]
          : 0LL;
    else
      v50 = 0LL;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)MissionListViewItem__get_EventMissionEntity(
                                                                           v50,
                                                                           0LL);
    if ( !this || !v44 )
      goto LABEL_35;
    System_Collections_Generic_List_int___Add(
      v44,
      (int32_t)this->fields.__4__this,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  v51 = (System_Func_int__int__int__o *)sub_B5D694(System_Func_int__int__int__TypeInfo);
  System_Func_int__int__int____ctor(
    v51,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__,
    (const MethodInfo_2C37DF8 *)Method_System_Func_int__int__int___ctor__);
  v52 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v44,
          (System_Func_TSource__TSource__TSource__o *)v51,
          (const MethodInfo_1C962F0 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v53 = v52;
  v41 = System_Collections_Generic_List_int___IndexOf(
          v44,
          v52,
          (const MethodInfo_3085484 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v41 )
  {
    v54 = v53 - 1;
    if ( v41 == (_DWORD)size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v54, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v54, 0, 0LL);
    goto LABEL_33;
  }
  return v41;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__SetPreviousFilter_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__SetPreviousFilter_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__SetPreviousFilter_d__39__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__SetPreviousFilter_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__39_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__SetPreviousFilter_d__39__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__SetPreviousFilter_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__39__System_IDisposable_Dispose(
        EventMissionItemListViewManager__SetPreviousFilter_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMissionItemListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E6560 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E6560 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventMissionItemListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventMissionItemListViewManager___c___ctor(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventMissionItemListViewManager___c___OpenCommandAssistLvUpDialog_b__76_0(
        EventMissionItemListViewManager___c_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  if ( !gift )
    sub_B5D69C(this, 0LL);
  return gift->fields.type == 14;
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_0(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  CommonUI_o *Instance; // x19
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  EventMissionItemListViewManager___c_c *v26; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_2; // x22
  System_String_o *v29; // x21
  Il2CppObject *v30; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v31; // x0

  if ( (byte_42E6561 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, v10, v11, v12);
    sub_B5D5C4(&EventMissionItemListViewManager___c_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_8837/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E6561 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8837/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v25 = v23;
  v26 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v26 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__49_2 = static_fields->__9__49_2;
  v29 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_2 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__49_2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__49_2, v30, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, 0LL);
    v31 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v31->__9__49_2 = _9__49_2;
    sub_B5D560(&v31->__9__49_2);
  }
  if ( !Instance )
    sub_B5D69C(v23, v24);
  CommonUI__OpenNotificationDialog(Instance, v29, v25, _9__49_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_1(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  CommonUI_o *Instance; // x19
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  EventMissionItemListViewManager___c_c *v26; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_3; // x22
  System_String_o *v29; // x21
  Il2CppObject *v30; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v31; // x0

  if ( (byte_42E6563 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, v10, v11, v12);
    sub_B5D5C4(&EventMissionItemListViewManager___c_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_8838/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E6563 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8838/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v25 = v23;
  v26 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v26 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__49_3 = static_fields->__9__49_3;
  v29 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_3 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__49_3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__49_3, v30, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, 0LL);
    v31 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v31->__9__49_3 = _9__49_3;
    sub_B5D560(&v31->__9__49_3);
  }
  if ( !Instance )
    sub_B5D69C(v23, v24);
  CommonUI__OpenNotificationDialog(Instance, v29, v25, _9__49_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E6562 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6562 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E6564 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6564 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__64_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass45_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass45_0___OnClickListView_b__0(
        EventMissionItemListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  MissionListViewItem_o *selectItem; // x0
  EventMissionItemListViewManager_o *_4__this; // x19

  selectItem = (MissionListViewItem_o *)this->fields.selectItem;
  if ( !selectItem
    || (_4__this = this->fields.__4__this,
        selectItem = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(selectItem, 0LL),
        !_4__this) )
  {
    sub_B5D69C(selectItem, method);
  }
  EventMissionItemListViewManager__recieveReward(_4__this, (EventMissionEntity_o *)selectItem, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass47_0___recieveReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v12; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionItemListViewManager_o *v14; // x8

  if ( (byte_42E6565 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__,
      result,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&StringLiteral_8846/*"MISSION_REWARD"*/, v6, v7, v8);
    byte_42E6565 = 1;
  }
  if ( result == 1 )
  {
    v9 = Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__ + 75) & 2) != 0 )
      v9 = (_QWORD *)sub_B5D5CC(Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__);
    v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (_4__this->fields.missionToRecieve = this->fields.missionEntity,
          sub_B5D560(&_4__this->fields.missionToRecieve),
          (v14 = this->fields.__4__this) == 0LL)
      || (targetFSM = v14->fields.targetFSM) == 0LL )
    {
      sub_B5D69C(targetFSM, v12);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8846/*"MISSION_REWARD"*/, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__2(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_42E6568 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6568 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B5D69C(Instance, v6);
  v8 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventMissionItemListViewManager___c__DisplayClass56_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventMissionItemListViewManager_o *v12; // x19
  System_Collections_IEnumerator_o *v13; // x1

  v4 = this;
  if ( (byte_42E6566 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5, v6, v7);
    this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)sub_B5D5C4(
                                                                        &SingletonTemplate_MissionNotifyManager__TypeInfo,
                                                                        v8,
                                                                        v9,
                                                                        v10);
    byte_42E6566 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_12;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)this, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL), (v12 = v4->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  v13 = EventMissionItemListViewManager__afterReward(v12, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v12, v13, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_42E6567 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6567 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B5D69C(Instance, v6);
  v8 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___ctor(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventMissionItemListViewManager___c__DisplayClass56_1_o *v4; // x19
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v54; // x8
  struct EventMissionItemListViewManager_o *v55; // x8
  System_Text_StringBuilder_o *v56; // x20
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v57; // x8
  System_String_o *v58; // x21
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v61; // x1
  System_String_o *v62; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v63; // x8
  System_String_o *v64; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v65; // x8
  System_String_o *v66; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v67; // x8
  System_String_o *v68; // x21
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v69; // x8
  struct EventMissionItemListViewManager_o *v70; // x8
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v71; // x8
  struct EventMissionItemListViewManager_o *v72; // x8
  System_String_o *v73; // x21
  Il2CppObject *NumberFormat; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v75; // x8
  struct EventMissionItemListViewManager_o *v76; // x8
  System_String_o *v77; // x21
  Il2CppObject *v78; // x0
  System_String_o *v79; // x21
  _QWORD **v80; // x23
  __int64 v81; // x22
  __int16 v82; // w8
  __int64 v83; // x22
  __int64 v84; // x22
  __int64 v85; // x22
  CommonUI_o *v86; // x21
  EventMissionItemListViewManager___c__DisplayClass56_1_o *v87; // x22
  Il2CppObject *v88; // x24
  MissionRewardGetDialog_ClickDelegate_o *monitor; // x23
  System_String_o *v90; // x20
  Il2CppClass *klass; // x8

  v4 = this;
  if ( (byte_42E6569 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_object___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_8850/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_8836/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_8841/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_31/*"\n \n"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_32/*"\n \n "*/, v47, v48, v49);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)sub_B5D5C4(&StringLiteral_8851/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v50, v51, v52);
    byte_42E6569 = 1;
  }
  giftList = v4->fields.giftList;
  if ( !giftList )
    goto LABEL_80;
  if ( giftList->fields._size < 1 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
      CS___8__locals1 = v4->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v61 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_35615088(_4__this, v61, 0LL);
          return;
        }
      }
    }
    goto LABEL_80;
  }
  v54 = v4->fields.CS___8__locals1;
  if ( !v54 )
    goto LABEL_80;
  v55 = v54->fields.__4__this;
  if ( !v55 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v55->fields.touchBlockObj;
  if ( !this )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v56 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v56, 0LL);
  v57 = v4->fields.CS___8__locals1;
  if ( !v57 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v57->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_80;
  v58 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v58, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v58 )
        goto LABEL_80;
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__Substring_44641524(
                                                                          v58,
                                                                          0,
                                                                          v58->fields.m_stringLength - 2,
                                                                          0LL);
      if ( !v56 )
        goto LABEL_80;
      System_Text_StringBuilder__Append_42953744(v56, (System_String_o *)this, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8836/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__Append_42953744(
                                                                          v56,
                                                                          v62,
                                                                          0LL);
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0LL);
      if ( !v56 )
        goto LABEL_80;
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v56,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v58,
                                                                          0LL);
    }
    v63 = v4->fields.CS___8__locals1;
    if ( !v63 )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v63->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_80;
    v64 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v64, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__Append_42953744(
                                                                          v56,
                                                                          (System_String_o *)StringLiteral_32/*"\n \n "*/,
                                                                          0LL);
  }
  v65 = v4->fields.CS___8__locals1;
  if ( !v65 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v65->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_80;
  v66 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v66, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8841/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0LL);
    v67 = v4->fields.CS___8__locals1;
    if ( !v67 )
      goto LABEL_80;
    v68 = (System_String_o *)this;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v67->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                        this,
                                                                        this->klass[1]._1.image);
    if ( !v56 )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v56,
                                                                        v68,
                                                                        (Il2CppObject *)this,
                                                                        0LL);
  }
  v69 = v4->fields.CS___8__locals1;
  if ( !v69 )
    goto LABEL_80;
  v70 = v69->fields.__4__this;
  if ( !v70 )
    goto LABEL_80;
  if ( v70->fields.isQpMaxAlert )
  {
    if ( !v56 )
      goto LABEL_80;
    if ( v70->fields.isQpAlreadyMax )
    {
      System_Text_StringBuilder__set_Length(v56, 0, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8850/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v71 = v4->fields.CS___8__locals1;
      if ( v71 )
      {
        v72 = v71->fields.__4__this;
        if ( v72 )
        {
          v73 = (System_String_o *)this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v72->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v56, v73, NumberFormat, 0LL);
          goto LABEL_72;
        }
      }
LABEL_80:
      sub_B5D69C(this, method);
    }
    System_Text_StringBuilder__Append_42953744(v56, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8851/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v75 = v4->fields.CS___8__locals1;
    if ( !v75 )
      goto LABEL_80;
    v76 = v75->fields.__4__this;
    if ( !v76 )
      goto LABEL_80;
    v77 = (System_String_o *)this;
    v78 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v76->fields.overQpValue, 0LL);
    v79 = System_String__Format(v77, v78, 0LL);
    v80 = (_QWORD **)Method_System_Array_Empty_object___;
    v81 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v82 = *(_WORD *)(v81 + 306);
    if ( (v82 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v82 = *(_WORD *)(v81 + 306);
    }
    if ( (v82 & 0x400) != 0 )
    {
      v83 = *v80[6];
      if ( (*(_BYTE *)(v83 + 306) & 1) == 0 )
        sub_AF52C4(*v80[6]);
      if ( !*(_DWORD *)(v83 + 224) )
      {
        v84 = *v80[6];
        if ( (*(_BYTE *)(v84 + 306) & 1) == 0 )
          sub_AF52C4(*v80[6]);
        j_il2cpp_runtime_class_init_0(v84);
      }
    }
    v85 = *v80[6];
    if ( (*(_BYTE *)(v85 + 306) & 1) == 0 )
      sub_AF52C4(*v80[6]);
    System_Text_StringBuilder__AppendFormat_42960492(v56, v79, **(System_Object_array ***)(v85 + 184), 0LL);
  }
LABEL_72:
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v4->fields.giftList )
    goto LABEL_80;
  v86 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4->fields.giftList,
                                                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v56 )
    goto LABEL_80;
  v87 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v56->klass->vtable._3_ToString.method)(
                                                                      v56,
                                                                      v56->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v88 = (Il2CppObject *)v4->fields.CS___8__locals1;
  if ( !v88 )
    goto LABEL_80;
  monitor = (MissionRewardGetDialog_ClickDelegate_o *)v88[2].monitor;
  v90 = (System_String_o *)this;
  if ( !monitor )
  {
    monitor = (MissionRewardGetDialog_ClickDelegate_o *)sub_B5D694(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      monitor,
      v88,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__,
      0LL);
    v88[2].monitor = monitor;
    sub_B5D560(&v88[2].monitor);
    v88 = (Il2CppObject *)v4->fields.CS___8__locals1;
    if ( !v88 )
      goto LABEL_80;
  }
  klass = v88[1].klass;
  if ( !klass || !v86 )
    goto LABEL_80;
  CommonUI__OpenMissionRewardGetDialog(v86, (GiftEntity_array *)v87, v90, monitor, BYTE1(klass->vtable[11].method), 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *monitor; // x8
  MissionListViewManager_o *v9; // x20
  System_Action_o *klass; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E656A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)sub_B5D5C4(
                                                                        &Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__,
                                                                        v5,
                                                                        v6,
                                                                        v7);
    byte_42E656A = 1;
  }
  monitor = v4[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  v9 = (MissionListViewManager_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v4[3].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__,
      0LL);
    v4[3].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[3]);
  }
  if ( !v9 )
LABEL_8:
    sub_B5D69C(this, method);
  MissionListViewManager__StartSvtListGetEffect(v9, 0, klass, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__4(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
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
  SummonAssetManager_o *Instance; // x0
  __int64 v24; // x1
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  CommonUI_o *v27; // x20
  System_String_o *v28; // x0
  Il2CppObject *v29; // x23
  System_Action_o *klass; // x22
  System_String_o *v31; // x19
  System_String_o *v32; // x21

  if ( (byte_42E656B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E656B = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SummonAssetManager__UnloadSummonAssets(Instance, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v27 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v28, (Il2CppObject *)this->fields.sendName, 0LL);
  v29 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !v29 )
    goto LABEL_15;
  klass = (System_Action_o *)v29[3].klass;
  v31 = (System_String_o *)Instance;
  v32 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v29,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__,
      0LL);
    v29[3].klass = (Il2CppClass *)klass;
    sub_B5D560(&v29[3]);
  }
  if ( !v27 )
LABEL_15:
    sub_B5D69C(Instance, v24);
  CommonUI__OpenNotificationDialog(v27, v32, v31, klass, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass57_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass57_0___afterReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


bool __fastcall EventMissionItemListViewManager___c__DisplayClass57_0___afterReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall EventMissionItemListViewManager__afterReward_d__57___ctor(
        EventMissionItemListViewManager__afterReward_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventMissionItemListViewManager__afterReward_d__57__MoveNext(
        EventMissionItemListViewManager__afterReward_d__57_o *this,
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v31; // x21
  AutomatedAction_o *Instance; // x0
  __int64 v33; // x1
  System_Action_o *v34; // x22
  System_Func_bool__o *v35; // x20
  UnityEngine_WaitUntil_o *v36; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42E656D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__, v14, v15, v16);
    sub_B5D5C4(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__, v17, v18, v19);
    sub_B5D5C4(&EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_5559/*"END_EFFECT"*/, v26, v27, v28);
    byte_42E656D = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (AutomatedAction_o *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5559/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v31 = sub_B5D694(EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v31, 0LL);
    if ( v31 )
    {
      *(_BYTE *)(v31 + 16) = 0;
      v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v31,
        Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v34, 0LL);
        v35 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v35,
          (Il2CppObject *)v31,
          Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__,
          (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
        v36 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v36, v35, 0LL);
        this->fields.__2__current = (Il2CppObject *)v36;
        p__2__current = &this->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_B5D69C(Instance, v33);
  }
  return 0;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__afterReward_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__afterReward_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__afterReward_d__57__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__afterReward_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventMissionItemListViewManager__afterReward_d__57_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__afterReward_d__57__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__afterReward_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__afterReward_d__57__System_IDisposable_Dispose(
        EventMissionItemListViewManager__afterReward_d__57_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMissionItemListViewManager_resData___ctor(
        EventMissionItemListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}