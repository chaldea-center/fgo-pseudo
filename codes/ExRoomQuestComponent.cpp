void ExRoomQuestComponent___cctor(const MethodInfo *method)
{
  if ( (byte_596AE3D & 1) == 0 )
  {
    sub_2213A60(&ExRoomQuestComponent_TypeInfo);
    byte_596AE3D = 1;
  }
  ExRoomQuestComponent_TypeInfo->static_fields->VOTE_QUEST_CONFIRM_MESSAGE_WIDTH = 700;
}


void ExRoomQuestComponent___ctor(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  this->fields.questListViewPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.questListViewPosition.fields.x = 0xC2680000C2300000LL;
  *(_QWORD *)&this->fields.slideValue = 0x3E80000044800000LL;
  this->fields.slideOutTime = 0.25;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomQuestComponent__Awake(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *questListViewPanel; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596AE2B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExRoomQuestBoardListViewManager___);
    byte_596AE2B = 1;
  }
  questListViewPanel = this->fields.questListViewPanel;
  if ( !questListViewPanel
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             questListViewPanel,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExRoomQuestBoardListViewManager___),
        this->fields.questBoardListViewManager = (struct ExRoomQuestBoardListViewManager_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardListViewManager,
          (int32_t)Component_object,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        ComponentHelper__SetLocalPosition(
          (UnityEngine_Component_o *)this->fields.questBoardListViewManager,
          this->fields.questListViewPosition,
          0),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.menuPanel, 1, 0),
        (questListViewPanel = (UnityEngine_GameObject_o *)this->fields.menuPanel) == 0) )
  {
    sub_2213CDC(questListViewPanel, method);
  }
  SlideFadeObject__SlideOut_42907896((SlideFadeObject_o *)questListViewPanel, this->fields.slideValue, 0.0, 0.0, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.menuPanel, 0, 0);
}


void ExRoomQuestComponent__CheckQuestPlayable(
        ExRoomQuestComponent_o *this,
        MapControl_QuestInfo_o *questInfo,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v7; // x20
  MapControl_QuestInfo_o *ActConsumeCost; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  MapControl_QuestInfo_o **v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Action_o **v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *Instance; // x27
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t warId; // w24
  int32_t questId; // w28
  MapControl_QuestInfo_o *v40; // x8
  _BOOL4 isNotItemConsume; // w26
  int32_t questPhase; // w23
  ExRoomQuestComponent_o *PhaseMax; // x0
  const MethodInfo *v44; // x2
  int32_t v45; // w23
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_IEnumerable_TSource__o *RestrictionList; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  Il2CppObject *v51; // x22
  ExRoomQuestComponent_o *v52; // x27
  ExRoomQuestComponent___c_c *v53; // x0
  int32_t v54; // w19
  System_Action_o *v55; // x20
  ExRoomQuestComponent_o *v56; // x0
  const MethodInfo *v57; // x2
  struct ExRoomQuestComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__20_6; // x28
  Il2CppObject *v60; // x29
  struct ExRoomQuestComponent___c_StaticFields *v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  RestrictionEntity_o *v71; // x29
  ExRoomQuestComponent___c_c *v72; // x0
  struct ExRoomQuestComponent___c_StaticFields *v73; // x8
  System_Func_object__bool__o *_9__20_7; // x19
  Il2CppObject *v75; // x20
  struct ExRoomQuestComponent___c_StaticFields *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  Il2CppObject *v83; // x0
  System_Int32_array *targetVals; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  Il2CppObject *GrandRestrictionLabelKey; // x20
  System_String_o *v89; // x0
  System_String_o *v90; // x19
  System_String_o *v91; // x0
  System_String_o *v92; // x20
  CommonUI_o *v93; // x21
  System_String_o *v94; // x22
  __int64 v95; // x2
  ExRoomQuestComponent___c_c *v96; // x8
  System_String_o *v97; // x23
  struct ExRoomQuestComponent___c_StaticFields *v98; // x9
  CommonConfirmDialog_ClickDelegate_o *_9__20_8; // x24
  Il2CppObject *v100; // x25
  struct ExRoomQuestComponent___c_StaticFields *v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  UserGameEntity_o *v108; // x29
  QuestEntity_o *v109; // x26
  __int64 v110; // x2
  CommonUI_o *v111; // x19
  System_String_o *v112; // x20
  __int64 v113; // x2
  System_String_o *v114; // x21
  ExRoomQuestComponent___c_c *v115; // x8
  struct ExRoomQuestComponent___c_StaticFields *v116; // x9
  System_Action_o *_9__20_0; // x22
  Il2CppObject *v118; // x23
  struct ExRoomQuestComponent___c_StaticFields *v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  int64_t endTime; // x23
  __int64 v127; // x8
  Il2CppObject *MasterData_object; // x24
  UserServantMaster_o *v129; // x28
  int32_t v130; // w21
  int32_t svtKeep; // w22
  CommonUI_o *v132; // x19
  ServantFrameShortDlgComponent_CallbackFunc_o *v133; // x23
  CommonUI_o *v134; // x0
  int32_t v135; // w1
  int32_t v136; // w2
  int32_t v137; // w3
  int32_t v138; // w21
  int32_t svtEquipKeep; // w22
  CommonUI_o *v140; // x19
  int32_t v141; // w28
  CommonUI_o *v142; // x19
  __int64 v143; // x2
  int32_t v144; // w21
  BalanceConfig_c *v145; // x0
  int32_t CommandCodeFrameMax; // w22
  __int64 v147; // x2
  long double v148; // q0
  int v149; // w23
  CommonUI_o *v150; // x19
  int32_t v151; // w21
  RecoverDlgComponent_CallbackFunc_o *v152; // x22
  ScrTerminalListTop_StormPodInfo_o *v153; // x23
  QuestConsumeItemEntity_o *v154; // x25
  unsigned int v155; // w24
  struct System_Int32_array *v156; // x8
  struct System_Int32_array *v157; // x8
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  MapControl_QuestInfo_o *v164; // x28
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x10
  struct System_Int32_array *v166; // x8
  int32_t v167; // w23
  bool v168; // zf
  struct QuestEntity_o *v169; // x1
  struct System_Int32_array *v170; // x8
  int32_t v171; // w8
  System_String_o *v172; // x0
  System_String_o *v173; // x19
  __int64 v174; // x2
  char v175; // w21
  ExRoomQuestComponent___c_c *v176; // x8
  CommonUI_o *v177; // x20
  struct ExRoomQuestComponent___c_StaticFields *v178; // x9
  System_Action_o *_9__20_15; // x23
  System_String_o *v180; // x22
  Il2CppObject *v181; // x24
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  int32_t v188; // w1
  struct ExRoomQuestComponent___c_StaticFields *v189; // x0
  MissionNaviTransitionBoardItem_o *p__9__20_15; // x0
  int v191; // w23
  CommonUI_o *v192; // x19
  int32_t v193; // w21
  RecoverDlgComponent_CallbackFunc_o *v194; // x22
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x23
  Il2CppObject *v196; // x29
  System_String_o *v197; // x25
  unsigned int v198; // w24
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v200; // x8
  Il2CppObject *v201; // x28
  System_String_o *v202; // x2
  System_String_o *v203; // x3
  int32_t v204; // w4
  int32_t v205; // w5
  bool v206; // w6
  bool v207; // w7
  MapControl_QuestInfo_o *v208; // x29
  __int64 qp; // x8
  struct System_Int32_array *nums; // x9
  int32_t v211; // w23
  struct QuestEntity_o *questEnt; // x1
  System_String_o *v213; // x0
  __int64 v214; // x2
  ExRoomQuestComponent___c_c *v215; // x8
  struct ExRoomQuestComponent___c_StaticFields *v216; // x9
  Il2CppObject *v217; // x24
  struct ExRoomQuestComponent___c_StaticFields *v218; // x0
  System_Action_o *v219; // x21
  const MethodInfo *v220; // x1
  __int64 v221; // x1
  __int64 v222; // x2
  UnityEngine_Object_o *terminalList; // x22
  const MethodInfo *v224; // x1
  unsigned int v225; // w24
  __int64 SpotID; // x0
  __int64 VaildPayType; // x0
  QuestMessageMaster_o *v228; // x25
  System_Collections_Generic_List_object__o *ValidMessageList; // x24
  __int64 v230; // x1
  __int64 v231; // x2
  ExRoomQuestComponent___c_c *v232; // x0
  struct ExRoomQuestComponent___c_StaticFields *v233; // x8
  System_Func_object__int__o *_9__20_4; // x25
  Il2CppObject *v235; // x26
  struct ExRoomQuestComponent___c_StaticFields *v236; // x0
  System_String_o *v237; // x2
  System_String_o *v238; // x3
  int32_t v239; // w4
  int32_t v240; // w5
  bool v241; // w6
  bool v242; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v243; // x0
  System_Collections_Generic_List_object__o *v244; // x26
  System_Collections_Generic_List_object__o *v245; // x25
  Il2CppObject *current; // x27
  ScrTerminalListTop_QuestStartDialogData_o *v247; // x24
  __int64 v248; // x0
  __int64 v249; // x1
  System_String_o *v250; // x2
  System_String_o *v251; // x3
  int32_t v252; // w4
  int32_t v253; // w5
  bool v254; // w6
  bool v255; // w7
  struct System_Object_array *items; // x8
  _QWORD *v257; // x9
  __int64 size; // x10
  Il2CppClass **v259; // x0
  __int64 v260; // x1
  __int64 v261; // x2
  QuestPhaseEntity_o *v262; // x24
  __int64 v263; // x1
  __int64 v264; // x2
  __int64 v265; // x23
  __int64 v266; // x1
  __int64 v267; // x2
  System_String_o *v268; // x2
  System_String_o *v269; // x3
  int32_t v270; // w4
  int32_t v271; // w5
  bool v272; // w6
  bool v273; // w7
  ScrTerminalListTop_QuestStartDialogData_c *v274; // x0
  ScrTerminalListTop_QuestStartDialogData_o *v275; // x0
  ScrTerminalListTop_QuestStartDialogData_o *v276; // x26
  QuestMessageEntity_o *v277; // x1
  bool v278; // w2
  __int64 v279; // x24
  __int64 v280; // x1
  __int64 v281; // x2
  System_String_o *v282; // x2
  System_String_o *v283; // x3
  int32_t v284; // w4
  int32_t v285; // w5
  bool v286; // w6
  bool v287; // w7
  ScrTerminalListTop_QuestStartDialogData_c *v288; // x0
  const MethodInfo *v289; // x1
  const MethodInfo *v290; // x3
  __int64 v291; // x1
  __int64 v292; // x2
  UnityEngine_Object_o *v293; // x23
  const MethodInfo *v294; // x1
  UnityEngine_MonoBehaviour_o *v295; // x21
  const MethodInfo *v296; // x1
  ScrTerminalListTop_o *v297; // x19
  System_Action_o *v298; // x22
  int32_t v299; // [xsp+44h] [xbp-11Ch]
  int32_t Act; // [xsp+48h] [xbp-118h]
  char v301; // [xsp+4Ch] [xbp-114h]
  MapControl_QuestInfo_o *v302; // [xsp+50h] [xbp-110h]
  ScrTerminalListTop_StormPodInfo_o *v303; // [xsp+58h] [xbp-108h]
  DataMasterBase_TMaster__TEntity__PKType__o *v304; // [xsp+60h] [xbp-100h]
  char v305; // [xsp+60h] [xbp-100h]
  UserItemMaster_o *v306; // [xsp+68h] [xbp-F8h]
  UserGameEntity_o *SelfUserGame; // [xsp+68h] [xbp-F8h]
  System_String_o *str0; // [xsp+70h] [xbp-F0h]
  System_String_o *str0a; // [xsp+70h] [xbp-F0h]
  int32_t v310; // [xsp+78h] [xbp-E8h]
  QuestConsumeItemEntity_o *v311; // [xsp+78h] [xbp-E8h]
  QuestEntity_o *v312; // [xsp+80h] [xbp-E0h]
  System_String_o *v313; // [xsp+88h] [xbp-D8h]
  int32_t v314; // [xsp+90h] [xbp-D0h]
  unsigned int v315; // [xsp+9Ch] [xbp-C4h]
  _BOOL4 v316; // [xsp+A0h] [xbp-C0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v317; // [xsp+A0h] [xbp-C0h]
  int32_t phase; // [xsp+ACh] [xbp-B4h]
  CommonUI_o **v319; // [xsp+B0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v320; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v321; // [xsp+D0h] [xbp-90h] BYREF
  UserItemEntity_o *entity; // [xsp+E8h] [xbp-78h] BYREF
  UserItemEntity_o *v323; // [xsp+F0h] [xbp-70h] BYREF
  __int64 servantEquipSum; // [xsp+F8h] [xbp-68h] BYREF

  if ( (byte_596AE2F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestRestrictionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ScrTerminalListTop_QuestStartDialogData___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_QuestMessageEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_QuestMessageEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestMessageEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestMessageEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestMessageEntity__get_Current__);
    sub_2213A60(&Method_ExRoomQuestComponent_RefreshTerminalScene__);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_QuestMessageEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestMessageEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScrTerminalListTop_QuestStartDialogData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestMessageEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScrTerminalListTop_QuestStartDialogData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_ScrTerminalListTop_QuestStartDialogData__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&QuestMessageEntity_TypeInfo);
    sub_2213A60(&ScrTerminalListTop_QuestStartDialogData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&ScrTerminalListTop_StormPodInfo_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_0__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_15__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_16__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_4__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_6__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_7__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_8__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__13__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__14__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__17__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__1__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__2__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__3__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__5__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass20_0_TypeInfo);
    sub_2213A60(&ExRoomQuestComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_9713/*"NO_GRAND_SVT_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_11356/*"QUEST_ITEM_COST_OVER"*/);
    sub_2213A60(&StringLiteral_9714/*"NO_GRAND_SVT_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_12701/*"SHORT_DLG_TITLE"*/);
    sub_2213A60(&StringLiteral_5165/*"DEFAULT_PREBATTLE_FORMATION_DIALOG"*/);
    sub_2213A60(&StringLiteral_5708/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_11296/*"QUEST_AP_MAX_OVER"*/);
    byte_596AE2F = 1;
  }
  v323 = 0;
  servantEquipSum = 0;
  entity = 0;
  memset(&v321, 0, sizeof(v321));
  v7 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_258;
  *(_QWORD *)(v7 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = questInfo;
  v16 = (MapControl_QuestInfo_o **)(v7 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)questInfo, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v7 + 40) = nextAction;
  v23 = (System_Action_o **)(v7 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)nextAction, v24, v25, v26, v27, v28, v29);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  *(_QWORD *)(v7 + 16) = v31;
  v319 = (CommonUI_o **)(v7 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  ActConsumeCost = *(MapControl_QuestInfo_o **)(v7 + 32);
  if ( !ActConsumeCost )
    goto LABEL_258;
  warId = ActConsumeCost->fields.warId;
  questId = ActConsumeCost->fields.questId;
  ActConsumeCost = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetActConsumeCost(ActConsumeCost, 0);
  v40 = *(MapControl_QuestInfo_o **)(v7 + 32);
  *(_DWORD *)(v7 + 48) = (_DWORD)ActConsumeCost;
  if ( !v40 )
    goto LABEL_258;
  isNotItemConsume = v40->fields.isNotItemConsume;
  questPhase = v40->fields.questPhase;
  PhaseMax = (ExRoomQuestComponent_o *)MapControl_QuestInfo__GetPhaseMax(v40, 0);
  if ( questPhase + 1 < (int)PhaseMax )
    v45 = questPhase + 1;
  else
    v45 = (int)PhaseMax;
  if ( !ExRoomQuestComponent__IsQuestValid(PhaseMax, *v16, v44) )
  {
    v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v55, (Il2CppObject *)this, Method_ExRoomQuestComponent_RefreshTerminalScene__, 0);
    ExRoomQuestComponent__OpenQuestTimeOverNoticeDialog(v56, v55, v57);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v46, v47);
  ActConsumeCost = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestRestrictionMaster___);
  if ( !ActConsumeCost )
    goto LABEL_258;
  v315 = warId;
  v316 = isNotItemConsume;
  phase = v45;
  RestrictionList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionMaster__getRestrictionList(
                                                                           (QuestRestrictionMaster_o *)ActConsumeCost,
                                                                           questId,
                                                                           v45,
                                                                           0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)RestrictionList, 0) )
  {
    v51 = Instance;
    v52 = this;
    v53 = ExRoomQuestComponent___c_TypeInfo;
    v54 = questId;
    if ( !*(&ExRoomQuestComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExRoomQuestComponent___c_TypeInfo, v49, v50);
      v53 = ExRoomQuestComponent___c_TypeInfo;
    }
    static_fields = v53->static_fields;
    _9__20_6 = (System_Func_object__bool__o *)static_fields->__9__20_6;
    if ( !_9__20_6 )
    {
      if ( !*(&v53->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v53, v49, v50);
        static_fields = ExRoomQuestComponent___c_TypeInfo->static_fields;
      }
      v60 = (Il2CppObject *)static_fields->__9;
      _9__20_6 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__20_6, v60, Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_6__, 0);
      v61 = ExRoomQuestComponent___c_TypeInfo->static_fields;
      v61->__9__20_6 = (struct System_Func_RestrictionEntity__bool__o *)_9__20_6;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v61->__9__20_6, (int32_t)_9__20_6, v62, v63, v64, v65, v66, v67);
    }
    v68 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            RestrictionList,
            (System_Func_TSource__bool__o *)_9__20_6,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    questId = v54;
    this = v52;
    Instance = v51;
    v23 = (System_Action_o **)(v7 + 40);
    if ( v68 )
    {
      v71 = (RestrictionEntity_o *)v68;
      v72 = ExRoomQuestComponent___c_TypeInfo;
      if ( !*(&ExRoomQuestComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExRoomQuestComponent___c_TypeInfo, v69, v70);
        v72 = ExRoomQuestComponent___c_TypeInfo;
      }
      v73 = v72->static_fields;
      _9__20_7 = (System_Func_object__bool__o *)v73->__9__20_7;
      if ( !_9__20_7 )
      {
        if ( !*(&v72->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v72, v69, v70);
          v73 = ExRoomQuestComponent___c_TypeInfo->static_fields;
        }
        v75 = (Il2CppObject *)v73->__9;
        _9__20_7 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__20_7,
          v75,
          Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_7__,
          0);
        v76 = ExRoomQuestComponent___c_TypeInfo->static_fields;
        v76->__9__20_7 = (struct System_Func_RestrictionEntity__bool__o *)_9__20_7;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v76->__9__20_7,
          (int32_t)_9__20_7,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82);
      }
      v83 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
              RestrictionList,
              (System_Func_TSource__bool__o *)_9__20_7,
              (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
      targetVals = v71->fields.targetVals;
      if ( v83 && LODWORD(v83[3].monitor) == 1 )
      {
        v85 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v71->fields.targetVals,
                (System_Collections_Generic_IEnumerable_TSource__o *)v83[2].monitor,
                (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
        targetVals = System_Linq_Enumerable__ToArray_int_(
                       v85,
                       (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
      GrandRestrictionLabelKey = (Il2CppObject *)RestrictionEntity__GetGrandRestrictionLabelKey(v71, targetVals, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86, v87);
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_9714/*"NO_GRAND_SVT_CONFIRM_DIALOG_TITLE"*/, 0);
      v90 = System_String__Format(v89, GrandRestrictionLabelKey, 0);
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_9713/*"NO_GRAND_SVT_CONFIRM_DIALOG_MESSAGE"*/, 0);
      v92 = System_String__Format(v91, GrandRestrictionLabelKey, 0);
      v93 = *v319;
      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
      ActConsumeCost = (MapControl_QuestInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
      v96 = ExRoomQuestComponent___c_TypeInfo;
      v97 = (System_String_o *)ActConsumeCost;
      if ( !*(&ExRoomQuestComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExRoomQuestComponent___c_TypeInfo, v9, v95);
        v96 = ExRoomQuestComponent___c_TypeInfo;
      }
      v98 = v96->static_fields;
      _9__20_8 = v98->__9__20_8;
      if ( !_9__20_8 )
      {
        if ( !*(&v96->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v96, v9, v95);
          v98 = ExRoomQuestComponent___c_TypeInfo->static_fields;
        }
        v100 = (Il2CppObject *)v98->__9;
        _9__20_8 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          _9__20_8,
          v100,
          Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_8__,
          0);
        v101 = ExRoomQuestComponent___c_TypeInfo->static_fields;
        v101->__9__20_8 = _9__20_8;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v101->__9__20_8,
          (int32_t)_9__20_8,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
      }
      if ( v93 )
      {
        CommonUI__OpenConfirmDialogSetTitleCondensedScale(
          v93,
          v90,
          v92,
          v94,
          v97,
          0,
          _9__20_8,
          30,
          26,
          180.0,
          13.0,
          0,
          0,
          0);
        return;
      }
LABEL_258:
      sub_2213CDC(ActConsumeCost, v9);
    }
  }
  ActConsumeCost = (MapControl_QuestInfo_o *)UserGameMaster__getSelfUserGame(0);
  if ( !*v16 )
    goto LABEL_258;
  v108 = (UserGameEntity_o *)ActConsumeCost;
  ActConsumeCost = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(*v16, 0);
  if ( !ActConsumeCost )
    goto LABEL_258;
  v109 = (QuestEntity_o *)ActConsumeCost;
  ActConsumeCost = (MapControl_QuestInfo_o *)QuestEntity__GetConsumeType((QuestEntity_o *)ActConsumeCost, 0);
  if ( (_DWORD)ActConsumeCost != 1 )
  {
    ActConsumeCost = (MapControl_QuestInfo_o *)QuestEntity__GetConsumeType(v109, 0);
    if ( (_DWORD)ActConsumeCost != 4 )
      goto LABEL_261;
  }
  if ( !v108 )
    goto LABEL_258;
  if ( *(_DWORD *)(v7 + 48) <= v108->fields.actMax )
  {
LABEL_261:
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v110);
    if ( !byte_596AEF7 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEF7 = 1;
    }
    ActConsumeCost = (MapControl_QuestInfo_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v110);
      ActConsumeCost = (MapControl_QuestInfo_o *)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)&ActConsumeCost[1].fields.dispType + 20LL) = questId;
    if ( !*v16 )
      goto LABEL_258;
    endTime = (*v16)->fields.endTime;
    if ( !byte_596AEF8 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      ActConsumeCost = (MapControl_QuestInfo_o *)TerminalPramsManager_TypeInfo;
      v16 = (MapControl_QuestInfo_o **)(v7 + 32);
      byte_596AEF8 = 1;
    }
    if ( !*(&ActConsumeCost[1].fields._QuestReleaseTargetID_k__BackingField + 1) )
    {
      j_il2cpp_runtime_class_init_0(ActConsumeCost, v9, v110);
      ActConsumeCost = (MapControl_QuestInfo_o *)TerminalPramsManager_TypeInfo;
    }
    v127 = *(_QWORD *)&ActConsumeCost[1].fields.dispType;
    *(_QWORD *)(v127 + 128) = endTime;
    *(_DWORD *)(v127 + 768) = *(_DWORD *)(v7 + 48);
    TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0);
    if ( !Instance )
      goto LABEL_258;
    v314 = questId;
    ActConsumeCost = (MapControl_QuestInfo_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ActConsumeCost )
      goto LABEL_258;
    UserServantMaster__getCount(
      (UserServantMaster_o *)ActConsumeCost,
      (int32_t *)&servantEquipSum + 1,
      (int32_t *)&servantEquipSum,
      1,
      0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    ActConsumeCost = (MapControl_QuestInfo_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ActConsumeCost )
      goto LABEL_258;
    v129 = (UserServantMaster_o *)ActConsumeCost;
    ActConsumeCost = (MapControl_QuestInfo_o *)UserServantMaster__CheckServantAdd(
                                                 (UserServantMaster_o *)ActConsumeCost,
                                                 1,
                                                 0);
    if ( ((unsigned __int8)ActConsumeCost & 1) != 0 )
    {
      if ( !v108 )
        goto LABEL_258;
      v130 = HIDWORD(servantEquipSum);
      svtKeep = v108->fields.svtKeep;
      v132 = *v319;
      v133 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v133,
        (Il2CppObject *)v7,
        Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__1__,
        0);
      if ( !v132 )
        goto LABEL_258;
      v134 = v132;
      v135 = v130;
      v136 = svtKeep;
      v137 = 0;
LABEL_89:
      CommonUI__OpenSvtFrameShortDlg(v134, v135, v136, v137, 1, v133, 0, 0);
      return;
    }
    ActConsumeCost = (MapControl_QuestInfo_o *)UserServantMaster__CheckEquipAdd(v129, 1, 1, 0);
    if ( ((unsigned __int8)ActConsumeCost & 1) != 0 )
    {
      if ( !v108 )
        goto LABEL_258;
      v138 = servantEquipSum;
      svtEquipKeep = v108->fields.svtEquipKeep;
      v140 = *v319;
      v133 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v133,
        (Il2CppObject *)v7,
        Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__2__,
        0);
      if ( !v140 )
        goto LABEL_258;
      v134 = v140;
      v135 = v138;
      v136 = svtEquipKeep;
      v137 = 1;
      goto LABEL_89;
    }
    if ( !MasterData_object )
      goto LABEL_258;
    v141 = v314;
    if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
    {
      v142 = *v319;
      ActConsumeCost = (MapControl_QuestInfo_o *)UserCommandCodeMaster__getCount(
                                                   (UserCommandCodeMaster_o *)MasterData_object,
                                                   0);
      if ( !v108 )
        goto LABEL_258;
      v144 = (int)ActConsumeCost;
      if ( !byte_596A5C7 )
      {
        sub_2213A60(&BalanceConfig_TypeInfo);
        byte_596A5C7 = 1;
      }
      v145 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v143);
        v145 = BalanceConfig_TypeInfo;
      }
      CommandCodeFrameMax = v145->static_fields->CommandCodeFrameMax;
      v133 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v133,
        (Il2CppObject *)v7,
        Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__3__,
        0);
      if ( !v142 )
        goto LABEL_258;
      v134 = v142;
      v135 = v144;
      v136 = CommandCodeFrameMax;
      v137 = 2;
      goto LABEL_89;
    }
    ActConsumeCost = (MapControl_QuestInfo_o *)QuestEntity__GetConsumeType(v109, 0);
    v312 = v109;
    if ( (int)ActConsumeCost <= 2 )
    {
      if ( (_DWORD)ActConsumeCost == 1 )
      {
        if ( !v108 )
          goto LABEL_258;
        v191 = *(_DWORD *)(v7 + 48);
        ActConsumeCost = (MapControl_QuestInfo_o *)UserGameEntity__getAct(v108, 0);
        if ( v191 > (int)ActConsumeCost )
        {
          v192 = *(CommonUI_o **)(v7 + 16);
          v193 = *(_DWORD *)(v7 + 48);
          v194 = (RecoverDlgComponent_CallbackFunc_o *)sub_2213CCC(RecoverDlgComponent_CallbackFunc_TypeInfo);
          RecoverDlgComponent_CallbackFunc___ctor(
            v194,
            (Il2CppObject *)v7,
            Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__13__,
            0);
          if ( !v192 )
            goto LABEL_258;
          CommonUI__OpenApRecoverItemListDialog(v192, v193, v194, 1, 0);
          return;
        }
      }
      else if ( (_DWORD)ActConsumeCost == 2 )
      {
        if ( !v108 )
          goto LABEL_258;
        v149 = *(_DWORD *)(v7 + 48);
        ActConsumeCost = (MapControl_QuestInfo_o *)UserGameEntity__getRp(v108, 0);
        if ( v149 > (int)ActConsumeCost )
        {
          v150 = *(CommonUI_o **)(v7 + 16);
          v151 = *(_DWORD *)(v7 + 48);
          v152 = (RecoverDlgComponent_CallbackFunc_o *)sub_2213CCC(RecoverDlgComponent_CallbackFunc_TypeInfo);
          RecoverDlgComponent_CallbackFunc___ctor(
            v152,
            (Il2CppObject *)v7,
            Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__14__,
            0);
          if ( !v150 )
            goto LABEL_258;
          CommonUI__OpenRpRecoverItemListDialog(v150, v151, v152, 1, 0);
          return;
        }
      }
      goto LABEL_206;
    }
    if ( (_DWORD)ActConsumeCost == 3 )
    {
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v109, v316, 0);
      v196 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      v317 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      str0a = (System_String_o *)sub_2213CCC(ScrTerminalListTop_StormPodInfo_TypeInfo);
      ScrTerminalListTop_StormPodInfo___ctor((ScrTerminalListTop_StormPodInfo_o *)str0a, 0);
      if ( !ItemConsumeEntity )
        goto LABEL_206;
      v197 = (System_String_o *)StringLiteral_1/*""*/;
      ActConsumeCost = (MapControl_QuestInfo_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
      if ( ((unsigned __int8)ActConsumeCost & 1) == 0 )
        goto LABEL_206;
      v313 = v197;
      v305 = 0;
      v198 = 0;
      v311 = ItemConsumeEntity;
      do
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v147);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        ActConsumeCost = (MapControl_QuestInfo_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v147);
          ActConsumeCost = (MapControl_QuestInfo_o *)NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_258;
        if ( v198 >= LODWORD(itemIds->max_length) )
          goto LABEL_229;
        if ( !v196 )
          goto LABEL_258;
        ActConsumeCost = (MapControl_QuestInfo_o *)UserItemMaster__TryGetEntity(
                                                     (UserItemMaster_o *)v196,
                                                     &v323,
                                                     *(_QWORD *)(*(_QWORD *)&ActConsumeCost[1].fields.dispType + 64LL),
                                                     itemIds->m_Items[v198],
                                                     0);
        v200 = ItemConsumeEntity->fields.itemIds;
        if ( !v200 )
          goto LABEL_258;
        if ( v198 >= LODWORD(v200->max_length) )
          goto LABEL_229;
        ActConsumeCost = (MapControl_QuestInfo_o *)v317;
        if ( !v317 )
          goto LABEL_258;
        v201 = v196;
        ActConsumeCost = (MapControl_QuestInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                                     v317,
                                                     v200->m_Items[v198],
                                                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !ActConsumeCost )
          goto LABEL_258;
        v208 = ActConsumeCost;
        if ( ActConsumeCost->fields.pickupPriority == 1 )
        {
          if ( !SelfUserGame )
            goto LABEL_258;
          qp = SelfUserGame->fields.qp;
        }
        else
        {
          qp = (__int64)v323;
          if ( v323 )
          {
            ActConsumeCost = (MapControl_QuestInfo_o *)ItemEntity__IsEnable((ItemEntity_o *)ActConsumeCost, 0);
            qp = 0;
            if ( ((unsigned __int8)ActConsumeCost & 1) != 0 )
            {
              if ( !v323 )
                goto LABEL_258;
              qp = v323->fields.num;
            }
          }
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_258;
        if ( v198 >= LODWORD(nums->max_length) )
LABEL_229:
          sub_2213CE4(ActConsumeCost);
        if ( qp < nums->m_Items[v198] )
        {
          v313 = System_String__Concat_75694928(
                   v313,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   (System_String_o *)v208->fields.questEnt,
                   0);
          v305 = 1;
        }
        ActConsumeCost = (MapControl_QuestInfo_o *)BalanceConfig_TypeInfo;
        v211 = v208->fields.questId;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v202);
          ActConsumeCost = (MapControl_QuestInfo_o *)BalanceConfig_TypeInfo;
        }
        v168 = v211 == *(_DWORD *)(*(_QWORD *)&ActConsumeCost[1].fields.dispType + 740LL);
        ItemConsumeEntity = v311;
        if ( v168 )
        {
          if ( !str0a )
            goto LABEL_258;
          questEnt = v208->fields.questEnt;
          str0a->fields = (System_String_Fields)questEnt;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&str0a->fields,
            (int32_t)questEnt,
            v202,
            v203,
            v204,
            v205,
            v206,
            v207);
        }
        ActConsumeCost = (MapControl_QuestInfo_o *)QuestConsumeItemEntity__IsAvailableAt(v311, ++v198, 0);
        v196 = v201;
      }
      while ( ((unsigned __int8)ActConsumeCost & 1) != 0 );
      v141 = v314;
      if ( (v305 & 1) == 0 )
        goto LABEL_206;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v147);
      v213 = LocalizationManager__Get((System_String_o *)StringLiteral_11356/*"QUEST_ITEM_COST_OVER"*/, 0);
      ActConsumeCost = (MapControl_QuestInfo_o *)System_String__Format(v213, (Il2CppObject *)v313, 0);
      if ( !str0a )
        goto LABEL_258;
      v173 = (System_String_o *)ActConsumeCost;
      ActConsumeCost = (MapControl_QuestInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)&str0a->fields, 0);
      v175 = (char)ActConsumeCost;
      v215 = ExRoomQuestComponent___c_TypeInfo;
      v177 = *v319;
      if ( !*(&ExRoomQuestComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExRoomQuestComponent___c_TypeInfo, v9, v214);
        v215 = ExRoomQuestComponent___c_TypeInfo;
      }
      v216 = v215->static_fields;
      _9__20_15 = v216->__9__20_15;
      v180 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__20_15 )
      {
        if ( !*(&v215->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v215, v9, v214);
          v216 = ExRoomQuestComponent___c_TypeInfo->static_fields;
        }
        v217 = (Il2CppObject *)v216->__9;
        _9__20_15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__20_15, v217, Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_15__, 0);
        v188 = (int)_9__20_15;
        v218 = ExRoomQuestComponent___c_TypeInfo->static_fields;
        v218->__9__20_15 = _9__20_15;
        p__9__20_15 = (MissionNaviTransitionBoardItem_o *)&v218->__9__20_15;
        goto LABEL_195;
      }
    }
    else
    {
      if ( (_DWORD)ActConsumeCost != 4 )
        goto LABEL_206;
      str0 = (System_String_o *)StringLiteral_1/*""*/;
      v153 = (ScrTerminalListTop_StormPodInfo_o *)sub_2213CCC(ScrTerminalListTop_StormPodInfo_TypeInfo);
      ScrTerminalListTop_StormPodInfo___ctor(v153, 0);
      if ( !v108 )
        goto LABEL_258;
      v299 = *(_DWORD *)(v7 + 48);
      Act = UserGameEntity__getAct(v108, 0);
      v154 = QuestEntity__getItemConsumeEntity(v109, v316, 0);
      v306 = (UserItemMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      v304 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      ActConsumeCost = (MapControl_QuestInfo_o *)UserGameMaster__getSelfUserGame(0);
      v302 = ActConsumeCost;
      if ( !v154 )
        goto LABEL_198;
      ActConsumeCost = (MapControl_QuestInfo_o *)QuestConsumeItemEntity__IsAvailableAt(v154, 0, 0);
      if ( ((unsigned __int8)ActConsumeCost & 1) == 0 )
        goto LABEL_198;
      v155 = 0;
      v301 = 0;
      v303 = v153;
      do
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v147);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        ActConsumeCost = (MapControl_QuestInfo_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v147);
          ActConsumeCost = (MapControl_QuestInfo_o *)NetworkManager_TypeInfo;
        }
        v156 = v154->fields.itemIds;
        if ( !v156 )
          goto LABEL_258;
        if ( v155 >= LODWORD(v156->max_length) )
          goto LABEL_229;
        if ( !v306 )
          goto LABEL_258;
        ActConsumeCost = (MapControl_QuestInfo_o *)UserItemMaster__TryGetEntity(
                                                     v306,
                                                     &entity,
                                                     *(_QWORD *)(*(_QWORD *)&ActConsumeCost[1].fields.dispType + 64LL),
                                                     v156->m_Items[v155],
                                                     0);
        v157 = v154->fields.itemIds;
        if ( !v157 )
          goto LABEL_258;
        if ( v155 >= LODWORD(v157->max_length) )
          goto LABEL_229;
        ActConsumeCost = (MapControl_QuestInfo_o *)v304;
        if ( !v304 )
          goto LABEL_258;
        ActConsumeCost = (MapControl_QuestInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                                     v304,
                                                     v157->m_Items[v155],
                                                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !ActConsumeCost )
          goto LABEL_258;
        v164 = ActConsumeCost;
        if ( ActConsumeCost->fields.pickupPriority == 1 )
        {
          if ( !v302 )
            goto LABEL_258;
          SpotInfo_k__BackingField = v302->fields._SpotInfo_k__BackingField;
        }
        else if ( entity )
        {
          ActConsumeCost = (MapControl_QuestInfo_o *)ItemEntity__IsEnable((ItemEntity_o *)ActConsumeCost, 0);
          SpotInfo_k__BackingField = 0;
          if ( ((unsigned __int8)ActConsumeCost & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_258;
            SpotInfo_k__BackingField = (struct MapControl_SpotInfo_o *)entity->fields.num;
          }
        }
        else
        {
          SpotInfo_k__BackingField = 0;
        }
        v166 = v154->fields.nums;
        if ( !v166 )
          goto LABEL_258;
        if ( v155 >= LODWORD(v166->max_length) )
          goto LABEL_229;
        v310 = (int)SpotInfo_k__BackingField;
        if ( (__int64)SpotInfo_k__BackingField < v166->m_Items[v155] )
        {
          str0 = System_String__Concat_75694928(
                   str0,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   (System_String_o *)v164->fields.questEnt,
                   0);
          v301 = 1;
        }
        v167 = v164->fields.questId;
        ActConsumeCost = (MapControl_QuestInfo_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v158);
          ActConsumeCost = (MapControl_QuestInfo_o *)BalanceConfig_TypeInfo;
        }
        v168 = v167 == *(_DWORD *)(*(_QWORD *)&ActConsumeCost[1].fields.dispType + 740LL);
        v153 = v303;
        if ( v168 )
        {
          if ( !v303 )
            goto LABEL_258;
          v169 = v164->fields.questEnt;
          v303->fields.stormPodName = (struct System_String_o *)v169;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v303->fields,
            (int32_t)v169,
            v158,
            v159,
            v160,
            v161,
            v162,
            v163);
          v303->fields.stormPodNum = v310;
          v170 = v154->fields.nums;
          if ( !v170 )
            goto LABEL_258;
          if ( v155 >= LODWORD(v170->max_length) )
            goto LABEL_229;
          v171 = v170->m_Items[v155];
          v303->fields.isNotItemConsume = v316;
          v303->fields.stormPodCostNum = v171;
        }
        ActConsumeCost = (MapControl_QuestInfo_o *)QuestConsumeItemEntity__IsAvailableAt(v154, ++v155, 0);
        v109 = v312;
        v141 = v314;
      }
      while ( ((unsigned __int8)ActConsumeCost & 1) != 0 );
      if ( (v301 & 1) == 0 )
      {
LABEL_198:
        if ( v299 > Act )
        {
          v219 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v219,
            (Il2CppObject *)v7,
            Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__17__,
            0);
          if ( !v153 )
            goto LABEL_258;
          if ( System_String__IsNullOrEmpty(v153->fields.stormPodName, 0) )
            goto LABEL_227;
          terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(this, v220);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v221, v222);
          if ( !UnityEngine_Object__op_Inequality(terminalList, 0, 0) )
          {
LABEL_227:
            ActionExtensions__Call(v219, 0);
          }
          else
          {
            ActConsumeCost = (MapControl_QuestInfo_o *)ExRoomQuestComponent__get_terminalList(this, v224);
            if ( !ActConsumeCost )
              goto LABEL_258;
            ScrTerminalListTop__OpenStormPodConfirmDialog(
              (ScrTerminalListTop_o *)ActConsumeCost,
              *(_DWORD *)(v7 + 48),
              v108,
              v153,
              v219,
              v109,
              1,
              0);
          }
          return;
        }
LABEL_206:
        if ( !*v16 )
          goto LABEL_258;
        v225 = (*v16)->fields.questPhase;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v148 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v147);
        sub_255F7E4(v225, 0, v148);
        ActConsumeCost = *v16;
        if ( !*v16 )
          goto LABEL_258;
        SpotID = MapControl_QuestInfo__GetSpotID(ActConsumeCost, 0);
        sub_255F840(SpotID, 0);
        sub_255F89C(v315, 0);
        ActConsumeCost = (MapControl_QuestInfo_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !ActConsumeCost )
          goto LABEL_258;
        VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)ActConsumeCost, 0);
        sub_255F8F8(VaildPayType, 0);
        ActConsumeCost = (MapControl_QuestInfo_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMessageMaster___);
        if ( !ActConsumeCost )
          goto LABEL_258;
        v228 = (QuestMessageMaster_o *)ActConsumeCost;
        ValidMessageList = (System_Collections_Generic_List_object__o *)QuestMessageMaster__GetValidMessageList(
                                                                          (QuestMessageMaster_o *)ActConsumeCost,
                                                                          v141,
                                                                          phase,
                                                                          1,
                                                                          0);
        ActConsumeCost = (MapControl_QuestInfo_o *)QuestMessageMaster__GetValidMessageList(v228, v141, phase, 4, 0);
        if ( !ValidMessageList )
          goto LABEL_258;
        System_Collections_Generic_List_object___AddRange(
          ValidMessageList,
          (System_Collections_Generic_IEnumerable_T__o *)ActConsumeCost,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_QuestMessageEntity__AddRange__);
        v232 = ExRoomQuestComponent___c_TypeInfo;
        if ( !*(&ExRoomQuestComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ExRoomQuestComponent___c_TypeInfo, v230, v231);
          v232 = ExRoomQuestComponent___c_TypeInfo;
        }
        v233 = v232->static_fields;
        _9__20_4 = (System_Func_object__int__o *)v233->__9__20_4;
        if ( !_9__20_4 )
        {
          if ( !*(&v232->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v232, v230, v231);
            v233 = ExRoomQuestComponent___c_TypeInfo->static_fields;
          }
          v235 = (Il2CppObject *)v233->__9;
          _9__20_4 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestMessageEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__20_4,
            v235,
            Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_4__,
            0);
          v236 = ExRoomQuestComponent___c_TypeInfo->static_fields;
          v236->__9__20_4 = (struct System_Func_QuestMessageEntity__int__o *)_9__20_4;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v236->__9__20_4,
            (int32_t)_9__20_4,
            v237,
            v238,
            v239,
            v240,
            v241,
            v242);
        }
        v243 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)ValidMessageList,
                                                                      (System_Func_TSource__TKey__o *)_9__20_4,
                                                                      (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_QuestMessageEntity__int___);
        v244 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v243,
                                                              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_QuestMessageEntity___);
        v245 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ScrTerminalListTop_QuestStartDialogData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v245,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ScrTerminalListTop_QuestStartDialogData___ctor__);
        if ( !v244 )
          goto LABEL_258;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v320,
          v244,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestMessageEntity__GetEnumerator__);
        v321 = v320;
        v320.fields._list = 0;
        *(_QWORD *)&v320.fields._index = &v321;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v321,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestMessageEntity__MoveNext__) )
        {
          current = v321.fields._current;
          v247 = (ScrTerminalListTop_QuestStartDialogData_o *)sub_2213CCC(ScrTerminalListTop_QuestStartDialogData_TypeInfo);
          ScrTerminalListTop_QuestStartDialogData___ctor(v247, (QuestMessageEntity_o *)current, 0, 0);
          if ( !v245
            || (items = v245->fields._items,
                v257 = Method_System_Collections_Generic_List_ScrTerminalListTop_QuestStartDialogData__Add__,
                ++v245->fields._version,
                !items) )
          {
            sub_2213CDC(v248, v249);
          }
          size = v245->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v245,
              (Il2CppObject *)v247,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
          }
          else
          {
            v259 = &items->obj.klass + size;
            v245->fields._size = size + 1;
            v259[4] = (Il2CppClass *)v247;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v259 + 4),
              (int32_t)v247,
              v250,
              v251,
              v252,
              v253,
              v254,
              v255);
          }
        }
        sub_1FFE898(&v320);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v260, v261);
        ActConsumeCost = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !ActConsumeCost )
          goto LABEL_258;
        v262 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ActConsumeCost, v312->fields.id, phase, 0);
        if ( !QuestEntity__HasFlag_49492572(v312, 0x400000, phase, 0) )
          goto LABEL_243;
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v263, v264);
        if ( OptionManager__GetPreBattleFormationSetting(0) )
        {
          v265 = sub_2213CCC(QuestMessageEntity_TypeInfo);
          QuestMessageEntity___ctor((QuestMessageEntity_o *)v265, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v266, v267);
          ActConsumeCost = (MapControl_QuestInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5165/*"DEFAULT_PREBATTLE_FORMATION_DIALOG"*/, 0);
          if ( !v265 )
            goto LABEL_258;
          *(_QWORD *)(v265 + 32) = ActConsumeCost;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v265 + 32),
            (int32_t)ActConsumeCost,
            v268,
            v269,
            v270,
            v271,
            v272,
            v273);
          *(_DWORD *)(v265 + 16) = v312->fields.id;
          if ( !*v16 )
            goto LABEL_258;
          v274 = ScrTerminalListTop_QuestStartDialogData_TypeInfo;
          *(_DWORD *)(v265 + 20) = (*v16)->fields.questPhase;
          *(_QWORD *)(v265 + 52) = 0x100000003LL;
          *(_DWORD *)(v265 + 24) = v244->fields._size;
          v275 = (ScrTerminalListTop_QuestStartDialogData_o *)sub_2213CCC(v274);
          v276 = v275;
          v277 = (QuestMessageEntity_o *)v265;
          v278 = 0;
        }
        else
        {
LABEL_243:
          if ( !v262 || !QuestPhaseEntity__IsAreaImporveQuest(v262, 0) )
            goto LABEL_250;
          v279 = sub_2213CCC(QuestMessageEntity_TypeInfo);
          QuestMessageEntity___ctor((QuestMessageEntity_o *)v279, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v280, v281);
          ActConsumeCost = (MapControl_QuestInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5708/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, 0);
          if ( !v279 )
            goto LABEL_258;
          *(_QWORD *)(v279 + 32) = ActConsumeCost;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v279 + 32),
            (int32_t)ActConsumeCost,
            v282,
            v283,
            v284,
            v285,
            v286,
            v287);
          v288 = ScrTerminalListTop_QuestStartDialogData_TypeInfo;
          *(_DWORD *)(v279 + 16) = v312->fields.id;
          *(_DWORD *)(v279 + 20) = phase;
          *(_QWORD *)(v279 + 52) = 0x100000003LL;
          *(_DWORD *)(v279 + 24) = 1;
          v275 = (ScrTerminalListTop_QuestStartDialogData_o *)sub_2213CCC(v288);
          v276 = v275;
          v277 = (QuestMessageEntity_o *)v279;
          v278 = 1;
        }
        ScrTerminalListTop_QuestStartDialogData___ctor(v275, v277, v278, 0);
        if ( !v245 )
          goto LABEL_258;
        sub_1FFEDA8(v245, v276, Method_System_Collections_Generic_List_ScrTerminalListTop_QuestStartDialogData__Add__);
LABEL_250:
        if ( !System_Linq_Enumerable__Any_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v245,
                (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ScrTerminalListTop_QuestStartDialogData___) )
          goto LABEL_254;
        v293 = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(this, v289);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v291, v292);
        if ( !UnityEngine_Object__op_Equality(v293, 0, 0) )
        {
          v295 = (UnityEngine_MonoBehaviour_o *)ExRoomQuestComponent__get_terminalList(this, v294);
          v297 = ExRoomQuestComponent__get_terminalList(this, v296);
          v298 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v298,
            (Il2CppObject *)v7,
            Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__5__,
            0);
          if ( !v297 )
            goto LABEL_258;
          ActConsumeCost = (MapControl_QuestInfo_o *)ScrTerminalListTop__OpenConfirmDialogList(
                                                       v297,
                                                       (System_Collections_Generic_List_ScrTerminalListTop_QuestStartDialogData__o *)v245,
                                                       v298,
                                                       0);
          if ( !v295 )
            goto LABEL_258;
          UnityEngine_MonoBehaviour__StartCoroutine_83444756(
            v295,
            (System_Collections_IEnumerator_o *)ActConsumeCost,
            0);
        }
        else
        {
LABEL_254:
          ExRoomQuestComponent__CheckQuestStartDialog(this, *v16, *v23, v290);
        }
        return;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v147);
      v172 = LocalizationManager__Get((System_String_o *)StringLiteral_11356/*"QUEST_ITEM_COST_OVER"*/, 0);
      ActConsumeCost = (MapControl_QuestInfo_o *)System_String__Format(v172, (Il2CppObject *)str0, 0);
      if ( !v303 )
        goto LABEL_258;
      v173 = (System_String_o *)ActConsumeCost;
      ActConsumeCost = (MapControl_QuestInfo_o *)System_String__IsNullOrEmpty(v303->fields.stormPodName, 0);
      v175 = (char)ActConsumeCost;
      v176 = ExRoomQuestComponent___c_TypeInfo;
      v177 = *v319;
      if ( !*(&ExRoomQuestComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExRoomQuestComponent___c_TypeInfo, v9, v174);
        v176 = ExRoomQuestComponent___c_TypeInfo;
      }
      v178 = v176->static_fields;
      _9__20_15 = v178->__9__20_16;
      v180 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__20_15 )
      {
        if ( !*(&v176->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v176, v9, v174);
          v178 = ExRoomQuestComponent___c_TypeInfo->static_fields;
        }
        v181 = (Il2CppObject *)v178->__9;
        _9__20_15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__20_15, v181, Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_16__, 0);
        v188 = (int)_9__20_15;
        v189 = ExRoomQuestComponent___c_TypeInfo->static_fields;
        v189->__9__20_16 = _9__20_15;
        p__9__20_15 = (MissionNaviTransitionBoardItem_o *)&v189->__9__20_16;
LABEL_195:
        sub_2213A04(p__9__20_15, v188, v182, v183, v184, v185, v186, v187);
      }
    }
    if ( !v177 )
      goto LABEL_258;
    CommonUI__OpenNotificationDialog(v177, v180, v173, _9__20_15, -1, 0, 0, 0, v175 & 1, 0, 0, 0, 0, 0.0, 0, 0);
    return;
  }
  v111 = *v319;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v110);
  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_12701/*"SHORT_DLG_TITLE"*/, 0);
  ActConsumeCost = (MapControl_QuestInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11296/*"QUEST_AP_MAX_OVER"*/, 0);
  v114 = (System_String_o *)ActConsumeCost;
  v115 = ExRoomQuestComponent___c_TypeInfo;
  if ( !*(&ExRoomQuestComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomQuestComponent___c_TypeInfo, v9, v113);
    v115 = ExRoomQuestComponent___c_TypeInfo;
  }
  v116 = v115->static_fields;
  _9__20_0 = v116->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !*(&v115->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v115, v9, v113);
      v116 = ExRoomQuestComponent___c_TypeInfo->static_fields;
    }
    v118 = (Il2CppObject *)v116->__9;
    _9__20_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__20_0, v118, Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_0__, 0);
    v119 = ExRoomQuestComponent___c_TypeInfo->static_fields;
    v119->__9__20_0 = _9__20_0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v119->__9__20_0,
      (int32_t)_9__20_0,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
  }
  if ( !v111 )
    goto LABEL_258;
  CommonUI__OpenNotificationDialog(v111, v112, v114, _9__20_0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
}


void ExRoomQuestComponent__CheckQuestStartDialog(
        ExRoomQuestComponent_o *this,
        MapControl_QuestInfo_o *questInfo,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v7; // x19
  unsigned __int64 ActConsumeCost; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int v28; // w9
  QuestEntity_o *Mine; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x2
  __int64 v37; // x8
  DataManager_c *v38; // x0
  int v39; // w9
  int32_t v40; // w21
  int v41; // w22
  QuestPhaseMaster_o *v42; // x20
  int32_t PhaseMax; // w0
  int32_t v44; // w22
  bool IsMoviePhase; // w0
  System_Action_c *v46; // x8
  System_Action_o *v47; // x20
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t EventId; // w0
  __int64 v55; // x1
  __int64 v56; // x2
  TerminalPramsManager_c *v57; // x0
  __int64 v58; // x20

  if ( (byte_596AE30 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__0__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__1__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass21_0_TypeInfo);
    byte_596AE30 = 1;
  }
  v7 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_30;
  *(_QWORD *)(v7 + 24) = nextAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)nextAction, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 56) = questInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 56), (int32_t)questInfo, v22, v23, v24, v25, v26, v27);
  ActConsumeCost = *(_QWORD *)(v7 + 56);
  if ( !ActConsumeCost )
    goto LABEL_30;
  v28 = *(_DWORD *)(ActConsumeCost + 44);
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(ActConsumeCost + 16);
  *(_DWORD *)(v7 + 20) = v28;
  Mine = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)ActConsumeCost, 0);
  *(_QWORD *)(v7 + 40) = Mine;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)Mine, v30, v31, v32, v33, v34, v35);
  ActConsumeCost = *(_QWORD *)(v7 + 56);
  if ( !ActConsumeCost )
    goto LABEL_30;
  ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost((MapControl_QuestInfo_o *)ActConsumeCost, 0);
  v37 = *(_QWORD *)(v7 + 56);
  *(_DWORD *)(v7 + 68) = ActConsumeCost;
  if ( !v37 )
    goto LABEL_30;
  v38 = DataManager_TypeInfo;
  v39 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_BYTE *)(v7 + 64) = *(_BYTE *)(v37 + 128);
  if ( !v39 )
    j_il2cpp_runtime_class_init_0(v38, v9, v36);
  ActConsumeCost = (unsigned __int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*(_QWORD *)(v7 + 56) )
    goto LABEL_30;
  v40 = *(_DWORD *)(v7 + 16);
  v41 = *(_DWORD *)(v7 + 20);
  v42 = (QuestPhaseMaster_o *)ActConsumeCost;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(*(MapControl_QuestInfo_o **)(v7 + 56), 0);
  v44 = v41 + 1 < PhaseMax ? v41 + 1 : PhaseMax;
  ActConsumeCost = (unsigned __int64)UserGameMaster__getSelfUserGame(0);
  if ( !ActConsumeCost )
    goto LABEL_30;
  if ( !v42 )
    goto LABEL_30;
  IsMoviePhase = QuestPhaseMaster__IsMoviePhase(v42, v40, v44, *(_DWORD *)(ActConsumeCost + 76), 0);
  v46 = System_Action_TypeInfo;
  *(_BYTE *)(v7 + 48) = IsMoviePhase;
  v47 = (System_Action_o *)sub_2213CCC(v46);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v7,
    Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__0__,
    0);
  *(_QWORD *)(v7 + 80) = v47;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 80), (int32_t)v47, v48, v49, v50, v51, v52, v53);
  ActConsumeCost = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActConsumeCost )
    goto LABEL_30;
  ActConsumeCost = (unsigned __int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ActConsumeCost,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !ActConsumeCost )
    goto LABEL_30;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)ActConsumeCost, *(_DWORD *)(v7 + 16), 0);
  *(_DWORD *)(v7 + 72) = EventId;
  if ( !EventId )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v55, v56);
    if ( !byte_596A743 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A743 = 1;
    }
    v57 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v55, v56);
      v57 = TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(v7 + 72) = WarMaster__getEventID(v57->static_fields->_WarId_k__BackingField, 0);
  }
  v58 = sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v58,
    (Il2CppObject *)v7,
    Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__1__,
    0);
  ActConsumeCost = *(unsigned int *)(v7 + 72);
  if ( (int)ActConsumeCost >= 1 )
  {
    ActConsumeCost = EventTutorialMaster__IsTutorialAvailable(
                       ActConsumeCost,
                       13,
                       *(_DWORD *)(v7 + 16),
                       *(_DWORD *)(v7 + 20) + 1,
                       0,
                       0,
                       0);
    if ( (ActConsumeCost & 1) != 0 )
    {
      EventTutorialMaster__CheckTutorial(
        *(_DWORD *)(v7 + 72),
        13,
        (System_Action_o *)v58,
        *(_DWORD *)(v7 + 16),
        *(_DWORD *)(v7 + 20) + 1,
        0,
        0,
        0);
      return;
    }
  }
  if ( !v58 )
LABEL_30:
    sub_2213CDC(ActConsumeCost, v9);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v58 + 24))(*(_QWORD *)(v58 + 64), *(_QWORD *)(v58 + 40));
}


void ExRoomQuestComponent__CloseMasterMission(ExRoomQuestComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_596AE3C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent__CloseMasterMission_b__33_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AE3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ExRoomQuestComponent__CloseMasterMission_b__33_0__, 0);
  if ( !v8 )
    sub_2213CDC(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestComponent__EndRecoverUserGameRecover(
        ExRoomQuestComponent_o *this,
        int32_t result,
        MapControl_QuestInfo_o *questInfo,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *playerStatus; // x22
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  ScrPlayerStatus_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_596AE31 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AE31 = 1;
  }
  if ( result == 2 )
  {
    playerStatus = (UnityEngine_Object_o *)ExRoomQuestComponent__get_playerStatus(this, *(const MethodInfo **)&result);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    if ( UnityEngine_Object__op_Inequality(playerStatus, 0, 0) )
    {
      Instance = ExRoomQuestComponent__get_playerStatus(this, v12);
      if ( !Instance )
        goto LABEL_12;
      ScrPlayerStatus__mfInitUserData(Instance, 0);
    }
    ExRoomQuestComponent__CheckQuestPlayable(this, questInfo, nextAction, v13);
  }
  Instance = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_2213CDC(Instance, v15);
  CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
}


System_String_o *ExRoomQuestComponent__GetQuestConfirmDialogString(
        ExRoomQuestComponent_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *terminalList; // x21
  const MethodInfo *v8; // x1
  ScrTerminalListTop_o *v10; // x0
  __int64 v11; // x1

  if ( (byte_596AE36 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE36 = 1;
  }
  terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(this, (const MethodInfo *)questInfo);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(terminalList, 0, 0) )
    return **(System_String_o ***)(qword_5984390 + 184);
  v10 = ExRoomQuestComponent__get_terminalList(this, v8);
  if ( !v10 )
    sub_2213CDC(0, v11);
  return ScrTerminalListTop__GetQuestConfirmDialogString(v10, questInfo, 0);
}


void ExRoomQuestComponent__Init(
        ExRoomQuestComponent_o *this,
        UnityEngine_GameObject_o *actionPanel,
        ExRoomResourceCatalogAssetBundle_o *exRoomResourceCatalogAssetBundle,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInParent_object__58855988; // x0
  struct ExRoomRootComponent_o **p_root; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  UISprite_o *masterMissionIconSprite; // x23
  const MethodInfo *v18; // x1
  ScrTerminalListTop_o *questBoardListViewManager; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *terminalList; // x23
  const MethodInfo *v24; // x4
  System_Collections_Generic_List_MapControl_QuestInfo__o *v25; // x23
  struct ExRoomRootComponent_o *root; // x8
  struct ExRoomQuestBoardListViewManager_o *v27; // x24
  System_Action_object__o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x4
  int32_t size; // w3

  if ( (byte_596AE2C & 1) == 0 )
  {
    sub_2213A60(&System_Action_MapControl_QuestInfo__TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInParent_ExRoomRootComponent___);
    sub_2213A60(&Method_ExRoomQuestComponent__Init_b__17_0__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18252/*"btn_exroom_04"*/);
    byte_596AE2C = 1;
  }
  ComponentInParent_object__58855988 = UnityEngine_Component__GetComponentInParent_object__58855988(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3821234 *)Method_UnityEngine_Component_GetComponentInParent_ExRoomRootComponent___);
  this->fields.root = (struct ExRoomRootComponent_o *)ComponentInParent_object__58855988;
  p_root = &this->fields.root;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.root,
    (int32_t)ComponentInParent_object__58855988,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.menuPanel, 1, 0);
  masterMissionIconSprite = this->fields.masterMissionIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15, v16);
  AtlasManager__SetBanner(masterMissionIconSprite, (System_String_o *)StringLiteral_18252/*"btn_exroom_04"*/, 0);
  questBoardListViewManager = (ScrTerminalListTop_o *)this->fields.masterMissionIconSprite;
  if ( !questBoardListViewManager )
    goto LABEL_19;
  ((void (__fastcall *)(ScrTerminalListTop_o *, void *))questBoardListViewManager->klass[2]._1.parent)(
    questBoardListViewManager,
    questBoardListViewManager->klass[2]._1.generic_class);
  terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(this, v20);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  questBoardListViewManager = (ScrTerminalListTop_o *)UnityEngine_Object__op_Inequality(terminalList, 0, 0);
  v25 = 0;
  if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
  {
    questBoardListViewManager = ExRoomQuestComponent__get_terminalList(this, v18);
    if ( !questBoardListViewManager )
      goto LABEL_19;
    questBoardListViewManager = (ScrTerminalListTop_o *)ScrTerminalListTop__CreateExRoomQuestInfoListFromCaldeaFolder(
                                                          questBoardListViewManager,
                                                          0);
    v25 = (System_Collections_Generic_List_MapControl_QuestInfo__o *)questBoardListViewManager;
  }
  root = this->fields.root;
  if ( !root
    || (questBoardListViewManager = (ScrTerminalListTop_o *)this->fields.questBoardListViewManager) == 0
    || (ExRoomQuestBoardListViewManager__CreateList(
          (ExRoomQuestBoardListViewManager_o *)questBoardListViewManager,
          v25,
          1,
          root->fields._FocusQuestId_k__BackingField,
          v24),
        !*p_root)
    || (v27 = this->fields.questBoardListViewManager,
        (*p_root)->fields._FocusQuestId_k__BackingField = 0,
        v28 = (System_Action_object__o *)sub_2213CCC(System_Action_MapControl_QuestInfo__TypeInfo),
        System_Action_object____ctor(v28, (Il2CppObject *)this, Method_ExRoomQuestComponent__Init_b__17_0__, 0),
        !v27) )
  {
LABEL_19:
    sub_2213CDC(questBoardListViewManager, v18);
  }
  v27->fields.onClickQuestBoard = (struct System_Action_MapControl_QuestInfo__o *)v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v27->fields.onClickQuestBoard,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( v25 )
    size = v25->fields._size;
  else
    size = 0;
  ExRoomQuestComponent__InitMissionListViewPanel(this, actionPanel, exRoomResourceCatalogAssetBundle, size, v35);
}


void ExRoomQuestComponent__InitMissionListViewPanel(
        ExRoomQuestComponent_o *this,
        UnityEngine_GameObject_o *actionPanel,
        ExRoomResourceCatalogAssetBundle_o *exRoomResourceCatalogAssetBundle,
        int32_t questCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionListViewPanel; // x23
  Il2CppObject *v10; // x23
  __int64 v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  ExRoomMissionController_o *v18; // x23
  const MethodInfo *v19; // x2
  __int64 v20; // x24
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  ExRoomMissionPresenter_o *v27; // x22
  const MethodInfo *v28; // x3
  ExRoomMissionListViewManager_o *v29; // x23
  System_Action_T__o *v30; // x24
  __int64 v31; // x0
  __int64 v32; // x1

  if ( (byte_596AE37 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ExRoomServant_VoiceType__TypeInfo);
    sub_2213A60(&ExRoomMissionController_TypeInfo);
    sub_2213A60(&ExRoomMissionDialogPort_TypeInfo);
    sub_2213A60(&ExRoomMissionPresenter_TypeInfo);
    sub_2213A60(&ExRoomMissionRepository_TypeInfo);
    sub_2213A60(&ExRoomMissionStatusResolver_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent_PlayMissionReceiveVoice__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE37 = 1;
  }
  missionListViewPanel = (UnityEngine_Object_o *)this->fields.missionListViewPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionPanel, exRoomResourceCatalogAssetBundle);
  if ( !UnityEngine_Object__op_Equality(missionListViewPanel, 0, 0) )
  {
    v10 = (Il2CppObject *)sub_2213CCC(ExRoomMissionStatusResolver_TypeInfo);
    System_Object___ctor(v10, 0);
    v11 = sub_2213CCC(ExRoomMissionRepository_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    *(_QWORD *)(v11 + 16) = v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)v10, v12, v13, v14, v15, v16, v17);
    v18 = (ExRoomMissionController_o *)sub_2213CCC(ExRoomMissionController_TypeInfo);
    ExRoomMissionController___ctor(v18, (IExRoomMissionRepository_o *)v11, v19);
    v20 = sub_2213CCC(ExRoomMissionDialogPort_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0);
    *(_QWORD *)(v20 + 16) = exRoomResourceCatalogAssetBundle;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v20 + 16),
      (int32_t)exRoomResourceCatalogAssetBundle,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = (ExRoomMissionPresenter_o *)sub_2213CCC(ExRoomMissionPresenter_TypeInfo);
    ExRoomMissionPresenter___ctor(v27, (IExRoomMissionController_o *)v18, (IExRoomMissionDialogPort_o *)v20, v28);
    v29 = this->fields.missionListViewPanel;
    v30 = (System_Action_T__o *)sub_2213CCC(System_Action_ExRoomServant_VoiceType__TypeInfo);
    System_Action_Int32Enum____ctor(v30, (Il2CppObject *)this, Method_ExRoomQuestComponent_PlayMissionReceiveVoice__, 0);
    if ( !v29 )
      sub_2213CDC(v31, v32);
    ExRoomMissionListViewManager__Initialize(
      v29,
      actionPanel,
      (IExRoomMissionPresenter_o *)v27,
      questCount,
      (System_Action_ExRoomServant_VoiceType__o *)v30,
      0);
  }
}


bool ExRoomQuestComponent__IsQuestValid(
        ExRoomQuestComponent_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AE33 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_596AE33 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !questInfo || !Instance )
    sub_2213CDC(Instance, v5);
  return clsQuestCheck__IsQuestValid((clsQuestCheck_o *)Instance, questInfo, questInfo->fields.endTime, 0);
}


void ExRoomQuestComponent__OnClickHelp(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_596AE39 & 1) == 0 )
  {
    sub_2213A60(&Method_ExRoomQuestComponent_OnClickHelp__);
    byte_596AE39 = 1;
  }
  v2 = Method_ExRoomQuestComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ExRoomQuestComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_ExRoomQuestComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 119, 0, 0, 0);
}


void ExRoomQuestComponent__OnClickMasterMission(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  ExRoomServant_o *servant; // x0
  const MethodInfo *v13; // x1
  struct ExRoomRootComponent_o *root; // x8

  if ( (byte_596AE3A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent_OnClickMasterMission__);
    sub_2213A60(&Method_ExRoomQuestComponent__OnClickMasterMission_b__31_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AE3A = 1;
  }
  v3 = Method_ExRoomQuestComponent_OnClickMasterMission__;
  if ( (*((_BYTE *)Method_ExRoomQuestComponent_OnClickMasterMission__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ExRoomQuestComponent_OnClickMasterMission__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v7);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ExRoomQuestComponent__OnClickMasterMission_b__31_0__, 0);
  if ( !v9
    || (servant = (ExRoomServant_o *)CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0),
        (root = this->fields.root) == 0)
    || (servant = root->fields.servant) == 0 )
  {
    sub_2213CDC(servant, v13);
  }
  ExRoomServant__StopVoice(servant, v13);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestComponent__OpenMasterMission(ExRoomQuestComponent_o *this, int32_t typeIndex, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *root; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct ExRoomRootComponent_o *v11; // x8
  UnityEngine_Object_o *servant; // x21
  struct ExRoomRootComponent_o *v13; // x8
  Il2CppObject *Instance; // x21
  MasterMissionComponent_ClickDelegate_o *v15; // x22
  System_Action_o *v16; // x23

  if ( (byte_596AE3B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&MasterMissionComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent_CloseMasterMission__);
    sub_2213A60(&Method_ExRoomQuestComponent__OpenMasterMission_b__32_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596AE3B = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&typeIndex, method);
  SoundManager__stopSe(0.0, 0);
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality(root, 0, 0);
  if ( v8 )
  {
    v11 = this->fields.root;
    if ( !v11 )
      goto LABEL_16;
    servant = (UnityEngine_Object_o *)v11->fields.servant;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    v8 = UnityEngine_Object__op_Inequality(servant, 0, 0);
    if ( v8 )
    {
      v13 = this->fields.root;
      if ( !v13 )
        goto LABEL_16;
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v13->fields.servant, 0, 0);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (MasterMissionComponent_ClickDelegate_o *)sub_2213CCC(MasterMissionComponent_ClickDelegate_TypeInfo);
  MasterMissionComponent_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_ExRoomQuestComponent_CloseMasterMission__,
    0);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ExRoomQuestComponent__OpenMasterMission_b__32_0__, 0);
  if ( !Instance )
LABEL_16:
    sub_2213CDC(v8, v9);
  CommonUI__OpenMasterMission((CommonUI_o *)Instance, v15, v16, typeIndex, 0);
}


void ExRoomQuestComponent__OpenQuestTimeOverNoticeDialog(
        ExRoomQuestComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AE34 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_596AE34 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  clsQuestCheck__OpenQuestTimeOverNoticeDialog((clsQuestCheck_o *)Instance, callback, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestComponent__PlayMissionReceiveVoice(
        ExRoomQuestComponent_o *this,
        int32_t voiceType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *root; // x21
  ExRoomServant_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct ExRoomRootComponent_o *v9; // x8
  UnityEngine_Object_o *servant; // x21
  const MethodInfo *v11; // x3
  struct ExRoomRootComponent_o *v12; // x8

  if ( (byte_596AE38 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE38 = 1;
  }
  if ( voiceType )
  {
    root = (UnityEngine_Object_o *)this->fields.root;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&voiceType, method);
    v6 = (ExRoomServant_o *)UnityEngine_Object__op_Equality(root, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      v9 = this->fields.root;
      if ( v9 )
      {
        servant = (UnityEngine_Object_o *)v9->fields.servant;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
        v6 = (ExRoomServant_o *)UnityEngine_Object__op_Equality(servant, 0, 0);
        if ( ((unsigned __int8)v6 & 1) != 0 )
          return;
        v12 = this->fields.root;
        if ( v12 )
        {
          v6 = v12->fields.servant;
          if ( v6 )
          {
            ExRoomServant__PlayVoice(v6, voiceType, 1, v11);
            return;
          }
        }
      }
      sub_2213CDC(v6, v7);
    }
  }
}


void ExRoomQuestComponent__RefreshTerminalScene(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *terminalList; // x20
  const MethodInfo *v6; // x1
  ScrTerminalListTop_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_596AE35 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE35 = 1;
  }
  terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(terminalList, 0, 0) )
  {
    v7 = ExRoomQuestComponent__get_terminalList(this, v6);
    if ( !v7 )
      sub_2213CDC(0, v8);
    ScrTerminalListTop__RefreshTerminalScene(v7, 0);
  }
}


void ExRoomQuestComponent__RequestConsumeColorReset(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  struct ExRoomQuestBoardListViewManager_o *questBoardListViewManager; // x8

  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    sub_2213CDC(this, method);
  questBoardListViewManager->fields.consumeColorReset = 1;
}


void ExRoomQuestComponent__SelectedQuest(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *terminalList; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  int v9; // w9
  const MethodInfo *v10; // x1
  ScrTerminalListTop_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_596AE32 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AE32 = 1;
  }
  terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( !UnityEngine_Object__op_Equality(terminalList, 0, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    if ( !byte_596AEFB )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEFB = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v9 = (unsigned __int8)byte_596AEFC;
    v8->static_fields->_IsAutoExRoom_k__BackingField = 1;
    if ( !v9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
      byte_596AEFC = 1;
    }
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_AutoExRoomType_k__BackingField = 2;
    TerminalPramsManager__Save_SaveData(0);
    v11 = ExRoomQuestComponent__get_terminalList(this, v10);
    if ( !v11 )
      sub_2213CDC(0, v12);
    ScrTerminalListTop__SelectedQuest(v11, 0);
  }
}


void ExRoomQuestComponent__ShowingInfoAllOff(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  ExRoomQuestBoardListViewManager_o *questBoardListViewManager; // x0

  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    sub_2213CDC(0, method);
  ExRoomQuestBoardListViewManager__SetShowingInfoAllOff(questBoardListViewManager, method);
}


void ExRoomQuestComponent__SlideIn(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *playerStatus; // x20
  const MethodInfo *v7; // x1
  ScrPlayerStatus_o *questBoardListViewManager; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  float slideInTime; // s8
  float IntpTime_AutoResume; // s0
  SlideFadeObject_o *menuPanel; // x20
  float v15; // s9
  float slideValue; // s8
  System_Action_o *v17; // x21

  if ( (byte_596AE2D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent__SlideIn_b__18_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AE2D = 1;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.menuPanel, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.helpButtonSprite, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.masterMissionIconSprite, 1, 0);
  playerStatus = (UnityEngine_Object_o *)ExRoomQuestComponent__get_playerStatus(this, v3);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(playerStatus, 0, 0) )
  {
    questBoardListViewManager = ExRoomQuestComponent__get_playerStatus(this, v7);
    if ( !questBoardListViewManager )
      goto LABEL_14;
    ScrPlayerStatus__FrameIn(questBoardListViewManager, 0, 0);
  }
  questBoardListViewManager = (ScrPlayerStatus_o *)this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_14;
  ExRoomQuestBoardListViewManager__ResetAlphaAnimTime(
    (ExRoomQuestBoardListViewManager_o *)questBoardListViewManager,
    v7);
  questBoardListViewManager = (ScrPlayerStatus_o *)this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_14;
  HIDWORD(questBoardListViewManager->fields.masterMissionCountNumLb2) = 1;
  ExRoomQuestBoardListViewManager__SetPanelClipping(
    (ExRoomQuestBoardListViewManager_o *)questBoardListViewManager,
    0,
    v9);
  slideInTime = this->fields.slideInTime;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(slideInTime, 0);
  menuPanel = this->fields.menuPanel;
  v15 = IntpTime_AutoResume;
  slideValue = this->fields.slideValue;
  v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ExRoomQuestComponent__SlideIn_b__18_0__, 0);
  if ( !menuPanel )
LABEL_14:
    sub_2213CDC(questBoardListViewManager, v7);
  SlideFadeObject__SlideIn_42906952(menuPanel, slideValue, v15, 0.0, v17, 0);
}


void ExRoomQuestComponent__SlideOut(ExRoomQuestComponent_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x20
  ScrPlayerStatus_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *playerStatus; // x21
  const MethodInfo *v24; // x1
  struct ExRoomQuestBoardListViewManager_o *questBoardListViewManager; // x8
  SlideFadeObject_o *menuPanel; // x21
  float slideValue; // s8
  float slideOutTime; // s9
  System_Action_o *v29; // x19

  if ( (byte_596AE2E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass19_0__SlideOut_b__0__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass19_0_TypeInfo);
    byte_596AE2E = 1;
  }
  v5 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  playerStatus = (UnityEngine_Object_o *)ExRoomQuestComponent__get_playerStatus(this, v20);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(playerStatus, 0, 0) )
  {
    v6 = ExRoomQuestComponent__get_playerStatus(this, v24);
    if ( !v6 )
      goto LABEL_12;
    ScrPlayerStatus__FrameOut(v6, 0, 0);
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.helpButtonSprite, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.masterMissionIconSprite, 0, 0);
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager
    || (menuPanel = this->fields.menuPanel,
        slideValue = this->fields.slideValue,
        slideOutTime = this->fields.slideOutTime,
        questBoardListViewManager->fields.initMode = 3,
        v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v5,
          Method_ExRoomQuestComponent___c__DisplayClass19_0__SlideOut_b__0__,
          0),
        !menuPanel) )
  {
LABEL_12:
    sub_2213CDC(v6, v7);
  }
  SlideFadeObject__SlideOut_42907896(menuPanel, slideValue, slideOutTime, 0.0, v29, 0);
}


void ExRoomQuestComponent___CloseMasterMission_b__33_0(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *root; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ExRoomRootComponent_o *v8; // x8
  UnityEngine_Object_o *servant; // x20
  struct ExRoomRootComponent_o *v10; // x8
  __int64 v11; // x2
  CommonUI_o *v12; // x19

  if ( (byte_596AE40 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AE40 = 1;
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(root, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v8 = this->fields.root;
    if ( !v8 )
      goto LABEL_17;
    servant = (UnityEngine_Object_o *)v8->fields.servant;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(servant, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v10 = this->fields.root;
      if ( !v10 )
        goto LABEL_17;
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v10->fields.servant, 1, 0);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v11);
  if ( !v12 )
LABEL_17:
    sub_2213CDC(Instance, v6);
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void ExRoomQuestComponent___Init_b__17_0(
        ExRoomQuestComponent_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_596AE3E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent_SelectedQuest__);
    byte_596AE3E = 1;
  }
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ExRoomQuestComponent_SelectedQuest__, 0);
  ExRoomQuestComponent__CheckQuestPlayable(this, questInfo, v5, v6);
}


void ExRoomQuestComponent___OnClickMasterMission_b__31_0(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExRoomQuestComponent__OpenMasterMission(this, -1, v2);
}


void ExRoomQuestComponent___OpenMasterMission_b__32_0(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *playerStatus; // x20
  const MethodInfo *v6; // x1
  ScrPlayerStatus_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_596AE3F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE3F = 1;
  }
  playerStatus = (UnityEngine_Object_o *)ExRoomQuestComponent__get_playerStatus(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(playerStatus, 0, 0) )
  {
    v7 = ExRoomQuestComponent__get_playerStatus(this, v6);
    if ( !v7 )
      sub_2213CDC(0, v8);
    v7->fields.mtIsUpdate = 1;
  }
}


void ExRoomQuestComponent___SlideIn_b__18_0(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExRoomQuestBoardListViewManager_o *questBoardListViewManager; // x0
  struct ExRoomQuestBoardListViewManager_o *v5; // x8

  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager
    || (ExRoomQuestBoardListViewManager__SetPanelClipping(questBoardListViewManager, 3, v2),
        (v5 = this->fields.questBoardListViewManager) == 0) )
  {
    sub_2213CDC(questBoardListViewManager, method);
  }
  v5->fields.initMode = 2;
}


ScrPlayerStatus_o *ExRoomQuestComponent__get_playerStatus(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *root; // x20
  const MethodInfo *v5; // x1
  bool v6; // w8
  ScrPlayerStatus_o *result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *TerminalScene; // x20
  bool v11; // w8
  __int64 v12; // x2
  UnityEngine_Object_o *commandSpellWindowPrefab; // x20
  bool v14; // w8

  if ( (byte_596AE2A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE2A = 1;
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = UnityEngine_Object__op_Equality(root, 0, 0);
  result = 0;
  if ( !v6 )
  {
    if ( !this->fields.root )
      goto LABEL_19;
    TerminalScene = (UnityEngine_Object_o *)ExRoomRootComponent__get_TerminalScene(0, v5);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    v11 = UnityEngine_Object__op_Equality(TerminalScene, 0, 0);
    result = 0;
    if ( !v11 )
    {
      if ( !this->fields.root )
        goto LABEL_19;
      result = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene(0, v5);
      if ( !result )
        goto LABEL_19;
      commandSpellWindowPrefab = (UnityEngine_Object_o *)result->fields.commandSpellWindowPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v12);
      v14 = UnityEngine_Object__op_Equality(commandSpellWindowPrefab, 0, 0);
      result = 0;
      if ( !v14 )
      {
        if ( this->fields.root )
        {
          result = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene(0, v5);
          if ( result )
            return (ScrPlayerStatus_o *)result->fields.commandSpellWindowPrefab;
        }
LABEL_19:
        sub_2213CDC(result, v5);
      }
    }
  }
  return result;
}


ScrTerminalListTop_o *ExRoomQuestComponent__get_terminalList(ExRoomQuestComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *root; // x20
  const MethodInfo *v5; // x1
  bool v6; // w8
  ScrTerminalListTop_o *result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *TerminalScene; // x20
  bool v11; // w8
  __int64 v12; // x2
  UnityEngine_Object_o *pointRewardServantAction; // x20
  bool v14; // w8

  if ( (byte_596AE29 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE29 = 1;
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = UnityEngine_Object__op_Equality(root, 0, 0);
  result = 0;
  if ( !v6 )
  {
    if ( !this->fields.root )
      goto LABEL_19;
    TerminalScene = (UnityEngine_Object_o *)ExRoomRootComponent__get_TerminalScene(0, v5);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    v11 = UnityEngine_Object__op_Equality(TerminalScene, 0, 0);
    result = 0;
    if ( !v11 )
    {
      if ( !this->fields.root )
        goto LABEL_19;
      result = (ScrTerminalListTop_o *)ExRoomRootComponent__get_TerminalScene(0, v5);
      if ( !result )
        goto LABEL_19;
      pointRewardServantAction = (UnityEngine_Object_o *)result->fields.pointRewardServantAction;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v12);
      v14 = UnityEngine_Object__op_Equality(pointRewardServantAction, 0, 0);
      result = 0;
      if ( !v14 )
      {
        if ( this->fields.root )
        {
          result = (ScrTerminalListTop_o *)ExRoomRootComponent__get_TerminalScene(0, v5);
          if ( result )
            return (ScrTerminalListTop_o *)result->fields.pointRewardServantAction;
        }
LABEL_19:
        sub_2213CDC(result, v5);
      }
    }
  }
  return result;
}


void ExRoomQuestComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AE41 & 1) == 0 )
  {
    sub_2213A60(&ExRoomQuestComponent___c_TypeInfo);
    byte_596AE41 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ExRoomQuestComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExRoomQuestComponent___c_TypeInfo->static_fields->__9 = (struct ExRoomQuestComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ExRoomQuestComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomQuestComponent___c___ctor(ExRoomQuestComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c___CheckQuestPlayable_b__20_0(ExRoomQuestComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void ExRoomQuestComponent___c___CheckQuestPlayable_b__20_15(ExRoomQuestComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void ExRoomQuestComponent___c___CheckQuestPlayable_b__20_16(ExRoomQuestComponent___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t ExRoomQuestComponent___c___CheckQuestPlayable_b__20_4(
        ExRoomQuestComponent___c_o *this,
        QuestMessageEntity_o *msg,
        const MethodInfo *method)
{
  if ( !msg )
    sub_2213CDC(this, 0);
  return msg->fields.idx;
}


bool ExRoomQuestComponent___c___CheckQuestPlayable_b__20_6(
        ExRoomQuestComponent___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return RestrictionEntity__IsGrandRestrictionViolated(e, 0);
}


bool ExRoomQuestComponent___c___CheckQuestPlayable_b__20_7(
        ExRoomQuestComponent___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.type == 1;
}


void ExRoomQuestComponent___c___CheckQuestPlayable_b__20_8(
        ExRoomQuestComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  ExRoomQuestComponent___c_c *v7; // x8
  CommonUI_o *v8; // x20
  struct ExRoomQuestComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__20_9; // x21
  Il2CppObject *v11; // x22
  struct ExRoomQuestComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596AE42 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_9__);
    sub_2213A60(&ExRoomQuestComponent___c_TypeInfo);
    byte_596AE42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = ExRoomQuestComponent___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&ExRoomQuestComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomQuestComponent___c_TypeInfo, v5, v6);
    v7 = ExRoomQuestComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__20_9 = static_fields->__9__20_9;
  if ( !_9__20_9 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = ExRoomQuestComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__20_9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__20_9, v11, Method_ExRoomQuestComponent___c__CheckQuestPlayable_b__20_9__, 0);
    v12 = ExRoomQuestComponent___c_TypeInfo->static_fields;
    v12->__9__20_9 = _9__20_9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__20_9, (int32_t)_9__20_9, v13, v14, v15, v16, v17, v18);
  }
  if ( !v8 )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog_37373868(v8, _9__20_9, 0);
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 43, 1, 0, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(Instance, v5);
  }
}


void ExRoomQuestComponent___c___CheckQuestPlayable_b__20_9(ExRoomQuestComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void ExRoomQuestComponent___c__DisplayClass19_0___ctor(
        ExRoomQuestComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass19_0___SlideOut_b__0(
        ExRoomQuestComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  struct ExRoomQuestComponent_o *_4__this; // x8
  struct ExRoomQuestBoardListViewManager_o *questBoardListViewManager; // x9
  UnityEngine_Component_o *menuPanel; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (questBoardListViewManager = _4__this->fields.questBoardListViewManager) == 0 )
    sub_2213CDC(this, method);
  menuPanel = (UnityEngine_Component_o *)_4__this->fields.menuPanel;
  questBoardListViewManager->fields.initMode = 0;
  BasicHelper__SetActiveSafely(menuPanel, 0, 0);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void ExRoomQuestComponent___c__DisplayClass20_0___ctor(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass20_0___CheckQuestPlayable_b__1(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *commomUI; // x20
  System_Action_o *v9; // x19

  if ( (byte_596AE43 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_1__CheckQuestPlayable_b__10__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass20_1_TypeInfo);
    byte_596AE43 = 1;
  }
  v5 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass20_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (commomUI = this->fields.commomUI,
        *(_DWORD *)(v5 + 16) = result,
        v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ExRoomQuestComponent___c__DisplayClass20_1__CheckQuestPlayable_b__10__,
          0),
        !commomUI) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseSvtFrameShortDlg(commomUI, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestComponent___c__DisplayClass20_0___CheckQuestPlayable_b__13(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_2213CDC(this, *(_QWORD *)&result);
  ExRoomQuestComponent__EndRecoverUserGameRecover(
    this->fields.__4__this,
    result,
    this->fields.questInfo,
    this->fields.nextAction,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestComponent___c__DisplayClass20_0___CheckQuestPlayable_b__14(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_2213CDC(this, *(_QWORD *)&result);
  ExRoomQuestComponent__EndRecoverUserGameRecover(
    this->fields.__4__this,
    result,
    this->fields.questInfo,
    this->fields.nextAction,
    v3);
}


void ExRoomQuestComponent___c__DisplayClass20_0___CheckQuestPlayable_b__17(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  ExRoomQuestComponent___c__DisplayClass20_0_o *v2; // x19
  RecoverDlgComponent_CallbackFunc_o *_9__18; // x22
  CommonUI_o *commomUI; // x20
  int32_t cost; // w21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_596AE46 & 1) == 0 )
  {
    sub_2213A60(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    this = (ExRoomQuestComponent___c__DisplayClass20_0_o *)sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__18__);
    byte_596AE46 = 1;
  }
  _9__18 = v2->fields.__9__18;
  commomUI = v2->fields.commomUI;
  cost = v2->fields.cost;
  if ( !_9__18 )
  {
    _9__18 = (RecoverDlgComponent_CallbackFunc_o *)sub_2213CCC(RecoverDlgComponent_CallbackFunc_TypeInfo);
    RecoverDlgComponent_CallbackFunc___ctor(
      _9__18,
      (Il2CppObject *)v2,
      Method_ExRoomQuestComponent___c__DisplayClass20_0__CheckQuestPlayable_b__18__,
      0);
    v2->fields.__9__18 = _9__18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__18, (int32_t)_9__18, v6, v7, v8, v9, v10, v11);
  }
  if ( !commomUI )
    sub_2213CDC(this, method);
  CommonUI__OpenApRecoverItemListDialog(commomUI, cost, _9__18, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomQuestComponent___c__DisplayClass20_0___CheckQuestPlayable_b__18(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_2213CDC(this, *(_QWORD *)&result);
  ExRoomQuestComponent__EndRecoverUserGameRecover(
    this->fields.__4__this,
    result,
    this->fields.questInfo,
    this->fields.nextAction,
    v3);
}


void ExRoomQuestComponent___c__DisplayClass20_0___CheckQuestPlayable_b__2(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *commomUI; // x20
  System_Action_o *v9; // x19

  if ( (byte_596AE44 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_2__CheckQuestPlayable_b__11__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass20_2_TypeInfo);
    byte_596AE44 = 1;
  }
  v5 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass20_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (commomUI = this->fields.commomUI,
        *(_DWORD *)(v5 + 16) = result,
        v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ExRoomQuestComponent___c__DisplayClass20_2__CheckQuestPlayable_b__11__,
          0),
        !commomUI) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseSvtFrameShortDlg(commomUI, v9, 0);
}


void ExRoomQuestComponent___c__DisplayClass20_0___CheckQuestPlayable_b__3(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *commomUI; // x20
  System_Action_o *v9; // x19

  if ( (byte_596AE45 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass20_3__CheckQuestPlayable_b__12__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass20_3_TypeInfo);
    byte_596AE45 = 1;
  }
  v5 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass20_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (commomUI = this->fields.commomUI,
        *(_DWORD *)(v5 + 16) = result,
        v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ExRoomQuestComponent___c__DisplayClass20_3__CheckQuestPlayable_b__12__,
          0),
        !commomUI) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseSvtFrameShortDlg(commomUI, v9, 0);
}


void ExRoomQuestComponent___c__DisplayClass20_0___CheckQuestPlayable_b__5(
        ExRoomQuestComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ExRoomQuestComponent__CheckQuestStartDialog(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.nextAction,
    v2);
}


void ExRoomQuestComponent___c__DisplayClass20_1___ctor(
        ExRoomQuestComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass20_1___CheckQuestPlayable_b__10(
        ExRoomQuestComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3
  Il2CppObject *Instance; // x19

  if ( (byte_596AE47 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    sub_2213A60(&StringLiteral_13262/*"ServantCombine"*/);
    byte_596AE47 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464916(v5, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v6 = Instance;
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_2213CDC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v5, (System_String_o *)StringLiteral_13262/*"ServantCombine"*/, 0);
      if ( v4 )
      {
        v6 = v4;
        v8 = 32;
LABEL_12:
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}


void ExRoomQuestComponent___c__DisplayClass20_2___ctor(
        ExRoomQuestComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass20_2___CheckQuestPlayable_b__11(
        ExRoomQuestComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  AvalonSceneManager_o *v8; // x0
  int32_t v9; // w1
  Il2CppObject *v10; // x19
  Il2CppObject *Instance; // x19

  if ( (byte_596AE48 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_13267/*"ServantEquipList"*/);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    sub_2213A60(&StringLiteral_13266/*"ServantEQCombine"*/);
    byte_596AE48 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464916(v5, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = (AvalonSceneManager_o *)Instance;
        v9 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v5, (System_String_o *)StringLiteral_13267/*"ServantEquipList"*/, 0);
      if ( v10 )
      {
        v8 = (AvalonSceneManager_o *)v10;
        v9 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_2213CDC(v6, v7);
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v5, (System_String_o *)StringLiteral_13266/*"ServantEQCombine"*/, 0);
      if ( v4 )
      {
        v8 = (AvalonSceneManager_o *)v4;
        v9 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(v8, v9, 1, (Il2CppObject *)v5, 0);
        return;
      }
      goto LABEL_14;
  }
}


void ExRoomQuestComponent___c__DisplayClass20_3___ctor(
        ExRoomQuestComponent___c__DisplayClass20_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass20_3___CheckQuestPlayable_b__12(
        ExRoomQuestComponent___c__DisplayClass20_3_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596AE49 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    byte_596AE49 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48464916(v4, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_2213CDC(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
  }
}


void ExRoomQuestComponent___c__DisplayClass21_0___ctor(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__0(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  void *Master_object; // x0
  const MethodInfo *v6; // x1
  QuestSkipConfirmDialog_ClickDelegate_o *_9__2; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  CommonUI_o *v14; // x22
  System_Action_o *_9__3; // x23
  int32_t questId; // w21
  int32_t phaseCnt; // w25
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_o *_9__11; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UserGameEntity_o *SelfUserGame; // x21
  ScrTerminalListTop_StormPodInfo_o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x23
  Il2CppObject *v36; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x25
  __int64 v38; // x2
  unsigned int v39; // w24
  struct System_Int32_array *itemIds; // x8
  BalanceConfig_c *v41; // x0
  int32_t v42; // w29
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *terminalList; // x23
  System_Action_o *nextAction; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  struct MapControl_QuestInfo_o *questInfo; // x8
  __int64 v50; // x1
  __int64 v51; // x2
  int32_t DiscountItemId; // w20
  ItemEntity_o *v53; // x22
  __int64 v54; // x2
  Il2CppObject *v55; // x21
  int32_t v56; // w25
  const MethodInfo *v57; // x2
  void *v58; // x20
  int32_t v59; // w22
  ScrollConfirmDialog_ClickDelegate_o *_9__6; // x21
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  __int64 v67; // x1
  __int64 v68; // x2
  UnityEngine_Object_o *v69; // x22
  QuestEntity_o *v70; // x8
  ScrollConfirmDialog_o *v71; // x19
  __int64 v72; // x1
  __int64 v73; // x2
  System_String_o *v74; // x22
  System_String_o *v75; // x23
  System_String_o *v76; // x24
  System_String_o *v77; // x20
  QuestEntity_o *questEntity; // x5
  int32_t cost; // w1
  UserGameEntity_o *v80; // x2
  ScrTerminalListTop_StormPodInfo_o *v81; // x3
  System_Action_o *v82; // x4
  System_String_o *QuestConfirmDialogString; // x21
  ScrollConfirmDialog_ClickDelegate_o *_9__9; // x20
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x2
  System_String_o *v92; // x22
  __int64 v93; // x1
  __int64 v94; // x2
  UnityEngine_Object_o *v95; // x21
  QuestEntity_o *v96; // x8
  ScrollConfirmDialog_o *v97; // x19
  System_String_o *QuestName; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  LocalizationManager_c *v101; // x8
  struct System_Int32_array *v102; // x8
  struct System_Int32_array *v103; // x8
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  void *v110; // x25
  int32_t num; // w26
  QuestConsumeItemEntity_o *v112; // x22
  __int64 v113; // x1
  __int64 v114; // x2
  System_String_o *v115; // x23
  __int64 v116; // x1
  __int64 v117; // x2
  UnityEngine_Object_o *v118; // x24
  QuestEntity_o *v119; // x8
  ScrollConfirmDialog_o *v120; // x19
  __int64 v121; // x1
  __int64 v122; // x2
  System_String_o *v123; // x24
  System_String_o *v124; // x25
  System_String_o *v125; // x26
  UserGameEntity_o *v126; // x20
  __int64 v127; // x21
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  struct System_String_o *name; // x1
  System_Action_o *_9__12; // x22
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  __int64 v142; // x1
  __int64 v143; // x2
  UnityEngine_Object_o *v144; // x22
  ScrollConfirmDialog_o *v145; // x22
  __int64 v146; // x1
  __int64 v147; // x2
  System_String_o *v148; // x23
  System_String_o *v149; // x26
  System_String_o *v150; // x24
  System_String_o *v151; // x25
  __int64 v152; // x2
  __int64 v153; // x8
  UIWidget_o *v154; // x21
  int32_t v155; // w0
  int32_t v156; // w20
  __int64 v157; // x8
  __int64 v158; // x1
  __int64 v159; // x2
  UnityEngine_Object_o *v160; // x23
  struct System_String_o *v161; // x1
  struct System_Int32_array *nums; // x8
  int32_t v163; // w8
  System_String_o *v164; // x23
  Il2CppObject *ItemConsumeString; // x0
  System_String_o *v166; // x0
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x1
  __int64 v170; // x2
  struct MapControl_QuestInfo_o *v171; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v172; // x23
  __int64 v173; // x2
  struct QuestEntity_o *v174; // x8
  __int64 v175; // x2
  __int64 v176; // x1
  __int64 v177; // x2
  UnityEngine_Object_o *v178; // x21
  QuestEntity_o *v179; // x8
  System_String_o *v180; // x21
  System_String_o *v181; // x23
  System_String_o *v182; // x24
  UserItemEntity_o *v183; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v184; // [xsp+28h] [xbp-88h] BYREF
  UserItemEntity_o *v185; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *v186; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v187; // [xsp+40h] [xbp-70h] BYREF
  QuestMessageEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596AE4A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ScrollConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&QuestSkipConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMessageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_2213A60(&ExRoomQuestComponent_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&ScrTerminalListTop_StormPodInfo_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__11__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__12__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__2__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__3__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__6__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__9__);
    sub_2213A60(&StringLiteral_11346/*"QUEST_CONFIRM_START"*/);
    sub_2213A60(&StringLiteral_11340/*"QUEST_CONFIRM_NO_BATTLE_CONSUME"*/);
    sub_2213A60(&StringLiteral_11341/*"QUEST_CONFIRM_NO_BATTLE_CONSUME_ICON"*/);
    sub_2213A60(&StringLiteral_11339/*"QUEST_CONFIRM_NO_BATTLE_CONFIRM"*/);
    sub_2213A60(&StringLiteral_11328/*"QUEST_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_44/*"\n\n"*/);
    sub_2213A60(&StringLiteral_5801/*"EVENT_EQUIP_SKILL_PARTS_QUEST_CONFIRM_RESET_MSG"*/);
    sub_2213A60(&StringLiteral_15854/*"VOTE_QUEST_CONFIRM_INFO"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_11342/*"QUEST_CONFIRM_NO_BATTLE_NO_CONSUME"*/);
    byte_596AE4A = 1;
  }
  v187 = 0;
  entity = 0;
  v185 = 0;
  v186 = 0;
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v183 = 0;
  v184 = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMessageMaster___);
  if ( !Master_object )
    goto LABEL_235;
  if ( QuestMessageMaster__TryGetEntity(
         (QuestMessageMaster_o *)Master_object,
         &entity,
         this->fields.questId,
         this->fields.phaseCnt + 1,
         0,
         0)
    && entity
    && entity->fields.displayType == 7 )
  {
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (QuestSkipConfirmDialog_ClickDelegate_o *)sub_2213CCC(QuestSkipConfirmDialog_ClickDelegate_TypeInfo);
      QuestSkipConfirmDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
    }
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (CommonUI_o *)Master_object;
    _9__3 = this->fields.__9__3;
    questId = this->fields.questId;
    phaseCnt = this->fields.phaseCnt;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__9__3,
        (int32_t)_9__3,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( v14 )
    {
      CommonUI__OpenQuestSkipConfirmDialog(v14, questId, phaseCnt + 1, _9__2, _9__3, 0);
      return;
    }
    goto LABEL_235;
  }
  Master_object = this->fields.questEntity;
  if ( !Master_object )
    goto LABEL_235;
  if ( !QuestEntity__HasFlag((QuestEntity_o *)Master_object, 2, 0) || this->fields.isMovie )
  {
    Master_object = this->fields.questEntity;
    if ( !Master_object )
      goto LABEL_235;
    if ( QuestEntity__GetConsumeType((QuestEntity_o *)Master_object, 0) == 4 )
    {
      _9__11 = this->fields.__9__11;
      if ( !_9__11 )
      {
        _9__11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__11,
          (Il2CppObject *)this,
          Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__11__,
          0);
        this->fields.__9__11 = _9__11;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__9__11,
          (int32_t)_9__11,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      v32 = (ScrTerminalListTop_StormPodInfo_o *)sub_2213CCC(ScrTerminalListTop_StormPodInfo_TypeInfo);
      ScrTerminalListTop_StormPodInfo___ctor(v32, 0);
      Master_object = this->fields.questEntity;
      if ( !Master_object )
        goto LABEL_235;
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(
                            (QuestEntity_o *)Master_object,
                            this->fields.isNotItemConsume,
                            0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v34);
      v36 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !ItemConsumeEntity
        || (v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            Master_object = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0),
            ((unsigned __int8)Master_object & 1) == 0) )
      {
LABEL_34:
        if ( !v32 )
          goto LABEL_235;
LABEL_35:
        if ( !System_String__IsNullOrEmpty(v32->fields.stormPodName, 0) )
        {
          Master_object = this->fields.__4__this;
          if ( !Master_object )
            goto LABEL_235;
          terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(
                                                   (ExRoomQuestComponent_o *)Master_object,
                                                   v6);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
          if ( UnityEngine_Object__op_Equality(terminalList, 0, 0) )
          {
            nextAction = _9__11;
LABEL_152:
            ActionExtensions__Call(nextAction, 0);
            return;
          }
          Master_object = this->fields.__4__this;
          if ( !Master_object )
            goto LABEL_235;
          Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
          if ( !Master_object )
            goto LABEL_235;
          questEntity = this->fields.questEntity;
          cost = this->fields.cost;
          v80 = SelfUserGame;
          v81 = v32;
          v82 = _9__11;
LABEL_91:
          ScrTerminalListTop__OpenStormPodConfirmDialog(
            (ScrTerminalListTop_o *)Master_object,
            cost,
            v80,
            v81,
            v82,
            questEntity,
            0,
            0);
          return;
        }
        goto LABEL_151;
      }
      v39 = 0;
      while ( 1 )
      {
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_235;
        if ( v39 >= LODWORD(itemIds->max_length) )
          goto LABEL_236;
        v41 = BalanceConfig_TypeInfo;
        v42 = itemIds->m_Items[v39];
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v38);
          v41 = BalanceConfig_TypeInfo;
        }
        if ( v42 == v41->static_fields->stormPodItemId )
          break;
        Master_object = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v39, 0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_34;
      }
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v38);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Master_object = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v38);
        Master_object = NetworkManager_TypeInfo;
      }
      v102 = ItemConsumeEntity->fields.itemIds;
      if ( !v102 )
        goto LABEL_235;
      if ( v39 >= LODWORD(v102->max_length) )
        goto LABEL_236;
      if ( !v36 )
        goto LABEL_235;
      Master_object = (void *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)v36,
                                &v185,
                                *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                                v102->m_Items[v39],
                                0);
      v103 = ItemConsumeEntity->fields.itemIds;
      if ( !v103 )
        goto LABEL_235;
      if ( v39 >= LODWORD(v103->max_length) )
LABEL_236:
        sub_2213CE4(Master_object);
      if ( !v37 )
        goto LABEL_235;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v37,
                        v103->m_Items[v39],
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v110 = Master_object;
      if ( v185 )
      {
        if ( !Master_object )
          goto LABEL_235;
        Master_object = (void *)ItemEntity__IsEnable((ItemEntity_o *)Master_object, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v185 )
            goto LABEL_235;
          num = v185->fields.num;
LABEL_185:
          if ( !v32 )
            goto LABEL_235;
          v161 = (struct System_String_o *)*((_QWORD *)v110 + 3);
          v32->fields.stormPodName = v161;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v32->fields,
            (int32_t)v161,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109);
          nums = ItemConsumeEntity->fields.nums;
          v32->fields.stormPodNum = num;
          if ( !nums )
            goto LABEL_235;
          if ( v39 < LODWORD(nums->max_length) )
          {
            v163 = nums->m_Items[v39];
            v32->fields.isNotItemConsume = this->fields.isNotItemConsume;
            v32->fields.stormPodCostNum = v163;
            goto LABEL_35;
          }
          goto LABEL_236;
        }
      }
      else if ( !Master_object )
      {
        goto LABEL_235;
      }
      num = 0;
      goto LABEL_185;
    }
    Master_object = this->fields.questEntity;
    if ( !Master_object )
      goto LABEL_235;
    if ( QuestEntity__GetConsumeType((QuestEntity_o *)Master_object, 0) != 1 )
      goto LABEL_151;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47, v48);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
    questInfo = this->fields.questInfo;
    if ( !questInfo || !Master_object )
      goto LABEL_235;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &v184,
            questInfo->fields.questId,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
      goto LABEL_151;
    Master_object = v184;
    if ( !v184 )
      goto LABEL_235;
    if ( !QuestExtensionEntity__GetDiscountItemId((QuestExtensionEntity_o *)v184, 0) )
      goto LABEL_151;
    Master_object = v184;
    if ( v184 )
    {
      DiscountItemId = QuestExtensionEntity__GetDiscountItemId((QuestExtensionEntity_o *)v184, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v50, v51);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        v53 = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                DiscountItemId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v55 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v54);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        Master_object = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v54);
          Master_object = NetworkManager_TypeInfo;
        }
        if ( v55 )
        {
          Master_object = (void *)UserItemMaster__TryGetEntity(
                                    (UserItemMaster_o *)v55,
                                    &v183,
                                    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                                    DiscountItemId,
                                    0);
          if ( !v183 )
            goto LABEL_145;
          if ( !v53 )
            goto LABEL_235;
          Master_object = (void *)ItemEntity__IsEnable(v53, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( !v183 )
              goto LABEL_235;
            v56 = v183->fields.num;
          }
          else
          {
LABEL_145:
            v56 = 0;
          }
          v126 = UserGameMaster__getSelfUserGame(0);
          v127 = sub_2213CCC(ScrTerminalListTop_StormPodInfo_TypeInfo);
          ScrTerminalListTop_StormPodInfo___ctor((ScrTerminalListTop_StormPodInfo_o *)v127, 0);
          if ( v53 )
          {
            if ( v127 )
            {
              name = v53->fields.name;
              *(_QWORD *)(v127 + 16) = name;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v127 + 16),
                (int32_t)name,
                v128,
                v129,
                v130,
                v131,
                v132,
                v133);
              *(_DWORD *)(v127 + 24) = v56;
              *(_DWORD *)(v127 + 28) = 0;
              _9__12 = this->fields.__9__12;
              *(_BYTE *)(v127 + 32) = 1;
              if ( !_9__12 )
              {
                _9__12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__12,
                  (Il2CppObject *)this,
                  Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__12__,
                  0);
                this->fields.__9__12 = _9__12;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.__9__12,
                  (int32_t)_9__12,
                  v136,
                  v137,
                  v138,
                  v139,
                  v140,
                  v141);
              }
              if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v127 + 16), 0) )
              {
                Master_object = this->fields.__4__this;
                if ( !Master_object )
                  goto LABEL_235;
                v160 = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(
                                                 (ExRoomQuestComponent_o *)Master_object,
                                                 v6);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v158, v159);
                if ( UnityEngine_Object__op_Equality(v160, 0, 0) )
                {
                  nextAction = _9__12;
                  goto LABEL_152;
                }
                Master_object = this->fields.__4__this;
                if ( !Master_object )
                  goto LABEL_235;
                Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
                if ( !Master_object )
                  goto LABEL_235;
                questEntity = this->fields.questEntity;
                cost = this->fields.cost;
                v80 = v126;
                v81 = (ScrTerminalListTop_StormPodInfo_o *)v127;
                v82 = _9__12;
                goto LABEL_91;
              }
LABEL_151:
              nextAction = this->fields.nextAction;
              goto LABEL_152;
            }
          }
        }
      }
    }
LABEL_235:
    sub_2213CDC(Master_object, v6);
  }
  Master_object = this->fields.questEntity;
  if ( !Master_object )
    goto LABEL_235;
  if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x80000000LL, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v57);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15854/*"VOTE_QUEST_CONFIRM_INFO"*/, 0);
    if ( !Master_object )
      goto LABEL_235;
    Master_object = System_String__Split((System_String_o *)Master_object, 0x2Cu, 0, 0);
    if ( !Master_object )
      goto LABEL_235;
    v58 = Master_object;
    if ( !*((_DWORD *)Master_object + 6) )
      goto LABEL_236;
    v59 = System_Int32__Parse(*((System_String_o **)Master_object + 4), 0);
    _9__6 = this->fields.__9__6;
    if ( !_9__6 )
    {
      _9__6 = (ScrollConfirmDialog_ClickDelegate_o *)sub_2213CCC(ScrollConfirmDialog_ClickDelegate_TypeInfo);
      ScrollConfirmDialog_ClickDelegate___ctor(
        _9__6,
        (Il2CppObject *)this,
        Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__6__,
        0);
      this->fields.__9__6 = _9__6;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__9__6,
        (int32_t)_9__6,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    Master_object = this->fields.__4__this;
    if ( v59 )
    {
      if ( !Master_object )
        goto LABEL_235;
      v69 = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67, v68);
      if ( UnityEngine_Object__op_Inequality(v69, 0, 0) )
      {
        Master_object = this->fields.__4__this;
        if ( !Master_object )
          goto LABEL_235;
        Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
        if ( !Master_object )
          goto LABEL_235;
        v70 = this->fields.questEntity;
        if ( !v70 )
          goto LABEL_235;
        v71 = (ScrollConfirmDialog_o *)*((_QWORD *)Master_object + 37);
        Master_object = QuestEntity__getQuestName(v70, 0);
        if ( *((_DWORD *)v58 + 6) < 4u )
          goto LABEL_236;
        v74 = (System_String_o *)Master_object;
        v75 = (System_String_o *)*((_QWORD *)v58 + 5);
        v76 = (System_String_o *)*((_QWORD *)v58 + 6);
        v77 = (System_String_o *)*((_QWORD *)v58 + 7);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72, v73);
        Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11328/*"QUEST_CONFIRM_CANCEL"*/, 0);
        if ( !v71 )
          goto LABEL_235;
        ScrollConfirmDialog__OpenImageDlg(v71, v74, v75, v76, v77, (System_String_o *)Master_object, _9__6, 8, 0);
      }
    }
    else
    {
      if ( !Master_object )
        goto LABEL_235;
      v144 = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v142, v143);
      if ( UnityEngine_Object__op_Inequality(v144, 0, 0) )
      {
        Master_object = this->fields.__4__this;
        if ( !Master_object )
          goto LABEL_235;
        Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
        if ( !Master_object || !this->fields.questEntity )
          goto LABEL_235;
        v145 = (ScrollConfirmDialog_o *)*((_QWORD *)Master_object + 37);
        Master_object = QuestEntity__getQuestName(this->fields.questEntity, 0);
        if ( *((_DWORD *)v58 + 6) < 4u )
          goto LABEL_236;
        v148 = (System_String_o *)Master_object;
        v149 = (System_String_o *)*((_QWORD *)v58 + 7);
        v150 = (System_String_o *)*((_QWORD *)v58 + 5);
        v151 = (System_String_o *)*((_QWORD *)v58 + 6);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v146, v147);
        Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11328/*"QUEST_CONFIRM_CANCEL"*/, 0);
        if ( !v145 )
          goto LABEL_235;
        ScrollConfirmDialog__OpenDecideDlg(
          v145,
          v148,
          v150,
          v151,
          v149,
          (System_String_o *)Master_object,
          _9__6,
          8,
          0.0,
          1,
          0);
        Master_object = this->fields.__4__this;
        if ( !Master_object )
          goto LABEL_235;
        Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
        if ( !Master_object )
          goto LABEL_235;
        v153 = *((_QWORD *)Master_object + 37);
        if ( !v153 )
          goto LABEL_235;
        v154 = *(UIWidget_o **)(v153 + 184);
        Master_object = ExRoomQuestComponent_TypeInfo;
        if ( !*(&ExRoomQuestComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ExRoomQuestComponent_TypeInfo, v6, v152);
        if ( !v154 )
          goto LABEL_235;
        UIWidget__set_width(v154, ExRoomQuestComponent_TypeInfo->static_fields->VOTE_QUEST_CONFIRM_MESSAGE_WIDTH, 0);
        if ( *((_DWORD *)v58 + 6) <= 4u )
          goto LABEL_236;
        v155 = System_Int32__Parse(*((System_String_o **)v58 + 8), 0);
        if ( v155 >= 1 )
        {
          v156 = v155;
          Master_object = this->fields.__4__this;
          if ( !Master_object )
            goto LABEL_235;
          Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
          if ( !Master_object )
            goto LABEL_235;
          v157 = *((_QWORD *)Master_object + 37);
          if ( !v157 )
            goto LABEL_235;
          Master_object = *(void **)(v157 + 184);
          if ( !Master_object )
            goto LABEL_235;
          UILabel__set_fontSize((UILabel_o *)Master_object, v156, 0);
        }
      }
    }
    return;
  }
  Master_object = this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_235;
  QuestConfirmDialogString = ExRoomQuestComponent__GetQuestConfirmDialogString(
                               (ExRoomQuestComponent_o *)Master_object,
                               this->fields.questInfo,
                               v57);
  _9__9 = this->fields.__9__9;
  if ( !_9__9 )
  {
    _9__9 = (ScrollConfirmDialog_ClickDelegate_o *)sub_2213CCC(ScrollConfirmDialog_ClickDelegate_TypeInfo);
    ScrollConfirmDialog_ClickDelegate___ctor(
      _9__9,
      (Il2CppObject *)this,
      Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__9__,
      0);
    this->fields.__9__9 = _9__9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__9, (int32_t)_9__9, v85, v86, v87, v88, v89, v90);
  }
  Master_object = this->fields.questEntity;
  if ( !Master_object )
    goto LABEL_235;
  if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x2000, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v91);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11342/*"QUEST_CONFIRM_NO_BATTLE_NO_CONSUME"*/, 0);
    if ( !Master_object )
      goto LABEL_235;
    v92 = (System_String_o *)Master_object;
    if ( *((int *)Master_object + 4) >= 1 )
    {
      if ( !QuestConfirmDialogString )
        goto LABEL_235;
      if ( QuestConfirmDialogString->fields._stringLength >= 1 )
        v92 = System_String__Concat_75694928(
                (System_String_o *)Master_object,
                (System_String_o *)StringLiteral_44/*"\n\n"*/,
                QuestConfirmDialogString,
                0);
    }
    Master_object = this->fields.__4__this;
    if ( !Master_object )
      goto LABEL_235;
    v95 = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93, v94);
    if ( UnityEngine_Object__op_Inequality(v95, 0, 0) )
    {
      Master_object = this->fields.__4__this;
      if ( !Master_object )
        goto LABEL_235;
      Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
      if ( !Master_object )
        goto LABEL_235;
      v96 = this->fields.questEntity;
      if ( !v96 )
        goto LABEL_235;
      v97 = (ScrollConfirmDialog_o *)*((_QWORD *)Master_object + 37);
      QuestName = QuestEntity__getQuestName(v96, 0);
      v101 = LocalizationManager_TypeInfo;
LABEL_231:
      v180 = QuestName;
      if ( !*(&v101->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v101, v99, v100);
      v181 = LocalizationManager__Get((System_String_o *)StringLiteral_11339/*"QUEST_CONFIRM_NO_BATTLE_CONFIRM"*/, 0);
      v182 = LocalizationManager__Get((System_String_o *)StringLiteral_11346/*"QUEST_CONFIRM_START"*/, 0);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11328/*"QUEST_CONFIRM_CANCEL"*/, 0);
      if ( !v97 )
        goto LABEL_235;
      ScrollConfirmDialog__OpenDecideDlg(
        v97,
        v180,
        v92,
        v181,
        v182,
        (System_String_o *)Master_object,
        _9__9,
        8,
        0.0,
        1,
        0);
    }
  }
  else
  {
    Master_object = this->fields.questEntity;
    if ( !Master_object )
      goto LABEL_235;
    Master_object = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Master_object, this->fields.isNotItemConsume, 0);
    if ( !this->fields.questEntity )
      goto LABEL_235;
    v112 = (QuestConsumeItemEntity_o *)Master_object;
    if ( QuestEntity__HasFlag(this->fields.questEntity, 0x8000000000000LL, 0) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v113, v114);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11341/*"QUEST_CONFIRM_NO_BATTLE_CONSUME_ICON"*/, 0);
      if ( !this->fields.__4__this )
        goto LABEL_235;
      v115 = (System_String_o *)Master_object;
      v118 = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(this->fields.__4__this, v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v116, v117);
      if ( UnityEngine_Object__op_Inequality(v118, 0, 0) )
      {
        Master_object = this->fields.__4__this;
        if ( !Master_object )
          goto LABEL_235;
        Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
        if ( !Master_object )
          goto LABEL_235;
        v119 = this->fields.questEntity;
        if ( !v119 )
          goto LABEL_235;
        v120 = (ScrollConfirmDialog_o *)*((_QWORD *)Master_object + 37);
        v123 = QuestEntity__getQuestName(v119, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121, v122);
        v124 = LocalizationManager__Get((System_String_o *)StringLiteral_11339/*"QUEST_CONFIRM_NO_BATTLE_CONFIRM"*/, 0);
        v125 = LocalizationManager__Get((System_String_o *)StringLiteral_11346/*"QUEST_CONFIRM_START"*/, 0);
        Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_11328/*"QUEST_CONFIRM_CANCEL"*/, 0);
        if ( !v120 )
          goto LABEL_235;
        ScrollConfirmDialog__OpenItemIconDlg(
          v120,
          v123,
          v115,
          v112,
          QuestConfirmDialogString,
          v124,
          v125,
          (System_String_o *)Master_object,
          _9__9,
          8,
          0);
      }
      return;
    }
    if ( v112 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v113, v114);
      v164 = LocalizationManager__Get((System_String_o *)StringLiteral_11340/*"QUEST_CONFIRM_NO_BATTLE_CONSUME"*/, 0);
      ItemConsumeString = (Il2CppObject *)QuestConsumeItemEntity__GetItemConsumeString(v112, 0);
      v166 = System_String__Format(v164, ItemConsumeString, 0);
    }
    else
    {
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v113, v114);
      if ( !OptionManager__GetPreBattleFormationSetting(0) )
        goto LABEL_151;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v169, v170);
      v166 = LocalizationManager__Get((System_String_o *)StringLiteral_11342/*"QUEST_CONFIRM_NO_BATTLE_NO_CONSUME"*/, 0);
    }
    v92 = v166;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v167, v168);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
    v171 = this->fields.questInfo;
    if ( !v171 )
      goto LABEL_235;
    v172 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = v171->fields._WarInfo_k__BackingField;
    if ( !Master_object )
      goto LABEL_235;
    Master_object = (void *)MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)Master_object, 0);
    if ( !v172 )
      goto LABEL_235;
    Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              v172,
                              &v187,
                              (int32_t)Master_object,
                              (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      Master_object = v187;
      if ( !v187 )
        goto LABEL_235;
      Master_object = (void *)EventDetailEntity__IsEventEquipSkillParts((EventDetailEntity_o *)v187, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v173);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestResetMaster___);
        v174 = this->fields.questEntity;
        if ( !v174 || !Master_object )
          goto LABEL_235;
        Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &v186,
                                  v174->fields.id,
                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v175);
          Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_5801/*"EVENT_EQUIP_SKILL_PARTS_QUEST_CONFIRM_RESET_MSG"*/, 0);
          v92 = (System_String_o *)Master_object;
          QuestConfirmDialogString = **(System_String_o ***)(qword_5984390 + 184);
        }
      }
    }
    if ( !v92 )
      goto LABEL_235;
    if ( v92->fields._stringLength >= 1 )
    {
      if ( !QuestConfirmDialogString )
        goto LABEL_235;
      if ( QuestConfirmDialogString->fields._stringLength >= 1 )
        v92 = System_String__Concat_75694928(v92, (System_String_o *)StringLiteral_44/*"\n\n"*/, QuestConfirmDialogString, 0);
    }
    Master_object = this->fields.__4__this;
    if ( !Master_object )
      goto LABEL_235;
    v178 = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v176, v177);
    if ( UnityEngine_Object__op_Inequality(v178, 0, 0) )
    {
      Master_object = this->fields.__4__this;
      if ( !Master_object )
        goto LABEL_235;
      Master_object = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)Master_object, v6);
      if ( !Master_object )
        goto LABEL_235;
      v179 = this->fields.questEntity;
      if ( !v179 )
        goto LABEL_235;
      v97 = (ScrollConfirmDialog_o *)*((_QWORD *)Master_object + 37);
      QuestName = QuestEntity__getQuestName(v179, 0);
      v101 = LocalizationManager_TypeInfo;
      goto LABEL_231;
    }
  }
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__1(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  QuestEntity_o *questEntity; // x0
  struct System_Action_o *questInformationDisp; // x8

  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_7;
  questEntity = (QuestEntity_o *)QuestEntity__HasFlag(questEntity, 0x40000000, 0);
  if ( ((unsigned __int8)questEntity & 1) != 0 )
  {
    questEntity = (QuestEntity_o *)EventTutorialMaster__IsTutorialAvailable(this->fields.eventId, 53, 0, 0, 0, 0, 0);
    if ( ((unsigned __int8)questEntity & 1) != 0 )
    {
      EventTutorialMaster__CheckTutorial(this->fields.eventId, 53, this->fields.questInformationDisp, 0, 0, 0, 0, 0);
      return;
    }
  }
  questInformationDisp = this->fields.questInformationDisp;
  if ( !questInformationDisp )
LABEL_7:
    sub_2213CDC(questEntity, method);
  ((void (__fastcall *)(intptr_t, intptr_t))questInformationDisp->fields.invoke_impl)(
    questInformationDisp->fields.method_code,
    questInformationDisp->fields.method);
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__11(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExRoomQuestComponent___c__DisplayClass21_0_o *v3; // x19
  Il2CppObject *_4__this; // x20
  System_Action_o *v5; // x19
  const MethodInfo *v6; // x2

  v3 = this;
  if ( (byte_596AE50 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ExRoomQuestComponent___c__DisplayClass21_0_o *)sub_2213A60(&Method_ExRoomQuestComponent_RefreshTerminalScene__);
    byte_596AE50 = 1;
  }
  if ( !v3->fields.__4__this )
    goto LABEL_8;
  if ( ExRoomQuestComponent__IsQuestValid((ExRoomQuestComponent_o *)this, v3->fields.questInfo, v2) )
  {
    ActionExtensions__Call(v3->fields.nextAction, 0);
    return;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, _4__this, Method_ExRoomQuestComponent_RefreshTerminalScene__, 0);
  if ( !_4__this )
LABEL_8:
    sub_2213CDC(this, method);
  ExRoomQuestComponent__OpenQuestTimeOverNoticeDialog((ExRoomQuestComponent_o *)this, v5, v6);
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__12(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExRoomQuestComponent___c__DisplayClass21_0_o *v3; // x19
  Il2CppObject *_4__this; // x20
  System_Action_o *v5; // x19
  const MethodInfo *v6; // x2

  v3 = this;
  if ( (byte_596AE51 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ExRoomQuestComponent___c__DisplayClass21_0_o *)sub_2213A60(&Method_ExRoomQuestComponent_RefreshTerminalScene__);
    byte_596AE51 = 1;
  }
  if ( !v3->fields.__4__this )
    goto LABEL_8;
  if ( ExRoomQuestComponent__IsQuestValid((ExRoomQuestComponent_o *)this, v3->fields.questInfo, v2) )
  {
    ActionExtensions__Call(v3->fields.nextAction, 0);
    return;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, _4__this, Method_ExRoomQuestComponent_RefreshTerminalScene__, 0);
  if ( !_4__this )
LABEL_8:
    sub_2213CDC(this, method);
  ExRoomQuestComponent__OpenQuestTimeOverNoticeDialog((ExRoomQuestComponent_o *)this, v5, v6);
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__2(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_47A29F8 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_596AE4B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_1__CheckQuestStartDialog_b__4__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass21_1_TypeInfo);
    byte_596AE4B = 1;
  }
  v5 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_ExRoomQuestComponent___c__DisplayClass21_1__CheckQuestStartDialog_b__4__,
          0),
        !Instance) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseQuestSkipConfirmDialog((CommonUI_o *)Instance, v16, 0);
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__3(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__5; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596AE4C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__5__);
    byte_596AE4C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__5, (int32_t)_9__5, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_2213CDC(Instance, v4);
  CommonUI__CloseQuestSkipConfirmDialog(v5, _9__5, 0);
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__5(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  ExRoomQuestComponent_o *_4__this; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *terminalList; // x20

  if ( (byte_596AE4D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AE4D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList(_4__this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( !UnityEngine_Object__op_Equality(terminalList, 0, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (ExRoomQuestComponent_o *)ExRoomQuestComponent__get_terminalList(_4__this, method);
      if ( _4__this )
      {
        ScrTerminalListTop__SkipQuest(
          (ScrTerminalListTop_o *)_4__this,
          this->fields.questId,
          this->fields.phaseCnt + 1,
          0);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(_4__this, method);
  }
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__6(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *_4__this; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *terminalList; // x21
  ScrollConfirmDialog_o *v17; // x19
  System_Action_o *v18; // x21

  if ( (byte_596AE4E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_2__CheckQuestStartDialog_b__7__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass21_2_TypeInfo);
    byte_596AE4E = 1;
  }
  v5 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass21_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  _4__this = this->fields.__4__this;
  *(_BYTE *)(v5 + 16) = isDecide;
  if ( !_4__this )
    goto LABEL_13;
  terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)_4__this, v7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Inequality(terminalList, 0, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)_4__this, v7);
      if ( _4__this )
      {
        v17 = (ScrollConfirmDialog_o *)*((_QWORD *)_4__this + 37);
        v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)v5,
          Method_ExRoomQuestComponent___c__DisplayClass21_2__CheckQuestStartDialog_b__7__,
          0);
        if ( v17 )
        {
          ScrollConfirmDialog__Close_43776688(v17, v18, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_2213CDC(_4__this, v7);
  }
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__8(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.nextAction, 0);
}


void ExRoomQuestComponent___c__DisplayClass21_0___CheckQuestStartDialog_b__9(
        ExRoomQuestComponent___c__DisplayClass21_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *_4__this; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *terminalList; // x21
  ScrollConfirmDialog_o *v17; // x19
  System_Action_o *v18; // x21

  if ( (byte_596AE4F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_3__CheckQuestStartDialog_b__10__);
    sub_2213A60(&ExRoomQuestComponent___c__DisplayClass21_3_TypeInfo);
    byte_596AE4F = 1;
  }
  v5 = sub_2213CCC(ExRoomQuestComponent___c__DisplayClass21_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  _4__this = this->fields.__4__this;
  *(_BYTE *)(v5 + 16) = isDecide;
  if ( !_4__this )
    goto LABEL_13;
  terminalList = (UnityEngine_Object_o *)ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)_4__this, v7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Inequality(terminalList, 0, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = ExRoomQuestComponent__get_terminalList((ExRoomQuestComponent_o *)_4__this, v7);
      if ( _4__this )
      {
        v17 = (ScrollConfirmDialog_o *)*((_QWORD *)_4__this + 37);
        v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)v5,
          Method_ExRoomQuestComponent___c__DisplayClass21_3__CheckQuestStartDialog_b__10__,
          0);
        if ( v17 )
        {
          ScrollConfirmDialog__Close_43776688(v17, v18, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_2213CDC(_4__this, v7);
  }
}


void ExRoomQuestComponent___c__DisplayClass21_1___ctor(
        ExRoomQuestComponent___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass21_1___CheckQuestStartDialog_b__4(
        ExRoomQuestComponent___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  struct ExRoomQuestComponent___c__DisplayClass21_0_o *CS___8__locals1; // x8

  if ( this->fields.isDecide )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      sub_2213CDC(this, method);
    ActionExtensions__Call(CS___8__locals1->fields.nextAction, 0);
  }
}


void ExRoomQuestComponent___c__DisplayClass21_2___ctor(
        ExRoomQuestComponent___c__DisplayClass21_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass21_2___CheckQuestStartDialog_b__7(
        ExRoomQuestComponent___c__DisplayClass21_2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestEntity_o *questEntity; // x0
  __int64 v5; // x1
  struct ExRoomQuestComponent___c__DisplayClass21_0_o *CS___8__locals2; // x8
  System_String_o *v7; // x20
  Il2CppObject *QuestName; // x0
  System_String_o *v9; // x20
  struct ExRoomQuestComponent___c__DisplayClass21_0_o *v10; // x23
  CommonUI_o *v11; // x19
  System_Action_o *_9__8; // x22
  System_String_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596AE52 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__8__);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_15855/*"VOTE_QUEST_CONFIRM_RESULT_MESSAGE"*/);
    byte_596AE52 = 1;
  }
  if ( this->fields.isDecide )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    questEntity = (QuestEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15855/*"VOTE_QUEST_CONFIRM_RESULT_MESSAGE"*/, 0);
    CS___8__locals2 = this->fields.CS___8__locals2;
    if ( !CS___8__locals2 )
      goto LABEL_14;
    v7 = (System_String_o *)questEntity;
    questEntity = CS___8__locals2->fields.questEntity;
    if ( !questEntity )
      goto LABEL_14;
    QuestName = (Il2CppObject *)QuestEntity__getQuestName(questEntity, 0);
    v9 = System_String__Format(v7, QuestName, 0);
    questEntity = (QuestEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = this->fields.CS___8__locals2;
    if ( !v10 )
      goto LABEL_14;
    v11 = (CommonUI_o *)questEntity;
    _9__8 = v10->fields.__9__8;
    v13 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__8 )
    {
      _9__8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__8,
        (Il2CppObject *)v10,
        Method_ExRoomQuestComponent___c__DisplayClass21_0__CheckQuestStartDialog_b__8__,
        0);
      v10->fields.__9__8 = _9__8;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.__9__8, (int32_t)_9__8, v14, v15, v16, v17, v18, v19);
    }
    if ( !v11 )
LABEL_14:
      sub_2213CDC(questEntity, v5);
    CommonUI__OpenNotificationDialog(v11, v13, v9, _9__8, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
  }
}


void ExRoomQuestComponent___c__DisplayClass21_3___ctor(
        ExRoomQuestComponent___c__DisplayClass21_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomQuestComponent___c__DisplayClass21_3___CheckQuestStartDialog_b__10(
        ExRoomQuestComponent___c__DisplayClass21_3_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExRoomQuestComponent___c__DisplayClass21_3_o *v3; // x19
  struct ExRoomQuestComponent___c__DisplayClass21_0_o *CS___8__locals3; // x8
  struct ExRoomQuestComponent___c__DisplayClass21_0_o *v5; // x8
  Il2CppObject *_4__this; // x20
  System_Action_o *v7; // x19
  const MethodInfo *v8; // x2

  v3 = this;
  if ( (byte_596AE53 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ExRoomQuestComponent___c__DisplayClass21_3_o *)sub_2213A60(&Method_ExRoomQuestComponent_RefreshTerminalScene__);
    byte_596AE53 = 1;
  }
  if ( v3->fields.isDecide )
  {
    CS___8__locals3 = v3->fields.CS___8__locals3;
    if ( !CS___8__locals3 || !CS___8__locals3->fields.__4__this )
      goto LABEL_13;
    this = (ExRoomQuestComponent___c__DisplayClass21_3_o *)ExRoomQuestComponent__IsQuestValid(
                                                             (ExRoomQuestComponent_o *)this,
                                                             CS___8__locals3->fields.questInfo,
                                                             v2);
    v5 = v3->fields.CS___8__locals3;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v5 )
      {
        ActionExtensions__Call(v5->fields.nextAction, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(this, method);
    }
    if ( !v5 )
      goto LABEL_13;
    _4__this = (Il2CppObject *)v5->fields.__4__this;
    v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v7, _4__this, Method_ExRoomQuestComponent_RefreshTerminalScene__, 0);
    if ( !_4__this )
      goto LABEL_13;
    ExRoomQuestComponent__OpenQuestTimeOverNoticeDialog((ExRoomQuestComponent_o *)this, v7, v8);
  }
}