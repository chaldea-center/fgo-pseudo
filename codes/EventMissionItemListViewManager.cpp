void __fastcall EventMissionItemListViewManager___ctor(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  void *v11; // x1
  void *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  void *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1

  if ( (byte_4B1A1CD & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B1A1CD = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialogTitle, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialogMessage, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialogGetable, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, v26);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager__AcceptReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  int64_t v67; // x23
  DataManager_o *Instance; // x0
  GiftEntity_o *v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v78; // x8
  const MethodInfo *v79; // x1
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Text_StringBuilder_o *v83; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Text_StringBuilder_o *v93; // x21
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x25
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v110; // x26
  __int64 v111; // x2
  const MethodInfo *v112; // x3
  ItemMaster_o *v113; // x23
  unsigned __int64 v114; // x21
  System_Collections_Generic_List_object__o *v115; // x25
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  System_Collections_Generic_List_object__o *v119; // x24
  __int64 v120; // x2
  __int64 v121; // x3
  il2cpp_array_size_t v122; // w22
  Il2CppClass **v123; // x21
  Il2CppClass *v124; // x8
  GiftEntity_o **v125; // x21
  Il2CppClass *v126; // t1
  const MethodInfo *v127; // x3
  ServantEntity_o *v128; // x26
  bool IsCombineMaterial; // w27
  System_String_o *v130; // x0
  System_Text_StringBuilder_o *v131; // x27
  Il2CppObject *v132; // x26
  Il2CppObject *v133; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct System_Object_array *items; // x8
  _QWORD *v141; // x9
  __int64 size; // x10
  Il2CppClass **v143; // x0
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  DataManager_o *v153; // x28
  Il2CppClass **v154; // x0
  char v155; // w29
  bool IsCountableWithPlus; // w0
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  Il2CppObject **v160; // x8
  Il2CppObject *v161; // x27
  System_Text_StringBuilder_o *v162; // x26
  __int64 v163; // x1
  System_String_o *v164; // x28
  int32_t *v165; // x1
  Il2CppObject *v166; // x0
  __int64 v167; // x8
  System_Text_StringBuilder_o *v168; // x27
  System_Collections_Generic_List_object__o *v169; // x22
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x3
  System_Action_o *v179; // x22
  EventRewardSetEntity_o *SetRewardData; // x23
  void *v181; // x1
  Il2CppObject **v182; // x20
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  int64_t name; // x1
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v197; // x19
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x3
  System_Action_o *v201; // x20
  __int64 v202; // x1
  Il2CppObject *v203; // x19
  System_String_o *v204; // x0
  System_String_o *v205; // x0
  Il2CppObject *v206; // x22
  System_String_o *v207; // x20
  __int64 v208; // x1
  __int64 v209; // x2
  __int64 v210; // x3
  System_Action_o *v211; // x21
  __int64 v212; // [xsp+38h] [xbp-88h]
  __int64 v213; // [xsp+40h] [xbp-80h]
  int v214; // [xsp+48h] [xbp-78h]
  int32_t v215; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t getQpValue; // [xsp+58h] [xbp-68h] BYREF
  int32_t num; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4B1A1B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor___76786016, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__, v41, v42);
    sub_1BCA7E0(&EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__, v45, v46);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__, v47, v48);
    sub_1BCA7E0(&EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_25370/*"{0}×{1:#,0}"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_25418/*"×"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_49/*"\n "*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_25713/*"＋"*/, v65, v66);
    byte_4B1A1B8 = 1;
  }
  v67 = sub_1BCAA2C(EventMissionItemListViewManager___c__DisplayClass58_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v67, 0LL);
  if ( !v67 )
    goto LABEL_107;
  *(_QWORD *)(v67 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 16), (int64_t)this, v70, v71, v72, v73, v74, v75);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_107;
  if ( !Instance )
    goto LABEL_107;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v78 = this->fields.missionToRecieve;
  if ( !v78 )
    goto LABEL_107;
  if ( !Instance )
    goto LABEL_107;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v78->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v79);
  v83 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v80, v81, v82);
  System_Text_StringBuilder___ctor(v83, 0LL);
  *(_QWORD *)(v67 + 32) = v83;
  sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 32), (int64_t)v83, v84, v85, v86, v87, v88, v89);
  v93 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v90, v91, v92);
  System_Text_StringBuilder___ctor(v93, 0LL);
  *(_QWORD *)(v67 + 24) = v93;
  sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 24), (int64_t)v93, v94, v95, v96, v97, v98, v99);
  v103 = sub_1BCAA2C(EventMissionItemListViewManager___c__DisplayClass58_1_TypeInfo, v100, v101, v102);
  System_Object___ctor((Il2CppObject *)v103, 0LL);
  if ( !v103 )
    goto LABEL_107;
  *(_QWORD *)(v103 + 40) = v67;
  sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 40), v67, v104, v105, v106, v107, v108, v109);
  Instance = (DataManager_o *)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_107;
  if ( LODWORD(Instance->fields.lastFrameTime) == 1 )
  {
    *(_DWORD *)(v103 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_107;
    v110 = *(_QWORD *)&GiftListById->max_length;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    v213 = v103 + 40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
    v113 = (ItemMaster_o *)Instance;
    if ( (int)v110 >= 1 )
    {
      v114 = 0LL;
      while ( v114 < GiftListById->max_length )
      {
        Instance = (DataManager_o *)EventMissionItemListViewManager__IsDialogGift(
                                      this,
                                      GiftListById->m_Items[v114],
                                      v113,
                                      v112);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          ++*(_DWORD *)(v103 + 24);
        if ( (unsigned int)v110 == ++v114 )
          goto LABEL_20;
      }
LABEL_108:
      sub_1BCAA44(Instance, v69);
    }
LABEL_20:
    v212 = v103;
    *(_BYTE *)(v103 + 28) = 1;
    v115 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                          v69,
                                                          v111,
                                                          v112);
    System_Collections_Generic_List_object____ctor(
      v115,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v119 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                          v116,
                                                          v117,
                                                          v118);
    System_Collections_Generic_List_object____ctor(
      v119,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v110 >= 1 )
    {
      v122 = 0;
      v214 = v110;
      while ( v122 < GiftListById->max_length )
      {
        v123 = &GiftListById->obj.klass + (int)v122;
        v126 = v123[4];
        v125 = (GiftEntity_o **)(v123 + 4);
        v124 = v126;
        if ( !v126 )
          goto LABEL_107;
        Instance = (DataManager_o *)Gift__IsServant_38401528(HIDWORD(v124->_1.name), 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_107;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( v122 >= GiftListById->max_length )
            goto LABEL_108;
          if ( !*v125 )
            goto LABEL_107;
          if ( !Instance )
            goto LABEL_107;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (*v125)->fields.objectId,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_107;
          v128 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*((_DWORD *)&Instance->fields.lastFrameTime + 1), 0LL);
          Instance = (DataManager_o *)SvtType__IsStatusUp(v128->fields.type, 0LL);
          if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !*(_QWORD *)v213 )
              goto LABEL_107;
            Instance = *(DataManager_o **)(*(_QWORD *)v213 + 32LL);
            if ( !Instance )
              goto LABEL_107;
            v130 = (System_String_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                        Instance,
                                        Instance->klass[1]._1.image);
            Instance = (DataManager_o *)System_String__IsNullOrEmpty(v130, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !*(_QWORD *)v213 )
                goto LABEL_107;
              Instance = *(DataManager_o **)(*(_QWORD *)v213 + 32LL);
              if ( !Instance )
                goto LABEL_107;
              Instance = (DataManager_o *)System_Text_StringBuilder__Append_61563116(
                                            (System_Text_StringBuilder_o *)Instance,
                                            (System_String_o *)StringLiteral_49/*"\n "*/,
                                            0LL);
            }
            if ( !*(_QWORD *)v213 )
              goto LABEL_107;
            v131 = *(System_Text_StringBuilder_o **)(*(_QWORD *)v213 + 32LL);
            Instance = (DataManager_o *)ServantEntity__getName(v128, 0, -1, 0LL);
            if ( v122 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !*v125 )
              goto LABEL_107;
            v132 = (Il2CppObject *)Instance;
            num = (*v125)->fields.num;
            v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
            Instance = (DataManager_o *)System_String__Format_62415592(
                                          (System_String_o *)StringLiteral_25370/*"{0}×{1:#,0}"*/,
                                          v132,
                                          v133,
                                          0LL);
            if ( !v131 )
              goto LABEL_107;
            Instance = (DataManager_o *)System_Text_StringBuilder__Append_61563116(
                                          v131,
                                          (System_String_o *)Instance,
                                          0LL);
            if ( v122 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !v119 )
              goto LABEL_107;
            v69 = *v125;
            items = v119->fields._items;
            v141 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v119->fields._version;
            if ( !items )
              goto LABEL_107;
            size = v119->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v119,
                (Il2CppObject *)v69,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
            }
            else
            {
              v143 = &items->obj.klass + size;
              v119->fields._size = size + 1;
              v143[4] = (Il2CppClass *)v69;
              sub_1BCA784((PartyOrganizationUtility_o *)(v143 + 4), (int64_t)v69, v134, v135, v136, v137, v138, v139);
            }
          }
        }
        else
        {
          if ( v122 >= GiftListById->max_length )
            goto LABEL_108;
          Instance = (DataManager_o *)EventMissionItemListViewManager__IsDialogGift(this, *v125, v113, v127);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( v122 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !*v125 || !v113 )
              goto LABEL_107;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v113,
                                          (*v125)->fields.objectId,
                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v122 >= GiftListById->max_length )
              goto LABEL_108;
            if ( !v115 )
              goto LABEL_107;
            v69 = *v125;
            v150 = v115->fields._items;
            v151 = Method_System_Collections_Generic_List_GiftEntity__Add__;
            ++v115->fields._version;
            if ( !v150 )
              goto LABEL_107;
            v152 = v115->fields._size;
            v153 = Instance;
            if ( (unsigned int)v152 >= v150->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v115,
                (Il2CppObject *)v69,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
            }
            else
            {
              v154 = &v150->obj.klass + v152;
              v115->fields._size = v152 + 1;
              v154[4] = (Il2CppClass *)v69;
              sub_1BCA784((PartyOrganizationUtility_o *)(v154 + 4), (int64_t)v69, v144, v145, v146, v147, v148, v149);
            }
            if ( v122 >= GiftListById->max_length )
              goto LABEL_108;
            Instance = (DataManager_o *)*v125;
            if ( !*v125 )
              goto LABEL_107;
            Instance = (DataManager_o *)GiftEntity__isQp((GiftEntity_o *)Instance, 0LL);
            v155 = (char)Instance;
            if ( ((unsigned __int8)Instance & 1) == 0 || !this->fields.isQpAlreadyMax )
            {
              *(_BYTE *)(v212 + 28) = 0;
              if ( !v153 )
                goto LABEL_107;
              IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v153->fields.lookup, 0LL);
              v160 = (Il2CppObject **)&StringLiteral_25713/*"＋"*/;
              if ( !IsCountableWithPlus )
                v160 = (Il2CppObject **)&StringLiteral_25418/*"×"*/;
              v161 = *v160;
              v162 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v157, v158, v159);
              System_Text_StringBuilder___ctor(v162, 0LL);
              if ( !v162 )
                goto LABEL_107;
              System_Text_StringBuilder__Append_61563116(
                v162,
                (System_String_o *)v153->fields.m_CancellationTokenSource,
                0LL);
              if ( (v155 & 1) != 0 && this->fields.isQpMaxAlert && this->fields.getQpValue )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v163);
                v164 = LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                v165 = &getQpValue;
                getQpValue = this->fields.getQpValue;
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v163);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                if ( v122 >= GiftListById->max_length )
                  goto LABEL_108;
                if ( !*v125 )
                  goto LABEL_107;
                v164 = (System_String_o *)Instance;
                v165 = &v215;
                v215 = (*v125)->fields.num;
              }
              v166 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v165);
              Instance = (DataManager_o *)System_Text_StringBuilder__AppendFormat_61569468(v162, v164, v161, v166, 0LL);
              v167 = *(_QWORD *)v213;
              if ( !*(_QWORD *)v213 )
                goto LABEL_107;
              v168 = *(System_Text_StringBuilder_o **)(v167 + 24);
              if ( *(int *)(v212 + 24) >= 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v168 )
                  goto LABEL_107;
                Instance = (DataManager_o *)System_Text_StringBuilder__AppendFormat(
                                              v168,
                                              (System_String_o *)Instance,
                                              (Il2CppObject *)v162,
                                              0LL);
                if ( !*(_QWORD *)v213 )
                  goto LABEL_107;
                Instance = *(DataManager_o **)(*(_QWORD *)v213 + 24LL);
                if ( !Instance )
                  goto LABEL_107;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_61563116(
                                              (System_Text_StringBuilder_o *)Instance,
                                              (System_String_o *)StringLiteral_49/*"\n "*/,
                                              0LL);
              }
              else
              {
                if ( !v168 )
                  goto LABEL_107;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_61563744(
                                              *(System_Text_StringBuilder_o **)(v167 + 24),
                                              v162,
                                              0LL);
              }
            }
          }
        }
        if ( v214 == ++v122 )
          goto LABEL_89;
      }
      goto LABEL_108;
    }
LABEL_89:
    v169 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                          v69,
                                                          v120,
                                                          v121);
    System_Collections_Generic_List_object____ctor_56235344(
      v169,
      (System_Collections_Generic_IEnumerable_T__o *)v115,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_GiftEntity___ctor___76786016);
    *(_QWORD *)(v212 + 16) = v169;
    sub_1BCA784((PartyOrganizationUtility_o *)(v212 + 16), (int64_t)v169, v170, v171, v172, v173, v174, v175);
    Instance = *(DataManager_o **)(v212 + 16);
    if ( !Instance )
      goto LABEL_107;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v119,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v179 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v176, v177, v178);
    System_Action___ctor(
      v179,
      (Il2CppObject *)v212,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__0__,
      0LL);
    if ( this->fields.isTreasureEffect )
    {
      Instance = (DataManager_o *)this->fields.eventRootComponent;
      if ( Instance )
      {
        EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)Instance, 0LL);
        MissionListViewManager__StartEventMissionClearItemAction(
          (MissionListViewManager_o *)this,
          GiftListById,
          0,
          v179,
          0LL);
        return;
      }
LABEL_107:
      sub_1BCAA3C(Instance, v69);
    }
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v179, 0LL);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, 0LL);
    v181 = StringLiteral_1/*""*/;
    *(_QWORD *)(v103 + 32) = StringLiteral_1/*""*/;
    v182 = (Il2CppObject **)(v103 + 32);
    sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 32), (int64_t)v181, v183, v184, v185, v186, v187, v188);
    if ( !SetRewardData )
      goto LABEL_107;
    name = (int64_t)SetRewardData->fields.name;
    *v182 = (Il2CppObject *)name;
    sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 32), name, v189, v190, v191, v192, v193, v194);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (DataManager_o *)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v197 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v201 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v198, v199, v200);
      System_Action___ctor(
        v201,
        (Il2CppObject *)v103,
        Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__1__,
        0LL);
      if ( !v197 )
        goto LABEL_107;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v197, v201, 0LL);
    }
    else
    {
      v203 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v202);
      v204 = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v205 = System_String__Format(v204, *v182, 0LL);
      v206 = *(Il2CppObject **)(v103 + 40);
      v207 = v205;
      v211 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v208, v209, v210);
      System_Action___ctor(
        v211,
        v206,
        Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__2__,
        0LL);
      if ( !v203 )
        goto LABEL_107;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v203,
        (System_String_o *)StringLiteral_1/*""*/,
        v207,
        v211,
        150,
        0,
        0,
        0,
        1,
        0,
        1,
        0,
        0LL,
        0.0,
        0LL);
    }
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
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

  EventMissionItemListViewManager__CreateList_46554360(this, missionList, eventId, isDailyMission, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__CreateList_46554360(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  bool v10; // w23
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
  int64_t Instance; // x0
  __int64 v30; // x1
  struct UIScrollView_o *scrollView; // x8
  __int64 v32; // x1
  Il2CppObject *Entity; // x23
  bool v34; // w9
  int64_t v35; // x2
  __int64 v36; // x3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x8
  unsigned __int64 v42; // x26
  bool v43; // w22
  EventMissionEntity_o *v44; // x25
  System_Collections_Generic_List_object__o *itemList; // x23
  EventMissionItemListViewItem_o *v46; // x24
  const MethodInfo *v47; // x3
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  struct ListViewSort_o *sort; // x1
  __int64 v59; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  __int64 v61; // x1
  UILabel_o *v62; // x21

  v10 = isTouchListEnabled;
  if ( (byte_4B1A1A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, missionList, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, v27, v28);
    byte_4B1A1A7 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = v10;
  if ( !scrollView )
    goto LABEL_36;
  scrollView->fields.disableDragIfFits = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v34 = Instance > (__int64)Entity[6].klass && Instance <= (__int64)Entity[6].monitor;
  this->fields.isEndEvent = v34;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v30);
  Instance = UserMissionNewManager__ReadData(0LL);
  if ( !missionList )
    goto LABEL_36;
  v41 = *(_QWORD *)&missionList->max_length;
  if ( (int)v41 >= 1 )
  {
    v42 = 0LL;
    v43 = isDailyMission;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)v41 )
        sub_1BCAA44(Instance, v30);
      v44 = missionList->m_Items[v42];
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v46 = (EventMissionItemListViewItem_o *)sub_1BCAA2C(EventMissionItemListViewItem_TypeInfo, v30, v35, v36);
      EventMissionItemListViewItem___ctor(v46, v44, v43, v47);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v46,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v46;
        sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v46, v48, v49, v50, v51, v52, v53);
      }
      LODWORD(v41) = missionList->max_length;
      if ( (__int64)++v42 >= (int)v41 )
        goto LABEL_24;
    }
LABEL_36:
    sub_1BCAA3C(Instance, v30);
  }
LABEL_24:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)sort, v35, v36, v37, v38, v39, v40);
  }
  if ( !byte_4B1A285 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, sort, v35);
    byte_4B1A285 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField;
  EventMissionItemListViewManager__setList(this, (const MethodInfo *)sort);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v62 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v62 )
      goto LABEL_36;
    UILabel__set_text(v62, (System_String_o *)Instance, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  EventMissionActionAddEntity_o *v18; // x21
  EventMissionActionInfo_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  EventMissionActionEntity_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t vals; // x1
  EventMissionItemListViewManager_o *v34; // x0
  const MethodInfo *v35; // x2
  System_String_o *VoiceAssetName; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B1A1B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4, v5);
    sub_1BCA7E0(&EventMissionActionInfo_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalTransitionInfo_TypeInfo, v10, v11);
    byte_4B1A1B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v18 = EntityFromIdProgressTypeAndActionType;
    v19 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v15, v16, v17);
    EventMissionActionInfo___ctor_42814600(v19, v18, 0LL);
LABEL_11:
    v26 = (EventMissionActionEntity_o *)sub_1BCAA2C(TerminalTransitionInfo_TypeInfo, v20, v21, v22);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v26, 0LL);
    if ( v26 )
    {
      v26->fields.missionId = missionId;
      if ( v19 )
      {
        vals = (int64_t)v19->fields.vals;
        v26->fields.vals = (struct System_String_array *)vals;
        sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.vals, vals, v27, v28, v29, v30, v31, v32);
        VoiceAssetName = EventMissionItemListViewManager__GetVoiceAssetName(v34, v19->fields.vals, v35);
        *(_QWORD *)&v26->fields.optionId = VoiceAssetName;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v26->fields.optionId,
          (int64_t)VoiceAssetName,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        return (TerminalTransitionInfo_o *)v26;
      }
    }
LABEL_15:
    sub_1BCAA3C(Instance, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v26 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
          (EventMissionActionMaster_o *)Instance,
          missionId,
          5,
          4,
          0LL);
  if ( v26 )
  {
    v19 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v23, v24, v25);
    EventMissionActionInfo___ctor(v19, v26, 0LL);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v26;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  void *v18; // x1
  void *v19; // x1
  PartyOrganizationUtility_o *p_dialogMessage; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  void *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t *p_overQpValue; // x26
  _DWORD *SelfUserGame; // x0
  __int64 v36; // x1
  _DWORD *v37; // x22
  int32_t v38; // w23
  int32_t QpMax; // w8
  int v40; // w23
  int32_t v41; // w24
  System_String_o *v42; // x23
  Il2CppObject *v43; // x24
  System_String_o *v44; // x0
  __int64 v45; // x1
  BalanceConfig_c *v46; // x8
  Il2CppObject *v47; // x25
  Il2CppObject *v48; // x0
  struct System_String_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int32_t v56; // w8
  int32_t num; // w8
  System_String_o *v58; // x21
  System_String_o *NumberFormat; // x0
  int32_t v60; // w8
  Il2CppObject *v61; // x22
  System_String_o *v62; // x0
  __int64 v63; // x1
  BalanceConfig_c *v64; // x8
  Il2CppObject *v65; // x23
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  bool result; // w0

  if ( (byte_4B1A1C9 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, giftEnt, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_8810/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_8813/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B1A1C9 = 1;
  }
  v18 = StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dialogTitle,
    (int64_t)v18,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v19 = StringLiteral_1/*""*/;
  p_dialogMessage = (PartyOrganizationUtility_o *)&this->fields.dialogMessage;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialogMessage, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  v27 = StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialogGetable, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  p_overQpValue = &this->fields.overQpValue;
  this->fields.isQpAlreadyMax = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  v37 = SelfUserGame;
  v38 = SelfUserGame[24];
  SelfUserGame = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v36);
    SelfUserGame = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)SelfUserGame + 23) + 4LL);
  if ( v38 >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8810/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v58 = (System_String_o *)SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v60 = v37[24];
      v61 = (Il2CppObject *)NumberFormat;
      v62 = LocalizationManager__GetNumberFormat(v60, 0LL);
      v64 = BalanceConfig_TypeInfo;
      v65 = (Il2CppObject *)v62;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v63);
        v64 = BalanceConfig_TypeInfo;
      }
      v66 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v64->static_fields->QpMax, 0LL);
      v67 = System_String__Format_62415660(v58, v61, v65, v66, 0LL);
      p_dialogMessage->klass = (PartyOrganizationUtility_c *)v67;
      sub_1BCA784(p_dialogMessage, (int64_t)v67, v68, v69, v70, v71, v72, v73);
      num = giftEnt->fields.num;
      goto LABEL_22;
    }
LABEL_24:
    sub_1BCAA3C(SelfUserGame, v36);
  }
  if ( !giftEnt )
    goto LABEL_24;
  v40 = v37[24];
  v41 = giftEnt->fields.num;
  if ( !SelfUserGame[56] )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame, v36);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v41 + v40 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8813/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v43 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v44 = LocalizationManager__GetNumberFormat(v37[24], 0LL);
    v46 = BalanceConfig_TypeInfo;
    v47 = (Il2CppObject *)v44;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v45);
      v46 = BalanceConfig_TypeInfo;
    }
    v48 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v46->static_fields->QpMax, 0LL);
    v49 = System_String__Format_62415660(v42, v43, v47, v48, 0LL);
    this->fields.dialogMessage = v49;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialogMessage, (int64_t)v49, v50, v51, v52, v53, v54, v55);
    v56 = BalanceConfig_TypeInfo->static_fields->QpMax - v37[24];
    this->fields.getQpValue = v56;
    num = giftEnt->fields.num - v56;
LABEL_22:
    result = 1;
    *p_overQpValue = num;
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
  __int64 v6; // x2
  EventMissionItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A1AD & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B1A1AD = 1;
  }
  result = (EventMissionItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventMissionItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 index,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventMissionItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
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


System_String_o *__fastcall EventMissionItemListViewManager__GetReplaceDialogMessage(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *beforeGiftEntity,
        GiftEntity_o *AfterGiftEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  ConstantStrMaster_o *Master_object; // x0
  __int64 v19; // x1
  ConstantStrMaster_o *v20; // x21
  System_String_o *Value; // x24
  __int64 v22; // x1
  System_String_o *v23; // x23
  System_String_o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Object_array *v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x19
  __int64 v53; // x0

  if ( (byte_4B1A1AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantStrMaster___, beforeGiftEntity, AfterGiftEntity);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&object___TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_5718/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_5719/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5786/*"EVENT_REWARD_REPLACE_MSG"*/, v16, v17);
    byte_4B1A1AF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, beforeGiftEntity);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_24;
  v20 = Master_object;
  Value = ConstantStrMaster__GetValue(Master_object, (System_String_o *)StringLiteral_5719/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, 0LL);
  v23 = ConstantStrMaster__GetValue(v20, (System_String_o *)StringLiteral_5718/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5786/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_object = (ConstantStrMaster_o *)sub_1BCA888(object___TypeInfo, 4LL);
  if ( !Master_object )
    goto LABEL_24;
  v31 = (System_Object_array *)Master_object;
  if ( Value )
  {
    Master_object = (ConstantStrMaster_o *)sub_1BCA91C(Value, Master_object->klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( !v31->max_length )
    goto LABEL_25;
  v31->m_Items[0] = (Il2CppObject *)Value;
  sub_1BCA784((PartyOrganizationUtility_o *)v31->m_Items, (int64_t)Value, v25, v26, v27, v28, v29, v30);
  if ( v23 )
  {
    Master_object = (ConstantStrMaster_o *)sub_1BCA91C(v23, v31->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_25;
  v31->m_Items[1] = (Il2CppObject *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[1], (int64_t)v23, v32, v33, v34, v35, v36, v37);
  if ( !beforeGiftEntity )
    goto LABEL_24;
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v44 = (int64_t)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1BCA91C(Master_object, v31->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_26:
      v53 = sub_1BCAA60(Master_object);
      sub_1BCA908(v53, 0LL);
    }
  }
  if ( v31->max_length <= 2 )
    goto LABEL_25;
  v31->m_Items[2] = (Il2CppObject *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
  if ( !AfterGiftEntity )
LABEL_24:
    sub_1BCAA3C(Master_object, v19);
  Master_object = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v51 = (int64_t)Master_object;
  if ( Master_object )
  {
    Master_object = (ConstantStrMaster_o *)sub_1BCA91C(Master_object, v31->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_26;
  }
  if ( v31->max_length <= 3 )
LABEL_25:
    sub_1BCAA44(Master_object, v19);
  v31->m_Items[3] = (Il2CppObject *)v51;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
  return System_String__Format_62415728(v24, v31, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager__GetSelectEventMissionId(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectEventMissionId;
}


System_String_o *__fastcall EventMissionItemListViewManager__GetVoiceAssetName(
        EventMissionItemListViewManager_o *this,
        System_String_array *afterActionVals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  signed int max_length; // w8
  System_String_o **v9; // x20
  signed int v10; // w21
  System_String_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 methodPtr_low; // x9
  EventMissionItemListViewManager_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B1A1B7 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, afterActionVals, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    this = (EventMissionItemListViewManager_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1A1B7 = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    v9 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v9;
  }
  v9 = (System_String_o **)&StringLiteral_1/*""*/;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)max_length )
      sub_1BCAA44(this, afterActionVals);
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v10], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v10 += 2;
    if ( v10 >= max_length )
      return *v9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
    sub_1BCAA3C(Instance, v13);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    v9 = (System_String_o **)&Instance[98];
    return *v9;
  }
  sub_1BCACFC(Instance);
  EventMissionItemListViewManager__AcceptReward(v15, v16);
  return result;
}


bool __fastcall EventMissionItemListViewManager__IsDialogGift(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *gift,
        ItemMaster_o *itmMst,
        const MethodInfo *method)
{
  MissionListViewManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = (MissionListViewManager_o *)this;
  if ( (byte_4B1A1CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, gift, itmMst);
    this = (EventMissionItemListViewManager_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                  v7,
                                                  v8);
    byte_4B1A1CC = 1;
  }
  entity = 0LL;
  if ( !gift )
    goto LABEL_18;
  if ( Gift__IsServant_38401528(gift->fields.type, 0LL) )
    return 0;
  if ( Gift__IsCommandCode_38401920(gift->fields.type, 0LL) )
    return 0;
  this = (EventMissionItemListViewManager_o *)Gift__IsCostumeRelease(gift->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !itmMst )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)itmMst,
         &entity,
         gift->fields.objectId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity && this )
    {
      if ( CommonUI__IsGetItemEffect((CommonUI_o *)this, (int32_t)entity[1].klass, 0LL) )
        return 0;
      this = (EventMissionItemListViewManager_o *)MissionListViewManager__get_IsPlayGetEffect(v6, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 1;
      if ( entity )
        return MissionListViewManager__IsExcludeGetItemEffect(v6, (int32_t)entity[1].klass, 0LL);
    }
LABEL_18:
    sub_1BCAA3C(this, gift);
  }
  return 0;
}


void __fastcall EventMissionItemListViewManager__ModifyItem(
        EventMissionItemListViewManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  MissionListViewItem_o *current; // x22
  __int64 methodPtr_low; // x10
  __int64 MissionId; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  struct EventMissionEntity_o *v33; // x8
  int32_t v34; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v36; // x1
  struct ListViewObject_o *v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A1BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9);
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B1A1BE = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve
      || !MasterData_object
      || (Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        (UserEventMissionMaster_o *)MasterData_object,
                                        (int64_t)Instance,
                                        missionToRecieve->fields.id,
                                        0LL),
          !this->fields.itemList) )
    {
LABEL_33:
      sub_1BCAA3C(Instance, v21);
    }
    v25 = Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      (System_Collections_Generic_List_object__o *)this->fields.itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v39 = v38;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v26 )
        break;
      current = (MissionListViewItem_o *)v39.fields._current;
      if ( !v39.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v39.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1BCAA3C(v26, v27);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v39.fields._current, 0LL);
      v33 = this->fields.missionToRecieve;
      if ( !v33 )
        sub_1BCAA3C(MissionId, v31);
      v34 = MissionId;
      if ( (_DWORD)MissionId == v33->fields.id )
      {
        if ( !byte_4B12FAA )
        {
          MissionId = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v31, v32);
          byte_4B12FAA = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v34;
        if ( !v25 )
          sub_1BCAA3C(MissionId, v31);
        MissionListViewItem__ModifyItem(current, *(_DWORD *)&v25->fields._DispLog == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v37 = current->fields.viewObject;
        if ( !v37 )
          sub_1BCAA3C(0LL, v36);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v37->klass->vtable._5_SetItem.method)(
          v37,
          current,
          v37->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  EventMissionItemListViewItem_o *Item; // x0
  __int64 v18; // x1
  ListViewItem_o *v19; // x22
  UnityEngine_Object_o *viewObject; // x23
  __int64 v21; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v23; // x3
  System_Collections_IEnumerator_o *v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1A1A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index, onFinish);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1A1A9 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_16;
  v19 = (ListViewItem_o *)Item;
  viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v25,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v25.fields._current == v19 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v19, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  Item = (EventMissionItemListViewItem_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( this->fields.tempFilterStatus == 1
      && (!eventMissionActionInfo || eventMissionActionInfo->fields.missionActionType == 4) )
    {
      v24 = EventMissionItemListViewManager__SetPreviousFilter(this, v19->fields.sortIndex, onFinish, v23);
    }
    else
    {
      v24 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v19->fields.sortIndex, onFinish, v23);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
  }
  else
  {
LABEL_16:
    if ( !onFinish )
      sub_1BCAA3C(Item, v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onFinish->fields.m_target)(
      onFinish->fields.original_method_info,
      *(_QWORD *)&onFinish->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1A1AB & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo, *(_QWORD *)&index, onFinished);
    byte_4B1A1AB = 1;
  }
  v7 = sub_1BCAA2C(
         EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_TypeInfo,
         *(_QWORD *)&index,
         onFinished,
         method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)onFinished, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventMissionItemListViewManager__OnChangeAlphaAnim(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  int size; // w21
  int32_t v9; // w20

  if ( (byte_4B1A1C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v4, v5);
    byte_4B1A1C1 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                  this,
                                                                  v7);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v7);
      if ( size == ++v9 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v7);
  }
}


void __fastcall EventMissionItemListViewManager__OnClickFilterList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  __int64 filterStatus; // x8

  if ( (byte_4B1A1C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventMissionItemListViewManager_OnClickFilterList__, method, v2);
    byte_4B1A1C4 = 1;
  }
  v4 = Method_EventMissionItemListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_EventMissionItemListViewManager_OnClickFilterList__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_C0B6D0[filterStatus];
  EventMissionItemListViewManager__setList(this, v6);
}


void __fastcall EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
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
  __int64 v28; // x20
  MissionListViewItem_o *EventMissionEntity; // x0
  MissionListViewItem_o *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 methodPtr_low; // x10
  EventMissionItemListViewItem_o *Item; // x0
  MissionListViewItem_o **v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int32_t selectNum; // w8
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v48; // x2
  GiftAddMaster_o *v49; // x22
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v51; // x22
  int32_t giftId; // w25
  int32_t priorGiftId; // w25
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int32_t z_low; // w24
  ScrTerminalListTop_c *v61; // x0
  struct ScrTerminalListTop_StaticFields *static_fields; // x8
  struct System_String_o *TREASURE_GET_NORMAL; // x1
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  int32_t targetId; // w24
  struct System_String_o *OverwriteTreasureEffectId; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_String_o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  GiftMaster_o *v81; // x23
  GiftEntity_o *DataById; // x0
  GiftEntity_o *v83; // x22
  EventMissionEntity_o *v84; // x1
  const MethodInfo *v85; // x2
  __int64 v86; // x1
  GiftEntity_array *OriginalGiftData; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v89; // x21
  Il2CppObject *Instance; // x19
  const MethodInfo *v91; // x3
  System_String_o *ReplaceDialogMessage; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Action_o *v96; // x22

  if ( (byte_4B1A1AE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftAddMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager_OnClickListView__, v12, v13);
    sub_1BCA7E0(&EventMissionItemListViewObject_TypeInfo, v14, v15);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v16, v17);
    sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__, v22, v23);
    sub_1BCA7E0(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v26, v27);
    byte_4B1A1AE = 1;
  }
  v28 = sub_1BCAA2C(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, obj, method, v3);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_84;
  *(_QWORD *)(v28 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)this, v31, v32, v33, v34, v35, v36);
  if ( this->fields.isClickListViewEnabled )
  {
    if ( !obj )
      goto LABEL_84;
    methodPtr_low = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_84;
    if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewObject_TypeInfo )
      goto LABEL_84;
    Item = EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, (const MethodInfo *)v30);
    *(_QWORD *)(v28 + 24) = Item;
    v39 = (MissionListViewItem_o **)(v28 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)Item, v40, v41, v42, v43, v44, v45);
    EventMissionEntity = *(MissionListViewItem_o **)(v28 + 24);
    if ( !EventMissionEntity )
      goto LABEL_84;
    EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
    if ( !EventMissionEntity )
      goto LABEL_84;
    selectNum = EventMissionEntity->fields.selectNum;
    *(_WORD *)&this->fields.isQpMaxAlert = 0;
    this->fields.selectEventMissionId = selectNum;
    EventMissionEntity = *v39;
    if ( !*v39 )
      goto LABEL_84;
    if ( (((__int64 (__fastcall *)(MissionListViewItem_o *, void *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method)(
            EventMissionEntity,
            EventMissionEntity->klass[1]._1.image) & 1) == 0 )
      goto LABEL_16;
    EventMissionEntity = *v39;
    if ( !*v39 )
      goto LABEL_84;
    EventMissionEntity = (MissionListViewItem_o *)EventMissionItemListViewItem__get_IsHideReward(
                                                    (EventMissionItemListViewItem_o *)EventMissionEntity,
                                                    (const MethodInfo *)v30);
    if ( ((unsigned __int8)EventMissionEntity & 1) != 0 )
      goto LABEL_16;
    v30 = *v39;
    if ( !*v39 )
      goto LABEL_84;
    if ( LOBYTE(v30[1].monitor) )
    {
LABEL_16:
      EventMissionEntity = *v39;
      if ( !*v39 )
        goto LABEL_84;
      if ( EventMissionEntity->fields.progStatus == 3 )
      {
        if ( this->fields.filterStatus == 1 )
        {
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          this->fields.tempSelectDispNo = EventMissionEntity->fields.sortValue0;
          EventMissionEntity = *v39;
          if ( !*v39 )
            goto LABEL_84;
        }
        if ( EventMissionItemListViewItem__GetIsRewardQp(
               (EventMissionItemListViewItem_o *)EventMissionEntity,
               (const MethodInfo *)v30) )
        {
          EventMissionEntity = *v39;
          if ( !*v39 )
            goto LABEL_84;
          IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(
                         (EventMissionItemListViewItem_o *)EventMissionEntity,
                         (const MethodInfo *)v30);
          this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v48);
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
        EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftAddMaster___);
        if ( !*v39 )
          goto LABEL_84;
        v49 = (GiftAddMaster_o *)EventMissionEntity;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v39, 0LL);
        if ( !EventMissionEntity || !v49 )
          goto LABEL_84;
        ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(
                               v49,
                               HIDWORD(EventMissionEntity->fields.sortValue2B),
                               0LL);
        v51 = ValidPriorDataById;
        if ( ValidPriorDataById && ValidPriorDataById->fields.priority >= 2 )
        {
          EventMissionEntity = *v39;
          if ( !*v39 )
            goto LABEL_84;
          giftId = v51->fields.giftId;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          if ( giftId == HIDWORD(EventMissionEntity->fields.sortValue2B) )
          {
            EventMissionEntity = *v39;
            if ( !*v39 )
              goto LABEL_84;
            priorGiftId = v51->fields.priorGiftId;
            EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                            EventMissionEntity,
                                                            0LL);
            if ( !EventMissionEntity )
              goto LABEL_84;
            if ( priorGiftId != HIDWORD(EventMissionEntity->fields.sortValue2B) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
              EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftAddMaster___);
              if ( !EventMissionEntity )
                goto LABEL_84;
              v51 = GiftAddMaster__GetValidPriorDataById(
                      (GiftAddMaster_o *)EventMissionEntity,
                      v51->fields.priorGiftId,
                      0LL);
            }
          }
        }
        EventMissionEntity = *v39;
        if ( !*v39 )
          goto LABEL_84;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                        EventMissionEntity,
                                                        0LL);
        if ( !EventMissionEntity )
          goto LABEL_84;
        z_low = LODWORD(EventMissionEntity->fields.basePosition.fields.z);
        this->fields.giftIconId = z_low;
        if ( z_low >= 1 )
        {
          v61 = ScrTerminalListTop_TypeInfo;
          if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v30);
            v61 = ScrTerminalListTop_TypeInfo;
          }
          static_fields = v61->static_fields;
          if ( z_low <= 3 )
            TREASURE_GET_NORMAL = static_fields->TREASURE_GET_NORMAL;
          else
            TREASURE_GET_NORMAL = static_fields->PRIZE_GET_NORMAL;
          this->fields.useTreasureGetEffectName = TREASURE_GET_NORMAL;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.useTreasureGetEffectName,
            (int64_t)TREASURE_GET_NORMAL,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
        }
        if ( v51 )
        {
          EventMissionEntity = *v39;
          if ( !*v39 )
            goto LABEL_84;
          targetId = v51->fields.targetId;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_84;
          if ( targetId == EventMissionEntity->fields.selectNum )
          {
            OverwriteTreasureEffectId = GiftAddEntity__GetOverwriteTreasureEffectId(v51, 0LL);
            if ( !OverwriteTreasureEffectId )
              OverwriteTreasureEffectId = this->fields.useTreasureGetEffectName;
            this->fields.useTreasureGetEffectName = OverwriteTreasureEffectId;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.useTreasureGetEffectName,
              (int64_t)OverwriteTreasureEffectId,
              v68,
              v69,
              v70,
              v71,
              v72,
              v73);
            v74 = GiftAddEntity__GetOverWriteTitleSprite(v51, 0LL);
            this->fields.overWriteTitleSpriteName = v74;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.overWriteTitleSpriteName,
              (int64_t)v74,
              v75,
              v76,
              v77,
              v78,
              v79,
              v80);
          }
        }
        if ( this->fields.useTreasureGetEffectName )
          this->fields.isTreasureEffect = 1;
        if ( this->fields.overWriteTitleSpriteName )
          this->fields.isChangeTitleSprite = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
        EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !*v39
          || (v81 = (GiftMaster_o *)EventMissionEntity,
              (EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v39, 0LL)) == 0LL)
          || !v81 )
        {
LABEL_84:
          sub_1BCAA3C(EventMissionEntity, v30);
        }
        DataById = GiftMaster__getDataById(v81, HIDWORD(EventMissionEntity->fields.sortValue2B), 0LL);
        if ( !DataById
          || (v83 = DataById, !DataById->fields._IsReplacedData_k__BackingField)
          || this->fields.isTreasureEffect
          || this->fields.giftIconId != -1 )
        {
          EventMissionEntity = *v39;
          if ( *v39 )
          {
            v84 = MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
            EventMissionItemListViewManager__recieveReward(this, v84, v85);
            return;
          }
          goto LABEL_84;
        }
        EventMissionEntity = *v39;
        if ( !*v39 )
          goto LABEL_84;
        EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                        EventMissionEntity,
                                                        0LL);
        if ( !EventMissionEntity )
          goto LABEL_84;
        OriginalGiftData = GiftMaster__GetOriginalGiftData(v81, HIDWORD(EventMissionEntity->fields.sortValue2B), 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v86);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(OriginalGiftData, 0LL);
        if ( IconGiftEntity )
        {
          v89 = IconGiftEntity;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                                   (EventMissionItemListViewManager_o *)Instance,
                                   v89,
                                   v83,
                                   v91);
          v96 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v94, v95);
          System_Action___ctor(
            v96,
            (Il2CppObject *)v28,
            Method_EventMissionItemListViewManager___c__DisplayClass47_0__OnClickListView_b__0__,
            0LL);
          if ( !Instance )
            goto LABEL_84;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            ReplaceDialogMessage,
            v96,
            -1,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            0LL,
            0.0,
            0LL);
        }
      }
      else
      {
        v64 = Method_EventMissionItemListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v64 = (_QWORD *)sub_1BCA7F8(Method_EventMissionItemListViewManager_OnClickListView__);
        v65 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v64, v64[4]);
        OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0LL);
      }
    }
    else
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v30, 1, 0LL);
    }
  }
}


void __fastcall EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_o *closeCallback,
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  GiftMaster_o *Master_object; // x0
  __int64 v18; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  EventMissionItemListViewManager___c_c *v24; // x8
  System_Object_array *v25; // x21
  System_Func_object__bool__o *_9__78_0; // x22
  Il2CppObject *v27; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct EventMissionEntity_o *v35; // x8

  if ( (byte_4B1A1C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_GiftEntity___, closeCallback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_GiftEntity__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__, v13, v14);
    sub_1BCA7E0(&EventMissionItemListViewManager___c_TypeInfo, v15, v16);
    byte_4B1A1C7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, closeCallback);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_object )
    goto LABEL_19;
  GiftListById = GiftMaster__GetGiftListById(Master_object, missionToRecieve->fields.giftId, 0LL);
  v24 = EventMissionItemListViewManager___c_TypeInfo;
  v25 = (System_Object_array *)GiftListById;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v21);
    v24 = EventMissionItemListViewManager___c_TypeInfo;
  }
  _9__78_0 = (System_Func_object__bool__o *)v24->static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v21);
      v24 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__78_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GiftEntity__bool__TypeInfo, v21, v22, v23);
    System_Func_object__bool____ctor(
      _9__78_0,
      v27,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__78_0__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__78_0 = (struct System_Func_GiftEntity__bool__o *)_9__78_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__78_0,
      (int64_t)_9__78_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( BasicHelper__Any_object__49274176(
         v25,
         (System_Func_T__bool__o *)_9__78_0,
         (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_object = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_object )
    {
      Master_object = (GiftMaster_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Master_object,
                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v35 = this->fields.missionToRecieve;
      if ( v35 )
      {
        if ( Master_object )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_object,
            this->fields.currentEventId,
            v35->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(Master_object, v18);
  }
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall EventMissionItemListViewManager__OpenQpMaxAlertDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
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
  System_String_o *v25; // x20
  System_String_o *v26; // x21
  System_String_o *v27; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_String_o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x27
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *onTransition; // x28
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x29
  __int64 v45; // x0
  __int64 v46; // x1

  if ( (byte_4B1A1CA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager_Decide__, v10, v11);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__, v12, v13);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager_TransitionToCombineScene__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_11797/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_11796/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_11803/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v22, v23);
    byte_4B1A1CA = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dialogCallBack,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v32 = v27;
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_1BCAA3C(v45, v46);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    v25,
    v26,
    v32,
    v36,
    onTransition,
    v44,
    1,
    0LL);
}


void __fastcall EventMissionItemListViewManager__RedisplayEventUI(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *titleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t *p_m_Handle; // x0
  __int64 v10; // x1
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1A1C8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SceneList_TypeInfo, v4, v5);
    byte_4B1A1C8 = 1;
  }
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v10);
    SceneName = SceneList__getSceneName(72, 0LL);
    if ( !System_String__op_Inequality(name, SceneName, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( gameObject )
      {
        TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)gameObject, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(gameObject, v8);
    }
  }
}


void __fastcall EventMissionItemListViewManager__RefrashListDisp(
        EventMissionItemListViewManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v23; // w21
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A1C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v14, v15);
    byte_4B1A1C2 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v18 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v24;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v19 )
      break;
    if ( i.fields._current )
    {
      methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (EventMissionItemListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionItemListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1BCAA3C(v19, v20);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v18 )
    goto LABEL_17;
  size = v18->fields._size;
  if ( size >= 1 )
  {
    v23 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v18,
                                                                  v23,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v23 >= v18->fields._size )
        return;
    }
LABEL_17:
    sub_1BCAA3C(ObjectList, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_46572576(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  __int64 methodPtr_low; // x10
  const MethodInfo *v22; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v24; // x21
  int32_t v25; // w22
  System_Collections_Generic_List_object__o *v26; // x23
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A1C3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      *(_QWORD *)&missionId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v15, v16);
    byte_4B1A1C3 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current
      || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventMissionItemListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_1BCAA3C(v18, v19);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields._current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(this, v22);
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  v24 = itemList;
  if ( size > 0 )
  {
    v25 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v24,
                                                                v25,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
      if ( !itemList )
        break;
      v26 = itemList;
      itemList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewObject__GetItem(
                                                                (EventMissionItemListViewObject_o *)itemList,
                                                                *(const MethodInfo **)&missionId);
      if ( !itemList )
        break;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0LL) == missionId )
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))v26->klass->vtable._9_unknown.method)(
          v26,
          this->fields.isInput,
          v26->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v25 >= v24->fields._size )
        return;
    }
LABEL_21:
    sub_1BCAA3C(itemList, *(_QWORD *)&missionId);
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_4B1A1B5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1A1B5 = 1;
  }
  if ( !byte_4B1A286 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v2);
    byte_4B1A286 = 1;
  }
  TerminalTransitionInfo = EventMissionItemListViewManager__CreateTerminalTransitionInfo(
                             this,
                             EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField,
                             v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(TerminalTransitionInfo, 0LL);
}


void __fastcall EventMissionItemListViewManager__SetOpenItem(
        EventMissionItemListViewManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v22; // x1
  struct EventMissionItemListViewItem_o *v23; // x21
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1A1BF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v10, v11);
    sub_1BCA7E0(&StringLiteral_19037/*"ef_mission_extric01"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21735/*"modifyOpenItem"*/, v14, v15);
    byte_4B1A1BF = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1BCAA3C(0LL, v17);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        ObjectList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v35 = v34;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v18 )
          break;
        current = v35.fields._current;
        if ( !v35.fields._current )
          sub_1BCAA3C(v18, v19);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v35.fields._current,
                                          v19);
        v23 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_1BCAA3C(0LL, v22);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4B12FAA )
          {
            sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v24, v25);
            byte_4B12FAA = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v23;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.openTargetItem,
            (int64_t)v23,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v23, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_19037/*"ef_mission_extric01"*/, transform, v33);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21735/*"modifyOpenItem"*/,
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
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1A1AA & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo, *(_QWORD *)&index, onFinished);
    byte_4B1A1AA = 1;
  }
  v7 = sub_1BCAA2C(
         EventMissionItemListViewManager__SetPreviousFilter_d__41_TypeInfo,
         *(_QWORD *)&index,
         onFinished,
         method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)onFinished, v14, v15, v16, v17, v18, v19);
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
    sub_1BCAA3C(scrollView, enable);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B1A1CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B1A1CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
  EventMissionItemListViewManager__dialogCallback(this, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionItemListViewManager___SetPreviousFilter_b__41_0(
        EventMissionItemListViewManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  int32_t tempSelectDispNo; // w22
  int32_t v8; // w8
  unsigned int v9; // w9
  int v10; // w8

  if ( (byte_4B1A1CE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, *(_QWORD *)&x, *(_QWORD *)&y);
    byte_4B1A1CE = 1;
  }
  tempSelectDispNo = this->fields.tempSelectDispNo;
  v8 = tempSelectDispNo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&x);
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


void __fastcall EventMissionItemListViewManager___modifyOpenItem_b__66_0(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_object__o *v49; // x20
  void *Instance; // x0
  __int64 v51; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_object__o *EntityListFromIdProgressTypeAndActionType; // x0
  __int64 *v54; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v59; // x21
  __int64 v60; // x0
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  System_Collections_Generic_List_Enumerator_object__o *v72; // x0
  struct EventMissionEntity_o *v73; // x8
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  Il2CppObject *v77; // x22
  EventMissionActionInfo_o *v78; // x21
  __int64 v79; // x0
  __int64 v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  __int64 v91; // x2
  __int64 v92; // x3
  System_Comparison_T__o *v93; // x21
  Il2CppObject *v94; // x22
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  const MethodInfo *targetMissionId; // x1
  int v103; // w8
  __int64 v104; // x8
  int32_t v105; // w0
  const MethodInfo *v106; // x2
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B1A1D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMissionActionInfo__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v19, v20);
    sub_1BCA7E0(&EventMissionActionInfo_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v37, v38);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__, v43, v44);
    sub_1BCA7E0(&EventMissionItemListViewManager___c_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_16815/*"actionAfterCallback"*/, v47, v48);
    byte_4B1A1D0 = 1;
  }
  memset(&v109, 0, sizeof(v109));
  memset(&v108, 0, sizeof(v108));
  v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_47;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
                                                                                             (EventMissionActionAddMaster_o *)Instance,
                                                                                             missionToRecieve->fields.id,
                                                                                             5,
                                                                                             3,
                                                                                             0LL);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v107,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v109 = v107;
    v54 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v109,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v109.fields._current;
      v59 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v55, v56, v57);
      EventMissionActionInfo___ctor_42814600(v59, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v49 )
        sub_1BCAA3C(v60, v61);
      items = v49->fields._items;
      v69 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v49->fields._version;
      if ( !items )
        sub_1BCAA3C(v60, v61);
      size = v49->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          (Il2CppObject *)v59,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &items->obj.klass + size;
        v49->fields._size = size + 1;
        v71[4] = (Il2CppClass *)v59;
        sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)v59, v62, v63, v64, v65, v66, v67);
      }
    }
    v72 = &v109;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v73 = this->fields.missionToRecieve;
    if ( !v73 )
      goto LABEL_47;
    if ( !Instance )
      goto LABEL_47;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v73->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v107,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v108 = v107;
    v54 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v108,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v77 = v108.fields._current;
      v78 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v74, v75, v76);
      EventMissionActionInfo___ctor(v78, (EventMissionActionEntity_o *)v77, 0LL);
      if ( !v49 )
        sub_1BCAA3C(v79, v80);
      v87 = v49->fields._items;
      v88 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v49->fields._version;
      if ( !v87 )
        sub_1BCAA3C(v79, v80);
      v89 = v49->fields._size;
      if ( (unsigned int)v89 >= v87->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          (Il2CppObject *)v78,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &v87->obj.klass + v89;
        v49->fields._size = v89 + 1;
        v90[4] = (Il2CppClass *)v78;
        sub_1BCA784((PartyOrganizationUtility_o *)(v90 + 4), (int64_t)v78, v81, v82, v83, v84, v85, v86);
      }
    }
    v72 = &v108;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(v72, (const MethodInfo_3316D18 *)*v54);
  Instance = EventMissionItemListViewManager___c_TypeInfo;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v51);
    Instance = EventMissionItemListViewManager___c_TypeInfo;
  }
  v93 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v93 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v51);
      Instance = EventMissionItemListViewManager___c_TypeInfo;
    }
    v94 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v93 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionActionInfo__TypeInfo, v51, v91, v92);
    System_Comparison_object____ctor(
      v93,
      v94,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__66_1__,
      0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__66_1 = (struct System_Comparison_EventMissionActionInfo__o *)v93;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__66_1, (int64_t)v93, v96, v97, v98, v99, v100, v101);
  }
  if ( !v49 )
    goto LABEL_47;
  System_Collections_Generic_List_object___Sort_56244000(
    v49,
    v93,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  v103 = v49->fields._size;
  if ( v103 <= 0 )
    goto LABEL_42;
  Instance = System_Collections_Generic_List_object___get_Item(
               v49,
               v103 - 1,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
  if ( !Instance || (v104 = *((_QWORD *)Instance + 4)) == 0 )
LABEL_47:
    sub_1BCAA3C(Instance, v51);
  if ( !*(_DWORD *)(v104 + 24) )
    sub_1BCAA44(Instance, v51);
  v105 = System_Int32__Parse(*(System_String_o **)(v104 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v105 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_46572576(this, (int32_t)targetMissionId, v106);
    goto LABEL_44;
  }
LABEL_42:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_44:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16815/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0LL);
}


void __fastcall EventMissionItemListViewManager___setAfterAction_b__60_0(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4B1A1CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method, v2);
    byte_4B1A1CF = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1BCAA3C(Instance, v5);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, missionToRecieve->fields.id, 5, 1, 0LL);
  }
  else
  {
    EventMissionItemListViewManager__loadOpenMissionEffect(this, method);
  }
}


void __fastcall EventMissionItemListViewManager__actionAfterCallback(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *actionCallback; // x19
  PartyOrganizationUtility_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (PartyOrganizationUtility_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0LL;
    sub_1BCA784(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionCallback->fields.m_target)(
      actionCallback->fields.original_method_info,
      *(_QWORD *)&actionCallback->fields.extra_arg);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__afterReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1A1B9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionItemListViewManager__afterReward_d__59_TypeInfo, method, v2);
    byte_4B1A1B9 = 1;
  }
  v5 = sub_1BCAA2C(EventMissionItemListViewManager__afterReward_d__59_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventMissionItemListViewManager__checkAcceptable(
        EventMissionItemListViewManager_o *this,
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
  int64_t Instance; // x0
  __int64 v29; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v31; // x8
  int64_t v32; // x20
  int64_t v33; // x21
  __int64 v34; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v36; // x2
  __int64 v37; // x3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int32_t v42; // w21
  BalanceConfig_c *v43; // x0
  int32_t PresentBoxMax; // w8
  int v45; // w20
  EventMissionItemListViewManager___c_c *v46; // x0
  System_Action_o *_9__51_0; // x20
  Il2CppObject *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct EventMissionItemListViewManager___c_StaticFields *v55; // x0
  PartyOrganizationUtility_o *p__9__51_0; // x0
  __int64 *v57; // x8
  EventMissionItemListViewManager___c_c *v58; // x0
  Il2CppObject *v59; // x21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4B1A1B1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__, v18, v19);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__, v20, v21);
    sub_1BCA7E0(&EventMissionItemListViewManager___c_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_12292/*"SHOW_MSG"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11255/*"REWARD_ACCEPTABLE"*/, v26, v27);
    byte_4B1A1B1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_44;
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v31 = this->fields.missionToRecieve;
  if ( !v31 )
    goto LABEL_44;
  if ( v31->fields.rewardType == 1 )
  {
    v32 = Instance;
    if ( !Instance )
      goto LABEL_44;
    if ( Gift__IsServant_38401528(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_44;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            *(_DWORD *)(v32 + 24),
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_44;
      v33 = Instance;
      if ( SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
        || SvtType__IsStatusUp(*(_DWORD *)(v33 + 84), 0LL) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_44;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !MasterData_object )
          goto LABEL_44;
        Instance = (int64_t)UserPresentBoxMaster__getVaildList(
                              (UserPresentBoxMaster_o *)MasterData_object,
                              Instance,
                              0LL);
        if ( !Instance )
          goto LABEL_44;
        v42 = *(_DWORD *)(Instance + 24);
        v43 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29);
          v43 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v43->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v42 )
        {
          v58 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v29);
            v58 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v58->static_fields->__9__51_0;
          if ( !_9__51_0 )
          {
            if ( !v58->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v58, v29);
              v58 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v59 = (Il2CppObject *)v58->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v36, v37);
            System_Action___ctor(
              _9__51_0,
              v59,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_0__,
              0LL);
            static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__51_0 = _9__51_0;
            p__9__51_0 = (PartyOrganizationUtility_o *)&static_fields->__9__51_0;
            goto LABEL_41;
          }
LABEL_42:
          this->fields.ShowMSG = _9__51_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.ShowMSG,
            (int64_t)_9__51_0,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          Instance = (int64_t)this->fields.targetFSM;
          if ( Instance )
          {
            v57 = &StringLiteral_12292/*"SHOW_MSG"*/;
            goto LABEL_34;
          }
LABEL_44:
          sub_1BCAA3C(Instance, v29);
        }
        v45 = *(_DWORD *)(v32 + 28);
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43, v29);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v45 + v42 > PresentBoxMax )
        {
          v46 = EventMissionItemListViewManager___c_TypeInfo;
          if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v29);
            v46 = EventMissionItemListViewManager___c_TypeInfo;
          }
          _9__51_0 = v46->static_fields->__9__51_1;
          if ( !_9__51_0 )
          {
            if ( !v46->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v46, v29);
              v46 = EventMissionItemListViewManager___c_TypeInfo;
            }
            v48 = (Il2CppObject *)v46->static_fields->__9;
            _9__51_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v36, v37);
            System_Action___ctor(
              _9__51_0,
              v48,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_1__,
              0LL);
            v55 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v55->__9__51_1 = _9__51_0;
            p__9__51_0 = (PartyOrganizationUtility_o *)&v55->__9__51_1;
LABEL_41:
            sub_1BCA784(p__9__51_0, (int64_t)_9__51_0, v49, v50, v51, v52, v53, v54);
            goto LABEL_42;
          }
          goto LABEL_42;
        }
      }
    }
  }
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_44;
  v57 = &StringLiteral_11255/*"REWARD_ACCEPTABLE"*/;
LABEL_34:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v57, 0LL);
}


void __fastcall EventMissionItemListViewManager__dialogCallback(
        EventMissionItemListViewManager_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_int__o *dialogCallBack; // x20
  PartyOrganizationUtility_o *p_dialogCallBack; // x0

  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    p_dialogCallBack = (PartyOrganizationUtility_o *)&this->fields.dialogCallBack;
    p_dialogCallBack->klass = 0LL;
    sub_1BCA784(p_dialogCallBack, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))dialogCallBack->fields.m_target)(
      dialogCallBack->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&dialogCallBack->fields.extra_arg);
  }
}


void __fastcall EventMissionItemListViewManager__endloadEffect(
        EventMissionItemListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v15; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v17; // x8

  if ( (byte_4B1A1BC & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionItemListViewManager_TypeInfo, data, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10, v11);
    byte_4B1A1BC = 1;
  }
  if ( data )
  {
    EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)EventMissionItemListViewManager_TypeInfo->static_fields,
      (int64_t)data,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
        EventMissionItemListViewManager__setList(this, v15);
      }
    }
    else
    {
      EventMissionItemListViewManager__RefrashListDisp(this, v15);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v17 = this->fields.missionToRecieve;
    if ( !v17 || !Instance )
LABEL_13:
      sub_1BCAA3C(Instance, v13);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v17->fields.id, 5, 0, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall EventMissionItemListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetData_o *effectAssetData; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__49237568; // x19
  UnityEngine_GameObject_o *v14; // x19
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x20

  if ( (byte_4B1A1BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, parentTr, method);
    sub_1BCA7E0(&EventMissionItemListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1A1BD = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              effectAssetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49237568,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v14 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v16 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C1 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C6 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v17);
    byte_4B109C6 = 1;
  }
  if ( !v18 )
LABEL_15:
    sub_1BCAA3C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v14;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1A1A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1A1A6 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                 (EventMissionItemListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v21;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A1A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___, method, v2);
    byte_4B1A1A5 = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_2F927DC *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  __int64 v12; // x1

  if ( (byte_4B1A1BB & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager_endloadEffect__, v5, v6);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5956/*"Effect/EventMission"*/, v9, v10);
    byte_4B1A1BB = 1;
  }
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5956/*"Effect/EventMission"*/, v11, 1, 0LL);
}


void __fastcall EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
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
  __int64 *v17; // x8
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  EventMissionItemListViewManager_o *v26; // x20
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  int64_t items; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Collections_Generic_List_ListViewDropObject__o *v35; // x8
  int64_t v36; // x1
  __int64 v37; // x2
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20

  v4 = this;
  if ( (byte_4B1A1B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___, result, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v13, v14);
    this = (EventMissionItemListViewManager_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v15, v16);
    byte_4B1A1B4 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v19 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_object_(
                                                  v19,
                                                  (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v26 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_22;
      dropObjectList = this->fields.dropObjectList;
      if ( !dropObjectList )
        goto LABEL_21;
      items = (int64_t)dropObjectList->fields._items;
      v4->fields.getSvtList = (struct GetSvts_array *)items;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.getSvtList, items, v20, v21, v22, v23, v24, v25);
      if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
LABEL_22:
        sub_1BCAA44(this, result);
      v35 = v26->fields.dropObjectList;
      if ( v35 )
      {
        v36 = *(_QWORD *)&v35->fields._size;
        v4->fields.getCommandCodeList = (struct GetCommandCodes_array *)v36;
        sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.getCommandCodeList, v36, v29, v30, v31, v32, v33, v34);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_4B12FAA )
          {
            sub_1BCA7E0(&EventRewardSaveData_TypeInfo, result, v37);
            byte_4B12FAA = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          EventMissionItemListViewManager__SaveTerminalTransitionInfo(v4, (const MethodInfo *)result);
          this = (EventMissionItemListViewManager_o *)v4->fields.touchBlockObj;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
            if ( this )
            {
              v17 = &StringLiteral_11197/*"REQUEST_OK"*/;
              goto LABEL_20;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(this, result);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_21;
  v17 = &StringLiteral_11195/*"REQUEST_NG"*/;
LABEL_20:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v17, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  __int64 v26; // x1
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  __int64 v29; // x1
  UnityEngine_Object_o *monitor; // x21
  EventMissionItemListViewObject_o *v31; // x0
  __int64 v32; // x9
  UnityEngine_Object_o *v33; // x21
  __int64 v34; // x1
  void *v35; // x0
  System_Action_o *v36; // x20
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1A1C0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10);
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, v13, v14);
    sub_1BCA7E0(&EventMissionItemListViewObject_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1A1C0 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1BCAA3C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v38 = v37;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v22 )
        break;
      current = v38.fields._current;
      if ( !v38.fields._current
        || (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v38.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventMissionItemListViewItem_c *)v38.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_1BCAA3C(v22, v23);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v38.fields._current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_1BCAA3C(0LL, v26);
      if ( MissionId == MissionListViewItem__get_MissionId(openTargetItem, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v31 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v31 )
            goto LABEL_30;
          v32 = LOBYTE(EventMissionItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v31->klass->vtable._0_Equals.methodPtr) < (unsigned int)v32
            || (EventMissionItemListViewObject_c *)v31->klass->_2.typeHierarchy[v32 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            sub_1BCACFC(v31);
LABEL_30:
            sub_1BCAA3C(v31, v29);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v31,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v33 = (UnityEngine_Object_o *)current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
      {
        v35 = current[6].monitor;
        if ( !v35 )
          sub_1BCAA3C(0LL, v34);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v35 + 392LL))(
          v35,
          current,
          *(_QWORD *)(*(_QWORD *)v35 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__66_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v36, 0LL);
}


void __fastcall EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x22
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct EventMissionEntity_o **v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_int__o *v33; // x20
  const MethodInfo *v34; // x2
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  struct EventMissionEntity_o *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B1A1B0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, missionEntity, method);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager_recieveReward__, v6, v7);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__, v8, v9);
    sub_1BCA7E0(&EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_8807/*"MISSION_REWARD"*/, v12, v13);
    byte_4B1A1B0 = 1;
  }
  v14 = sub_1BCAA2C(EventMissionItemListViewManager___c__DisplayClass49_0_TypeInfo, missionEntity, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = missionEntity;
  v23 = (struct EventMissionEntity_o **)(v14 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)missionEntity, v24, v25, v26, v27, v28, v29);
  if ( this->fields.isQpMaxAlert )
  {
    v33 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v30, v31, v32);
    System_Action_int____ctor(
      v33,
      (Il2CppObject *)v14,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__,
      0LL);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v33, v34);
    return;
  }
  v35 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 83) & 2) != 0 )
    v35 = (_QWORD *)sub_1BCA7F8(Method_EventMissionItemListViewManager_recieveReward__);
  v36 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v35, v35[4]);
  OverwriteAssetSoundName__PlaySystemSe(v36, 8, 0LL);
  v37 = *v23;
  this->fields.missionToRecieve = *v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.missionToRecieve, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_1BCAA3C(targetFSM, v16);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8807/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__requestMissionReward(
        EventMissionItemListViewManager_o *this,
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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4B1A1B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventMissionItemListViewManager_missionRewardCallback__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10, v11);
    byte_4B1A1B3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Instance = NetworkManager__getRequest_object_(
               v17,
               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
LABEL_9:
    sub_1BCAA3C(Instance, v13);
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Instance,
    missionToRecieve->fields.id,
    0LL);
}


void __fastcall EventMissionItemListViewManager__setAfterAction(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A1BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager__setAfterAction_b__60_0__, v5, v6);
    byte_4B1A1BA = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventMissionItemListViewManager__setAfterAction_b__60_0__, 0LL);
  MissionListViewManager__DisplayAfterMissionAchieveTutorial((MissionListViewManager_o *)this, v7, 0LL);
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
  __int64 v6; // x1
  UISprite_o *v7; // x0

  if ( (byte_4B1A1C6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, targetFile, method);
    byte_4B1A1C6 = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetFile);
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0LL, 0LL) )
  {
    v7 = this->fields.filterBtnTxt;
    if ( !v7 || (UISprite__set_spriteName(v7, targetFile, 0LL), (v7 = this->fields.filterBtnTxt) == 0LL) )
      sub_1BCAA3C(v7, v6);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
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
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v16; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v27; // w2
  bool v28; // w2
  bool v29; // w2
  bool v30; // w2
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t filterStatus; // w19

  if ( (byte_4B1A1C5 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17746/*"btn_txt_completed"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17779/*"btn_txt_receipt"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17778/*"btn_txt_progress"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17762/*"btn_txt_notopen"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17728/*"btn_txt_all"*/, v13, v14);
    byte_4B1A1C5 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v16 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, method, v2, v3);
  ListViewSort___ctor_41481440(v16, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.operationSortInfo, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17728/*"btn_txt_all"*/, v25);
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
      v27 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17779/*"btn_txt_receipt"*/, v25);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v28 = 0;
      goto LABEL_16;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17778/*"btn_txt_progress"*/, v25);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v28 = 1;
LABEL_16:
      ListViewSort__SetFilter(operationSortInfo, 14, v28, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v29 = 0;
LABEL_22:
      ListViewSort__SetFilter(operationSortInfo, 15, v29, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v30 = 0;
LABEL_29:
      ListViewSort__SetFilter(operationSortInfo, 16, v30, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v27 = 0;
LABEL_31:
      ListViewSort__SetFilter(operationSortInfo, 17, v27, 0LL);
LABEL_32:
      operationSortInfo = this->fields.baseSortInfo;
      if ( !operationSortInfo )
LABEL_36:
        sub_1BCAA3C(operationSortInfo, v24);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4B12FA9 )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v31, v32);
        byte_4B12FA9 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17762/*"btn_txt_notopen"*/, v25);
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
      v29 = 1;
      goto LABEL_22;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17746/*"btn_txt_completed"*/, v25);
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
      v30 = 1;
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
  EventMissionItemListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  int size; // w22
  int32_t TodayFirstMissionId; // w20
  int32_t v17; // w21
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4B1A1AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, isRaid, method);
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    this = (EventMissionItemListViewManager_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v11,
                                                  v12);
    byte_4B1A1AC = 1;
  }
  if ( !byte_4B1A285 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1BCA7E0(&EventRewardSaveData_TypeInfo, isRaid, method);
    byte_4B1A285 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( byte_4B1A286 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, isRaid, method);
    byte_4B1A286 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
      if ( !this )
        goto LABEL_28;
      TodayFirstMissionId = EventMissionConditionMaster__getTodayFirstMissionId(
                              (EventMissionConditionMaster_o *)this,
                              v4->fields.currentEventId,
                              0LL);
      goto LABEL_14;
    }
  }
  TodayFirstMissionId = static_fields->_MissionId_k__BackingField;
LABEL_14:
  if ( size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      this = (EventMissionItemListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (EventMissionItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v17,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( this )
      {
        methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
            this = 0LL;
        }
        else
        {
          this = 0LL;
        }
      }
      if ( TodayFirstMissionId >= 1 )
      {
        if ( !this )
          break;
        if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0LL) == TodayFirstMissionId )
          goto LABEL_27;
      }
      if ( size == ++v17 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1BCAA3C(this, isRaid);
  }
LABEL_26:
  v17 = 0;
LABEL_27:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v17, 0LL);
}


void __fastcall EventMissionItemListViewManager__setNextMissionInfo(
        EventMissionItemListViewManager_o *this,
        EventMissionActionInfo_o *currentMissionActionInfo,
        EventMissionActionInfo_o *eventMissionActionInfo,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventMissionItemListViewManager_o *v12; // x19
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
  int v27; // w8
  int m_CancellationTokenSource; // w8
  int v29; // w23
  int32_t v30; // w21
  __int64 methodPtr_low; // x10
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x4
  System_Action_o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  v12 = this;
  if ( (byte_4B1A1A8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, currentMissionActionInfo, eventMissionActionInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v13, v14);
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__, v17, v18);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v23, v24);
    this = (EventMissionItemListViewManager_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v25,
                                                  v26);
    byte_4B1A1A8 = 1;
  }
  v12->fields.targetMissionId = missionID;
  if ( callback )
  {
    v12->fields.actionCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v12->fields.actionCallback,
      (int64_t)callback,
      (int64_t)eventMissionActionInfo,
      missionID,
      (System_String_o *)callback,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
  }
  if ( eventMissionActionInfo )
  {
    if ( !currentMissionActionInfo )
      goto LABEL_30;
    if ( currentMissionActionInfo->fields.missionActionType == 3 )
    {
      if ( eventMissionActionInfo->fields.missionActionType == 3 )
        v27 = 1056964608;
      else
        v27 = 1069547520;
      LODWORD(v12->fields.endEffectTime) = v27;
    }
  }
  this = (EventMissionItemListViewManager_o *)v12->fields.itemList;
  if ( !this )
LABEL_30:
    sub_1BCAA3C(this, currentMissionActionInfo);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v29 = m_CancellationTokenSource - 1;
  if ( m_CancellationTokenSource >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      this = (EventMissionItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v30,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_30;
      methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        goto LABEL_30;
      if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
        goto LABEL_30;
      this = (EventMissionItemListViewManager_o *)MissionListViewItem__get_EventMissionEntity(
                                                    (MissionListViewItem_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_30;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( v29 == v30 )
        break;
      this = (EventMissionItemListViewManager_o *)v12->fields.itemList;
      ++v30;
      if ( !this )
        goto LABEL_30;
    }
  }
  v30 = 0;
LABEL_24:
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_30;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v12->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v12, v30, v36, eventMissionActionInfo, v37);
  }
  else
  {
    v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__39_1__,
      0LL);
    v12->fields.callbackAfterScroll = v38;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v12->fields.callbackAfterScroll,
      (int64_t)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    ListViewManager__MoveTopItem((ListViewManager_o *)v12, v30, 1, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionItemListViewManager_o *v3; // x19
  struct System_Action_o *ShowMSG; // x8

  v3 = this;
  if ( (byte_4B1A1B2 & 1) == 0 )
  {
    this = (EventMissionItemListViewManager_o *)sub_1BCA7E0(&StringLiteral_5555/*"END_NOTICE"*/, method, v2);
    byte_4B1A1B2 = 1;
  }
  ShowMSG = v3->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (EventMissionItemListViewManager_o *)v3->fields.targetFSM) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5555/*"END_NOTICE"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42___ctor(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__MoveNext(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o **_4__this; // x20
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *v4; // x19
  float v5; // s1
  float v6; // s8
  float v7; // s1
  float v8; // s8
  float timer_5__5; // s8
  float duration_5__4; // s0
  float deltaTime; // s0
  float v12; // s1
  float v13; // s0
  float v14; // s2
  bool v15; // nf
  float v16; // s0
  float start_5__2; // s8
  float v18; // s0
  float v19; // s10
  float v20; // s0
  float v21; // s1
  bool result; // w0
  float v23; // s0
  float v24; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  _1__state = this->fields.__1__state;
  _4__this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o **)this->fields.__4__this;
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
      goto LABEL_30;
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    v4->fields._start_5__2 = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)this, 0.0, 0LL);
    this = _4__this[10];
    if ( !this )
      goto LABEL_30;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
    if ( !this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    v6 = v5;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    this = _4__this[10];
    if ( !this )
      goto LABEL_30;
    this = (EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
    if ( !this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = _4__this[12];
    if ( !this )
      goto LABEL_30;
    v8 = v7 - v6;
    LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)this, v4->fields.index, 0LL);
    LocalPosition.fields.y = fabsf(LocalPosition.fields.y) / v8;
    LocalPosition.fields.x = (float)(v8 * (float)(LocalPosition.fields.y - v4->fields._start_5__2)) + -2000.0;
    timer_5__5 = 0.0;
    duration_5__4 = fminf(fmaxf(LocalPosition.fields.x / 2000.0, 0.0) + 1.0, 3.0);
    v4->fields._end_5__3 = LocalPosition.fields.y;
    v4->fields._duration_5__4 = duration_5__4;
    v4->fields._timer_5__5 = 0.0;
  }
  if ( timer_5__5 >= duration_5__4 )
  {
    if ( !_4__this )
      goto LABEL_30;
    this = _4__this[11];
    if ( !this )
      goto LABEL_30;
    UIProgressBar__set_value((UIProgressBar_o *)this, v4->fields._end_5__3, 0LL);
    ActionExtensions__Call(v4->fields.onFinished, 0LL);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v12 = v4->fields._duration_5__4;
  v13 = timer_5__5 + deltaTime;
  if ( v13 <= v12 )
    v14 = v13;
  else
    v14 = v4->fields._duration_5__4;
  v15 = v13 < 0.0;
  v16 = 0.0;
  if ( !v15 )
    v16 = v14;
  v4->fields._timer_5__5 = v16;
  if ( !_4__this )
    goto LABEL_30;
  start_5__2 = v4->fields._start_5__2;
  v18 = v16 / (float)(v12 * 0.5);
  v19 = v4->fields._end_5__3 - start_5__2;
  if ( v18 >= 1.0 )
  {
    v23 = exp2f((float)(v18 + -1.0) * -10.0);
    v21 = v19 * 0.5;
    v20 = 2.0 - v23;
  }
  else
  {
    v20 = powf(v18, 5.0);
    v21 = v19 * 0.5;
  }
  this = _4__this[11];
  v24 = v20 * v21;
  if ( !this )
LABEL_30:
    sub_1BCAA3C(this, method);
  UIProgressBar__set_value((UIProgressBar_o *)this, start_5__2 + v24, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll_IE_d__42__System_IDisposable_Dispose(
        EventMissionItemListViewManager__MoveEaseScroll_IE_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41___ctor(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41__MoveNext(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventMissionItemListViewManager__SetPreviousFilter_d__41_o *v4; // x20
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v27; // x0
  UnityEngine_Coroutine_o *started; // x0
  PartyOrganizationUtility_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  int size; // w22
  System_Collections_Generic_List_int__o *v42; // x20
  int32_t i; // w21
  __int64 methodPtr_low; // x10
  __int64 v45; // x2
  __int64 v46; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  System_Func_int__int__int__o *v50; // x21
  int32_t v51; // w0
  int32_t v52; // w21
  int32_t v53; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v56; // x19
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  v4 = this;
  if ( (byte_4B1A1DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Aggregate_int___, method, v2);
    sub_1BCA7E0(&EventMissionItemListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__, v7, v8);
    sub_1BCA7E0(&System_Func_int__int__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__IndexOf__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)sub_1BCA7E0(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v23,
                                                                           v24);
    byte_4B1A1DD = 1;
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
        v56 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
        UnityEngine_WaitForSeconds___ctor(v56, openItemTime + endEffectTime, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v56;
        p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1BCA784(p__2__current, (int64_t)v56, v58, v59, v60, v61, v62, v63);
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
        LOBYTE(v36) = 1;
        return v36;
      }
      goto LABEL_32;
    }
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        v27 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v4->fields.index, v4->fields.onFinished, v3);
        started = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v27, 0LL);
        v4->fields.__2__current = (Il2CppObject *)started;
        v29 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1BCA784(v29, (int64_t)started, v30, v31, v32, v33, v34, v35);
        LOBYTE(v36) = 1;
        *(_DWORD *)&v29[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return v36;
      }
LABEL_32:
      sub_1BCAA3C(this, method);
    }
LABEL_30:
    LOBYTE(v36) = 0;
    return v36;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_32;
  *(_QWORD *)&_4__this->fields.filterStatus = (unsigned int)_4__this->fields.tempFilterStatus;
  EventMissionItemListViewManager__setList(_4__this, method);
  itemSortList = _4__this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_30;
  size = itemSortList->fields._size;
  if ( size < 3 || !_4__this->fields.tempSelectDispNo )
    goto LABEL_30;
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v37,
                                                    v38,
                                                    v39);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; i != size; ++i )
  {
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)_4__this->fields.itemSortList;
    if ( !this )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           i,
                                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !this )
      goto LABEL_32;
    methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_32;
    if ( (EventMissionItemListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
      goto LABEL_32;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__41_o *)MissionListViewItem__get_EventMissionEntity(
                                                                           (MissionListViewItem_o *)this,
                                                                           0LL);
    if ( !this )
      goto LABEL_32;
    if ( !v42 )
      goto LABEL_32;
    method = (const MethodInfo *)LODWORD(this->fields.__4__this);
    items = v42->fields._items;
    v48 = Method_System_Collections_Generic_List_int__Add__;
    ++v42->fields._version;
    if ( !items )
      goto LABEL_32;
    v49 = v42->fields._size;
    if ( (unsigned int)v49 >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v42,
        (int32_t)method,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v42->fields._size = v49 + 1;
      items->m_Items[v49 + 1] = (int)method;
    }
  }
  v50 = (System_Func_int__int__int__o *)sub_1BCAA2C(System_Func_int__int__int__TypeInfo, method, v45, v46);
  System_Func_int__int__int____ctor(
    v50,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__41_0__,
    0LL);
  v51 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v42,
          (System_Func_TSource__TSource__TSource__o *)v50,
          (const MethodInfo_2F1A7BC *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v52 = v51;
  v36 = System_Collections_Generic_List_int___IndexOf(
          v42,
          v51,
          (const MethodInfo_35858B4 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v36 )
  {
    v53 = v52 - 1;
    if ( v36 == size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v53, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v53, 0, 0LL);
    goto LABEL_30;
  }
  return v36;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventMissionItemListViewManager__SetPreviousFilter_d__41_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__SetPreviousFilter_d__41__System_IDisposable_Dispose(
        EventMissionItemListViewManager__SetPreviousFilter_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMissionItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A1D1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionItemListViewManager___c_TypeInfo, v1, v2);
    byte_4B1A1D1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventMissionItemListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventMissionItemListViewManager___c_TypeInfo->static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMissionItemListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventMissionItemListViewManager___c___ctor(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventMissionItemListViewManager___c___OpenCommandAssistLvUpDialog_b__78_0(
        EventMissionItemListViewManager___c_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  if ( !gift )
    sub_1BCAA3C(this, 0LL);
  return gift->fields.type == 14;
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_0(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  Il2CppObject *Instance; // x19
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  EventMissionItemListViewManager___c_c *v21; // x8
  System_String_o *v22; // x20
  System_String_o *v23; // x21
  System_Action_o *_9__51_2; // x22
  Il2CppObject *v25; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B1A1D2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, v7, v8);
    sub_1BCA7E0(&EventMissionItemListViewManager___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_8769/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B1A1D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8769/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v21 = EventMissionItemListViewManager___c_TypeInfo;
  v22 = v17;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v18);
    v21 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_2 = v21->static_fields->__9__51_2;
  if ( !_9__51_2 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, v18);
      v21 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v21->static_fields->__9;
    _9__51_2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    System_Action___ctor(_9__51_2, v25, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_2__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_2 = _9__51_2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__51_2,
      (int64_t)_9__51_2,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !Instance )
    sub_1BCAA3C(v17, v18);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v23, v22, _9__51_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_1(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  Il2CppObject *Instance; // x19
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  EventMissionItemListViewManager___c_c *v21; // x8
  System_String_o *v22; // x20
  System_String_o *v23; // x21
  System_Action_o *_9__51_3; // x22
  Il2CppObject *v25; // x23
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B1A1D4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, v7, v8);
    sub_1BCA7E0(&EventMissionItemListViewManager___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_8770/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B1A1D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8770/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v21 = EventMissionItemListViewManager___c_TypeInfo;
  v22 = v17;
  if ( !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo, v18);
    v21 = EventMissionItemListViewManager___c_TypeInfo;
  }
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  _9__51_3 = v21->static_fields->__9__51_3;
  if ( !_9__51_3 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, v18);
      v21 = EventMissionItemListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v21->static_fields->__9;
    _9__51_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    System_Action___ctor(_9__51_3, v25, Method_EventMissionItemListViewManager___c__checkAcceptable_b__51_3__, 0LL);
    static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__51_3 = _9__51_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__51_3,
      (int64_t)_9__51_3,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !Instance )
    sub_1BCAA3C(v17, v18);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v23, v22, _9__51_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1A1D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1A1D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__51_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1A1D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1A1D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__66_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass47_0___OnClickListView_b__0(
        EventMissionItemListViewManager___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  MissionListViewItem_o *selectItem; // x0
  EventMissionItemListViewManager_o *_4__this; // x19
  const MethodInfo *v5; // x2

  selectItem = (MissionListViewItem_o *)this->fields.selectItem;
  if ( !selectItem
    || (_4__this = this->fields.__4__this,
        selectItem = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(selectItem, 0LL),
        !_4__this) )
  {
    sub_1BCAA3C(selectItem, method);
  }
  EventMissionItemListViewManager__recieveReward(_4__this, (EventMissionEntity_o *)selectItem, v5);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass49_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager___c__DisplayClass49_0___recieveReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass49_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct EventMissionItemListViewManager_o *v19; // x8

  if ( (byte_4B1A1D6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__,
      *(_QWORD *)&result,
      method);
    sub_1BCA7E0(&StringLiteral_8807/*"MISSION_REWARD"*/, v5, v6);
    byte_4B1A1D6 = 1;
  }
  if ( result == 1 )
  {
    v7 = Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_EventMissionItemListViewManager___c__DisplayClass49_0__recieveReward_b__0__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = this->fields.missionEntity,
          _4__this->fields.missionToRecieve = missionEntity,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields.missionToRecieve,
            (int64_t)missionEntity,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          (v19 = this->fields.__4__this) == 0LL)
      || (targetFSM = v19->fields.targetFSM) == 0LL )
    {
      sub_1BCAA3C(targetFSM, v10);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8807/*"MISSION_REWARD"*/, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__2(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4B1A1D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1A1D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  v7 = EventMissionItemListViewManager__afterReward(_4__this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v7, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventRewardRootComponent_o *eventRootComponent; // x20
  System_Action_o *_9__4; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B1A1D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__, v8, v9);
    byte_4B1A1D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventRootComponent = _4__this->fields.eventRootComponent;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v17, v18, v19, v20, v21, v22);
  }
  if ( !eventRootComponent )
LABEL_10:
    sub_1BCAA3C(Instance, v11);
  EventRewardRootComponent__StartSwitchFigure(eventRootComponent, _9__4, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__4(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventMissionItemListViewManager___c__DisplayClass58_0_o *v3; // x19
  EventMissionItemListViewManager_o *v4; // x19
  System_Collections_IEnumerator_o *v5; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (EventMissionItemListViewManager___c__DisplayClass58_0_o *)_4__this->fields.touchBlockObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  v5 = EventMissionItemListViewManager__afterReward(v4, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v4, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_0___AcceptReward_b__6(
        EventMissionItemListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4B1A1D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1A1D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  v7 = EventMissionItemListViewManager__afterReward(_4__this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v7, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___ctor(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v3; // x19
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
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v35; // x8
  struct EventMissionItemListViewManager_o *v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Text_StringBuilder_o *v40; // x20
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v41; // x8
  System_String_o *v42; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v45; // x1
  __int64 v46; // x1
  System_String_o *v47; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v48; // x8
  System_String_o *v49; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v50; // x8
  System_String_o *v51; // x0
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v52; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v53; // x21
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v54; // x8
  struct EventMissionItemListViewManager_o *v55; // x8
  __int64 v56; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v57; // x8
  struct EventMissionItemListViewManager_o *v58; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v59; // x21
  Il2CppObject *NumberFormat; // x0
  __int64 v61; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v62; // x8
  struct EventMissionItemListViewManager_o *v63; // x8
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v64; // x21
  Il2CppObject *v65; // x0
  __int64 v66; // x1
  System_String_o *v67; // x21
  long double inited; // q0
  _QWORD *v69; // x22
  __int64 v70; // x8
  __int64 v71; // x0
  __int64 v72; // x0
  CommonUI_o *v73; // x21
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v74; // x22
  __int64 v75; // x2
  __int64 v76; // x3
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v77; // x24
  MissionRewardGetDialog_ClickDelegate_o *_9__3; // x23
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v79; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7

  v3 = this;
  if ( (byte_4B1A1DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_object___, method, v2);
    sub_1BCA7E0(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__, v18, v19);
    sub_1BCA7E0(&StringLiteral_8811/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_8773/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_50/*"\n \n"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_51/*"\n \n "*/, v30, v31);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1BCA7E0(&StringLiteral_8812/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v32, v33);
    byte_4B1A1DA = 1;
  }
  giftList = v3->fields.giftList;
  if ( !giftList )
    goto LABEL_68;
  if ( giftList->fields._size < 1 )
  {
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
      CS___8__locals1 = v3->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v45 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, method);
          UnityEngine_MonoBehaviour__StartCoroutine_70139516(_4__this, v45, 0LL);
          return;
        }
      }
    }
    goto LABEL_68;
  }
  v35 = v3->fields.CS___8__locals1;
  if ( !v35 )
    goto LABEL_68;
  v36 = v35->fields.__4__this;
  if ( !v36 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v36->fields.touchBlockObj;
  if ( !this )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v40 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v37, v38, v39);
  System_Text_StringBuilder___ctor(v40, 0LL);
  v41 = v3->fields.CS___8__locals1;
  if ( !v41 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v41->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v42 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v42, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v3->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v42 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__Substring_62420224(
                                                                          v42,
                                                                          0,
                                                                          v42->fields._stringLength - 2,
                                                                          0LL);
      if ( !v40 )
        goto LABEL_68;
      System_Text_StringBuilder__Append_61563116(v40, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_61563116(
                                                                          v40,
                                                                          v47,
                                                                          0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0LL);
      if ( !v40 )
        goto LABEL_68;
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v40,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v42,
                                                                          0LL);
    }
    v48 = v3->fields.CS___8__locals1;
    if ( !v48 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v48->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    v49 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v49, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__Append_61563116(
                                                                          v40,
                                                                          (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                          0LL);
  }
  v50 = v3->fields.CS___8__locals1;
  if ( !v50 )
    goto LABEL_68;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v50->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_68;
  v51 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_String__IsNullOrEmpty(v51, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8773/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0LL);
    v52 = v3->fields.CS___8__locals1;
    if ( !v52 )
      goto LABEL_68;
    v53 = this;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)v52->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass58_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                        this,
                                                                        this->klass[1]._1.image);
    if ( !v40 )
      goto LABEL_68;
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v40,
                                                                        (System_String_o *)v53,
                                                                        (Il2CppObject *)this,
                                                                        0LL);
  }
  v54 = v3->fields.CS___8__locals1;
  if ( !v54 )
    goto LABEL_68;
  v55 = v54->fields.__4__this;
  if ( !v55 )
    goto LABEL_68;
  if ( v55->fields.isQpMaxAlert )
  {
    if ( !v40 )
      goto LABEL_68;
    if ( v3->fields.isGetNoReward )
    {
      System_Text_StringBuilder__set_Length(v40, 0, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
      this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8811/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v57 = v3->fields.CS___8__locals1;
      if ( v57 )
      {
        v58 = v57->fields.__4__this;
        if ( v58 )
        {
          v59 = this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v58->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v40, (System_String_o *)v59, NumberFormat, 0LL);
          goto LABEL_61;
        }
      }
LABEL_68:
      sub_1BCAA3C(this, method);
    }
    System_Text_StringBuilder__Append_61563116(v40, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8812/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v62 = v3->fields.CS___8__locals1;
    if ( !v62 )
      goto LABEL_68;
    v63 = v62->fields.__4__this;
    if ( !v63 )
      goto LABEL_68;
    v64 = this;
    v65 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v63->fields.overQpValue, 0LL);
    v67 = System_String__Format((System_String_o *)v64, v65, 0LL);
    v69 = Method_System_Array_Empty_object___;
    v70 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v70 )
    {
      sub_1C1C718(Method_System_Array_Empty_object___, v66);
      v70 = v69[7];
    }
    v71 = *(_QWORD *)(v70 + 16);
    if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
      v71 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v71 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v71, v66);
    v72 = *(_QWORD *)(v69[7] + 16LL);
    if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
      v72 = sub_1C1C6BC(inited);
    System_Text_StringBuilder__AppendFormat_61569656(v40, v67, **(System_Object_array ***)(v72 + 184), 0LL);
  }
LABEL_61:
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v3->fields.giftList )
    goto LABEL_68;
  v73 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)v3->fields.giftList,
                                                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v40 )
    goto LABEL_68;
  v74 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v40->klass->vtable._3_ToString.method)(
                                                                      v40,
                                                                      v40->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v77 = v3->fields.CS___8__locals1;
  if ( !v77 )
    goto LABEL_68;
  _9__3 = v77->fields.__9__3;
  v79 = this;
  if ( !_9__3 )
  {
    _9__3 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                        method,
                                                        v75,
                                                        v76);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__3,
      (Il2CppObject *)v77,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__3__,
      0LL);
    v77->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v77->fields.__9__3, (int64_t)_9__3, v80, v81, v82, v83, v84, v85);
  }
  if ( !v73 )
    goto LABEL_68;
  CommonUI__OpenMissionRewardGetDialog(
    v73,
    (GiftEntity_array *)v74,
    (System_String_o *)v79,
    _9__3,
    v3->fields.isGetNoReward,
    0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventMissionItemListViewManager___c__DisplayClass58_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__5; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4B1A1DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventMissionItemListViewManager___c__DisplayClass58_1_o *)sub_1BCA7E0(
                                                                        &Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
                                                                        v5,
                                                                        v6);
    byte_4B1A1DB = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventMissionItemListViewManager___c__DisplayClass58_1__AcceptReward_b__5__,
      0LL);
    v4->fields.__9__5 = _9__5;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__5, (int64_t)_9__5, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
LABEL_8:
    sub_1BCAA3C(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass58_1___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass58_1_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  SummonAssetManager_o *Instance; // x0
  __int64 v17; // x1
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  __int64 v20; // x1
  Il2CppObject *v21; // x20
  System_String_o *v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  struct EventMissionItemListViewManager___c__DisplayClass58_0_o *v25; // x23
  System_Action_o *_9__6; // x22
  System_String_o *v27; // x19
  System_String_o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B1A1DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__, v10, v11);
    sub_1BCA7E0(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B1A1DC = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  SummonAssetManager__UnloadSummonAssets(Instance, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v22, (Il2CppObject *)this->fields.sendName, 0LL);
  v25 = this->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_14;
  _9__6 = v25->fields.__9__6;
  v27 = (System_String_o *)Instance;
  v28 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v23, v24);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v25,
      Method_EventMissionItemListViewManager___c__DisplayClass58_0__AcceptReward_b__6__,
      0LL);
    v25->fields.__9__6 = _9__6;
    sub_1BCA784((PartyOrganizationUtility_o *)&v25->fields.__9__6, (int64_t)_9__6, v29, v30, v31, v32, v33, v34);
  }
  if ( !v21 )
LABEL_14:
    sub_1BCAA3C(Instance, v17);
  CommonUI__OpenNotificationDialog((CommonUI_o *)v21, v28, v27, _9__6, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass59_0___ctor(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass59_0___afterReward_b__0(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 1;
}


bool __fastcall EventMissionItemListViewManager___c__DisplayClass59_0___afterReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall EventMissionItemListViewManager__afterReward_d__59___ctor(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventMissionItemListViewManager__afterReward_d__59__MoveNext(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v21; // x21
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_bool__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  UnityEngine_WaitUntil_o *v35; // x21
  Il2CppObject **p__2__current; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  bool result; // w0

  if ( (byte_4B1A1DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__, v9, v10);
    sub_1BCA7E0(&Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__, v11, v12);
    sub_1BCA7E0(&EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_5550/*"END_EFFECT"*/, v17, v18);
    byte_4B1A1DE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (Il2CppObject *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5550/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v21 = sub_1BCAA2C(EventMissionItemListViewManager___c__DisplayClass59_0_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v21, 0LL);
    if ( v21 )
    {
      *(_BYTE *)(v21 + 16) = 0;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v21,
        Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v26, v27);
        v31 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v28, v29, v30);
        System_Func_bool____ctor(
          v31,
          (Il2CppObject *)v21,
          Method_EventMissionItemListViewManager___c__DisplayClass59_0__afterReward_b__1__,
          0LL);
        v35 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v32, v33, v34);
        UnityEngine_WaitUntil___ctor(v35, v31, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v35, v37, v38, v39, v40, v41, v42);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_1BCAA3C(Instance, v23);
  }
  return 0;
}


Il2CppObject *__fastcall EventMissionItemListViewManager__afterReward_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventMissionItemListViewManager__afterReward_d__59__System_Collections_IEnumerator_Reset(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventMissionItemListViewManager__afterReward_d__59_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventMissionItemListViewManager__afterReward_d__59__System_Collections_IEnumerator_get_Current(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventMissionItemListViewManager__afterReward_d__59__System_IDisposable_Dispose(
        EventMissionItemListViewManager__afterReward_d__59_o *this,
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