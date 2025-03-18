void __fastcall FollowerSelectItemListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager___c_c *v5; // x0
  Il2CppObject *v6; // x19
  System_Func_T__TResult__o *v7; // x20
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4C1CF55 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1C3B764(&System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo, v2);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, v3);
    sub_1C3B764(&FollowerSelectItemListViewManager___c_TypeInfo, v4);
    byte_4C1CF55 = 1;
  }
  v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  if ( !FollowerSelectItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager___c_TypeInfo);
    v5 = FollowerSelectItemListViewManager___c_TypeInfo;
  }
  v6 = (Il2CppObject *)v5->static_fields->__9;
  v7 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__TypeInfo);
  System_Func_Int32Enum__object____ctor(v7, v6, Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__, 0LL);
  FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT = (struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v7;
  sub_1C3B708(FollowerSelectItemListViewManager_TypeInfo->static_fields);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->lastSelectedQuestId = -1LL;
  static_fields->REFRESH_DARK_COLOR = (struct UnityEngine_Color_o)xmmword_C0D9F0;
}


void __fastcall FollowerSelectItemListViewManager___ctor(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__AdjustButton(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *changeSkillButton; // x0
  UnityEngine_Component_o *sortKindButton; // x20
  UISprite_o *changeSkillButtonSprite; // x21
  Il2CppObject *Component_object; // x19

  if ( (byte_4C1CF2A & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1C3B764(&StringLiteral_17810/*"commandCode/setStatus"*/, v4);
    sub_1C3B764(&StringLiteral_17871/*"connectionGroupName"*/, v5);
    sub_1C3B764(&StringLiteral_18013/*"csIBM423"*/, v6);
    byte_4C1CF2A = 1;
  }
  changeSkillButton = (UnityEngine_Component_o *)this->fields.changeSkillButton;
  if ( !changeSkillButton )
    goto LABEL_11;
  sortKindButton = (UnityEngine_Component_o *)this->fields.sortKindButton;
  changeSkillButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(changeSkillButton, 0LL);
  if ( !changeSkillButton )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSkillButton, 1, 0LL);
  changeSkillButtonSprite = this->fields.changeSkillButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeSkillButtonSprite, (System_String_o *)StringLiteral_18013/*"csIBM423"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.bonusFilterSprite, (System_String_o *)StringLiteral_17871/*"connectionGroupName"*/, 0LL);
  changeSkillButton = (UnityEngine_Component_o *)this->fields.bonusFilterSprite;
  if ( !changeSkillButton
    || (changeSkillButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))changeSkillButton->klass[2]._1.typeMetadataHandle)(
                                                         changeSkillButton,
                                                         changeSkillButton->klass[2]._1.interopData),
        !sortKindButton)
    || (Component_object = UnityEngine_Component__GetComponent_object_(
                             sortKindButton,
                             (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UISprite___),
        changeSkillButton = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                         (UISprite_o *)Component_object,
                                                         (System_String_o *)StringLiteral_17810/*"commandCode/setStatus"*/,
                                                         0LL),
        !Component_object) )
  {
LABEL_11:
    sub_1C3B9C0(changeSkillButton, method);
  }
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[33].method)(
    Component_object,
    Component_object->klass->vtable[34].methodPtr);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerSelectItemListViewManager__ChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0
  bool isInput; // w21
  const MethodInfo *v7; // x2
  struct ListViewSort_o *sort; // x8

  classButtonControl = this->fields.classButtonControl;
  isInput = this->fields.isInput;
  this->fields.isInput = 0;
  if ( !classButtonControl
    || (ClassButtonControlComponent__setCursor(classButtonControl, classPos, 0LL),
        this->fields.isInput = isInput,
        FollowerSelectItemListViewManager__SortClass(this, classPos, v7),
        (sort = this->fields.sort) == 0LL) )
  {
    sub_1C3B9C0(classButtonControl, *(_QWORD *)&classPos);
  }
  return sort->fields.sortKind != 11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__CloseSortDialog(
        FollowerSelectItemListViewManager_o *this,
        bool isResult,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C1CF47 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isResult);
    byte_4C1CF47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v6);
  CommonUI__CloseOtherUserSortDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isResult )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__CreateList(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  System_Collections_Generic_List_object__o *v55; // x21
  System_Collections_Generic_List_object__o *v56; // x21
  System_Collections_Generic_List_object__o *v57; // x21
  __int64 ReturnTypeByQuestId; // x0
  __int64 v59; // x1
  FollowerSelectItemListViewManager_c *v60; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct ListViewSort_o **p_sort; // x24
  const MethodInfo *v63; // x4
  int32_t InitialDisplayClass; // w21
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x25
  EventUpValSetupInfo_o *v67; // x21
  __int64 v68; // x8
  __int64 v69; // x21
  unsigned __int64 v70; // x20
  int32_t v71; // w0
  ClassButtonControlComponent_o *classButtonControl; // x21
  ClassButtonControlComponent_CallbackFunc_o *v73; // x24
  ClassButtonControlComponent_o *v74; // x21
  const MethodInfo *v75; // x2
  QuestPhaseEntity_o *v76; // x21
  long double v77; // q0
  __int64 v78; // x8
  __int64 v79; // x0
  Il2CppObject *MasterData_object; // x23
  FollowerInfo_array *QuestFollowerList; // x24
  int v82; // w20
  int32_t v83; // w28
  QuestRestrictionInfo_o *v84; // x21
  bool IsMyServantOrNpcRestriction_41939672; // w29
  BalanceConfig_c *v86; // x0
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_39011304; // w21
  int max_length; // w8
  QuestRestrictionInfo_o *v90; // x20
  int v91; // w22
  FollowerInfo_o *v92; // x26
  ServantLeaderInfo_o *ServantLeaderInfo; // x25
  int32_t v94; // w0
  System_Int32_array *v95; // x21
  int32_t Rarity; // w0
  DataMasterBase_TMaster__TEntity__PKType__o *v97; // x20
  bool IsRecommendedFollower; // w23
  System_Collections_Generic_List_object__o *v99; // x29
  char v100; // w20
  Il2CppObject *v101; // x0
  __int64 v102; // x25
  __int64 v103; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v104; // x21
  int32_t ClassBoardBaseId; // w28
  Il2CppObject *v106; // x21
  ClassBoardInfo_o *v107; // x25
  Il2CppObject *v108; // x21
  struct System_Object_array *items; // x8
  _QWORD *v110; // x9
  __int64 size; // x10
  Il2CppClass **v112; // x0
  FollowerSelectItemListViewManager_c *v113; // x0
  bool v114; // w19
  _BOOL4 v115; // w8
  _BOOL4 v116; // w9
  int32_t followerClassId; // w21
  EventUpValSetupInfo_o *v118; // x23
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x20
  bool isServantEquipBonusFilterEnable; // w27
  bool v121; // w28
  bool isBonusFilterEnable; // w29
  FollowerSelectItemListViewItem_o *v123; // x25
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x8
  __int64 v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  __int64 v131; // x8
  __int64 v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x8
  QuestPhaseEntity_o *v136; // x19
  int v137; // w20
  bool v138; // w8
  QuestRestrictionInfo_o *v139; // x19
  Il2CppClass *klass; // x20
  int namespaze; // w8
  unsigned int v142; // w24
  void **v143; // x8
  Il2CppObject *v144; // x0
  Il2CppObject *v145; // x21
  __int64 v146; // x28
  BalanceConfig_c *v147; // x0
  struct BalanceConfig_StaticFields *v148; // x9
  int32_t FixEventSupportDeckNum; // w21
  int32_t FixMainSupportDeckNum; // w25
  int32_t deckPriority; // w25
  unsigned __int64 v152; // x22
  System_Collections_Generic_Dictionary_int__int__o *v153; // x21
  int32_t v154; // w23
  bool v155; // w28
  bool v156; // w29
  FollowerSelectItemListViewItem_o *v157; // x26
  __int64 v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  __int64 v161; // x8
  struct BalanceConfig_StaticFields *v162; // x8
  int32_t v163; // w21
  int32_t v164; // w26
  int32_t v165; // w26
  unsigned __int64 v166; // x23
  int32_t v167; // w19
  int32_t v168; // w22
  bool v169; // w24
  bool v170; // w25
  int32_t v171; // w20
  bool v172; // w28
  int v173; // w29
  FollowerSelectItemListViewItem_o *v174; // x21
  __int64 v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  __int64 v178; // x8
  Il2CppClass *v179; // x26
  unsigned __int64 namespaze_low; // x8
  unsigned __int64 v181; // x29
  __int64 v182; // x9
  __int64 v183; // x9
  void **v184; // x8
  FollowerInfo_o *v185; // x8
  Il2CppObject *v186; // x0
  __int64 v187; // x19
  BalanceConfig_c *v188; // x0
  struct BalanceConfig_StaticFields *v189; // x9
  int32_t v190; // w21
  int32_t v191; // w24
  int32_t v192; // w24
  unsigned __int64 v193; // x20
  System_Collections_Generic_Dictionary_int__int__o *v194; // x23
  int32_t v195; // w28
  bool v196; // w22
  bool v197; // w25
  bool v198; // w19
  FollowerSelectItemListViewItem_o *v199; // x21
  __int64 v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  __int64 v203; // x8
  struct BalanceConfig_StaticFields *v204; // x8
  int32_t v205; // w21
  int32_t v206; // w24
  int32_t v207; // w24
  unsigned __int64 v208; // x20
  int32_t v209; // w21
  _BOOL4 v210; // w10
  _BOOL4 v211; // w11
  FollowerInfo_o *v212; // x22
  _BOOL4 v213; // w9
  EventUpValSetupInfo_o *v214; // x19
  int32_t v215; // w27
  bool v216; // w26
  System_Collections_Generic_Dictionary_int__int__o *v217; // x29
  int v218; // w23
  bool v219; // w25
  bool v220; // w28
  FollowerSelectItemListViewItem_o *v221; // x0
  int32_t v222; // w1
  Il2CppObject *v223; // x21
  __int64 v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  __int64 v227; // x8
  Il2CppClass *v228; // x20
  unsigned __int64 v229; // x8
  unsigned __int64 v230; // x23
  Il2CppType *p_byval_arg; // x28
  __int64 v232; // x9
  __int64 v233; // x9
  __int64 v234; // x26
  __int64 v235; // x8
  __int64 v236; // x8
  __int64 v237; // x8
  __int64 v238; // x21
  __int64 v239; // x27
  int32_t v240; // w22
  FollowerInfo_o *v241; // x26
  bool v242; // w19
  bool v243; // w25
  EventUpValSetupInfo_o *v244; // x29
  System_Collections_Generic_Dictionary_int__int__o *v245; // x24
  FollowerSelectItemListViewItem_o *v246; // x21
  __int64 v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  __int64 v250; // x8
  const MethodInfo *v251; // x2
  FollowerSelectItemListViewManager_c *v252; // x0
  const MethodInfo *v253; // x2
  const MethodInfo *v254; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v256; // x0
  bool isServantBonusFilterEnable; // [xsp+8h] [xbp-1B8h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-1A0h]
  int32_t supportDeckId; // [xsp+38h] [xbp-188h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // [xsp+48h] [xbp-178h]
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionarya; // [xsp+48h] [xbp-178h]
  UserFollowMaster_o *v262; // [xsp+78h] [xbp-148h]
  struct System_Collections_Generic_List_ListViewItem__o **p_recommendItemList; // [xsp+80h] [xbp-140h]
  unsigned int v264; // [xsp+8Ch] [xbp-134h]
  __int64 v267; // [xsp+98h] [xbp-128h]
  bool HasFlag_40925964; // [xsp+98h] [xbp-128h]
  __int64 v269; // [xsp+A0h] [xbp-120h]
  int v270; // [xsp+A0h] [xbp-120h]
  struct System_Collections_Generic_List_ListViewItem__o **p_originalItemList; // [xsp+A8h] [xbp-118h]
  ClassBoardClassMaster_o *Master_object; // [xsp+B0h] [xbp-110h]
  bool v273; // [xsp+B0h] [xbp-110h]
  ClassBoardClassMaster_o *v274; // [xsp+B0h] [xbp-110h]
  EventUpValSetupInfo_o *v275; // [xsp+B8h] [xbp-108h]
  Il2CppClass *v276; // [xsp+B8h] [xbp-108h]
  EventUpValSetupInfo_o *v277; // [xsp+B8h] [xbp-108h]
  bool v278; // [xsp+C0h] [xbp-100h]
  unsigned int v279; // [xsp+C0h] [xbp-100h]
  Il2CppClass *v280; // [xsp+C0h] [xbp-100h]
  int32_t v281; // [xsp+C8h] [xbp-F8h]
  EventUpValSetupInfo_o *v282; // [xsp+C8h] [xbp-F8h]
  EventUpValSetupInfo_o *v283; // [xsp+C8h] [xbp-F8h]
  EventUpValSetupInfo_o *v284; // [xsp+C8h] [xbp-F8h]
  bool isReleasedClassBoard; // [xsp+D0h] [xbp-F0h]
  FollowerInfo_o *v286; // [xsp+D0h] [xbp-F0h]
  FollowerInfo_o *v287; // [xsp+D0h] [xbp-F0h]
  QuestPhaseEntity_o *v288; // [xsp+D8h] [xbp-E8h]
  QuestPhaseEntity_o *v289; // [xsp+D8h] [xbp-E8h]
  QuestPhaseEntity_o *v290; // [xsp+D8h] [xbp-E8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v291; // [xsp+E0h] [xbp-E0h]
  FollowerInfo_o **v292; // [xsp+E0h] [xbp-E0h]
  FollowerInfo_o **v293; // [xsp+E0h] [xbp-E0h]
  _BOOL4 followerInfo; // [xsp+E8h] [xbp-D8h]
  FollowerInfo_o *followerInfoc; // [xsp+E8h] [xbp-D8h]
  int32_t followerInfoa; // [xsp+E8h] [xbp-D8h]
  FollowerInfo_o *followerInfob; // [xsp+E8h] [xbp-D8h]
  struct System_Collections_Generic_List_ListViewItem__o **p_mixItemList; // [xsp+F0h] [xbp-D0h]
  UserFollowMaster_o *v299; // [xsp+F0h] [xbp-D0h]
  bool IsNoneSupportFriendPoint; // [xsp+104h] [xbp-BCh]
  int32_t index; // [xsp+118h] [xbp-A8h]
  int32_t indexc; // [xsp+118h] [xbp-A8h]
  FollowerInfo_o *indexd; // [xsp+118h] [xbp-A8h]
  int32_t indexe; // [xsp+118h] [xbp-A8h]
  int32_t indexa; // [xsp+118h] [xbp-A8h]
  bool indexb; // [xsp+118h] [xbp-A8h]
  FollowerSelectItemListViewManager_o *v311; // [xsp+120h] [xbp-A0h]
  Il2CppObject *v312; // [xsp+128h] [xbp-98h] BYREF
  Il2CppObject *v313; // [xsp+130h] [xbp-90h] BYREF
  Il2CppObject *v314; // [xsp+138h] [xbp-88h] BYREF
  UserClassBoardSquareEntity_o *v315; // [xsp+140h] [xbp-80h] BYREF
  bool isWhole; // [xsp+14Ch] [xbp-74h] BYREF
  Il2CppObject *v317; // [xsp+150h] [xbp-70h] BYREF
  NpcFollowerEntity_o *entity; // [xsp+158h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v319; // 0:x0.16

  if ( (byte_4C1CF2C & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1C3B764(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v9);
    sub_1C3B764(&ClassBoardInfo_TypeInfo, v10);
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, v11);
    sub_1C3B764(&CondType_TypeInfo, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserFollowMaster___, v16);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMaster_EventQuestMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v20);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_1C3B764(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v22);
    sub_1C3B764(&Method_DataManager_GetMaster_UserFollowerMaster___, v23);
    sub_1C3B764(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v24);
    sub_1C3B764(&DataManager_TypeInfo, v25);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v26);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1C3B764(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v28);
    sub_1C3B764(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v29);
    sub_1C3B764(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v30);
    sub_1C3B764(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v31);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v32);
    sub_1C3B764(&EventUpValSetupInfo_TypeInfo, v33);
    sub_1C3B764(&FollowerSelectItemListViewItem_TypeInfo, v34);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v35);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v36);
    sub_1C3B764(&int___TypeInfo, v37);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, v38);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardInfo__Add__, v39);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__, v40);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardInfo___ctor__, v41);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v42);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v43);
    sub_1C3B764(&System_Collections_Generic_List_ListViewItem__TypeInfo, v44);
    sub_1C3B764(&System_Collections_Generic_List_ClassBoardInfo__TypeInfo, v45);
    sub_1C3B764(&System_Math_TypeInfo, v46);
    sub_1C3B764(&NetworkManager_TypeInfo, v47);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
    sub_1C3B764(&ServantLeaderInfo___TypeInfo, v49);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v50);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v52);
    sub_1C3B764(&StringLiteral_3346/*"CHECK_BIRTHDAY_MESSAGE"*/, v53);
    sub_1C3B764(&StringLiteral_1/*""*/, v54);
    byte_4C1CF2C = 1;
  }
  v317 = 0LL;
  entity = 0LL;
  isWhole = 0;
  v314 = 0LL;
  v315 = 0LL;
  v312 = 0LL;
  v313 = 0LL;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C3B708(&this->fields.questRestrictionInfo);
  v55 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.mixItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v55;
  p_mixItemList = &this->fields.mixItemList;
  sub_1C3B708(&this->fields.mixItemList);
  v56 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.originalItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v56;
  p_originalItemList = &this->fields.originalItemList;
  sub_1C3B708(&this->fields.originalItemList);
  v57 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.recommendItemList = (struct System_Collections_Generic_List_ListViewItem__o *)v57;
  p_recommendItemList = &this->fields.recommendItemList;
  sub_1C3B708(&this->fields.recommendItemList);
  ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questId, 0LL);
  v60 = FollowerSelectItemListViewManager_TypeInfo;
  v264 = ReturnTypeByQuestId;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v60 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v60->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT )
    goto LABEL_336;
  this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                 LIST_VIEW_SORT->fields.original_method_info,
                                                 v264,
                                                 *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
  p_sort = &this->fields.sort;
  ReturnTypeByQuestId = sub_1C3B708(&this->fields.sort);
  if ( !this->fields.sort )
    goto LABEL_336;
  InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                          this,
                          questId,
                          questPhase,
                          this->fields.sort->fields.isRequestLoad,
                          v63);
  static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  static_fields->followerClassId = InitialDisplayClass;
  static_fields->lastSelectedQuestId = questId;
  static_fields->lastSelectedQuestPhase = questPhase;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
    this->fields.isGetRecommendSupport = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                 (EventQuestMaster_o *)ReturnTypeByQuestId,
                                 questId,
                                 questPhase,
                                 0LL,
                                 0LL);
  v67 = (EventUpValSetupInfo_o *)sub_1C3B9B0(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40351540(v67, OngoingQuestTargetEventIds, 0, questId, questPhase, 0LL);
  this->fields.setupInfo = v67;
  ReturnTypeByQuestId = sub_1C3B708(&this->fields.setupInfo);
  if ( !OngoingQuestTargetEventIds )
    goto LABEL_336;
  if ( *(_QWORD *)&OngoingQuestTargetEventIds->max_length )
  {
    ReturnTypeByQuestId = (__int64)UnityEngine_PlayerPrefs__GetString_71081024(
                                     (System_String_o *)StringLiteral_3346/*"CHECK_BIRTHDAY_MESSAGE"*/,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    if ( *(int *)(ReturnTypeByQuestId + 16) < 1 )
      goto LABEL_24;
    ReturnTypeByQuestId = (__int64)System_String__Split((System_String_o *)ReturnTypeByQuestId, 0x2Cu, 0, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    v68 = *(_QWORD *)(ReturnTypeByQuestId + 24);
    v69 = ReturnTypeByQuestId;
    if ( (int)v68 < 1 )
    {
LABEL_24:
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 18, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 19, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 20, 0, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 40, 1, 0LL);
      ReturnTypeByQuestId = (__int64)*p_sort;
      if ( !*p_sort )
        goto LABEL_336;
      ListViewSort__SetFilter((ListViewSort_o *)ReturnTypeByQuestId, 41, 1, 0LL);
    }
    else
    {
      v70 = 0LL;
      while ( 1 )
      {
        if ( v70 >= (unsigned int)v68 )
          goto LABEL_337;
        v71 = System_Int32__Parse(*(System_String_o **)(v69 + 32 + 8 * v70), 0LL);
        ReturnTypeByQuestId = System_Linq_Enumerable__Contains_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)OngoingQuestTargetEventIds,
                                v71,
                                (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          break;
        LODWORD(v68) = *(_DWORD *)(v69 + 24);
        if ( (__int64)++v70 >= (int)v68 )
          goto LABEL_24;
      }
    }
  }
  ReturnTypeByQuestId = (__int64)*p_sort;
  if ( !*p_sort )
    goto LABEL_336;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v73 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C3B9B0(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v73,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_336;
  ClassButtonControlComponent__init(classButtonControl, v73, questId, questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (__int64)FollowerSelectItemListViewManager_TypeInfo;
  v74 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v74 )
    goto LABEL_336;
  ClassButtonControlComponent__setCursor(
    v74,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, OngoingQuestTargetEventIds, v75);
  ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  ReturnTypeByQuestId = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                   0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    ReturnTypeByQuestId = (__int64)this->fields.bonusFilterKindLabel;
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    UILabel__set_text((UILabel_o *)ReturnTypeByQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.isRefreshBtnHide = 0;
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId
    || (ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___)) == 0 )
  {
LABEL_336:
    sub_1C3B9C0(ReturnTypeByQuestId, v59);
  }
  v76 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)ReturnTypeByQuestId, questId, questPhase, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v76 )
    goto LABEL_331;
  IsNoneSupportFriendPoint = QuestPhaseEntity__IsNoneSupportFriendPoint(v76, 0LL);
  v78 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
    v78 = sub_1C8D640(v77);
  v79 = *(_QWORD *)(*(_QWORD *)(v78 + 192) + 16LL);
  if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
    v79 = sub_1C8D640(v77);
  ReturnTypeByQuestId = **(_QWORD **)(v79 + 184);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ReturnTypeByQuestId,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  v288 = v76;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)ReturnTypeByQuestId,
                        questId,
                        questPhase,
                        0LL);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  v82 = *(_DWORD *)(ReturnTypeByQuestId + 48);
  ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  v83 = *(_DWORD *)(ReturnTypeByQuestId + 52);
  if ( v82 < 1 )
  {
    v84 = questRestrictionInfo;
    IsMyServantOrNpcRestriction_41939672 = 0;
  }
  else
  {
    v84 = questRestrictionInfo;
    if ( !questRestrictionInfo )
    {
      IsMyServantOrNpcRestriction_41939672 = 0;
      followerInfo = 0;
      goto LABEL_60;
    }
    IsMyServantOrNpcRestriction_41939672 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41939672(
                                             questRestrictionInfo,
                                             v83,
                                             0LL);
  }
  followerInfo = 0;
  if ( v84 && v82 <= 0 )
    followerInfo = QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_60:
  v86 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v86 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v86->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_39011304 = CondType__IsQuestClear_39011304(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v291 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( !QuestFollowerList )
    goto LABEL_336;
  max_length = QuestFollowerList->max_length;
  v90 = questRestrictionInfo;
  v311 = this;
  if ( max_length >= 1 )
  {
    v91 = 0;
    index = 0;
    isReleasedClassBoard = IsQuestClear_39011304;
    v275 = (EventUpValSetupInfo_o *)MasterData_object;
    v281 = v83;
    v278 = IsMyServantOrNpcRestriction_41939672;
    do
    {
      if ( v91 >= (unsigned int)max_length )
        goto LABEL_337;
      if ( !v90 )
        goto LABEL_336;
      v92 = QuestFollowerList->m_Items[v91];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v90->fields.questId, 0LL);
      if ( !v92 )
        goto LABEL_336;
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v92, 0, ReturnTypeByQuestId, 0LL);
      v94 = FollowerInfo__GetReturnTypeByQuestId(v90->fields.questId, 0LL);
      ReturnTypeByQuestId = (__int64)FollowerInfo__GetNpcServantIndividualityFull(v92, 0, v94, 0LL);
      if ( !ServantLeaderInfo )
        goto LABEL_336;
      v95 = (System_Int32_array *)ReturnTypeByQuestId;
      Rarity = ServantLeaderInfo__getRarity(ServantLeaderInfo, 0LL);
      ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_41921264(
                              v90,
                              &isWhole,
                              v95,
                              Rarity,
                              ServantLeaderInfo->fields.lv,
                              v83,
                              3,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
        goto LABEL_135;
      if ( IsMyServantOrNpcRestriction_41939672 )
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_41942672(v90, v95, v83, 0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
          goto LABEL_135;
      }
      if ( v92->fields.isFixedNpc || followerInfo && v92->fields.isMySvtOrNpc )
        goto LABEL_135;
      if ( !MasterData_object )
        goto LABEL_336;
      if ( NpcFollowerMaster__TryGetEntity(
             (NpcFollowerMaster_o *)MasterData_object,
             &entity,
             v92->fields.userId,
             questId,
             questPhase,
             0LL) )
      {
        ReturnTypeByQuestId = (__int64)entity;
        v97 = v291;
        if ( !entity )
          goto LABEL_336;
        IsRecommendedFollower = NpcFollowerEntity__IsRecommendedFollower(entity, 0LL);
      }
      else
      {
        v97 = v291;
        IsRecommendedFollower = 0;
      }
      v99 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v99,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardInfo___ctor__);
      if ( !v97 )
        goto LABEL_336;
      ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetEntity(
                              v97,
                              &v317,
                              v92->fields.npcFollowerSvtId,
                              (const MethodInfo_329D3F0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v317 )
          goto LABEL_336;
        ReturnTypeByQuestId = NpcServantFollowerEntity__IsNotClassBoard((int32_t)v317[7].monitor, 0LL);
        if ( (ReturnTypeByQuestId & 1) != 0
          || (ReturnTypeByQuestId = QuestPhaseEntity__IsNotClassBoard(v288, 0LL), (ReturnTypeByQuestId & 1) != 0) )
        {
          v100 = 1;
          goto LABEL_113;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        v101 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
        v103 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v102 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        v104 = (DataMasterBase_TMaster__TEntity__PKType__o *)v101;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v319.fields.currentCryptoKey = v103;
        *(_QWORD *)&v319.fields.fakeValue = v102;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v319, 0LL);
        if ( !v104 )
          goto LABEL_336;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         v104,
                                         ReturnTypeByQuestId,
                                         (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId || !Master_object )
          goto LABEL_336;
        ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(
                             Master_object,
                             *(_DWORD *)(ReturnTypeByQuestId + 80),
                             0LL);
        v106 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v59);
          byte_4C1C955 = 1;
        }
        ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v106 )
          goto LABEL_336;
        ReturnTypeByQuestId = UserClassBoardSquareMaster__TryGetEntity(
                                (UserClassBoardSquareMaster_o *)v106,
                                &v315,
                                *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                                ClassBoardBaseId,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) != 0 )
        {
          v107 = (ClassBoardInfo_o *)sub_1C3B9B0(ClassBoardInfo_TypeInfo);
          ClassBoardInfo___ctor(v107, 0LL);
          if ( !v107 )
            goto LABEL_336;
          v107->fields.classBoardBaseId = ClassBoardBaseId;
          if ( !v315 )
            goto LABEL_336;
          ReturnTypeByQuestId = (__int64)v315->fields.classBoardSquareIds;
          if ( !ReturnTypeByQuestId )
            goto LABEL_336;
          v108 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          v107->fields.squareIds = (struct System_Int32_array *)sub_1C3B8A0(v108, int___TypeInfo);
          sub_1C3B8A0(v108, int___TypeInfo);
          sub_1C3B708(&v107->fields.squareIds);
          v107->fields.releasedClassIds = ClassBoardClassMaster__GetOpenClassIdArrayFromBaseId(
                                            Master_object,
                                            ClassBoardBaseId,
                                            0LL);
          ReturnTypeByQuestId = sub_1C3B708(&v107->fields.releasedClassIds);
          if ( !v99 )
            goto LABEL_336;
          items = v99->fields._items;
          v110 = Method_System_Collections_Generic_List_ClassBoardInfo__Add__;
          ++v99->fields._version;
          if ( !items )
            goto LABEL_336;
          size = v99->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v99,
              (Il2CppObject *)v107,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
          }
          else
          {
            v112 = &items->obj.klass + size;
            v99->fields._size = size + 1;
            v112[4] = (Il2CppClass *)v107;
            sub_1C3B708(v112 + 4);
          }
          v100 = 0;
          goto LABEL_114;
        }
      }
      v100 = 0;
LABEL_113:
      if ( !v99 )
        goto LABEL_336;
LABEL_114:
      v92->fields.userClassBoardInfo = (struct ClassBoardInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                        v99,
                                                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_ClassBoardInfo__ToArray__);
      sub_1C3B708(&v92->fields.userClassBoardInfo);
      v113 = FollowerSelectItemListViewManager_TypeInfo;
      v114 = IsRecommendedFollower;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v113 = FollowerSelectItemListViewManager_TypeInfo;
      }
      v115 = this->fields.isBonusFilterEnable;
      v116 = this->fields.isServantBonusFilterEnable;
      followerClassId = v113->static_fields->followerClassId;
      v118 = this->fields.setupInfo;
      if ( (v100 & 1) != 0 )
        classBoardMaxDictionary = 0LL;
      else
        classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
      isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
      v121 = v116;
      isBonusFilterEnable = v115;
      classBoardMaxNumDictionary = classBoardMaxDictionary;
      v90 = questRestrictionInfo;
      v123 = (FollowerSelectItemListViewItem_o *)sub_1C3B9B0(FollowerSelectItemListViewItem_TypeInfo);
      FollowerSelectItemListViewItem___ctor(
        v123,
        index,
        0,
        v92,
        followerClassId,
        friendPointUpVal,
        friendPointUpMaxVal,
        friendPointCampaignEntityList,
        isBonusFilterEnable,
        v121,
        isServantEquipBonusFilterEnable,
        v114,
        v118,
        questRestrictionInfo,
        0,
        0,
        0,
        classBoardMaxNumDictionary,
        isReleasedClassBoard,
        0,
        IsNoneSupportFriendPoint,
        0LL);
      ReturnTypeByQuestId = (__int64)*p_mixItemList;
      if ( !*p_mixItemList )
        goto LABEL_336;
      v124 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v83 = v281;
      IsMyServantOrNpcRestriction_41939672 = v278;
      v125 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v124 )
        goto LABEL_336;
      v126 = *(int *)(ReturnTypeByQuestId + 24);
      this = v311;
      MasterData_object = (Il2CppObject *)v275;
      if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v123,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
      }
      else
      {
        v127 = v124 + 8 * v126;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v126 + 1;
        *(_QWORD *)(v127 + 32) = v123;
        sub_1C3B708(v127 + 32);
      }
      ReturnTypeByQuestId = (__int64)*p_originalItemList;
      if ( !*p_originalItemList )
        goto LABEL_336;
      v128 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v129 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v128 )
        goto LABEL_336;
      v130 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v130 >= *(_DWORD *)(v128 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v123,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
      }
      else
      {
        v131 = v128 + 8 * v130;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v130 + 1;
        *(_QWORD *)(v131 + 32) = v123;
        sub_1C3B708(v131 + 32);
      }
      ReturnTypeByQuestId = (__int64)*p_recommendItemList;
      if ( !*p_recommendItemList )
        goto LABEL_336;
      v132 = *(_QWORD *)(ReturnTypeByQuestId + 16);
      v133 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(ReturnTypeByQuestId + 28);
      if ( !v132 )
        goto LABEL_336;
      v134 = *(int *)(ReturnTypeByQuestId + 24);
      if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
          (Il2CppObject *)v123,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
      }
      else
      {
        v135 = v132 + 8 * v134;
        *(_DWORD *)(ReturnTypeByQuestId + 24) = v134 + 1;
        *(_QWORD *)(v135 + 32) = v123;
        ReturnTypeByQuestId = sub_1C3B708(v135 + 32);
      }
      ++index;
LABEL_135:
      max_length = QuestFollowerList->max_length;
      ++v91;
    }
    while ( v91 < max_length );
  }
  if ( v90 )
  {
    v136 = v288;
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction(v90, 0LL) )
    {
      ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      v137 = *(_DWORD *)(ReturnTypeByQuestId + 48);
      ReturnTypeByQuestId = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      if ( v137 >= 1 )
      {
        v138 = !QuestRestrictionInfo__IsSelectableNormalSupport(
                  questRestrictionInfo,
                  *(_DWORD *)(ReturnTypeByQuestId + 52),
                  0LL);
        goto LABEL_147;
      }
    }
  }
  else
  {
    v136 = v288;
  }
  v138 = 0;
LABEL_147:
  this->fields.isRefreshBtnHide = v138;
  if ( !v138 && !v136->fields.isNpcOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v314,
                            (const MethodInfo_329D4D0 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    v139 = questRestrictionInfo;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v314 )
        goto LABEL_336;
      klass = v314[1].klass;
      if ( klass )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v142 = 0;
          v276 = v314[1].klass;
          do
          {
            if ( v142 >= namespaze )
              goto LABEL_337;
            v143 = &klass->_1.image + (int)v142;
            ReturnTypeByQuestId = (__int64)v143[4];
            v292 = (FollowerInfo_o **)(v143 + 4);
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( v142 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_337;
            if ( !*v292 )
              goto LABEL_336;
            ReturnTypeByQuestId = (__int64)(*v292)->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            v269 = *(_QWORD *)(ReturnTypeByQuestId + 24);
            v144 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
            if ( v144 )
            {
              v145 = v144;
              v146 = sub_1C3B8A0(v144, int___TypeInfo);
              if ( !v146 )
              {
                sub_1C3BC80(v145);
LABEL_338:
                sub_1C3BC80(v145);
LABEL_339:
                v256 = sub_1C3B9E4();
                sub_1C3B88C(v256, 0LL);
              }
            }
            else
            {
              v146 = 0LL;
            }
            v147 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v147 = BalanceConfig_TypeInfo;
            }
            v148 = v147->static_fields;
            FixMainSupportDeckNum = v148->FixMainSupportDeckNum;
            FixEventSupportDeckNum = v148->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_64187756(FixMainSupportDeckNum, FixEventSupportDeckNum, 0LL);
            v289 = (QuestPhaseEntity_o *)v146;
            if ( (int)v269 >= 1 )
            {
              deckPriority = ReturnTypeByQuestId;
              v152 = 0LL;
              v267 = v146 + 32;
              do
              {
                if ( !*p_originalItemList )
                  goto LABEL_336;
                if ( v142 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_337;
                if ( !v146 )
                  goto LABEL_336;
                if ( v152 >= *(unsigned int *)(v146 + 24) )
                  goto LABEL_337;
                indexc = (*p_originalItemList)->fields._size;
                v282 = this->fields.setupInfo;
                v153 = this->fields.classBoardMaxDictionary;
                v154 = *(_DWORD *)(v267 + 4 * v152);
                followerInfoc = *v292;
                v155 = this->fields.isServantEquipBonusFilterEnable;
                v156 = this->fields.isServantBonusFilterEnable;
                v273 = this->fields.isBonusFilterEnable;
                v157 = (FollowerSelectItemListViewItem_o *)sub_1C3B9B0(FollowerSelectItemListViewItem_TypeInfo);
                FollowerSelectItemListViewItem___ctor(
                  v157,
                  indexc,
                  0,
                  followerInfoc,
                  0,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v273,
                  v156,
                  v155,
                  0,
                  v282,
                  v139,
                  1,
                  v154,
                  deckPriority,
                  v153,
                  1,
                  0,
                  IsNoneSupportFriendPoint,
                  0LL);
                ReturnTypeByQuestId = (__int64)this->fields.originalItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_336;
                v158 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v159 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v158 )
                  goto LABEL_336;
                v160 = *(int *)(ReturnTypeByQuestId + 24);
                v146 = (__int64)v289;
                if ( (unsigned int)v160 >= *(_DWORD *)(v158 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    (Il2CppObject *)v157,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
                }
                else
                {
                  v161 = v158 + 8 * v160;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v160 + 1;
                  *(_QWORD *)(v161 + 32) = v157;
                  ReturnTypeByQuestId = sub_1C3B708(v161 + 32);
                }
                ++v152;
                --deckPriority;
              }
              while ( (unsigned int)v269 != v152 );
            }
            followerInfoa = 0;
            v283 = (EventUpValSetupInfo_o *)(v146 + 32);
            v279 = v142;
            while ( 1 )
            {
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
              }
              v162 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
              if ( followerInfoa >= v162->SupportDeckMemberMax )
                break;
              if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
              {
                j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
                v162 = BalanceConfig_TypeInfo->static_fields;
              }
              v164 = v162->FixMainSupportDeckNum;
              v163 = v162->FixEventSupportDeckNum;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              ReturnTypeByQuestId = System_Math__Max_64187756(v164, v163, 0LL);
              if ( (int)v269 >= 1 )
              {
                v165 = ReturnTypeByQuestId;
                v166 = 0LL;
                while ( *p_mixItemList )
                {
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  v167 = (*p_mixItemList)->fields._size;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( v142 >= LODWORD(klass->_1.namespaze) )
                    goto LABEL_337;
                  if ( !v146 )
                    goto LABEL_336;
                  if ( v166 >= *(unsigned int *)(v146 + 24) )
                    goto LABEL_337;
                  v168 = v167;
                  indexd = *v292;
                  v169 = this->fields.isServantEquipBonusFilterEnable;
                  v170 = this->fields.isServantBonusFilterEnable;
                  v171 = *((_DWORD *)&v283->klass + v166);
                  v172 = this->fields.isBonusFilterEnable;
                  v173 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                  classBoardMaxNumDictionarya = v311->fields.classBoardMaxDictionary;
                  v139 = questRestrictionInfo;
                  setupInfo = v311->fields.setupInfo;
                  this = v311;
                  v174 = (FollowerSelectItemListViewItem_o *)sub_1C3B9B0(FollowerSelectItemListViewItem_TypeInfo);
                  FollowerSelectItemListViewItem___ctor(
                    v174,
                    v168,
                    v173 - followerInfoa,
                    indexd,
                    followerInfoa,
                    friendPointUpVal,
                    friendPointUpMaxVal,
                    friendPointCampaignEntityList,
                    v172,
                    v170,
                    v169,
                    0,
                    setupInfo,
                    questRestrictionInfo,
                    1,
                    v171,
                    v165,
                    classBoardMaxNumDictionarya,
                    1,
                    0,
                    IsNoneSupportFriendPoint,
                    0LL);
                  ReturnTypeByQuestId = (__int64)v311->fields.mixItemList;
                  if ( !ReturnTypeByQuestId )
                    goto LABEL_336;
                  v175 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                  v176 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                  ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                  if ( !v175 )
                    goto LABEL_336;
                  v177 = *(int *)(ReturnTypeByQuestId + 24);
                  if ( (unsigned int)v177 >= *(_DWORD *)(v175 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                      (Il2CppObject *)v174,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v178 = v175 + 8 * v177;
                    *(_DWORD *)(ReturnTypeByQuestId + 24) = v177 + 1;
                    *(_QWORD *)(v178 + 32) = v174;
                    ReturnTypeByQuestId = sub_1C3B708(v178 + 32);
                  }
                  v146 = (__int64)v289;
                  klass = v276;
                  v142 = v279;
                  ++v166;
                  --v165;
                  if ( (unsigned int)v269 == v166 )
                    goto LABEL_204;
                }
                goto LABEL_336;
              }
LABEL_204:
              ++followerInfoa;
            }
            namespaze = (int)klass->_1.namespaze;
            ++v142;
          }
          while ( (int)v142 < namespaze );
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    ReturnTypeByQuestId = DataMasterBase_object__object__long___TryGetSingleEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                            &v313,
                            (const MethodInfo_329D4D0 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !v313 )
        goto LABEL_336;
      v179 = v313[1].klass;
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                       questId,
                                       (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      HasFlag_40925964 = QuestEntity__HasFlag_40925964(
                           (QuestEntity_o *)ReturnTypeByQuestId,
                           0x8000000LL,
                           questPhase,
                           0LL);
      ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_336;
      ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)ReturnTypeByQuestId,
                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      v262 = (UserFollowMaster_o *)ReturnTypeByQuestId;
      if ( !v179 )
        goto LABEL_336;
      namespaze_low = (unsigned __int64)v179->_1.namespaze;
      if ( (int)namespaze_low >= 1 )
      {
        v181 = 0LL;
        v270 = 0;
        v280 = v179;
        do
        {
          namespaze_low = (unsigned int)namespaze_low;
          if ( HasFlag_40925964 )
          {
            if ( v181 >= (unsigned int)namespaze_low )
              goto LABEL_337;
            v182 = *((_QWORD *)&v179->_1.byval_arg.data + v181);
            if ( !v182 )
              goto LABEL_336;
            if ( *(_DWORD *)(v182 + 36) == 5 )
            {
              ReturnTypeByQuestId = (__int64)v262;
              if ( !v262 )
                goto LABEL_336;
              ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v262, *(_QWORD *)(v182 + 16), 0LL);
              if ( (ReturnTypeByQuestId & 1) == 0 )
                goto LABEL_282;
              namespaze_low = LODWORD(v179->_1.namespaze);
            }
          }
          else
          {
            if ( v181 >= (unsigned int)namespaze_low )
              goto LABEL_337;
            v183 = *((_QWORD *)&v179->_1.byval_arg.data + v181);
            if ( !v183 )
              goto LABEL_336;
            if ( *(_DWORD *)(v183 + 36) == 5 )
              goto LABEL_282;
          }
          if ( v181 >= namespaze_low )
            goto LABEL_337;
          v184 = &v179->_1.image + v181;
          ReturnTypeByQuestId = (__int64)v184[4];
          v293 = (FollowerInfo_o **)(v184 + 4);
          if ( !ReturnTypeByQuestId )
            goto LABEL_336;
          FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
          ReturnTypeByQuestId = sub_1C3B80C(int___TypeInfo, 0LL);
          if ( v181 >= LODWORD(v179->_1.namespaze) )
            goto LABEL_337;
          v185 = *v293;
          if ( !*v293 )
            goto LABEL_336;
          if ( v264 )
          {
            ReturnTypeByQuestId = (__int64)v185->fields.eventSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
          }
          else
          {
            ReturnTypeByQuestId = (__int64)v185->fields.mainSupportDeckIds;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
          }
          followerInfob = (FollowerInfo_o *)*(unsigned int *)(ReturnTypeByQuestId + 24);
          v186 = System_Array__Clone((System_Array_o *)ReturnTypeByQuestId, 0LL);
          if ( v186 )
          {
            v145 = v186;
            v187 = sub_1C3B8A0(v186, int___TypeInfo);
            if ( !v187 )
              goto LABEL_338;
          }
          else
          {
            v187 = 0LL;
          }
          v188 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v188 = BalanceConfig_TypeInfo;
          }
          v189 = v188->static_fields;
          v191 = v189->FixMainSupportDeckNum;
          v190 = v189->FixEventSupportDeckNum;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          ReturnTypeByQuestId = System_Math__Max_64187756(v191, v190, 0LL);
          v290 = (QuestPhaseEntity_o *)v187;
          if ( (int)followerInfob >= 1 )
          {
            v192 = ReturnTypeByQuestId;
            v193 = 0LL;
            v274 = (ClassBoardClassMaster_o *)(v187 + 32);
            while ( 1 )
            {
              if ( !*p_originalItemList )
                goto LABEL_336;
              if ( v181 >= LODWORD(v179->_1.namespaze) )
                break;
              if ( !v187 )
                goto LABEL_336;
              if ( v193 >= *(unsigned int *)(v187 + 24) )
                break;
              indexe = (*p_originalItemList)->fields._size;
              v277 = this->fields.setupInfo;
              v194 = this->fields.classBoardMaxDictionary;
              v195 = *((_DWORD *)&v274->klass + v193);
              v286 = *v293;
              v196 = this->fields.isServantEquipBonusFilterEnable;
              v197 = this->fields.isServantBonusFilterEnable;
              v198 = this->fields.isBonusFilterEnable;
              v199 = (FollowerSelectItemListViewItem_o *)sub_1C3B9B0(FollowerSelectItemListViewItem_TypeInfo);
              FollowerSelectItemListViewItem___ctor(
                v199,
                indexe,
                0,
                v286,
                0,
                friendPointUpVal,
                friendPointUpMaxVal,
                friendPointCampaignEntityList,
                v198,
                v197,
                v196,
                0,
                v277,
                questRestrictionInfo,
                0,
                v195,
                v192,
                v194,
                1,
                0,
                IsNoneSupportFriendPoint,
                0LL);
              ReturnTypeByQuestId = (__int64)this->fields.originalItemList;
              if ( !ReturnTypeByQuestId )
                goto LABEL_336;
              v200 = *(_QWORD *)(ReturnTypeByQuestId + 16);
              v201 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++*(_DWORD *)(ReturnTypeByQuestId + 28);
              if ( !v200 )
                goto LABEL_336;
              v202 = *(int *)(ReturnTypeByQuestId + 24);
              v187 = (__int64)v290;
              if ( (unsigned int)v202 >= *(_DWORD *)(v200 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                  (Il2CppObject *)v199,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
              }
              else
              {
                v203 = v200 + 8 * v202;
                *(_DWORD *)(ReturnTypeByQuestId + 24) = v202 + 1;
                *(_QWORD *)(v203 + 32) = v199;
                ReturnTypeByQuestId = sub_1C3B708(v203 + 32);
              }
              ++v193;
              --v192;
              if ( followerInfob == (FollowerInfo_o *)v193 )
                goto LABEL_256;
            }
LABEL_337:
            sub_1C3B9C8(ReturnTypeByQuestId, v59);
          }
LABEL_256:
          indexa = 0;
          v284 = (EventUpValSetupInfo_o *)v181;
          v287 = (FollowerInfo_o *)(v187 + 32);
          while ( 1 )
          {
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            v204 = *(struct BalanceConfig_StaticFields **)(ReturnTypeByQuestId + 184);
            if ( indexa >= v204->SupportDeckMemberMax )
              break;
            if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
            {
              j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
              v204 = BalanceConfig_TypeInfo->static_fields;
            }
            v206 = v204->FixMainSupportDeckNum;
            v205 = v204->FixEventSupportDeckNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            ReturnTypeByQuestId = System_Math__Max_64187756(v206, v205, 0LL);
            if ( (int)followerInfob >= 1 )
            {
              v207 = ReturnTypeByQuestId;
              v208 = 0LL;
              while ( *p_mixItemList )
              {
                ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                v209 = (*p_mixItemList)->fields._size;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
                }
                if ( v181 >= LODWORD(v179->_1.namespaze) )
                  goto LABEL_337;
                if ( !v187 )
                  goto LABEL_336;
                if ( v208 >= *(unsigned int *)(v187 + 24) )
                  goto LABEL_337;
                v210 = this->fields.isServantBonusFilterEnable;
                v211 = this->fields.isServantEquipBonusFilterEnable;
                v212 = *v293;
                v213 = this->fields.isBonusFilterEnable;
                v214 = this->fields.setupInfo;
                v215 = *((_DWORD *)&v287->klass + v208);
                v216 = v211;
                v217 = v311->fields.classBoardMaxDictionary;
                v218 = *(_DWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 164LL);
                v219 = v210;
                v220 = v213;
                v221 = (FollowerSelectItemListViewItem_o *)sub_1C3B9B0(FollowerSelectItemListViewItem_TypeInfo);
                supportDeckId = v215;
                this = v311;
                v222 = v209;
                v223 = (Il2CppObject *)v221;
                FollowerSelectItemListViewItem___ctor(
                  v221,
                  v222,
                  v218 - indexa,
                  v212,
                  indexa,
                  friendPointUpVal,
                  friendPointUpMaxVal,
                  friendPointCampaignEntityList,
                  v220,
                  v219,
                  v216,
                  0,
                  v214,
                  questRestrictionInfo,
                  0,
                  supportDeckId,
                  v207,
                  v217,
                  1,
                  0,
                  IsNoneSupportFriendPoint,
                  0LL);
                ReturnTypeByQuestId = (__int64)v311->fields.mixItemList;
                if ( !ReturnTypeByQuestId )
                  goto LABEL_336;
                v224 = *(_QWORD *)(ReturnTypeByQuestId + 16);
                v225 = Method_System_Collections_Generic_List_ListViewItem__Add__;
                ++*(_DWORD *)(ReturnTypeByQuestId + 28);
                if ( !v224 )
                  goto LABEL_336;
                v226 = *(int *)(ReturnTypeByQuestId + 24);
                if ( (unsigned int)v226 >= *(_DWORD *)(v224 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                    v223,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
                }
                else
                {
                  v227 = v224 + 8 * v226;
                  *(_DWORD *)(ReturnTypeByQuestId + 24) = v226 + 1;
                  *(_QWORD *)(v227 + 32) = v223;
                  ReturnTypeByQuestId = sub_1C3B708(v227 + 32);
                }
                v179 = v280;
                v181 = (unsigned __int64)v284;
                v187 = (__int64)v290;
                ++v208;
                --v207;
                if ( followerInfob == (FollowerInfo_o *)v208 )
                  goto LABEL_278;
              }
              goto LABEL_336;
            }
LABEL_278:
            ++indexa;
          }
          if ( !*(_DWORD *)(ReturnTypeByQuestId + 224) )
          {
            j_il2cpp_runtime_class_init_0(ReturnTypeByQuestId);
            v204 = BalanceConfig_TypeInfo->static_fields;
          }
          if ( ++v270 >= v204->SupportListMax )
            break;
LABEL_282:
          LODWORD(namespaze_low) = v179->_1.namespaze;
          ++v181;
        }
        while ( (__int64)v181 < (int)namespaze_low );
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_336;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
           &v312,
           (const MethodInfo_329D4D0 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      ReturnTypeByQuestId = (__int64)v312;
      if ( !v312 )
        goto LABEL_336;
      ReturnTypeByQuestId = UserRecommendFollowerEntity__IsEnableSupport(
                              (UserRecommendFollowerEntity_o *)v312,
                              questId,
                              questPhase,
                              0LL);
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v312 )
          goto LABEL_336;
        v228 = v312[1].klass;
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_336;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !ReturnTypeByQuestId )
          goto LABEL_336;
        ReturnTypeByQuestId = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId,
                                         questId,
                                         (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_336;
        indexb = QuestEntity__HasFlag_40925964((QuestEntity_o *)ReturnTypeByQuestId, 0x8000000LL, questPhase, 0LL);
        ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ReturnTypeByQuestId )
          goto LABEL_336;
        ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)ReturnTypeByQuestId,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v299 = (UserFollowMaster_o *)ReturnTypeByQuestId;
        if ( !v228 )
          goto LABEL_336;
        v229 = (unsigned __int64)v228->_1.namespaze;
        if ( (int)v229 >= 1 )
        {
          v230 = 0LL;
          p_byval_arg = &v228->_1.byval_arg;
          do
          {
            v229 = (unsigned int)v229;
            if ( indexb )
            {
              if ( v230 >= (unsigned int)v229 )
                goto LABEL_337;
              v232 = *((_QWORD *)&p_byval_arg->data + v230);
              if ( !v232 )
                goto LABEL_336;
              if ( *(_DWORD *)(v232 + 36) == 5 )
              {
                ReturnTypeByQuestId = (__int64)v299;
                if ( !v299 )
                  goto LABEL_336;
                ReturnTypeByQuestId = UserFollowMaster__IsFollowUser(v299, *(_QWORD *)(v232 + 16), 0LL);
                if ( (ReturnTypeByQuestId & 1) == 0 )
                  goto LABEL_330;
                v229 = LODWORD(v228->_1.namespaze);
              }
            }
            else
            {
              if ( v230 >= (unsigned int)v229 )
                goto LABEL_337;
              v233 = *((_QWORD *)&p_byval_arg->data + v230);
              if ( !v233 )
                goto LABEL_336;
              if ( *(_DWORD *)(v233 + 36) == 5 )
                goto LABEL_330;
            }
            if ( v230 >= v229 )
              goto LABEL_337;
            v234 = *((_QWORD *)&p_byval_arg->data + v230);
            ReturnTypeByQuestId = sub_1C3B80C(ServantLeaderInfo___TypeInfo, 1LL);
            if ( v230 >= LODWORD(v228->_1.namespaze) )
              goto LABEL_337;
            v235 = *((_QWORD *)&p_byval_arg->data + v230);
            if ( !v235 )
              goto LABEL_336;
            v236 = *(_QWORD *)(v235 + 56);
            if ( !v236 )
              goto LABEL_336;
            if ( !*(_DWORD *)(v236 + 24) )
              goto LABEL_337;
            v237 = *(_QWORD *)(v236 + 32);
            if ( !v237 )
              goto LABEL_336;
            v238 = ReturnTypeByQuestId;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            v239 = *(_QWORD *)(v237 + 56);
            if ( v239 )
            {
              ReturnTypeByQuestId = sub_1C3B8A0(v239, *(_QWORD *)(*(_QWORD *)ReturnTypeByQuestId + 64LL));
              if ( !ReturnTypeByQuestId )
                goto LABEL_339;
            }
            if ( !*(_DWORD *)(v238 + 24) )
              goto LABEL_337;
            *(_QWORD *)(v238 + 32) = v239;
            ReturnTypeByQuestId = sub_1C3B708(v238 + 32);
            if ( !v234 )
              goto LABEL_336;
            *(_QWORD *)(v234 + 40) = v238;
            ReturnTypeByQuestId = sub_1C3B708(v234 + 40);
            if ( v230 >= LODWORD(v228->_1.namespaze) )
              goto LABEL_337;
            ReturnTypeByQuestId = *((_QWORD *)&p_byval_arg->data + v230);
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            FollowerInfo__ChangeLimitCountBySpoilerProtection((FollowerInfo_o *)ReturnTypeByQuestId, 0LL);
            if ( !*p_recommendItemList )
              goto LABEL_336;
            if ( v230 >= LODWORD(v228->_1.namespaze) )
              goto LABEL_337;
            v240 = (*p_recommendItemList)->fields._size;
            v241 = (FollowerInfo_o *)*((_QWORD *)&p_byval_arg->data + v230);
            v242 = v311->fields.isBonusFilterEnable;
            v243 = v311->fields.isServantEquipBonusFilterEnable;
            v244 = v311->fields.setupInfo;
            v245 = v311->fields.classBoardMaxDictionary;
            isServantBonusFilterEnable = v311->fields.isServantBonusFilterEnable;
            this = v311;
            v246 = (FollowerSelectItemListViewItem_o *)sub_1C3B9B0(FollowerSelectItemListViewItem_TypeInfo);
            FollowerSelectItemListViewItem___ctor(
              v246,
              v240,
              0,
              v241,
              0,
              friendPointUpVal,
              friendPointUpMaxVal,
              friendPointCampaignEntityList,
              v242,
              isServantBonusFilterEnable,
              v243,
              0,
              v244,
              questRestrictionInfo,
              0,
              0,
              0,
              v245,
              1,
              1,
              IsNoneSupportFriendPoint,
              0LL);
            ReturnTypeByQuestId = (__int64)v311->fields.recommendItemList;
            if ( !ReturnTypeByQuestId )
              goto LABEL_336;
            v247 = *(_QWORD *)(ReturnTypeByQuestId + 16);
            v248 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++*(_DWORD *)(ReturnTypeByQuestId + 28);
            if ( !v247 )
              goto LABEL_336;
            v249 = *(int *)(ReturnTypeByQuestId + 24);
            if ( (unsigned int)v249 >= *(_DWORD *)(v247 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ReturnTypeByQuestId,
                (Il2CppObject *)v246,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
            }
            else
            {
              v250 = v247 + 8 * v249;
              *(_DWORD *)(ReturnTypeByQuestId + 24) = v249 + 1;
              *(_QWORD *)(v250 + 32) = v246;
              sub_1C3B708(v250 + 32);
            }
            ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              ReturnTypeByQuestId = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v230 >= *(int *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 700LL) )
              break;
LABEL_330:
            LODWORD(v229) = v228->_1.namespaze;
            ++v230;
          }
          while ( (__int64)v230 < (int)v229 );
        }
      }
    }
  }
LABEL_331:
  ReturnTypeByQuestId = (__int64)this->fields.refreshButtonObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_336;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    !this->fields.isRefreshBtnHide,
    0LL);
  v252 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v252 = FollowerSelectItemListViewManager_TypeInfo;
  }
  FollowerSelectItemListViewManager__SetEmptyMessage(this, v252->static_fields->followerClassId, v251);
  FollowerSelectItemListViewManager__SortClass(
    this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    v253);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FollowerSelectItemListViewManager__SetFilterButtonImage(this, v254);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_336;
  scrollView->fields.smoothDragStart = 1;
}


void __fastcall FollowerSelectItemListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  FollowerSelectItemListViewManager_c *v4; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v6; // x8

  if ( (byte_4C1CF25 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_6913/*"GetFreeSize"*/, v2);
    sub_1C3B764(&StringLiteral_6916/*"GetInstance"*/, v3);
    byte_4C1CF25 = 1;
  }
  v4 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v4 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v4->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v4 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                      LIST_VIEW_SORT->fields.original_method_info,
                                                      1LL,
                                                      *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg)) == 0LL
    || (ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL),
        (v6 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (v4 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v6->fields.m_target)(
                                                      v6->fields.original_method_info,
                                                      0LL,
                                                      *(_QWORD *)&v6->fields.extra_arg)) == 0LL )
  {
    sub_1C3B9C0(v4, v1);
  }
  ListViewSort__DeleteContinueData((ListViewSort_o *)v4, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6913/*"GetFreeSize"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6916/*"GetInstance"*/, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FollowerSelectItemListViewManager__DestroyList_31882012(this, 0LL, v2);
}


void __fastcall FollowerSelectItemListViewManager__DestroyList_31882012(
        FollowerSelectItemListViewManager_o *this,
        BattleSetupInfo_o *battleSetupInfo,
        const MethodInfo *method)
{
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
  EventQuestMaster_o *ReturnTypeByQuestId; // x0
  const MethodInfo *v16; // x1
  FollowerSelectItemListViewManager_c *v17; // x8
  unsigned int v18; // w20
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  const MethodInfo *v20; // x4
  struct ListViewSort_o *sort; // x8
  System_Int32_array *OngoingQuestTargetEventIds; // x0
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Int32_array *v25; // x22
  EventUpValSetupInfo_o *v26; // x23
  struct EventUpValSetupInfo_o **p_setupInfo; // x0
  struct ListViewSort_o *v28; // x8
  FollowerSelectItemListViewManager_o *v29; // x0
  int monitor; // w20
  const MethodInfo *v31; // x1
  FollowerSelectItemListViewManager_c *v32; // x0
  FollowerSelectItemListViewManager_o *v33; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v35; // x0
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v37; // x21
  ClassButtonControlComponent_o *v38; // x20
  const MethodInfo *v39; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  System_Int32_array *v41; // x1
  UILabel_o *bonusFilterKindLabel; // x20

  if ( (byte_4C1CF34 & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_CallbackFunc_TypeInfo, battleSetupInfo);
    sub_1C3B764(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&EventUpValSetupInfo_TypeInfo, v7);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v8);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1C3B764(&int___TypeInfo, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_11909/*"SIGNUP_ENTRY_NONE"*/, v12);
    sub_1C3B764(&StringLiteral_6913/*"GetFreeSize"*/, v13);
    sub_1C3B764(&StringLiteral_6916/*"GetInstance"*/, v14);
    byte_4C1CF34 = 1;
  }
  if ( battleSetupInfo )
  {
    this->fields.questId = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    this->fields.questPhase = battleSetupInfo->fields.questPhase;
    ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                  battleSetupInfo->fields.questId,
                                                  0LL);
    v17 = FollowerSelectItemListViewManager_TypeInfo;
    v18 = (unsigned int)ReturnTypeByQuestId;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v17 = FollowerSelectItemListViewManager_TypeInfo;
    }
    LIST_VIEW_SORT = v17->static_fields->LIST_VIEW_SORT;
    if ( !LIST_VIEW_SORT )
      goto LABEL_47;
    this->fields.sort = (struct ListViewSort_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                   LIST_VIEW_SORT->fields.original_method_info,
                                                   v18,
                                                   *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg);
    ReturnTypeByQuestId = (EventQuestMaster_o *)sub_1C3B708(&this->fields.sort);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_47;
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                                                                                   this,
                                                                                   this->fields.questId,
                                                                                   this->fields.questPhase,
                                                                                   sort->fields.isRequestLoad,
                                                                                   v20);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_47;
    OngoingQuestTargetEventIds = EventQuestMaster__GetOngoingQuestTargetEventIds(
                                   ReturnTypeByQuestId,
                                   this->fields.questId,
                                   this->fields.questPhase,
                                   0LL,
                                   0LL);
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    v25 = OngoingQuestTargetEventIds;
    v26 = (EventUpValSetupInfo_o *)sub_1C3B9B0(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_40351540(v26, v25, 0, questId, questPhase, 0LL);
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = v26;
  }
  else
  {
    p_setupInfo = &this->fields.setupInfo;
    this->fields.setupInfo = 0LL;
  }
  sub_1C3B708(p_setupInfo);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C3B708(&this->fields.questRestrictionInfo);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Load((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.sort;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ListViewSort__Save((ListViewSort_o *)ReturnTypeByQuestId, 0LL);
  v28 = this->fields.sort;
  if ( !v28 )
    goto LABEL_47;
  if ( v28->fields.isRequestSave )
  {
    v29 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v29 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v29->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v29, v16) )
    {
      v32 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v32 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6913/*"GetFreeSize"*/, v32->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v33 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v33 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v33->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v33, v31) )
    {
      v35 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v35 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6916/*"GetInstance"*/,
        v35->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
  this->fields.originalItemList = 0LL;
  sub_1C3B708(&this->fields.originalItemList);
  this->fields.mixItemList = 0LL;
  sub_1C3B708(&this->fields.mixItemList);
  this->fields.recommendItemList = 0LL;
  sub_1C3B708(&this->fields.recommendItemList);
  classButtonControl = this->fields.classButtonControl;
  v37 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C3B9B0(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v37,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerSelectItemListViewManager_OnChangeClass__,
    0LL);
  if ( !classButtonControl )
    goto LABEL_47;
  ClassButtonControlComponent__init(classButtonControl, v37, this->fields.questId, this->fields.questPhase, 0, 0LL);
  this->fields.isInput = 0;
  ReturnTypeByQuestId = (EventQuestMaster_o *)FollowerSelectItemListViewManager_TypeInfo;
  v38 = this->fields.classButtonControl;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
  if ( !v38 )
    goto LABEL_47;
  ClassButtonControlComponent__setCursor(
    v38,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->followerClassId,
    0LL);
  setupInfo = this->fields.setupInfo;
  v41 = setupInfo ? setupInfo->fields.eventIdList : (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  FollowerSelectItemListViewManager__SetBonusFilterFlag(this, v41, v39);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.bonusFilterKindButton;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)ReturnTypeByQuestId,
    this->fields.isBonusFilterEnable,
    0LL);
  if ( this->fields.isBonusFilterEnable )
  {
    bonusFilterKindLabel = this->fields.bonusFilterKindLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ReturnTypeByQuestId = (EventQuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SIGNUP_ENTRY_NONE"*/, 0LL);
    if ( bonusFilterKindLabel )
    {
      UILabel__set_text(bonusFilterKindLabel, (System_String_o *)ReturnTypeByQuestId, 0LL);
      goto LABEL_43;
    }
LABEL_47:
    sub_1C3B9C0(ReturnTypeByQuestId, v16);
  }
LABEL_43:
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ((void (__fastcall *)(EventQuestMaster_o *, Il2CppMethodPointer))ReturnTypeByQuestId->klass->vtable._4_ForForceDerived.method)(
    ReturnTypeByQuestId,
    ReturnTypeByQuestId->klass->vtable._5_preProcess.methodPtr);
  ReturnTypeByQuestId = (EventQuestMaster_o *)this->fields.tutorialListViewObject;
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  ReturnTypeByQuestId = (EventQuestMaster_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)ReturnTypeByQuestId,
                                                0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ReturnTypeByQuestId, 0, 0LL);
  this->fields.isGetRecommendSupport = 0;
}


void __fastcall FollowerSelectItemListViewManager__EndClassCompatibilityMenu(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C1CF42 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1CF42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__EndCloseClassBoardEffectListDialog(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C1CF53 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1CF53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
  this->fields.isInput = 1;
}


void __fastcall FollowerSelectItemListViewManager__EndCloseSelectBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__EndSelectBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  ListViewSort_o *sort; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v11; // x21

  if ( (byte_4C1CF44 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4C1CF44 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FollowerSelectItemListViewManager__SetFilterButtonImage(this, v7);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FollowerSelectItemListViewManager_EndCloseSelectBonusFilterKind__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1C3B9C0(sort, v8);
  CommonUI__CloseServantBonusFilterSelectMenu((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerSelectItemListViewManager__GetAdvantageClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v14; // x20
  int32_t result; // w0
  struct System_Int32_array *classIds; // x8
  struct System_Int32_array *v17; // x8
  Il2CppObject *v18; // x8

  if ( (byte_4C1CF2F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C1CF2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Entity )
    return defaultValue;
  v14 = Entity;
  result = QuestPhaseEntity__GetAdvantageClassId(Entity, 0LL);
  if ( result != -1 )
    return result;
  classIds = v14->fields.classIds;
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
    return defaultValue;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v17 = v14->fields.classIds;
  if ( !v17 )
    goto LABEL_17;
  if ( !v17->max_length )
    sub_1C3B9C8(Instance, v12);
  if ( !Instance )
LABEL_17:
    sub_1C3B9C0(Instance, v12);
  v18 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v17->m_Items[1],
          (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  result = defaultValue;
  if ( v18 )
    return HIDWORD(v18[4].klass);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_c *v2; // x0

  if ( (byte_4C1CF38 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, method);
    byte_4C1CF38 = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  return v2->static_fields->followerClassId;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetDisplayItemNum(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8

  if ( (byte_4C1CF54 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_4C1CF54 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
    return itemSortList->fields._size;
  else
    return 0;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetDisplaySkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.displaySkill;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerSelectItemListViewManager__GetInitialDisplayClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        bool isInitialize,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t PlayerPrefsFollowerClassId; // w21
  FollowerSelectItemListViewManager_c *v13; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  _BOOL8 AdvantageClassAuto; // x0
  const MethodInfo *v19; // x3
  int32_t AdvantageClassId; // w22
  _BOOL8 IsSameQuestAndPhase; // x0
  const MethodInfo *v22; // x4
  RecommendSupportQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1CF2D & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___, v8);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1C3B764(&OptionManager_TypeInfo, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1C3B764(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v11);
    byte_4C1CF2D = 1;
  }
  entity = 0LL;
  if ( isInitialize )
  {
    PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
                                   this,
                                   *(const MethodInfo **)&questId);
  }
  else
  {
    v13 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v13 = FollowerSelectItemListViewManager_TypeInfo;
    }
    PlayerPrefsFollowerClassId = v13->static_fields->followerClassId;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(PlayerPrefsFollowerClassId, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___)) == 0LL )
    {
      sub_1C3B9C0(Instance, v15);
    }
    v16 = RecommendSupportQuestMaster__TryGetEntity(
            (RecommendSupportQuestMaster_o *)Instance,
            &entity,
            questId,
            questPhase,
            0LL);
    if ( !v16 )
      PlayerPrefsFollowerClassId = FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
                                     (FollowerSelectItemListViewManager_o *)v16,
                                     v17);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  AdvantageClassAuto = OptionManager__GetAdvantageClassAuto(0LL);
  AdvantageClassId = PlayerPrefsFollowerClassId;
  if ( AdvantageClassAuto )
  {
    IsSameQuestAndPhase = FollowerSelectItemListViewManager__IsSameQuestAndPhase(
                            (FollowerSelectItemListViewManager_o *)AdvantageClassAuto,
                            questId,
                            questPhase,
                            v19);
    AdvantageClassId = PlayerPrefsFollowerClassId;
    if ( !IsSameQuestAndPhase )
      AdvantageClassId = FollowerSelectItemListViewManager__GetAdvantageClassId(
                           (FollowerSelectItemListViewManager_o *)IsSameQuestAndPhase,
                           questId,
                           questPhase,
                           PlayerPrefsFollowerClassId,
                           v22);
  }
  if ( ServantClassEntity__IsValidClassOnSellectSupport(AdvantageClassId, 0LL) )
    return AdvantageClassId;
  else
    return PlayerPrefsFollowerClassId;
}


// local variable allocation has failed, the output may be wrong!
FollowerSelectItemListViewItem_o *__fastcall FollowerSelectItemListViewManager__GetItem(
        FollowerSelectItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FollowerSelectItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4C1CF36 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4C1CF36 = 1;
  }
  result = (FollowerSelectItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (FollowerSelectItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemCount(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8

  if ( (byte_4C1CF4F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_4C1CF4F = 1;
  }
  mixItemList = this->fields.mixItemList;
  if ( mixItemList )
    return mixItemList->fields._size;
  else
    return 0;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v12; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4C1CF50 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    byte_4C1CF50 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C3B9C0(itemList, userId);
  v10 = 0;
  while ( v10 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v10,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v12 = (FollowerSelectItemListViewItem_o *)Item;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0LL) == userId )
      {
        itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                  v12,
                                                                  0LL);
        if ( !itemList )
          goto LABEL_13;
        if ( itemList[1].klass == (System_Collections_Generic_List_object__c *)userSvtId )
          return v10;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v10;
    if ( !itemList )
      goto LABEL_13;
  }
  return 0;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetItemIndex_31894016(
        FollowerSelectItemListViewManager_o *this,
        int64_t userId,
        int32_t classId,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v12; // w23
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v14; // x24
  __int64 methodPtr_low; // x10

  if ( (byte_4C1CF51 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewItem_TypeInfo, userId);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_4C1CF51 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_13:
    sub_1C3B9C0(itemList, userId);
  v12 = 0;
  while ( v12 < itemList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             itemList,
             v12,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v14 = (FollowerSelectItemListViewItem_o *)Item;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo
        && FollowerSelectItemListViewItem__get_FollowerId((FollowerSelectItemListViewItem_o *)Item, 0LL) == userId
        && FollowerSelectItemListViewItem__get_SelectClassId(v14, 0LL) == classId
        && v14->fields.supportDeckId == deckId )
      {
        return v12;
      }
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v12;
    if ( !itemList )
      goto LABEL_13;
  }
  return -1;
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1CF31 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6913/*"GetFreeSize"*/, method);
    byte_4C1CF31 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6913/*"GetFreeSize"*/, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1CF32 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6916/*"GetInstance"*/, method);
    byte_4C1CF32 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_6916/*"GetInstance"*/, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewManager_c *v2; // x0
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *LIST_VIEW_SORT; // x8
  struct System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v4; // x8

  if ( (byte_4C1CF26 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v1);
    byte_4C1CF26 = 1;
  }
  v2 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v2 = FollowerSelectItemListViewManager_TypeInfo;
  }
  LIST_VIEW_SORT = v2->static_fields->LIST_VIEW_SORT;
  if ( !LIST_VIEW_SORT
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))LIST_VIEW_SORT->fields.m_target)(
                                                      LIST_VIEW_SORT->fields.original_method_info,
                                                      1LL,
                                                      *(_QWORD *)&LIST_VIEW_SORT->fields.extra_arg)) == 0LL
    || (ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL),
        (v4 = FollowerSelectItemListViewManager_TypeInfo->static_fields->LIST_VIEW_SORT) == 0LL)
    || (v2 = (FollowerSelectItemListViewManager_c *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
                                                      v4->fields.original_method_info,
                                                      0LL,
                                                      *(_QWORD *)&v4->fields.extra_arg)) == 0LL )
  {
    sub_1C3B9C0(v2, v1);
  }
  ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerSelectItemListViewManager__IsSameQuestAndPhase(
        FollowerSelectItemListViewManager_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  FollowerSelectItemListViewManager_c *v7; // x0
  struct FollowerSelectItemListViewManager_StaticFields *static_fields; // x8
  struct FollowerSelectItemListViewManager_StaticFields *v9; // x8

  if ( (byte_4C1CF2E & 1) == 0 )
  {
    sub_1C3B764(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_4C1CF2E = 1;
  }
  v7 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->lastSelectedQuestId == -1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FollowerSelectItemListViewManager_TypeInfo;
      static_fields = FollowerSelectItemListViewManager_TypeInfo->static_fields;
    }
    if ( static_fields->lastSelectedQuestPhase == -1 )
    {
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      if ( BattleData__getSavedQuestId(0LL) == questId )
      {
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        return BattleData__getSavedQuestPhase(0LL) == questPhase;
      }
      return 0;
    }
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v9 = v7->static_fields;
  if ( v9->lastSelectedQuestId != questId )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v9 = FollowerSelectItemListViewManager_TypeInfo->static_fields;
  }
  return v9->lastSelectedQuestPhase == questPhase;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__ModifyList(
        FollowerSelectItemListViewManager_o *this,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w25
  int32_t v13; // w22
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewManager_c *v15; // x0
  int32_t followerClassId; // w22
  int v17; // w25
  int32_t v18; // w22
  __int64 v19; // x10
  int v20; // w25
  int32_t v21; // w22
  __int64 v22; // x10

  if ( (byte_4C1CF33 & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&friendPointUpVal);
    sub_1C3B764(&FollowerSelectItemListViewItem_TypeInfo, v7);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_4C1CF33 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v13,
                                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      FollowerSelectItemListViewItem__Modify(
        (FollowerSelectItemListViewItem_o *)itemList,
        friendPointUpVal,
        friendPointUpMaxVal,
        0LL);
      if ( size == ++v13 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_1C3B9C0(itemList, *(_QWORD *)&friendPointUpVal);
  }
LABEL_12:
  v15 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v15 = FollowerSelectItemListViewManager_TypeInfo;
  }
  followerClassId = v15->static_fields->followerClassId;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.originalItemList;
    if ( !itemList )
      goto LABEL_34;
    v17 = itemList->fields._size;
    if ( v17 >= 1 )
    {
      v18 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v18,
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v19 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v19
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v19 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          0LL);
        if ( v17 == ++v18 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.originalItemList;
      }
      while ( itemList );
      goto LABEL_34;
    }
  }
  else
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.mixItemList;
    if ( !itemList )
      goto LABEL_34;
    v20 = itemList->fields._size;
    if ( v20 >= 1 )
    {
      v21 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v21,
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v22 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v22
          || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[v22 - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          break;
        }
        FollowerSelectItemListViewItem__Modify(
          (FollowerSelectItemListViewItem_o *)itemList,
          friendPointUpVal,
          friendPointUpMaxVal,
          0LL);
        if ( v20 == ++v21 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.mixItemList;
      }
      while ( itemList );
      goto LABEL_34;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__OnChangeClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 IsRecommendSupportGroupType; // x0
  __int64 v8; // x1
  int v9; // w21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t oldCursor; // w22
  const MethodInfo *v12; // x2
  struct ClassButtonControlComponent_o *v13; // x8
  int32_t v14; // w23
  FollowerSelectItemListViewManager_c *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_4C1CF4A & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnChangeClass__, v5);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v6);
    byte_4C1CF4A = 1;
  }
  if ( this->fields.isInput )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(classPos, 0LL);
    if ( this->fields.classButtonControl )
    {
      v9 = IsRecommendSupportGroupType;
      IsRecommendSupportGroupType = ClassButtonControlComponent__getChangeCursorPos(
                                      this->fields.classButtonControl,
                                      0LL);
      if ( (IsRecommendSupportGroupType & 0x80000000) == 0 )
      {
        classButtonControl = this->fields.classButtonControl;
        if ( !classButtonControl )
          goto LABEL_22;
        oldCursor = classButtonControl->fields.oldCursor;
        if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
        IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(oldCursor, 0LL);
        if ( ((v9 | (unsigned int)IsRecommendSupportGroupType) & 1) != 0 )
          FollowerSelectItemListViewManager__SetEmptyMessage(this, classPos, v12);
      }
      v13 = this->fields.classButtonControl;
      if ( v13 )
      {
        v14 = v13->fields.oldCursor;
        v15 = FollowerSelectItemListViewManager_TypeInfo;
        if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
          v15 = FollowerSelectItemListViewManager_TypeInfo;
        }
        v15->static_fields->oldFollowerClassId = v14;
        v16 = Method_FollowerSelectItemListViewManager_OnChangeClass__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnChangeClass__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1C3B77C(Method_FollowerSelectItemListViewManager_OnChangeClass__);
        v17 = (System_Reflection_MethodBase_o *)sub_1C3B748(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
        if ( (v9 & 1) != 0 )
          FollowerSelectItemListViewManager__OnClickRecommend(this, classPos, v18);
        else
          FollowerSelectItemListViewManager__SortClass(this, classPos, v18);
        return;
      }
    }
LABEL_22:
    sub_1C3B9C0(IsRecommendSupportGroupType, v8);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickBonusFilterKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  _BOOL4 isServantBonusFilterEnable; // w24
  _BOOL4 isServantEquipBonusFilterEnable; // w25
  System_Int32_array *equipBonusFilterEventIds; // x20
  ListViewSort_o *sort; // x21
  CommonUI_o *v13; // x22
  ServantBonusFilterSelectMenu_CallbackFunc_o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4C1CF43 & 1) == 0 )
  {
    sub_1C3B764(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__, v3);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1CF43 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_FollowerSelectItemListViewManager_OnClickBonusFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
    equipBonusFilterEventIds = this->fields.equipBonusFilterEventIds;
    sort = this->fields.sort;
    v13 = (CommonUI_o *)Instance;
    v14 = (ServantBonusFilterSelectMenu_CallbackFunc_o *)sub_1C3B9B0(ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantBonusFilterSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndSelectBonusFilterKind__,
      0LL);
    if ( !v13 )
      sub_1C3B9C0(v15, v16);
    CommonUI__OpenServantBonusFilterSelectMenu(
      v13,
      0,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      equipBonusFilterEventIds,
      sort,
      v14,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickChangeSkill(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  __int64 displaySkill; // x8
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  const MethodInfo *v13; // x2

  if ( (byte_4C1CF4E & 1) == 0 )
  {
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnClickChangeSkill__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v4);
    byte_4C1CF4E = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_FollowerSelectItemListViewManager_OnClickChangeSkill__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickChangeSkill__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_FollowerSelectItemListViewManager_OnClickChangeSkill__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    displaySkill = this->fields.displaySkill;
    if ( (unsigned int)displaySkill <= 2 )
      this->fields.displaySkill = dword_C469F4[displaySkill];
    ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                this,
                                                                v7);
    if ( !ObjectList )
      goto LABEL_14;
    v11 = ObjectList;
    if ( ObjectList->fields._size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v11,
                                                                    v12,
                                                                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
        if ( !ObjectList )
          break;
        FollowerSelectItemListViewObject__ChangeDisplaySkill(
          (FollowerSelectItemListViewObject_o *)ObjectList,
          this->fields.displaySkill,
          v13);
        if ( ++v12 >= v11->fields._size )
          return;
      }
LABEL_14:
      sub_1C3B9C0(ObjectList, v10);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickClassComparibility(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4C1CF41 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__, v3);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnClickClassComparibility__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1CF41 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_FollowerSelectItemListViewManager_OnClickClassComparibility__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickClassComparibility__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_FollowerSelectItemListViewManager_OnClickClassComparibility__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FollowerSelectItemListViewManager_EndClassCompatibilityMenu__,
      0LL);
    if ( !Instance )
      sub_1C3B9C0(v10, v11);
    CommonUI__OpenClassCompatibilityMenu((CommonUI_o *)Instance, v9, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__OnClickRecommend(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  FollowerSelectItemListViewManager_c *v10; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1CF4B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, *(_QWORD *)&classPos);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v7);
    byte_4C1CF4B = 1;
  }
  entity = 0LL;
  if ( this->fields.isGetRecommendSupport )
    goto LABEL_4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (const MethodInfo_329D4D0 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Master_object = entity;
  if ( !entity )
LABEL_16:
    sub_1C3B9C0(Master_object, v9);
  if ( UserRecommendFollowerEntity__IsEnableSupport(
         (UserRecommendFollowerEntity_o *)entity,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
LABEL_4:
    FollowerSelectItemListViewManager__SortClass(this, classPos, method);
    return;
  }
LABEL_12:
  v10 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v10 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v10->static_fields->followerClassId = classPos;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C3B708(&this->fields.callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      14LL,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickRefresh(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w19
  __int64 v8; // x1

  if ( (byte_4C1CF40 & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, method);
    byte_4C1CF40 = 1;
  }
  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      v4 = sub_1C3B708(&this->fields.callbackFunc);
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        sub_1C3B9C0(v4, v5);
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL) )
        v8 = 13LL;
      else
        v8 = 7LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v8,
        0xFFFFFFFFLL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSelectListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1C3B708(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C3B9C0(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        0LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__OnClickSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__OnClickSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerSelectItemListViewManager__OnClickSortAscendingOrder(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C1CF48 & 1) == 0 )
  {
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__, method);
    byte_4C1CF48 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_FollowerSelectItemListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3B9C0(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSortKind(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _BOOL8 IsRecommendSupportGroupType; // x0
  __int64 v10; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  struct ListViewSort_o *sort; // x8
  int v14; // w9
  Il2CppObject *Instance; // x0
  ListViewSort_o *v16; // x20
  CommonUI_o *v17; // x21
  OtherUserSortDialog_CallbackFunc_o *v18; // x22

  if ( (byte_4C1CF46 & 1) == 0 )
  {
    sub_1C3B764(&OtherUserSortDialog_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_CloseSortDialog__, v4);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnClickSortKind__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4C1CF46 = 1;
  }
  if ( this->fields.isInput )
  {
    v7 = Method_FollowerSelectItemListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C3B77C(Method_FollowerSelectItemListViewManager_OnClickSortKind__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    classButtonControl = this->fields.classButtonControl;
    if ( classButtonControl )
    {
      currentCursor = classButtonControl->fields.currentCursor;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL);
      if ( IsRecommendSupportGroupType )
      {
        sort = this->fields.sort;
        if ( sort )
        {
          if ( sort->fields.otherSortKind == 11 )
            v14 = 29;
          else
            v14 = 11;
          sort->fields.otherSortKind = v14;
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v16 = this->fields.sort;
        v17 = (CommonUI_o *)Instance;
        v18 = (OtherUserSortDialog_CallbackFunc_o *)sub_1C3B9B0(OtherUserSortDialog_CallbackFunc_TypeInfo);
        OtherUserSortDialog_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_FollowerSelectItemListViewManager_CloseSortDialog__,
          0LL);
        if ( v17 )
        {
          CommonUI__OpenOtherUserSortDialog(v17, 0, v16, v18, 0LL);
          return;
        }
      }
    }
    sub_1C3B9C0(IsRecommendSupportGroupType, v10);
  }
}


void __fastcall FollowerSelectItemListViewManager__OnClickSupportListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1C3B708(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C3B9C0(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        5LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 8, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 9, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 10, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill4ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 11, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushAppendSkill5ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 12, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1C3B708(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C3B9C0(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushServantEquip(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  if ( this->fields.isInput )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    v5 = sub_1C3B708(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1C3B9C0(v5, v6);
      Index = ListViewObject__get_Index(obj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        6LL,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *callbackFunc; // x22
  unsigned int Index; // w0

  if ( (byte_4C1CF3F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_12833/*"Summon"*/, obj);
    byte_4C1CF3F = 1;
  }
  if ( this->fields.isInput )
  {
    tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
    if ( !tutorialListViewObject )
      goto LABEL_14;
    tutorialListViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                          tutorialListViewObject,
                                                          0LL);
    if ( !tutorialListViewObject )
      goto LABEL_14;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)tutorialListViewObject, 0LL) )
    {
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !tutorialListViewObject )
        goto LABEL_14;
      UIScrollView__Press((UIScrollView_o *)tutorialListViewObject, 0, 0LL);
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !tutorialListViewObject )
        goto LABEL_14;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)tutorialListViewObject, 0, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12833/*"Summon"*/,
        0.1,
        0LL);
    }
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    tutorialListViewObject = (UnityEngine_Component_o *)sub_1C3B708(&this->fields.callbackFunc);
    if ( callbackFunc )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          (unsigned int)kind,
          Index,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
LABEL_14:
      sub_1C3B9C0(tutorialListViewObject, obj);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill1ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 2, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill2ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 3, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnLongPushSkill3ListView(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FollowerSelectItemListViewManager__OnLongPushSkill(this, obj, 4, v3);
}


void __fastcall FollowerSelectItemListViewManager__OnMoveEnd(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *tutorialListViewObject; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C1CF3E & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1CF3E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_15;
      tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( tutorialListViewObject )
      {
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))tutorialListViewObject->klass[1]._1.castClass)(
          tutorialListViewObject,
          1LL,
          tutorialListViewObject->klass[1]._1.declaringType);
        tutorialListViewObject = (UnityEngine_Component_o *)this->fields.tutorialListViewObject;
        if ( tutorialListViewObject )
        {
          tutorialListViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                tutorialListViewObject,
                                                                0LL);
          if ( tutorialListViewObject )
          {
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)tutorialListViewObject, 0LL) )
              goto LABEL_15;
            tutorialListViewObject = (UnityEngine_Component_o *)this->fields.scrollView;
            if ( tutorialListViewObject )
            {
              UIScrollView__UpdatePosition((UIScrollView_o *)tutorialListViewObject, 0LL);
              this->fields.isScrollRefresh = 1;
LABEL_15:
              callbackFunc2 = this->fields.callbackFunc2;
              this->fields.callbackFunc2 = 0LL;
              sub_1C3B708(&this->fields.callbackFunc2);
              if ( callbackFunc2 )
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                  callbackFunc2->fields.original_method_info,
                  *(_QWORD *)&callbackFunc2->fields.extra_arg);
              return;
            }
          }
        }
      }
      sub_1C3B9C0(tutorialListViewObject, v7);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__OpenSupportClassBoard(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v4; // x19
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
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t Index; // w0
  Il2CppObject *Item; // x0
  FollowerSelectItemListViewItem_o *v19; // x20
  __int64 methodPtr_low; // x10
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  Il2CppObject *Master_object; // x21
  int32_t scrollView; // w22
  struct FollowerInfo_o *followerInfo; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v30; // w20
  unsigned int v31; // w24
  ClassBoardInfo_o *v32; // x21
  long double inited; // q0
  _QWORD *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  long double v38; // q0
  _QWORD *v39; // x22
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v44; // x23

  v4 = this;
  if ( (byte_4C1CF52 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, obj);
    sub_1C3B764(&Method_System_Array_Empty_int___, v5);
    sub_1C3B764(&ClassBoardInfo_TypeInfo, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C3B764(&FollowerSelectItemListViewItem_TypeInfo, v11);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__, v12);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    this = (FollowerSelectItemListViewManager_o *)sub_1C3B764(
                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                    v15);
    byte_4C1CF52 = 1;
  }
  if ( v4->fields.isInput )
  {
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( itemList )
    {
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        Item = System_Collections_Generic_List_object___get_Item(
                 itemList,
                 Index,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          return;
        v19 = (FollowerSelectItemListViewItem_o *)Item;
        methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (FollowerSelectItemListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
        {
          return;
        }
        if ( BYTE3(Item[12].monitor) )
        {
          v21 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
          if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
            v21 = (_QWORD *)sub_1C3B77C(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
          v22 = (System_Reflection_MethodBase_o *)sub_1C3B748(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0LL);
          return;
        }
        v4->fields.isInput = 0;
        v23 = Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__;
        if ( (*((_BYTE *)Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C3B77C(Method_FollowerSelectItemListViewManager_OpenSupportClassBoard__);
        v24 = (System_Reflection_MethodBase_o *)sub_1C3B748(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
        this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewItem__get_SvtId(v19, 0LL);
        if ( Master_object )
        {
          this = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          (int32_t)this,
                                                          (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            scrollView = (int32_t)this->fields.scrollView;
            this = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
            if ( this )
            {
              this = (FollowerSelectItemListViewManager_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                              (ClassBoardClassMaster_o *)this,
                                                              scrollView,
                                                              0LL);
              followerInfo = v19->fields.followerInfo;
              if ( followerInfo )
              {
                userClassBoardInfo = followerInfo->fields.userClassBoardInfo;
                if ( userClassBoardInfo )
                {
                  max_length = userClassBoardInfo->max_length;
                  v30 = (int)this;
                  if ( max_length < 1 )
                  {
LABEL_30:
                    v32 = (ClassBoardInfo_o *)sub_1C3B9B0(ClassBoardInfo_TypeInfo);
                    ClassBoardInfo___ctor(v32, 0LL);
                    if ( v32 )
                    {
                      v32->fields.classBoardBaseId = v30;
                      v34 = Method_System_Array_Empty_int___;
                      v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v35 )
                      {
                        sub_1C8D69C(Method_System_Array_Empty_int___);
                        v35 = v34[7];
                      }
                      v36 = *(_QWORD *)(v35 + 16);
                      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
                        v36 = sub_1C8D640(inited);
                      if ( !*(_DWORD *)(v36 + 224) )
                        inited = j_il2cpp_runtime_class_init_0(v36);
                      v37 = *(_QWORD *)(v34[7] + 16LL);
                      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
                        v37 = sub_1C8D640(inited);
                      v32->fields.squareIds = **(struct System_Int32_array ***)(v37 + 184);
                      sub_1C3B708(&v32->fields.squareIds);
                      v39 = Method_System_Array_Empty_int___;
                      v40 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
                      if ( !v40 )
                      {
                        sub_1C8D69C(Method_System_Array_Empty_int___);
                        v40 = v39[7];
                      }
                      v41 = *(_QWORD *)(v40 + 16);
                      if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
                        v41 = sub_1C8D640(v38);
                      if ( !*(_DWORD *)(v41 + 224) )
                        v38 = j_il2cpp_runtime_class_init_0(v41);
                      v42 = *(_QWORD *)(v39[7] + 16LL);
                      if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
                        v42 = sub_1C8D640(v38);
                      v32->fields.releasedClassIds = **(struct System_Int32_array ***)(v42 + 184);
                      sub_1C3B708(&v32->fields.releasedClassIds);
LABEL_48:
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v44 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
                      System_Action___ctor(
                        v44,
                        (Il2CppObject *)v4,
                        Method_FollowerSelectItemListViewManager_EndCloseClassBoardEffectListDialog__,
                        0LL);
                      if ( Instance )
                      {
                        CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v30, 0, v44, 1, v32, 0LL);
                        return;
                      }
                    }
                  }
                  else
                  {
                    v31 = 0;
                    while ( 1 )
                    {
                      if ( v31 >= max_length )
                        sub_1C3B9C8(this, obj);
                      v32 = userClassBoardInfo->m_Items[v31];
                      if ( !v32 )
                        break;
                      if ( v32->fields.classBoardBaseId == v30 )
                      {
                        this = (FollowerSelectItemListViewManager_o *)ClassBoardInfo__IsReleasedClassId(
                                                                        v32,
                                                                        scrollView,
                                                                        0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          goto LABEL_48;
                      }
                      max_length = userClassBoardInfo->max_length;
                      if ( (int)++v31 >= max_length )
                        goto LABEL_30;
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1C3B9C0(this, obj);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__PlayClassButtonEffect(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0

  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    sub_1C3B9C0(0LL, method);
  ClassButtonControlComponent__PlayRecommendEffect(classButtonControl, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__RequestInto(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_FollowerSelectItemListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4C1CF3D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v5);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v6);
    byte_4C1CF3D = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = FollowerSelectItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1C3B9C0(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  v13 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v13,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      FollowerSelectItemListViewObject__Init_31887216((FollowerSelectItemListViewObject_o *)Item, 4, v15, 0.1, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v13;
  }
  while ( v13 < v11->fields._size );
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      0.0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C1CF3B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v9);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v12);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v13);
    byte_4C1CF3B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v19, v20);
      FollowerSelectItemListViewObject__Init_31887216(
        (FollowerSelectItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__RequestListObject_31886100(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C1CF3C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__get_Current__, v7);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v10);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v11);
    byte_4C1CF3C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v17, v18);
      FollowerSelectItemListViewObject__Init_31886604((FollowerSelectItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_FollowerSelectItemListViewObject__Dispose__);
  }
}


void __fastcall FollowerSelectItemListViewManager__SaveSortFilter(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  struct ListViewSort_o *v6; // x8
  FollowerSelectItemListViewManager_o *v7; // x0
  int monitor; // w20
  const MethodInfo *v9; // x1
  FollowerSelectItemListViewManager_c *v10; // x0
  FollowerSelectItemListViewManager_o *v11; // x0
  int monitor_high; // w20
  FollowerSelectItemListViewManager_c *v13; // x0

  if ( (byte_4C1CF35 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_6913/*"GetFreeSize"*/, v3);
    sub_1C3B764(&StringLiteral_6916/*"GetInstance"*/, v4);
    byte_4C1CF35 = 1;
  }
  sort = this->fields.sort;
  if ( !sort || (ListViewSort__Save(sort, 0LL), (v6 = this->fields.sort) == 0LL) )
    sub_1C3B9C0(sort, method);
  if ( v6->fields.isRequestSave )
  {
    v7 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v7 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor = (int)v7->fields.sort->monitor;
    if ( monitor != FollowerSelectItemListViewManager__GetPlayerPrefsFollowerClassId(v7, method) )
    {
      v10 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v10 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6913/*"GetFreeSize"*/, v10->static_fields->followerClassId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    v11 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v11 = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
    }
    monitor_high = HIDWORD(v11->fields.sort->monitor);
    if ( monitor_high != FollowerSelectItemListViewManager__GetPlayerPrefsOldFollowerClassId(v11, v9) )
    {
      v13 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v13 = FollowerSelectItemListViewManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        (System_String_o *)StringLiteral_6916/*"GetInstance"*/,
        v13->static_fields->oldFollowerClassId,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


void __fastcall FollowerSelectItemListViewManager__ScrollViewEnabled(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1C3B9C0(0LL, method);
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetBonusFilterFlag(
        FollowerSelectItemListViewManager_o *this,
        System_Int32_array *eventIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  System_Collections_Generic_List_int__o *v12; // x21
  unsigned __int64 v13; // x23
  int32_t v14; // w22
  bool isBonusFilterEnable; // w27
  bool isServantBonusFilterEnable; // w27
  bool isServantEquipBonusFilterEnable; // w27
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C1CF29 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventFilterMaster___, eventIds);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C1CF29 = 1;
  }
  entity = 0LL;
  *(_WORD *)&this->fields.isBonusFilterEnable = 0;
  this->fields.isServantEquipBonusFilterEnable = 0;
  Instance = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIds,
                                                         (const MethodInfo_302E840 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !eventIds )
    goto LABEL_22;
  v11 = *(_QWORD *)&eventIds->max_length;
  v12 = Instance;
  if ( v11 && (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
        sub_1C3B9C8(Instance, v10);
      v14 = eventIds->m_Items[v13 + 1];
      Instance = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventFilterMaster___);
      if ( !Instance )
        break;
      Instance = (System_Collections_Generic_List_int__o *)EventFilterMaster__TryGetEntity_40570504(
                                                             (EventFilterMaster_o *)Instance,
                                                             &entity,
                                                             v14,
                                                             0,
                                                             0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isBonusFilterEnable = this->fields.isBonusFilterEnable;
        this->fields.isBonusFilterEnable = isBonusFilterEnable | !EventFilterEntity__IsSupportFilterNoDisp(entity, 0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isServantBonusFilterEnable = this->fields.isServantBonusFilterEnable;
        this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable | !EventFilterEntity__IsSupportServantFilterNoDisp(
                                                                                  entity,
                                                                                  0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
        this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable | !EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                                                            entity,
                                                                                            0LL);
        Instance = (System_Collections_Generic_List_int__o *)entity;
        if ( !entity )
          break;
        Instance = (System_Collections_Generic_List_int__o *)EventFilterEntity__IsSupportServantEquipFilterNoDisp(
                                                               entity,
                                                               0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v12 )
            break;
          Instance = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Remove(
                                                                 v12,
                                                                 v14,
                                                                 (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__);
        }
      }
      else
      {
        *(_WORD *)&this->fields.isBonusFilterEnable = 257;
        this->fields.isServantEquipBonusFilterEnable = 1;
      }
      LODWORD(v11) = eventIds->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C3B9C0(Instance, v10);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  this->fields.equipBonusFilterEventIds = System_Collections_Generic_List_int___ToArray(
                                            v12,
                                            (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
  sub_1C3B708(&this->fields.equipBonusFilterEventIds);
}


void __fastcall FollowerSelectItemListViewManager__SetClassBoardInfo(
        FollowerSelectItemListViewManager_o *this,
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
  BalanceConfig_c *v18; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x20
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_classBoardMaxDictionary; // x20
  System_Collections_Generic_Dictionary_int__int__o *v23; // x19
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x21
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4C1CF2B & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&BalanceConfig_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__, v4);
    sub_1C3B764(&CondType_TypeInfo, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__Clear__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_1C3B764(&System_IDisposable_TypeInfo, v14);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, v15);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1C3B764(&StringLiteral_18014/*"csIBM424"*/, v17);
    byte_4C1CF2B = 1;
  }
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v18->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_39011304(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_18014/*"csIBM424"*/, 0LL);
  }
  classBoardMaxDictionary = this->fields.classBoardMaxDictionary;
  p_classBoardMaxDictionary = &this->fields.classBoardMaxDictionary;
  if ( classBoardMaxDictionary )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      classBoardMaxDictionary,
      (const MethodInfo_32EC24C *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v23,
      (const MethodInfo_32EB708 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *p_classBoardMaxDictionary = v23;
    sub_1C3B708(p_classBoardMaxDictionary);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0LL )
  {
    sub_1C3B9C0(Master_object, v25);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_30;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_30:
      v35 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v37 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    if ( !v36 )
      sub_1C3B9C0(v37, v38);
    if ( !v37 )
      sub_1C3B9C0(0LL, v38);
    OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                            (ClassBoardSquareMaster_o *)v37,
                            *(_DWORD *)(v36 + 16),
                            0LL);
    if ( OtherThanNoneEntity )
    {
      if ( !*p_classBoardMaxDictionary )
        sub_1C3B9C0(OtherThanNoneEntity, v40);
      System_Collections_Generic_Dictionary_int__int___Add(
        *p_classBoardMaxDictionary,
        *(_DWORD *)(v36 + 16),
        OtherThanNoneEntity->max_length,
        (const MethodInfo_32EC0CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_43;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_43:
    v44 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetClassId(
        FollowerSelectItemListViewManager_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  FollowerSelectItemListViewManager_c *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *mixItemList; // x21
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerable_T__o *recommendItemList; // x21
  System_Collections_Generic_List_object__o *v20; // x22
  __int64 v21; // x10
  System_Collections_Generic_IEnumerable_T__o *originalItemList; // x21
  System_Collections_Generic_List_object__o *v23; // x22
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  __int64 v25; // x10
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C1CF39 & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&followerClassId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_1C3B764(&FollowerSelectItemListViewItem_TypeInfo, v8);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem___ctor___77853840, v11);
    sub_1C3B764(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_4C1CF39 = 1;
  }
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  memset(&v27, 0, sizeof(v27));
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  v13->static_fields->followerClassId = followerClassId;
  if ( this->fields.mixItemList && this->fields.originalItemList )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL) )
    {
      mixItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.mixItemList;
      v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor_57193824(
        v15,
        mixItemList,
        (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77853840);
      this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v15;
      sub_1C3B708(&this->fields.itemList);
      itemList = this->fields.itemList;
      if ( itemList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v26,
          (System_Collections_Generic_List_object__o *)itemList,
          (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v27 = v26;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v27,
                  (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( v27.fields._current )
          {
            methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewItem_TypeInfo )
            {
              FollowerSelectItemListViewItem__UpdateRestriction(
                (FollowerSelectItemListViewItem_o *)v27.fields._current,
                0LL);
            }
          }
        }
LABEL_34:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v27,
          (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        return;
      }
    }
    else
    {
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      if ( ClassButtonControlComponent__IsRecommendSupportGroupType(followerClassId, 0LL) )
      {
        recommendItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendItemList;
        v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_57193824(
          v20,
          recommendItemList,
          (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77853840);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v20;
        sub_1C3B708(&this->fields.itemList);
        itemList = this->fields.itemList;
        if ( itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v27.fields._current )
            {
              v21 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v21
                && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[v21 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__UpdateRestriction(
                  (FollowerSelectItemListViewItem_o *)v27.fields._current,
                  0LL);
              }
            }
          }
          goto LABEL_34;
        }
      }
      else
      {
        originalItemList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.originalItemList;
        v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
        System_Collections_Generic_List_object____ctor_57193824(
          v23,
          originalItemList,
          (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77853840);
        this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
        p_itemList = &this->fields.itemList;
        sub_1C3B708(p_itemList);
        itemList = *p_itemList;
        if ( *p_itemList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            (System_Collections_Generic_List_object__o *)itemList,
            (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v27.fields._current )
            {
              v25 = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v25
                && (FollowerSelectItemListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[v25 - 1] == FollowerSelectItemListViewItem_TypeInfo )
              {
                FollowerSelectItemListViewItem__SetClassId(
                  (FollowerSelectItemListViewItem_o *)v27.fields._current,
                  followerClassId,
                  0LL);
              }
            }
          }
          goto LABEL_34;
        }
      }
    }
    sub_1C3B9C0(itemList, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetEmptyMessage(
        FollowerSelectItemListViewManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o **v8; // x8
  System_String_o *v9; // x20
  UILabel_o *emptyMessageLabel; // x19
  System_String_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4C1CF30 & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classId);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_11230/*"SELECTED_COMMAND_CODE"*/, v6);
    sub_1C3B764(&StringLiteral_12010/*"START_FRIENDSHIPUP_EFFECT"*/, v7);
    byte_4C1CF30 = 1;
  }
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(classId, 0LL) )
    v8 = (System_String_o **)&StringLiteral_11230/*"SELECTED_COMMAND_CODE"*/;
  else
    v8 = (System_String_o **)&StringLiteral_12010/*"START_FRIENDSHIPUP_EFFECT"*/;
  v9 = *v8;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v9, 0LL);
  if ( !emptyMessageLabel )
    sub_1C3B9C0(v11, v12);
  UILabel__set_text(emptyMessageLabel, v11, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetFilterButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *bonusFilterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4C1CF45 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17872/*"const"*/, method);
    sub_1C3B764(&StringLiteral_17871/*"connectionGroupName"*/, v3);
    byte_4C1CF45 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (bonusFilterSprite = this->fields.bonusFilterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !bonusFilterSprite) )
  {
    sub_1C3B9C0(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17871/*"connectionGroupName"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17872/*"const"*/;
  UISprite__set_spriteName(bonusFilterSprite, *v6, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__SetMode(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        FollowerSelectItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C3B708(&this->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31885348(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SetMode_31885348(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  int32_t v13; // w20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  __int64 *v16; // x8
  const MethodInfo *v17; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  struct FollowerSelectItemListViewObject_o *tutorialListViewObject; // x23
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4C1CF3A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_FollowerSelectItemListViewManager_OnMoveEnd__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Count__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__, v7);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v8);
    sub_1C3B764(&StringLiteral_11544/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v9);
    byte_4C1CF3A = 1;
  }
  if ( mode != 3 )
  {
    this->fields.initMode = mode;
    this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    if ( mode == 1 )
    {
      v16 = &StringLiteral_11544/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/;
    }
    else
    {
      if ( mode != 4 )
      {
        if ( mode == 2 )
          FollowerSelectItemListViewManager__RequestListObject_31886100(this, 3, v15);
        return;
      }
      ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
      ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v17);
      if ( !ClippingObjectList )
        goto LABEL_31;
      size = ClippingObjectList->fields._size;
      v19 = ClippingObjectList;
      if ( size >= 1 )
      {
        this->fields.callbackCount = size;
        v20 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v19,
                   v20,
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
          v22 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_FollowerSelectItemListViewManager_OnMoveEnd__, 0LL);
          if ( !Item )
            break;
          if ( v20 )
          {
            FollowerSelectItemListViewObject__Init_31886604((FollowerSelectItemListViewObject_o *)Item, 2, v22, v23);
          }
          else
          {
            FollowerSelectItemListViewObject__Init_31886604((FollowerSelectItemListViewObject_o *)Item, 0, v22, v23);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)ClippingObjectList,
                                                                                0LL);
            if ( !ClippingObjectList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ClippingObjectList, 1, 0LL);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            ClippingObjectList[1].klass = (System_Collections_Generic_List_object__c *)this;
            sub_1C3B708(&ClippingObjectList[1]);
            tutorialListViewObject = this->fields.tutorialListViewObject;
            ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewObject__GetItem(
                                                                                (FollowerSelectItemListViewObject_o *)Item,
                                                                                v25);
            if ( !tutorialListViewObject )
              break;
            ((void (__fastcall *)(struct FollowerSelectItemListViewObject_o *, System_Collections_Generic_List_object__o *, Il2CppMethodPointer))tutorialListViewObject->klass->vtable._5_SetItem.method)(
              tutorialListViewObject,
              ClippingObjectList,
              tutorialListViewObject->klass->vtable._6_SetItem.methodPtr);
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.tutorialListViewObject;
            if ( !ClippingObjectList )
              break;
            FollowerSelectItemListViewObject__Init_31883864(
              (FollowerSelectItemListViewObject_o *)ClippingObjectList,
              6,
              v26);
          }
          if ( ++v20 >= v19->fields._size )
            return;
        }
LABEL_31:
        sub_1C3B9C0(ClippingObjectList, v11);
      }
      this->fields.callbackCount = 1;
      v16 = &StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/;
    }
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)*v16, 0.0, 0LL);
    return;
  }
  ClippingObjectList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewManager__get_ObjectList(
                                                                      this,
                                                                      *(const MethodInfo **)&mode);
  if ( !ClippingObjectList )
    goto LABEL_31;
  v12 = ClippingObjectList;
  if ( ClippingObjectList->fields._size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      ClippingObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v12,
                                                                          v13,
                                                                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__get_Item__);
      if ( !ClippingObjectList )
        break;
      FollowerSelectItemListViewObject__Init_31883864((FollowerSelectItemListViewObject_o *)ClippingObjectList, 5, v14);
      if ( ++v13 >= v12->fields._size )
        return;
    }
    goto LABEL_31;
  }
}


void __fastcall FollowerSelectItemListViewManager__SetMode_31886048(
        FollowerSelectItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C3B708(&this->fields.callbackFunc2);
  FollowerSelectItemListViewManager__SetMode_31885348(this, mode, v6);
}


void __fastcall FollowerSelectItemListViewManager__SetObjectItem(
        FollowerSelectItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  ListViewObject_o *v7; // x0
  int32_t initMode; // w8
  int32_t v9; // w1

  if ( (byte_4C1CF37 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewObject_TypeInfo, obj);
    byte_4C1CF37 = 1;
  }
  if ( obj
    && (methodPtr_low = LOBYTE(FollowerSelectItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (FollowerSelectItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == FollowerSelectItemListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  initMode = this->fields.initMode;
  if ( initMode == 3 )
  {
    if ( v7 )
    {
      v9 = 5;
      goto LABEL_17;
    }
LABEL_18:
    sub_1C3B9C0(v7, obj);
  }
  if ( initMode != 2 )
  {
    if ( v7 )
    {
      v9 = 2;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  if ( !v7 )
    goto LABEL_18;
  v9 = 3;
LABEL_17:
  FollowerSelectItemListViewObject__Init_31883864(
    (FollowerSelectItemListViewObject_o *)v7,
    v9,
    (const MethodInfo *)item);
}


void __fastcall FollowerSelectItemListViewManager__SetSortButtonImage(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  ListViewSort_o *sort; // x0
  __int64 v12; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  bool IsRecommendSupportGroupType; // w20
  UILabel_o *sortKindLabel; // x21
  UnityEngine_Object_o *sortOrderSprite; // x21
  struct ListViewSort_o *v18; // x8
  __int64 v19; // x9
  int v20; // w9
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x9
  System_String_o **v24; // x10
  System_String_o **v25; // x8
  System_String_o **v26; // x8

  if ( (byte_4C1CF49 & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_17879/*"contain"*/, v4);
    sub_1C3B764(&StringLiteral_17970/*"cpu.brand"*/, v5);
    sub_1C3B764(&StringLiteral_17923/*"cord_n"*/, v6);
    sub_1C3B764(&StringLiteral_17913/*"convertJsonStringToMap"*/, v7);
    sub_1C3B764(&StringLiteral_17930/*"costCurrency"*/, v8);
    sub_1C3B764(&StringLiteral_17876/*"consumeType"*/, v9);
    byte_4C1CF49 = 1;
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_39;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  IsRecommendSupportGroupType = ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_39;
    sortKindLabel = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, IsRecommendSupportGroupType, 0LL);
    if ( !sortKindLabel )
      goto LABEL_39;
    UILabel__set_text(sortKindLabel, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v18 = this->fields.sort;
    if ( v18 )
    {
      v19 = 56LL;
      if ( IsRecommendSupportGroupType )
        v19 = 152LL;
      v20 = *(_DWORD *)((char *)&v18->klass + v19);
      if ( v20 == 11 || v20 == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v21 = (System_String_o **)(v18->fields.isAscendingOrder ? &StringLiteral_17930/*"costCurrency"*/ : &StringLiteral_17923/*"cord_n"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v23 = (System_String_o **)&StringLiteral_17876/*"consumeType"*/;
              v24 = (System_String_o **)&StringLiteral_17879/*"contain"*/;
LABEL_35:
              if ( v22->fields.isAscendingOrder )
                v26 = v23;
              else
                v26 = v24;
              UISprite__set_spriteName((UISprite_o *)sort, *v26, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v25 = (System_String_o **)(v18->fields.isAscendingOrder ? &StringLiteral_17970/*"cpu.brand"*/ : &StringLiteral_17913/*"convertJsonStringToMap"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v25, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v23 = (System_String_o **)&StringLiteral_17879/*"contain"*/;
              v24 = (System_String_o **)&StringLiteral_17876/*"consumeType"*/;
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C3B9C0(sort, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager__SortClass(
        FollowerSelectItemListViewManager_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  FollowerSelectItemListViewManager_c *v13; // x0
  FollowerSelectItemListViewManager_c *v14; // x0
  int32_t followerClassId; // w21
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Collections_Generic_List_ListViewItem__o **p_itemList; // x20
  int size; // w25
  int32_t v21; // w22
  int v22; // w26
  Il2CppObject *v23; // x23
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *v29; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_4C1CF4C & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, *(_QWORD *)&classPos);
    sub_1C3B764(&FollowerSelectItemListViewItem_TypeInfo, v5);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem___ctor___77853840, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C3B764(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    byte_4C1CF4C = 1;
  }
  v13 = FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    v13 = FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( v13->static_fields->followerClassId != classPos )
  {
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsMixSupportGroupType(classPos, 0LL) )
    {
      v14 = FollowerSelectItemListViewManager_TypeInfo;
      if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
        v14 = FollowerSelectItemListViewManager_TypeInfo;
      }
      followerClassId = v14->static_fields->followerClassId;
      if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      ClassButtonControlComponent__IsMixSupportGroupType(followerClassId, 0LL);
    }
  }
  FollowerSelectItemListViewManager__SetClassId(this, classPos, method);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  p_itemList = &this->fields.itemList;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v21,
                                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v23 = (Il2CppObject *)itemList;
      methodPtr_low = LOBYTE(FollowerSelectItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerSelectItemListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerSelectItemListViewItem_TypeInfo )
      {
        break;
      }
      itemList = (System_Collections_Generic_List_object__o *)FollowerSelectItemListViewItem__get_SvtId(
                                                                (FollowerSelectItemListViewItem_o *)itemList,
                                                                0LL);
      if ( (int)itemList >= 1 )
      {
        HIDWORD(v23[1].klass) = v22;
        if ( !v16 )
          break;
        items = v16->fields._items;
        v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        v27 = v16->fields._size;
        if ( (unsigned int)v27 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v23,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + v27;
          v16->fields._size = v27 + 1;
          v28[4] = (Il2CppClass *)v23;
          sub_1C3B708(v28 + 4);
        }
        ++v22;
      }
      if ( size == ++v21 )
        goto LABEL_30;
      itemList = (System_Collections_Generic_List_object__o *)*p_itemList;
    }
    while ( *p_itemList );
LABEL_43:
    sub_1C3B9C0(itemList, v17);
  }
LABEL_30:
  v29 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_57193824(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v16,
    (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_ListViewItem___ctor___77853840);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v29;
  sub_1C3B708(&this->fields.itemList);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
  if ( !itemList )
    goto LABEL_43;
  if ( LODWORD(itemList[1].fields._items) == 11 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( (!questRestrictionInfo || !questRestrictionInfo->fields.isRestriction)
      && this->fields.isBonusFilterEnable
      && !ListViewSort__GetFilter((ListViewSort_o *)itemList, 18, 0LL) )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
      if ( !itemList )
        goto LABEL_43;
      if ( !ListViewSort__GetFilter((ListViewSort_o *)itemList, 19, 0LL) )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
        if ( !itemList )
          goto LABEL_43;
        if ( ListViewSort__GetFilter((ListViewSort_o *)itemList, 40, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)this->fields.sort;
          if ( !itemList )
            goto LABEL_43;
          ListViewSort__GetFilter((ListViewSort_o *)itemList, 41, 0LL);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall FollowerSelectItemListViewManager__Update(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  if ( !this->fields.isRefreshBtnHide )
    FollowerSelectItemListViewManager__UpdateRefreshButtonInfo(this, v3);
}


void __fastcall FollowerSelectItemListViewManager__UpdateRefreshButtonInfo(
        FollowerSelectItemListViewManager_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w20
  int64_t RefreshRemain; // x0
  __int64 v15; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x21
  UIWidget_o *refreshButtonSprite; // x21
  int64_t Time; // x0
  int64_t v20; // x21
  UILabel_o *refreshRemainLabel; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v27; // x20
  __int64 v28; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C1CF4D & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, method);
    sub_1C3B764(&FollowerListRequest_TypeInfo, v3);
    sub_1C3B764(&FollowerRecommendSupportListRequest_TypeInfo, v4);
    sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, v6);
    sub_1C3B764(&long_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_25497, v10);
    this = (FollowerSelectItemListViewManager_o *)sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C1CF4D = 1;
  }
  classButtonControl = v2->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_59;
  currentCursor = classButtonControl->fields.currentCursor;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
  if ( ClassButtonControlComponent__IsRecommendSupportGroupType(currentCursor, 0LL) )
  {
    if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
    RefreshRemain = FollowerRecommendSupportListRequest__GetRefreshRemain(0LL);
  }
  else
  {
    if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
    RefreshRemain = FollowerListRequest__getRefreshRemain(0LL);
  }
  v15 = RefreshRemain;
  if ( RefreshRemain <= 0 )
  {
    if ( !v2->fields.isRefreshClear )
      return;
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
    v2->fields.isRefreshClear = 0;
    if ( !this )
      goto LABEL_59;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0LL,
                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
    }
    else
    {
      this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonSprite;
      if ( !this )
        goto LABEL_59;
      v29.fields.r = 1.0;
      v29.fields.g = 1.0;
      v29.fields.b = 1.0;
      v29.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v29, 0LL);
    }
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
    if ( this )
    {
      v27 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)v27,
                                                      0LL,
                                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_59;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v27, 1, 0LL);
      }
      else
      {
        this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
        if ( !this )
          goto LABEL_59;
        v30.fields.r = 1.0;
        v30.fields.g = 1.0;
        v30.fields.b = 1.0;
        v30.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v30, 0LL);
      }
      this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
      if ( this )
      {
        this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_59:
    sub_1C3B9C0(this, method);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshButtonObject;
  if ( !this )
    goto LABEL_59;
  v16 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v16, 0, 0LL);
  }
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleObject;
  if ( !this )
    goto LABEL_59;
  v17 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0LL);
  }
  refreshButtonSprite = (UIWidget_o *)v2->fields.refreshButtonSprite;
  this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
  if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
    this = (FollowerSelectItemListViewManager_o *)FollowerSelectItemListViewManager_TypeInfo;
  }
  if ( !refreshButtonSprite )
    goto LABEL_59;
  UIWidget__set_color(refreshButtonSprite, *(UnityEngine_Color_o *)&this->fields.sort->fields.FILTER_DEFAULT_VALUE, 0LL);
  this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshTitleSprite;
  if ( !this )
    goto LABEL_59;
  UIWidget__set_color(
    (UIWidget_o *)this,
    FollowerSelectItemListViewManager_TypeInfo->static_fields->REFRESH_DARK_COLOR,
    0LL);
  v2->fields.isRefreshClear = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( v2->fields.refreshCheckTime != Time )
  {
    v20 = Time;
    this = (FollowerSelectItemListViewManager_o *)v2->fields.refreshRemainLabel;
    if ( this )
    {
      this = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        refreshRemainLabel = v2->fields.refreshRemainLabel;
        v28 = v15;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v28, v22, v23, v24);
        this = (FollowerSelectItemListViewManager_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_25497,
                                                        v25,
                                                        0LL);
        if ( refreshRemainLabel )
        {
          UILabel__set_text(refreshRemainLabel, (System_String_o *)this, 0LL);
          v2->fields.refreshCheckTime = v20;
          return;
        }
      }
    }
    goto LABEL_59;
  }
}


void __fastcall FollowerSelectItemListViewManager__add_callbackFunc(
        FollowerSelectItemListViewManager_o *this,
        FollowerSelectItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FollowerSelectItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FollowerSelectItemListViewManager_o *v10; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C1CF21 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1CF21 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v7->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C3BC80(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall FollowerSelectItemListViewManager__add_callbackFunc2(
        FollowerSelectItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FollowerSelectItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C1CF23 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1CF23 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C3BC80(v7);
  FollowerSelectItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ClippingObjectList(
        FollowerSelectItemListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C1CF28 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1CF28 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C3B9C0(0LL, v18);
      Item = (ListViewItem_o *)FollowerSelectItemListViewObject__GetItem(
                                 (FollowerSelectItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C3B9C0(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_42215272((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1C3B9C0(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C3B9C0(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C3B9C0(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C3B9C0(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1C3B708(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v11;
}


System_Collections_Generic_List_FollowerSelectItemListViewObject__o *__fastcall FollowerSelectItemListViewManager__get_ObjectList(
        FollowerSelectItemListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C1CF27 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1CF27 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_FollowerSelectItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_FollowerSelectItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1C3B9C0(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_FollowerSelectItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C3B708(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FollowerSelectItemListViewObject__o *)v11;
}


void __fastcall FollowerSelectItemListViewManager__remove_callbackFunc(
        FollowerSelectItemListViewManager_o *this,
        FollowerSelectItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FollowerSelectItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FollowerSelectItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C1CF22 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1CF22 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FollowerSelectItemListViewManager_CallbackFunc_c *)v7->klass != FollowerSelectItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FollowerSelectItemListViewManager_o *)sub_1C3BC80(v7);
  FollowerSelectItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall FollowerSelectItemListViewManager__remove_callbackFunc2(
        FollowerSelectItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4C1CF24 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1CF24 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C3BC80(v7);
  FollowerSelectItemListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewManager_CallbackFunc___ctor(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A74C88;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A74C30;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FollowerSelectItemListViewManager_CallbackFunc__BeginInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4C1CF56 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&FollowerSelectItemListViewManager_ResultKind_TypeInfo, v9);
    byte_4C1CF56 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             FollowerSelectItemListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v14, callback, object);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__EndInvoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall FollowerSelectItemListViewManager_CallbackFunc__Invoke(
        FollowerSelectItemListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall FollowerSelectItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4C1CF57 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager___c_TypeInfo, v1);
    byte_4C1CF57 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(FollowerSelectItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerSelectItemListViewManager___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewManager___c_o *)v2;
  sub_1C3B708(FollowerSelectItemListViewManager___c_TypeInfo->static_fields);
}


void __fastcall FollowerSelectItemListViewManager___c___ctor(
        FollowerSelectItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ListViewSort_o *__fastcall FollowerSelectItemListViewManager___c____cctor_b__133_0(
        FollowerSelectItemListViewManager___c_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8
  System_String_o *v7; // x19
  ListViewSort_o *v8; // x20
  __int64 v10; // x0
  System_NotImplementedException_o *v11; // x19
  __int64 v12; // x0

  if ( (byte_4C1CF58 & 1) == 0 )
  {
    sub_1C3B764(&ListViewSort_TypeInfo, *(_QWORD *)&questType);
    sub_1C3B764(&StringLiteral_6914/*"GetHashCode"*/, v4);
    sub_1C3B764(&StringLiteral_6915/*"GetHashCode() on Span and ReadOnlySpan is not supported."*/, v5);
    byte_4C1CF58 = 1;
  }
  if ( questType )
  {
    if ( questType != 1 )
    {
      v10 = sub_1C3B778(&System_NotImplementedException_TypeInfo);
      v11 = (System_NotImplementedException_o *)sub_1C3B9B0(v10);
      System_NotImplementedException___ctor(v11, 0LL);
      v12 = sub_1C3B778(&Method_FollowerSelectItemListViewManager___c___cctor_b__133_0__);
      sub_1C3B88C(v11, v12);
    }
    v6 = &StringLiteral_6914/*"GetHashCode"*/;
  }
  else
  {
    v6 = &StringLiteral_6915/*"GetHashCode() on Span and ReadOnlySpan is not supported."*/;
  }
  v7 = (System_String_o *)*v6;
  v8 = (ListViewSort_o *)sub_1C3B9B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_42232596(v8, v7, 11, 0, 0LL);
  return v8;
}