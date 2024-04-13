void __fastcall CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8F10 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F10 = 1;
  }
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  }
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager__AcceptReward(
        CompleteMissionListViewManager_o *this,
        System_Action_o *callback,
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
  __int64 v102; // x22
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v118; // x20
  const MethodInfo *v119; // x3
  struct EventMissionEntity_o *v120; // x8
  __int64 v121; // x8
  __int64 v122; // x20
  unsigned __int64 v123; // x23
  System_Int32_array **v124; // x21
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  WarBoardSquareIndexData_array *v131; // x19
  __int64 v132; // x8
  char *v133; // x0
  System_Text_StringBuilder_o *v134; // x20
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Text_StringBuilder_o *v141; // x0
  System_Text_StringBuilder_o *v142; // x20
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  __int64 v149; // x19
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  Il2CppObject **v156; // x21
  WarBoardSquareIndexData_array *v157; // x8
  signed int max_length; // w28
  int v159; // w22
  int v160; // w9
  __int64 v161; // x27
  WarBoardSquareIndexData_o *v162; // x8
  WarBoardSquareIndexData_o *v163; // x8
  WarBoardSquareIndexData_o *v164; // x8
  WarBoardSquareIndexData_o *v165; // x8
  System_Int32_array **SetRewardData; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **v179; // x1
  struct GetSvts_array *getSvtList; // x8
  SummonAssetManager_o *v181; // x21
  System_Action_o *v182; // x22
  System_Collections_Generic_List_GiftEntity__c **v183; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v184; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v185; // x22
  __int64 v186; // x27
  bool IsCountableWithPlus; // w0
  Il2CppObject **v188; // x8
  Il2CppObject *v189; // x25
  System_Text_StringBuilder_o *v190; // x24
  int getQpValue; // w19
  __int64 v192; // x8
  System_Collections_Generic_List_GiftEntity__c **v193; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v194; // x20
  System_String_o *v195; // x26
  Il2CppObject *v196; // x0
  __int64 v197; // x8
  System_Text_StringBuilder_o *v198; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v199; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v200; // x0
  il2cpp_array_size_t v201; // w23
  __int64 v202; // x8
  __int64 v203; // x8
  ServantEntity_o *v204; // x24
  _BOOL4 IsCombineMaterial; // w25
  Il2CppObject *v206; // x8
  System_String_o *v207; // x0
  __int64 v208; // x8
  Il2CppObject *v209; // x24
  Il2CppObject *v210; // x0
  Il2CppObject *v211; // x24
  System_Text_StringBuilder_o *monitor; // x25
  __int64 v213; // x8
  __int64 v214; // x8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v215; // x21
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  System_Action_o *v222; // x21
  WebViewManager_o *Instance; // x0
  EventRewardSetEntity_o *v224; // x20
  CommonUI_o *v225; // x23
  System_String_o *v226; // x0
  System_String_o *v227; // x0
  Il2CppObject *v228; // x24
  System_String_o *v229; // x21
  MissionRewardGetDialog_ClickDelegate_o *v230; // x22
  __int64 v231; // x0
  __int64 v232; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v233; // [xsp+0h] [xbp-90h]
  __int64 v234; // [xsp+8h] [xbp-88h]
  CompleteMissionListViewManager_o *v235; // [xsp+10h] [xbp-80h]
  int v236; // [xsp+1Ch] [xbp-74h] BYREF
  WarEntity_o *v237; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v238; // [xsp+28h] [xbp-68h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  WarBoardSquareIndexData_array *array; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42E8EFF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Array_Resize_GiftEntity___, v6, v7, v8);
    sub_B5D5C4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_CompleteMissionMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v21, v22, v23);
    sub_B5D5C4(&DataManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v30, v31, v32);
    sub_B5D5C4(&int_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor___68739288, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v60, v61, v62);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__, v66, v67, v68);
    sub_B5D5C4(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__, v72, v73, v74);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__, v75, v76, v77);
    sub_B5D5C4(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_8840/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_23975/*"{0}×{1:#,0}"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_24017/*"×"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_8835/*"MISSION_ACTION_ITEM_FORMAT"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_30/*"\n "*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_24279/*"＋"*/, v99, v100, v101);
    byte_42E8EFF = 1;
  }
  array = 0LL;
  v238 = 0LL;
  entity = 0LL;
  v237 = 0LL;
  v102 = sub_B5D694(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass49_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass49_0_o *)v102,
    0LL);
  if ( !v102 )
    goto LABEL_154;
  *(_QWORD *)(v102 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v102 + 16),
    (System_Int32_array **)this,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  *(_QWORD *)(v102 + 24) = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v102 + 24),
    (System_Int32_array **)callback,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_154;
  v118 = (GiftMaster_o *)Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  array = (WarBoardSquareIndexData_array *)GiftMaster__GetGiftListById(
                                             (GiftMaster_o *)Master_WarQuestSelectionMaster,
                                             missionToRecieve->fields.giftId,
                                             0LL);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v120 = this->fields.missionToRecieve;
  if ( !v120 || !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  Master_WarQuestSelectionMaster = CompleteMissionMaster__TryGetEntityFromObjectId(
                                     (CompleteMissionMaster_o *)Master_WarQuestSelectionMaster,
                                     &entity,
                                     v120->fields.id,
                                     v119);
  *(_BYTE *)(v102 + 48) = Master_WarQuestSelectionMaster & 1;
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_154;
    Master_WarQuestSelectionMaster = (__int64)GiftMaster__GetGiftListById(v118, entity->fields.giftId, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_154;
    v121 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
    v122 = Master_WarQuestSelectionMaster;
    if ( (int)v121 >= 1 )
    {
      v123 = 0LL;
      while ( v123 < (unsigned int)v121 )
      {
        if ( !array )
          goto LABEL_154;
        v124 = *(System_Int32_array ***)(v122 + 32 + 8 * v123);
        System_Array__Resize_WarBoardSquareIndexData_(
          &array,
          array->max_length + 1,
          (const MethodInfo_2236DC0 *)Method_System_Array_Resize_GiftEntity___);
        v131 = array;
        if ( !array )
          goto LABEL_154;
        if ( v124 )
        {
          Master_WarQuestSelectionMaster = sub_B5D684(v124, array->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
          {
            v232 = sub_B5D6BC(0LL);
            sub_B5D668(v232, 0LL);
          }
        }
        v132 = *(_QWORD *)&v131->max_length;
        if ( !(_DWORD)v132 )
          break;
        v133 = (char *)v131 + (((v132 << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v133 + 4) = v124;
        sub_B5D560((BattleServantConfConponent_o *)(v133 + 32), v124, v125, v126, v127, v128, v129, v130);
        LODWORD(v121) = *(_DWORD *)(v122 + 24);
        if ( (__int64)++v123 >= (int)v121 )
          goto LABEL_23;
      }
LABEL_155:
      v231 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v231, 0LL);
    }
  }
LABEL_23:
  v134 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v134, 0LL);
  *(_QWORD *)(v102 + 40) = v134;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v102 + 40),
    (System_Int32_array **)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  v141 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v141, 0LL);
  v142 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v142, 0LL);
  *(_QWORD *)(v102 + 32) = v142;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v102 + 32),
    (System_Int32_array **)v142,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  v149 = sub_B5D694(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass49_1___ctor(
    (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v149,
    0LL);
  if ( !v149 )
    goto LABEL_154;
  *(_QWORD *)(v149 + 48) = v102;
  v156 = (Il2CppObject **)(v149 + 48);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v149 + 48),
    (System_Int32_array **)v102,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  Master_WarQuestSelectionMaster = (__int64)this->fields.missionToRecieve;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  if ( *(_DWORD *)(Master_WarQuestSelectionMaster + 80) == 1 )
  {
    Master_WarQuestSelectionMaster = (__int64)this->fields.touchBlockObj;
    if ( Master_WarQuestSelectionMaster )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
      *(_DWORD *)(v149 + 24) = 0;
      v157 = array;
      if ( array )
      {
        max_length = array->max_length;
        v235 = this;
        if ( max_length >= 1 )
        {
          v159 = 1;
          while ( 1 )
          {
            v160 = v159 - 1;
            if ( v159 - 1 >= v157->max_length )
              goto LABEL_155;
            v161 = v160;
            v162 = v157->m_Items[v160];
            if ( !v162 )
              goto LABEL_154;
            Master_WarQuestSelectionMaster = Gift__IsServant_28424960(*(&v162->fields.squareIndex + 1), 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            {
              if ( !array )
                goto LABEL_154;
              if ( (unsigned int)v161 >= array->max_length )
                goto LABEL_155;
              v163 = array->m_Items[v161];
              if ( !v163 )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = Gift__IsCommandCode_28425356(*(&v163->fields.squareIndex + 1), 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                if ( !array )
                  goto LABEL_154;
                if ( (unsigned int)v161 >= array->max_length )
                  goto LABEL_155;
                v164 = array->m_Items[v161];
                if ( !v164 )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = Gift__IsCostumeRelease(*(&v164->fields.squareIndex + 1), 0LL);
                if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                {
                  Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( !array )
                    goto LABEL_154;
                  if ( (unsigned int)v161 >= array->max_length )
                    goto LABEL_155;
                  v165 = array->m_Items[v161];
                  if ( !v165 || !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                     &v238,
                                                     (int32_t)v165->fields.effectIds,
                                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                  {
                    Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !v238 || !Master_WarQuestSelectionMaster )
                      goto LABEL_154;
                    Master_WarQuestSelectionMaster = CommonUI__IsGetItemEffect(
                                                       (CommonUI_o *)Master_WarQuestSelectionMaster,
                                                       v238->fields.id,
                                                       0LL);
                    if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                      ++*(_DWORD *)(v149 + 24);
                  }
                }
              }
            }
            if ( v159 >= max_length )
              break;
            v157 = array;
            ++v159;
            if ( !array )
              goto LABEL_154;
          }
        }
        v183 = &System_Collections_Generic_List_GiftEntity__TypeInfo;
        v234 = v149;
        v184 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v184,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        v185 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v185,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( max_length >= 1 )
        {
          v186 = 4LL;
          v233 = v185;
          do
          {
            if ( !array )
              goto LABEL_154;
            v201 = v186 - 4;
            if ( (unsigned int)(v186 - 4) >= array->max_length )
              goto LABEL_155;
            v202 = *((_QWORD *)&array->obj.klass + v186);
            if ( !v202 )
              goto LABEL_154;
            Master_WarQuestSelectionMaster = Gift__IsServant_28424960(*(_DWORD *)(v202 + 20), 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Master_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !array )
                goto LABEL_154;
              if ( v201 >= array->max_length )
                goto LABEL_155;
              v203 = *((_QWORD *)&array->obj.klass + v186);
              if ( !v203 )
                goto LABEL_154;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                          *(_DWORD *)(v203 + 24),
                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              v204 = (ServantEntity_o *)Master_WarQuestSelectionMaster;
              IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_WarQuestSelectionMaster + 84), 0LL);
              Master_WarQuestSelectionMaster = SvtType__IsStatusUp(v204->fields.type, 0LL);
              v206 = *v156;
              if ( !*v156 )
                goto LABEL_154;
              if ( ((IsCombineMaterial | (unsigned int)Master_WarQuestSelectionMaster) & 1) != 0
                || LOBYTE(v206[3].klass) )
              {
                Master_WarQuestSelectionMaster = (__int64)v206[2].monitor;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                v207 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster
                                                                                     + 360LL))(
                                            Master_WarQuestSelectionMaster,
                                            *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 368LL));
                Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(v207, 0LL);
                if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                {
                  if ( !*v156 )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = (__int64)(*v156)[2].monitor;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  System_Text_StringBuilder__Append_42953744(
                    (System_Text_StringBuilder_o *)Master_WarQuestSelectionMaster,
                    (System_String_o *)StringLiteral_30/*"\n "*/,
                    0LL);
                }
                Master_WarQuestSelectionMaster = (__int64)ServantEntity__getName(v204, -1, -1, 0LL);
                if ( !array )
                  goto LABEL_154;
                if ( v201 >= array->max_length )
                  goto LABEL_155;
                v208 = *((_QWORD *)&array->obj.klass + v186);
                if ( !v208 )
                  goto LABEL_154;
                v209 = (Il2CppObject *)Master_WarQuestSelectionMaster;
                v236 = *(_DWORD *)(v208 + 28);
                v210 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v236);
                Master_WarQuestSelectionMaster = (__int64)System_String__Format_44573324(
                                                            (System_String_o *)StringLiteral_23975/*"{0}×{1:#,0}"*/,
                                                            v209,
                                                            v210,
                                                            0LL);
                if ( !*v156 )
                  goto LABEL_154;
                v211 = (Il2CppObject *)Master_WarQuestSelectionMaster;
                monitor = (System_Text_StringBuilder_o *)(*v156)[2].monitor;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_8835/*"MISSION_ACTION_ITEM_FORMAT"*/,
                                                            0LL);
                if ( !monitor )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat(
                                                            monitor,
                                                            (System_String_o *)Master_WarQuestSelectionMaster,
                                                            v211,
                                                            0LL);
                if ( !array )
                  goto LABEL_154;
                if ( v201 >= array->max_length )
                  goto LABEL_155;
                if ( !v185 )
                  goto LABEL_154;
                v199 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&array->obj.klass + v186);
                v200 = v185;
LABEL_125:
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v200,
                  v199,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
              }
            }
            else
            {
              if ( !array )
                goto LABEL_154;
              if ( v201 >= array->max_length )
                goto LABEL_155;
              v213 = *((_QWORD *)&array->obj.klass + v186);
              if ( !v213 )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = Gift__IsItem_28424904(*(_DWORD *)(v213 + 20), 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) != 0 )
              {
                Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Master_WarQuestSelectionMaster,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
                if ( !array )
                  goto LABEL_154;
                if ( v201 >= array->max_length )
                  goto LABEL_155;
                v214 = *((_QWORD *)&array->obj.klass + v186);
                if ( !v214 || !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                   &v237,
                                                   *(_DWORD *)(v214 + 24),
                                                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                {
                  Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v237 || !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = CommonUI__IsGetItemEffect(
                                                     (CommonUI_o *)Master_WarQuestSelectionMaster,
                                                     v237->fields.id,
                                                     0LL);
                  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                  {
                    if ( !array )
                      goto LABEL_154;
                    if ( v201 >= array->max_length )
                      goto LABEL_155;
                    Master_WarQuestSelectionMaster = *((_QWORD *)&array->obj.klass + v186);
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_154;
                    Master_WarQuestSelectionMaster = GiftEntity__isQp(
                                                       (GiftEntity_o *)Master_WarQuestSelectionMaster,
                                                       0LL);
                    if ( (Master_WarQuestSelectionMaster & 1) == 0 || !v235->fields.isQpAlreadyMax )
                    {
                      if ( !v237 )
                        goto LABEL_154;
                      IsCountableWithPlus = ItemType__IsCountableWithPlus(v237->fields.bannerId, 0LL);
                      v188 = (Il2CppObject **)&StringLiteral_24279/*"＋"*/;
                      if ( !IsCountableWithPlus )
                        v188 = (Il2CppObject **)&StringLiteral_24017/*"×"*/;
                      v189 = *v188;
                      v190 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
                      System_Text_StringBuilder___ctor(v190, 0LL);
                      if ( !v237 )
                        goto LABEL_154;
                      if ( !v190 )
                        goto LABEL_154;
                      Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42953744(
                                                                  v190,
                                                                  v237->fields.age,
                                                                  0LL);
                      if ( !array )
                        goto LABEL_154;
                      if ( v201 >= array->max_length )
                        goto LABEL_155;
                      Master_WarQuestSelectionMaster = *((_QWORD *)&array->obj.klass + v186);
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_154;
                      Master_WarQuestSelectionMaster = GiftEntity__isQp(
                                                         (GiftEntity_o *)Master_WarQuestSelectionMaster,
                                                         0LL);
                      if ( (Master_WarQuestSelectionMaster & 1) == 0
                        || !v235->fields.isQpMaxAlert
                        || (getQpValue = v235->fields.getQpValue) == 0 )
                      {
                        if ( !array )
                          goto LABEL_154;
                        if ( v201 >= array->max_length )
                          goto LABEL_155;
                        v192 = *((_QWORD *)&array->obj.klass + v186);
                        if ( !v192 )
                          goto LABEL_154;
                        getQpValue = *(_DWORD *)(v192 + 28);
                      }
                      v193 = v183;
                      v194 = v184;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v195 = LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      v236 = getQpValue;
                      v196 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v236);
                      Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat_42960296(
                                                                  v190,
                                                                  v195,
                                                                  v189,
                                                                  v196,
                                                                  0LL);
                      v149 = v234;
                      v197 = *(_QWORD *)(v234 + 48);
                      if ( !v197 )
                        goto LABEL_154;
                      v198 = *(System_Text_StringBuilder_o **)(v197 + 32);
                      v184 = v194;
                      if ( *(int *)(v234 + 24) >= 2 )
                      {
                        v183 = v193;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_8835/*"MISSION_ACTION_ITEM_FORMAT"*/,
                                                                    0LL);
                        v185 = v233;
                        if ( !v198 )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat(
                                                                    v198,
                                                                    (System_String_o *)Master_WarQuestSelectionMaster,
                                                                    (Il2CppObject *)v190,
                                                                    0LL);
                        if ( !*v156 )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)(*v156)[2].klass;
                        if ( !Master_WarQuestSelectionMaster )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42953744(
                                                                    (System_Text_StringBuilder_o *)Master_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_30/*"\n "*/,
                                                                    0LL);
                      }
                      else
                      {
                        Master_WarQuestSelectionMaster = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v190->klass->vtable._3_ToString.method)(
                                                           v190,
                                                           v190->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                        if ( !v198 )
                          goto LABEL_154;
                        v183 = v193;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42953744(
                                                                    v198,
                                                                    (System_String_o *)Master_WarQuestSelectionMaster,
                                                                    0LL);
                        v185 = v233;
                      }
                      if ( !array )
                        goto LABEL_154;
                      if ( v201 >= array->max_length )
                        goto LABEL_155;
                      if ( !v184 )
                        goto LABEL_154;
                      v199 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&array->obj.klass + v186);
                      v200 = v184;
                      goto LABEL_125;
                    }
                  }
                }
              }
            }
            ++v186;
          }
          while ( (int)v186 - 4 < max_length );
        }
        v215 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(*v183);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v215,
          (System_Collections_Generic_IEnumerable_T__o *)v184,
          (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_GiftEntity___ctor___68739288);
        *(_QWORD *)(v149 + 16) = v215;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v149 + 16),
          (System_Int32_array **)v215,
          v216,
          v217,
          v218,
          v219,
          v220,
          v221);
        Master_WarQuestSelectionMaster = *(_QWORD *)(v149 + 16);
        if ( Master_WarQuestSelectionMaster )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Master_WarQuestSelectionMaster,
            (System_Collections_Generic_IEnumerable_T__o *)v185,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
          v222 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v222,
            (Il2CppObject *)v149,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
            0LL);
          this = v235;
          MissionListViewManager__StartItemGetEffectAction(
            (MissionListViewManager_o *)v235,
            (GiftEntity_array *)array,
            0,
            v222,
            0LL);
          goto LABEL_153;
        }
      }
    }
LABEL_154:
    sub_B5D69C(Master_WarQuestSelectionMaster, v104);
  }
  SetRewardData = (System_Int32_array **)EventMissionEntity__getSetRewardData(
                                           (EventMissionEntity_o *)Master_WarQuestSelectionMaster,
                                           0LL);
  *(_QWORD *)(v149 + 32) = SetRewardData;
  sub_B5D560((BattleServantConfConponent_o *)(v149 + 32), SetRewardData, v167, v168, v169, v170, v171, v172);
  if ( !*(_QWORD *)(v149 + 32) )
    goto LABEL_154;
  v179 = *(System_Int32_array ***)(*(_QWORD *)(v149 + 32) + 32LL);
  *(_QWORD *)(v149 + 40) = v179;
  sub_B5D560((BattleServantConfConponent_o *)(v149 + 40), v179, v173, v174, v175, v176, v177, v178);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList || !*(_QWORD *)&getSvtList->max_length )
  {
    if ( *v156 )
    {
      ActionExtensions__Call((System_Action_o *)(*v156)[1].monitor, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v224 = *(EventRewardSetEntity_o **)(v149 + 32);
      v225 = (CommonUI_o *)Instance;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v226 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v227 = System_String__Format(v226, *(Il2CppObject **)(v149 + 40), 0LL);
      v228 = *v156;
      v229 = v227;
      v230 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B5D694(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v230,
        v228,
        Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
        0LL);
      if ( v225 )
      {
        CommonUI__OpenMissionRewardGetDialog_18271180(v225, v224, v229, v230, 0LL);
        goto LABEL_153;
      }
    }
    goto LABEL_154;
  }
  Master_WarQuestSelectionMaster = (__int64)this->fields.touchBlockObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  v181 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v182 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v182,
    (Il2CppObject *)v149,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
    0LL);
  if ( !v181 )
    goto LABEL_154;
  SummonAssetManager__LoadSummonAssets(v181, v182, 0LL);
LABEL_153:
  ActionExtensions__Call(this->fields.reDispAct, 0LL);
}


void __fastcall CompleteMissionListViewManager__Awake(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager__CehckQpMaxAlert(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        System_Action_o *decideCallback,
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
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  __int64 v43; // x21
  void *SelfUserGame; // x0
  __int64 v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  void **v52; // x24
  GiftEntity_o *QpGiftEntity; // x0
  GiftEntity_o *v54; // x22
  struct System_String_o *Empty; // x25
  _DWORD *v56; // x23
  int32_t v57; // w19
  BalanceConfig_c *v58; // x0
  int32_t QpMax; // w8
  int v60; // w19
  int32_t num; // w25
  System_String_o *v62; // x24
  Il2CppObject *NumberFormat; // x25
  System_String_o *v64; // x0
  BalanceConfig_c *v65; // x8
  Il2CppObject *v66; // x26
  Il2CppObject *v67; // x0
  System_String_o *v68; // x24
  int32_t v69; // w8
  int32_t v70; // w8
  System_String_o *v71; // x24
  System_String_o *v72; // x0
  int32_t v73; // w8
  Il2CppObject *v74; // x23
  System_String_o *v75; // x0
  BalanceConfig_c *v76; // x8
  Il2CppObject *v77; // x25
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  System_String_o *v80; // x22
  System_String_o *v81; // x23
  System_String_o *v82; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v84; // x20
  System_Action_o *v85; // x26
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *onTransition; // x21
  Il2CppObject *v88; // x27
  struct CompleteMissionListViewManager___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_o *getable; // [xsp+28h] [xbp-58h]

  if ( (byte_42E8F0F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)missionEntity, (_DWORD)decideCallback, method);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&string_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, v16, v17, v18);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__, v19, v20, v21);
    sub_B5D5C4(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CompleteMissionListViewManager___c_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_8849/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_8852/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_11913/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_11912/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11919/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v40, v41, v42);
    byte_42E8F0F = 1;
  }
  v43 = sub_B5D694(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass68_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass68_0_o *)v43,
    0LL);
  if ( !v43 )
    goto LABEL_44;
  *(_QWORD *)(v43 + 16) = decideCallback;
  v52 = (void **)(v43 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v43 + 16),
    (System_Int32_array **)decideCallback,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( !missionEntity )
    goto LABEL_44;
  QpGiftEntity = EventMissionEntity__GetQpGiftEntity(missionEntity, 0LL);
  if ( !QpGiftEntity )
  {
LABEL_22:
    SelfUserGame = *v52;
    if ( *v52 )
    {
      System_Action__Invoke((System_Action_o *)SelfUserGame, 0LL);
      return;
    }
LABEL_44:
    sub_B5D69C(SelfUserGame, v45);
  }
  v54 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_44;
  v56 = SelfUserGame;
  v57 = *((_DWORD *)SelfUserGame + 24);
  v58 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v58 = BalanceConfig_TypeInfo;
  }
  getable = Empty;
  QpMax = v58->static_fields->QpMax;
  if ( v57 < QpMax )
  {
    v60 = v56[24];
    num = v54->fields.num;
    if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( num + v60 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8852/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v54->fields.num, 0LL);
      v64 = LocalizationManager__GetNumberFormat(v56[24], 0LL);
      v65 = BalanceConfig_TypeInfo;
      v66 = (Il2CppObject *)v64;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v65 = BalanceConfig_TypeInfo;
      }
      v67 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v65->static_fields->QpMax, 0LL);
      v68 = System_String__Format_44578852(v62, NumberFormat, v66, v67, 0LL);
      v69 = BalanceConfig_TypeInfo->static_fields->QpMax - v56[24];
      this->fields.getQpValue = v69;
      v70 = v54->fields.num - v69;
      goto LABEL_31;
    }
    goto LABEL_22;
  }
  *(_WORD *)&this->fields.isQpMaxAlert = 257;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_8849/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
  v72 = LocalizationManager__GetNumberFormat(v54->fields.num, 0LL);
  v73 = v56[24];
  v74 = (Il2CppObject *)v72;
  v75 = LocalizationManager__GetNumberFormat(v73, 0LL);
  v76 = BalanceConfig_TypeInfo;
  v77 = (Il2CppObject *)v75;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v76 = BalanceConfig_TypeInfo;
  }
  v78 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v76->static_fields->QpMax, 0LL);
  v79 = System_String__Format_44578852(v71, v74, v77, v78, 0LL);
  v70 = v54->fields.num;
  v68 = v79;
LABEL_31:
  this->fields.overQpValue = v70;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_11919/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v84 = v82;
  v85 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v85,
    (Il2CppObject *)v43,
    Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__,
    0LL);
  SelfUserGame = CompleteMissionListViewManager___c_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    SelfUserGame = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = (struct CompleteMissionListViewManager___c_StaticFields *)*((_QWORD *)SelfUserGame + 23);
  onTransition = static_fields->__9__68_1;
  if ( !onTransition )
  {
    if ( (*((_BYTE *)SelfUserGame + 307) & 4) != 0 && !*((_DWORD *)SelfUserGame + 56) )
    {
      j_il2cpp_runtime_class_init_0(SelfUserGame);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v88 = (Il2CppObject *)static_fields->__9;
    onTransition = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(onTransition, v88, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0LL);
    v89 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v89->__9__68_1 = onTransition;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v89->__9__68_1,
      (System_Int32_array **)onTransition,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_44;
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    getable,
    v68,
    getable,
    v80,
    v81,
    v84,
    v85,
    onTransition,
    0LL,
    1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__CreateList(
        CompleteMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
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
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  Il2CppObject *current; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  CompleteMissionListViewItem_o *v54; // x23
  const MethodInfo *v55; // x3
  __int64 v56; // x0
  __int64 v57; // x1
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  __int64 *v60; // x8
  void *ObjectList; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x1
  int v64; // w2
  __int64 v65; // x3
  const MethodInfo *v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int v73; // w8
  void *v74; // x19
  unsigned __int64 v75; // x21
  signed __int64 v76; // x22
  UnityEngine_Object_o *v77; // x20
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E8EF4 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, (_DWORD)missionList, (_DWORD)mstMissionIdList, *(_QWORD *)&type);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, v43, v44, v45);
    byte_42E8EF4 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v78,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v79 = v78;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v79,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v79.fields.current;
      itemList = this->fields.itemList;
      v54 = (CompleteMissionListViewItem_o *)sub_B5D694(CompleteMissionListViewItem_TypeInfo);
      CompleteMissionListViewItem___ctor(v54, (EventMissionEntity_o *)current, type, v55);
      if ( !itemList )
        sub_B5D69C(v56, v57);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v79,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_42E8FE7 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)sort, (_DWORD)v46, v47);
    byte_42E8FE7 = 1;
  }
  if ( EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = &StringLiteral_8843/*"MISSION_EMPTY_TXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = &StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/;
  }
  ObjectList = LocalizationManager__Get((System_String_o *)*v60, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_42;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
  if ( !byte_42E8FE7 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v63, v64, v65);
    byte_42E8FE7 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v63);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.reDispAct,
      (System_Int32_array **)redispCallBack,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v66);
  if ( !ObjectList )
LABEL_42:
    sub_B5D69C(ObjectList, v62);
  v73 = *((_DWORD *)ObjectList + 6);
  v74 = ObjectList;
  if ( v73 >= 1 )
  {
    v75 = 0LL;
    v76 = v73;
    while ( 1 )
    {
      if ( v75 >= (unsigned int)v73 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v77 = *(UnityEngine_Object_o **)(*((_QWORD *)v74 + 2) + 8 * v75 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ObjectList = (void *)UnityEngine_Object__op_Inequality(v77, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !v77 )
          goto LABEL_42;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)v77, 0LL);
      }
      if ( (__int64)++v75 >= v76 )
        break;
      v73 = *((_DWORD *)v74 + 6);
    }
  }
}


void __fastcall CompleteMissionListViewManager__DestroyList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


CompleteMissionListViewItem_o *__fastcall CompleteMissionListViewManager__GetItem(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_42E8EF7 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E8EF7 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (CompleteMissionListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == CompleteMissionListViewItem_TypeInfo )
    return (CompleteMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall CompleteMissionListViewManager__ModifyItem(
        CompleteMissionListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  WarEntity_o *Entity; // x20
  struct System_String_o *emptyMessage; // x8
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventMissionEntity_o *v41; // x8
  DataManager_o *v42; // x20
  _BOOL8 v43; // x0
  __int64 v44; // x1
  MissionListViewItem_o *current; // x22
  __int64 v46; // x10
  __int64 MissionId; // x0
  __int64 v48; // x1
  int v49; // w2
  __int64 v50; // x3
  struct EventMissionEntity_o *v51; // x8
  int32_t v52; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v54; // x1
  struct ListViewObject_o *v55; // x0
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E8F06 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42E8F06 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_44;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_44;
  if ( (__int64)Instance <= *(_QWORD *)&Entity->fields.flag )
  {
    this->fields.isEndEvent = 0;
    return;
  }
  emptyMessage = Entity->fields.emptyMessage;
  this->fields.isEndEvent = (__int64)Instance <= (__int64)emptyMessage;
  if ( (__int64)Instance <= (__int64)emptyMessage && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         Instance,
                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v41 = this->fields.missionToRecieve;
      if ( v41 )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int64_t)Instance,
                                        v41->fields.id,
                                        0LL);
          if ( this->fields.itemList )
          {
            v42 = Instance;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              &v56,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v57 = v56;
            while ( 1 )
            {
              v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v57,
                      (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v43 )
                break;
              current = (MissionListViewItem_o *)v57.fields.current;
              if ( !v57.fields.current
                || (v46 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v57.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v46)
                || (CompleteMissionListViewItem_c *)v57.fields.current->klass->_2.typeHierarchy[v46 - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_B5D69C(v43, v44);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v57.fields.current, 0LL);
              v51 = this->fields.missionToRecieve;
              if ( !v51 )
                sub_B5D69C(MissionId, v48);
              v52 = MissionId;
              if ( (_DWORD)MissionId == v51->fields.id )
              {
                if ( !byte_42E5F9E )
                {
                  MissionId = sub_B5D5C4(&EventRewardSaveData_TypeInfo, v48, v49, v50);
                  byte_42E5F9E = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v52;
                if ( !v42 )
                  sub_B5D69C(MissionId, v48);
                MissionListViewItem__ModifyItem(current, LODWORD(v42->fields.lookup) == 5, 0LL);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v55 = current->fields.viewObject;
                if ( !v55 )
                  sub_B5D69C(0LL, v54);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v55->klass->vtable._5_SetItem.method)(
                  v55,
                  current,
                  v55->klass->vtable._6_SetItem.methodPtr);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, Il2CppMethodPointer))current->klass->vtable._6_CheckMissionCond.method)(
                  current,
                  current->klass->vtable._7_SetGiftData.methodPtr);
            }
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v57,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B5D69C(Instance, v36);
  }
}


void __fastcall CompleteMissionListViewManager__OnChangeAlphaAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_CompleteMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x1
  int size; // w21
  __int64 v11; // x22

  if ( (byte_42E8F0E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v5, v6, v7);
    byte_42E8F0E = 1;
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v9);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_CompleteMissionListViewObject__o *)ObjectList->fields._items->m_Items[v11];
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v9);
      if ( (int)++v11 >= size )
        return;
    }
LABEL_12:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall CompleteMissionListViewManager__OnClickFilterList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_42E8EFA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EFA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_32A2F98[filterStatus];
  CompleteMissionListViewManager__setList(this, v5);
}


void __fastcall CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
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
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v14; // x10
  PlayMakerFSM_o *v15; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v17; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v19; // x2

  if ( (byte_42E8EF8 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_15588/*"Wait_Action"*/, v9, v10, v11);
    byte_42E8EF8 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_21;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15588/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (v14 = *(&CompleteMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem(
                                        (CompleteMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_21:
    sub_B5D69C(targetFSM, obj);
  }
  v15 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)(*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
                                                       targetFSM,
                                                       targetFSM->klass[1]._1.this_arg.data);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v15,
                                                             v17),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v15[5].monitor) )
  {
    if ( LODWORD(v15[4].fields.addEventHandlers) == 3
      && (v15[3].fields.m_CachedPtr != 1 || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v17)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v15, 0LL);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v19);
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v15, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
        CompleteMissionListViewManager_o *this,
        GiftEntity_array *rewards,
        System_String_o *rewardDetail,
        bool isCompleteMission,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E8F00 & 1) == 0 )
  {
    sub_B5D5C4(
      &CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo,
      (_DWORD)rewards,
      (_DWORD)rewardDetail,
      isCompleteMission);
    byte_42E8F00 = 1;
  }
  v9 = sub_B5D694(CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
  CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50___ctor(
    (CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = rewards;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)rewards, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 56) = rewardDetail;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v9 + 56),
    (System_Int32_array **)rewardDetail,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_BYTE *)(v9 + 40) = isCompleteMission;
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall CompleteMissionListViewManager__RefrashListDisp(
        CompleteMissionListViewManager_o *this,
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
  System_Collections_Generic_List_CompleteMissionListViewObject__o *ObjectList; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_CompleteMissionListViewObject__o *v25; // x20
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

  if ( (byte_42E8EF9 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v20, v21, v22);
    byte_42E8EF9 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, method);
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
      || (v28 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v35.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (CompleteMissionListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v28 - 1] != CompleteMissionListViewItem_TypeInfo )
    {
      sub_B5D69C(v26, v27);
    }
    v29 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v35.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v29 )
    {
      if ( (CompleteMissionListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v29 - 1] == CompleteMissionListViewItem_TypeInfo )
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
        ObjectList = (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v25->fields._items->m_Items[v33];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_CompleteMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
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


void __fastcall CompleteMissionListViewManager__SetOpenItem(
        CompleteMissionListViewManager_o *this,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v32; // x1
  struct CompleteMissionListViewItem_o *v33; // x21
  int v34; // w1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v43; // x2
  float openItemTime; // s8
  System_Action_o *v45; // x20
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8F07 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CompleteMissionListViewManager_modifyOpenItem__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18425/*"ef_mission_extric01"*/, v23, v24, v25);
    byte_42E8F07 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B5D69C(0LL, v27);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v46,
        ObjectList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v47 = v46;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v47,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v28 )
          break;
        current = v47.fields.current;
        if ( !v47.fields.current )
          sub_B5D69C(v28, v29);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v47.fields.current,
                                          v29);
        v33 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_B5D69C(0LL, v32);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_42E5F9E )
          {
            sub_B5D5C4(&EventRewardSaveData_TypeInfo, v34, (_DWORD)v35, v36);
            byte_42E5F9E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v33;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v33,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v33, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_18425/*"ef_mission_extric01"*/, transform, v43);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v47,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0LL);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v45, 0LL);
  }
}


void __fastcall CompleteMissionListViewManager__SetResultData(
        CompleteMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  int v18; // w2
  __int64 v19; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)svts,
    (System_String_array **)cmds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.getCommandCodeList,
    (System_Int32_array **)cmds,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_B5D69C(v16, v17);
  id = missionToRecieve->fields.id;
  if ( !byte_42E5F9E )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v17, v18, v19);
    byte_42E5F9E = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_42E8F0B & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F0B = 1;
  }
  v5 = sub_B5D694(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
  CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64___ctor(
    (CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  float endEffectTime; // s8
  System_Action_o *v9; // x20

  if ( (byte_42E8F11 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CompleteMissionListViewManager_actionAfterCallback__, v5, v6, v7);
    byte_42E8F11 = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v9, 0LL);
}


void __fastcall CompleteMissionListViewManager__actionAfterCallback(
        CompleteMissionListViewManager_o *this,
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


void __fastcall CompleteMissionListViewManager__afterReward(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AutomatedAction_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8F01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5559/*"END_EFFECT"*/, v5, v6, v7);
    byte_42E8F01 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5559/*"END_EFFECT"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CompleteMissionListViewManager_o *v4; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w20
  struct ListViewItemSeed_o *seed; // x8

  v4 = this;
  if ( (byte_42E8F0A & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_B5D5C4(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 (_DWORD)method,
                                                 v2,
                                                 v3);
    byte_42E8F0A = 1;
  }
  missionToRecieve = v4->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (seed = this[2].fields.seed) == 0LL
    || (this = (CompleteMissionListViewManager_o *)seed->fields.parent) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     dispNo - 2,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     v4->fields.distanceToTexObj,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (CompleteMissionListViewManager_o *)v4->fields.touchBlockObj) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CompleteMissionListViewManager__checkAcceptable(
        CompleteMissionListViewManager_o *this,
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
  int64_t Instance; // x0
  __int64 v45; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v47; // x8
  int64_t v48; // x20
  int64_t v49; // x21
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  BalanceConfig_c *v58; // x0
  __int64 *v59; // x8
  CompleteMissionListViewManager___c_c *v60; // x0
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v63; // x21
  struct CompleteMissionListViewManager___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7

  if ( (byte_42E8EFD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__, v32, v33, v34);
    sub_B5D5C4(&CompleteMissionListViewManager___c_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12387/*"SHOW_MSG"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_11270/*"REWARD_ACCEPTABLE"*/, v41, v42, v43);
    byte_42E8EFD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_40;
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v47 = this->fields.missionToRecieve;
  if ( !v47 )
    goto LABEL_40;
  if ( v47->fields.rewardType == 1 )
  {
    v48 = Instance;
    if ( !Instance )
      goto LABEL_40;
    if ( Gift__IsServant_28424960(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                *(_DWORD *)(v48 + 24),
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v49 = Instance;
            if ( !SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
              && !SvtType__IsStatusUp(*(_DWORD *)(v49 + 84), 0LL) )
            {
              goto LABEL_27;
            }
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                VaildList = UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
                Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          *(_DWORD *)(v48 + 24),
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v58 = BalanceConfig_TypeInfo;
                      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v58 = BalanceConfig_TypeInfo;
                      }
                      if ( v58->static_fields->PresentBoxMax > (signed int)VaildList->max_length )
                        goto LABEL_27;
                      v60 = CompleteMissionListViewManager___c_TypeInfo;
                      if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
                        v60 = CompleteMissionListViewManager___c_TypeInfo;
                      }
                      static_fields = v60->static_fields;
                      _9__46_0 = static_fields->__9__46_0;
                      if ( !_9__46_0 )
                      {
                        if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v60);
                          static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        }
                        v63 = (Il2CppObject *)static_fields->__9;
                        _9__46_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__46_0,
                          v63,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0LL);
                        v64 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        v64->__9__46_0 = _9__46_0;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&v64->__9__46_0,
                          (System_Int32_array **)_9__46_0,
                          v65,
                          v66,
                          v67,
                          v68,
                          v69,
                          v70);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)&this->fields.ShowMSG,
                        (System_Int32_array **)_9__46_0,
                        v52,
                        v53,
                        v54,
                        v55,
                        v56,
                        v57);
                      Instance = (int64_t)this->fields.targetFSM;
                      if ( Instance )
                      {
                        v59 = &StringLiteral_12387/*"SHOW_MSG"*/;
                        goto LABEL_29;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_40:
      sub_B5D69C(Instance, v45);
    }
  }
LABEL_27:
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_40;
  v59 = &StringLiteral_11270/*"REWARD_ACCEPTABLE"*/;
LABEL_29:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v59, 0LL);
}


bool __fastcall CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v19; // x19

  if ( (byte_42E8F0D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14, v15);
    byte_42E8F0D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v18 = *(_QWORD *)&Instance[9].fields.m_CachedPtr) == 0
    || (v19 = *(System_Collections_Generic_List_EventMissionEntity__o **)(v18 + 120),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v19, 0LL),
        !v19)
    || !Instance )
  {
    sub_B5D69C(Instance, v17);
  }
  return v19->fields._size - 1 == LODWORD(Instance->fields.datalist);
}


void __fastcall CompleteMissionListViewManager__endloadEffect(
        CompleteMissionListViewManager_o *this,
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
  struct EventMissionEntity_o *v18; // x8

  if ( (byte_42E8F04 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10, v11, v12);
    byte_42E8F04 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewManager_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B5D560(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0LL) )
    {
      if ( this->fields.filterStatus )
      {
        this->fields.filterStatus = 0;
        CompleteMissionListViewManager__setList(this, v17);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v17);
    }
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v18 = this->fields.missionToRecieve;
    if ( !v18 || !Instance )
LABEL_13:
      sub_B5D69C(Instance, v15);
    AutomatedAction__SetMissionAction(Instance, v18->fields.id, 5, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CompleteMissionListViewManager__getEffect(
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

  if ( (byte_42E8F05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)parentTr, (_DWORD)method, v3);
    sub_B5D5C4(&CompleteMissionListViewManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E8F05 = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
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


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
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
  CompleteMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8EF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E8EF3 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
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
      Component_srcLineSprite = (CompleteMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)current,
                                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(Component_srcLineSprite, v36);
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v29;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8EF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___, (_DWORD)method, v2, v3);
    byte_42E8EF2 = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_1E649B4 *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void __fastcall CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_42E8F03 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CompleteMissionListViewManager_endloadEffect__, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5920/*"Effect/EventMission"*/, v11, v12, v13);
    byte_42E8F03 = 1;
  }
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5920/*"Effect/EventMission"*/, v14, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__modifyOpenItem(
        CompleteMissionListViewManager_o *this,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x20
  __int64 v30; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v32; // x1
  void *v33; // x0
  System_Action_o *v34; // x20
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8F08 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    byte_42E8F08 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v36 = v35;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v27 )
        break;
      current = v36.fields.current;
      if ( !v36.fields.current
        || (v30 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v36.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v30)
        || (CompleteMissionListViewItem_c *)v36.fields.current->klass->_2.typeHierarchy[v30 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_B5D69C(v27, v28);
      }
      monitor = (UnityEngine_Object_o *)v36.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v33 = current[6].monitor;
        if ( !v33 )
          sub_B5D69C(0LL, v32);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v33 + 392LL))(
          v33,
          current,
          *(_QWORD *)(*(_QWORD *)v33 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v34, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CompleteMissionListViewManager_o *v10; // x19
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v22; // x21
  ListViewItem_o *v23; // x8
  __int64 v24; // x11
  __int64 v25; // x11
  MissionListViewItem_o *v26; // x0
  int32_t v27; // w0

  v10 = this;
  if ( (byte_42E8EF6 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, missionID, (_DWORD)callback, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    this = (CompleteMissionListViewManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    byte_42E8EF6 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v10->fields.actionCallback,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = v10->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v22 = 0LL;
    do
    {
      if ( v22 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v23 = itemList->fields._items->m_Items[v22];
      if ( !v23 )
        break;
      v24 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (CompleteMissionListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        break;
      }
      v25 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v23->klass->_2.bitflags2 + 1) >= (unsigned int)v25 )
        v26 = (CompleteMissionListViewItem_c *)v23->klass->_2.typeHierarchy[v25 - 1] == CompleteMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v22]
            : 0LL;
      else
        v26 = 0LL;
      this = (CompleteMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v26, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v22 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v22) = 0;
LABEL_24:
  if ( ListViewManager__MoveTopItem((ListViewManager_o *)v10, v22, 1, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v27 = 0;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v27 = 2;
  }
  SoundManager__playSystemSe(v27, 0LL);
}


void __fastcall CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
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
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  WarEntity_o *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  System_String_o *v51; // x19
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x19
  CommonUI_o *v55; // x20
  CompleteMissionListViewManager___c_c *v56; // x8
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v59; // x22
  struct CompleteMissionListViewManager___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x0
  System_String_o *countText; // [xsp+38h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42E8F0C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, v26, v27, v28);
    sub_B5D5C4(&CompleteMissionListViewManager___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_23976/*"{0}×{1}"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_15962/*"[^0-9]"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3347/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_1/*""*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v44, v45, v46);
    byte_42E8F0C = 1;
  }
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  countText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_35;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_35;
  if ( !touchBlockObj )
    goto LABEL_35;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_35;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Entity )
    goto LABEL_35;
  if ( !touchBlockObj )
    goto LABEL_35;
  touchBlockObj = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)touchBlockObj,
                                                HIDWORD(Entity->fields.age),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_35;
  klass = touchBlockObj[1].klass;
  if ( !klass )
    return;
  if ( !(_DWORD)klass )
  {
    v67 = sub_B5D6C8(touchBlockObj);
    sub_B5D668(v67, 0LL);
  }
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_35;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0LL);
  if ( System_String__IsNullOrEmpty(nameText, 0LL) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0LL) )
  {
    v51 = countText;
    if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    }
    v52 = System_Text_RegularExpressions_Regex__Replace(
            v51,
            (System_String_o *)StringLiteral_15962/*"[^0-9]"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v52, (System_String_o *)StringLiteral_1026/*"1"*/, 0LL) )
      nameText = System_String__Format_44573324(
                   (System_String_o *)StringLiteral_23976/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3347/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0LL);
  v54 = System_String__Format(v53, (Il2CppObject *)nameText, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = (CommonUI_o *)touchBlockObj;
  v56 = CompleteMissionListViewManager___c_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v56 = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = v56->static_fields;
  _9__65_0 = static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v59 = (Il2CppObject *)static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__65_0, v59, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0LL);
    v60 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v60->__9__65_0 = _9__65_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v60->__9__65_0,
      (System_Int32_array **)_9__65_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !v55 )
LABEL_35:
    sub_B5D69C(touchBlockObj, method);
  CommonUI__OpenNotificationDialog(v55, 0LL, v54, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
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
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  EventMissionEntity_o *v30; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3

  if ( (byte_42E8EFC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)missionEntity, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__, v9, v10, v11);
    sub_B5D5C4(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo, v12, v13, v14);
    byte_42E8EFC = 1;
  }
  v15 = sub_B5D694(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass45_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v15,
    0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = missionEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)missionEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v30 = *(EventMissionEntity_o **)(v15 + 24);
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v15,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0LL);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v30, v31, v32);
}


void __fastcall CompleteMissionListViewManager__setAfterAction(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AutomatedAction_o *Instance; // x0
  __int64 v6; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_42E8F02 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E8F02 = 1;
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
    CompleteMissionListViewManager__loadOpenMissionEffect(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__setFilterId(
        CompleteMissionListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  CompleteMissionListViewManager__setList(this, *(const MethodInfo **)&id);
}


void __fastcall CompleteMissionListViewManager__setFilterName(
        CompleteMissionListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UISprite_o *filterBtnTxt; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0LL), (filterBtnTxt = this->fields.filterBtnTxt) == 0LL) )
  {
    sub_B5D69C(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall CompleteMissionListViewManager__setList(
        CompleteMissionListViewManager_o *this,
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
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v27; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  UILabel_o *v39; // x21
  bool v40; // w2
  struct ListViewSort_o *v41; // x8
  int v42; // w9
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int32_t filterStatus; // w19

  if ( (byte_42E8EFB & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17255/*"btn_txt_completed"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17288/*"btn_txt_receipt"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17287/*"btn_txt_progress"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17238/*"btn_txt_all"*/, v23, v24, v25);
    byte_42E8EFB = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v27 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34029496(v27, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_44:
    sub_B5D69C(operationSortInfo, v37);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17238/*"btn_txt_all"*/, v38);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0LL);
      v39 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v39 )
        goto LABEL_44;
      UILabel__set_text(v39, operationSortInfo, 0LL);
      goto LABEL_37;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17288/*"btn_txt_receipt"*/, v38);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
      v41 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      v42 = 1;
      goto LABEL_39;
    case 2:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17287/*"btn_txt_progress"*/, v38);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      v40 = 0;
      goto LABEL_35;
    case 3:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17255/*"btn_txt_completed"*/, v38);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      v40 = 1;
LABEL_35:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v40, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_37:
      v41 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      v42 = 13;
LABEL_39:
      v41->fields.sortKind = v42;
LABEL_40:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_44;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_42E8FE8 )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, v43, v44, v45);
        byte_42E8FE8 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = filterStatus;
      EventRewardSaveData__SaveCompleteMissionData(0LL);
      return;
    default:
      goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__setNextMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CompleteMissionListViewManager_o *v10; // x19
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v25; // x21
  ListViewItem_o *v26; // x8
  __int64 v27; // x11
  __int64 v28; // x11
  MissionListViewItem_o *v29; // x0
  System_Action_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  v10 = this;
  if ( (byte_42E8EF5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, missionID, (_DWORD)callback, method);
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18, v19);
    this = (CompleteMissionListViewManager_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                 v20,
                                                 v21,
                                                 v22);
    byte_42E8EF5 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v10->fields.actionCallback,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = v10->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v26 = itemList->fields._items->m_Items[v25];
      if ( !v26 )
        break;
      v27 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (CompleteMissionListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        break;
      }
      v28 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) >= (unsigned int)v28 )
        v29 = (CompleteMissionListViewItem_c *)v26->klass->_2.typeHierarchy[v28 - 1] == CompleteMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v25]
            : 0LL;
      else
        v29 = 0LL;
      this = (CompleteMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v29, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v25 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v25) = 0;
LABEL_24:
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v10,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0LL);
  v10->fields.callbackAfterScroll = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v10->fields.callbackAfterScroll,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ListViewManager__MoveTopItem((ListViewManager_o *)v10, v25, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setOpenPanel(
        CompleteMissionListViewManager_o *this,
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
  __int64 v38; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v48; // x8
  WarEntity_o *Entity; // x21
  __int64 v50; // x8
  System_Int32_array **Component_WebViewObject; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x8
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x8
  WebViewObject_o *v67; // x22
  __int64 v68; // x8
  UISprite_o *v69; // x20
  Il2CppObject *v70; // x20
  Il2CppObject *v71; // x0
  System_String_o *v72; // x20
  AssetLoader_LoadEndDataHandler_o *v73; // x21
  int v74; // [xsp+8h] [xbp-28h] BYREF
  int v75; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8F09 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITexture___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__, v29, v30, v31);
    sub_B5D5C4(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_4275/*"CompleteMission/{0}/{1}"*/, v35, v36, v37);
    byte_42E8F09 = 1;
  }
  v38 = sub_B5D694(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass61_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass61_0_o *)v38,
    0LL);
  if ( !v38 )
    goto LABEL_43;
  *(_QWORD *)(v38 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v38 + 40), (System_Int32_array **)this, v41, v42, v43, v44, v45, v46);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0LL);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_43;
  *(_DWORD *)(v38 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v48 = this->fields.missionToRecieve;
  if ( !v48 )
    goto LABEL_43;
  if ( !touchBlockObj )
    goto LABEL_43;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)touchBlockObj,
             v48->fields.missionTargetId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v50 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v50 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v50 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v38 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTexObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  Component_WebViewObject = (System_Int32_array **)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)touchBlockObj,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v38 + 16) = Component_WebViewObject;
  sub_B5D560((BattleServantConfConponent_o *)(v38 + 16), Component_WebViewObject, v52, v53, v54, v55, v56, v57);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v58 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v58 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v58 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v38 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToAdjustObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToRowlingPanelObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTextureObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  v59 = (System_Int32_array **)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)touchBlockObj,
                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v38 + 32) = v59;
  sub_B5D560((BattleServantConfConponent_o *)(v38 + 32), v59, v60, v61, v62, v63, v64, v65);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v66 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v66 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v66 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v38 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToNumObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  v67 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v68 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v68 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v68 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v38 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0LL);
  if ( !touchBlockObj
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToAdjustObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToRowlingPanelObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToNumberObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)touchBlockObj,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v67)
    || (v69 = (UISprite_o *)touchBlockObj) == 0LL
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v67[4].monitor, 0LL),
        UISprite__set_spriteName(v69, *(System_String_o **)&v67[4].fields.m_CachedPtr, 0LL),
        !Entity) )
  {
LABEL_43:
    sub_B5D69C(touchBlockObj, v40);
  }
  v75 = *(&Entity->fields.id + 1);
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
  v74 = *(_DWORD *)(v38 + 24);
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  v72 = System_String__Format_44573324((System_String_o *)StringLiteral_4275/*"CompleteMission/{0}/{1}"*/, v70, v71, 0LL);
  v73 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v73,
    (Il2CppObject *)v38,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v72, v73, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_B5D69C(this, method);
  if ( missionToRecieve->fields.dispNo >= 2 )
    CompleteMissionListViewManager__setOpenPanel(this, method);
}


void __fastcall CompleteMissionListViewManager__startPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall CompleteMissionListViewManager__unAcceptableDlg(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *ShowMSG; // x0

  if ( (byte_42E8EFE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5564/*"END_NOTICE"*/, (_DWORD)method, v2, v3);
    byte_42E8EFE = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B5D69C(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5564/*"END_NOTICE"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50___ctor(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__MoveNext(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
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
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v19; // x21
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o **p__8__1; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  void *_8__1; // x0
  System_Int32_array **v34; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v35; // x8
  __int64 v36; // x8
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  BattleServantConfConponent_o *p_anim_5__2; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  WebViewManager_o *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v62; // x23
  CommonUI_o *v63; // x19
  MissionRewardGetDialog_ClickDelegate_o *v64; // x22

  if ( (byte_42E6D2F & 1) == 0 )
  {
    sub_B5D5C4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(
      &Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo, v14, v15, v16);
    byte_42E6D2F = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_anim_5__2 = (BattleServantConfConponent_o *)&this->fields._anim_5__2;
    this->fields.__1__state = -1;
    goto LABEL_17;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v19 = (Il2CppObject *)sub_B5D694(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    System_Object___ctor(v19, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v19;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_26;
    v34 = (System_Int32_array **)this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v34;
    sub_B5D560((BattleServantConfConponent_o *)((char *)_8__1 + 16), v34, v27, v28, v29, v30, v31, v32);
    if ( !*p__8__1 )
      goto LABEL_26;
    (*p__8__1)->fields.isCompleteMission = this->fields.isCompleteMission;
    v35 = this->fields.__8__1;
    if ( !v35 )
      goto LABEL_26;
    if ( !v35->fields.isCompleteMission )
      goto LABEL_23;
    if ( !_4__this )
      goto LABEL_26;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0LL);
    _8__1 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_26;
    v36 = *((_QWORD *)_8__1 + 155);
    if ( !v36 )
      goto LABEL_26;
    _8__1 = *(void **)(v36 + 24);
    if ( !_8__1 )
      goto LABEL_26;
    Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)_8__1,
                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = Component_WebViewObject;
    p_anim_5__2 = (BattleServantConfConponent_o *)&this->fields._anim_5__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._anim_5__2,
      (System_Int32_array **)Component_WebViewObject,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_26;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)_8__1, 0LL);
LABEL_17:
    _8__1 = p_anim_5__2->klass;
    if ( !p_anim_5__2->klass )
      goto LABEL_26;
    _8__1 = (void *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)_8__1, 0LL);
    if ( ((unsigned __int8)_8__1 & 1) != 0 )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B5D560((BattleServantConfConponent_o *)p__2__current, 0LL, v45, v46, v47, v48, v49, v50);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    if ( !_4__this )
      goto LABEL_26;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0LL);
    this->fields._anim_5__2 = 0LL;
    sub_B5D560(p_anim_5__2, 0LL, v53, v54, v55, v56, v57, v58);
LABEL_23:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v62 = (Il2CppObject *)this->fields.__8__1;
    v63 = (CommonUI_o *)Instance;
    v64 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B5D694(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v64,
      v62,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0LL);
    if ( v63 )
    {
      CommonUI__OpenMissionRewardGetDialog(v63, rewards, rewardDetail, v64, 0, 0LL);
      return 0;
    }
LABEL_26:
    sub_B5D69C(_8__1, method);
  }
  return 0;
}


Il2CppObject *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_IDisposable_Dispose(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64___ctor(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__MoveNext(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  CompleteMissionListViewManager_o *_4__this; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v11; // x8
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  struct UnityEngine_Animation_o **p_anim_5__2; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42E6D30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E6D30 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_anim_5__2 = &this->fields._anim_5__2;
    this->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    v11 = *(_QWORD *)&Instance[51].fields.m_CachedPtr;
    if ( !v11 )
      goto LABEL_17;
    Instance = *(UnityEngine_Component_o **)(v11 + 24);
    if ( !Instance )
      goto LABEL_17;
    Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  Instance,
                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = Component_WebViewObject;
    p_anim_5__2 = &this->fields._anim_5__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._anim_5__2,
      (System_Int32_array **)Component_WebViewObject,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( !Instance )
      goto LABEL_17;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)Instance, 0LL);
LABEL_11:
    Instance = (UnityEngine_Component_o *)*p_anim_5__2;
    if ( *p_anim_5__2 )
    {
      Instance = (UnityEngine_Component_o *)UnityEngine_Animation__get_isPlaying(
                                              (UnityEngine_Animation_o *)Instance,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B5D560((BattleServantConfConponent_o *)p__2__current, 0LL, v20, v21, v22, v23, v24, v25);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( _4__this )
      {
        CompleteMissionListViewManager__panelAfterCallback(_4__this, 0LL);
        return 0;
      }
    }
LABEL_17:
    sub_B5D69C(Instance, method);
  }
  return 0;
}


Il2CppObject *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_IDisposable_Dispose(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D23 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E6D23 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CompleteMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall CompleteMissionListViewManager___c___ctor(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___CehckQpMaxAlert_b__68_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E6D26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E6D26 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v8);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
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
  CompleteMissionListViewManager___c_c *v26; // x8
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__46_1; // x22
  System_String_o *v29; // x21
  Il2CppObject *v30; // x23
  struct CompleteMissionListViewManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E6D24 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, v10, v11, v12);
    sub_B5D5C4(&CompleteMissionListViewManager___c_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_8837/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E6D24 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8837/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v25 = v23;
  v26 = CompleteMissionListViewManager___c_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v26 = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__46_1 = static_fields->__9__46_1;
  v29 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__46_1 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__46_1, v30, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0LL);
    v31 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v31->__9__46_1 = _9__46_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v31->__9__46_1,
      (System_Int32_array **)_9__46_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !Instance )
    sub_B5D69C(v23, v24);
  CommonUI__OpenNotificationDialog(Instance, v29, v25, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E6D25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6D25 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___panelAfterCallback_b__65_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass45_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass45_0___recieveReward_b__0(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CompleteMissionListViewManager___c__DisplayClass45_0_o *v8; // x19
  struct CompleteMissionListViewManager_o *_4__this; // x8
  System_Int32_array **missionEntity; // x1
  struct CompleteMissionListViewManager_o *v11; // x8

  v8 = this;
  if ( (byte_42E6D27 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_B5D5C4(
                                                                       &StringLiteral_8833/*"MISSIONN_REWARD"*/,
                                                                       (_DWORD)method,
                                                                       (_DWORD)v2,
                                                                       v3);
    byte_42E6D27 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (missionEntity = (System_Int32_array **)v8->fields.missionEntity,
        _4__this->fields.missionToRecieve = (struct EventMissionEntity_o *)missionEntity,
        sub_B5D560(
          (BattleServantConfConponent_o *)&_4__this->fields.missionToRecieve,
          missionEntity,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (v11 = v8->fields.__4__this) == 0LL)
    || (this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v11->fields.targetFSM) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8833/*"MISSIONN_REWARD"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__2(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E6D29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6D29 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E6D28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6D28 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__0(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v4; // x19
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
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v40; // x8
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v42; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v43; // x8
  System_String_o *v44; // x21
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v45; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v46; // x8
  System_String_o *v47; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v48; // x8
  System_String_o *v49; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v50; // x8
  System_String_o *v51; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v52; // x8
  System_String_o *v53; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v54; // x8
  struct CompleteMissionListViewManager_o *v55; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v56; // x8
  struct CompleteMissionListViewManager_o *v57; // x8
  System_String_o *v58; // x21
  Il2CppObject *v59; // x0
  System_String_o *v60; // x21
  _QWORD **v61; // x23
  __int64 v62; // x22
  __int16 v63; // w8
  __int64 v64; // x22
  __int64 v65; // x22
  __int64 v66; // x22
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v67; // x8
  struct CompleteMissionListViewManager_o *v68; // x8
  System_String_o *v69; // x21
  Il2CppObject *NumberFormat; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v71; // x8
  CompleteMissionListViewManager_o *v72; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v73; // x22
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v74; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v4 = this;
  if ( (byte_42E6D2A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_object___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_8850/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8836/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_31/*"\n \n"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_32/*"\n \n "*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_8851/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v32, v33, v34);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_B5D5C4(&StringLiteral_8842/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v35, v36, v37);
    byte_42E6D2A = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_81;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v40 = v4->fields.CS___8__locals1;
  if ( !v40 )
    goto LABEL_81;
  ActionExtensions__Call(v40->fields.callback, 0LL);
  giftList = v4->fields.giftList;
  if ( !giftList )
    goto LABEL_81;
  if ( giftList->fields._size < 1 )
  {
    v45 = v4->fields.CS___8__locals1;
    if ( v45 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v45->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, 0LL);
        v46 = v4->fields.CS___8__locals1;
        if ( v46 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v46->fields.__4__this;
          if ( this )
          {
            CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)this, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_81;
  }
  v42 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v42, 0LL);
  v43 = v4->fields.CS___8__locals1;
  if ( !v43 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v43->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_81;
  v44 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v44, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4->fields.giftTypeItemNum >= 2 )
    {
      if ( !v44 )
        goto LABEL_81;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_44641524(
                                                                         v44,
                                                                         0,
                                                                         v44->fields.m_stringLength - 2,
                                                                         0LL);
      if ( !v42 )
        goto LABEL_81;
      System_Text_StringBuilder__Append_42953744(v42, (System_String_o *)this, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8836/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42953744(
                                                                         v42,
                                                                         v47,
                                                                         0LL);
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0LL);
      if ( !v42 )
        goto LABEL_81;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v42,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v44,
                                                                         0LL);
    }
    v48 = v4->fields.CS___8__locals1;
    if ( !v48 )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v48->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_81;
    v49 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v49, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42953744(
                                                                         v42,
                                                                         (System_String_o *)StringLiteral_32/*"\n \n "*/,
                                                                         0LL);
  }
  v50 = v4->fields.CS___8__locals1;
  if ( !v50 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v50->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_81;
  v51 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v51, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v52 = v4->fields.CS___8__locals1;
    if ( !v52 )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v52->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                       this,
                                                                       this->klass[1]._1.image);
    if ( !v42 )
      goto LABEL_81;
    System_Text_StringBuilder__Append_42953744(v42, (System_String_o *)this, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8842/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42953744(
                                                                       v42,
                                                                       v53,
                                                                       0LL);
  }
  v54 = v4->fields.CS___8__locals1;
  if ( !v54 )
    goto LABEL_81;
  v55 = v54->fields.__4__this;
  if ( !v55 )
    goto LABEL_81;
  if ( v55->fields.isQpMaxAlert )
  {
    if ( v55->fields.isQpAlreadyMax )
    {
      if ( v42 )
      {
        if ( v4->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_42953744(v42, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
        else
          System_Text_StringBuilder__set_Length(v42, 0, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8850/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0LL);
        v67 = v4->fields.CS___8__locals1;
        if ( v67 )
        {
          v68 = v67->fields.__4__this;
          if ( v68 )
          {
            v69 = (System_String_o *)this;
            NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v68->fields.overQpValue, 0LL);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v42,
                                                                               v69,
                                                                               NumberFormat,
                                                                               0LL);
            goto LABEL_75;
          }
        }
      }
LABEL_81:
      sub_B5D69C(this, method);
    }
    if ( !v42 )
      goto LABEL_81;
    System_Text_StringBuilder__Append_42953744(v42, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8851/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0LL);
    v56 = v4->fields.CS___8__locals1;
    if ( !v56 )
      goto LABEL_81;
    v57 = v56->fields.__4__this;
    if ( !v57 )
      goto LABEL_81;
    v58 = (System_String_o *)this;
    v59 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v57->fields.overQpValue, 0LL);
    v60 = System_String__Format(v58, v59, 0LL);
    v61 = (_QWORD **)Method_System_Array_Empty_object___;
    v62 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v63 = *(_WORD *)(v62 + 306);
    if ( (v63 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v63 = *(_WORD *)(v62 + 306);
    }
    if ( (v63 & 0x400) != 0 )
    {
      v64 = *v61[6];
      if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
        sub_AF52C4(*v61[6]);
      if ( !*(_DWORD *)(v64 + 224) )
      {
        v65 = *v61[6];
        if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
          sub_AF52C4(*v61[6]);
        j_il2cpp_runtime_class_init_0(v65);
      }
    }
    v66 = *v61[6];
    if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
      sub_AF52C4(*v61[6]);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_42960492(
                                                                       v42,
                                                                       v60,
                                                                       **(System_Object_array ***)(v66 + 184),
                                                                       0LL);
  }
LABEL_75:
  v71 = v4->fields.CS___8__locals1;
  if ( !v71 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v4->fields.giftList;
  if ( !this )
    goto LABEL_81;
  v72 = v71->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v42 )
    goto LABEL_81;
  v73 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v42->klass->vtable._3_ToString.method)(
                                                                     v42,
                                                                     v42->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v74 = v4->fields.CS___8__locals1;
  if ( !v74 || !v72 )
    goto LABEL_81;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v72,
             (GiftEntity_array *)v73,
             (System_String_o *)this,
             v74->fields.isCompleteMission,
             0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v72, Dialog, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v4 = this;
  if ( (byte_42E6D2B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_B5D5C4(
                                                                       &Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
                                                                       v5,
                                                                       v6,
                                                                       v7);
    byte_42E6D2B = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v4->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v4,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0LL);
    v4->fields.__9__3 = _9__3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__9__3,
      (System_Int32_array **)_9__3,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !_4__this )
LABEL_8:
    sub_B5D69C(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
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
  SummonAssetManager_o *Instance; // x0
  __int64 v21; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v24; // x8
  WebViewManager_o *v25; // x0
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v27; // x21
  System_String_o *v28; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v29; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v31; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E6D2C & 1) == 0 )
  {
    sub_B5D5C4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, v17, v18, v19);
    byte_42E6D2C = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  SummonAssetManager__UnloadSummonAssets(Instance, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v24 = this->fields.CS___8__locals1;
  if ( !v24 )
    goto LABEL_16;
  ActionExtensions__Call(v24->fields.callback, 0LL);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v27 = (CommonUI_o *)v25;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v28, (Il2CppObject *)this->fields.sendName, 0LL);
  v29 = this->fields.CS___8__locals1;
  if ( !v29 )
    goto LABEL_16;
  _9__4 = v29->fields.__9__4;
  v31 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B5D694(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v29,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0LL);
    v29->fields.__9__4 = _9__4;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v29->fields.__9__4,
      (System_Int32_array **)_9__4,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v27 )
LABEL_16:
    sub_B5D69C(Instance, v21);
  CommonUI__OpenMissionRewardGetDialog_18271180(v27, rwdSetEnt, v31, _9__4, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass50_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass50_0___OpenPanelMissionRewardGetDialog_b__0(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E6D2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6D2D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseMissionRewardGetDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_8;
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, 0LL);
  if ( this->fields.isCompleteMission )
    return;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
LABEL_8:
    sub_B5D69C(Instance, v6);
  CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)Instance, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass61_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass61_0___setOpenPanel_b__0(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        AssetData_o *backPanel,
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
  CommonUI_o *Instance; // x0
  __int64 v22; // x1
  struct UITexture_o *tex; // x21
  Il2CppObject *v24; // x0
  struct UITexture_o *animTex; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  struct MasterMissionComponent_o *masterMissionComp; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct MasterMissionComponent_o *v30; // x8
  struct CompleteMissionListViewManager_o *v31; // x8
  struct MasterMissionComponent_o *v32; // x8
  struct CompleteMissionListViewManager_o *v33; // x8
  struct CompleteMissionListViewManager_o *v34; // x19
  float endEffectTime; // s8
  System_Action_o *v36; // x20
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E6D2E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)backPanel, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, v6, v7, v8);
    sub_B5D5C4(&Method_CompleteMissionListViewManager_animAfterCallback__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v18, v19, v20);
    byte_42E6D2E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_23850/*"{0}"*/, v24, 0LL);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
    tex,
    Instance,
    tex->klass->vtable._28_get_shader.methodPtr);
  animTex = this->fields.animTex;
  v37 = this->fields.completeMissionPanelChildIdx;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v27 = System_String__Format((System_String_o *)StringLiteral_23850/*"{0}"*/, v26, 0LL);
  Instance = (CommonUI_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             backPanel,
                             v27,
                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))animTex->klass->vtable._27_set_mainTexture.method)(
    animTex,
    Instance,
    animTex->klass->vtable._28_get_shader.methodPtr);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  masterMissionComp = Instance->fields.masterMissionComp;
  if ( !masterMissionComp )
    goto LABEL_30;
  Instance = (CommonUI_o *)masterMissionComp->fields.myFsm;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             _4__this->fields.distanceToNumObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v30 = Instance->fields.masterMissionComp;
  if ( !v30 )
    goto LABEL_30;
  Instance = (CommonUI_o *)v30->fields.myFsm;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0LL);
  v31 = this->fields.__4__this;
  if ( !v31 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v31->fields.distanceToTexObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v32 = Instance->fields.masterMissionComp;
  if ( !v32
    || (Instance = (CommonUI_o *)v32->fields.myFsm) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0LL),
        (v33 = this->fields.__4__this) == 0LL)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v33->fields.distanceToEfPanelObj,
                                   0LL)) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (v34 = this->fields.__4__this) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(Instance, v22);
  }
  endEffectTime = v34->fields.endEffectTime;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v34, Method_CompleteMissionListViewManager_animAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v34, endEffectTime, v36, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass68_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass68_0___CehckQpMaxAlert_b__0(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *decideCallback; // x0

  decideCallback = this->fields.decideCallback;
  if ( !decideCallback )
    sub_B5D69C(0LL, method);
  System_Action__Invoke(decideCallback, 0LL);
}