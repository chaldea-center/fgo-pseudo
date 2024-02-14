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

  if ( (byte_4214CE8 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4214CE8 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.dialogTitle, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.dialogMessage, v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.dialogGetable, v18, v19, v20, v21, v22, v23, v24);
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
  __int64 v36; // x23
  __int64 Instance; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v46; // x8
  const MethodInfo *v47; // x1
  __int64 v48; // x1
  __int64 v49; // x2
  System_Text_StringBuilder_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  System_Text_StringBuilder_o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  System_Text_StringBuilder_o *v62; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x28
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  Il2CppObject **v78; // x22
  const MethodInfo *v79; // x1
  __int64 v80; // x2
  __int64 v81; // x24
  il2cpp_array_size_t v82; // w21
  Il2CppClass **v83; // x27
  Il2CppClass *v84; // x8
  char *v85; // x27
  Il2CppClass *v86; // t1
  EventRewardSetEntity_o *SetRewardData; // x23
  System_Int32_array **v88; // x1
  Il2CppObject **v89; // x20
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **name; // x1
  struct GetSvts_array *getSvtList; // x8
  SummonAssetManager_o *v104; // x19
  __int64 v105; // x1
  __int64 v106; // x2
  System_Action_o *v107; // x20
  __int64 v108; // x1
  __int64 v109; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v110; // x23
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x28
  GiftEntity_o **m_Items; // x21
  GiftEntity_o *v115; // x8
  GiftEntity_o *v116; // x8
  ServantEntity_o *v117; // x25
  bool IsCombineMaterial; // w26
  System_String_o *v119; // x0
  System_Text_StringBuilder_o *klass; // x26
  GiftEntity_o *v121; // x8
  Il2CppObject *v122; // x25
  Il2CppObject *v123; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v124; // x1
  GiftEntity_o *v125; // x8
  GiftEntity_o *v126; // x8
  bool IsCountableWithPlus; // w0
  __int64 v128; // x1
  __int64 v129; // x2
  Il2CppObject **v130; // x8
  Il2CppObject *v131; // x26
  System_Text_StringBuilder_o *v132; // x25
  int32_t getQpValue; // w8
  GiftEntity_o *v134; // x8
  System_String_o *v135; // x27
  Il2CppObject *v136; // x0
  System_Text_StringBuilder_o *monitor; // x26
  System_String_o *v138; // x1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v139; // x22
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  __int64 v146; // x1
  __int64 v147; // x2
  System_Action_o *v148; // x22
  CommonUI_o *v149; // x19
  System_String_o *v150; // x0
  System_String_o *v151; // x0
  Il2CppObject *v152; // x22
  System_String_o *v153; // x20
  __int64 v154; // x1
  __int64 v155; // x2
  System_Action_o *v156; // x21
  __int64 v157; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v158; // [xsp+38h] [xbp-78h]
  __int64 v159; // [xsp+40h] [xbp-70h]
  int32_t num; // [xsp+4Ch] [xbp-64h] BYREF
  WarEntity_o *v161; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4214CD3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor___67884040, v13);
    sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v20);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v21);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v22);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__, v23);
    sub_B0D8A4(&EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo, v24);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__, v25);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__, v26);
    sub_B0D8A4(&EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo, v27);
    sub_B0D8A4(&StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v28);
    sub_B0D8A4(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v29);
    sub_B0D8A4(&StringLiteral_23741/*"{0}×{1:#,0}"*/, v30);
    sub_B0D8A4(&StringLiteral_23783/*"×"*/, v31);
    sub_B0D8A4(&StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, v32);
    sub_B0D8A4(&StringLiteral_1/*""*/, v33);
    sub_B0D8A4(&StringLiteral_30/*"\n "*/, v34);
    sub_B0D8A4(&StringLiteral_24038/*"＋"*/, v35);
    byte_4214CD3 = 1;
  }
  v161 = 0LL;
  entity = 0LL;
  v36 = sub_B0D974(EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo, method, v2);
  EventMissionItemListViewManager___c__DisplayClass56_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_0_o *)v36,
    0LL);
  if ( !v36 )
    goto LABEL_122;
  *(_QWORD *)(v36 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_122;
  if ( !Instance )
    goto LABEL_122;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v46 = this->fields.missionToRecieve;
  if ( !v46 )
    goto LABEL_122;
  if ( !Instance )
    goto LABEL_122;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v46->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v47);
  v50 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v48, v49);
  System_Text_StringBuilder___ctor(v50, 0LL);
  *(_QWORD *)(v36 + 32) = v50;
  sub_B0D840((BattleServantConfConponent_o *)(v36 + 32), (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  v59 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v57, v58);
  System_Text_StringBuilder___ctor(v59, 0LL);
  v62 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v60, v61);
  System_Text_StringBuilder___ctor(v62, 0LL);
  *(_QWORD *)(v36 + 24) = v62;
  sub_B0D840((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
  v71 = sub_B0D974(EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo, v69, v70);
  EventMissionItemListViewManager___c__DisplayClass56_1___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v71,
    0LL);
  if ( !v71 )
    goto LABEL_122;
  *(_QWORD *)(v71 + 40) = v36;
  v78 = (Il2CppObject **)(v71 + 40);
  sub_B0D840((BattleServantConfConponent_o *)(v71 + 40), (System_Int32_array **)v36, v72, v73, v74, v75, v76, v77);
  Instance = (__int64)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_122;
  if ( *(_DWORD *)(Instance + 80) == 1 )
  {
    *(_DWORD *)(v71 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_122;
    v81 = *(_QWORD *)&GiftListById->max_length;
    if ( (int)v81 >= 1 )
    {
      v82 = 0;
      while ( 1 )
      {
        v83 = &GiftListById->obj.klass + (int)v82;
        v86 = v83[4];
        v85 = (char *)(v83 + 4);
        v84 = v86;
        if ( !v86 )
          break;
        Instance = Gift__IsServant_26783204(HIDWORD(v84->_1.name), 0LL);
        if ( (Instance & 1) == 0 )
        {
          if ( v82 >= GiftListById->max_length )
            goto LABEL_123;
          if ( !*(_QWORD *)v85 )
            break;
          Instance = Gift__IsCommandCode_26783600(*(_DWORD *)(*(_QWORD *)v85 + 20LL), 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v82 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !*(_QWORD *)v85 )
              break;
            Instance = Gift__IsCostumeRelease(*(_DWORD *)(*(_QWORD *)v85 + 20LL), 0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( v82 >= GiftListById->max_length )
                goto LABEL_123;
              if ( !*(_QWORD *)v85 || !Instance )
                break;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &entity,
                           *(_DWORD *)(*(_QWORD *)v85 + 24LL),
                           (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !entity || !Instance )
                  break;
                Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, entity->fields.id, 0LL);
                if ( (Instance & 1) == 0 )
                  ++*(_DWORD *)(v71 + 24);
              }
            }
          }
        }
        if ( (int)++v82 >= (int)v81 )
          goto LABEL_41;
        if ( v82 >= GiftListById->max_length )
        {
LABEL_123:
          v157 = sub_B0D9A8(Instance);
          sub_B0D948(v157, 0LL);
        }
      }
LABEL_122:
      sub_B0D97C(Instance);
    }
LABEL_41:
    v159 = v71;
    v158 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                     v79,
                                                                                                     v80);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v158,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v110 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                     v108,
                                                                                                     v109);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v110,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v81 >= 1 )
    {
      v113 = 0LL;
      m_Items = GiftListById->m_Items;
      do
      {
        if ( (unsigned int)v113 >= GiftListById->max_length )
          goto LABEL_123;
        v115 = m_Items[v113];
        if ( !v115 )
          goto LABEL_122;
        Instance = Gift__IsServant_26783204(v115->fields.type, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_122;
          Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( (unsigned int)v113 >= GiftListById->max_length )
            goto LABEL_123;
          v116 = m_Items[v113];
          if ( !v116 )
            goto LABEL_122;
          if ( !Instance )
            goto LABEL_122;
          Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v116->fields.objectId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_122;
          v117 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
          Instance = SvtType__IsStatusUp(v117->fields.type, 0LL);
          if ( IsCombineMaterial || (Instance & 1) != 0 )
          {
            if ( !*v78 )
              goto LABEL_122;
            Instance = (__int64)(*v78)[2].klass;
            if ( !Instance )
              goto LABEL_122;
            v119 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 360LL))(
                                        Instance,
                                        *(_QWORD *)(*(_QWORD *)Instance + 368LL));
            Instance = System_String__IsNullOrEmpty(v119, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !*v78 )
                goto LABEL_122;
              Instance = (__int64)(*v78)[2].klass;
              if ( !Instance )
                goto LABEL_122;
              Instance = (__int64)System_Text_StringBuilder__Append_42155400(
                                    (System_Text_StringBuilder_o *)Instance,
                                    (System_String_o *)StringLiteral_30/*"\n "*/,
                                    0LL);
            }
            if ( !*v78 )
              goto LABEL_122;
            klass = (System_Text_StringBuilder_o *)(*v78)[2].klass;
            Instance = (__int64)ServantEntity__getName(v117, 0, -1, 0LL);
            if ( (unsigned int)v113 >= GiftListById->max_length )
              goto LABEL_123;
            v121 = m_Items[v113];
            if ( !v121 )
              goto LABEL_122;
            v122 = (Il2CppObject *)Instance;
            num = v121->fields.num;
            v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
            Instance = (__int64)System_String__Format_43845440((System_String_o *)StringLiteral_23741/*"{0}×{1:#,0}"*/, v122, v123, 0LL);
            if ( !klass )
              goto LABEL_122;
            Instance = (__int64)System_Text_StringBuilder__Append_42155400(klass, (System_String_o *)Instance, 0LL);
            if ( (unsigned int)v113 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !v110 )
              goto LABEL_122;
            v124 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v113];
            Instance = (__int64)v110;
LABEL_108:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              v124,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
          }
        }
        else
        {
          if ( (unsigned int)v113 >= GiftListById->max_length )
            goto LABEL_123;
          v125 = m_Items[v113];
          if ( !v125 )
            goto LABEL_122;
          Instance = Gift__IsItem_26783148(v125->fields.type, 0LL);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_122;
            Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( (unsigned int)v113 >= GiftListById->max_length )
              goto LABEL_123;
            v126 = m_Items[v113];
            if ( !v126 || !Instance )
              goto LABEL_122;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &v161,
                         v126->fields.objectId,
                         (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v161 || !Instance )
                goto LABEL_122;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v161->fields.id, 0LL);
              if ( (Instance & 1) == 0 )
              {
                if ( !v161 )
                  goto LABEL_122;
                IsCountableWithPlus = ItemType__IsCountableWithPlus(v161->fields.bannerId, 0LL);
                v130 = (Il2CppObject **)&StringLiteral_24038/*"＋"*/;
                if ( !IsCountableWithPlus )
                  v130 = (Il2CppObject **)&StringLiteral_23783/*"×"*/;
                v131 = *v130;
                v132 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v128, v129);
                System_Text_StringBuilder___ctor(v132, 0LL);
                if ( !v161 || !v132 )
                  goto LABEL_122;
                System_Text_StringBuilder__Append_42155400(v132, v161->fields.age, 0LL);
                if ( this->fields.isQpMaxAlert && this->fields.getQpValue )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                  getQpValue = this->fields.getQpValue;
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                  if ( (unsigned int)v113 >= GiftListById->max_length )
                    goto LABEL_123;
                  v134 = m_Items[v113];
                  if ( !v134 )
                    goto LABEL_122;
                  getQpValue = v134->fields.num;
                }
                v135 = (System_String_o *)Instance;
                num = getQpValue;
                v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
                Instance = (__int64)System_Text_StringBuilder__AppendFormat_42161952(v132, v135, v131, v136, 0LL);
                if ( !*v78 )
                  goto LABEL_122;
                monitor = (System_Text_StringBuilder_o *)(*v78)[1].monitor;
                if ( *(int *)(v159 + 24) >= 2 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                  if ( !monitor )
                    goto LABEL_122;
                  Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                                        monitor,
                                        (System_String_o *)Instance,
                                        (Il2CppObject *)v132,
                                        0LL);
                  if ( !*v78 )
                    goto LABEL_122;
                  Instance = (__int64)(*v78)[1].monitor;
                  if ( !Instance )
                    goto LABEL_122;
                  v138 = (System_String_o *)StringLiteral_30/*"\n "*/;
                }
                else
                {
                  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v132->klass->vtable._3_ToString.method)(
                               v132,
                               v132->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                  if ( !monitor )
                    goto LABEL_122;
                  v138 = (System_String_o *)Instance;
                  Instance = (__int64)monitor;
                }
                Instance = (__int64)System_Text_StringBuilder__Append_42155400(
                                      (System_Text_StringBuilder_o *)Instance,
                                      v138,
                                      0LL);
                if ( (unsigned int)v113 >= GiftListById->max_length )
                  goto LABEL_123;
                Instance = (__int64)v158;
                if ( !v158 )
                  goto LABEL_122;
                v124 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v113];
                goto LABEL_108;
              }
            }
          }
        }
        ++v113;
      }
      while ( (int)v113 < (int)v81 );
    }
    v139 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                             v111,
                                                                             v112);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v139,
      (System_Collections_Generic_IEnumerable_T__o *)v158,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_GiftEntity___ctor___67884040);
    *(_QWORD *)(v159 + 16) = v139;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v159 + 16),
      (System_Int32_array **)v139,
      v140,
      v141,
      v142,
      v143,
      v144,
      v145);
    Instance = *(_QWORD *)(v159 + 16);
    if ( !Instance )
      goto LABEL_122;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v110,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v148 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v146, v147);
    System_Action___ctor(
      v148,
      (Il2CppObject *)v159,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v148, 0LL);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, v79);
    v88 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v71 + 32) = StringLiteral_1/*""*/;
    v89 = (Il2CppObject **)(v71 + 32);
    sub_B0D840((BattleServantConfConponent_o *)(v71 + 32), v88, v90, v91, v92, v93, v94, v95);
    if ( !SetRewardData )
      goto LABEL_122;
    name = (System_Int32_array **)SetRewardData->fields.name;
    *v89 = (Il2CppObject *)name;
    sub_B0D840((BattleServantConfConponent_o *)(v71 + 32), name, v96, v97, v98, v99, v100, v101);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (__int64)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_122;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v104 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v107 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v105, v106);
      System_Action___ctor(
        v107,
        (Il2CppObject *)v71,
        Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__,
        0LL);
      if ( !v104 )
        goto LABEL_122;
      SummonAssetManager__LoadSummonAssets(v104, v107, 0LL);
    }
    else
    {
      v149 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v150 = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v151 = System_String__Format(v150, *v89, 0LL);
      v152 = *v78;
      v153 = v151;
      v156 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v154, v155);
      System_Action___ctor(
        v156,
        v152,
        Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__,
        0LL);
      if ( !v149 )
        goto LABEL_122;
      CommonUI__OpenNotificationDialog(
        v149,
        (System_String_o *)StringLiteral_1/*""*/,
        v153,
        v156,
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
    Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  EventMissionItemListViewManager__CreateList_25178612(this, missionList, eventId, isDailyMission, 1, v5);
}


void __fastcall EventMissionItemListViewManager__CreateList_25178612(
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
  int64_t Instance; // x0
  struct UIScrollView_o *scrollView; // x8
  WarEntity_o *Entity; // x23
  bool v23; // w8
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  unsigned __int64 v32; // x26
  bool v33; // w22
  EventMissionEntity_o *v34; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  EventMissionItemListViewItem_o *v36; // x24
  const MethodInfo *v37; // x3
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v40; // x21
  __int64 v41; // x0

  if ( (byte_4214CC2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, missionList);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, v19);
    byte_4214CC2 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_36;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             eventId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v23 = Instance > *(_QWORD *)&Entity->fields.eventId && Instance <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v23;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  Instance = UserMissionNewManager__ReadData(0LL);
  if ( !missionList )
    goto LABEL_36;
  v31 = *(_QWORD *)&missionList->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    v33 = isDailyMission;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v31 )
      {
        v41 = sub_B0D9A8(Instance);
        sub_B0D948(v41, 0LL);
      }
      v34 = missionList->m_Items[v32];
      itemList = this->fields.itemList;
      v36 = (EventMissionItemListViewItem_o *)sub_B0D974(EventMissionItemListViewItem_TypeInfo, v24, v25);
      EventMissionItemListViewItem___ctor(v36, v34, v33, v37);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v31) = missionList->max_length;
      if ( (__int64)++v32 >= (int)v31 )
        goto LABEL_22;
    }
LABEL_36:
    sub_B0D97C(Instance);
  }
LABEL_22:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !byte_4214D7E )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, sort);
    byte_4214D7E = 1;
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
    v40 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v40 )
      goto LABEL_36;
    UILabel__set_text(v40, (System_String_o *)Instance, 0LL);
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
  DataManager_o *Instance; // x0
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  EventMissionActionAddEntity_o *v12; // x21
  EventMissionActionInfo_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  EventMissionActionEntity_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **vals; // x1
  EventMissionItemListViewManager_o *v26; // x0
  const MethodInfo *v27; // x2
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4214CD1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4);
    sub_B0D8A4(&EventMissionActionInfo_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&TerminalTransitionInfo_TypeInfo, v7);
    byte_4214CD1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v12 = EntityFromIdProgressTypeAndActionType;
    v13 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v10, v11);
    EventMissionActionInfo___ctor_26645076(v13, v12, 0LL);
LABEL_11:
    v18 = (EventMissionActionEntity_o *)sub_B0D974(TerminalTransitionInfo_TypeInfo, v14, v15);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v18, 0LL);
    if ( v18 )
    {
      v18->fields.missionId = missionId;
      if ( v13 )
      {
        vals = (System_Int32_array **)v13->fields.vals;
        v18->fields.vals = (struct System_String_array *)vals;
        sub_B0D840((BattleServantConfConponent_o *)&v18->fields.vals, vals, v19, v20, v21, v22, v23, v24);
        VoiceAssetName = (System_Int32_array **)EventMissionItemListViewManager__GetVoiceAssetName(
                                                  v26,
                                                  v13->fields.vals,
                                                  v27);
        *(_QWORD *)&v18->fields.optionId = VoiceAssetName;
        sub_B0D840((BattleServantConfConponent_o *)&v18->fields.optionId, VoiceAssetName, v29, v30, v31, v32, v33, v34);
        return (TerminalTransitionInfo_o *)v18;
      }
    }
LABEL_15:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v18 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
          (EventMissionActionMaster_o *)Instance,
          missionId,
          5,
          4,
          0LL);
  if ( v18 )
  {
    v13 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v16, v17);
    EventMissionActionInfo___ctor(v13, v18, 0LL);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v18;
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
  _DWORD *SelfUserGame; // x0
  _DWORD *v30; // x22
  int32_t v31; // w23
  int32_t QpMax; // w8
  int v33; // w23
  int32_t v34; // w24
  System_String_o *v35; // x23
  Il2CppObject *v36; // x24
  System_String_o *v37; // x0
  BalanceConfig_c *v38; // x8
  Il2CppObject *v39; // x25
  Il2CppObject *v40; // x0
  struct System_String_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t v48; // w8
  int32_t num; // w8
  System_String_o *v50; // x23
  System_String_o *NumberFormat; // x0
  int32_t v52; // w8
  Il2CppObject *v53; // x22
  System_String_o *v54; // x0
  BalanceConfig_c *v55; // x8
  Il2CppObject *v56; // x24
  Il2CppObject *v57; // x0
  struct System_String_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  bool result; // w0

  if ( (byte_4214CE4 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, giftEnt);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_8781/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v11);
    sub_B0D8A4(&StringLiteral_8784/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4214CE4 = 1;
  }
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.dialogMessage, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.dialogGetable, v22, v23, v24, v25, v26, v27, v28);
  this->fields.isQpAlreadyMax = 0;
  this->fields.getQpValue = 0;
  this->fields.overQpValue = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_30;
  v30 = SelfUserGame;
  v31 = SelfUserGame[24];
  SelfUserGame = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)SelfUserGame + 23) + 4LL);
  if ( v31 >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8781/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v50 = (System_String_o *)SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v52 = v30[24];
      v53 = (Il2CppObject *)NumberFormat;
      v54 = LocalizationManager__GetNumberFormat(v52, 0LL);
      v55 = BalanceConfig_TypeInfo;
      v56 = (Il2CppObject *)v54;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v55 = BalanceConfig_TypeInfo;
      }
      v57 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v55->static_fields->QpMax, 0LL);
      v58 = System_String__Format_43850968(v50, v53, v56, v57, 0LL);
      this->fields.dialogMessage = v58;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.dialogMessage,
        (System_Int32_array **)v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      num = giftEnt->fields.num;
      goto LABEL_28;
    }
LABEL_30:
    sub_B0D97C(SelfUserGame);
  }
  if ( !giftEnt )
    goto LABEL_30;
  v33 = v30[24];
  v34 = giftEnt->fields.num;
  if ( (*((_BYTE *)SelfUserGame + 307) & 4) != 0 && !SelfUserGame[56] )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v34 + v33 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8784/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v36 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v37 = LocalizationManager__GetNumberFormat(v30[24], 0LL);
    v38 = BalanceConfig_TypeInfo;
    v39 = (Il2CppObject *)v37;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v38 = BalanceConfig_TypeInfo;
    }
    v40 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v38->static_fields->QpMax, 0LL);
    v41 = System_String__Format_43850968(v35, v36, v39, v40, 0LL);
    this->fields.dialogMessage = v41;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.dialogMessage,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v48 = BalanceConfig_TypeInfo->static_fields->QpMax - v30[24];
    this->fields.getQpValue = v48;
    num = giftEnt->fields.num - v48;
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

  if ( (byte_4214CC8 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4214CC8 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Object_array *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x19
  __int64 v45; // x0
  __int64 v46; // x0

  if ( (byte_4214CCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ConstantStrMaster___, beforeGiftEntity);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&object___TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_5657/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, v9);
    sub_B0D8A4(&StringLiteral_5658/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, v10);
    sub_B0D8A4(&StringLiteral_5725/*"EVENT_REWARD_REPLACE_MSG"*/, v11);
    byte_4214CCA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v13 = Master_WarQuestSelectionMaster;
  Value = (System_Int32_array **)ConstantStrMaster__GetValue(
                                   Master_WarQuestSelectionMaster,
                                   (System_String_o *)StringLiteral_5658/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/,
                                   0LL);
  v15 = (System_Int32_array **)ConstantStrMaster__GetValue(v13, (System_String_o *)StringLiteral_5657/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5725/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B0D8BC(object___TypeInfo, 4LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v23 = (System_Object_array *)Master_WarQuestSelectionMaster;
  if ( Value )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B0D964(
                                                              Value,
                                                              Master_WarQuestSelectionMaster->klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( !v23->max_length )
    goto LABEL_27;
  v23->m_Items[0] = (Il2CppObject *)Value;
  sub_B0D840((BattleServantConfConponent_o *)v23->m_Items, Value, v17, v18, v19, v20, v21, v22);
  if ( v15 )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B0D964(v15, v23->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_27;
  v23->m_Items[1] = (Il2CppObject *)v15;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[1], v15, v24, v25, v26, v27, v28, v29);
  if ( !beforeGiftEntity )
    goto LABEL_26;
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v36 = (System_Int32_array **)Master_WarQuestSelectionMaster;
  if ( Master_WarQuestSelectionMaster )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B0D964(
                                                              Master_WarQuestSelectionMaster,
                                                              v23->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
    {
LABEL_28:
      v46 = sub_B0D99C(Master_WarQuestSelectionMaster);
      sub_B0D948(v46, 0LL);
    }
  }
  if ( v23->max_length <= 2 )
    goto LABEL_27;
  v23->m_Items[2] = (Il2CppObject *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
  if ( !AfterGiftEntity )
LABEL_26:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v43 = (System_Int32_array **)Master_WarQuestSelectionMaster;
  if ( Master_WarQuestSelectionMaster )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B0D964(
                                                              Master_WarQuestSelectionMaster,
                                                              v23->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( v23->max_length <= 3 )
  {
LABEL_27:
    v45 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v45, 0LL);
  }
  v23->m_Items[3] = (Il2CppObject *)v43;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  return System_String__Format_43928628(v16, v23, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewManager__GetVoiceAssetName(
        EventMissionItemListViewManager_o *this,
        System_String_array *afterActionVals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  signed int max_length; // w8
  System_String_o **p_webView; // x20
  signed int v8; // w21
  System_String_o *result; // x0
  WebViewManager_o *Instance; // x0
  __int64 v11; // x9
  __int64 v12; // x0
  EventMissionItemListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4214CD2 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, afterActionVals);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (EventMissionItemListViewManager_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4214CD2 = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    p_webView = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_webView;
  }
  p_webView = (System_String_o **)&StringLiteral_1/*""*/;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
    {
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
    }
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v8], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v8 += 2;
    if ( v8 >= max_length )
      return *p_webView;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.basePanel) == 0LL )
    sub_B0D97C(Instance);
  v11 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v11
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[v11 - 1] == EventRewardRootComponent_TypeInfo )
  {
    p_webView = (System_String_o **)&Instance[14].fields.webView;
    return *p_webView;
  }
  v13 = (EventMissionItemListViewManager_o *)sub_B0DC70(Instance);
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
  DataManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v14; // x20
  _BOOL8 v15; // x0
  MissionListViewItem_o *current; // x22
  __int64 v17; // x10
  __int64 MissionId; // x0
  __int64 v19; // x1
  struct EventMissionEntity_o *v20; // x8
  int32_t v21; // w23
  UnityEngine_Object_o *viewObject; // x23
  struct ListViewObject_o *v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4214CD9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4214CD9 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      sub_B0D97C(Instance);
    }
    v14 = Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v25 = v24;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v15 )
        break;
      current = (MissionListViewItem_o *)v25.fields.current;
      if ( !v25.fields.current
        || (v17 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v25.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v17)
        || (EventMissionItemListViewItem_c *)v25.fields.current->klass->_2.typeHierarchy[v17 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B0D97C(v15);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v25.fields.current, 0LL);
      v20 = this->fields.missionToRecieve;
      if ( !v20 )
        sub_B0D97C(MissionId);
      v21 = MissionId;
      if ( (_DWORD)MissionId == v20->fields.id )
      {
        if ( !byte_421277E )
        {
          MissionId = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v19);
          byte_421277E = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v21;
        if ( !v14 )
          sub_B0D97C(MissionId);
        MissionListViewItem__ModifyItem(current, LODWORD(v14->fields.lookup) == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v23 = current->fields.viewObject;
        if ( !v23 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v23->klass->vtable._5_SetItem.method)(
          v23,
          current,
          v23->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4214CC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4214CC4 = 1;
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
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v19,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v19.fields.current == v14 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v14, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v19,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v18 = EventMissionItemListViewManager__SetPreviousFilter(this, v14->fields.sortIndex, onFinish, v17);
    }
    else
    {
      v18 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v14->fields.sortIndex, onFinish, v17);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  }
  else
  {
LABEL_18:
    if ( !onFinish )
      sub_B0D97C(Item);
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
  __int64 v7; // x22
  __int64 v8; // x0
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

  if ( (byte_4214CC6 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo, *(_QWORD *)&index);
    byte_4214CC6 = 1;
  }
  v7 = sub_B0D974(EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo, *(_QWORD *)&index, onFinished);
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__40___ctor(
    (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v7;
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
  const MethodInfo *v8; // x1

  if ( (byte_4214CDC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v3);
    byte_4214CDC = 1;
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
      ObjectList = EventMissionItemListViewManager__get_ObjectList(this, v5);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      ObjectList = (System_Collections_Generic_List_EventMissionItemListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v8);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B0D97C(ObjectList);
  }
}


void __fastcall EventMissionItemListViewManager__OnClickFilterList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_4214CDF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214CDF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_3203BB0[filterStatus];
  EventMissionItemListViewManager__setList(this, v3);
}


void __fastcall EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
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
  __int64 v14; // x20
  EventMissionItemListViewItem_o *EventMissionEntity; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  __int64 v23; // x10
  System_Int32_array **Item; // x0
  MissionListViewItem_o **v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  MissionListViewItem_o *v32; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  const MethodInfo *v34; // x1
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v36; // x2
  GiftMaster_o *v37; // x22
  GiftEntity_o *v38; // x22
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v41; // x21
  WebViewManager_o *Instance; // x19
  const MethodInfo *v43; // x3
  System_String_o *ReplaceDialogMessage; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  System_Action_o *v47; // x22
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  EventMissionEntity_o *v50; // x1
  const MethodInfo *v51; // x2

  if ( (byte_4214CC9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_EventMissionItemListViewManager_OnClickListView__, v7);
    sub_B0D8A4(&EventMissionItemListViewObject_TypeInfo, v8);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v11);
    sub_B0D8A4(&EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4214CC9 = 1;
  }
  v14 = sub_B0D974(EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo, obj, method);
  EventMissionItemListViewManager___c__DisplayClass45_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass45_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_43;
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  if ( !this->fields.isClickListViewEnabled )
    return;
  if ( !obj )
    goto LABEL_43;
  v23 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v23 )
    goto LABEL_43;
  if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[v23 - 1] != EventMissionItemListViewObject_TypeInfo )
    goto LABEL_43;
  Item = (System_Int32_array **)EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, v22);
  *(_QWORD *)(v14 + 24) = Item;
  v25 = (MissionListViewItem_o **)(v14 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), Item, v26, v27, v28, v29, v30, v31);
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  EventMissionEntity = *(EventMissionItemListViewItem_o **)(v14 + 24);
  if ( !EventMissionEntity )
    goto LABEL_43;
  EventMissionEntity = (EventMissionItemListViewItem_o *)((__int64 (__fastcall *)(EventMissionItemListViewItem_o *, void *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method)(
                                                           EventMissionEntity,
                                                           EventMissionEntity->klass[1]._1.image);
  v32 = *v25;
  if ( ((unsigned __int8)EventMissionEntity & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_43;
    eventMissionEnt = v32->fields.eventMissionEnt;
    if ( !eventMissionEnt )
      goto LABEL_43;
    if ( ((v32->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1)) == 0 )
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v32, 0LL);
      return;
    }
  }
  else if ( !v32 )
  {
    goto LABEL_43;
  }
  if ( v32->fields.progStatus == 3 )
  {
    if ( this->fields.filterStatus == 1 )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v25, 0LL);
      if ( !EventMissionEntity )
        goto LABEL_43;
      this->fields.tempSelectDispNo = EventMissionEntity->fields.sortValue0;
      v32 = *v25;
      if ( !*v25 )
        goto LABEL_43;
    }
    if ( EventMissionItemListViewItem__GetIsRewardQp((EventMissionItemListViewItem_o *)v32, (const MethodInfo *)v32) )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)*v25;
      if ( !*v25 )
        goto LABEL_43;
      IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(EventMissionEntity, v34);
      this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v36);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EventMissionEntity = (EventMissionItemListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !*v25
      || (v37 = (GiftMaster_o *)EventMissionEntity,
          (EventMissionEntity = (EventMissionItemListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v25, 0LL)) == 0LL)
      || !v37 )
    {
LABEL_43:
      sub_B0D97C(EventMissionEntity);
    }
    EventMissionEntity = (EventMissionItemListViewItem_o *)GiftMaster__getDataById(
                                                             v37,
                                                             HIDWORD(EventMissionEntity->fields.sortValue2B),
                                                             0LL);
    if ( !EventMissionEntity
      || (v38 = (GiftEntity_o *)EventMissionEntity, !LOBYTE(EventMissionEntity->fields.sortValue1)) )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)*v25;
      if ( *v25 )
      {
        v50 = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)EventMissionEntity, 0LL);
        EventMissionItemListViewManager__recieveReward(this, v50, v51);
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
      v41 = IconGiftEntity;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                               (EventMissionItemListViewManager_o *)Instance,
                               v41,
                               v38,
                               v43);
      v47 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
      System_Action___ctor(
        v47,
        (Il2CppObject *)v14,
        Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          ReplaceDialogMessage,
          v47,
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
    v48 = Method_EventMissionItemListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v48 = (_QWORD *)sub_B0D8AC(Method_EventMissionItemListViewManager_OnClickListView__);
    v49 = (System_Reflection_MethodBase_o *)sub_B0D888(v48, v48[3]);
    OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0LL);
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
  GiftEntity_array *GiftListById; // x21
  EventMissionItemListViewManager___c_c *v17; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__76_0; // x22
  Il2CppObject *v20; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct EventMissionEntity_o *v28; // x8

  if ( (byte_4214CE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_GiftEntity___, closeCallback);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Func_GiftEntity__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_GiftEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__, v10);
    sub_B0D8A4(&EventMissionItemListViewManager___c_TypeInfo, v11);
    byte_4214CE2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, missionToRecieve->fields.giftId, 0LL);
  v17 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v17 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_GiftEntity__bool__TypeInfo,
                                                                                    v14,
                                                                                    v15);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__76_0,
      v20,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_GiftEntity__bool___ctor__);
    v21 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v21->__9__76_0 = (struct System_Func_GiftEntity__bool__o *)_9__76_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__76_0,
      (System_Int32_array **)_9__76_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)GiftListById,
         (System_Func_T__bool__o *)_9__76_0,
         (const MethodInfo_17071E4 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (GiftMaster_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                         (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v28 = this->fields.missionToRecieve;
      if ( v28 )
      {
        if ( Master_WarQuestSelectionMaster )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_WarQuestSelectionMaster,
            this->fields.currentEventId,
            v28->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  System_Action_o *v26; // x27
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *onTransition; // x28
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x20
  __int64 v33; // x0
  System_String_o *decide; // [xsp+28h] [xbp-58h]

  if ( (byte_4214CE5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_EventMissionItemListViewManager_Decide__, v10);
    sub_B0D8A4(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__, v11);
    sub_B0D8A4(&Method_EventMissionItemListViewManager_TransitionToCombineScene__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_11802/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v14);
    sub_B0D8A4(&StringLiteral_11801/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v15);
    sub_B0D8A4(&StringLiteral_11808/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v16);
    byte_4214CE5 = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_B0D840(
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
  decide = LocalizationManager__Get((System_String_o *)StringLiteral_11802/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11808/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v23 = v18;
  v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_B0D97C(v33);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    decide,
    v17,
    v23,
    v26,
    onTransition,
    v32,
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
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214CE3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SceneList_TypeInfo, v3);
    byte_4214CE3 = 1;
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
      sub_B0D97C(gameObject);
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
  _BOOL8 v11; // x0
  __int64 v12; // x11
  __int64 v13; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v16; // w8
  __int64 v17; // x21
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4214CDD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v8);
    byte_4214CDD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v10 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    if ( !v19.fields.current
      || (v12 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12)
      || (EventMissionItemListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v12 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B0D97C(v11);
    }
    v13 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
    {
      if ( (EventMissionItemListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v13 - 1] == EventMissionItemListViewItem_TypeInfo )
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
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_25;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v16 = v10->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v16 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        ObjectList = (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v10->fields._items->m_Items[v17];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventMissionItemListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v16 = v10->fields._size;
        if ( (int)++v17 >= v16 )
          return;
      }
LABEL_25:
      sub_B0D97C(ObjectList);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_25196156(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  __int64 v14; // x10
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v18; // x21
  int v19; // w8
  __int64 v20; // x23
  __int64 v21; // x8
  __int64 v22; // x22
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4214CDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v10);
    byte_4214CDE = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current
      || (v14 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
      || (EventMissionItemListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v14 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B0D97C(v12);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v24.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                              this,
                                                                                              v15);
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  v18 = itemList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v19 = itemList->fields._size;
    if ( v19 >= 1 )
    {
      v20 = 0LL;
      while ( 1 )
      {
        if ( v19 <= (unsigned int)v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v21 = (__int64)v18->fields._items + 8 * v20;
        v22 = *(_QWORD *)(v21 + 32);
        if ( !v22 )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewObject__GetItem(
                                                                                                    *(EventMissionItemListViewObject_o **)(v21 + 32),
                                                                                                    v16);
        if ( !itemList )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewItem__get_MissionId(
                                                                                                    (MissionListViewItem_o *)itemList,
                                                                                                    0LL);
        if ( (_DWORD)itemList == missionId )
          itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)(*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v22 + 456LL))(v22, this->fields.isInput, *(_QWORD *)(*(_QWORD *)v22 + 464LL));
        v19 = v18->fields._size;
        if ( (int)++v20 >= v19 )
          return;
      }
LABEL_24:
      sub_B0D97C(itemList);
    }
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_4214CD0 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4214CD0 = 1;
  }
  if ( !byte_4214D7F )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, method);
    byte_4214D7F = 1;
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
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct EventMissionItemListViewItem_o *v14; // x21
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4214CDA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v6);
    sub_B0D8A4(&StringLiteral_18253/*"ef_mission_extric01"*/, v7);
    sub_B0D8A4(&StringLiteral_20628/*"modifyOpenItem"*/, v8);
    byte_4214CDA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B0D97C(0LL);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v25,
        ObjectList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v26 = v25;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v26,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v10 )
          break;
        current = v26.fields.current;
        if ( !v26.fields.current )
          sub_B0D97C(v10);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v26.fields.current,
                                          v11);
        v14 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_B0D97C(0LL);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_421277E )
          {
            sub_B0D8A4(&EventRewardSaveData_TypeInfo, v15);
            byte_421277E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v14;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v14,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v14, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18253/*"ef_mission_extric01"*/, transform, v24);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v26,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20628/*"modifyOpenItem"*/,
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
  __int64 v8; // x0
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

  if ( (byte_4214CC5 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo, *(_QWORD *)&index);
    byte_4214CC5 = 1;
  }
  v7 = sub_B0D974(EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo, *(_QWORD *)&index, onFinished);
  EventMissionItemListViewManager__SetPreviousFilter_d__39___ctor(
    (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v7;
}


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
    sub_B0D97C(scrollView);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4214CE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4214CE6 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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

  if ( (byte_4214CE9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, *(_QWORD *)&x);
    byte_4214CE9 = 1;
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  void *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIdProgressTypeAndActionType; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  struct EventMissionEntity_o *v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppObject *v41; // x22
  EventMissionActionInfo_o *v42; // x21
  __int64 v43; // x0
  int v44; // w21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__64_1; // x21
  Il2CppObject *v47; // x22
  struct EventMissionItemListViewManager___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *targetMissionId; // x1
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x8
  __int64 v58; // x8
  int32_t v59; // w0
  const MethodInfo *v60; // x2
  __int64 v61; // x0
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+8h] [xbp-A8h] BYREF
  int v63[2]; // [xsp+20h] [xbp-90h]
  int v64; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_4214CEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventMissionActionInfo___ctor__, method);
    sub_B0D8A4(&System_Comparison_EventMissionActionInfo__TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v12);
    sub_B0D8A4(&EventMissionActionInfo_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__, v24);
    sub_B0D8A4(&EventMissionItemListViewManager___c_TypeInfo, v25);
    sub_B0D8A4(&StringLiteral_16283/*"actionAfterCallback"*/, v26);
    byte_4214CEA = 1;
  }
  memset(&v66, 0, sizeof(v66));
  memset(&v65, 0, sizeof(v65));
  v64 = 0;
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_43;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType((EventMissionActionAddMaster_o *)Instance, missionToRecieve->fields.id, 5, 3, 0LL);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v62,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v66 = v62;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v66,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v66.fields.current;
      v34 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v31, v32);
      EventMissionActionInfo___ctor_26645076(v34, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v27 )
        sub_B0D97C(v35);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v63[0] = 185;
    v64 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v66,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v64 = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v38 = this->fields.missionToRecieve;
    if ( !v38 )
      goto LABEL_43;
    if ( !Instance )
      goto LABEL_43;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v38->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v62,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v65 = v62;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v65,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v41 = v65.fields.current;
      v42 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v39, v40);
      EventMissionActionInfo___ctor(v42, (EventMissionActionEntity_o *)v41, 0LL);
      if ( !v27 )
        sub_B0D97C(v43);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v63[0] = 185;
    v44 = ++v64;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v65,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v44 && v63[v44 - 1] == 185 )
      v64 = v44 - 1;
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
    v47 = (Il2CppObject *)static_fields->__9;
    _9__64_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMissionActionInfo__TypeInfo,
                                                                           v36,
                                                                           v37);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__64_1,
      v47,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionActionInfo___ctor__);
    v48 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v48->__9__64_1 = (struct System_Comparison_EventMissionActionInfo__o *)_9__64_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v48->__9__64_1,
      (System_Int32_array **)_9__64_1,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v27 )
    goto LABEL_43;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
    (System_Comparison_T__o *)_9__64_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  size = v27->fields._size;
  if ( size <= 0 )
    goto LABEL_39;
  v57 = v27->fields._items->m_Items[size - 1];
  if ( !v57 || (v58 = *(_QWORD *)&v57->fields.addCount) == 0 )
LABEL_43:
    sub_B0D97C(Instance);
  if ( !*(_DWORD *)(v58 + 24) )
  {
    v61 = sub_B0D9A8(Instance);
    sub_B0D948(v61, 0LL);
  }
  v59 = System_Int32__Parse(*(System_String_o **)(v58 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v59 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_25196156(this, (int32_t)targetMissionId, v60);
    goto LABEL_41;
  }
LABEL_39:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_41:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16283/*"actionAfterCallback"*/,
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
    sub_B0D840(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__afterReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4214CD4 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewManager__afterReward_d__57_TypeInfo, method);
    byte_4214CD4 = 1;
  }
  v4 = sub_B0D974(EventMissionItemListViewManager__afterReward_d__57_TypeInfo, method, v2);
  EventMissionItemListViewManager__afterReward_d__57___ctor(
    (EventMissionItemListViewManager__afterReward_d__57_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  int64_t Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v17; // x8
  int64_t v18; // x20
  int64_t v19; // x21
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t v28; // w21
  BalanceConfig_c *v29; // x0
  int32_t PresentBoxMax; // w8
  int v31; // w20
  EventMissionItemListViewManager___c_c *v32; // x0
  struct EventMissionItemListViewManager___c_StaticFields *v33; // x8
  System_Action_o *_9__49_0; // x20
  Il2CppObject *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct EventMissionItemListViewManager___c_StaticFields *v42; // x0
  BattleServantConfConponent_o *p__9__49_0; // x0
  __int64 *v44; // x8
  EventMissionItemListViewManager___c_c *v45; // x0
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  Il2CppObject *v47; // x21
  struct EventMissionItemListViewManager___c_StaticFields *v48; // x0

  if ( (byte_4214CCC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__, v10);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__, v11);
    sub_B0D8A4(&EventMissionItemListViewManager___c_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_12278/*"SHOW_MSG"*/, v13);
    sub_B0D8A4(&StringLiteral_11164/*"REWARD_ACCEPTABLE"*/, v14);
    byte_4214CCC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_51;
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v17 = this->fields.missionToRecieve;
  if ( !v17 )
    goto LABEL_51;
  if ( v17->fields.rewardType == 1 )
  {
    v18 = Instance;
    if ( !Instance )
      goto LABEL_51;
    if ( Gift__IsServant_26783204(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_51;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_51;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            *(_DWORD *)(v18 + 24),
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_51;
      v19 = Instance;
      if ( SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
        || SvtType__IsStatusUp(*(_DWORD *)(v19 + 84), 0LL) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
        v28 = *(_DWORD *)(Instance + 24);
        v29 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v29 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v29->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v28 )
        {
          v45 = EventMissionItemListViewManager___c_TypeInfo;
          if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v45 = EventMissionItemListViewManager___c_TypeInfo;
          }
          static_fields = v45->static_fields;
          _9__49_0 = static_fields->__9__49_0;
          if ( !_9__49_0 )
          {
            if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v45);
              static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v47 = (Il2CppObject *)static_fields->__9;
            _9__49_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
            System_Action___ctor(
              _9__49_0,
              v47,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__,
              0LL);
            v48 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v48->__9__49_0 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v48->__9__49_0;
            goto LABEL_48;
          }
LABEL_49:
          this->fields.ShowMSG = _9__49_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.ShowMSG,
            (System_Int32_array **)_9__49_0,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          Instance = (int64_t)this->fields.targetFSM;
          if ( Instance )
          {
            v44 = &StringLiteral_12278/*"SHOW_MSG"*/;
            goto LABEL_39;
          }
LABEL_51:
          sub_B0D97C(Instance);
        }
        v31 = *(_DWORD *)(v18 + 28);
        if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v31 + v28 > PresentBoxMax )
        {
          v32 = EventMissionItemListViewManager___c_TypeInfo;
          if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v32 = EventMissionItemListViewManager___c_TypeInfo;
          }
          v33 = v32->static_fields;
          _9__49_0 = v33->__9__49_1;
          if ( !_9__49_0 )
          {
            if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v32);
              v33 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v35 = (Il2CppObject *)v33->__9;
            _9__49_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
            System_Action___ctor(
              _9__49_0,
              v35,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__,
              0LL);
            v42 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v42->__9__49_1 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v42->__9__49_1;
LABEL_48:
            sub_B0D840(p__9__49_0, (System_Int32_array **)_9__49_0, v36, v37, v38, v39, v40, v41);
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
  v44 = &StringLiteral_11164/*"REWARD_ACCEPTABLE"*/;
LABEL_39:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v44, 0LL);
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

  if ( (byte_4214CE7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_4214CE7 = 1;
  }
  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    this->fields.dialogCallBack = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.dialogCallBack,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(dialogCallBack, result, (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
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
  AutomatedAction_o *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v14; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v16; // x8

  if ( (byte_4214CD7 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewManager_TypeInfo, data);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10);
    byte_4214CD7 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventMissionItemListViewManager_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B0D840(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
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
        EventMissionItemListViewManager__setList(this, v14);
      }
    }
    else
    {
      EventMissionItemListViewManager__RefrashListDisp(this, v14);
    }
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v16 = this->fields.missionToRecieve;
    if ( !v16 || !Instance )
LABEL_13:
      sub_B0D97C(Instance);
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
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x19
  int v12; // s0
  UnityEngine_Transform_o *v15; // x19
  int v16; // s0

  if ( (byte_4214CD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, parentTr);
    sub_B0D8A4(&EventMissionItemListViewManager_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4214CD8 = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_12:
    sub_B0D97C(effectAssetData);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  return v10;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  EventMissionItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4214CC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4214CC1 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v12;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214CC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___, method);
    byte_4214CC0 = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_2049060 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetLoader_LoadEndDataHandler_o *v7; // x20

  if ( (byte_4214CD6 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_EventMissionItemListViewManager_endloadEffect__, v4);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_5858/*"Effect/EventMission"*/, v6);
    byte_4214CD6 = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5858/*"Effect/EventMission"*/, v7, 1, 0LL);
}


void __fastcall EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EventMissionItemListViewManager_o *v19; // x20
  struct ListViewIndicator_o *indicator; // x8
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ListViewIndicator_o *v28; // x8
  System_Int32_array **klass; // x1
  const MethodInfo *v30; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20
  __int64 v33; // x0

  v4 = this;
  if ( (byte_4214CCF & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___, result);
    sub_B0D8A4(&JsonManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v6);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v7);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v8);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v9);
    this = (EventMissionItemListViewManager_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v10);
    byte_4214CCF = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( !System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_43852188(
                            (System_String_o *)StringLiteral_15681/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15917/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                  v12,
                                                  (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v19 = this;
      if ( !LODWORD(this->fields.dropObjectList) )
        goto LABEL_23;
      indicator = this->fields.indicator;
      if ( !indicator )
        goto LABEL_22;
      v21 = *(System_Int32_array ***)&indicator->fields.m_CachedPtr;
      v4->fields.getSvtList = (struct GetSvts_array *)v21;
      sub_B0D840((BattleServantConfConponent_o *)&v4->fields.getSvtList, v21, v13, v14, v15, v16, v17, v18);
      if ( !LODWORD(v19->fields.dropObjectList) )
      {
LABEL_23:
        v33 = sub_B0D9A8(this);
        sub_B0D948(v33, 0LL);
      }
      v28 = v19->fields.indicator;
      if ( v28 )
      {
        klass = (System_Int32_array **)v28[1].klass;
        v4->fields.getCommandCodeList = (struct GetCommandCodes_array *)klass;
        sub_B0D840((BattleServantConfConponent_o *)&v4->fields.getCommandCodeList, klass, v22, v23, v24, v25, v26, v27);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_421277E )
          {
            sub_B0D8A4(&EventRewardSaveData_TypeInfo, v30);
            byte_421277E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          EventMissionItemListViewManager__SaveTerminalTransitionInfo(v4, v30);
          this = (EventMissionItemListViewManager_o *)v4->fields.touchBlockObj;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
            if ( this )
            {
              v11 = &StringLiteral_11106/*"REQUEST_OK"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_B0D97C(this);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_22;
  v11 = &StringLiteral_11104/*"REQUEST_NG"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v13; // x0
  Il2CppObject *current; // x20
  __int64 v15; // x10
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *monitor; // x21
  EventMissionItemListViewObject_o *v19; // x0
  __int64 v20; // x9
  UnityEngine_Object_o *v21; // x21
  __int64 v22; // x0
  System_Action_o *v23; // x20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4214CDB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, v8);
    sub_B0D8A4(&EventMissionItemListViewObject_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4214CDB = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v25 = v24;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v13 )
        break;
      current = v25.fields.current;
      if ( !v25.fields.current
        || (v15 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v25.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15)
        || (EventMissionItemListViewItem_c *)v25.fields.current->klass->_2.typeHierarchy[v15 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B0D97C(v13);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v25.fields.current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_B0D97C(0LL);
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
          v19 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v19 )
            sub_B0D97C(0LL);
          v20 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
            || (EventMissionItemListViewObject_c *)v19->klass->_2.typeHierarchy[v20 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            v22 = sub_B0DC70(v19);
LABEL_31:
            sub_B0D97C(v22);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v19,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v21 = (UnityEngine_Object_o *)current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      {
        v22 = (__int64)current[6].monitor;
        if ( !v22 )
          goto LABEL_31;
        (*(void (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v22 + 392LL))(
          v22,
          current,
          *(_QWORD *)(*(_QWORD *)v22 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v23, 0LL);
}


void __fastcall EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  PlayMakerFSM_o *targetFSM; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct EventMissionEntity_o **v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_int__o *v27; // x20
  const MethodInfo *v28; // x2
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  struct EventMissionEntity_o *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4214CCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, missionEntity);
    sub_B0D8A4(&System_Action_int__TypeInfo, v5);
    sub_B0D8A4(&Method_EventMissionItemListViewManager_recieveReward__, v6);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__, v7);
    sub_B0D8A4(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_8778/*"MISSION_REWARD"*/, v9);
    byte_4214CCB = 1;
  }
  v10 = sub_B0D974(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, missionEntity, method);
  EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass47_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 24) = missionEntity;
  v18 = (struct EventMissionEntity_o **)(v10 + 24);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)missionEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( this->fields.isQpMaxAlert )
  {
    v27 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v25, v26);
    System_Action_int____ctor(
      v27,
      (Il2CppObject *)v10,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__,
      (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v27, v28);
    return;
  }
  v29 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 75) & 2) != 0 )
    v29 = (_QWORD *)sub_B0D8AC(Method_EventMissionItemListViewManager_recieveReward__);
  v30 = (System_Reflection_MethodBase_o *)sub_B0D888(v29, v29[3]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 8, 0LL);
  v31 = *v18;
  this->fields.missionToRecieve = *v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.missionToRecieve,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_B0D97C(targetFSM);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8778/*"MISSION_REWARD"*/, 0LL);
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
  MissionNotifyManager_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4214CCE & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventMissionItemListViewManager_missionRewardCallback__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    byte_4214CCE = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  MissionNotifyManager__StartPause(Request_WarBoardWallAttackRequest, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v11,
                                                                  (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Request_WarBoardWallAttackRequest,
    missionToRecieve->fields.id,
    0LL);
}


void __fastcall EventMissionItemListViewManager__setAfterAction(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4214CD5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4214CD5 = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_B0D97C(Instance);
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

  if ( (byte_4214CE1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, targetFile);
    byte_4214CE1 = 1;
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
    if ( !v6 || (UISprite__set_spriteName(v6, targetFile, 0LL), (v6 = this->fields.filterBtnTxt) == 0LL) )
      sub_B0D97C(v6);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventMissionItemListViewManager__setList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v10; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v20; // w2
  bool v21; // w2
  bool v22; // w2
  bool v23; // w2
  __int64 v24; // x1
  int32_t filterStatus; // w19

  if ( (byte_4214CE0 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17097/*"btn_txt_completed"*/, v4);
    sub_B0D8A4(&StringLiteral_17130/*"btn_txt_receipt"*/, v5);
    sub_B0D8A4(&StringLiteral_17129/*"btn_txt_progress"*/, v6);
    sub_B0D8A4(&StringLiteral_17113/*"btn_txt_notopen"*/, v7);
    sub_B0D8A4(&StringLiteral_17080/*"btn_txt_all"*/, v8);
    byte_4214CE0 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v10 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor_32823928(v10, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17080/*"btn_txt_all"*/, v18);
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
      v20 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17130/*"btn_txt_receipt"*/, v18);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v21 = 0;
      goto LABEL_21;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17129/*"btn_txt_progress"*/, v18);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v21 = 1;
LABEL_21:
      ListViewSort__SetFilter(operationSortInfo, 14, v21, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v23 = 0;
LABEL_27:
      ListViewSort__SetFilter(operationSortInfo, 15, v23, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v22 = 0;
LABEL_29:
      ListViewSort__SetFilter(operationSortInfo, 16, v22, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v20 = 0;
LABEL_31:
      ListViewSort__SetFilter(operationSortInfo, 17, v20, 0LL);
LABEL_32:
      operationSortInfo = this->fields.baseSortInfo;
      if ( !operationSortInfo )
LABEL_36:
        sub_B0D97C(operationSortInfo);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_421277D )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, v24);
        byte_421277D = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17113/*"btn_txt_notopen"*/, v18);
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
      v23 = 1;
      goto LABEL_27;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17097/*"btn_txt_completed"*/, v18);
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
      v22 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  signed __int64 size; // x22
  const MethodInfo *v12; // x2
  int MissionId_k__BackingField; // w20
  unsigned __int64 v14; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v15; // x24
  ListViewItem_o *v16; // x8
  __int64 v17; // x11

  v4 = this;
  if ( (byte_4214CC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, isRaid);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    this = (EventMissionItemListViewManager_o *)sub_B0D8A4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v8);
    byte_4214CC7 = 1;
  }
  if ( !byte_4214D7E )
  {
    this = (EventMissionItemListViewManager_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4214D7E = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  size = itemList->fields._size;
  if ( byte_4214D7F )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    this = (EventMissionItemListViewManager_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4214D7F = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
      if ( !this )
        goto LABEL_31;
      this = (EventMissionItemListViewManager_o *)EventMissionConditionMaster__getTodayFirstMissionId(
                                                    (EventMissionConditionMaster_o *)this,
                                                    v4->fields.currentEventId,
                                                    v12);
      MissionId_k__BackingField = (int)this;
      goto LABEL_14;
    }
  }
  MissionId_k__BackingField = static_fields->_MissionId_k__BackingField;
LABEL_14:
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = v4->fields.itemList;
      if ( !v15 )
        break;
      if ( v14 >= (unsigned int)v15->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v16 = v15->fields._items->m_Items[v14];
      if ( v16
        && (v17 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
      {
        if ( (EventMissionItemListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] == EventMissionItemListViewItem_TypeInfo )
          this = (EventMissionItemListViewManager_o *)v15->fields._items->m_Items[v14];
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
      if ( (__int64)++v14 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B0D97C(this);
  }
LABEL_29:
  LODWORD(v14) = 0;
LABEL_30:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v14, 0LL);
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
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x4
  System_Action_o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  v12 = this;
  if ( (byte_4214CC3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, currentMissionActionInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v13);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v14);
    sub_B0D8A4(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__, v15);
    sub_B0D8A4(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18);
    this = (EventMissionItemListViewManager_o *)sub_B0D8A4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v19);
    byte_4214CC3 = 1;
  }
  v12->fields.targetMissionId = missionID;
  if ( callback )
  {
    v12->fields.actionCallback = callback;
    sub_B0D840(
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
        v20 = 1056964608;
      else
        v20 = 1069547520;
      LODWORD(v12->fields.endEffectTime) = v20;
    }
  }
  itemList = v12->fields.itemList;
  if ( !itemList )
LABEL_37:
    sub_B0D97C(this);
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      this = (EventMissionItemListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v27, 0LL);
      if ( !this )
        goto LABEL_37;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_31;
      if ( (__int64)++v23 >= size )
        break;
      itemList = v12->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  LODWORD(v23) = 0;
LABEL_31:
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_37;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v12->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v12, v23, v31, eventMissionActionInfo, v32);
  }
  else
  {
    v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__,
      0LL);
    v12->fields.callbackAfterScroll = v33;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v12->fields.callbackAfterScroll,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    ListViewManager__MoveTopItem((ListViewManager_o *)v12, v23, 1, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0

  if ( (byte_4214CCD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5503/*"END_NOTICE"*/, method);
    byte_4214CCD = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B0D97C(ShowMSG);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5503/*"END_NOTICE"*/, 0LL);
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
      sub_B0D97C(this);
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
  sub_B0D840(p__2__current, 0LL);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  EventMissionItemListViewManager__SetPreviousFilter_d__39_o *v3; // x20
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v17; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v19; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  signed __int64 size; // x22
  System_Collections_Generic_List_int__o *v24; // x20
  unsigned __int64 i; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  __int64 v29; // x11
  MissionListViewItem_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_int__int__int__o *v33; // x21
  int32_t v34; // w0
  int32_t v35; // w21
  int32_t v36; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v39; // x19
  Il2CppObject **p__2__current; // x20

  v3 = this;
  if ( (byte_4211B97 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Aggregate_int___, method);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v4);
    sub_B0D8A4(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__, v5);
    sub_B0D8A4(&Method_System_Func_int__int__int___ctor__, v6);
    sub_B0D8A4(&System_Func_int__int__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)sub_B0D8A4(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v14);
    byte_4211B97 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        openItemTime = _4__this->fields.openItemTime;
        endEffectTime = _4__this->fields.endEffectTime;
        v39 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
        UnityEngine_WaitForSeconds___ctor(v39, openItemTime + endEffectTime, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v39;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, v39);
        *((_DWORD *)p__2__current - 2) = 2;
        LOBYTE(v19) = 1;
        return v19;
      }
      goto LABEL_35;
    }
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        v17 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v3->fields.index, v3->fields.onFinished, 0LL);
        started = UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
        v3->fields.__2__current = (Il2CppObject *)started;
        sub_B0D840(&v3->fields.__2__current, started);
        LOBYTE(v19) = 1;
        v3->fields.__1__state = 1;
        return v19;
      }
LABEL_35:
      sub_B0D97C(this);
    }
LABEL_33:
    LOBYTE(v19) = 0;
    return v19;
  }
  v3->fields.__1__state = -1;
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
  v24 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v26 = _4__this->fields.itemSortList;
    if ( !v26 )
      goto LABEL_35;
    if ( i >= (unsigned int)v26->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v27 = v26->fields._items->m_Items[i];
    if ( !v27 )
      goto LABEL_35;
    v28 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (EventMissionItemListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      goto LABEL_35;
    }
    v29 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v29 )
      v30 = (EventMissionItemListViewItem_c *)v27->klass->_2.typeHierarchy[v29 - 1] == EventMissionItemListViewItem_TypeInfo
          ? (MissionListViewItem_o *)v26->fields._items->m_Items[i]
          : 0LL;
    else
      v30 = 0LL;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)MissionListViewItem__get_EventMissionEntity(
                                                                           v30,
                                                                           0LL);
    if ( !this || !v24 )
      goto LABEL_35;
    System_Collections_Generic_List_int___Add(
      v24,
      (int32_t)this->fields.__4__this,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  v33 = (System_Func_int__int__int__o *)sub_B0D974(System_Func_int__int__int__TypeInfo, v31, v32);
  System_Func_int__int__int____ctor(
    v33,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__,
    (const MethodInfo_2621AE0 *)Method_System_Func_int__int__int___ctor__);
  v34 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
          (System_Func_TSource__TSource__TSource__o *)v33,
          (const MethodInfo_1717214 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v35 = v34;
  v19 = System_Collections_Generic_List_int___IndexOf(
          v24,
          v34,
          (const MethodInfo_2FB0F78 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v19 )
  {
    v36 = v35 - 1;
    if ( v19 == (_DWORD)size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v36, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v36, 0, 0LL);
    goto LABEL_33;
  }
  return v19;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__39_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211B8B & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewManager___c_TypeInfo, v1);
    byte_4211B8B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventMissionItemListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x20
  EventMissionItemListViewManager___c_c *v13; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_2; // x22
  System_String_o *v16; // x21
  Il2CppObject *v17; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v18; // x0

  if ( (byte_4211B8C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, v4);
    sub_B0D8A4(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8769/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4211B8C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8769/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v12 = v9;
  v13 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v13 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__49_2 = static_fields->__9__49_2;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_2 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__49_2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(_9__49_2, v17, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, 0LL);
    v18 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v18->__9__49_2 = _9__49_2;
    sub_B0D840(&v18->__9__49_2, _9__49_2);
  }
  if ( !Instance )
    sub_B0D97C(v9);
  CommonUI__OpenNotificationDialog(Instance, v16, v12, _9__49_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x20
  EventMissionItemListViewManager___c_c *v13; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_3; // x22
  System_String_o *v16; // x21
  Il2CppObject *v17; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v18; // x0

  if ( (byte_4211B8E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, v4);
    sub_B0D8A4(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8770/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4211B8E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8770/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v12 = v9;
  v13 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v13 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__49_3 = static_fields->__9__49_3;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_3 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__49_3 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(_9__49_3, v17, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, 0LL);
    v18 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v18->__9__49_3 = _9__49_3;
    sub_B0D840(&v18->__9__49_3, _9__49_3);
  }
  if ( !Instance )
    sub_B0D97C(v9);
  CommonUI__OpenNotificationDialog(Instance, v16, v12, _9__49_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4211B8D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211B8D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4211B8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211B8F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__64_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
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
    sub_B0D97C(selectItem);
  }
  EventMissionItemListViewManager__recieveReward(_4__this, (EventMissionEntity_o *)selectItem, 0LL);
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
  PlayMakerFSM_o *targetFSM; // x0
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct EventMissionItemListViewManager_o *v11; // x8

  if ( (byte_4211B90 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__, *(_QWORD *)&result);
    sub_B0D8A4(&StringLiteral_8778/*"MISSION_REWARD"*/, v5);
    byte_4211B90 = 1;
  }
  if ( result == 1 )
  {
    v6 = Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B0D8AC(Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__);
    v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = this->fields.missionEntity,
          _4__this->fields.missionToRecieve = missionEntity,
          sub_B0D840(&_4__this->fields.missionToRecieve, missionEntity),
          (v11 = this->fields.__4__this) == 0LL)
      || (targetFSM = v11->fields.targetFSM) == 0LL )
    {
      sub_B0D97C(targetFSM);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8778/*"MISSION_REWARD"*/, 0LL);
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

  if ( (byte_4211B93 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211B93 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B0D97C(Instance);
  v5 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager___c__DisplayClass56_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventMissionItemListViewManager_o *v6; // x19
  System_Collections_IEnumerator_o *v7; // x1

  v2 = this;
  if ( (byte_4211B91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)sub_B0D8A4(
                                                                        &SingletonTemplate_MissionNotifyManager__TypeInfo,
                                                                        v4);
    byte_4211B91 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_12;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)this, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL), (v6 = v2->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(this);
  }
  v7 = EventMissionItemListViewManager__afterReward(v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)v6, v7, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v5; // x1

  if ( (byte_4211B92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211B92 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B0D97C(Instance);
  v5 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0LL);
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
  EventMissionItemListViewManager___c__DisplayClass56_1_o *v2; // x19
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
  __int64 v22; // x1
  __int64 v23; // x2
  System_Text_StringBuilder_o *v24; // x20
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v25; // x8
  System_String_o *v26; // x21
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v29; // x1
  System_String_o *v30; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v31; // x8
  System_String_o *v32; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v33; // x8
  System_String_o *v34; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v35; // x8
  System_String_o *v36; // x21
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v37; // x8
  struct EventMissionItemListViewManager_o *v38; // x8
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v39; // x8
  struct EventMissionItemListViewManager_o *v40; // x8
  System_String_o *v41; // x21
  Il2CppObject *NumberFormat; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v43; // x8
  struct EventMissionItemListViewManager_o *v44; // x8
  System_String_o *v45; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x21
  _QWORD **v48; // x23
  __int64 v49; // x22
  __int16 v50; // w8
  __int64 v51; // x22
  __int64 v52; // x22
  __int64 v53; // x22
  CommonUI_o *v54; // x21
  EventMissionItemListViewManager___c__DisplayClass56_1_o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  Il2CppObject *v58; // x24
  MissionRewardGetDialog_ClickDelegate_o *monitor; // x23
  System_String_o *v60; // x20
  Il2CppClass *klass; // x8

  v2 = this;
  if ( (byte_4211B94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_object___, method);
    sub_B0D8A4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__, v11);
    sub_B0D8A4(&StringLiteral_8782/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v12);
    sub_B0D8A4(&StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v13);
    sub_B0D8A4(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v14);
    sub_B0D8A4(&StringLiteral_8773/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, v15);
    sub_B0D8A4(&StringLiteral_31/*"\n \n"*/, v16);
    sub_B0D8A4(&StringLiteral_32/*"\n \n "*/, v17);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)sub_B0D8A4(&StringLiteral_8783/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v18);
    byte_4211B94 = 1;
  }
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_80;
  if ( giftList->fields._size < 1 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
      CS___8__locals1 = v2->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v29 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_34930128(_4__this, v29, 0LL);
          return;
        }
      }
    }
    goto LABEL_80;
  }
  v20 = v2->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_80;
  v21 = v20->fields.__4__this;
  if ( !v21 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v21->fields.touchBlockObj;
  if ( !this )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v24 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v22, v23);
  System_Text_StringBuilder___ctor(v24, 0LL);
  v25 = v2->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v25->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_80;
  v26 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v26, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v26 )
        goto LABEL_80;
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__Substring_43913640(
                                                                          v26,
                                                                          0,
                                                                          v26->fields.m_stringLength - 2,
                                                                          0LL);
      if ( !v24 )
        goto LABEL_80;
      System_Text_StringBuilder__Append_42155400(v24, (System_String_o *)this, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__Append_42155400(
                                                                          v24,
                                                                          v30,
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
                                                                          (System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0LL);
      if ( !v24 )
        goto LABEL_80;
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v24,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v26,
                                                                          0LL);
    }
    v31 = v2->fields.CS___8__locals1;
    if ( !v31 )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v31->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_80;
    v32 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v32, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__Append_42155400(
                                                                          v24,
                                                                          (System_String_o *)StringLiteral_32/*"\n \n "*/,
                                                                          0LL);
  }
  v33 = v2->fields.CS___8__locals1;
  if ( !v33 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v33->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_80;
  v34 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v34, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8773/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0LL);
    v35 = v2->fields.CS___8__locals1;
    if ( !v35 )
      goto LABEL_80;
    v36 = (System_String_o *)this;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v35->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                        this,
                                                                        this->klass[1]._1.image);
    if ( !v24 )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v24,
                                                                        v36,
                                                                        (Il2CppObject *)this,
                                                                        0LL);
  }
  v37 = v2->fields.CS___8__locals1;
  if ( !v37 )
    goto LABEL_80;
  v38 = v37->fields.__4__this;
  if ( !v38 )
    goto LABEL_80;
  if ( v38->fields.isQpMaxAlert )
  {
    if ( !v24 )
      goto LABEL_80;
    if ( v38->fields.isQpAlreadyMax )
    {
      System_Text_StringBuilder__set_Length(v24, 0, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8782/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v39 = v2->fields.CS___8__locals1;
      if ( v39 )
      {
        v40 = v39->fields.__4__this;
        if ( v40 )
        {
          v41 = (System_String_o *)this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v40->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v24, v41, NumberFormat, 0LL);
          goto LABEL_72;
        }
      }
LABEL_80:
      sub_B0D97C(this);
    }
    System_Text_StringBuilder__Append_42155400(v24, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8783/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v43 = v2->fields.CS___8__locals1;
    if ( !v43 )
      goto LABEL_80;
    v44 = v43->fields.__4__this;
    if ( !v44 )
      goto LABEL_80;
    v45 = (System_String_o *)this;
    v46 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v44->fields.overQpValue, 0LL);
    v47 = System_String__Format(v45, v46, 0LL);
    v48 = (_QWORD **)Method_System_Array_Empty_object___;
    v49 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v50 = *(_WORD *)(v49 + 306);
    if ( (v50 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v50 = *(_WORD *)(v49 + 306);
    }
    if ( (v50 & 0x400) != 0 )
    {
      v51 = *v48[6];
      if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
        sub_AA65A4(*v48[6]);
      if ( !*(_DWORD *)(v51 + 224) )
      {
        v52 = *v48[6];
        if ( (*(_BYTE *)(v52 + 306) & 1) == 0 )
          sub_AA65A4(*v48[6]);
        j_il2cpp_runtime_class_init_0(v52);
      }
    }
    v53 = *v48[6];
    if ( (*(_BYTE *)(v53 + 306) & 1) == 0 )
      sub_AA65A4(*v48[6]);
    System_Text_StringBuilder__AppendFormat_42162148(v24, v47, **(System_Object_array ***)(v53 + 184), 0LL);
  }
LABEL_72:
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_80;
  v54 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v2->fields.giftList,
                                                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v24 )
    goto LABEL_80;
  v55 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v24->klass->vtable._3_ToString.method)(
                                                                      v24,
                                                                      v24->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v58 = (Il2CppObject *)v2->fields.CS___8__locals1;
  if ( !v58 )
    goto LABEL_80;
  monitor = (MissionRewardGetDialog_ClickDelegate_o *)v58[2].monitor;
  v60 = (System_String_o *)this;
  if ( !monitor )
  {
    monitor = (MissionRewardGetDialog_ClickDelegate_o *)sub_B0D974(
                                                          MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                          v56,
                                                          v57);
    MissionRewardGetDialog_ClickDelegate___ctor(
      monitor,
      v58,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__,
      0LL);
    v58[2].monitor = monitor;
    sub_B0D840(&v58[2].monitor, monitor);
    v58 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( !v58 )
      goto LABEL_80;
  }
  klass = v58[1].klass;
  if ( !klass || !v54 )
    goto LABEL_80;
  CommonUI__OpenMissionRewardGetDialog(v54, (GiftEntity_array *)v55, v60, monitor, BYTE1(klass->vtable[11].method), 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  void *monitor; // x8
  MissionListViewManager_o *v6; // x20
  System_Action_o *klass; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4211B95 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)sub_B0D8A4(
                                                                        &Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__,
                                                                        v4);
    byte_4211B95 = 1;
  }
  monitor = v3[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  v6 = (MissionListViewManager_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v3[3].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      klass,
      v3,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__,
      0LL);
    v3[3].klass = (Il2CppClass *)klass;
    sub_B0D840(&v3[3], klass);
  }
  if ( !v6 )
LABEL_8:
    sub_B0D97C(this);
  MissionListViewManager__StartSvtListGetEffect(v6, 0, klass, 0LL);
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
  CommonUI_o *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x23
  System_Action_o *klass; // x22
  System_String_o *v18; // x19
  System_String_o *v19; // x21

  if ( (byte_4211B96 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__, v6);
    sub_B0D8A4(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4211B96 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v13, (Il2CppObject *)this->fields.sendName, 0LL);
  v16 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_15;
  klass = (System_Action_o *)v16[3].klass;
  v18 = (System_String_o *)Instance;
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(
      klass,
      v16,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__,
      0LL);
    v16[3].klass = (Il2CppClass *)klass;
    sub_B0D840(&v16[3], klass);
  }
  if ( !v12 )
LABEL_15:
    sub_B0D97C(Instance);
  CommonUI__OpenNotificationDialog(v12, v19, v18, klass, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v14; // x21
  AutomatedAction_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_bool__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_WaitUntil_o *v24; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4211B98 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v4);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v6);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__, v7);
    sub_B0D8A4(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__, v8);
    sub_B0D8A4(&EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_5498/*"END_EFFECT"*/, v11);
    byte_4211B98 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (AutomatedAction_o *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5498/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v14 = sub_B0D974(EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( v14 )
    {
      *(_BYTE *)(v14 + 16) = 0;
      v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v14,
        Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v18, 0LL);
        v21 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v19, v20);
        System_Func_bool____ctor(
          v21,
          (Il2CppObject *)v14,
          Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__,
          (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
        v24 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v22, v23);
        UnityEngine_WaitUntil___ctor(v24, v21, 0LL);
        this->fields.__2__current = (Il2CppObject *)v24;
        p__2__current = &this->fields.__2__current;
        sub_B0D840(p__2__current, v24);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_B0D97C(Instance);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventMissionItemListViewManager__afterReward_d__57_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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