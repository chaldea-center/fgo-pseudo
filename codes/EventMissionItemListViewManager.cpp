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
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F8915 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40F8915 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dialogTitle, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dialogMessage, v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dialogGetable, v18, v19, v20, v21, v22, v23, v24);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  AutomatedAction_o *v49; // x0
  struct EventMissionEntity_o *v50; // x8
  const MethodInfo *v51; // x1
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Text_StringBuilder_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Text_StringBuilder_o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Text_StringBuilder_o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  __int64 v83; // x28
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  Il2CppObject **v90; // x22
  const MethodInfo *v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  struct EventMissionEntity_o *v95; // x0
  __int64 v96; // x24
  il2cpp_array_size_t v97; // w21
  Il2CppClass **v98; // x27
  Il2CppClass *v99; // x8
  char *v100; // x27
  Il2CppClass *v101; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *IsServant_28854740; // x0
  WebViewManager_o *v103; // x0
  CommonUI_o *v104; // x0
  EventRewardSetEntity_o *SetRewardData; // x23
  System_Int32_array **v106; // x1
  Il2CppObject **v107; // x20
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **name; // x1
  struct GetSvts_array *getSvtList; // x8
  UnityEngine_GameObject_o *touchBlockObj; // x0
  SummonAssetManager_o *v123; // x19
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  System_Action_o *v128; // x20
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v133; // x23
  __int64 v134; // x3
  __int64 v135; // x4
  __int64 v136; // x28
  GiftEntity_o **m_Items; // x21
  GiftEntity_o *v138; // x8
  WebViewManager_o *v139; // x0
  GiftEntity_o *v140; // x8
  WarEntity_o *v141; // x0
  ServantEntity_o *v142; // x25
  bool IsCombineMaterial; // w26
  Il2CppClass *klass; // x0
  System_String_o *v145; // x0
  System_Text_StringBuilder_o *v146; // x0
  System_Text_StringBuilder_o *v147; // x26
  GiftEntity_o *v148; // x8
  Il2CppObject *v149; // x25
  Il2CppObject *v150; // x0
  System_String_o *v151; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v152; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v153; // x0
  GiftEntity_o *v154; // x8
  WebViewManager_o *v155; // x0
  GiftEntity_o *v156; // x8
  CommonUI_o *v157; // x0
  bool IsCountableWithPlus; // w0
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  Il2CppObject **v163; // x8
  Il2CppObject *v164; // x26
  System_Text_StringBuilder_o *v165; // x25
  int32_t getQpValue; // w8
  GiftEntity_o *v167; // x8
  System_String_o *v168; // x27
  Il2CppObject *v169; // x0
  System_Text_StringBuilder_o *monitor; // x26
  __int64 v171; // x0
  System_String_o *v172; // x1
  System_Text_StringBuilder_o *v173; // x0
  System_String_o *v174; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v175; // x22
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v182; // x0
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  System_Action_o *v187; // x22
  CommonUI_o *v188; // x19
  System_String_o *v189; // x0
  System_String_o *v190; // x0
  Il2CppObject *v191; // x22
  System_String_o *v192; // x20
  __int64 v193; // x1
  __int64 v194; // x2
  __int64 v195; // x3
  __int64 v196; // x4
  System_Action_o *v197; // x21
  MissionNotifyManager_o *v198; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v199; // [xsp+38h] [xbp-78h]
  __int64 v200; // [xsp+40h] [xbp-70h]
  int32_t num; // [xsp+4Ch] [xbp-64h] BYREF
  WarEntity_o *v202; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40F8900 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor___66736296, v15);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v22);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v23);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v24);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__, v25);
    sub_B16FFC(&EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo, v26);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__, v27);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__, v28);
    sub_B16FFC(&EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo, v29);
    sub_B16FFC(&StringLiteral_8721/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v30);
    sub_B16FFC(&StringLiteral_8720/*"MISSION_ACTION_SUCCESS"*/, v31);
    sub_B16FFC(&StringLiteral_23569/*"{0}×{1:#,0}"*/, v32);
    sub_B16FFC(&StringLiteral_23611/*"×"*/, v33);
    sub_B16FFC(&StringLiteral_8716/*"MISSION_ACTION_ITEM_FORMAT"*/, v34);
    sub_B16FFC(&StringLiteral_1/*""*/, v35);
    sub_B16FFC(&StringLiteral_30/*"\n "*/, v36);
    sub_B16FFC(&StringLiteral_23856/*"＋"*/, v37);
    byte_40F8900 = 1;
  }
  v202 = 0LL;
  entity = 0LL;
  v38 = sub_B170CC(EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo, method, v2, v3, v4);
  EventMissionItemListViewManager___c__DisplayClass56_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_0_o *)v38,
    0LL);
  if ( !v38 )
    goto LABEL_122;
  *(_QWORD *)(v38 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v38 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_122;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_122;
  GiftListById = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, missionToRecieve->fields.giftId, 0LL);
  v49 = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v50 = this->fields.missionToRecieve;
  if ( !v50 )
    goto LABEL_122;
  if ( !v49 )
    goto LABEL_122;
  AutomatedAction__SetStatusMissionNotify(v49, v50->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v51);
  v56 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v52, v53, v54, v55);
  System_Text_StringBuilder___ctor(v56, 0LL);
  *(_QWORD *)(v38 + 32) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v38 + 32), (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
  v67 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v63, v64, v65, v66);
  System_Text_StringBuilder___ctor(v67, 0LL);
  v72 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v68, v69, v70, v71);
  System_Text_StringBuilder___ctor(v72, 0LL);
  *(_QWORD *)(v38 + 24) = v72;
  sub_B16F98((BattleServantConfConponent_o *)(v38 + 24), (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
  v83 = sub_B170CC(EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo, v79, v80, v81, v82);
  EventMissionItemListViewManager___c__DisplayClass56_1___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v83,
    0LL);
  if ( !v83 )
    goto LABEL_122;
  *(_QWORD *)(v83 + 40) = v38;
  v90 = (Il2CppObject **)(v83 + 40);
  sub_B16F98((BattleServantConfConponent_o *)(v83 + 40), (System_Int32_array **)v38, v84, v85, v86, v87, v88, v89);
  v95 = this->fields.missionToRecieve;
  if ( !v95 )
    goto LABEL_122;
  if ( v95->fields.rewardType == 1 )
  {
    *(_DWORD *)(v83 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_122;
    v96 = *(_QWORD *)&GiftListById->max_length;
    if ( (int)v96 >= 1 )
    {
      v97 = 0;
      while ( 1 )
      {
        v98 = &GiftListById->obj.klass + (int)v97;
        v101 = v98[4];
        v100 = (char *)(v98 + 4);
        v99 = v101;
        if ( !v101 )
          break;
        IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)Gift__IsServant_28854740(
                                                                              HIDWORD(v99->_1.name),
                                                                              0LL);
        if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
        {
          if ( v97 >= GiftListById->max_length )
            goto LABEL_123;
          if ( !*(_QWORD *)v100 )
            break;
          IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)Gift__IsCommandCode_28855136(
                                                                                *(_DWORD *)(*(_QWORD *)v100 + 20LL),
                                                                                0LL);
          if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
          {
            if ( v97 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !*(_QWORD *)v100 )
              break;
            IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)Gift__IsCostumeRelease(
                                                                                  *(_DWORD *)(*(_QWORD *)v100 + 20LL),
                                                                                  0LL);
            if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
            {
              v103 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v103 )
                break;
              IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)v103,
                                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( v97 >= GiftListById->max_length )
                goto LABEL_123;
              if ( !*(_QWORD *)v100 || !IsServant_28854740 )
                break;
              IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                    IsServant_28854740,
                                                                                    &entity,
                                                                                    *(_DWORD *)(*(_QWORD *)v100 + 24LL),
                                                                                    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)IsServant_28854740 & 1) != 0 )
              {
                v104 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !entity || !v104 )
                  break;
                IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)CommonUI__IsGetItemEffect(
                                                                                      v104,
                                                                                      entity->fields.id,
                                                                                      0LL);
                if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
                  ++*(_DWORD *)(v83 + 24);
              }
            }
          }
        }
        if ( (int)++v97 >= (int)v96 )
          goto LABEL_41;
        if ( v97 >= GiftListById->max_length )
        {
LABEL_123:
          sub_B17100(IsServant_28854740, v91, v92);
          sub_B170A0();
        }
      }
LABEL_122:
      sub_B170D4();
    }
LABEL_41:
    v200 = v83;
    v199 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                     v91,
                                                                                                     v92,
                                                                                                     v93,
                                                                                                     v94);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v199,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v133 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                     v129,
                                                                                                     v130,
                                                                                                     v131,
                                                                                                     v132);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v133,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v96 >= 1 )
    {
      v136 = 0LL;
      m_Items = GiftListById->m_Items;
      do
      {
        if ( (unsigned int)v136 >= GiftListById->max_length )
          goto LABEL_123;
        v138 = m_Items[v136];
        if ( !v138 )
          goto LABEL_122;
        IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)Gift__IsServant_28854740(
                                                                              v138->fields.type,
                                                                              0LL);
        if ( ((unsigned __int8)IsServant_28854740 & 1) != 0 )
        {
          v139 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v139 )
            goto LABEL_122;
          IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)v139,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( (unsigned int)v136 >= GiftListById->max_length )
            goto LABEL_123;
          v140 = m_Items[v136];
          if ( !v140 )
            goto LABEL_122;
          if ( !IsServant_28854740 )
            goto LABEL_122;
          v141 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   IsServant_28854740,
                   v140->fields.objectId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !v141 )
            goto LABEL_122;
          v142 = (ServantEntity_o *)v141;
          IsCombineMaterial = SvtType__IsCombineMaterial(*(&v141->fields.startType + 1), 0LL);
          IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)SvtType__IsStatusUp(
                                                                                v142->fields.type,
                                                                                0LL);
          if ( IsCombineMaterial || ((unsigned __int8)IsServant_28854740 & 1) != 0 )
          {
            if ( !*v90 )
              goto LABEL_122;
            klass = (*v90)[2].klass;
            if ( !klass )
              goto LABEL_122;
            v145 = (System_String_o *)(*((__int64 (__fastcall **)(Il2CppClass *, _QWORD))klass->_1.image + 45))(
                                        klass,
                                        *((_QWORD *)klass->_1.image + 46));
            if ( !System_String__IsNullOrEmpty(v145, 0LL) )
            {
              if ( !*v90 )
                goto LABEL_122;
              v146 = (System_Text_StringBuilder_o *)(*v90)[2].klass;
              if ( !v146 )
                goto LABEL_122;
              System_Text_StringBuilder__Append_41914240(v146, (System_String_o *)StringLiteral_30/*"\n "*/, 0LL);
            }
            if ( !*v90 )
              goto LABEL_122;
            v147 = (System_Text_StringBuilder_o *)(*v90)[2].klass;
            IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__getName(v142, 0, -1, 0LL);
            if ( (unsigned int)v136 >= GiftListById->max_length )
              goto LABEL_123;
            v148 = m_Items[v136];
            if ( !v148 )
              goto LABEL_122;
            v149 = (Il2CppObject *)IsServant_28854740;
            num = v148->fields.num;
            v150 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
            v151 = System_String__Format_43739268((System_String_o *)StringLiteral_23569/*"{0}×{1:#,0}"*/, v149, v150, 0LL);
            if ( !v147 )
              goto LABEL_122;
            IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Text_StringBuilder__Append_41914240(
                                                                                  v147,
                                                                                  v151,
                                                                                  0LL);
            if ( (unsigned int)v136 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !v133 )
              goto LABEL_122;
            v152 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v136];
            v153 = v133;
LABEL_108:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v153,
              v152,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
          }
        }
        else
        {
          if ( (unsigned int)v136 >= GiftListById->max_length )
            goto LABEL_123;
          v154 = m_Items[v136];
          if ( !v154 )
            goto LABEL_122;
          IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)Gift__IsItem_28854684(
                                                                                v154->fields.type,
                                                                                0LL);
          if ( ((unsigned __int8)IsServant_28854740 & 1) != 0 )
          {
            v155 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v155 )
              goto LABEL_122;
            IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)v155,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( (unsigned int)v136 >= GiftListById->max_length )
              goto LABEL_123;
            v156 = m_Items[v136];
            if ( !v156 || !IsServant_28854740 )
              goto LABEL_122;
            IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  IsServant_28854740,
                                                                                  &v202,
                                                                                  v156->fields.objectId,
                                                                                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsServant_28854740 & 1) != 0 )
            {
              v157 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v202 || !v157 )
                goto LABEL_122;
              IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)CommonUI__IsGetItemEffect(
                                                                                    v157,
                                                                                    v202->fields.id,
                                                                                    0LL);
              if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
              {
                if ( !v202 )
                  goto LABEL_122;
                IsCountableWithPlus = ItemType__IsCountableWithPlus(v202->fields.bannerId, 0LL);
                v163 = (Il2CppObject **)&StringLiteral_23856/*"＋"*/;
                if ( !IsCountableWithPlus )
                  v163 = (Il2CppObject **)&StringLiteral_23611/*"×"*/;
                v164 = *v163;
                v165 = (System_Text_StringBuilder_o *)sub_B170CC(
                                                        System_Text_StringBuilder_TypeInfo,
                                                        v159,
                                                        v160,
                                                        v161,
                                                        v162);
                System_Text_StringBuilder___ctor(v165, 0LL);
                if ( !v202 || !v165 )
                  goto LABEL_122;
                System_Text_StringBuilder__Append_41914240(v165, v202->fields.age, 0LL);
                if ( this->fields.isQpMaxAlert && this->fields.getQpValue )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                        (System_String_o *)StringLiteral_8721/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/,
                                                                                        0LL);
                  getQpValue = this->fields.getQpValue;
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                        (System_String_o *)StringLiteral_8721/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/,
                                                                                        0LL);
                  if ( (unsigned int)v136 >= GiftListById->max_length )
                    goto LABEL_123;
                  v167 = m_Items[v136];
                  if ( !v167 )
                    goto LABEL_122;
                  getQpValue = v167->fields.num;
                }
                v168 = (System_String_o *)IsServant_28854740;
                num = getQpValue;
                v169 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
                System_Text_StringBuilder__AppendFormat_41920792(v165, v168, v164, v169, 0LL);
                if ( !*v90 )
                  goto LABEL_122;
                monitor = (System_Text_StringBuilder_o *)(*v90)[1].monitor;
                if ( *(int *)(v200 + 24) >= 2 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v174 = LocalizationManager__Get((System_String_o *)StringLiteral_8716/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                  if ( !monitor )
                    goto LABEL_122;
                  System_Text_StringBuilder__AppendFormat(monitor, v174, (Il2CppObject *)v165, 0LL);
                  if ( !*v90 )
                    goto LABEL_122;
                  v173 = (System_Text_StringBuilder_o *)(*v90)[1].monitor;
                  if ( !v173 )
                    goto LABEL_122;
                  v172 = (System_String_o *)StringLiteral_30/*"\n "*/;
                }
                else
                {
                  v171 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v165->klass->vtable._3_ToString.method)(
                           v165,
                           v165->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                  if ( !monitor )
                    goto LABEL_122;
                  v172 = (System_String_o *)v171;
                  v173 = monitor;
                }
                IsServant_28854740 = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Text_StringBuilder__Append_41914240(
                                                                                      v173,
                                                                                      v172,
                                                                                      0LL);
                if ( (unsigned int)v136 >= GiftListById->max_length )
                  goto LABEL_123;
                v153 = v199;
                if ( !v199 )
                  goto LABEL_122;
                v152 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v136];
                goto LABEL_108;
              }
            }
          }
        }
        ++v136;
      }
      while ( (int)v136 < (int)v96 );
    }
    v175 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                             v91,
                                                                             v92,
                                                                             v134,
                                                                             v135);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v175,
      (System_Collections_Generic_IEnumerable_T__o *)v199,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_GiftEntity___ctor___66736296);
    *(_QWORD *)(v200 + 16) = v175;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v200 + 16),
      (System_Int32_array **)v175,
      v176,
      v177,
      v178,
      v179,
      v180,
      v181);
    v182 = *(System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v200 + 16);
    if ( !v182 )
      goto LABEL_122;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v182,
      (System_Collections_Generic_IEnumerable_T__o *)v133,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v187 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v183, v184, v185, v186);
    System_Action___ctor(
      v187,
      (Il2CppObject *)v200,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v187, 0LL);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData(v95, v91);
    v106 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v83 + 32) = StringLiteral_1/*""*/;
    v107 = (Il2CppObject **)(v83 + 32);
    sub_B16F98((BattleServantConfConponent_o *)(v83 + 32), v106, v108, v109, v110, v111, v112, v113);
    if ( !SetRewardData )
      goto LABEL_122;
    name = (System_Int32_array **)SetRewardData->fields.name;
    *v107 = (Il2CppObject *)name;
    sub_B16F98((BattleServantConfConponent_o *)(v83 + 32), name, v114, v115, v116, v117, v118, v119);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      touchBlockObj = this->fields.touchBlockObj;
      if ( !touchBlockObj )
        goto LABEL_122;
      UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
      v123 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v128 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v124, v125, v126, v127);
      System_Action___ctor(
        v128,
        (Il2CppObject *)v83,
        Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__,
        0LL);
      if ( !v123 )
        goto LABEL_122;
      SummonAssetManager__LoadSummonAssets(v123, v128, 0LL);
    }
    else
    {
      v188 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v189 = LocalizationManager__Get((System_String_o *)StringLiteral_8720/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v190 = System_String__Format(v189, *v107, 0LL);
      v191 = *v90;
      v192 = v190;
      v197 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v193, v194, v195, v196);
      System_Action___ctor(
        v197,
        v191,
        Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__,
        0LL);
      if ( !v188 )
        goto LABEL_122;
      CommonUI__OpenNotificationDialog(
        v188,
        (System_String_o *)StringLiteral_1/*""*/,
        v192,
        v197,
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
    v198 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v198 )
      goto LABEL_122;
    MissionNotifyManager__EndPause(v198, 0LL);
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

  EventMissionItemListViewManager__CreateList_22545880(this, missionList, eventId, isDailyMission, 1, v5);
}


void __fastcall EventMissionItemListViewManager__CreateList_22545880(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct UIScrollView_o *scrollView; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x23
  int64_t Time; // x0
  bool v25; // w8
  _BOOL8 Data; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x8
  unsigned __int64 v35; // x26
  bool v36; // w22
  EventMissionEntity_o *v37; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  EventMissionItemListViewItem_o *v39; // x24
  const MethodInfo *v40; // x3
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v43; // x21
  System_String_o *v44; // x0

  if ( (byte_40F88EF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, missionList);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_8724/*"MISSION_EMPTY_TXT"*/, v19);
    byte_40F88EF = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_36;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_36;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v25 = Time > *(_QWORD *)&Entity->fields.eventId && Time <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v25;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  Data = UserMissionNewManager__ReadData(0LL);
  if ( !missionList )
    goto LABEL_36;
  v34 = *(_QWORD *)&missionList->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    v36 = isDailyMission;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v34 )
      {
        sub_B17100(Data, v27, v28);
        sub_B170A0();
      }
      v37 = missionList->m_Items[v35];
      itemList = this->fields.itemList;
      v39 = (EventMissionItemListViewItem_o *)sub_B170CC(EventMissionItemListViewItem_TypeInfo, v27, v28, v29, v30);
      EventMissionItemListViewItem___ctor(v39, v37, v36, v40);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v34) = missionList->max_length;
      if ( (__int64)++v35 >= (int)v34 )
        goto LABEL_22;
    }
LABEL_36:
    sub_B170D4();
  }
LABEL_22:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !byte_40F8918 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, sort);
    byte_40F8918 = 1;
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
    v43 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8724/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v43 )
      goto LABEL_36;
    UILabel__set_text(v43, v44, 0LL);
  }
  this->fields.currentEventId = eventId;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TerminalTransitionInfo_o *__fastcall EventMissionItemListViewManager__CreateTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  EventMissionActionAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x4
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  EventMissionActionAddEntity_o *v16; // x21
  EventMissionActionInfo_o *v17; // x20
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  WebViewManager_o *v23; // x0
  EventMissionActionMaster_o *v24; // x0
  const MethodInfo *v25; // x4
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  EventMissionActionEntity_o *v30; // x21
  const MethodInfo *v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **vals; // x1
  EventMissionItemListViewManager_o *v39; // x0
  const MethodInfo *v40; // x2
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_40F88FE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4);
    sub_B16FFC(&EventMissionActionInfo_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&TerminalTransitionInfo_TypeInfo, v7);
    byte_40F88FE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (EventMissionActionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                            MasterData_WarQuestSelectionMaster,
                                            missionId,
                                            5,
                                            4,
                                            v10);
  if ( EntityFromIdProgressTypeAndActionType )
  {
    v16 = EntityFromIdProgressTypeAndActionType;
    v17 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v12, v13, v14, v15);
    EventMissionActionInfo___ctor_22515852(v17, v16, v18);
LABEL_11:
    v30 = (EventMissionActionEntity_o *)sub_B170CC(TerminalTransitionInfo_TypeInfo, v19, v20, v21, v22);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v30, 0LL);
    if ( v30 )
    {
      v30->fields.missionId = missionId;
      if ( v17 )
      {
        vals = (System_Int32_array **)v17->fields.vals;
        v30->fields.vals = (struct System_String_array *)vals;
        sub_B16F98((BattleServantConfConponent_o *)&v30->fields.vals, vals, v32, v33, v34, v35, v36, v37);
        VoiceAssetName = (System_Int32_array **)EventMissionItemListViewManager__GetVoiceAssetName(
                                                  v39,
                                                  v17->fields.vals,
                                                  v40);
        *(_QWORD *)&v30->fields.optionId = VoiceAssetName;
        sub_B16F98((BattleServantConfConponent_o *)&v30->fields.optionId, VoiceAssetName, v42, v43, v44, v45, v46, v47);
        return (TerminalTransitionInfo_o *)v30;
      }
    }
LABEL_15:
    sub_B170D4();
  }
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23 )
    goto LABEL_15;
  v24 = (EventMissionActionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v23,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !v24 )
    goto LABEL_15;
  v30 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(v24, missionId, 5, 4, v25);
  if ( v30 )
  {
    v17 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v26, v27, v28, v29);
    EventMissionActionInfo___ctor(v17, v30, v31);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v30;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Int32_array **v14; // x1
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v30; // x22
  int32_t qp; // w23
  BalanceConfig_c *v32; // x0
  int32_t QpMax; // w8
  int32_t v34; // w23
  int32_t v35; // w24
  System_String_o *v36; // x23
  Il2CppObject *v37; // x24
  System_String_o *v38; // x0
  BalanceConfig_c *v39; // x8
  Il2CppObject *v40; // x25
  Il2CppObject *v41; // x0
  struct System_String_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int32_t v49; // w8
  int32_t num; // w8
  System_String_o *v51; // x0
  System_String_o *v52; // x23
  System_String_o *NumberFormat; // x0
  int32_t v54; // w8
  Il2CppObject *v55; // x22
  System_String_o *v56; // x0
  BalanceConfig_c *v57; // x8
  Il2CppObject *v58; // x24
  Il2CppObject *v59; // x0
  struct System_String_o *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  bool result; // w0

  if ( (byte_40F8911 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, giftEnt);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_8730/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v11);
    sub_B16FFC(&StringLiteral_8733/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40F8911 = 1;
  }
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dialogTitle,
    v14,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dialogMessage, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dialogGetable, v22, v23, v24, v25, v26, v27, v28);
  this->fields.isQpAlreadyMax = 0;
  this->fields.getQpValue = 0;
  this->fields.overQpValue = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_30;
  v30 = SelfUserGame;
  qp = SelfUserGame->fields.qp;
  v32 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  QpMax = v32->static_fields->QpMax;
  if ( qp >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8730/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v52 = v51;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v54 = v30->fields.qp;
      v55 = (Il2CppObject *)NumberFormat;
      v56 = LocalizationManager__GetNumberFormat(v54, 0LL);
      v57 = BalanceConfig_TypeInfo;
      v58 = (Il2CppObject *)v56;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v57 = BalanceConfig_TypeInfo;
      }
      v59 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v57->static_fields->QpMax, 0LL);
      v60 = System_String__Format_43744796(v52, v55, v58, v59, 0LL);
      this->fields.dialogMessage = v60;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.dialogMessage,
        (System_Int32_array **)v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      num = giftEnt->fields.num;
      goto LABEL_28;
    }
LABEL_30:
    sub_B170D4();
  }
  if ( !giftEnt )
    goto LABEL_30;
  v34 = v30->fields.qp;
  v35 = giftEnt->fields.num;
  if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v35 + v34 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8733/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v37 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v38 = LocalizationManager__GetNumberFormat(v30->fields.qp, 0LL);
    v39 = BalanceConfig_TypeInfo;
    v40 = (Il2CppObject *)v38;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    v41 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v39->static_fields->QpMax, 0LL);
    v42 = System_String__Format_43744796(v36, v37, v40, v41, 0LL);
    this->fields.dialogMessage = v42;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.dialogMessage,
      (System_Int32_array **)v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = BalanceConfig_TypeInfo->static_fields->QpMax - v30->fields.qp;
    this->fields.getQpValue = v49;
    num = giftEnt->fields.num - v49;
LABEL_28:
    result = 1;
    this->fields.overQpValue = num;
    return result;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionItemListViewItem_o *__fastcall EventMissionItemListViewManager__GetItem(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F88F5 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40F88F5 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (EventMissionItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == EventMissionItemListViewItem_TypeInfo )
    return (EventMissionItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall EventMissionItemListViewManager__GetReplaceDialogMessage(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *beforeGiftEntity,
        GiftEntity_o *AfterGiftEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  ConstantStrMaster_o *v13; // x21
  System_Int32_array **Value; // x24
  System_Int32_array **v15; // x23
  System_String_o *v16; // x21
  __int64 v17; // x2
  System_String_o *RewardName; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Object_array *v26; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x20
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x19

  if ( (byte_40F88F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantStrMaster___, beforeGiftEntity);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&object___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5625/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, v9);
    sub_B16FFC(&StringLiteral_5626/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, v10);
    sub_B16FFC(&StringLiteral_5691/*"EVENT_REWARD_REPLACE_MSG"*/, v11);
    byte_40F88F7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v13 = Master_WarQuestSelectionMaster;
  Value = (System_Int32_array **)ConstantStrMaster__GetValue(
                                   Master_WarQuestSelectionMaster,
                                   (System_String_o *)StringLiteral_5626/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/,
                                   0LL);
  v15 = (System_Int32_array **)ConstantStrMaster__GetValue(v13, (System_String_o *)StringLiteral_5625/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5691/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  RewardName = (System_String_o *)sub_B17014(object___TypeInfo, 4LL, v17);
  if ( !RewardName )
    goto LABEL_26;
  v26 = (System_Object_array *)RewardName;
  if ( Value )
  {
    RewardName = (System_String_o *)sub_B170BC(Value, RewardName->klass->_1.element_class);
    if ( !RewardName )
      goto LABEL_28;
  }
  if ( !v26->max_length )
    goto LABEL_27;
  v26->m_Items[0] = (Il2CppObject *)Value;
  sub_B16F98((BattleServantConfConponent_o *)v26->m_Items, Value, v20, v21, v22, v23, v24, v25);
  if ( v15 )
  {
    RewardName = (System_String_o *)sub_B170BC(v15, v26->obj.klass->_1.element_class);
    if ( !RewardName )
      goto LABEL_28;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_27;
  v26->m_Items[1] = (Il2CppObject *)v15;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[1], v15, v20, v27, v28, v29, v30, v31);
  if ( !beforeGiftEntity )
    goto LABEL_26;
  RewardName = GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v37 = (System_Int32_array **)RewardName;
  if ( RewardName )
  {
    RewardName = (System_String_o *)sub_B170BC(RewardName, v26->obj.klass->_1.element_class);
    if ( !RewardName )
    {
LABEL_28:
      sub_B170F4(RewardName);
      sub_B170A0();
    }
  }
  if ( v26->max_length <= 2 )
    goto LABEL_27;
  v26->m_Items[2] = (Il2CppObject *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[2], v37, v20, v32, v33, v34, v35, v36);
  if ( !AfterGiftEntity )
LABEL_26:
    sub_B170D4();
  RewardName = GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v43 = (System_Int32_array **)RewardName;
  if ( RewardName )
  {
    RewardName = (System_String_o *)sub_B170BC(RewardName, v26->obj.klass->_1.element_class);
    if ( !RewardName )
      goto LABEL_28;
  }
  if ( v26->max_length <= 3 )
  {
LABEL_27:
    sub_B17100(RewardName, v19, v20);
    sub_B170A0();
  }
  v26->m_Items[3] = (Il2CppObject *)v43;
  sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[3], v43, v20, v38, v39, v40, v41, v42);
  return System_String__Format_43822456(v16, v26, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewManager__GetVoiceAssetName(
        EventMissionItemListViewManager_o *this,
        System_String_array *afterActionVals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  signed int max_length; // w8
  System_String_o **v7; // x20
  signed int v8; // w21
  System_String_o *result; // x0
  WebViewManager_o *Instance; // x0
  System_String_o **basePanel; // x0
  __int64 v12; // x9
  EventMissionItemListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40F88FF & 1) == 0 )
  {
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, afterActionVals);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (EventMissionItemListViewManager_o *)sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40F88FF = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    v7 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v7;
  }
  v7 = (System_String_o **)&StringLiteral_1/*""*/;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
    {
      sub_B17100(this, afterActionVals, method);
      sub_B170A0();
    }
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v8], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v8 += 2;
    if ( v8 >= max_length )
      return *v7;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (basePanel = (System_String_o **)Instance->fields.basePanel) == 0LL )
    sub_B170D4();
  v12 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( BYTE4((*basePanel)[12].monitor) >= (unsigned int)v12
    && *((EventRewardRootComponent_c **)(*basePanel)[8].monitor + v12 - 1) == EventRewardRootComponent_TypeInfo )
  {
    v7 = basePanel + 191;
    return *v7;
  }
  v13 = (EventMissionItemListViewManager_o *)sub_B173C8(basePanel);
  EventMissionItemListViewManager__AcceptReward(v13, v14);
  return result;
}


void __fastcall EventMissionItemListViewManager__ModifyItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  UserEventMissionEntity_o *Entity; // x0
  UserEventMissionEntity_o *v16; // x20
  MissionListViewItem_o *current; // x22
  __int64 v18; // x10
  int32_t MissionId; // w0
  __int64 v20; // x1
  struct EventMissionEntity_o *v21; // x8
  int32_t v22; // w23
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F8906 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F8906 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve
      || !MasterData_WarQuestSelectionMaster
      || (Entity = UserEventMissionMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     UserId,
                     missionToRecieve->fields.id,
                     0LL),
          !this->fields.itemList) )
    {
LABEL_35:
      sub_B170D4();
    }
    v16 = Entity;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = (MissionListViewItem_o *)v26.fields.current;
      if ( !v26.fields.current
        || (v18 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v26.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18)
        || (EventMissionItemListViewItem_c *)v26.fields.current->klass->_2.typeHierarchy[v18 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B170D4();
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v26.fields.current, 0LL);
      v21 = this->fields.missionToRecieve;
      if ( !v21 )
        sub_B170D4();
      v22 = MissionId;
      if ( MissionId == v21->fields.id )
      {
        if ( !byte_40F6976 )
        {
          sub_B16FFC(&EventRewardSaveData_TypeInfo, v20);
          byte_40F6976 = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v22;
        if ( !v16 )
          sub_B170D4();
        MissionListViewItem__ModifyItem(current, v16->fields.missionProgressType == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v24 = current->fields.viewObject;
        if ( !v24 )
          sub_B170D4();
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v24->klass->vtable._5_SetItem.method)(
          v24,
          current,
          v24->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__MoveEaseScroll(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinish,
        EventMissionActionInfo_o *eventMissionActionInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EventMissionItemListViewItem_o *Item; // x0
  ListViewItem_o *v14; // x22
  UnityEngine_Object_o *viewObject; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v17; // x3
  System_Collections_IEnumerator_o *v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F88F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40F88F1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_18;
  v14 = (ListViewItem_o *)Item;
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
        &v19,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v19,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v19.fields.current == v14 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v14, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v19,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    if ( this->fields.tempFilterStatus == 1
      && (!eventMissionActionInfo || eventMissionActionInfo->fields.missionActionType == 4) )
    {
      v18 = EventMissionItemListViewManager__SetPreviousFilter(this, v14->fields.sortIndex, onFinish, v17);
    }
    else
    {
      v18 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v14->fields.sortIndex, onFinish, v17);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  }
  else
  {
LABEL_18:
    if ( !onFinish )
      sub_B170D4();
    System_Action__Invoke(onFinish, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F88F3 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo, *(_QWORD *)&index);
    byte_40F88F3 = 1;
  }
  v8 = sub_B170CC(
         EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo,
         *(_QWORD *)&index,
         onFinished,
         method,
         v4);
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__40___ctor(
    (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = index;
  *(_QWORD *)(v8 + 48) = onFinished;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)onFinished, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall EventMissionItemListViewManager__OnChangeAlphaAnim(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionItemListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  __int64 v7; // x22
  System_Collections_Generic_List_EventMissionItemListViewObject__o *v8; // x0
  EventMissionItemListViewObject_o *v9; // x0

  if ( (byte_40F8909 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v3);
    byte_40F8909 = 1;
  }
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = EventMissionItemListViewManager__get_ObjectList(this, v5);
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = v8->fields._items->m_Items[v7];
      if ( !v9 )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim(v9, 0LL);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall EventMissionItemListViewManager__OnClickFilterList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_40F890C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F890C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_3134500[filterStatus];
  EventMissionItemListViewManager__setList(this, v3);
}


void __fastcall EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x10
  System_Int32_array **Item; // x0
  MissionListViewItem_o **v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  char v32; // w0
  MissionListViewItem_o *v33; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v36; // x1
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v38; // x2
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  GiftMaster_o *v40; // x22
  EventMissionEntity_o *v41; // x0
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v43; // x22
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v46; // x21
  WebViewManager_o *Instance; // x19
  const MethodInfo *v48; // x3
  System_String_o *ReplaceDialogMessage; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Action_o *v54; // x22
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  EventMissionEntity_o *v57; // x1
  const MethodInfo *v58; // x2

  if ( (byte_40F88F6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_EventMissionItemListViewManager_OnClickListView__, v9);
    sub_B16FFC(&EventMissionItemListViewObject_TypeInfo, v10);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v13);
    sub_B16FFC(&EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40F88F6 = 1;
  }
  v16 = sub_B170CC(EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo, obj, method, v3, v4);
  EventMissionItemListViewManager___c__DisplayClass45_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass45_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_43;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  if ( !this->fields.isClickListViewEnabled )
    return;
  if ( !obj )
    goto LABEL_43;
  v23 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v23 )
    goto LABEL_43;
  if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[v23 - 1] != EventMissionItemListViewObject_TypeInfo )
    goto LABEL_43;
  Item = (System_Int32_array **)EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v16 + 24) = Item;
  v25 = (MissionListViewItem_o **)(v16 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), Item, v26, v27, v28, v29, v30, v31);
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  if ( !*(_QWORD *)(v16 + 24) )
    goto LABEL_43;
  v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 24) + 440LL))(
          *(_QWORD *)(v16 + 24),
          *(_QWORD *)(**(_QWORD **)(v16 + 24) + 448LL));
  v33 = *v25;
  if ( (v32 & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_43;
    eventMissionEnt = v33->fields.eventMissionEnt;
    if ( !eventMissionEnt )
      goto LABEL_43;
    if ( ((v33->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1)) == 0 )
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v33, 0LL);
      return;
    }
  }
  else if ( !v33 )
  {
    goto LABEL_43;
  }
  if ( v33->fields.progStatus == 3 )
  {
    if ( this->fields.filterStatus == 1 )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity(*v25, 0LL);
      if ( !EventMissionEntity )
        goto LABEL_43;
      this->fields.tempSelectDispNo = EventMissionEntity->fields.dispNo;
      v33 = *v25;
      if ( !*v25 )
        goto LABEL_43;
    }
    if ( EventMissionItemListViewItem__GetIsRewardQp((EventMissionItemListViewItem_o *)v33, (const MethodInfo *)v33) )
    {
      if ( !*v25 )
        goto LABEL_43;
      IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp((EventMissionItemListViewItem_o *)*v25, v36);
      this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v38);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !*v25
      || (v40 = (GiftMaster_o *)Master_WarQuestSelectionMaster,
          (v41 = MissionListViewItem__get_EventMissionEntity(*v25, 0LL)) == 0LL)
      || !v40 )
    {
LABEL_43:
      sub_B170D4();
    }
    DataById = GiftMaster__getDataById(v40, v41->fields.giftId, 0LL);
    if ( !DataById || (v43 = DataById, !DataById->fields._IsReplacedData_k__BackingField) )
    {
      if ( *v25 )
      {
        v57 = MissionListViewItem__get_EventMissionEntity(*v25, 0LL);
        EventMissionItemListViewManager__recieveReward(this, v57, v58);
        return;
      }
      goto LABEL_43;
    }
    if ( !*v25 )
      goto LABEL_43;
    giftEnts = (*v25)->fields.giftEnts;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0LL);
    if ( IconGiftEntity )
    {
      v46 = IconGiftEntity;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                               (EventMissionItemListViewManager_o *)Instance,
                               v46,
                               v43,
                               v48);
      v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v16,
        Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          ReplaceDialogMessage,
          v54,
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
    v55 = Method_EventMissionItemListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v55 = (_QWORD *)sub_B17004(Method_EventMissionItemListViewManager_OnClickListView__);
    v56 = (System_Reflection_MethodBase_o *)sub_B16FE0(v55, v55[3]);
    OverwriteAssetSoundName__PlaySystemSe(v56, 2, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  GiftEntity_array *GiftListById; // x21
  EventMissionItemListViewManager___c_c *v19; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__76_0; // x22
  Il2CppObject *v22; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Component_o *commandAssistLvUpDialog; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct EventMissionEntity_o *v32; // x8

  if ( (byte_40F890F & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_GiftEntity___, closeCallback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Func_GiftEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_GiftEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__, v10);
    sub_B16FFC(&EventMissionItemListViewManager___c_TypeInfo, v11);
    byte_40F890F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, missionToRecieve->fields.giftId, 0LL);
  v19 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v19 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_GiftEntity__bool__TypeInfo,
                                                                                    v14,
                                                                                    v15,
                                                                                    v16,
                                                                                    v17);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__76_0,
      v22,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_GiftEntity__bool___ctor__);
    v23 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v23->__9__76_0 = (struct System_Func_GiftEntity__bool__o *)_9__76_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__76_0,
      (System_Int32_array **)_9__76_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)GiftListById,
         (System_Func_T__bool__o *)_9__76_0,
         (const MethodInfo_18B6074 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    commandAssistLvUpDialog = (UnityEngine_Component_o *)this->fields.commandAssistLvUpDialog;
    if ( commandAssistLvUpDialog )
    {
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  commandAssistLvUpDialog,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v32 = this->fields.missionToRecieve;
      if ( v32 )
      {
        if ( Component_WebViewObject )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Component_WebViewObject,
            this->fields.currentEventId,
            v32->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B170D4();
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_String_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x27
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *onTransition; // x28
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Action_o *v38; // x20
  System_String_o *decide; // [xsp+28h] [xbp-58h]

  if ( (byte_40F8912 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_EventMissionItemListViewManager_Decide__, v10);
    sub_B16FFC(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__, v11);
    sub_B16FFC(&Method_EventMissionItemListViewManager_TransitionToCombineScene__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_11733/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v14);
    sub_B16FFC(&StringLiteral_11732/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v15);
    sub_B16FFC(&StringLiteral_11739/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v16);
    byte_40F8912 = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_B16F98(
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
  decide = LocalizationManager__Get((System_String_o *)StringLiteral_11733/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11739/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v23 = v18;
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_B170D4();
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    decide,
    v17,
    v23,
    v28,
    onTransition,
    v38,
    1,
    0LL);
}


void __fastcall EventMissionItemListViewManager__RedisplayEventUI(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  TitleInfoControl_o *v9; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8910 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SceneList_TypeInfo, v3);
    byte_40F8910 = 1;
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
      v9 = this->fields.titleInfo;
      if ( v9 )
      {
        TitleInfoControl__RedisplayEventUI(v9, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall EventMissionItemListViewManager__RefrashListDisp(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionItemListViewObject__o *ObjectList; // x0
  System_Collections_Generic_List_EventMissionItemListViewObject__o *v10; // x20
  __int64 v11; // x11
  __int64 v12; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v15; // w8
  __int64 v16; // x21
  EventMissionItemListViewObject_o *v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F890A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v8);
    byte_40F890A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v10 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v19.fields.current
      || (v11 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11)
      || (EventMissionItemListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v11 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    v12 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
    {
      if ( (EventMissionItemListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v12 - 1] == EventMissionItemListViewItem_TypeInfo )
        current = v19.fields.current;
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
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_25;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v15 = v10->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v15 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v17 = v10->fields._items->m_Items[v16];
        if ( !v17 )
          break;
        ((void (__fastcall *)(EventMissionItemListViewObject_o *, bool, Il2CppMethodPointer))v17->klass->vtable._9_SetInput.method)(
          v17,
          this->fields.isInput,
          v17->klass->vtable._10_Invalidation.methodPtr);
        v15 = v10->fields._size;
        if ( (int)++v16 >= v15 )
          return;
      }
LABEL_25:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_22563180(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x21
  __int64 v13; // x10
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_EventMissionItemListViewObject__o *ObjectList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_EventMissionItemListViewObject__o *v17; // x21
  int v18; // w8
  __int64 v19; // x23
  __int64 v20; // x8
  __int64 v21; // x22
  MissionListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F890B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v10);
    byte_40F890B = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v24.fields.current;
    if ( !v24.fields.current
      || (v13 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v13)
      || (EventMissionItemListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v13 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v24.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, v14);
  if ( !ObjectList )
    goto LABEL_24;
  size = ObjectList->fields._size;
  v17 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v18 = ObjectList->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v18 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v20 = (__int64)v17->fields._items + 8 * v19;
        v21 = *(_QWORD *)(v20 + 32);
        if ( !v21 )
          break;
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          *(EventMissionItemListViewObject_o **)(v20 + 32),
                                          0LL);
        if ( !Item )
          break;
        if ( MissionListViewItem__get_MissionId(Item, 0LL) == missionId )
          (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v21 + 456LL))(
            v21,
            this->fields.isInput,
            *(_QWORD *)(*(_QWORD *)v21 + 464LL));
        v18 = v17->fields._size;
        if ( (int)++v19 >= v18 )
          return;
      }
LABEL_24:
      sub_B170D4();
    }
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_40F88FD & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F88FD = 1;
  }
  if ( !byte_40F8919 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, method);
    byte_40F8919 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct EventMissionItemListViewItem_o *v12; // x21
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F8907 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v6);
    sub_B16FFC(&StringLiteral_18129/*"ef_mission_extric01"*/, v7);
    sub_B16FFC(&StringLiteral_20480/*"modifyOpenItem"*/, v8);
    byte_40F8907 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B170D4();
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v23,
        ObjectList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v24 = v23;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v24,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__) )
      {
        current = v24.fields.current;
        if ( !v24.fields.current )
          sub_B170D4();
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v24.fields.current,
                                          0LL);
        v12 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_B170D4();
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_40F6976 )
          {
            sub_B16FFC(&EventRewardSaveData_TypeInfo, v13);
            byte_40F6976 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v12;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v12,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v12, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18129/*"ef_mission_extric01"*/, transform, v22);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v24,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20480/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__SetPreviousFilter(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F88F2 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo, *(_QWORD *)&index);
    byte_40F88F2 = 1;
  }
  v8 = sub_B170CC(
         EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo,
         *(_QWORD *)&index,
         onFinished,
         method,
         v4);
  EventMissionItemListViewManager__SetPreviousFilter_d__39___ctor(
    (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = index;
  *(_QWORD *)(v8 + 48) = onFinished;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)onFinished, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall EventMissionItemListViewManager__SetScrollEnable(
        EventMissionItemListViewManager_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v5; // w20
  UnityEngine_Behaviour_o *scrollBar; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (v5 = enable,
        UnityEngine_Behaviour__set_enabled(scrollView, enable, 0LL),
        (scrollBar = (UnityEngine_Behaviour_o *)this->fields.scrollBar) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(scrollBar, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F8913 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F8913 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
  EventMissionItemListViewManager__dialogCallback(this, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_40F8916 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, *(_QWORD *)&x);
    byte_40F8916 = 1;
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  WebViewManager_o *Instance; // x0
  EventMissionActionAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v32; // x4
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIdProgressTypeAndActionType; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v40; // x21
  const MethodInfo *v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  WebViewManager_o *v46; // x0
  EventMissionActionMaster_o *v47; // x0
  const MethodInfo *v48; // x4
  struct EventMissionEntity_o *v49; // x8
  System_Collections_Generic_List_EventMissionActionEntity__o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x22
  EventMissionActionInfo_o *v56; // x21
  const MethodInfo *v57; // x2
  int v58; // w21
  EventMissionItemListViewManager___c_c *v59; // x0
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__64_1; // x21
  Il2CppObject *v62; // x22
  struct EventMissionItemListViewManager___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x0
  const MethodInfo *targetMissionId; // x1
  __int64 v72; // x2
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v74; // x8
  __int64 v75; // x8
  int32_t v76; // w0
  const MethodInfo *v77; // x2
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+8h] [xbp-A8h] BYREF
  int v79[2]; // [xsp+20h] [xbp-90h]
  int v80; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_40F8917 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMissionActionInfo___ctor__, method);
    sub_B16FFC(&System_Comparison_EventMissionActionInfo__TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v14);
    sub_B16FFC(&EventMissionActionInfo_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v23);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__, v26);
    sub_B16FFC(&EventMissionItemListViewManager___c_TypeInfo, v27);
    sub_B16FFC(&StringLiteral_16170/*"actionAfterCallback"*/, v28);
    byte_40F8917 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  memset(&v81, 0, sizeof(v81));
  v80 = 0;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (EventMissionActionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(MasterData_WarQuestSelectionMaster, missionToRecieve->fields.id, 5, 3, v32);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v78,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v82 = v78;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v82,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v82.fields.current;
      v40 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v35, v36, v37, v38);
      EventMissionActionInfo___ctor_22515852(v40, (EventMissionActionAddEntity_o *)current, v41);
      if ( !v29 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v79[0] = 185;
    v80 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v82,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v80 = 0;
  }
  else
  {
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v46 )
      goto LABEL_43;
    v47 = (EventMissionActionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v46,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v49 = this->fields.missionToRecieve;
    if ( !v49 )
      goto LABEL_43;
    if ( !v47 )
      goto LABEL_43;
    v50 = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(v47, v49->fields.id, 5, 3, v48);
    if ( !v50 )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v78,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v50,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v81 = v78;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v81,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v55 = v81.fields.current;
      v56 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v51, v52, v53, v54);
      EventMissionActionInfo___ctor(v56, (EventMissionActionEntity_o *)v55, v57);
      if ( !v29 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v79[0] = 185;
    v58 = ++v80;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v81,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v58 && v79[v58 - 1] == 185 )
      v80 = v58 - 1;
  }
  v59 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v59 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v59->static_fields;
  _9__64_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__64_1;
  if ( !_9__64_1 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)static_fields->__9;
    _9__64_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMissionActionInfo__TypeInfo,
                                                                           v42,
                                                                           v43,
                                                                           v44,
                                                                           v45);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__64_1,
      v62,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionActionInfo___ctor__);
    v63 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v63->__9__64_1 = (struct System_Comparison_EventMissionActionInfo__o *)_9__64_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v63->__9__64_1,
      (System_Int32_array **)_9__64_1,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !v29 )
    goto LABEL_43;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v29,
    (System_Comparison_T__o *)_9__64_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  size = v29->fields._size;
  if ( size <= 0 )
    goto LABEL_39;
  v74 = v29->fields._items->m_Items[size - 1];
  if ( !v74 || (v75 = *(_QWORD *)&v74->fields.addCount) == 0 )
LABEL_43:
    sub_B170D4();
  if ( !*(_DWORD *)(v75 + 24) )
  {
    sub_B17100(v70, targetMissionId, v72);
    sub_B170A0();
  }
  v76 = System_Int32__Parse(*(System_String_o **)(v75 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v76 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_22563180(this, (int32_t)targetMissionId, v77);
    goto LABEL_41;
  }
LABEL_39:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_41:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16170/*"actionAfterCallback"*/,
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
    sub_B16F98(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__afterReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8901 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewManager__afterReward_d__57_TypeInfo, method);
    byte_40F8901 = 1;
  }
  v6 = sub_B170CC(EventMissionItemListViewManager__afterReward_d__57_TypeInfo, method, v2, v3, v4);
  EventMissionItemListViewManager__afterReward_d__57___ctor(
    (EventMissionItemListViewManager__afterReward_d__57_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EventMissionItemListViewManager__checkAcceptable(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
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
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_o *DataById; // x0
  struct EventMissionEntity_o *v19; // x8
  GiftEntity_o *v20; // x20
  WebViewManager_o *v21; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v24; // x21
  WebViewManager_o *v25; // x0
  UserPresentBoxMaster_o *v26; // x21
  int64_t UserId; // x0
  UserPresentBoxEntity_array *VaildList; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t max_length; // w21
  BalanceConfig_c *v37; // x0
  int32_t PresentBoxMax; // w8
  int32_t num; // w20
  EventMissionItemListViewManager___c_c *v40; // x0
  struct EventMissionItemListViewManager___c_StaticFields *v41; // x8
  System_Action_o *_9__49_0; // x20
  Il2CppObject *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct EventMissionItemListViewManager___c_StaticFields *v50; // x0
  BattleServantConfConponent_o *p__9__49_0; // x0
  PlayMakerFSM_o *targetFSM; // x0
  __int64 *v53; // x8
  EventMissionItemListViewManager___c_c *v54; // x0
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  Il2CppObject *v56; // x21
  struct EventMissionItemListViewManager___c_StaticFields *v57; // x0

  if ( (byte_40F88F9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__, v10);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__, v11);
    sub_B16FFC(&EventMissionItemListViewManager___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_12187/*"SHOW_MSG"*/, v13);
    sub_B16FFC(&StringLiteral_11101/*"REWARD_ACCEPTABLE"*/, v14);
    byte_40F88F9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_51;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_51;
  DataById = GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, missionToRecieve->fields.giftId, 0LL);
  v19 = this->fields.missionToRecieve;
  if ( !v19 )
    goto LABEL_51;
  if ( v19->fields.rewardType == 1 )
  {
    v20 = DataById;
    if ( !DataById )
      goto LABEL_51;
    if ( Gift__IsServant_28854740(DataById->fields.type, 0LL) )
    {
      v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v21 )
        goto LABEL_51;
      v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v21,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !v22 )
        goto LABEL_51;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v22,
                 v20->fields.objectId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_51;
      v24 = Entity;
      if ( SvtType__IsCombineMaterial(*(&Entity->fields.startType + 1), 0LL)
        || SvtType__IsStatusUp(*(&v24->fields.startType + 1), 0LL) )
      {
        v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v25 )
          goto LABEL_51;
        v26 = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v25,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v26 )
          goto LABEL_51;
        VaildList = UserPresentBoxMaster__getVaildList(v26, UserId, 0LL);
        if ( !VaildList )
          goto LABEL_51;
        max_length = VaildList->max_length;
        v37 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v37 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v37->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= max_length )
        {
          v54 = EventMissionItemListViewManager___c_TypeInfo;
          if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v54 = EventMissionItemListViewManager___c_TypeInfo;
          }
          static_fields = v54->static_fields;
          _9__49_0 = static_fields->__9__49_0;
          if ( !_9__49_0 )
          {
            if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v54);
              static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v56 = (Il2CppObject *)static_fields->__9;
            _9__49_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
            System_Action___ctor(
              _9__49_0,
              v56,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__,
              0LL);
            v57 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v57->__9__49_0 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v57->__9__49_0;
            goto LABEL_48;
          }
LABEL_49:
          this->fields.ShowMSG = _9__49_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.ShowMSG,
            (System_Int32_array **)_9__49_0,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          targetFSM = this->fields.targetFSM;
          if ( targetFSM )
          {
            v53 = &StringLiteral_12187/*"SHOW_MSG"*/;
            goto LABEL_39;
          }
LABEL_51:
          sub_B170D4();
        }
        num = v20->fields.num;
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( num + max_length > PresentBoxMax )
        {
          v40 = EventMissionItemListViewManager___c_TypeInfo;
          if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v40 = EventMissionItemListViewManager___c_TypeInfo;
          }
          v41 = v40->static_fields;
          _9__49_0 = v41->__9__49_1;
          if ( !_9__49_0 )
          {
            if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v40);
              v41 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v43 = (Il2CppObject *)v41->__9;
            _9__49_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
            System_Action___ctor(
              _9__49_0,
              v43,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__,
              0LL);
            v50 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v50->__9__49_1 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v50->__9__49_1;
LABEL_48:
            sub_B16F98(p__9__49_0, (System_Int32_array **)_9__49_0, v44, v45, v46, v47, v48, v49);
            goto LABEL_49;
          }
          goto LABEL_49;
        }
      }
    }
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_51;
  v53 = &StringLiteral_11101/*"REWARD_ACCEPTABLE"*/;
LABEL_39:
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)*v53, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_40F8914 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_40F8914 = 1;
  }
  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    this->fields.dialogCallBack = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.dialogCallBack,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(dialogCallBack, result, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
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
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v13; // x1
  int32_t filterStatus; // w8
  AutomatedAction_o *Instance; // x0
  struct EventMissionEntity_o *v16; // x8

  if ( (byte_40F8904 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewManager_TypeInfo, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10);
    byte_40F8904 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventMissionItemListViewManager_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B16F98(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
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
        EventMissionItemListViewManager__setList(this, v13);
      }
    }
    else
    {
      EventMissionItemListViewManager__RefrashListDisp(this, v13);
    }
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v16 = this->fields.missionToRecieve;
    if ( !v16 || !Instance )
LABEL_13:
      sub_B170D4();
    AutomatedAction__SetMissionAction(Instance, v16->fields.id, 5, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventMissionItemListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x19
  int v14; // s0
  UnityEngine_Transform_o *v17; // x19
  int v18; // s0

  if ( (byte_40F8905 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, parentTr);
    sub_B16FFC(&EventMissionItemListViewManager_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F8905 = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_12;
  v11 = v10;
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_parent(transform, parentTr, 0LL),
        v13 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
        !v13)
    || (UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL),
        v17 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
        !v17) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  return v11;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  EventMissionItemListViewObject_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F88EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F88EE = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v14;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F88ED & 1) == 0 )
  {
    sub_B16FFC(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___, method);
    byte_40F88ED = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_19DCC28 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssetLoader_LoadEndDataHandler_o *v9; // x20

  if ( (byte_40F8903 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_EventMissionItemListViewManager_endloadEffect__, v6);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5824/*"Effect/EventMission"*/, v8);
    byte_40F8903 = 1;
  }
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3, v4);
  AssetLoader_LoadEndDataHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5824/*"Effect/EventMission"*/, v9, 1, 0LL);
}


void __fastcall EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PlayMakerFSM_o *targetFSM; // x0
  __int64 *v12; // x8
  Il2CppObject *v13; // x20
  UserPresentBoxWindow_resData_array *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserPresentBoxWindow_resData_array *v22; // x20
  UserPresentBoxWindow_resData_o *v23; // x8
  struct GetSvts_array *v24; // x1
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UserPresentBoxWindow_resData_o *v30; // x8
  struct GetCommandCodes_array *getSvts; // x1
  const MethodInfo *v32; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20
  UnityEngine_GameObject_o *touchBlockObj; // x0

  if ( (byte_40F88FC & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___, result);
    sub_B16FFC(&JsonManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v6);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v7);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v8);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v9);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v10);
    byte_40F88FC = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( !System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    v13 = (Il2CppObject *)System_String__Concat_43746016(
                            (System_String_o *)StringLiteral_15571/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15807/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            v13,
            (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( v14 )
    {
      v22 = v14;
      if ( !v14->max_length )
        goto LABEL_23;
      v23 = v14->m_Items[0];
      if ( !v23 )
        goto LABEL_22;
      v24 = *(struct GetSvts_array **)&v23->fields.overflowType;
      this->fields.getSvtList = v24;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.getSvtList,
        (System_Int32_array **)v24,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( !v22->max_length )
      {
LABEL_23:
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
      v30 = v22->m_Items[0];
      if ( v30 )
      {
        getSvts = (struct GetCommandCodes_array *)v30->fields.getSvts;
        this->fields.getCommandCodeList = getSvts;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.getCommandCodeList,
          (System_Int32_array **)getSvts,
          v16,
          v25,
          v26,
          v27,
          v28,
          v29);
        missionToRecieve = this->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_40F6976 )
          {
            sub_B16FFC(&EventRewardSaveData_TypeInfo, v32);
            byte_40F6976 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          EventMissionItemListViewManager__SaveTerminalTransitionInfo(this, v32);
          touchBlockObj = this->fields.touchBlockObj;
          if ( touchBlockObj )
          {
            UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
            targetFSM = this->fields.targetFSM;
            if ( targetFSM )
            {
              v12 = &StringLiteral_11043/*"REQUEST_OK"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_22;
  v12 = &StringLiteral_11041/*"REQUEST_NG"*/;
LABEL_21:
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)*v12, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v16; // x10
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *monitor; // x21
  EventMissionItemListViewObject_o *v20; // x0
  __int64 v21; // x9
  UnityEngine_Object_o *v22; // x21
  void *v23; // x0
  System_Action_o *v24; // x20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F8908 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, v10);
    sub_B16FFC(&EventMissionItemListViewObject_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F8908 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v26.fields.current;
      if ( !v26.fields.current
        || (v16 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v26.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v16)
        || (EventMissionItemListViewItem_c *)v26.fields.current->klass->_2.typeHierarchy[v16 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B170D4();
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v26.fields.current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_B170D4();
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
          v20 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v20 )
            sub_B170D4();
          v21 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
            || (EventMissionItemListViewObject_c *)v20->klass->_2.typeHierarchy[v21 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            sub_B173C8(v20);
LABEL_31:
            sub_B170D4();
          }
          EventMissionItemListViewObject__ModifyBoardImage(v20, 0LL);
        }
      }
      v22 = (UnityEngine_Object_o *)current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
      {
        v23 = current[6].monitor;
        if ( !v23 )
          goto LABEL_31;
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v23 + 392LL))(
          v23,
          current,
          *(_QWORD *)(*(_QWORD *)v23 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v24, 0LL);
}


void __fastcall EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct EventMissionEntity_o **v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_int__o *v30; // x20
  const MethodInfo *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  struct EventMissionEntity_o *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_40F88F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, missionEntity);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&Method_EventMissionItemListViewManager_recieveReward__, v8);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__, v9);
    sub_B16FFC(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_8727/*"MISSION_REWARD"*/, v11);
    byte_40F88F8 = 1;
  }
  v12 = sub_B170CC(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, missionEntity, method, v3, v4);
  EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass47_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = missionEntity;
  v19 = (struct EventMissionEntity_o **)(v12 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)missionEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( this->fields.isQpMaxAlert )
  {
    v30 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v26, v27, v28, v29);
    System_Action_int____ctor(
      v30,
      (Il2CppObject *)v12,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v30, v31);
    return;
  }
  v32 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 75) & 2) != 0 )
    v32 = (_QWORD *)sub_B17004(Method_EventMissionItemListViewManager_recieveReward__);
  v33 = (System_Reflection_MethodBase_o *)sub_B16FE0(v32, v32[3]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 8, 0LL);
  v34 = *v19;
  this->fields.missionToRecieve = *v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.missionToRecieve,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_B170D4();
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8727/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__requestMissionReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v15; // x2
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_40F88FB & 1) == 0 )
  {
    sub_B16FFC(&Method_EventMissionItemListViewManager_missionRewardCallback__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    byte_40F88FB = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    goto LABEL_13;
  MissionNotifyManager__StartPause(v8, 0LL);
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11, v12);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v13,
                                                                            (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B170D4();
  EventMissionClearRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, missionToRecieve->fields.id, v15);
}


void __fastcall EventMissionItemListViewManager__setAfterAction(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_40F8902 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_40F8902 = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_B170D4();
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
  UnityEngine_Object_o *filterBtnTxt; // x21
  UISprite_o *v6; // x0
  struct UISprite_o *v7; // x0

  if ( (byte_40F890E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, targetFile);
    byte_40F890E = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0LL, 0LL) )
  {
    v6 = this->fields.filterBtnTxt;
    if ( !v6 || (UISprite__set_spriteName(v6, targetFile, 0LL), (v7 = this->fields.filterBtnTxt) == 0LL) )
      sub_B170D4();
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
      v7,
      v7->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventMissionItemListViewManager__setList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v12; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v22; // x0
  bool v23; // w2
  ListViewSort_o *v24; // x0
  ListViewSort_o *v25; // x0
  bool v26; // w2
  ListViewSort_o *v27; // x0
  ListViewSort_o *v28; // x0
  bool v29; // w2
  ListViewSort_o *v30; // x0
  ListViewSort_o *v31; // x0
  bool v32; // w2
  ListViewSort_o *v33; // x0
  ListViewSort_o *v34; // x0
  __int64 v35; // x1
  int32_t filterStatus; // w19

  if ( (byte_40F890D & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16980/*"btn_txt_completed"*/, v6);
    sub_B16FFC(&StringLiteral_17013/*"btn_txt_receipt"*/, v7);
    sub_B16FFC(&StringLiteral_17012/*"btn_txt_progress"*/, v8);
    sub_B16FFC(&StringLiteral_16996/*"btn_txt_notopen"*/, v9);
    sub_B16FFC(&StringLiteral_16963/*"btn_txt_all"*/, v10);
    byte_40F890D = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v12 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, method, v2, v3, v4);
  ListViewSort___ctor_30209040(v12, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_16963/*"btn_txt_all"*/, v20);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(*p_operationSortInfo, 14, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(*p_operationSortInfo, 15, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(*p_operationSortInfo, 16, 1, 0LL);
      v22 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v23 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17013/*"btn_txt_receipt"*/, v20);
      v30 = this->fields.operationSortInfo;
      if ( !v30 )
        goto LABEL_36;
      ListViewSort__SetFilter(v30, 13, 1, 0LL);
      v25 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v26 = 0;
      goto LABEL_21;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17012/*"btn_txt_progress"*/, v20);
      v24 = this->fields.operationSortInfo;
      if ( !v24 )
        goto LABEL_36;
      ListViewSort__SetFilter(v24, 13, 1, 0LL);
      v25 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v26 = 1;
LABEL_21:
      ListViewSort__SetFilter(v25, 14, v26, 0LL);
      v31 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v32 = 0;
LABEL_27:
      ListViewSort__SetFilter(v31, 15, v32, 0LL);
      v28 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v29 = 0;
LABEL_29:
      ListViewSort__SetFilter(v28, 16, v29, 0LL);
      v22 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v23 = 0;
LABEL_31:
      ListViewSort__SetFilter(v22, 17, v23, 0LL);
LABEL_32:
      v34 = this->fields.baseSortInfo;
      if ( !v34 )
LABEL_36:
        sub_B170D4();
      ListViewSort__Set(v34, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_40F6975 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v35);
        byte_40F6975 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_16996/*"btn_txt_notopen"*/, v20);
      v33 = this->fields.operationSortInfo;
      if ( !v33 )
        goto LABEL_36;
      ListViewSort__SetFilter(v33, 13, 0, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(*p_operationSortInfo, 14, 0, 0LL);
      v31 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v32 = 1;
      goto LABEL_27;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_16980/*"btn_txt_completed"*/, v20);
      v27 = this->fields.operationSortInfo;
      if ( !v27 )
        goto LABEL_36;
      ListViewSort__SetFilter(v27, 13, 0, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(*p_operationSortInfo, 14, 0, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(*p_operationSortInfo, 15, 0, 0LL);
      v28 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v29 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  signed __int64 size; // x22
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v14; // x2
  int32_t TodayFirstMissionId; // w20
  unsigned __int64 v16; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x24
  ListViewItem_o *v18; // x8
  __int64 v19; // x11
  MissionListViewItem_o *v20; // x0

  if ( (byte_40F88F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, isRaid);
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F88F4 = 1;
  }
  if ( !byte_40F8918 )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, isRaid);
    byte_40F8918 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  size = itemList->fields._size;
  if ( byte_40F8919 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, isRaid);
    byte_40F8919 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_31;
      TodayFirstMissionId = EventMissionConditionMaster__getTodayFirstMissionId(
                              MasterData_WarQuestSelectionMaster,
                              this->fields.currentEventId,
                              v14);
      goto LABEL_14;
    }
  }
  TodayFirstMissionId = static_fields->_MissionId_k__BackingField;
LABEL_14:
  if ( (int)size >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = this->fields.itemList;
      if ( !v17 )
        break;
      if ( v16 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = v17->fields._items->m_Items[v16];
      if ( v18
        && (v19 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
      {
        if ( (EventMissionItemListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] == EventMissionItemListViewItem_TypeInfo )
          v20 = (MissionListViewItem_o *)v17->fields._items->m_Items[v16];
        else
          v20 = 0LL;
      }
      else
      {
        v20 = 0LL;
      }
      if ( TodayFirstMissionId >= 1 )
      {
        if ( !v20 )
          break;
        if ( MissionListViewItem__get_MissionId(v20, 0LL) == TodayFirstMissionId )
          goto LABEL_30;
      }
      if ( (__int64)++v16 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B170D4();
  }
LABEL_29:
  LODWORD(v16) = 0;
LABEL_30:
  ListViewManager__SetTopItem((ListViewManager_o *)this, v16, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int v20; // w8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x23
  unsigned __int64 v23; // x21
  ListViewItem_o *v24; // x8
  __int64 v25; // x11
  __int64 v26; // x11
  MissionListViewItem_o *v27; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  WebViewManager_o *Instance; // x0
  EventRewardSceneMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x4
  System_Action_o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_40F88F0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, currentMissionActionInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v13);
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, v14);
    sub_B16FFC(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__, v15);
    sub_B16FFC(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40F88F0 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.actionCallback,
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
        v20 = 1056964608;
      else
        v20 = 1069547520;
      LODWORD(this->fields.endEffectTime) = v20;
    }
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_37:
    sub_B170D4();
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v24 = itemList->fields._items->m_Items[v23];
      if ( !v24 )
        goto LABEL_37;
      v25 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (EventMissionItemListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v26 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v24->klass->_2.bitflags2 + 1) >= (unsigned int)v26 )
        v27 = (EventMissionItemListViewItem_c *)v24->klass->_2.typeHierarchy[v26 - 1] == EventMissionItemListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v23]
            : 0LL;
      else
        v27 = 0LL;
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity(v27, 0LL);
      if ( !EventMissionEntity )
        goto LABEL_37;
      if ( EventMissionEntity->fields.id == missionID )
        goto LABEL_31;
      if ( (__int64)++v23 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  LODWORD(v23) = 0;
LABEL_31:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventRewardSceneMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               MasterData_WarQuestSelectionMaster,
                               this->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
    System_Action___ctor(
      v36,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(this, v23, v36, eventMissionActionInfo, v37);
  }
  else
  {
    v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
    System_Action___ctor(
      v38,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__,
      0LL);
    this->fields.callbackAfterScroll = v38;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    ListViewManager__MoveTopItem((ListViewManager_o *)this, v23, 1, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_40F88FA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5472/*"END_NOTICE"*/, method);
    byte_40F88FA = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (targetFSM = this->fields.targetFSM) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5472/*"END_NOTICE"*/, 0LL);
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
  UIProgressBar_o *scrollBar; // x0
  UIProgressBar_o *v6; // x0
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Transform_o *transform; // x0
  float v9; // s1
  UIProgressBar_o *v10; // x0
  float v11; // s9
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0
  float v14; // s1
  ListViewItemSeed_o *seed; // x0
  float v16; // s9
  float timer_5__5; // s9
  float duration_5__4; // s0
  UIProgressBar_o *v19; // x0
  bool result; // w0
  float deltaTime; // s0
  float v22; // s0
  float v23; // s0
  UIProgressBar_o *v24; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
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
    scrollBar = (UIProgressBar_o *)_4__this->fields.scrollBar;
    if ( !scrollBar )
      goto LABEL_22;
    this->fields._start_5__2 = UIProgressBar__get_value(scrollBar, 0LL);
    v6 = (UIProgressBar_o *)_4__this->fields.scrollBar;
    if ( !v6 )
      goto LABEL_22;
    UIProgressBar__set_value(v6, 0.0, 0LL);
    scrollView = (UnityEngine_Component_o *)_4__this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_22;
    transform = UnityEngine_Component__get_transform(scrollView, 0LL);
    if ( !transform )
      goto LABEL_22;
    *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v10 = (UIProgressBar_o *)_4__this->fields.scrollBar;
    if ( !v10
      || (v11 = v9,
          UIProgressBar__set_value(v10, 1.0, 0LL),
          (v12 = (UnityEngine_Component_o *)_4__this->fields.scrollView) == 0LL)
      || (v13 = UnityEngine_Component__get_transform(v12, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(v13, 0LL),
          (seed = _4__this->fields.seed) == 0LL) )
    {
LABEL_22:
      sub_B170D4();
    }
    v16 = v14 - v11;
    LocalPosition = ListViewItemSeed__GetLocalPosition(seed, this->fields.index, 0LL);
    LocalPosition.fields.x = fabsf(LocalPosition.fields.y);
    LocalPosition.fields.y = this->fields._start_5__2;
    LocalPosition.fields.x = LocalPosition.fields.x / v16;
    this->fields._end_5__3 = LocalPosition.fields.x;
    LocalPosition.fields.y = (float)((float)(v16 * (float)(LocalPosition.fields.x - LocalPosition.fields.y)) + -2000.0)
                           / 2000.0;
    timer_5__5 = 0.0;
    duration_5__4 = fminf(UnityEngine_Mathf__Max(0.0, LocalPosition.fields.y, 0LL) + 1.0, 3.0);
    this->fields._duration_5__4 = duration_5__4;
    this->fields._timer_5__5 = 0.0;
  }
  if ( timer_5__5 >= duration_5__4 )
  {
    if ( _4__this )
    {
      v19 = (UIProgressBar_o *)_4__this->fields.scrollBar;
      if ( v19 )
      {
        UIProgressBar__set_value(v19, this->fields._end_5__3, 0LL);
        ActionExtensions__Call(this->fields.onFinished, 0LL);
        return 0;
      }
    }
    goto LABEL_22;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v22 = UnityEngine_Mathf__Clamp(timer_5__5 + deltaTime, 0.0, this->fields._duration_5__4, 0LL);
  this->fields._timer_5__5 = v22;
  if ( !_4__this )
    goto LABEL_22;
  v23 = EventMissionItemListViewManager__DoMoveEaseOut(
          _4__this,
          v22,
          this->fields._duration_5__4,
          this->fields._start_5__2,
          this->fields._end_5__3 - this->fields._start_5__2,
          0LL);
  v24 = (UIProgressBar_o *)_4__this->fields.scrollBar;
  if ( !v24 )
    goto LABEL_22;
  UIProgressBar__set_value(v24, v23, 0LL);
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v19; // x0
  Il2CppObject *started; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t v27; // w0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  signed __int64 size; // x22
  System_Collections_Generic_List_int__o *v34; // x20
  unsigned __int64 i; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x25
  ListViewItem_o *v37; // x8
  __int64 v38; // x11
  __int64 v39; // x11
  MissionListViewItem_o *v40; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Func_int__int__int__o *v46; // x21
  int32_t v47; // w0
  int32_t v48; // w21
  int32_t v49; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v52; // x19
  Il2CppObject **p__2__current; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_40F6FFE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Aggregate_int___, method);
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_B16FFC(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__, v7);
    sub_B16FFC(&Method_System_Func_int__int__int___ctor__, v8);
    sub_B16FFC(&System_Func_int__int__int__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__IndexOf__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v16);
    byte_40F6FFE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        openItemTime = _4__this->fields.openItemTime;
        endEffectTime = _4__this->fields.endEffectTime;
        v52 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForSeconds___ctor(v52, openItemTime + endEffectTime, 0LL);
        this->fields.__2__current = (Il2CppObject *)v52;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v52,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
        *((_DWORD *)p__2__current - 2) = 2;
        LOBYTE(v27) = 1;
        return v27;
      }
      goto LABEL_35;
    }
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v19 = EventMissionItemListViewManager__MoveEaseScroll_IE(
                _4__this,
                this->fields.index,
                this->fields.onFinished,
                0LL);
        started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                    (UnityEngine_MonoBehaviour_o *)_4__this,
                                    v19,
                                    0LL);
        this->fields.__2__current = started;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)started,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        LOBYTE(v27) = 1;
        this->fields.__1__state = 1;
        return v27;
      }
LABEL_35:
      sub_B170D4();
    }
LABEL_33:
    LOBYTE(v27) = 0;
    return v27;
  }
  this->fields.__1__state = -1;
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
  v34 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v36 = _4__this->fields.itemSortList;
    if ( !v36 )
      goto LABEL_35;
    if ( i >= (unsigned int)v36->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v37 = v36->fields._items->m_Items[i];
    if ( !v37 )
      goto LABEL_35;
    v38 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v38
      || (EventMissionItemListViewItem_c *)v37->klass->_2.typeHierarchy[v38 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      goto LABEL_35;
    }
    v39 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37->klass->_2.bitflags2 + 1) >= (unsigned int)v39 )
      v40 = (EventMissionItemListViewItem_c *)v37->klass->_2.typeHierarchy[v39 - 1] == EventMissionItemListViewItem_TypeInfo
          ? (MissionListViewItem_o *)v36->fields._items->m_Items[i]
          : 0LL;
    else
      v40 = 0LL;
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity(v40, 0LL);
    if ( !EventMissionEntity || !v34 )
      goto LABEL_35;
    System_Collections_Generic_List_int___Add(
      v34,
      EventMissionEntity->fields.dispNo,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  v46 = (System_Func_int__int__int__o *)sub_B170CC(System_Func_int__int__int__TypeInfo, v42, v43, v44, v45);
  System_Func_int__int__int____ctor(
    v46,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__,
    (const MethodInfo_2B73C68 *)Method_System_Func_int__int__int___ctor__);
  v47 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v34,
          (System_Func_TSource__TSource__TSource__o *)v46,
          (const MethodInfo_18C5EF0 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v48 = v47;
  v27 = System_Collections_Generic_List_int___IndexOf(
          v34,
          v47,
          (const MethodInfo_2F11568 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v27 )
  {
    v49 = v48 - 1;
    if ( v27 == (_DWORD)size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v49, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v49, 0, 0LL);
    goto LABEL_33;
  }
  return v27;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_EventMissionItemListViewManager__SetPreviousFilter_d__39_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FF2 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewManager___c_TypeInfo, v1);
    byte_40F6FF2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventMissionItemListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventMissionItemListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return gift->fields.type == 14;
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_0(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_String_o *v13; // x20
  EventMissionItemListViewManager___c_c *v14; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_2; // x22
  System_String_o *v17; // x21
  Il2CppObject *v18; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F6FF3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, v4);
    sub_B16FFC(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8718/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F6FF3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8718/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v14 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v14 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__49_2 = static_fields->__9__49_2;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_2 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__49_2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(_9__49_2, v18, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, 0LL);
    v19 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v19->__9__49_2 = _9__49_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__49_2,
      (System_Int32_array **)_9__49_2,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenNotificationDialog(Instance, v17, v13, _9__49_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_1(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_String_o *v13; // x20
  EventMissionItemListViewManager___c_c *v14; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_3; // x22
  System_String_o *v17; // x21
  Il2CppObject *v18; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F6FF5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, v4);
    sub_B16FFC(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8719/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F6FF5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v14 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v14 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__49_3 = static_fields->__9__49_3;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_3 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__49_3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(_9__49_3, v18, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, 0LL);
    v19 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v19->__9__49_3 = _9__49_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__49_3,
      (System_Int32_array **)_9__49_3,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenNotificationDialog(Instance, v17, v13, _9__49_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F6FF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F6FF4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F6FF6 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F6FF6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__64_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
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
  EventMissionEntity_o *EventMissionEntity; // x0

  selectItem = (MissionListViewItem_o *)this->fields.selectItem;
  if ( !selectItem
    || (_4__this = this->fields.__4__this,
        EventMissionEntity = MissionListViewItem__get_EventMissionEntity(selectItem, 0LL),
        !_4__this) )
  {
    sub_B170D4();
  }
  EventMissionItemListViewManager__recieveReward(_4__this, EventMissionEntity, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager___c__DisplayClass47_0___recieveReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct EventMissionItemListViewManager_o *_4__this; // x8
  System_Int32_array **missionEntity; // x1
  struct EventMissionItemListViewManager_o *v16; // x8
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_40F6FF7 & 1) == 0 )
  {
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__, *(_QWORD *)&result);
    sub_B16FFC(&StringLiteral_8727/*"MISSION_REWARD"*/, v5);
    byte_40F6FF7 = 1;
  }
  if ( result == 1 )
  {
    v6 = Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B17004(Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__);
    v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = (System_Int32_array **)this->fields.missionEntity,
          _4__this->fields.missionToRecieve = (struct EventMissionEntity_o *)missionEntity,
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields.missionToRecieve,
            missionEntity,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13),
          (v16 = this->fields.__4__this) == 0LL)
      || (targetFSM = v16->fields.targetFSM) == 0LL )
    {
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8727/*"MISSION_REWARD"*/, 0LL);
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
  CommonUI_o *Instance; // x0
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v5; // x1

  if ( (byte_40F6FFA & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F6FFA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  v5 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  UnityEngine_GameObject_o *touchBlockObj; // x0
  CommonUI_o *Instance; // x0
  MissionNotifyManager_o *v8; // x0
  EventMissionItemListViewManager_o *v9; // x19
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_40F6FF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_40F6FF8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  touchBlockObj = _4__this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseMissionRewardGetDialog(Instance, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 || (MissionNotifyManager__EndPause(v8, 0LL), (v9 = this->fields.__4__this) == 0LL) )
LABEL_12:
    sub_B170D4();
  v10 = EventMissionItemListViewManager__afterReward(v9, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)v9, v10, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v5; // x1

  if ( (byte_40F6FF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F6FF9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  v5 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v20; // x8
  struct EventMissionItemListViewManager_o *v21; // x8
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Text_StringBuilder_o *v27; // x20
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v28; // x8
  struct System_Text_StringBuilder_o *itemTypeDialogMessage; // x0
  System_String_o *v30; // x21
  System_String_o *v31; // x0
  MissionNotifyManager_o *v32; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v35; // x1
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v38; // x8
  struct System_Text_StringBuilder_o *svtTypeDialogMessage; // x0
  System_String_o *v40; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v41; // x8
  struct System_Text_StringBuilder_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v45; // x8
  System_String_o *v46; // x21
  struct System_Text_StringBuilder_o *v47; // x0
  Il2CppObject *v48; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v49; // x8
  struct EventMissionItemListViewManager_o *v50; // x8
  System_String_o *v51; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v52; // x8
  struct EventMissionItemListViewManager_o *v53; // x8
  System_String_o *v54; // x21
  Il2CppObject *NumberFormat; // x0
  System_String_o *v56; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v57; // x8
  struct EventMissionItemListViewManager_o *v58; // x8
  System_String_o *v59; // x21
  Il2CppObject *v60; // x0
  System_String_o *v61; // x21
  _QWORD **v62; // x23
  __int64 v63; // x22
  __int16 v64; // w8
  __int64 v65; // x22
  __int64 v66; // x22
  __int64 v67; // x22
  WebViewManager_o *Instance; // x0
  CommonUI_o *v69; // x21
  WarBoardUiData_SaveData_array *v70; // x0
  GiftEntity_array *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v77; // x24
  MissionRewardGetDialog_ClickDelegate_o *_9__3; // x23
  System_String_o *v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct EventMissionItemListViewManager_o *v86; // x8

  if ( (byte_40F6FFB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_object___, method);
    sub_B16FFC(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__, v11);
    sub_B16FFC(&StringLiteral_8731/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v12);
    sub_B16FFC(&StringLiteral_8717/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v13);
    sub_B16FFC(&StringLiteral_8720/*"MISSION_ACTION_SUCCESS"*/, v14);
    sub_B16FFC(&StringLiteral_8722/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, v15);
    sub_B16FFC(&StringLiteral_31/*"\n \n"*/, v16);
    sub_B16FFC(&StringLiteral_32/*"\n \n "*/, v17);
    sub_B16FFC(&StringLiteral_8732/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v18);
    byte_40F6FFB = 1;
  }
  giftList = this->fields.giftList;
  if ( !giftList )
    goto LABEL_80;
  if ( giftList->fields._size < 1 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v32 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( v32 )
    {
      MissionNotifyManager__EndPause(v32, 0LL);
      CS___8__locals1 = this->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v35 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_34804316(_4__this, v35, 0LL);
          return;
        }
      }
    }
    goto LABEL_80;
  }
  v20 = this->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_80;
  v21 = v20->fields.__4__this;
  if ( !v21 )
    goto LABEL_80;
  touchBlockObj = v21->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v27 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v23, v24, v25, v26);
  System_Text_StringBuilder___ctor(v27, 0LL);
  v28 = this->fields.CS___8__locals1;
  if ( !v28 )
    goto LABEL_80;
  itemTypeDialogMessage = v28->fields.itemTypeDialogMessage;
  if ( !itemTypeDialogMessage )
    goto LABEL_80;
  v30 = (System_String_o *)((__int64 (__fastcall *)(struct System_Text_StringBuilder_o *, Il2CppMethodPointer))itemTypeDialogMessage->klass->vtable._3_ToString.method)(
                             itemTypeDialogMessage,
                             itemTypeDialogMessage->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !System_String__IsNullOrEmpty(v30, 0LL) )
  {
    if ( this->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v30 )
        goto LABEL_80;
      v36 = System_String__Substring_43807468(v30, 0, v30->fields.m_stringLength - 2, 0LL);
      if ( !v27 )
        goto LABEL_80;
      System_Text_StringBuilder__Append_41914240(v27, v36, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8717/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      System_Text_StringBuilder__Append_41914240(v27, v37, 0LL);
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8720/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      if ( !v27 )
        goto LABEL_80;
      System_Text_StringBuilder__AppendFormat(v27, v31, (Il2CppObject *)v30, 0LL);
    }
    v38 = this->fields.CS___8__locals1;
    if ( !v38 )
      goto LABEL_80;
    svtTypeDialogMessage = v38->fields.svtTypeDialogMessage;
    if ( !svtTypeDialogMessage )
      goto LABEL_80;
    v40 = (System_String_o *)((__int64 (__fastcall *)(struct System_Text_StringBuilder_o *, Il2CppMethodPointer))svtTypeDialogMessage->klass->vtable._3_ToString.method)(
                               svtTypeDialogMessage,
                               svtTypeDialogMessage->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !System_String__IsNullOrEmpty(v40, 0LL) )
      System_Text_StringBuilder__Append_41914240(v27, (System_String_o *)StringLiteral_32/*"\n \n "*/, 0LL);
  }
  v41 = this->fields.CS___8__locals1;
  if ( !v41 )
    goto LABEL_80;
  v42 = v41->fields.svtTypeDialogMessage;
  if ( !v42 )
    goto LABEL_80;
  v43 = (System_String_o *)((__int64 (__fastcall *)(struct System_Text_StringBuilder_o *, Il2CppMethodPointer))v42->klass->vtable._3_ToString.method)(
                             v42,
                             v42->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !System_String__IsNullOrEmpty(v43, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8722/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, 0LL);
    v45 = this->fields.CS___8__locals1;
    if ( !v45 )
      goto LABEL_80;
    v46 = v44;
    v47 = v45->fields.svtTypeDialogMessage;
    if ( !v47 )
      goto LABEL_80;
    v48 = (Il2CppObject *)((__int64 (__fastcall *)(struct System_Text_StringBuilder_o *, Il2CppMethodPointer))v47->klass->vtable._3_ToString.method)(
                            v47,
                            v47->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v27 )
      goto LABEL_80;
    System_Text_StringBuilder__AppendFormat(v27, v46, v48, 0LL);
  }
  v49 = this->fields.CS___8__locals1;
  if ( !v49 )
    goto LABEL_80;
  v50 = v49->fields.__4__this;
  if ( !v50 )
    goto LABEL_80;
  if ( v50->fields.isQpMaxAlert )
  {
    if ( !v27 )
      goto LABEL_80;
    if ( v50->fields.isQpAlreadyMax )
    {
      System_Text_StringBuilder__set_Length(v27, 0, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8731/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, 0LL);
      v52 = this->fields.CS___8__locals1;
      if ( v52 )
      {
        v53 = v52->fields.__4__this;
        if ( v53 )
        {
          v54 = v51;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v53->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v27, v54, NumberFormat, 0LL);
          goto LABEL_72;
        }
      }
LABEL_80:
      sub_B170D4();
    }
    System_Text_StringBuilder__Append_41914240(v27, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_8732/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, 0LL);
    v57 = this->fields.CS___8__locals1;
    if ( !v57 )
      goto LABEL_80;
    v58 = v57->fields.__4__this;
    if ( !v58 )
      goto LABEL_80;
    v59 = v56;
    v60 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v58->fields.overQpValue, 0LL);
    v61 = System_String__Format(v59, v60, 0LL);
    v62 = (_QWORD **)Method_System_Array_Empty_object___;
    v63 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v64 = *(_WORD *)(v63 + 306);
    if ( (v64 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v64 = *(_WORD *)(v63 + 306);
    }
    if ( (v64 & 0x400) != 0 )
    {
      v65 = *v62[6];
      if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
        sub_AAFCFC(*v62[6]);
      if ( !*(_DWORD *)(v65 + 224) )
      {
        v66 = *v62[6];
        if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
          sub_AAFCFC(*v62[6]);
        j_il2cpp_runtime_class_init_0(v66);
      }
    }
    v67 = *v62[6];
    if ( (*(_BYTE *)(v67 + 306) & 1) == 0 )
      sub_AAFCFC(*v62[6]);
    System_Text_StringBuilder__AppendFormat_41920988(v27, v61, **(System_Object_array ***)(v67 + 184), 0LL);
  }
LABEL_72:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this->fields.giftList )
    goto LABEL_80;
  v69 = (CommonUI_o *)Instance;
  v70 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.giftList,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v27 )
    goto LABEL_80;
  v71 = (GiftEntity_array *)v70;
  v72 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v27->klass->vtable._3_ToString.method)(
          v27,
          v27->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v77 = this->fields.CS___8__locals1;
  if ( !v77 )
    goto LABEL_80;
  _9__3 = v77->fields.__9__3;
  v79 = (System_String_o *)v72;
  if ( !_9__3 )
  {
    _9__3 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B170CC(
                                                        MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                        v73,
                                                        v74,
                                                        v75,
                                                        v76);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__3,
      (Il2CppObject *)v77,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__,
      0LL);
    v77->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v77->fields.__9__3,
      (System_Int32_array **)_9__3,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    v77 = this->fields.CS___8__locals1;
    if ( !v77 )
      goto LABEL_80;
  }
  v86 = v77->fields.__4__this;
  if ( !v86 || !v69 )
    goto LABEL_80;
  CommonUI__OpenMissionRewardGetDialog(v69, v71, v79, _9__3, v86->fields.isQpAlreadyMax, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__4; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F6FFC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__, v6);
    byte_40F6FFC = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !_4__this )
LABEL_8:
    sub_B170D4();
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__4, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__4(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  SummonAssetManager_o *Instance; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  UnityEngine_GameObject_o *touchBlockObj; // x0
  CommonUI_o *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v20; // x23
  System_Action_o *_9__5; // x22
  System_String_o *v22; // x19
  System_String_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40F6FFD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__, v6);
    sub_B16FFC(&StringLiteral_8720/*"MISSION_ACTION_SUCCESS"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40F6FFD = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SummonAssetManager__UnloadSummonAssets(Instance, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  touchBlockObj = _4__this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8720/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  v15 = System_String__Format(v14, (Il2CppObject *)this->fields.sendName, 0LL);
  v20 = this->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_15;
  _9__5 = v20->fields.__9__5;
  v22 = v15;
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v20,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__,
      0LL);
    v20->fields.__9__5 = _9__5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->fields.__9__5,
      (System_Int32_array **)_9__5,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v13 )
LABEL_15:
    sub_B170D4();
  CommonUI__OpenNotificationDialog(v13, v23, v22, _9__5, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Func_bool__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  UnityEngine_WaitUntil_o *v31; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  bool result; // w0
  AutomatedAction_o *Instance; // x0
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_40F6FFF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v6);
    sub_B16FFC(&System_Func_bool__TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v8);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__, v9);
    sub_B16FFC(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__, v10);
    sub_B16FFC(&EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_5467/*"END_EFFECT"*/, v13);
    byte_40F6FFF = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    targetFSM = _4__this->fields.targetFSM;
    if ( !targetFSM )
      goto LABEL_13;
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5467/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v16 = sub_B170CC(EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor((Il2CppObject *)v16, 0LL);
    if ( v16 )
    {
      *(_BYTE *)(v16 + 16) = 0;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
      System_Action___ctor(
        v21,
        (Il2CppObject *)v16,
        Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v21, 0LL);
        v26 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v22, v23, v24, v25);
        System_Func_bool____ctor(
          v26,
          (Il2CppObject *)v16,
          Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__,
          (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
        v31 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v27, v28, v29, v30);
        UnityEngine_WaitUntil___ctor(v31, v26, 0LL);
        this->fields.__2__current = (Il2CppObject *)v31;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v31,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_EventMissionItemListViewManager__afterReward_d__57_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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