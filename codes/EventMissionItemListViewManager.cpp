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

  if ( (byte_4187844 & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4187844 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dialogTitle, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dialogMessage, v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dialogGetable, v18, v19, v20, v21, v22, v23, v24);
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
  __int64 v35; // x23
  __int64 Instance; // x0
  __int64 v37; // x1
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
  System_Text_StringBuilder_o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Text_StringBuilder_o *v55; // x0
  System_Text_StringBuilder_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x28
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  Il2CppObject **v70; // x22
  __int64 v71; // x24
  il2cpp_array_size_t v72; // w21
  Il2CppClass **v73; // x27
  Il2CppClass *v74; // x8
  char *v75; // x27
  Il2CppClass *v76; // t1
  EventRewardSetEntity_o *SetRewardData; // x23
  System_Int32_array **v78; // x1
  Il2CppObject **v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **name; // x1
  struct GetSvts_array *getSvtList; // x8
  SummonAssetManager_o *v94; // x19
  System_Action_o *v95; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // x23
  __int64 v97; // x28
  GiftEntity_o **m_Items; // x21
  GiftEntity_o *v99; // x8
  GiftEntity_o *v100; // x8
  ServantEntity_o *v101; // x25
  bool IsCombineMaterial; // w26
  System_String_o *v103; // x0
  System_Text_StringBuilder_o *klass; // x26
  GiftEntity_o *v105; // x8
  Il2CppObject *v106; // x25
  Il2CppObject *v107; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v108; // x1
  GiftEntity_o *v109; // x8
  GiftEntity_o *v110; // x8
  bool IsCountableWithPlus; // w0
  Il2CppObject **v112; // x8
  Il2CppObject *v113; // x26
  System_Text_StringBuilder_o *v114; // x25
  int32_t getQpValue; // w8
  GiftEntity_o *v116; // x8
  System_String_o *v117; // x27
  Il2CppObject *v118; // x0
  System_Text_StringBuilder_o *monitor; // x26
  System_String_o *v120; // x1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v121; // x22
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Action_o *v128; // x22
  CommonUI_o *v129; // x19
  System_String_o *v130; // x0
  System_String_o *v131; // x0
  Il2CppObject *v132; // x22
  System_String_o *v133; // x20
  System_Action_o *v134; // x21
  __int64 v135; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v136; // [xsp+38h] [xbp-78h]
  __int64 v137; // [xsp+40h] [xbp-70h]
  int32_t num; // [xsp+4Ch] [xbp-64h] BYREF
  WarEntity_o *v139; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_418782F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor___67310480, v12);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v20);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v21);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__, v22);
    sub_B2C35C(&EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo, v23);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__, v24);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__, v25);
    sub_B2C35C(&EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_8750/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v27);
    sub_B2C35C(&StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, v28);
    sub_B2C35C(&StringLiteral_23663/*"{0}×{1:#,0}"*/, v29);
    sub_B2C35C(&StringLiteral_23705/*"×"*/, v30);
    sub_B2C35C(&StringLiteral_8745/*"MISSION_ACTION_ITEM_FORMAT"*/, v31);
    sub_B2C35C(&StringLiteral_1/*""*/, v32);
    sub_B2C35C(&StringLiteral_30/*"\n "*/, v33);
    sub_B2C35C(&StringLiteral_23956/*"＋"*/, v34);
    byte_418782F = 1;
  }
  v139 = 0LL;
  entity = 0LL;
  v35 = sub_B2C42C(EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass56_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_0_o *)v35,
    0LL);
  if ( !v35 )
    goto LABEL_122;
  *(_QWORD *)(v35 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_122;
  if ( !Instance )
    goto LABEL_122;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v46 = this->fields.missionToRecieve;
  if ( !v46 )
    goto LABEL_122;
  if ( !Instance )
    goto LABEL_122;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v46->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v47);
  v48 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v48, 0LL);
  *(_QWORD *)(v35 + 32) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 32), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  v55 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v55, 0LL);
  v56 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v56, 0LL);
  *(_QWORD *)(v35 + 24) = v56;
  sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 24), (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
  v63 = sub_B2C42C(EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass56_1___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v63,
    0LL);
  if ( !v63 )
    goto LABEL_122;
  *(_QWORD *)(v63 + 40) = v35;
  v70 = (Il2CppObject **)(v63 + 40);
  sub_B2C2F8((BattleServantConfConponent_o *)(v63 + 40), (System_Int32_array **)v35, v64, v65, v66, v67, v68, v69);
  Instance = (__int64)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_122;
  if ( *(_DWORD *)(Instance + 80) == 1 )
  {
    *(_DWORD *)(v63 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_122;
    v71 = *(_QWORD *)&GiftListById->max_length;
    if ( (int)v71 >= 1 )
    {
      v72 = 0;
      while ( 1 )
      {
        v73 = &GiftListById->obj.klass + (int)v72;
        v76 = v73[4];
        v75 = (char *)(v73 + 4);
        v74 = v76;
        if ( !v76 )
          break;
        Instance = Gift__IsServant_27324084(HIDWORD(v74->_1.name), 0LL);
        if ( (Instance & 1) == 0 )
        {
          if ( v72 >= GiftListById->max_length )
            goto LABEL_123;
          if ( !*(_QWORD *)v75 )
            break;
          Instance = Gift__IsCommandCode_27324480(*(_DWORD *)(*(_QWORD *)v75 + 20LL), 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v72 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !*(_QWORD *)v75 )
              break;
            Instance = Gift__IsCostumeRelease(*(_DWORD *)(*(_QWORD *)v75 + 20LL), 0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( v72 >= GiftListById->max_length )
                goto LABEL_123;
              if ( !*(_QWORD *)v75 || !Instance )
                break;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &entity,
                           *(_DWORD *)(*(_QWORD *)v75 + 24LL),
                           (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !entity || !Instance )
                  break;
                Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, entity->fields.id, 0LL);
                if ( (Instance & 1) == 0 )
                  ++*(_DWORD *)(v63 + 24);
              }
            }
          }
        }
        if ( (int)++v72 >= (int)v71 )
          goto LABEL_41;
        if ( v72 >= GiftListById->max_length )
        {
LABEL_123:
          v135 = sub_B2C460(Instance);
          sub_B2C400(v135, 0LL);
        }
      }
LABEL_122:
      sub_B2C434(Instance, v37);
    }
LABEL_41:
    v137 = v63;
    v136 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v136,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v96,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v71 >= 1 )
    {
      v97 = 0LL;
      m_Items = GiftListById->m_Items;
      do
      {
        if ( (unsigned int)v97 >= GiftListById->max_length )
          goto LABEL_123;
        v99 = m_Items[v97];
        if ( !v99 )
          goto LABEL_122;
        Instance = Gift__IsServant_27324084(v99->fields.type, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_122;
          Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( (unsigned int)v97 >= GiftListById->max_length )
            goto LABEL_123;
          v100 = m_Items[v97];
          if ( !v100 )
            goto LABEL_122;
          if ( !Instance )
            goto LABEL_122;
          Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v100->fields.objectId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_122;
          v101 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
          Instance = SvtType__IsStatusUp(v101->fields.type, 0LL);
          if ( IsCombineMaterial || (Instance & 1) != 0 )
          {
            if ( !*v70 )
              goto LABEL_122;
            Instance = (__int64)(*v70)[2].klass;
            if ( !Instance )
              goto LABEL_122;
            v103 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 360LL))(
                                        Instance,
                                        *(_QWORD *)(*(_QWORD *)Instance + 368LL));
            Instance = System_String__IsNullOrEmpty(v103, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !*v70 )
                goto LABEL_122;
              Instance = (__int64)(*v70)[2].klass;
              if ( !Instance )
                goto LABEL_122;
              Instance = (__int64)System_Text_StringBuilder__Append_42408700(
                                    (System_Text_StringBuilder_o *)Instance,
                                    (System_String_o *)StringLiteral_30/*"\n "*/,
                                    0LL);
            }
            if ( !*v70 )
              goto LABEL_122;
            klass = (System_Text_StringBuilder_o *)(*v70)[2].klass;
            Instance = (__int64)ServantEntity__getName(v101, 0, -1, 0LL);
            if ( (unsigned int)v97 >= GiftListById->max_length )
              goto LABEL_123;
            v105 = m_Items[v97];
            if ( !v105 )
              goto LABEL_122;
            v106 = (Il2CppObject *)Instance;
            num = v105->fields.num;
            v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
            Instance = (__int64)System_String__Format_44301068((System_String_o *)StringLiteral_23663/*"{0}×{1:#,0}"*/, v106, v107, 0LL);
            if ( !klass )
              goto LABEL_122;
            Instance = (__int64)System_Text_StringBuilder__Append_42408700(klass, (System_String_o *)Instance, 0LL);
            if ( (unsigned int)v97 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !v96 )
              goto LABEL_122;
            v108 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v97];
            Instance = (__int64)v96;
LABEL_108:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              v108,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
          }
        }
        else
        {
          if ( (unsigned int)v97 >= GiftListById->max_length )
            goto LABEL_123;
          v109 = m_Items[v97];
          if ( !v109 )
            goto LABEL_122;
          Instance = Gift__IsItem_27324028(v109->fields.type, 0LL);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_122;
            Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( (unsigned int)v97 >= GiftListById->max_length )
              goto LABEL_123;
            v110 = m_Items[v97];
            if ( !v110 || !Instance )
              goto LABEL_122;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &v139,
                         v110->fields.objectId,
                         (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v139 || !Instance )
                goto LABEL_122;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v139->fields.id, 0LL);
              if ( (Instance & 1) == 0 )
              {
                if ( !v139 )
                  goto LABEL_122;
                IsCountableWithPlus = ItemType__IsCountableWithPlus(v139->fields.bannerId, 0LL);
                v112 = (Il2CppObject **)&StringLiteral_23956/*"＋"*/;
                if ( !IsCountableWithPlus )
                  v112 = (Il2CppObject **)&StringLiteral_23705/*"×"*/;
                v113 = *v112;
                v114 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
                System_Text_StringBuilder___ctor(v114, 0LL);
                if ( !v139 || !v114 )
                  goto LABEL_122;
                System_Text_StringBuilder__Append_42408700(v114, v139->fields.age, 0LL);
                if ( this->fields.isQpMaxAlert && this->fields.getQpValue )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8750/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                  getQpValue = this->fields.getQpValue;
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8750/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                  if ( (unsigned int)v97 >= GiftListById->max_length )
                    goto LABEL_123;
                  v116 = m_Items[v97];
                  if ( !v116 )
                    goto LABEL_122;
                  getQpValue = v116->fields.num;
                }
                v117 = (System_String_o *)Instance;
                num = getQpValue;
                v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
                Instance = (__int64)System_Text_StringBuilder__AppendFormat_42415252(v114, v117, v113, v118, 0LL);
                if ( !*v70 )
                  goto LABEL_122;
                monitor = (System_Text_StringBuilder_o *)(*v70)[1].monitor;
                if ( *(int *)(v137 + 24) >= 2 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8745/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                  if ( !monitor )
                    goto LABEL_122;
                  Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                                        monitor,
                                        (System_String_o *)Instance,
                                        (Il2CppObject *)v114,
                                        0LL);
                  if ( !*v70 )
                    goto LABEL_122;
                  Instance = (__int64)(*v70)[1].monitor;
                  if ( !Instance )
                    goto LABEL_122;
                  v120 = (System_String_o *)StringLiteral_30/*"\n "*/;
                }
                else
                {
                  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v114->klass->vtable._3_ToString.method)(
                               v114,
                               v114->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                  if ( !monitor )
                    goto LABEL_122;
                  v120 = (System_String_o *)Instance;
                  Instance = (__int64)monitor;
                }
                Instance = (__int64)System_Text_StringBuilder__Append_42408700(
                                      (System_Text_StringBuilder_o *)Instance,
                                      v120,
                                      0LL);
                if ( (unsigned int)v97 >= GiftListById->max_length )
                  goto LABEL_123;
                Instance = (__int64)v136;
                if ( !v136 )
                  goto LABEL_122;
                v108 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v97];
                goto LABEL_108;
              }
            }
          }
        }
        ++v97;
      }
      while ( (int)v97 < (int)v71 );
    }
    v121 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v121,
      (System_Collections_Generic_IEnumerable_T__o *)v136,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_GiftEntity___ctor___67310480);
    *(_QWORD *)(v137 + 16) = v121;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v137 + 16),
      (System_Int32_array **)v121,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
    Instance = *(_QWORD *)(v137 + 16);
    if ( !Instance )
      goto LABEL_122;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v96,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v128 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v128,
      (Il2CppObject *)v137,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v128, 0LL);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, 0LL);
    v78 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v63 + 32) = StringLiteral_1/*""*/;
    v79 = (Il2CppObject **)(v63 + 32);
    sub_B2C2F8((BattleServantConfConponent_o *)(v63 + 32), v78, v80, v81, v82, v83, v84, v85);
    if ( !SetRewardData )
      goto LABEL_122;
    name = (System_Int32_array **)SetRewardData->fields.name;
    *v79 = (Il2CppObject *)name;
    sub_B2C2F8((BattleServantConfConponent_o *)(v63 + 32), name, v86, v87, v88, v89, v90, v91);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (__int64)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_122;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v94 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v95 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v95,
        (Il2CppObject *)v63,
        Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__,
        0LL);
      if ( !v94 )
        goto LABEL_122;
      SummonAssetManager__LoadSummonAssets(v94, v95, 0LL);
    }
    else
    {
      v129 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v130 = LocalizationManager__Get((System_String_o *)StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v131 = System_String__Format(v130, *v79, 0LL);
      v132 = *v70;
      v133 = v131;
      v134 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v134,
        v132,
        Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__,
        0LL);
      if ( !v129 )
        goto LABEL_122;
      CommonUI__OpenNotificationDialog(
        v129,
        (System_String_o *)StringLiteral_1/*""*/,
        v133,
        v134,
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
    Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  EventMissionItemListViewManager__CreateList_24967208(this, missionList, eventId, isDailyMission, 1, v5);
}


void __fastcall EventMissionItemListViewManager__CreateList_24967208(
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
  __int64 v21; // x1
  struct UIScrollView_o *scrollView; // x8
  WarEntity_o *Entity; // x23
  bool v24; // w8
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
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v39; // x21
  __int64 v40; // x0

  if ( (byte_418781E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, missionList);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, v19);
    byte_418781E = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_36;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             eventId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v24 = Instance > *(_QWORD *)&Entity->fields.eventId && Instance <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v24;
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
        v40 = sub_B2C460(Instance);
        sub_B2C400(v40, 0LL);
      }
      v34 = missionList->m_Items[v32];
      itemList = this->fields.itemList;
      v36 = (EventMissionItemListViewItem_o *)sub_B2C42C(EventMissionItemListViewItem_TypeInfo);
      EventMissionItemListViewItem___ctor(v36, v34, v33, 0LL);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v31) = missionList->max_length;
      if ( (__int64)++v32 >= (int)v31 )
        goto LABEL_22;
    }
LABEL_36:
    sub_B2C434(Instance, v21);
  }
LABEL_22:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !byte_418791F )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, sort);
    byte_418791F = 1;
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
    v39 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v39 )
      goto LABEL_36;
    UILabel__set_text(v39, (System_String_o *)Instance, 0LL);
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
  __int64 v9; // x1
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v11; // x21
  EventMissionActionInfo_o *v12; // x20
  EventMissionActionEntity_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **vals; // x1
  EventMissionItemListViewManager_o *v21; // x0
  const MethodInfo *v22; // x2
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_418782D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v4);
    sub_B2C35C(&EventMissionActionInfo_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&TerminalTransitionInfo_TypeInfo, v7);
    byte_418782D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v11 = EntityFromIdProgressTypeAndActionType;
    v12 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor_27194656(v12, v11, 0LL);
LABEL_11:
    v13 = (EventMissionActionEntity_o *)sub_B2C42C(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v13, 0LL);
    if ( v13 )
    {
      v13->fields.missionId = missionId;
      if ( v12 )
      {
        vals = (System_Int32_array **)v12->fields.vals;
        v13->fields.vals = (struct System_String_array *)vals;
        sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.vals, vals, v14, v15, v16, v17, v18, v19);
        VoiceAssetName = (System_Int32_array **)EventMissionItemListViewManager__GetVoiceAssetName(
                                                  v21,
                                                  v12->fields.vals,
                                                  v22);
        *(_QWORD *)&v13->fields.optionId = VoiceAssetName;
        sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.optionId, VoiceAssetName, v24, v25, v26, v27, v28, v29);
        return (TerminalTransitionInfo_o *)v13;
      }
    }
LABEL_15:
    sub_B2C434(Instance, v9);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v13 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
          (EventMissionActionMaster_o *)Instance,
          missionId,
          5,
          4,
          0LL);
  if ( v13 )
  {
    v12 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v12, v13, 0LL);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v13;
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
  __int64 v30; // x1
  _DWORD *v31; // x22
  int32_t v32; // w23
  int32_t QpMax; // w8
  int v34; // w23
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
  System_String_o *v51; // x23
  System_String_o *NumberFormat; // x0
  int32_t v53; // w8
  Il2CppObject *v54; // x22
  System_String_o *v55; // x0
  BalanceConfig_c *v56; // x8
  Il2CppObject *v57; // x24
  Il2CppObject *v58; // x0
  struct System_String_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  bool result; // w0

  if ( (byte_4187840 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, giftEnt);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_8759/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v11);
    sub_B2C35C(&StringLiteral_8762/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4187840 = 1;
  }
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dialogMessage, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dialogGetable, v22, v23, v24, v25, v26, v27, v28);
  this->fields.isQpAlreadyMax = 0;
  this->fields.getQpValue = 0;
  this->fields.overQpValue = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_30;
  v31 = SelfUserGame;
  v32 = SelfUserGame[24];
  SelfUserGame = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)SelfUserGame + 23) + 4LL);
  if ( v32 >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8759/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v51 = (System_String_o *)SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v53 = v31[24];
      v54 = (Il2CppObject *)NumberFormat;
      v55 = LocalizationManager__GetNumberFormat(v53, 0LL);
      v56 = BalanceConfig_TypeInfo;
      v57 = (Il2CppObject *)v55;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v56 = BalanceConfig_TypeInfo;
      }
      v58 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v56->static_fields->QpMax, 0LL);
      v59 = System_String__Format_44306596(v51, v54, v57, v58, 0LL);
      this->fields.dialogMessage = v59;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.dialogMessage,
        (System_Int32_array **)v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      num = giftEnt->fields.num;
      goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(SelfUserGame, v30);
  }
  if ( !giftEnt )
    goto LABEL_30;
  v34 = v31[24];
  v35 = giftEnt->fields.num;
  if ( (*((_BYTE *)SelfUserGame + 307) & 4) != 0 && !SelfUserGame[56] )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
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
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8762/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v37 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v38 = LocalizationManager__GetNumberFormat(v31[24], 0LL);
    v39 = BalanceConfig_TypeInfo;
    v40 = (Il2CppObject *)v38;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    v41 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v39->static_fields->QpMax, 0LL);
    v42 = System_String__Format_44306596(v36, v37, v40, v41, 0LL);
    this->fields.dialogMessage = v42;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.dialogMessage,
      (System_Int32_array **)v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = BalanceConfig_TypeInfo->static_fields->QpMax - v31[24];
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

  if ( (byte_4187824 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4187824 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v13; // x1
  ConstantStrMaster_o *v14; // x21
  System_Int32_array **Value; // x24
  System_Int32_array **v16; // x23
  System_String_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Object_array *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x19
  __int64 v46; // x0
  __int64 v47; // x0

  if ( (byte_4187826 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantStrMaster___, beforeGiftEntity);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&object___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5641/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, v9);
    sub_B2C35C(&StringLiteral_5642/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/, v10);
    sub_B2C35C(&StringLiteral_5709/*"EVENT_REWARD_REPLACE_MSG"*/, v11);
    byte_4187826 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v14 = Master_WarQuestSelectionMaster;
  Value = (System_Int32_array **)ConstantStrMaster__GetValue(
                                   Master_WarQuestSelectionMaster,
                                   (System_String_o *)StringLiteral_5642/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/,
                                   0LL);
  v16 = (System_Int32_array **)ConstantStrMaster__GetValue(v14, (System_String_o *)StringLiteral_5641/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5709/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B2C374(object___TypeInfo, 4LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v24 = (System_Object_array *)Master_WarQuestSelectionMaster;
  if ( Value )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B2C41C(
                                                              Value,
                                                              Master_WarQuestSelectionMaster->klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( !v24->max_length )
    goto LABEL_27;
  v24->m_Items[0] = (Il2CppObject *)Value;
  sub_B2C2F8((BattleServantConfConponent_o *)v24->m_Items, Value, v18, v19, v20, v21, v22, v23);
  if ( v16 )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B2C41C(v16, v24->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_27;
  v24->m_Items[1] = (Il2CppObject *)v16;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[1], v16, v25, v26, v27, v28, v29, v30);
  if ( !beforeGiftEntity )
    goto LABEL_26;
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v37 = (System_Int32_array **)Master_WarQuestSelectionMaster;
  if ( Master_WarQuestSelectionMaster )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B2C41C(
                                                              Master_WarQuestSelectionMaster,
                                                              v24->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
    {
LABEL_28:
      v47 = sub_B2C454(Master_WarQuestSelectionMaster);
      sub_B2C400(v47, 0LL);
    }
  }
  if ( v24->max_length <= 2 )
    goto LABEL_27;
  v24->m_Items[2] = (Il2CppObject *)v37;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
  if ( !AfterGiftEntity )
LABEL_26:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v44 = (System_Int32_array **)Master_WarQuestSelectionMaster;
  if ( Master_WarQuestSelectionMaster )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B2C41C(
                                                              Master_WarQuestSelectionMaster,
                                                              v24->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( v24->max_length <= 3 )
  {
LABEL_27:
    v46 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v46, 0LL);
  }
  v24->m_Items[3] = (Il2CppObject *)v44;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
  return System_String__Format_44384256(v17, v24, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x9
  __int64 v13; // x0
  EventMissionItemListViewManager_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_418782E & 1) == 0 )
  {
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, afterActionVals);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (EventMissionItemListViewManager_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418782E = 1;
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
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v8], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v8 += 2;
    if ( v8 >= max_length )
      return *p_webView;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.basePanel) == 0LL )
    sub_B2C434(Instance, v11);
  v12 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v12
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[v12 - 1] == EventRewardRootComponent_TypeInfo )
  {
    p_webView = (System_String_o **)&Instance[14].fields.webView;
    return *p_webView;
  }
  v14 = (EventMissionItemListViewManager_o *)sub_B2C728(Instance);
  EventMissionItemListViewManager__AcceptReward(v14, v15);
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
  __int64 v12; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  MissionListViewItem_o *current; // x22
  __int64 v19; // x10
  __int64 MissionId; // x0
  __int64 v21; // x1
  struct EventMissionEntity_o *v22; // x8
  int32_t v23; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v25; // x1
  struct ListViewObject_o *v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187835 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4187835 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      sub_B2C434(Instance, v12);
    }
    v15 = Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v16 )
        break;
      current = (MissionListViewItem_o *)v28.fields.current;
      if ( !v28.fields.current
        || (v19 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v28.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v19)
        || (EventMissionItemListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v19 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B2C434(v16, v17);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields.current, 0LL);
      v22 = this->fields.missionToRecieve;
      if ( !v22 )
        sub_B2C434(MissionId, v21);
      v23 = MissionId;
      if ( (_DWORD)MissionId == v22->fields.id )
      {
        if ( !byte_4185D95 )
        {
          MissionId = sub_B2C35C(&EventRewardSaveData_TypeInfo, v21);
          byte_4185D95 = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v23;
        if ( !v15 )
          sub_B2C434(MissionId, v21);
        MissionListViewItem__ModifyItem(current, LODWORD(v15->fields.lookup) == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v26 = current->fields.viewObject;
        if ( !v26 )
          sub_B2C434(0LL, v25);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v26->klass->vtable._5_SetItem.method)(
          v26,
          current,
          v26->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v14; // x1
  ListViewItem_o *v15; // x22
  UnityEngine_Object_o *viewObject; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4187820 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4187820 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_18;
  v15 = (ListViewItem_o *)Item;
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
        &v20,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v20,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v20.fields.current == v15 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v15, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v20,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v19 = EventMissionItemListViewManager__SetPreviousFilter(this, v15->fields.sortIndex, onFinish, v18);
    }
    else
    {
      v19 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v15->fields.sortIndex, onFinish, v18);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
  }
  else
  {
LABEL_18:
    if ( !onFinish )
      sub_B2C434(Item, v14);
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

  if ( (byte_4187822 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo, *(_QWORD *)&index);
    byte_4187822 = 1;
  }
  v7 = sub_B2C42C(EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo);
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__40___ctor(
    (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4187838 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v3);
    byte_4187838 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      ObjectList = (System_Collections_Generic_List_EventMissionItemListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v5);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B2C434(ObjectList, v5);
  }
}


void __fastcall EventMissionItemListViewManager__OnClickFilterList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_418783B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418783B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_31A1B40[filterStatus];
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
  MissionListViewItem_o *EventMissionEntity; // x0
  const MethodInfo *v16; // x1
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
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v33; // x2
  GiftMaster_o *v34; // x22
  GiftEntity_o *v35; // x22
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v38; // x21
  WebViewManager_o *Instance; // x19
  const MethodInfo *v40; // x3
  System_String_o *ReplaceDialogMessage; // x21
  System_Action_o *v42; // x22
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  EventMissionEntity_o *v45; // x1
  const MethodInfo *v46; // x2

  if ( (byte_4187825 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_EventMissionItemListViewManager_OnClickListView__, v7);
    sub_B2C35C(&EventMissionItemListViewObject_TypeInfo, v8);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__, v11);
    sub_B2C35C(&EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4187825 = 1;
  }
  v14 = sub_B2C42C(EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass45_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass45_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_42;
  *(_QWORD *)(v14 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  if ( !this->fields.isClickListViewEnabled )
    return;
  if ( !obj )
    goto LABEL_42;
  v23 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v23 )
    goto LABEL_42;
  if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[v23 - 1] != EventMissionItemListViewObject_TypeInfo )
    goto LABEL_42;
  Item = (System_Int32_array **)EventMissionItemListViewObject__GetItem((EventMissionItemListViewObject_o *)obj, v16);
  *(_QWORD *)(v14 + 24) = Item;
  v25 = (MissionListViewItem_o **)(v14 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), Item, v26, v27, v28, v29, v30, v31);
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  EventMissionEntity = *(MissionListViewItem_o **)(v14 + 24);
  if ( !EventMissionEntity )
    goto LABEL_42;
  if ( (((__int64 (__fastcall *)(MissionListViewItem_o *, void *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method)(
          EventMissionEntity,
          EventMissionEntity->klass[1]._1.image) & 1) != 0 )
  {
    EventMissionEntity = *v25;
    if ( !*v25 )
      goto LABEL_42;
    if ( !EventMissionItemListViewItem__get_IsHideReward((EventMissionItemListViewItem_o *)EventMissionEntity, 0LL) )
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, *v25, 0LL);
      return;
    }
  }
  EventMissionEntity = *v25;
  if ( !*v25 )
    goto LABEL_42;
  if ( EventMissionEntity->fields.progStatus != 3 )
  {
    v43 = Method_EventMissionItemListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v43 = (_QWORD *)sub_B2C364(Method_EventMissionItemListViewManager_OnClickListView__);
    v44 = (System_Reflection_MethodBase_o *)sub_B2C340(v43, v43[3]);
    OverwriteAssetSoundName__PlaySystemSe(v44, 2, 0LL);
    return;
  }
  if ( this->fields.filterStatus == 1 )
  {
    EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
    if ( !EventMissionEntity )
      goto LABEL_42;
    this->fields.tempSelectDispNo = EventMissionEntity->fields.sortValue0;
    EventMissionEntity = *v25;
    if ( !*v25 )
      goto LABEL_42;
  }
  if ( EventMissionItemListViewItem__GetIsRewardQp((EventMissionItemListViewItem_o *)EventMissionEntity, 0LL) )
  {
    EventMissionEntity = *v25;
    if ( !*v25 )
      goto LABEL_42;
    IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp((EventMissionItemListViewItem_o *)EventMissionEntity, 0LL);
    this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v33);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EventMissionEntity = (MissionListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !*v25
    || (v34 = (GiftMaster_o *)EventMissionEntity,
        (EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v25, 0LL)) == 0LL)
    || !v34 )
  {
LABEL_42:
    sub_B2C434(EventMissionEntity, v16);
  }
  EventMissionEntity = (MissionListViewItem_o *)GiftMaster__getDataById(
                                                  v34,
                                                  HIDWORD(EventMissionEntity->fields.sortValue2B),
                                                  0LL);
  if ( !EventMissionEntity || (v35 = (GiftEntity_o *)EventMissionEntity, !LOBYTE(EventMissionEntity->fields.sortValue1)) )
  {
    EventMissionEntity = *v25;
    if ( *v25 )
    {
      v45 = MissionListViewItem__get_EventMissionEntity(EventMissionEntity, 0LL);
      EventMissionItemListViewManager__recieveReward(this, v45, v46);
      return;
    }
    goto LABEL_42;
  }
  if ( !*v25 )
    goto LABEL_42;
  giftEnts = (*v25)->fields.giftEnts;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  }
  IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0LL);
  if ( IconGiftEntity )
  {
    v38 = IconGiftEntity;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                             (EventMissionItemListViewManager_o *)Instance,
                             v38,
                             v35,
                             v40);
    v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v14,
      Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_1/*""*/,
        ReplaceDialogMessage,
        v42,
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
    goto LABEL_42;
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
  __int64 v13; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x21
  EventMissionItemListViewManager___c_c *v16; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__76_0; // x22
  Il2CppObject *v19; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct EventMissionEntity_o *v27; // x8

  if ( (byte_418783E & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_GiftEntity___, closeCallback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Func_GiftEntity__bool___ctor__, v8);
    sub_B2C35C(&System_Func_GiftEntity__bool__TypeInfo, v9);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__, v10);
    sub_B2C35C(&EventMissionItemListViewManager___c_TypeInfo, v11);
    byte_418783E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, missionToRecieve->fields.giftId, 0LL);
  v16 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v16 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__76_0,
      v19,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_GiftEntity__bool___ctor__);
    v20 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v20->__9__76_0 = (struct System_Func_GiftEntity__bool__o *)_9__76_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__76_0,
      (System_Int32_array **)_9__76_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)GiftListById,
         (System_Func_T__bool__o *)_9__76_0,
         (const MethodInfo_1726758 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (GiftMaster_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v27 = this->fields.missionToRecieve;
      if ( v27 )
      {
        if ( Master_WarQuestSelectionMaster )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_WarQuestSelectionMaster,
            this->fields.currentEventId,
            v27->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
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
  System_Action_o *v24; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *decide; // [xsp+28h] [xbp-58h]

  if ( (byte_4187841 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_EventMissionItemListViewManager_Decide__, v10);
    sub_B2C35C(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__, v11);
    sub_B2C35C(&Method_EventMissionItemListViewManager_TransitionToCombineScene__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_11783/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v14);
    sub_B2C35C(&StringLiteral_11782/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v15);
    sub_B2C35C(&StringLiteral_11789/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v16);
    byte_4187841 = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_B2C2F8(
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
  decide = LocalizationManager__Get((System_String_o *)StringLiteral_11783/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11782/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v23 = v18;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_B2C434(v27, v28);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    decide,
    v17,
    v23,
    v24,
    onTransition,
    v26,
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
  __int64 v6; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418783F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SceneList_TypeInfo, v3);
    byte_418783F = 1;
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
      sub_B2C434(gameObject, v6);
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
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionItemListViewObject__o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x11
  __int64 v15; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v18; // w8
  __int64 v19; // x21
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4187839 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v8);
    byte_4187839 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v11 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    if ( !v21.fields.current
      || (v14 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v21.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
      || (EventMissionItemListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v14 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B2C434(v12, v13);
    }
    v15 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
    {
      if ( (EventMissionItemListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v15 - 1] == EventMissionItemListViewItem_TypeInfo )
        current = v21.fields.current;
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
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v11 )
    goto LABEL_25;
  size = v11->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v18 = v11->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v18 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ObjectList = (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v11->fields._items->m_Items[v19];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventMissionItemListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v18 = v11->fields._size;
        if ( (int)++v19 >= v18 )
          return;
      }
LABEL_25:
      sub_B2C434(ObjectList, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_24984784(
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
  __int64 v13; // x1
  Il2CppObject *current; // x21
  __int64 v15; // x10
  const MethodInfo *v16; // x1
  int32_t size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v18; // x21
  int v19; // w8
  __int64 v20; // x23
  __int64 v21; // x8
  __int64 v22; // x22
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418783A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__, v10);
    byte_418783A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current
      || (v15 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15)
      || (EventMissionItemListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v15 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B2C434(v12, v13);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v24.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                              this,
                                                                                              v16);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v21 = (__int64)v18->fields._items + 8 * v20;
        v22 = *(_QWORD *)(v21 + 32);
        if ( !v22 )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewObject__GetItem(
                                                                                                    *(EventMissionItemListViewObject_o **)(v21 + 32),
                                                                                                    *(const MethodInfo **)&missionId);
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
      sub_B2C434(itemList, *(_QWORD *)&missionId);
    }
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_418782C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418782C = 1;
  }
  if ( !byte_4187920 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, method);
    byte_4187920 = 1;
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
  __int64 v10; // x1
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v15; // x1
  struct EventMissionItemListViewItem_o *v16; // x21
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187836 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__, v6);
    sub_B2C35C(&StringLiteral_18197/*"ef_mission_extric01"*/, v7);
    sub_B2C35C(&StringLiteral_20565/*"modifyOpenItem"*/, v8);
    byte_4187836 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B2C434(0LL, v10);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v27,
        ObjectList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v28 = v27;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v28,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v11 )
          break;
        current = v28.fields.current;
        if ( !v28.fields.current )
          sub_B2C434(v11, v12);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v28.fields.current,
                                          v12);
        v16 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_B2C434(0LL, v15);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4185D95 )
          {
            sub_B2C35C(&EventRewardSaveData_TypeInfo, v17);
            byte_4185D95 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v16;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v16,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v16, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18197/*"ef_mission_extric01"*/, transform, v26);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v28,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20565/*"modifyOpenItem"*/,
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

  if ( (byte_4187821 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo, *(_QWORD *)&index);
    byte_4187821 = 1;
  }
  v7 = sub_B2C42C(EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo);
  EventMissionItemListViewManager__SetPreviousFilter_d__39___ctor(
    (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
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
    sub_B2C434(scrollView, enable);
  }
  UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__TransitionToCombineScene(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4187842 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4187842 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
  EventMissionItemListViewManager__dialogCallback(this, 0, v5);
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

  if ( (byte_4187845 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, *(_QWORD *)&x);
    byte_4187845 = 1;
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  void *Instance; // x0
  const MethodInfo *targetMissionId; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIdProgressTypeAndActionType; // x0
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v32; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  struct EventMissionEntity_o *v35; // x8
  Il2CppObject *v36; // x22
  EventMissionActionInfo_o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int v40; // w21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__64_1; // x21
  Il2CppObject *v43; // x22
  struct EventMissionItemListViewManager___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x8
  __int64 v53; // x8
  int32_t v54; // w0
  const MethodInfo *v55; // x2
  __int64 v56; // x0
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-A8h] BYREF
  int v58[2]; // [xsp+20h] [xbp-90h]
  int v59; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_4187846 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMissionActionInfo___ctor__, method);
    sub_B2C35C(&System_Comparison_EventMissionActionInfo__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v11);
    sub_B2C35C(&EventMissionActionInfo_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__, v23);
    sub_B2C35C(&EventMissionItemListViewManager___c_TypeInfo, v24);
    sub_B2C35C(&StringLiteral_16235/*"actionAfterCallback"*/, v25);
    byte_4187846 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  memset(&v60, 0, sizeof(v60));
  v59 = 0;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_43;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType((EventMissionActionAddMaster_o *)Instance, missionToRecieve->fields.id, 5, 3, 0LL);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v61 = v57;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v61,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v61.fields.current;
      v32 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27194656(v32, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v26 )
        sub_B2C434(v33, v34);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v58[0] = 185;
    v59 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v61,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v59 = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v35 = this->fields.missionToRecieve;
    if ( !v35 )
      goto LABEL_43;
    if ( !Instance )
      goto LABEL_43;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v35->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v60 = v57;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v60,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v36 = v60.fields.current;
      v37 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v37, (EventMissionActionEntity_o *)v36, 0LL);
      if ( !v26 )
        sub_B2C434(v38, v39);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v58[0] = 185;
    v40 = ++v59;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v60,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v40 && v58[v40 - 1] == 185 )
      v59 = v40 - 1;
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
    v43 = (Il2CppObject *)static_fields->__9;
    _9__64_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionActionInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__64_1,
      v43,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionActionInfo___ctor__);
    v44 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v44->__9__64_1 = (struct System_Comparison_EventMissionActionInfo__o *)_9__64_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v44->__9__64_1,
      (System_Int32_array **)_9__64_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !v26 )
    goto LABEL_43;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
    (System_Comparison_T__o *)_9__64_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  size = v26->fields._size;
  if ( size <= 0 )
    goto LABEL_39;
  v52 = v26->fields._items->m_Items[size - 1];
  if ( !v52 || (v53 = *(_QWORD *)&v52->fields.addCount) == 0 )
LABEL_43:
    sub_B2C434(Instance, targetMissionId);
  if ( !*(_DWORD *)(v53 + 24) )
  {
    v56 = sub_B2C460(Instance);
    sub_B2C400(v56, 0LL);
  }
  v54 = System_Int32__Parse(*(System_String_o **)(v53 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v54 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_24984784(this, (int32_t)targetMissionId, v55);
    goto LABEL_41;
  }
LABEL_39:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_41:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16235/*"actionAfterCallback"*/,
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
    sub_B2C2F8(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventMissionItemListViewManager__afterReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187830 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionItemListViewManager__afterReward_d__57_TypeInfo, method);
    byte_4187830 = 1;
  }
  v3 = sub_B2C42C(EventMissionItemListViewManager__afterReward_d__57_TypeInfo);
  EventMissionItemListViewManager__afterReward_d__57___ctor(
    (EventMissionItemListViewManager__afterReward_d__57_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  __int64 v16; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v18; // x8
  int64_t v19; // x20
  int64_t v20; // x21
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
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

  if ( (byte_4187828 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__, v10);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__, v11);
    sub_B2C35C(&EventMissionItemListViewManager___c_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_12240/*"SHOW_MSG"*/, v13);
    sub_B2C35C(&StringLiteral_11137/*"REWARD_ACCEPTABLE"*/, v14);
    byte_4187828 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_51;
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v18 = this->fields.missionToRecieve;
  if ( !v18 )
    goto LABEL_51;
  if ( v18->fields.rewardType == 1 )
  {
    v19 = Instance;
    if ( !Instance )
      goto LABEL_51;
    if ( Gift__IsServant_27324084(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_51;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_51;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            *(_DWORD *)(v19 + 24),
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_51;
      v20 = Instance;
      if ( SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
        || SvtType__IsStatusUp(*(_DWORD *)(v20 + 84), 0LL) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
            _9__49_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
          sub_B2C2F8(
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
            v44 = &StringLiteral_12240/*"SHOW_MSG"*/;
            goto LABEL_39;
          }
LABEL_51:
          sub_B2C434(Instance, v16);
        }
        v31 = *(_DWORD *)(v19 + 28);
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
            _9__49_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              _9__49_0,
              v35,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__,
              0LL);
            v42 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v42->__9__49_1 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v42->__9__49_1;
LABEL_48:
            sub_B2C2F8(p__9__49_0, (System_Int32_array **)_9__49_0, v36, v37, v38, v39, v40, v41);
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
  v44 = &StringLiteral_11137/*"REWARD_ACCEPTABLE"*/;
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

  if ( (byte_4187843 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_4187843 = 1;
  }
  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    this->fields.dialogCallBack = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.dialogCallBack,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(dialogCallBack, result, (const MethodInfo_24BA55C *)Method_System_Action_int__Invoke__);
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
  __int64 v13; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v15; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v17; // x8

  if ( (byte_4187833 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionItemListViewManager_TypeInfo, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10);
    byte_4187833 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventMissionItemListViewManager_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B2C2F8(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v17 = this->fields.missionToRecieve;
    if ( !v17 || !Instance )
LABEL_13:
      sub_B2C434(Instance, v13);
    AutomatedAction__SetMissionAction(Instance, v17->fields.id, 5, 0, 0LL);
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

  if ( (byte_4187834 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, parentTr);
    sub_B2C35C(&EventMissionItemListViewManager_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4187834 = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_B2C434(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  return v10;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418781D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418781D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v11;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_418781C & 1) == 0 )
  {
    sub_B2C35C(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___, method);
    byte_418781C = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_1AB37C8 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4187832 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_EventMissionItemListViewManager_endloadEffect__, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5841/*"Effect/EventMission"*/, v5);
    byte_4187832 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5841/*"Effect/EventMission"*/, v6, 1, 0LL);
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
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20
  __int64 v32; // x0

  v4 = this;
  if ( (byte_418782B & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___, result);
    sub_B2C35C(&JsonManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v6);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v9);
    this = (EventMissionItemListViewManager_o *)sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_418782B = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( !System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_44307816(
                            (System_String_o *)StringLiteral_15634/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15870/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                  v12,
                                                  (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
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
      sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.getSvtList, v21, v13, v14, v15, v16, v17, v18);
      if ( !LODWORD(v19->fields.dropObjectList) )
      {
LABEL_23:
        v32 = sub_B2C460(this);
        sub_B2C400(v32, 0LL);
      }
      v28 = v19->fields.indicator;
      if ( v28 )
      {
        klass = (System_Int32_array **)v28[1].klass;
        v4->fields.getCommandCodeList = (struct GetCommandCodes_array *)klass;
        sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.getCommandCodeList, klass, v22, v23, v24, v25, v26, v27);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_4185D95 )
          {
            sub_B2C35C(&EventRewardSaveData_TypeInfo, result);
            byte_4185D95 = 1;
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
              v11 = &StringLiteral_11079/*"REQUEST_OK"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_B2C434(this, result);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_22;
  v11 = &StringLiteral_11077/*"REQUEST_NG"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x20
  __int64 v15; // x10
  __int64 v16; // x1
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *monitor; // x21
  __int64 v20; // x1
  EventMissionItemListViewObject_o *v21; // x0
  __int64 v22; // x9
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x0
  System_Action_o *v26; // x20
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4187837 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, v6);
    sub_B2C35C(&Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, v7);
    sub_B2C35C(&EventMissionItemListViewObject_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4187837 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B2C434(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v12 )
        break;
      current = v28.fields.current;
      if ( !v28.fields.current
        || (v15 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v28.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15)
        || (EventMissionItemListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v15 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B2C434(v12, v13);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields.current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_B2C434(0LL, v16);
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
          v21 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v21 )
            sub_B2C434(0LL, v20);
          v22 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
            || (EventMissionItemListViewObject_c *)v21->klass->_2.typeHierarchy[v22 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            v25 = sub_B2C728(v21);
LABEL_31:
            sub_B2C434(v25, v24);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v21,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v23 = (UnityEngine_Object_o *)current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        v25 = (__int64)current[6].monitor;
        if ( !v25 )
          goto LABEL_31;
        (*(void (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v25 + 392LL))(
          v25,
          current,
          *(_QWORD *)(*(_QWORD *)v25 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v26, 0LL);
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
  __int64 v12; // x1
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
  System_Action_int__o *v26; // x20
  const MethodInfo *v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct EventMissionEntity_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4187827 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, missionEntity);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&Method_EventMissionItemListViewManager_recieveReward__, v6);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__, v7);
    sub_B2C35C(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_8756/*"MISSION_REWARD"*/, v9);
    byte_4187827 = 1;
  }
  v10 = sub_B2C42C(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass47_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = missionEntity;
  v19 = (struct EventMissionEntity_o **)(v10 + 24);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)missionEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( this->fields.isQpMaxAlert )
  {
    v26 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v26,
      (Il2CppObject *)v10,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v26, v27);
    return;
  }
  v28 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 75) & 2) != 0 )
    v28 = (_QWORD *)sub_B2C364(Method_EventMissionItemListViewManager_recieveReward__);
  v29 = (System_Reflection_MethodBase_o *)sub_B2C340(v28, v28[3]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 8, 0LL);
  v30 = *v19;
  this->fields.missionToRecieve = *v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.missionToRecieve,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_B2C434(targetFSM, v12);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8756/*"MISSION_REWARD"*/, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_418782A & 1) == 0 )
  {
    sub_B2C35C(&Method_EventMissionItemListViewManager_missionRewardCallback__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    byte_418782A = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  MissionNotifyManager__StartPause(Request_WarBoardWallAttackRequest, 0LL);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v10,
                                                                  (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B2C434(Request_WarBoardWallAttackRequest, v9);
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
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4187831 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4187831 = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_B2C434(Instance, v4);
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
  __int64 v6; // x1
  UISprite_o *v7; // x0

  if ( (byte_418783D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, targetFile);
    byte_418783D = 1;
  }
  filterBtnTxt = (UnityEngine_Object_o *)this->fields.filterBtnTxt;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(filterBtnTxt, 0LL, 0LL) )
  {
    v7 = this->fields.filterBtnTxt;
    if ( !v7 || (UISprite__set_spriteName(v7, targetFile, 0LL), (v7 = this->fields.filterBtnTxt) == 0LL) )
      sub_B2C434(v7, v6);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
      v7,
      v7->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventMissionItemListViewManager__setList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v9; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v20; // w2
  bool v21; // w2
  bool v22; // w2
  bool v23; // w2
  __int64 v24; // x1
  int32_t filterStatus; // w19

  if ( (byte_418783C & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17046/*"btn_txt_completed"*/, v3);
    sub_B2C35C(&StringLiteral_17079/*"btn_txt_receipt"*/, v4);
    sub_B2C35C(&StringLiteral_17078/*"btn_txt_progress"*/, v5);
    sub_B2C35C(&StringLiteral_17062/*"btn_txt_notopen"*/, v6);
    sub_B2C35C(&StringLiteral_17029/*"btn_txt_all"*/, v7);
    byte_418783C = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v9 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914748(v9, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17029/*"btn_txt_all"*/, v18);
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
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17079/*"btn_txt_receipt"*/, v18);
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
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17078/*"btn_txt_progress"*/, v18);
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
        sub_B2C434(operationSortInfo, v17);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4185D94 )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, v24);
        byte_4185D94 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17062/*"btn_txt_notopen"*/, v18);
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
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17046/*"btn_txt_completed"*/, v18);
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
  int MissionId_k__BackingField; // w20
  unsigned __int64 v13; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x24
  ListViewItem_o *v15; // x8
  __int64 v16; // x11

  v4 = this;
  if ( (byte_4187823 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, isRaid);
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    this = (EventMissionItemListViewManager_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v8);
    byte_4187823 = 1;
  }
  if ( !byte_418791F )
  {
    this = (EventMissionItemListViewManager_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, isRaid);
    byte_418791F = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  size = itemList->fields._size;
  if ( byte_4187920 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    this = (EventMissionItemListViewManager_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, isRaid);
    byte_4187920 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
      if ( !this )
        goto LABEL_31;
      this = (EventMissionItemListViewManager_o *)EventMissionConditionMaster__getTodayFirstMissionId(
                                                    (EventMissionConditionMaster_o *)this,
                                                    v4->fields.currentEventId,
                                                    0LL);
      MissionId_k__BackingField = (int)this;
      goto LABEL_14;
    }
  }
  MissionId_k__BackingField = static_fields->_MissionId_k__BackingField;
LABEL_14:
  if ( (int)size >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = v4->fields.itemList;
      if ( !v14 )
        break;
      if ( v13 >= (unsigned int)v14->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = v14->fields._items->m_Items[v13];
      if ( v15
        && (v16 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
      {
        if ( (EventMissionItemListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == EventMissionItemListViewItem_TypeInfo )
          this = (EventMissionItemListViewManager_o *)v14->fields._items->m_Items[v13];
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
      if ( (__int64)++v13 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B2C434(this, isRaid);
  }
LABEL_29:
  LODWORD(v13) = 0;
LABEL_30:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v13, 0LL);
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
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x4
  System_Action_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  v12 = this;
  if ( (byte_418781F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, currentMissionActionInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v13);
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, v14);
    sub_B2C35C(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__, v15);
    sub_B2C35C(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18);
    this = (EventMissionItemListViewManager_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v19);
    byte_418781F = 1;
  }
  v12->fields.targetMissionId = missionID;
  if ( callback )
  {
    v12->fields.actionCallback = callback;
    sub_B2C2F8(
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
    sub_B2C434(this, currentMissionActionInfo);
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_37;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v12->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v12, v23, v29, eventMissionActionInfo, v30);
  }
  else
  {
    v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__,
      0LL);
    v12->fields.callbackAfterScroll = v31;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->fields.callbackAfterScroll,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    ListViewManager__MoveTopItem((ListViewManager_o *)v12, v23, 1, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0

  if ( (byte_4187829 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5487/*"END_NOTICE"*/, method);
    byte_4187829 = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B2C434(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5487/*"END_NOTICE"*/, 0LL);
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
      sub_B2C434(this, method);
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
  sub_B2C2F8(p__2__current, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  EventMissionItemListViewManager__SetPreviousFilter_d__39_o *v2; // x20
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v16; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v18; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  signed __int64 size; // x22
  System_Collections_Generic_List_int__o *v21; // x20
  unsigned __int64 i; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x25
  ListViewItem_o *v24; // x8
  __int64 v25; // x11
  __int64 v26; // x11
  MissionListViewItem_o *v27; // x0
  System_Func_int__int__int__o *v28; // x21
  int32_t v29; // w0
  int32_t v30; // w21
  int32_t v31; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v34; // x19
  Il2CppObject **p__2__current; // x20

  v2 = this;
  if ( (byte_4184B31 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Aggregate_int___, method);
    sub_B2C35C(&EventMissionItemListViewItem_TypeInfo, v3);
    sub_B2C35C(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__, v4);
    sub_B2C35C(&Method_System_Func_int__int__int___ctor__, v5);
    sub_B2C35C(&System_Func_int__int__int__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__IndexOf__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)sub_B2C35C(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v13);
    byte_4184B31 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        openItemTime = _4__this->fields.openItemTime;
        endEffectTime = _4__this->fields.endEffectTime;
        v34 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v34, openItemTime + endEffectTime, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v34;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v34);
        *((_DWORD *)p__2__current - 2) = 2;
        LOBYTE(v18) = 1;
        return v18;
      }
      goto LABEL_35;
    }
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        v16 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v2->fields.index, v2->fields.onFinished, 0LL);
        started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0LL);
        v2->fields.__2__current = (Il2CppObject *)started;
        sub_B2C2F8(&v2->fields.__2__current, started);
        LOBYTE(v18) = 1;
        v2->fields.__1__state = 1;
        return v18;
      }
LABEL_35:
      sub_B2C434(this, method);
    }
LABEL_33:
    LOBYTE(v18) = 0;
    return v18;
  }
  v2->fields.__1__state = -1;
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
  v21 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v23 = _4__this->fields.itemSortList;
    if ( !v23 )
      goto LABEL_35;
    if ( i >= (unsigned int)v23->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v24 = v23->fields._items->m_Items[i];
    if ( !v24 )
      goto LABEL_35;
    v25 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (EventMissionItemListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      goto LABEL_35;
    }
    v26 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) >= (unsigned int)v26 )
      v27 = (EventMissionItemListViewItem_c *)v24->klass->_2.typeHierarchy[v26 - 1] == EventMissionItemListViewItem_TypeInfo
          ? (MissionListViewItem_o *)v23->fields._items->m_Items[i]
          : 0LL;
    else
      v27 = 0LL;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)MissionListViewItem__get_EventMissionEntity(
                                                                           v27,
                                                                           0LL);
    if ( !this || !v21 )
      goto LABEL_35;
    System_Collections_Generic_List_int___Add(
      v21,
      (int32_t)this->fields.__4__this,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  v28 = (System_Func_int__int__int__o *)sub_B2C42C(System_Func_int__int__int__TypeInfo);
  System_Func_int__int__int____ctor(
    v28,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__,
    (const MethodInfo_271AD2C *)Method_System_Func_int__int__int___ctor__);
  v29 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__TSource__TSource__o *)v28,
          (const MethodInfo_1736658 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v30 = v29;
  v18 = System_Collections_Generic_List_int___IndexOf(
          v21,
          v29,
          (const MethodInfo_2F68070 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v18 )
  {
    v31 = v30 - 1;
    if ( v18 == (_DWORD)size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v31, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v31, 0, 0LL);
    goto LABEL_33;
  }
  return v18;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__39_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184B25 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionItemListViewManager___c_TypeInfo, v1);
    byte_4184B25 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventMissionItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
  System_String_o *v11; // x20
  EventMissionItemListViewManager___c_c *v12; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_2; // x22
  System_String_o *v15; // x21
  Il2CppObject *v16; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v17; // x0

  if ( (byte_4184B26 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, v4);
    sub_B2C35C(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8747/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4184B26 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8747/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v11 = v9;
  v12 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v12 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__49_2 = static_fields->__9__49_2;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_2 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__49_2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__49_2, v16, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, 0LL);
    v17 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v17->__9__49_2 = _9__49_2;
    sub_B2C2F8(&v17->__9__49_2, _9__49_2);
  }
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__OpenNotificationDialog(Instance, v15, v11, _9__49_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  System_String_o *v11; // x20
  EventMissionItemListViewManager___c_c *v12; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_3; // x22
  System_String_o *v15; // x21
  Il2CppObject *v16; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v17; // x0

  if ( (byte_4184B28 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, v4);
    sub_B2C35C(&EventMissionItemListViewManager___c_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8748/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4184B28 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8748/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v11 = v9;
  v12 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v12 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__49_3 = static_fields->__9__49_3;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_3 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__49_3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__49_3, v16, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, 0LL);
    v17 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v17->__9__49_3 = _9__49_3;
    sub_B2C2F8(&v17->__9__49_3, _9__49_3);
  }
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__OpenNotificationDialog(Instance, v15, v11, _9__49_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4184B27 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184B27 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4184B29 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184B29 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__64_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
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
    sub_B2C434(selectItem, method);
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
  __int64 v9; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct EventMissionItemListViewManager_o *v12; // x8

  if ( (byte_4184B2A & 1) == 0 )
  {
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__, *(_QWORD *)&result);
    sub_B2C35C(&StringLiteral_8756/*"MISSION_REWARD"*/, v5);
    byte_4184B2A = 1;
  }
  if ( result == 1 )
  {
    v6 = Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B2C364(Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__);
    v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (missionEntity = this->fields.missionEntity,
          _4__this->fields.missionToRecieve = missionEntity,
          sub_B2C2F8(&_4__this->fields.missionToRecieve, missionEntity),
          (v12 = this->fields.__4__this) == 0LL)
      || (targetFSM = v12->fields.targetFSM) == 0LL )
    {
      sub_B2C434(targetFSM, v9);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8756/*"MISSION_REWARD"*/, 0LL);
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
  __int64 v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4184B2D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184B2D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B2C434(Instance, v4);
  v6 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
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
  if ( (byte_4184B2B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)sub_B2C35C(
                                                                        &SingletonTemplate_MissionNotifyManager__TypeInfo,
                                                                        v4);
    byte_4184B2B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_12;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)this, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL), (v6 = v2->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B2C434(this, method);
  }
  v7 = EventMissionItemListViewManager__afterReward(v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v6, v7, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4184B2C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184B2C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B2C434(Instance, v4);
  v6 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
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
  System_Text_StringBuilder_o *v22; // x20
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v23; // x8
  System_String_o *v24; // x21
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v27; // x1
  System_String_o *v28; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v29; // x8
  System_String_o *v30; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v31; // x8
  System_String_o *v32; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v33; // x8
  System_String_o *v34; // x21
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v35; // x8
  struct EventMissionItemListViewManager_o *v36; // x8
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v37; // x8
  struct EventMissionItemListViewManager_o *v38; // x8
  System_String_o *v39; // x21
  Il2CppObject *NumberFormat; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v41; // x8
  struct EventMissionItemListViewManager_o *v42; // x8
  System_String_o *v43; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x21
  _QWORD **v46; // x23
  __int64 v47; // x22
  __int16 v48; // w8
  __int64 v49; // x22
  __int64 v50; // x22
  __int64 v51; // x22
  CommonUI_o *v52; // x21
  EventMissionItemListViewManager___c__DisplayClass56_1_o *v53; // x22
  Il2CppObject *v54; // x24
  MissionRewardGetDialog_ClickDelegate_o *monitor; // x23
  System_String_o *v56; // x20
  Il2CppClass *klass; // x8

  v2 = this;
  if ( (byte_4184B2E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_object___, method);
    sub_B2C35C(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__, v11);
    sub_B2C35C(&StringLiteral_8760/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v12);
    sub_B2C35C(&StringLiteral_8746/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v13);
    sub_B2C35C(&StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, v14);
    sub_B2C35C(&StringLiteral_8751/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/, v15);
    sub_B2C35C(&StringLiteral_31/*"\n \n"*/, v16);
    sub_B2C35C(&StringLiteral_32/*"\n \n "*/, v17);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)sub_B2C35C(&StringLiteral_8761/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v18);
    byte_4184B2E = 1;
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
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
      CS___8__locals1 = v2->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v27 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_35309748(_4__this, v27, 0LL);
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
  v22 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v22, 0LL);
  v23 = v2->fields.CS___8__locals1;
  if ( !v23 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v23->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_80;
  v24 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v24, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v24 )
        goto LABEL_80;
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__Substring_44369268(
                                                                          v24,
                                                                          0,
                                                                          v24->fields.m_stringLength - 2,
                                                                          0LL);
      if ( !v22 )
        goto LABEL_80;
      System_Text_StringBuilder__Append_42408700(v22, (System_String_o *)this, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8746/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__Append_42408700(
                                                                          v22,
                                                                          v28,
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
                                                                          (System_String_o *)StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0LL);
      if ( !v22 )
        goto LABEL_80;
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v22,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v24,
                                                                          0LL);
    }
    v29 = v2->fields.CS___8__locals1;
    if ( !v29 )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v29->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_80;
    v30 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v30, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__Append_42408700(
                                                                          v22,
                                                                          (System_String_o *)StringLiteral_32/*"\n \n "*/,
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
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8751/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0LL);
    v33 = v2->fields.CS___8__locals1;
    if ( !v33 )
      goto LABEL_80;
    v34 = (System_String_o *)this;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v33->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                        this,
                                                                        this->klass[1]._1.image);
    if ( !v22 )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v22,
                                                                        v34,
                                                                        (Il2CppObject *)this,
                                                                        0LL);
  }
  v35 = v2->fields.CS___8__locals1;
  if ( !v35 )
    goto LABEL_80;
  v36 = v35->fields.__4__this;
  if ( !v36 )
    goto LABEL_80;
  if ( v36->fields.isQpMaxAlert )
  {
    if ( !v22 )
      goto LABEL_80;
    if ( v36->fields.isQpAlreadyMax )
    {
      System_Text_StringBuilder__set_Length(v22, 0, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8760/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v37 = v2->fields.CS___8__locals1;
      if ( v37 )
      {
        v38 = v37->fields.__4__this;
        if ( v38 )
        {
          v39 = (System_String_o *)this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v38->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v22, v39, NumberFormat, 0LL);
          goto LABEL_72;
        }
      }
LABEL_80:
      sub_B2C434(this, method);
    }
    System_Text_StringBuilder__Append_42408700(v22, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8761/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v41 = v2->fields.CS___8__locals1;
    if ( !v41 )
      goto LABEL_80;
    v42 = v41->fields.__4__this;
    if ( !v42 )
      goto LABEL_80;
    v43 = (System_String_o *)this;
    v44 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v42->fields.overQpValue, 0LL);
    v45 = System_String__Format(v43, v44, 0LL);
    v46 = (_QWORD **)Method_System_Array_Empty_object___;
    v47 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v48 = *(_WORD *)(v47 + 306);
    if ( (v48 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v48 = *(_WORD *)(v47 + 306);
    }
    if ( (v48 & 0x400) != 0 )
    {
      v49 = *v46[6];
      if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
        sub_AC505C(*v46[6]);
      if ( !*(_DWORD *)(v49 + 224) )
      {
        v50 = *v46[6];
        if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
          sub_AC505C(*v46[6]);
        j_il2cpp_runtime_class_init_0(v50);
      }
    }
    v51 = *v46[6];
    if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
      sub_AC505C(*v46[6]);
    System_Text_StringBuilder__AppendFormat_42415448(v22, v45, **(System_Object_array ***)(v51 + 184), 0LL);
  }
LABEL_72:
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_80;
  v52 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v2->fields.giftList,
                                                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v22 )
    goto LABEL_80;
  v53 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v22->klass->vtable._3_ToString.method)(
                                                                      v22,
                                                                      v22->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v54 = (Il2CppObject *)v2->fields.CS___8__locals1;
  if ( !v54 )
    goto LABEL_80;
  monitor = (MissionRewardGetDialog_ClickDelegate_o *)v54[2].monitor;
  v56 = (System_String_o *)this;
  if ( !monitor )
  {
    monitor = (MissionRewardGetDialog_ClickDelegate_o *)sub_B2C42C(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      monitor,
      v54,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__,
      0LL);
    v54[2].monitor = monitor;
    sub_B2C2F8(&v54[2].monitor, monitor);
    v54 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( !v54 )
      goto LABEL_80;
  }
  klass = v54[1].klass;
  if ( !klass || !v52 )
    goto LABEL_80;
  CommonUI__OpenMissionRewardGetDialog(v52, (GiftEntity_array *)v53, v56, monitor, BYTE1(klass->vtable[11].method), 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  MissionListViewManager_o *v5; // x20
  System_Action_o *klass; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4184B2F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)sub_B2C35C(
                                                                        &Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__,
                                                                        v3);
    byte_4184B2F = 1;
  }
  monitor = v2[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  v5 = (MissionListViewManager_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v2[3].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__,
      0LL);
    v2[3].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v2[3], klass);
  }
  if ( !v5 )
LABEL_8:
    sub_B2C434(this, method);
  MissionListViewManager__StartSvtListGetEffect(v5, 0, klass, 0LL);
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
  __int64 v10; // x1
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  CommonUI_o *v13; // x20
  System_String_o *v14; // x0
  Il2CppObject *v15; // x23
  System_Action_o *klass; // x22
  System_String_o *v17; // x19
  System_String_o *v18; // x21

  if ( (byte_4184B30 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__, v6);
    sub_B2C35C(&StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4184B30 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v14, (Il2CppObject *)this->fields.sendName, 0LL);
  v15 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_15;
  klass = (System_Action_o *)v15[3].klass;
  v17 = (System_String_o *)Instance;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v15,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__,
      0LL);
    v15[3].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v15[3], klass);
  }
  if ( !v13 )
LABEL_15:
    sub_B2C434(Instance, v10);
  CommonUI__OpenNotificationDialog(v13, v18, v17, klass, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v13; // x21
  AutomatedAction_o *Instance; // x0
  __int64 v15; // x1
  System_Action_o *v16; // x22
  System_Func_bool__o *v17; // x20
  UnityEngine_WaitUntil_o *v18; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4184B32 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__, v6);
    sub_B2C35C(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__, v7);
    sub_B2C35C(&EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5482/*"END_EFFECT"*/, v10);
    byte_4184B32 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (AutomatedAction_o *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5482/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v13 = sub_B2C42C(EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 16) = 0;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)v13,
        Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v16, 0LL);
        v17 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v17,
          (Il2CppObject *)v13,
          Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__,
          (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
        v18 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
        this->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = &this->fields.__2__current;
        sub_B2C2F8(p__2__current, v18);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_B2C434(Instance, v15);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_EventMissionItemListViewManager__afterReward_d__57_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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