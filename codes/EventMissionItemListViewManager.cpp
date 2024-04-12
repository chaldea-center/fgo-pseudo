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
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B052D & 1) == 0 )
  {
    sub_B52984(&MissionListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B052D = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dialogTitle, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dialogMessage, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dialogGetable, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v3; // x23
  __int64 Instance; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x20
  struct EventMissionEntity_o *v14; // x8
  const MethodInfo *v15; // x1
  System_Text_StringBuilder_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Text_StringBuilder_o *v23; // x0
  System_Text_StringBuilder_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x28
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  Il2CppObject **v38; // x22
  __int64 v39; // x24
  il2cpp_array_size_t v40; // w21
  Il2CppClass **v41; // x27
  Il2CppClass *v42; // x8
  char *v43; // x27
  Il2CppClass *v44; // t1
  EventRewardSetEntity_o *SetRewardData; // x23
  System_Int32_array **v46; // x1
  Il2CppObject **v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **name; // x1
  struct GetSvts_array *getSvtList; // x8
  SummonAssetManager_o *v62; // x19
  System_Action_o *v63; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x23
  __int64 v65; // x28
  GiftEntity_o **m_Items; // x21
  GiftEntity_o *v67; // x8
  GiftEntity_o *v68; // x8
  ServantEntity_o *v69; // x25
  bool IsCombineMaterial; // w26
  System_String_o *v71; // x0
  System_Text_StringBuilder_o *klass; // x26
  GiftEntity_o *v73; // x8
  Il2CppObject *v74; // x25
  Il2CppObject *v75; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x1
  GiftEntity_o *v77; // x8
  GiftEntity_o *v78; // x8
  bool IsCountableWithPlus; // w0
  Il2CppObject **v80; // x8
  Il2CppObject *v81; // x26
  System_Text_StringBuilder_o *v82; // x25
  int32_t getQpValue; // w8
  GiftEntity_o *v84; // x8
  System_String_o *v85; // x27
  Il2CppObject *v86; // x0
  System_Text_StringBuilder_o *monitor; // x26
  System_String_o *v88; // x1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v89; // x22
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Action_o *v96; // x22
  CommonUI_o *v97; // x19
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  Il2CppObject *v100; // x22
  System_String_o *v101; // x20
  System_Action_o *v102; // x21
  __int64 v103; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v104; // [xsp+38h] [xbp-78h]
  __int64 v105; // [xsp+40h] [xbp-70h]
  int32_t num; // [xsp+4Ch] [xbp-64h] BYREF
  WarEntity_o *v107; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42B0518 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor___68511904);
    sub_B52984(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__);
    sub_B52984(&EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__);
    sub_B52984(&EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo);
    sub_B52984(&StringLiteral_8803/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_B52984(&StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/);
    sub_B52984(&StringLiteral_23857/*"{0}×{1:#,0}"*/);
    sub_B52984(&StringLiteral_23899/*"×"*/);
    sub_B52984(&StringLiteral_8798/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_30/*"\n "*/);
    sub_B52984(&StringLiteral_24159/*"＋"*/);
    byte_42B0518 = 1;
  }
  v107 = 0LL;
  entity = 0LL;
  v3 = sub_B52A54(EventMissionItemListViewManager___c__DisplayClass56_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass56_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_122;
  *(_QWORD *)(v3 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_122;
  if ( !Instance )
    goto LABEL_122;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v14 = this->fields.missionToRecieve;
  if ( !v14 )
    goto LABEL_122;
  if ( !Instance )
    goto LABEL_122;
  AutomatedAction__SetStatusMissionNotify((AutomatedAction_o *)Instance, v14->fields.id, 5, 0, 0LL);
  this->fields.isGetCostumeReleaseItem = 0;
  this->fields.costumeReleaseItemObjectId = 0;
  EventMissionItemListViewManager__RedisplayEventUI(this, v15);
  v16 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0LL);
  *(_QWORD *)(v3 + 32) = v16;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v23, 0LL);
  v24 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v24, 0LL);
  *(_QWORD *)(v3 + 24) = v24;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v31 = sub_B52A54(EventMissionItemListViewManager___c__DisplayClass56_1_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass56_1___ctor(
    (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_122;
  *(_QWORD *)(v31 + 40) = v3;
  v38 = (Il2CppObject **)(v31 + 40);
  sub_B52920((BattleServantConfConponent_o *)(v31 + 40), (System_Int32_array **)v3, v32, v33, v34, v35, v36, v37);
  Instance = (__int64)this->fields.missionToRecieve;
  if ( !Instance )
    goto LABEL_122;
  if ( *(_DWORD *)(Instance + 80) == 1 )
  {
    *(_DWORD *)(v31 + 24) = 0;
    if ( !GiftListById )
      goto LABEL_122;
    v39 = *(_QWORD *)&GiftListById->max_length;
    if ( (int)v39 >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        v41 = &GiftListById->obj.klass + (int)v40;
        v44 = v41[4];
        v43 = (char *)(v41 + 4);
        v42 = v44;
        if ( !v44 )
          break;
        Instance = Gift__IsServant_28236324(HIDWORD(v42->_1.name), 0LL);
        if ( (Instance & 1) == 0 )
        {
          if ( v40 >= GiftListById->max_length )
            goto LABEL_123;
          if ( !*(_QWORD *)v43 )
            break;
          Instance = Gift__IsCommandCode_28236720(*(_DWORD *)(*(_QWORD *)v43 + 20LL), 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( v40 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !*(_QWORD *)v43 )
              break;
            Instance = Gift__IsCostumeRelease(*(_DWORD *)(*(_QWORD *)v43 + 20LL), 0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( v40 >= GiftListById->max_length )
                goto LABEL_123;
              if ( !*(_QWORD *)v43 || !Instance )
                break;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &entity,
                           *(_DWORD *)(*(_QWORD *)v43 + 24LL),
                           (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !entity || !Instance )
                  break;
                Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, entity->fields.id, 0LL);
                if ( (Instance & 1) == 0 )
                  ++*(_DWORD *)(v31 + 24);
              }
            }
          }
        }
        if ( (int)++v40 >= (int)v39 )
          goto LABEL_41;
        if ( v40 >= GiftListById->max_length )
        {
LABEL_123:
          v103 = sub_B52A88(Instance);
          sub_B52A28(v103, 0LL);
        }
      }
LABEL_122:
      sub_B52A5C(Instance, v5);
    }
LABEL_41:
    v105 = v31;
    v104 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v104,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v64,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    if ( (int)v39 >= 1 )
    {
      v65 = 0LL;
      m_Items = GiftListById->m_Items;
      do
      {
        if ( (unsigned int)v65 >= GiftListById->max_length )
          goto LABEL_123;
        v67 = m_Items[v65];
        if ( !v67 )
          goto LABEL_122;
        Instance = Gift__IsServant_28236324(v67->fields.type, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_122;
          Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( (unsigned int)v65 >= GiftListById->max_length )
            goto LABEL_123;
          v68 = m_Items[v65];
          if ( !v68 )
            goto LABEL_122;
          if ( !Instance )
            goto LABEL_122;
          Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                v68->fields.objectId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_122;
          v69 = (ServantEntity_o *)Instance;
          IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL);
          Instance = SvtType__IsStatusUp(v69->fields.type, 0LL);
          if ( IsCombineMaterial || (Instance & 1) != 0 )
          {
            if ( !*v38 )
              goto LABEL_122;
            Instance = (__int64)(*v38)[2].klass;
            if ( !Instance )
              goto LABEL_122;
            v71 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 360LL))(
                                       Instance,
                                       *(_QWORD *)(*(_QWORD *)Instance + 368LL));
            Instance = System_String__IsNullOrEmpty(v71, 0LL);
            if ( (Instance & 1) == 0 )
            {
              if ( !*v38 )
                goto LABEL_122;
              Instance = (__int64)(*v38)[2].klass;
              if ( !Instance )
                goto LABEL_122;
              Instance = (__int64)System_Text_StringBuilder__Append_42994048(
                                    (System_Text_StringBuilder_o *)Instance,
                                    (System_String_o *)StringLiteral_30/*"\n "*/,
                                    0LL);
            }
            if ( !*v38 )
              goto LABEL_122;
            klass = (System_Text_StringBuilder_o *)(*v38)[2].klass;
            Instance = (__int64)ServantEntity__getName(v69, 0, -1, 0LL);
            if ( (unsigned int)v65 >= GiftListById->max_length )
              goto LABEL_123;
            v73 = m_Items[v65];
            if ( !v73 )
              goto LABEL_122;
            v74 = (Il2CppObject *)Instance;
            num = v73->fields.num;
            v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
            Instance = (__int64)System_String__Format_44563852((System_String_o *)StringLiteral_23857/*"{0}×{1:#,0}"*/, v74, v75, 0LL);
            if ( !klass )
              goto LABEL_122;
            Instance = (__int64)System_Text_StringBuilder__Append_42994048(klass, (System_String_o *)Instance, 0LL);
            if ( (unsigned int)v65 >= GiftListById->max_length )
              goto LABEL_123;
            if ( !v64 )
              goto LABEL_122;
            v76 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v65];
            Instance = (__int64)v64;
LABEL_108:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              v76,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
          }
        }
        else
        {
          if ( (unsigned int)v65 >= GiftListById->max_length )
            goto LABEL_123;
          v77 = m_Items[v65];
          if ( !v77 )
            goto LABEL_122;
          Instance = Gift__IsItem_28236268(v77->fields.type, 0LL);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_122;
            Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( (unsigned int)v65 >= GiftListById->max_length )
              goto LABEL_123;
            v78 = m_Items[v65];
            if ( !v78 || !Instance )
              goto LABEL_122;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &v107,
                         v78->fields.objectId,
                         (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v107 || !Instance )
                goto LABEL_122;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v107->fields.id, 0LL);
              if ( (Instance & 1) == 0 )
              {
                if ( !v107 )
                  goto LABEL_122;
                IsCountableWithPlus = ItemType__IsCountableWithPlus(v107->fields.bannerId, 0LL);
                v80 = (Il2CppObject **)&StringLiteral_24159/*"＋"*/;
                if ( !IsCountableWithPlus )
                  v80 = (Il2CppObject **)&StringLiteral_23899/*"×"*/;
                v81 = *v80;
                v82 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
                System_Text_StringBuilder___ctor(v82, 0LL);
                if ( !v107 || !v82 )
                  goto LABEL_122;
                System_Text_StringBuilder__Append_42994048(v82, v107->fields.age, 0LL);
                if ( this->fields.isQpMaxAlert && this->fields.getQpValue )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                  getQpValue = this->fields.getQpValue;
                }
                else
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                  if ( (unsigned int)v65 >= GiftListById->max_length )
                    goto LABEL_123;
                  v84 = m_Items[v65];
                  if ( !v84 )
                    goto LABEL_122;
                  getQpValue = v84->fields.num;
                }
                v85 = (System_String_o *)Instance;
                num = getQpValue;
                v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
                Instance = (__int64)System_Text_StringBuilder__AppendFormat_43000600(v82, v85, v81, v86, 0LL);
                if ( !*v38 )
                  goto LABEL_122;
                monitor = (System_Text_StringBuilder_o *)(*v38)[1].monitor;
                if ( *(int *)(v105 + 24) >= 2 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8798/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                  if ( !monitor )
                    goto LABEL_122;
                  Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                                        monitor,
                                        (System_String_o *)Instance,
                                        (Il2CppObject *)v82,
                                        0LL);
                  if ( !*v38 )
                    goto LABEL_122;
                  Instance = (__int64)(*v38)[1].monitor;
                  if ( !Instance )
                    goto LABEL_122;
                  v88 = (System_String_o *)StringLiteral_30/*"\n "*/;
                }
                else
                {
                  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v82->klass->vtable._3_ToString.method)(
                               v82,
                               v82->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                  if ( !monitor )
                    goto LABEL_122;
                  v88 = (System_String_o *)Instance;
                  Instance = (__int64)monitor;
                }
                Instance = (__int64)System_Text_StringBuilder__Append_42994048(
                                      (System_Text_StringBuilder_o *)Instance,
                                      v88,
                                      0LL);
                if ( (unsigned int)v65 >= GiftListById->max_length )
                  goto LABEL_123;
                Instance = (__int64)v104;
                if ( !v104 )
                  goto LABEL_122;
                v76 = (EventMissionProgressRequest_Argument_ProgressData_o *)m_Items[v65];
                goto LABEL_108;
              }
            }
          }
        }
        ++v65;
      }
      while ( (int)v65 < (int)v39 );
    }
    v89 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v89,
      (System_Collections_Generic_IEnumerable_T__o *)v104,
      (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_GiftEntity___ctor___68511904);
    *(_QWORD *)(v105 + 16) = v89;
    sub_B52920((BattleServantConfConponent_o *)(v105 + 16), (System_Int32_array **)v89, v90, v91, v92, v93, v94, v95);
    Instance = *(_QWORD *)(v105 + 16);
    if ( !Instance )
      goto LABEL_122;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
      (System_Collections_Generic_IEnumerable_T__o *)v64,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    v96 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v96,
      (Il2CppObject *)v105,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, GiftListById, 0, v96, 0LL);
  }
  else
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Instance, v5);
    v46 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v31 + 32) = StringLiteral_1/*""*/;
    v47 = (Il2CppObject **)(v31 + 32);
    sub_B52920((BattleServantConfConponent_o *)(v31 + 32), v46, v48, v49, v50, v51, v52, v53);
    if ( !SetRewardData )
      goto LABEL_122;
    name = (System_Int32_array **)SetRewardData->fields.name;
    *v47 = (Il2CppObject *)name;
    sub_B52920((BattleServantConfConponent_o *)(v31 + 32), name, v54, v55, v56, v57, v58, v59);
    getSvtList = this->fields.getSvtList;
    if ( getSvtList && *(_QWORD *)&getSvtList->max_length )
    {
      Instance = (__int64)this->fields.touchBlockObj;
      if ( !Instance )
        goto LABEL_122;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      v62 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v63 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v63,
        (Il2CppObject *)v31,
        Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__1__,
        0LL);
      if ( !v62 )
        goto LABEL_122;
      SummonAssetManager__LoadSummonAssets(v62, v63, 0LL);
    }
    else
    {
      v97 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v98 = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v99 = System_String__Format(v98, *v47, 0LL);
      v100 = *v38;
      v101 = v99;
      v102 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v102,
        v100,
        Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__2__,
        0LL);
      if ( !v97 )
        goto LABEL_122;
      CommonUI__OpenNotificationDialog(
        v97,
        (System_String_o *)StringLiteral_1/*""*/,
        v101,
        v102,
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
    Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  EventMissionItemListViewManager__CreateList_25635472(this, missionList, eventId, isDailyMission, 1, v5);
}


void __fastcall EventMissionItemListViewManager__CreateList_25635472(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_array *missionList,
        int32_t eventId,
        bool isDailyMission,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v12; // x1
  struct UIScrollView_o *scrollView; // x8
  WarEntity_o *Entity; // x23
  bool v15; // w8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x8
  unsigned __int64 v23; // x26
  bool v24; // w22
  EventMissionEntity_o *v25; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  EventMissionItemListViewItem_o *v27; // x24
  const MethodInfo *v28; // x3
  struct ListViewSort_o *sort; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x21
  UILabel_o *v31; // x21
  __int64 v32; // x0

  if ( (byte_42B0507 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserMissionNewManager_TypeInfo);
    sub_B52984(&StringLiteral_8806/*"MISSION_EMPTY_TXT"*/);
    byte_42B0507 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_36;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             eventId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_36;
  v15 = Instance > *(_QWORD *)&Entity->fields.eventId && Instance <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v15;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  Instance = UserMissionNewManager__ReadData(0LL);
  if ( !missionList )
    goto LABEL_36;
  v22 = *(_QWORD *)&missionList->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    v24 = isDailyMission;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v22 )
      {
        v32 = sub_B52A88(Instance);
        sub_B52A28(v32, 0LL);
      }
      v25 = missionList->m_Items[v23];
      itemList = this->fields.itemList;
      v27 = (EventMissionItemListViewItem_o *)sub_B52A54(EventMissionItemListViewItem_TypeInfo);
      EventMissionItemListViewItem___ctor(v27, v25, v24, v28);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v22) = missionList->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        goto LABEL_22;
    }
LABEL_36:
    sub_B52A5C(Instance, v12);
  }
LABEL_22:
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !byte_42B05C3 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B05C3 = 1;
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
    v31 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8806/*"MISSION_EMPTY_TXT"*/, 0LL);
    if ( !v31 )
      goto LABEL_36;
    UILabel__set_text(v31, (System_String_o *)Instance, 0LL);
  }
  this->fields.currentEventId = eventId;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


TerminalTransitionInfo_o *__fastcall EventMissionItemListViewManager__CreateTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v7; // x21
  EventMissionActionInfo_o *v8; // x20
  EventMissionActionEntity_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **vals; // x1
  EventMissionItemListViewManager_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42B0516 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_B52984(&EventMissionActionInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalTransitionInfo_TypeInfo);
    byte_42B0516 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v7 = EntityFromIdProgressTypeAndActionType;
    v8 = (EventMissionActionInfo_o *)sub_B52A54(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor_26957056(v8, v7, 0LL);
LABEL_11:
    v9 = (EventMissionActionEntity_o *)sub_B52A54(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v9, 0LL);
    if ( v9 )
    {
      v9->fields.missionId = missionId;
      if ( v8 )
      {
        vals = (System_Int32_array **)v8->fields.vals;
        v9->fields.vals = (struct System_String_array *)vals;
        sub_B52920((BattleServantConfConponent_o *)&v9->fields.vals, vals, v10, v11, v12, v13, v14, v15);
        VoiceAssetName = (System_Int32_array **)EventMissionItemListViewManager__GetVoiceAssetName(
                                                  v17,
                                                  v8->fields.vals,
                                                  v18);
        *(_QWORD *)&v9->fields.optionId = VoiceAssetName;
        sub_B52920((BattleServantConfConponent_o *)&v9->fields.optionId, VoiceAssetName, v20, v21, v22, v23, v24, v25);
        return (TerminalTransitionInfo_o *)v9;
      }
    }
LABEL_15:
    sub_B52A5C(Instance, v5);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_15;
  v9 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
         (EventMissionActionMaster_o *)Instance,
         missionId,
         5,
         4,
         0LL);
  if ( v9 )
  {
    v8 = (EventMissionActionInfo_o *)sub_B52A54(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v8, v9, 0LL);
    goto LABEL_11;
  }
  return (TerminalTransitionInfo_o *)v9;
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
  _DWORD *SelfUserGame; // x0
  __int64 v26; // x1
  _DWORD *v27; // x22
  int32_t v28; // w23
  int32_t QpMax; // w8
  int v30; // w23
  int32_t v31; // w24
  System_String_o *v32; // x23
  Il2CppObject *v33; // x24
  System_String_o *v34; // x0
  BalanceConfig_c *v35; // x8
  Il2CppObject *v36; // x25
  Il2CppObject *v37; // x0
  struct System_String_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w8
  int32_t num; // w8
  System_String_o *v47; // x23
  System_String_o *NumberFormat; // x0
  int32_t v49; // w8
  Il2CppObject *v50; // x22
  System_String_o *v51; // x0
  BalanceConfig_c *v52; // x8
  Il2CppObject *v53; // x24
  Il2CppObject *v54; // x0
  struct System_String_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  bool result; // w0

  if ( (byte_42B0529 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8812/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_B52984(&StringLiteral_8815/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0529 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogTitle = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dialogTitle,
    v10,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dialogMessage, v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dialogGetable = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dialogGetable, v18, v19, v20, v21, v22, v23, v24);
  this->fields.isQpAlreadyMax = 0;
  this->fields.getQpValue = 0;
  this->fields.overQpValue = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_30;
  v27 = SelfUserGame;
  v28 = SelfUserGame[24];
  SelfUserGame = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)SelfUserGame + 23) + 4LL);
  if ( v28 >= QpMax )
  {
    this->fields.isQpAlreadyMax = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_8812/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    if ( giftEnt )
    {
      v47 = (System_String_o *)SelfUserGame;
      NumberFormat = LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
      v49 = v27[24];
      v50 = (Il2CppObject *)NumberFormat;
      v51 = LocalizationManager__GetNumberFormat(v49, 0LL);
      v52 = BalanceConfig_TypeInfo;
      v53 = (Il2CppObject *)v51;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v52 = BalanceConfig_TypeInfo;
      }
      v54 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v52->static_fields->QpMax, 0LL);
      v55 = System_String__Format_44569380(v47, v50, v53, v54, 0LL);
      this->fields.dialogMessage = v55;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.dialogMessage,
        (System_Int32_array **)v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      num = giftEnt->fields.num;
      goto LABEL_28;
    }
LABEL_30:
    sub_B52A5C(SelfUserGame, v26);
  }
  if ( !giftEnt )
    goto LABEL_30;
  v30 = v27[24];
  v31 = giftEnt->fields.num;
  if ( (*((_BYTE *)SelfUserGame + 307) & 4) != 0 && !SelfUserGame[56] )
  {
    j_il2cpp_runtime_class_init_0(SelfUserGame);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v31 + v30 > QpMax )
  {
    this->fields.isQpAlreadyMax = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8815/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
    v33 = (Il2CppObject *)LocalizationManager__GetNumberFormat(giftEnt->fields.num, 0LL);
    v34 = LocalizationManager__GetNumberFormat(v27[24], 0LL);
    v35 = BalanceConfig_TypeInfo;
    v36 = (Il2CppObject *)v34;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    v37 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v35->static_fields->QpMax, 0LL);
    v38 = System_String__Format_44569380(v32, v33, v36, v37, 0LL);
    this->fields.dialogMessage = v38;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.dialogMessage,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = BalanceConfig_TypeInfo->static_fields->QpMax - v27[24];
    this->fields.getQpValue = v45;
    num = giftEnt->fields.num - v45;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B050D & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_42B050D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (EventMissionItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == EventMissionItemListViewItem_TypeInfo )
    return (EventMissionItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall EventMissionItemListViewManager__GetReplaceDialogMessage(
        EventMissionItemListViewManager_o *this,
        GiftEntity_o *beforeGiftEntity,
        GiftEntity_o *AfterGiftEntity,
        const MethodInfo *method)
{
  ConstantStrMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  ConstantStrMaster_o *v8; // x21
  System_Int32_array **Value; // x24
  System_Int32_array **v10; // x23
  System_String_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Object_array *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x19
  __int64 v40; // x0
  __int64 v41; // x0

  if ( (byte_42B050F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&StringLiteral_5683/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/);
    sub_B52984(&StringLiteral_5684/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/);
    sub_B52984(&StringLiteral_5751/*"EVENT_REWARD_REPLACE_MSG"*/);
    byte_42B050F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v8 = Master_WarQuestSelectionMaster;
  Value = (System_Int32_array **)ConstantStrMaster__GetValue(
                                   Master_WarQuestSelectionMaster,
                                   (System_String_o *)StringLiteral_5684/*"EVENT_ITEM_REPLACE_EVENT_NAME"*/,
                                   0LL);
  v10 = (System_Int32_array **)ConstantStrMaster__GetValue(v8, (System_String_o *)StringLiteral_5683/*"EVENT_ITEM_REPLACE_BEFORE_EVENT_NAME"*/, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5751/*"EVENT_REWARD_REPLACE_MSG"*/, 0LL);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B5299C(object___TypeInfo, 4LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  v18 = (System_Object_array *)Master_WarQuestSelectionMaster;
  if ( Value )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B52A44(
                                                              Value,
                                                              Master_WarQuestSelectionMaster->klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( !v18->max_length )
    goto LABEL_27;
  v18->m_Items[0] = (Il2CppObject *)Value;
  sub_B52920((BattleServantConfConponent_o *)v18->m_Items, Value, v12, v13, v14, v15, v16, v17);
  if ( v10 )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B52A44(v10, v18->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_27;
  v18->m_Items[1] = (Il2CppObject *)v10;
  sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[1], v10, v19, v20, v21, v22, v23, v24);
  if ( !beforeGiftEntity )
    goto LABEL_26;
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)GiftEntity__GetRewardName(beforeGiftEntity, 0LL);
  v31 = (System_Int32_array **)Master_WarQuestSelectionMaster;
  if ( Master_WarQuestSelectionMaster )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B52A44(
                                                              Master_WarQuestSelectionMaster,
                                                              v18->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
    {
LABEL_28:
      v41 = sub_B52A7C(Master_WarQuestSelectionMaster);
      sub_B52A28(v41, 0LL);
    }
  }
  if ( v18->max_length <= 2 )
    goto LABEL_27;
  v18->m_Items[2] = (Il2CppObject *)v31;
  sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  if ( !AfterGiftEntity )
LABEL_26:
    sub_B52A5C(Master_WarQuestSelectionMaster, v7);
  Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)GiftEntity__GetRewardName(AfterGiftEntity, 0LL);
  v38 = (System_Int32_array **)Master_WarQuestSelectionMaster;
  if ( Master_WarQuestSelectionMaster )
  {
    Master_WarQuestSelectionMaster = (ConstantStrMaster_o *)sub_B52A44(
                                                              Master_WarQuestSelectionMaster,
                                                              v18->obj.klass->_1.element_class);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
  }
  if ( v18->max_length <= 3 )
  {
LABEL_27:
    v40 = sub_B52A88(Master_WarQuestSelectionMaster);
    sub_B52A28(v40, 0LL);
  }
  v18->m_Items[3] = (Il2CppObject *)v38;
  sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  return System_String__Format_44647040(v11, v18, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewManager__GetVoiceAssetName(
        EventMissionItemListViewManager_o *this,
        System_String_array *afterActionVals,
        const MethodInfo *method)
{
  signed int max_length; // w8
  System_String_o **p_webView; // x20
  signed int v6; // w21
  System_String_o *result; // x0
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x9
  __int64 v11; // x0
  EventMissionItemListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42B0517 & 1) == 0 )
  {
    sub_B52984(&EventRewardRootComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (EventMissionItemListViewManager_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0517 = 1;
  }
  if ( !afterActionVals || (max_length = afterActionVals->max_length, max_length < 2) )
  {
    p_webView = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_webView;
  }
  p_webView = (System_String_o **)&StringLiteral_1/*""*/;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
    {
      v11 = sub_B52A88(this);
      sub_B52A28(v11, 0LL);
    }
    this = (EventMissionItemListViewManager_o *)System_Int32__Parse(afterActionVals->m_Items[v6], 0LL);
    if ( (_DWORD)this == 800 )
      break;
    max_length = afterActionVals->max_length;
    v6 += 2;
    if ( v6 >= max_length )
      return *p_webView;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.basePanel) == 0LL )
    sub_B52A5C(Instance, v9);
  v10 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[v10 - 1] == EventRewardRootComponent_TypeInfo )
  {
    p_webView = (System_String_o **)&Instance[14].fields.webView;
    return *p_webView;
  }
  v12 = (EventMissionItemListViewManager_o *)sub_B52D50(Instance);
  EventMissionItemListViewManager__AcceptReward(v12, v13);
  return result;
}


void __fastcall EventMissionItemListViewManager__ModifyItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8
  DataManager_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  MissionListViewItem_o *current; // x22
  __int64 v11; // x10
  __int64 MissionId; // x0
  __int64 v13; // x1
  struct EventMissionEntity_o *v14; // x8
  int32_t v15; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v17; // x1
  struct ListViewObject_o *v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B051E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B051E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.isEndEvent && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       Instance,
                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      sub_B52A5C(Instance, v4);
    }
    v7 = Instance;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v20,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = (MissionListViewItem_o *)v20.fields.current;
      if ( !v20.fields.current
        || (v11 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11)
        || (EventMissionItemListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v11 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B52A5C(v8, v9);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v20.fields.current, 0LL);
      v14 = this->fields.missionToRecieve;
      if ( !v14 )
        sub_B52A5C(MissionId, v13);
      v15 = MissionId;
      if ( (_DWORD)MissionId == v14->fields.id )
      {
        if ( !byte_42ADD1C )
        {
          MissionId = sub_B52984(&EventRewardSaveData_TypeInfo);
          byte_42ADD1C = 1;
        }
        EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v15;
        if ( !v7 )
          sub_B52A5C(MissionId, v13);
        MissionListViewItem__ModifyItem(current, LODWORD(v7->fields.lookup) == 5, 0LL);
      }
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v18 = current->fields.viewObject;
        if ( !v18 )
          sub_B52A5C(0LL, v17);
        ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v18->klass->vtable._5_SetItem.method)(
          v18,
          current,
          v18->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall EventMissionItemListViewManager__MoveEaseScroll(
        EventMissionItemListViewManager_o *this,
        int32_t index,
        System_Action_o *onFinish,
        EventMissionActionInfo_o *eventMissionActionInfo,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *Item; // x0
  __int64 v10; // x1
  ListViewItem_o *v11; // x22
  UnityEngine_Object_o *viewObject; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v14; // x3
  System_Collections_IEnumerator_o *v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B0509 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0509 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Item = EventMissionItemListViewManager__GetItem(this, index, (const MethodInfo *)onFinish);
  if ( !Item )
    goto LABEL_18;
  v11 = (ListViewItem_o *)Item;
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
        &v16,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v16,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
      {
        if ( (ListViewItem_o *)v16.fields.current == v11 )
        {
          viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject((ListViewManager_o *)this, v11, 0LL);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v16,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
      v15 = EventMissionItemListViewManager__SetPreviousFilter(this, v11->fields.sortIndex, onFinish, v14);
    }
    else
    {
      v15 = EventMissionItemListViewManager__MoveEaseScroll_IE(this, v11->fields.sortIndex, onFinish, v14);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
  }
  else
  {
LABEL_18:
    if ( !onFinish )
      sub_B52A5C(Item, v10);
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

  if ( (byte_42B050B & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo);
    byte_42B050B = 1;
  }
  v7 = sub_B52A54(EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_TypeInfo);
  EventMissionItemListViewManager__MoveEaseScroll_IE_d__40___ctor(
    (EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventMissionItemListViewManager__OnChangeAlphaAnim(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionItemListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  __int64 v6; // x22

  if ( (byte_42B0521 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_42B0521 = 1;
  }
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      ObjectList = EventMissionItemListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      ObjectList = (System_Collections_Generic_List_EventMissionItemListViewObject__o *)ObjectList->fields._items->m_Items[v6];
      if ( !ObjectList )
        break;
      EventMissionItemListViewObject__OnChangeAlphaAnim((EventMissionItemListViewObject_o *)ObjectList, v4);
      if ( (int)++v6 >= size )
        return;
    }
LABEL_12:
    sub_B52A5C(ObjectList, v4);
  }
}


void __fastcall EventMissionItemListViewManager__OnClickFilterList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_42B0524 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0524 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 4 )
    this->fields.filterStatus = dword_327C4D0[filterStatus];
  EventMissionItemListViewManager__setList(this, v3);
}


void __fastcall EventMissionItemListViewManager__OnClickListView(
        EventMissionItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  EventMissionItemListViewItem_o *EventMissionEntity; // x0
  MissionListViewItem_o *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x10
  System_Int32_array **Item; // x0
  MissionListViewItem_o **v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct EventMissionEntity_o *eventMissionEnt; // x8
  GiftEntity_o *IsRewardQp; // x0
  const MethodInfo *v25; // x2
  GiftMaster_o *v26; // x22
  GiftEntity_o *v27; // x22
  GiftEntity_array *giftEnts; // x19
  GiftEntity_o *IconGiftEntity; // x0
  GiftEntity_o *v30; // x21
  WebViewManager_o *Instance; // x19
  const MethodInfo *v32; // x3
  System_String_o *ReplaceDialogMessage; // x21
  System_Action_o *v34; // x22
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  EventMissionEntity_o *v37; // x1
  const MethodInfo *v38; // x2

  if ( (byte_42B050E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager_OnClickListView__);
    sub_B52984(&EventMissionItemListViewObject_TypeInfo);
    sub_B52984(&MissionInfoMaker_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__);
    sub_B52984(&EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B050E = 1;
  }
  v5 = sub_B52A54(EventMissionItemListViewManager___c__DisplayClass45_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass45_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass45_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_43;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( !this->fields.isClickListViewEnabled )
    return;
  if ( !obj )
    goto LABEL_43;
  v14 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14 )
    goto LABEL_43;
  if ( (EventMissionItemListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != EventMissionItemListViewObject_TypeInfo )
    goto LABEL_43;
  Item = (System_Int32_array **)EventMissionItemListViewObject__GetItem(
                                  (EventMissionItemListViewObject_o *)obj,
                                  (const MethodInfo *)v7);
  *(_QWORD *)(v5 + 24) = Item;
  v16 = (MissionListViewItem_o **)(v5 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), Item, v17, v18, v19, v20, v21, v22);
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  EventMissionEntity = *(EventMissionItemListViewItem_o **)(v5 + 24);
  if ( !EventMissionEntity )
    goto LABEL_43;
  EventMissionEntity = (EventMissionItemListViewItem_o *)((__int64 (__fastcall *)(EventMissionItemListViewItem_o *, void *))EventMissionEntity->klass->vtable._8_get_IsShowRewardInfo.method)(
                                                           EventMissionEntity,
                                                           EventMissionEntity->klass[1]._1.image);
  v7 = *v16;
  if ( ((unsigned __int8)EventMissionEntity & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_43;
    eventMissionEnt = v7->fields.eventMissionEnt;
    if ( !eventMissionEnt )
      goto LABEL_43;
    if ( ((v7->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1)) == 0 )
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, v7, 0LL);
      return;
    }
  }
  else if ( !v7 )
  {
    goto LABEL_43;
  }
  if ( v7->fields.progStatus == 3 )
  {
    if ( this->fields.filterStatus == 1 )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v16, 0LL);
      if ( !EventMissionEntity )
        goto LABEL_43;
      this->fields.tempSelectDispNo = EventMissionEntity->fields.sortValue0;
      v7 = *v16;
      if ( !*v16 )
        goto LABEL_43;
    }
    if ( EventMissionItemListViewItem__GetIsRewardQp((EventMissionItemListViewItem_o *)v7, (const MethodInfo *)v7) )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)*v16;
      if ( !*v16 )
        goto LABEL_43;
      IsRewardQp = EventMissionItemListViewItem__GetIsRewardQp(EventMissionEntity, (const MethodInfo *)v7);
      this->fields.isQpMaxAlert = EventMissionItemListViewManager__GetIsQpMaxAlert(this, IsRewardQp, v25);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EventMissionEntity = (EventMissionItemListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !*v16
      || (v26 = (GiftMaster_o *)EventMissionEntity,
          (EventMissionEntity = (EventMissionItemListViewItem_o *)MissionListViewItem__get_EventMissionEntity(*v16, 0LL)) == 0LL)
      || !v26 )
    {
LABEL_43:
      sub_B52A5C(EventMissionEntity, v7);
    }
    EventMissionEntity = (EventMissionItemListViewItem_o *)GiftMaster__getDataById(
                                                             v26,
                                                             HIDWORD(EventMissionEntity->fields.sortValue2B),
                                                             0LL);
    if ( !EventMissionEntity
      || (v27 = (GiftEntity_o *)EventMissionEntity, !LOBYTE(EventMissionEntity->fields.sortValue1)) )
    {
      EventMissionEntity = (EventMissionItemListViewItem_o *)*v16;
      if ( *v16 )
      {
        v37 = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)EventMissionEntity, 0LL);
        EventMissionItemListViewManager__recieveReward(this, v37, v38);
        return;
      }
      goto LABEL_43;
    }
    if ( !*v16 )
      goto LABEL_43;
    giftEnts = (*v16)->fields.giftEnts;
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(giftEnts, 0LL);
    if ( IconGiftEntity )
    {
      v30 = IconGiftEntity;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      ReplaceDialogMessage = EventMissionItemListViewManager__GetReplaceDialogMessage(
                               (EventMissionItemListViewManager_o *)Instance,
                               v30,
                               v27,
                               v32);
      v34 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v5,
        Method_EventMissionItemListViewManager___c__DisplayClass45_0__OnClickListView_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          ReplaceDialogMessage,
          v34,
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
    v35 = Method_EventMissionItemListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v35 = (_QWORD *)sub_B5298C(Method_EventMissionItemListViewManager_OnClickListView__);
    v36 = (System_Reflection_MethodBase_o *)sub_B52968(v35, v35[3]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 2, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(
        EventMissionItemListViewManager_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x21
  EventMissionItemListViewManager___c_c *v9; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__76_0; // x22
  Il2CppObject *v12; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct EventMissionEntity_o *v20; // x8

  if ( (byte_42B0527 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_GiftEntity___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Func_GiftEntity__bool___ctor__);
    sub_B52984(&System_Func_GiftEntity__bool__TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__);
    sub_B52984(&EventMissionItemListViewManager___c_TypeInfo);
    byte_42B0527 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, missionToRecieve->fields.giftId, 0LL);
  v9 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v9 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__76_0,
      v12,
      Method_EventMissionItemListViewManager___c__OpenCommandAssistLvUpDialog_b__76_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_GiftEntity__bool___ctor__);
    v13 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v13->__9__76_0 = (struct System_Func_GiftEntity__bool__o *)_9__76_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v13->__9__76_0,
      (System_Int32_array **)_9__76_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)GiftListById,
         (System_Func_T__bool__o *)_9__76_0,
         (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)this->fields.commandAssistLvUpDialog;
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (GiftMaster_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommandAssistLvUpDialogComponent___);
      v20 = this->fields.missionToRecieve;
      if ( v20 )
      {
        if ( Master_WarQuestSelectionMaster )
        {
          CommandAssistLvUpDialogComponent__Open(
            (CommandAssistLvUpDialogComponent_o *)Master_WarQuestSelectionMaster,
            this->fields.currentEventId,
            v20->fields.id,
            closeCallback,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
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
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x23
  System_String_o *dialogTitle; // x24
  System_String_o *dialogMessage; // x25
  System_String_o *dialogGetable; // x26
  System_String_o *v16; // x22
  System_Action_o *v17; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *decide; // [xsp+28h] [xbp-58h]

  if ( (byte_42B052A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager_Decide__);
    sub_B52984(&Method_EventMissionItemListViewManager_EndMaxErrorDialog__);
    sub_B52984(&Method_EventMissionItemListViewManager_TransitionToCombineScene__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11857/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_B52984(&StringLiteral_11856/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_B52984(&StringLiteral_11863/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_42B052A = 1;
  }
  this->fields.dialogCallBack = callback;
  sub_B52920(
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
  decide = LocalizationManager__Get((System_String_o *)StringLiteral_11857/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11863/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  dialogTitle = this->fields.dialogTitle;
  dialogMessage = this->fields.dialogMessage;
  dialogGetable = this->fields.dialogGetable;
  v16 = v11;
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EventMissionItemListViewManager_Decide__, 0LL);
  onTransition = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_TransitionToCombineScene__,
    0LL);
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_EventMissionItemListViewManager_EndMaxErrorDialog__, 0LL);
  if ( !qpMaxAlertDialog )
    sub_B52A5C(v20, v21);
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    dialogTitle,
    dialogMessage,
    dialogGetable,
    decide,
    v10,
    v16,
    v17,
    onTransition,
    v19,
    1,
    0LL);
}


void __fastcall EventMissionItemListViewManager__RedisplayEventUI(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B0528 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SceneList_TypeInfo);
    byte_42B0528 = 1;
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
      sub_B52A5C(gameObject, v5);
    }
  }
}


void __fastcall EventMissionItemListViewManager__RefrashListDisp(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionItemListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionItemListViewObject__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x11
  __int64 v9; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v12; // w8
  __int64 v13; // x21
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B0522 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_42B0522 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = EventMissionItemListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v5 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( !v15.fields.current
      || (v8 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (EventMissionItemListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v8 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B52A5C(v6, v7);
    }
    v9 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      if ( (EventMissionItemListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v9 - 1] == EventMissionItemListViewItem_TypeInfo )
        current = v15.fields.current;
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
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_25;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v12 = v5->fields._size;
    if ( v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( v12 <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        ObjectList = (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v5->fields._items->m_Items[v13];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventMissionItemListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v12 = v5->fields._size;
        if ( (int)++v13 >= v12 )
          return;
      }
LABEL_25:
      sub_B52A5C(ObjectList, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewManager__RefrashListDisp_25653016(
        EventMissionItemListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  __int64 v9; // x10
  const MethodInfo *v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v12; // x21
  int v13; // w8
  __int64 v14; // x23
  __int64 v15; // x8
  __int64 v16; // x22
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B0523 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Item__);
    byte_42B0523 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v18,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current
      || (v9 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v18.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
      || (EventMissionItemListViewItem_c *)v18.fields.current->klass->_2.typeHierarchy[v9 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      sub_B52A5C(v6, v7);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v18.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                              this,
                                                                                              v10);
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  v12 = itemList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v13 = itemList->fields._size;
    if ( v13 >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v15 = (__int64)v12->fields._items + 8 * v14;
        v16 = *(_QWORD *)(v15 + 32);
        if ( !v16 )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewObject__GetItem(
                                                                                                    *(EventMissionItemListViewObject_o **)(v15 + 32),
                                                                                                    *(const MethodInfo **)&missionId);
        if ( !itemList )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewItem__get_MissionId(
                                                                                                    (MissionListViewItem_o *)itemList,
                                                                                                    0LL);
        if ( (_DWORD)itemList == missionId )
          itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)(*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v16 + 456LL))(v16, this->fields.isInput, *(_QWORD *)(*(_QWORD *)v16 + 464LL));
        v13 = v12->fields._size;
        if ( (int)++v14 >= v13 )
          return;
      }
LABEL_24:
      sub_B52A5C(itemList, *(_QWORD *)&missionId);
    }
  }
}


void __fastcall EventMissionItemListViewManager__SaveTerminalTransitionInfo(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfo; // x19

  if ( (byte_42B0515 & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B0515 = 1;
  }
  if ( !byte_42B05C4 )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B05C4 = 1;
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct EventMissionItemListViewItem_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B051F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__get_Count__);
    sub_B52984(&StringLiteral_18331/*"ef_mission_extric01"*/);
    sub_B52984(&StringLiteral_20723/*"modifyOpenItem"*/);
    byte_42B051F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionItemListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B52A5C(0LL, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v20,
        ObjectList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__GetEnumerator__);
      v21 = v20;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v21,
               (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v21.fields.current;
        if ( !v21.fields.current )
          sub_B52A5C(v5, v6);
        Item = (MissionListViewItem_o *)EventMissionItemListViewObject__GetItem(
                                          (EventMissionItemListViewObject_o *)v21.fields.current,
                                          v6);
        v10 = (struct EventMissionItemListViewItem_o *)Item;
        if ( !Item )
          sub_B52A5C(0LL, v9);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_42ADD1C )
          {
            sub_B52984(&EventRewardSaveData_TypeInfo);
            byte_42ADD1C = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v10;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v10, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            EventMissionItemListViewManager__getEffect((System_String_o *)StringLiteral_18331/*"ef_mission_extric01"*/, transform, v19);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v21,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMissionItemListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20723/*"modifyOpenItem"*/,
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

  if ( (byte_42B050A & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo);
    byte_42B050A = 1;
  }
  v7 = sub_B52A54(EventMissionItemListViewManager__SetPreviousFilter_d__39_TypeInfo);
  EventMissionItemListViewManager__SetPreviousFilter_d__39___ctor(
    (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
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
    sub_B52A5C(scrollView, enable);
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

  if ( (byte_42B052B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42B052B = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
  EventMissionItemListViewManager__dialogCallback(this, 0, v5);
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

  if ( (byte_42B052E & 1) == 0 )
  {
    sub_B52984(&System_Math_TypeInfo);
    byte_42B052E = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  void *Instance; // x0
  const MethodInfo *targetMissionId; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIdProgressTypeAndActionType; // x0
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct EventMissionEntity_o *v12; // x8
  Il2CppObject *v13; // x22
  EventMissionActionInfo_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int v17; // w21
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__64_1; // x21
  Il2CppObject *v20; // x22
  struct EventMissionItemListViewManager___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x8
  __int64 v30; // x8
  int32_t v31; // w0
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-A8h] BYREF
  int v35[2]; // [xsp+20h] [xbp-90h]
  int v36; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_42B052F & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventMissionActionInfo___ctor__);
    sub_B52984(&System_Comparison_EventMissionActionInfo__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_B52984(&EventMissionActionInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__);
    sub_B52984(&EventMissionItemListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_16344/*"actionAfterCallback"*/);
    byte_42B052F = 1;
  }
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  v36 = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_43;
  EntityListFromIdProgressTypeAndActionType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType((EventMissionActionAddMaster_o *)Instance, missionToRecieve->fields.id, 5, 3, 0LL);
  if ( EntityListFromIdProgressTypeAndActionType && EntityListFromIdProgressTypeAndActionType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      EntityListFromIdProgressTypeAndActionType,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v38 = v34;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v38.fields.current;
      v9 = (EventMissionActionInfo_o *)sub_B52A54(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_26957056(v9, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v3 )
        sub_B52A5C(v10, v11);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v35[0] = 185;
    v36 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v36 = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
    v12 = this->fields.missionToRecieve;
    if ( !v12 )
      goto LABEL_43;
    if ( !Instance )
      goto LABEL_43;
    Instance = EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
                 (EventMissionActionMaster_o *)Instance,
                 v12->fields.id,
                 5,
                 3,
                 0LL);
    if ( !Instance )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v37 = v34;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v13 = v37.fields.current;
      v14 = (EventMissionActionInfo_o *)sub_B52A54(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v14, (EventMissionActionEntity_o *)v13, 0LL);
      if ( !v3 )
        sub_B52A5C(v15, v16);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v35[0] = 185;
    v17 = ++v36;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v17 && v35[v17 - 1] == 185 )
      v36 = v17 - 1;
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
    v20 = (Il2CppObject *)static_fields->__9;
    _9__64_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionActionInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__64_1,
      v20,
      Method_EventMissionItemListViewManager___c__modifyOpenItem_b__64_1__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionActionInfo___ctor__);
    v21 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v21->__9__64_1 = (struct System_Comparison_EventMissionActionInfo__o *)_9__64_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v21->__9__64_1,
      (System_Int32_array **)_9__64_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v3 )
    goto LABEL_43;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v3,
    (System_Comparison_T__o *)_9__64_1,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Sort__);
  size = v3->fields._size;
  if ( size <= 0 )
    goto LABEL_39;
  v29 = v3->fields._items->m_Items[size - 1];
  if ( !v29 || (v30 = *(_QWORD *)&v29->fields.addCount) == 0 )
LABEL_43:
    sub_B52A5C(Instance, targetMissionId);
  if ( !*(_DWORD *)(v30 + 24) )
  {
    v33 = sub_B52A88(Instance);
    sub_B52A28(v33, 0LL);
  }
  v31 = System_Int32__Parse(*(System_String_o **)(v30 + 32), 0LL);
  targetMissionId = (const MethodInfo *)(unsigned int)this->fields.targetMissionId;
  if ( v31 != (_DWORD)targetMissionId )
  {
    EventMissionItemListViewManager__RefrashListDisp_25653016(this, (int32_t)targetMissionId, v32);
    goto LABEL_41;
  }
LABEL_39:
  EventMissionItemListViewManager__RefrashListDisp(this, targetMissionId);
LABEL_41:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16344/*"actionAfterCallback"*/,
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
    sub_B52920(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42B0519 & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewManager__afterReward_d__57_TypeInfo);
    byte_42B0519 = 1;
  }
  v3 = sub_B52A54(EventMissionItemListViewManager__afterReward_d__57_TypeInfo);
  EventMissionItemListViewManager__afterReward_d__57___ctor(
    (EventMissionItemListViewManager__afterReward_d__57_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall EventMissionItemListViewManager__checkAcceptable(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v6; // x8
  int64_t v7; // x20
  int64_t v8; // x21
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w21
  BalanceConfig_c *v17; // x0
  int32_t PresentBoxMax; // w8
  int v19; // w20
  EventMissionItemListViewManager___c_c *v20; // x0
  struct EventMissionItemListViewManager___c_StaticFields *v21; // x8
  System_Action_o *_9__49_0; // x20
  Il2CppObject *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct EventMissionItemListViewManager___c_StaticFields *v30; // x0
  BattleServantConfConponent_o *p__9__49_0; // x0
  __int64 *v32; // x8
  EventMissionItemListViewManager___c_c *v33; // x0
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x8
  Il2CppObject *v35; // x21
  struct EventMissionItemListViewManager___c_StaticFields *v36; // x0

  if ( (byte_42B0511 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__);
    sub_B52984(&EventMissionItemListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_12329/*"SHOW_MSG"*/);
    sub_B52984(&StringLiteral_11224/*"REWARD_ACCEPTABLE"*/);
    byte_42B0511 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_51;
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v6 = this->fields.missionToRecieve;
  if ( !v6 )
    goto LABEL_51;
  if ( v6->fields.rewardType == 1 )
  {
    v7 = Instance;
    if ( !Instance )
      goto LABEL_51;
    if ( Gift__IsServant_28236324(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_51;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_51;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            *(_DWORD *)(v7 + 24),
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_51;
      v8 = Instance;
      if ( SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL) || SvtType__IsStatusUp(*(_DWORD *)(v8 + 84), 0LL) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
        v16 = *(_DWORD *)(Instance + 24);
        v17 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        PresentBoxMax = v17->static_fields->PresentBoxMax;
        if ( PresentBoxMax <= v16 )
        {
          v33 = EventMissionItemListViewManager___c_TypeInfo;
          if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v33 = EventMissionItemListViewManager___c_TypeInfo;
          }
          static_fields = v33->static_fields;
          _9__49_0 = static_fields->__9__49_0;
          if ( !_9__49_0 )
          {
            if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v33);
              static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v35 = (Il2CppObject *)static_fields->__9;
            _9__49_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              _9__49_0,
              v35,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_0__,
              0LL);
            v36 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v36->__9__49_0 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v36->__9__49_0;
            goto LABEL_48;
          }
LABEL_49:
          this->fields.ShowMSG = _9__49_0;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.ShowMSG,
            (System_Int32_array **)_9__49_0,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
          Instance = (int64_t)this->fields.targetFSM;
          if ( Instance )
          {
            v32 = &StringLiteral_12329/*"SHOW_MSG"*/;
            goto LABEL_39;
          }
LABEL_51:
          sub_B52A5C(Instance, v4);
        }
        v19 = *(_DWORD *)(v7 + 28);
        if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          PresentBoxMax = BalanceConfig_TypeInfo->static_fields->PresentBoxMax;
        }
        if ( v19 + v16 > PresentBoxMax )
        {
          v20 = EventMissionItemListViewManager___c_TypeInfo;
          if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
            v20 = EventMissionItemListViewManager___c_TypeInfo;
          }
          v21 = v20->static_fields;
          _9__49_0 = v21->__9__49_1;
          if ( !_9__49_0 )
          {
            if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v21 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            }
            v23 = (Il2CppObject *)v21->__9;
            _9__49_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              _9__49_0,
              v23,
              Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_1__,
              0LL);
            v30 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
            v30->__9__49_1 = _9__49_0;
            p__9__49_0 = (BattleServantConfConponent_o *)&v30->__9__49_1;
LABEL_48:
            sub_B52920(p__9__49_0, (System_Int32_array **)_9__49_0, v24, v25, v26, v27, v28, v29);
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
  v32 = &StringLiteral_11224/*"REWARD_ACCEPTABLE"*/;
LABEL_39:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v32, 0LL);
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

  if ( (byte_42B052C & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    byte_42B052C = 1;
  }
  dialogCallBack = this->fields.dialogCallBack;
  if ( dialogCallBack )
  {
    this->fields.dialogCallBack = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.dialogCallBack,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(dialogCallBack, result, (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
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
  BattleServantConfConponent_o *static_fields; // x0
  AutomatedAction_o *Instance; // x0
  __int64 v12; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v14; // x1
  int32_t filterStatus; // w8
  struct EventMissionEntity_o *v16; // x8

  if ( (byte_42B051C & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_42B051C = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventMissionItemListViewManager_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B52920(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v16 = this->fields.missionToRecieve;
    if ( !v16 || !Instance )
LABEL_13:
      sub_B52A5C(Instance, v12);
    AutomatedAction__SetMissionAction(Instance, v16->fields.id, 5, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventMissionItemListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *transform; // x19
  int v9; // s0
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  if ( (byte_42B051D & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&EventMissionItemListViewManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B051D = 1;
  }
  effectAssetData = EventMissionItemListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL),
        v12 = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL),
        !v12) )
  {
LABEL_12:
    sub_B52A5C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  return v7;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ClippingObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B0506 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0506 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventMissionItemListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)EventMissionItemListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)v3;
}


System_Collections_Generic_List_EventMissionItemListViewObject__o *__fastcall EventMissionItemListViewManager__get_ObjectList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B0505 & 1) == 0 )
  {
    sub_B52984(&Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
    byte_42B0505 = 1;
  }
  return (System_Collections_Generic_List_EventMissionItemListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                (MissionListViewManager_o *)this,
                                                                                (const MethodInfo_1F6F894 *)Method_MissionListViewManager_GetObjectList_EventMissionItemListViewObject___);
}


void __fastcall EventMissionItemListViewManager__loadOpenMissionEffect(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_42B051B & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager_endloadEffect__);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&StringLiteral_5884/*"Effect/EventMission"*/);
    byte_42B051B = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5884/*"Effect/EventMission"*/, v3, 1, 0LL);
}


void __fastcall EventMissionItemListViewManager__missionRewardCallback(
        EventMissionItemListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventMissionItemListViewManager_o *v4; // x19
  __int64 *v5; // x8
  Il2CppObject *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  EventMissionItemListViewManager_o *v13; // x20
  struct ListViewIndicator_o *indicator; // x8
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct ListViewIndicator_o *v22; // x8
  System_Int32_array **klass; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w20
  __int64 v26; // x0

  v4 = this;
  if ( (byte_42B0514 & 1) == 0 )
  {
    sub_B52984(&Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    sub_B52984(&StringLiteral_11164/*"REQUEST_NG"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    this = (EventMissionItemListViewManager_o *)sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42B0514 = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( !System_String__Equals_44555656(result, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    v6 = (Il2CppObject *)System_String__Concat_44570600(
                           (System_String_o *)StringLiteral_15739/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_15976/*"]"*/,
                           0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (EventMissionItemListViewManager_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                  v6,
                                                  (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_EventMissionItemListViewManager_resData___);
    if ( this )
    {
      v13 = this;
      if ( !LODWORD(this->fields.dropObjectList) )
        goto LABEL_23;
      indicator = this->fields.indicator;
      if ( !indicator )
        goto LABEL_22;
      v15 = *(System_Int32_array ***)&indicator->fields.m_CachedPtr;
      v4->fields.getSvtList = (struct GetSvts_array *)v15;
      sub_B52920((BattleServantConfConponent_o *)&v4->fields.getSvtList, v15, v7, v8, v9, v10, v11, v12);
      if ( !LODWORD(v13->fields.dropObjectList) )
      {
LABEL_23:
        v26 = sub_B52A88(this);
        sub_B52A28(v26, 0LL);
      }
      v22 = v13->fields.indicator;
      if ( v22 )
      {
        klass = (System_Int32_array **)v22[1].klass;
        v4->fields.getCommandCodeList = (struct GetCommandCodes_array *)klass;
        sub_B52920((BattleServantConfConponent_o *)&v4->fields.getCommandCodeList, klass, v16, v17, v18, v19, v20, v21);
        missionToRecieve = v4->fields.missionToRecieve;
        if ( missionToRecieve )
        {
          id = missionToRecieve->fields.id;
          if ( !byte_42ADD1C )
          {
            sub_B52984(&EventRewardSaveData_TypeInfo);
            byte_42ADD1C = 1;
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
              v5 = &StringLiteral_11166/*"REQUEST_OK"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_B52A5C(this, result);
  }
  this = (EventMissionItemListViewManager_o *)v4->fields.targetFSM;
  if ( !this )
    goto LABEL_22;
  v5 = &StringLiteral_11164/*"REQUEST_NG"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall EventMissionItemListViewManager__modifyOpenItem(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // x10
  __int64 v8; // x1
  int32_t MissionId; // w21
  MissionListViewItem_o *openTargetItem; // x0
  UnityEngine_Object_o *monitor; // x21
  __int64 v12; // x1
  EventMissionItemListViewObject_o *v13; // x0
  __int64 v14; // x9
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x0
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B0520 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__);
    sub_B52984(&EventMissionItemListViewObject_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0520 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B52A5C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v20,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v20.fields.current;
      if ( !v20.fields.current
        || (v7 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7)
        || (EventMissionItemListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v7 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        sub_B52A5C(v4, v5);
      }
      MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v20.fields.current, 0LL);
      openTargetItem = (MissionListViewItem_o *)this->fields.openTargetItem;
      if ( !openTargetItem )
        sub_B52A5C(0LL, v8);
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
          v13 = (EventMissionItemListViewObject_o *)current[6].monitor;
          if ( !v13 )
            sub_B52A5C(0LL, v12);
          v14 = *(&EventMissionItemListViewObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
            || (EventMissionItemListViewObject_c *)v13->klass->_2.typeHierarchy[v14 - 1] != EventMissionItemListViewObject_TypeInfo )
          {
            v17 = sub_B52D50(v13);
LABEL_31:
            sub_B52A5C(v17, v16);
          }
          EventMissionItemListViewObject__ModifyBoardImage(
            v13,
            (const MethodInfo *)EventMissionItemListViewObject_TypeInfo);
        }
      }
      v15 = (UnityEngine_Object_o *)current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
      {
        v17 = (__int64)current[6].monitor;
        if ( !v17 )
          goto LABEL_31;
        (*(void (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_EventMissionItemListViewManager__modifyOpenItem_b__64_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v18, 0LL);
}


void __fastcall EventMissionItemListViewManager__recieveReward(
        EventMissionItemListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x22
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct EventMissionEntity_o **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_int__o *v21; // x20
  const MethodInfo *v22; // x2
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  struct EventMissionEntity_o *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42B0510 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager_recieveReward__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__);
    sub_B52984(&EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
    sub_B52984(&StringLiteral_8809/*"MISSION_REWARD"*/);
    byte_42B0510 = 1;
  }
  v5 = sub_B52A54(EventMissionItemListViewManager___c__DisplayClass47_0_TypeInfo);
  EventMissionItemListViewManager___c__DisplayClass47_0___ctor(
    (EventMissionItemListViewManager___c__DisplayClass47_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = missionEntity;
  v14 = (struct EventMissionEntity_o **)(v5 + 24);
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)missionEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( this->fields.isQpMaxAlert )
  {
    v21 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v21,
      (Il2CppObject *)v5,
      (intptr_t)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__,
      (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
    EventMissionItemListViewManager__OpenQpMaxAlertDialog(this, v21, v22);
    return;
  }
  v23 = Method_EventMissionItemListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_EventMissionItemListViewManager_recieveReward__ + 75) & 2) != 0 )
    v23 = (_QWORD *)sub_B5298C(Method_EventMissionItemListViewManager_recieveReward__);
  v24 = (System_Reflection_MethodBase_o *)sub_B52968(v23, v23[3]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 8, 0LL);
  v25 = *v14;
  this->fields.missionToRecieve = *v14;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.missionToRecieve,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_10:
    sub_B52A5C(targetFSM, v7);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8809/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall EventMissionItemListViewManager__requestMissionReward(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v4; // x1
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_42B0513 & 1) == 0 )
  {
    sub_B52984(&Method_EventMissionItemListViewManager_missionRewardCallback__);
    sub_B52984(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42B0513 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  MissionNotifyManager__StartPause(Request_WarBoardWallAttackRequest, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventMissionItemListViewManager_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v5,
                                                                  (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B52A5C(Request_WarBoardWallAttackRequest, v4);
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

  if ( (byte_42B051A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_42B051A = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_B52A5C(Instance, v4);
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

  if ( (byte_42B0526 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0526 = 1;
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
      sub_B52A5C(v7, v6);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
      v7,
      v7->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventMissionItemListViewManager__setList(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v15; // w2
  bool v16; // w2
  bool v17; // w2
  bool v18; // w2
  int32_t filterStatus; // w19

  if ( (byte_42B0525 & 1) == 0 )
  {
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&StringLiteral_17164/*"btn_txt_completed"*/);
    sub_B52984(&StringLiteral_17197/*"btn_txt_receipt"*/);
    sub_B52984(&StringLiteral_17196/*"btn_txt_progress"*/);
    sub_B52984(&StringLiteral_17180/*"btn_txt_notopen"*/);
    sub_B52984(&StringLiteral_17147/*"btn_txt_all"*/);
    byte_42B0525 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999772(v4, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  switch ( this->fields.filterStatus )
  {
    case 0:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17147/*"btn_txt_all"*/, v13);
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
      v15 = 1;
      goto LABEL_31;
    case 1:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17197/*"btn_txt_receipt"*/, v13);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v16 = 0;
      goto LABEL_21;
    case 2:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17196/*"btn_txt_progress"*/, v13);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_36;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v16 = 1;
LABEL_21:
      ListViewSort__SetFilter(operationSortInfo, 14, v16, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v18 = 0;
LABEL_27:
      ListViewSort__SetFilter(operationSortInfo, 15, v18, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v17 = 0;
LABEL_29:
      ListViewSort__SetFilter(operationSortInfo, 16, v17, 0LL);
      operationSortInfo = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_36;
      v15 = 0;
LABEL_31:
      ListViewSort__SetFilter(operationSortInfo, 17, v15, 0LL);
LABEL_32:
      operationSortInfo = this->fields.baseSortInfo;
      if ( !operationSortInfo )
LABEL_36:
        sub_B52A5C(operationSortInfo, v12);
      ListViewSort__Set(operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_42ADD1B )
      {
        sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42ADD1B = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = filterStatus;
      return;
    case 3:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17180/*"btn_txt_notopen"*/, v13);
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
      v18 = 1;
      goto LABEL_27;
    case 4:
      EventMissionItemListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17164/*"btn_txt_completed"*/, v13);
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
      v17 = 1;
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
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  signed __int64 size; // x22
  const MethodInfo *v8; // x2
  int MissionId_k__BackingField; // w20
  unsigned __int64 v10; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x24
  ListViewItem_o *v12; // x8
  __int64 v13; // x11

  v4 = this;
  if ( (byte_42B050C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventMissionItemListViewManager_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B050C = 1;
  }
  if ( !byte_42B05C3 )
  {
    this = (EventMissionItemListViewManager_o *)sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B05C3 = 1;
  }
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  if ( static_fields->_FilterId_k__BackingField )
    return;
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  size = itemList->fields._size;
  if ( byte_42B05C4 )
  {
    if ( isRaid )
      goto LABEL_9;
  }
  else
  {
    this = (EventMissionItemListViewManager_o *)sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B05C4 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
    if ( isRaid )
    {
LABEL_9:
      this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
      if ( !this )
        goto LABEL_31;
      this = (EventMissionItemListViewManager_o *)EventMissionConditionMaster__getTodayFirstMissionId(
                                                    (EventMissionConditionMaster_o *)this,
                                                    v4->fields.currentEventId,
                                                    v8);
      MissionId_k__BackingField = (int)this;
      goto LABEL_14;
    }
  }
  MissionId_k__BackingField = static_fields->_MissionId_k__BackingField;
LABEL_14:
  if ( (int)size >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = v4->fields.itemList;
      if ( !v11 )
        break;
      if ( v10 >= (unsigned int)v11->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v12 = v11->fields._items->m_Items[v10];
      if ( v12
        && (v13 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v12->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
      {
        if ( (EventMissionItemListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] == EventMissionItemListViewItem_TypeInfo )
          this = (EventMissionItemListViewManager_o *)v11->fields._items->m_Items[v10];
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
      if ( (__int64)++v10 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B52A5C(this, isRaid);
  }
LABEL_29:
  LODWORD(v10) = 0;
LABEL_30:
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v10, 0LL);
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
  int v13; // w8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x23
  unsigned __int64 v16; // x21
  ListViewItem_o *v17; // x8
  __int64 v18; // x11
  __int64 v19; // x11
  MissionListViewItem_o *v20; // x0
  EventRewardSceneEntity_array *EntityFromIdAndEventType; // x0
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4
  System_Action_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  v12 = this;
  if ( (byte_42B0508 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__);
    sub_B52984(&Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (EventMissionItemListViewManager_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0508 = 1;
  }
  v12->fields.targetMissionId = missionID;
  if ( callback )
  {
    v12->fields.actionCallback = callback;
    sub_B52920(
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
        v13 = 1056964608;
      else
        v13 = 1069547520;
      LODWORD(v12->fields.endEffectTime) = v13;
    }
  }
  itemList = v12->fields.itemList;
  if ( !itemList )
LABEL_37:
    sub_B52A5C(this, currentMissionActionInfo);
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v17 = itemList->fields._items->m_Items[v16];
      if ( !v17 )
        goto LABEL_37;
      v18 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (EventMissionItemListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] != EventMissionItemListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v19 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) >= (unsigned int)v19 )
        v20 = (EventMissionItemListViewItem_c *)v17->klass->_2.typeHierarchy[v19 - 1] == EventMissionItemListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v16]
            : 0LL;
      else
        v20 = 0LL;
      this = (EventMissionItemListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v20, 0LL);
      if ( !this )
        goto LABEL_37;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_31;
      if ( (__int64)++v16 >= size )
        break;
      itemList = v12->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  LODWORD(v16) = 0;
LABEL_31:
  this = (EventMissionItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  this = (EventMissionItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this )
    goto LABEL_37;
  EntityFromIdAndEventType = EventRewardSceneMaster__getEntityFromIdAndEventType(
                               (EventRewardSceneMaster_o *)this,
                               v12->fields.currentEventId,
                               4,
                               0LL);
  if ( EntityFromIdAndEventType && *(_QWORD *)&EntityFromIdAndEventType->max_length )
  {
    v22 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_0__,
      0LL);
    EventMissionItemListViewManager__MoveEaseScroll(v12, v16, v22, eventMissionActionInfo, v23);
  }
  else
  {
    v24 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v12,
      Method_EventMissionItemListViewManager__setNextMissionInfo_b__37_1__,
      0LL);
    v12->fields.callbackAfterScroll = v24;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->fields.callbackAfterScroll,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    ListViewManager__MoveTopItem((ListViewManager_o *)v12, v16, 1, 0LL);
  }
}


void __fastcall EventMissionItemListViewManager__unAcceptableDlg(
        EventMissionItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0

  if ( (byte_42B0512 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5529/*"END_NOTICE"*/);
    byte_42B0512 = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B52A5C(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5529/*"END_NOTICE"*/, 0LL);
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
      sub_B52A5C(this, method);
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
  sub_B52920(p__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EventMissionItemListViewManager__MoveEaseScroll_IE_d__40_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v5; // x0
  int32_t v6; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  signed __int64 size; // x22
  System_Collections_Generic_List_int__o *v9; // x20
  unsigned __int64 i; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x25
  ListViewItem_o *v12; // x8
  __int64 v13; // x11
  __int64 v14; // x11
  MissionListViewItem_o *v15; // x0
  System_Func_int__int__int__o *v16; // x21
  int32_t v17; // w0
  int32_t v18; // w21
  int32_t v19; // w1
  float openItemTime; // s8
  float endEffectTime; // s9
  UnityEngine_WaitForSeconds_o *v22; // x19
  Il2CppObject **p__2__current; // x20

  v2 = this;
  if ( (byte_42AD92E & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Aggregate_int___);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__);
    sub_B52984(&Method_System_Func_int__int__int___ctor__);
    sub_B52984(&System_Func_int__int__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD92E = 1;
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
        v22 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v22, openItemTime + endEffectTime, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v22;
        p__2__current = &v2->fields.__2__current;
        sub_B52920(p__2__current);
        *((_DWORD *)p__2__current - 2) = 2;
        LOBYTE(v6) = 1;
        return v6;
      }
      goto LABEL_35;
    }
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        v5 = EventMissionItemListViewManager__MoveEaseScroll_IE(_4__this, v2->fields.index, v2->fields.onFinished, 0LL);
        v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                    (UnityEngine_MonoBehaviour_o *)_4__this,
                                                    v5,
                                                    0LL);
        sub_B52920(&v2->fields.__2__current);
        LOBYTE(v6) = 1;
        v2->fields.__1__state = 1;
        return v6;
      }
LABEL_35:
      sub_B52A5C(this, method);
    }
LABEL_33:
    LOBYTE(v6) = 0;
    return v6;
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
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v11 = _4__this->fields.itemSortList;
    if ( !v11 )
      goto LABEL_35;
    if ( i >= (unsigned int)v11->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v12 = v11->fields._items->m_Items[i];
    if ( !v12 )
      goto LABEL_35;
    v13 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (EventMissionItemListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] != EventMissionItemListViewItem_TypeInfo )
    {
      goto LABEL_35;
    }
    v14 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v12->klass->_2.bitflags2 + 1) >= (unsigned int)v14 )
      v15 = (EventMissionItemListViewItem_c *)v12->klass->_2.typeHierarchy[v14 - 1] == EventMissionItemListViewItem_TypeInfo
          ? (MissionListViewItem_o *)v11->fields._items->m_Items[i]
          : 0LL;
    else
      v15 = 0LL;
    this = (EventMissionItemListViewManager__SetPreviousFilter_d__39_o *)MissionListViewItem__get_EventMissionEntity(
                                                                           v15,
                                                                           0LL);
    if ( !this || !v9 )
      goto LABEL_35;
    System_Collections_Generic_List_int___Add(
      v9,
      (int32_t)this->fields.__4__this,
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  v16 = (System_Func_int__int__int__o *)sub_B52A54(System_Func_int__int__int__TypeInfo);
  System_Func_int__int__int____ctor(
    v16,
    (Il2CppObject *)_4__this,
    Method_EventMissionItemListViewManager__SetPreviousFilter_b__39_0__,
    (const MethodInfo_2BD21E4 *)Method_System_Func_int__int__int___ctor__);
  v17 = System_Linq_Enumerable__Aggregate_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (System_Func_TSource__TSource__TSource__o *)v16,
          (const MethodInfo_1A51DF0 *)Method_System_Linq_Enumerable_Aggregate_int___);
  _4__this->fields.tempSelectDispNo = 0;
  v18 = v17;
  v6 = System_Collections_Generic_List_int___IndexOf(
         v9,
         v17,
         (const MethodInfo_3058028 *)Method_System_Collections_Generic_List_int__IndexOf__);
  if ( v6 )
  {
    v19 = v18 - 1;
    if ( v6 == (_DWORD)size - 1 )
      ListViewManager__MoveCenterItem((ListViewManager_o *)_4__this, v19, 0, 0, 0.0, 0LL);
    else
      ListViewManager__MoveTopItem((ListViewManager_o *)_4__this, v19, 0, 0LL);
    goto LABEL_33;
  }
  return v6;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EventMissionItemListViewManager__SetPreviousFilter_d__39_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42AD922 & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewManager___c_TypeInfo);
    byte_42AD922 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventMissionItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionItemListViewManager___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return gift->fields.type == 14;
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_0(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x19
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20
  EventMissionItemListViewManager___c_c *v6; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_2; // x22
  System_String_o *v9; // x21
  Il2CppObject *v10; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v11; // x0

  if ( (byte_42AD923 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__);
    sub_B52984(&EventMissionItemListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_8800/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD923 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8800/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v5 = v3;
  v6 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v6 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__49_2 = static_fields->__9__49_2;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_2 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__49_2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__49_2, v10, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_2__, 0LL);
    v11 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v11->__9__49_2 = _9__49_2;
    sub_B52920(&v11->__9__49_2);
  }
  if ( !Instance )
    sub_B52A5C(v3, v4);
  CommonUI__OpenNotificationDialog(Instance, v9, v5, _9__49_2, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_1(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x19
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20
  EventMissionItemListViewManager___c_c *v6; // x8
  struct EventMissionItemListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_3; // x22
  System_String_o *v9; // x21
  Il2CppObject *v10; // x23
  struct EventMissionItemListViewManager___c_StaticFields *v11; // x0

  if ( (byte_42AD925 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__);
    sub_B52984(&EventMissionItemListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_8801/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD925 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8801/*"MISSION_ACTION_PRESENT_BOX_OVER_WARNING"*/, 0LL);
  v5 = v3;
  v6 = EventMissionItemListViewManager___c_TypeInfo;
  if ( (BYTE3(EventMissionItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewManager___c_TypeInfo);
    v6 = EventMissionItemListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__49_3 = static_fields->__9__49_3;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__49_3 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__49_3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__49_3, v10, Method_EventMissionItemListViewManager___c__checkAcceptable_b__49_3__, 0LL);
    v11 = EventMissionItemListViewManager___c_TypeInfo->static_fields;
    v11->__9__49_3 = _9__49_3;
    sub_B52920(&v11->__9__49_3);
  }
  if ( !Instance )
    sub_B52A5C(v3, v4);
  CommonUI__OpenNotificationDialog(Instance, v9, v5, _9__49_3, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_2(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD924 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD924 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall EventMissionItemListViewManager___c___checkAcceptable_b__49_3(
        EventMissionItemListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD926 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD926 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


int32_t __fastcall EventMissionItemListViewManager___c___modifyOpenItem_b__64_1(
        EventMissionItemListViewManager___c_o *this,
        EventMissionActionInfo_o *a,
        EventMissionActionInfo_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
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
    sub_B52A5C(selectItem, method);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PlayMakerFSM_o *targetFSM; // x0
  __int64 v8; // x1
  struct EventMissionItemListViewManager_o *_4__this; // x8
  struct EventMissionItemListViewManager_o *v10; // x8

  if ( (byte_42AD927 & 1) == 0 )
  {
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__);
    sub_B52984(&StringLiteral_8809/*"MISSION_REWARD"*/);
    byte_42AD927 = 1;
  }
  if ( result == 1 )
  {
    v5 = Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__;
    if ( (*((_BYTE *)Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5298C(Method_EventMissionItemListViewManager___c__DisplayClass47_0__recieveReward_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (_4__this->fields.missionToRecieve = this->fields.missionEntity,
          sub_B52920(&_4__this->fields.missionToRecieve),
          (v10 = this->fields.__4__this) == 0LL)
      || (targetFSM = v10->fields.targetFSM) == 0LL )
    {
      sub_B52A5C(targetFSM, v8);
    }
    PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8809/*"MISSION_REWARD"*/, 0LL);
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

  if ( (byte_42AD92A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD92A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B52A5C(Instance, v4);
  v6 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__3(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  EventMissionItemListViewManager___c__DisplayClass56_0_o *v2; // x19
  struct EventMissionItemListViewManager_o *_4__this; // x8
  EventMissionItemListViewManager_o *v4; // x19
  System_Collections_IEnumerator_o *v5; // x1

  v2 = this;
  if ( (byte_42AD928 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42AD928 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_12;
  CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)this, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (EventMissionItemListViewManager___c__DisplayClass56_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL), (v4 = v2->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(this, method);
  }
  v5 = EventMissionItemListViewManager__afterReward(v4, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)v4, v5, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_0___AcceptReward_b__5(
        EventMissionItemListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  EventMissionItemListViewManager_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_42AD929 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD929 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B52A5C(Instance, v4);
  v6 = EventMissionItemListViewManager__afterReward(_4__this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0LL);
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
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v4; // x8
  struct EventMissionItemListViewManager_o *v5; // x8
  System_Text_StringBuilder_o *v6; // x20
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v7; // x8
  System_String_o *v8; // x21
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v11; // x1
  System_String_o *v12; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v13; // x8
  System_String_o *v14; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v15; // x8
  System_String_o *v16; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v17; // x8
  System_String_o *v18; // x21
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v19; // x8
  struct EventMissionItemListViewManager_o *v20; // x8
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v21; // x8
  struct EventMissionItemListViewManager_o *v22; // x8
  System_String_o *v23; // x21
  Il2CppObject *NumberFormat; // x0
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *v25; // x8
  struct EventMissionItemListViewManager_o *v26; // x8
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x21
  _QWORD **v30; // x23
  __int64 v31; // x22
  __int16 v32; // w8
  __int64 v33; // x22
  __int64 v34; // x22
  __int64 v35; // x22
  CommonUI_o *v36; // x21
  EventMissionItemListViewManager___c__DisplayClass56_1_o *v37; // x22
  Il2CppObject *v38; // x24
  MissionRewardGetDialog_ClickDelegate_o *monitor; // x23
  System_String_o *v40; // x20
  Il2CppClass *klass; // x8

  v2 = this;
  if ( (byte_42AD92B & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_object___);
    sub_B52984(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__);
    sub_B52984(&StringLiteral_8813/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_B52984(&StringLiteral_8799/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_B52984(&StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/);
    sub_B52984(&StringLiteral_8804/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/);
    sub_B52984(&StringLiteral_31/*"\n \n"*/);
    sub_B52984(&StringLiteral_32/*"\n \n "*/);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)sub_B52984(&StringLiteral_8814/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    byte_42AD92B = 1;
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
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
      CS___8__locals1 = v2->fields.CS___8__locals1;
      if ( CS___8__locals1 )
      {
        _4__this = (UnityEngine_MonoBehaviour_o *)CS___8__locals1->fields.__4__this;
        if ( _4__this )
        {
          v11 = EventMissionItemListViewManager__afterReward(CS___8__locals1->fields.__4__this, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_35611808(_4__this, v11, 0LL);
          return;
        }
      }
    }
    goto LABEL_80;
  }
  v4 = v2->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_80;
  v5 = v4->fields.__4__this;
  if ( !v5 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v5->fields.touchBlockObj;
  if ( !this )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v6 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0LL);
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v7->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_80;
  v8 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                            this,
                            this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v8, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemDialogNum >= 2 )
    {
      if ( !v8 )
        goto LABEL_80;
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__Substring_44632052(
                                                                          v8,
                                                                          0,
                                                                          v8->fields.m_stringLength - 2,
                                                                          0LL);
      if ( !v6 )
        goto LABEL_80;
      System_Text_StringBuilder__Append_42994048(v6, (System_String_o *)this, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8799/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__Append_42994048(
                                                                          v6,
                                                                          v12,
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
                                                                          (System_String_o *)StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/,
                                                                          0LL);
      if ( !v6 )
        goto LABEL_80;
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                          v6,
                                                                          (System_String_o *)this,
                                                                          (Il2CppObject *)v8,
                                                                          0LL);
    }
    v13 = v2->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v13->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_80;
    v14 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v14, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__Append_42994048(
                                                                          v6,
                                                                          (System_String_o *)StringLiteral_32/*"\n \n "*/,
                                                                          0LL);
  }
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_80;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v15->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_80;
  v16 = (System_String_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_String__IsNullOrEmpty(v16, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8804/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX"*/,
                                                                        0LL);
    v17 = v2->fields.CS___8__locals1;
    if ( !v17 )
      goto LABEL_80;
    v18 = (System_String_o *)this;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)v17->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)((__int64 (__fastcall *)(EventMissionItemListViewManager___c__DisplayClass56_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                        this,
                                                                        this->klass[1]._1.image);
    if ( !v6 )
      goto LABEL_80;
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                        v6,
                                                                        v18,
                                                                        (Il2CppObject *)this,
                                                                        0LL);
  }
  v19 = v2->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_80;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_80;
  if ( v20->fields.isQpMaxAlert )
  {
    if ( !v6 )
      goto LABEL_80;
    if ( v20->fields.isQpAlreadyMax )
    {
      System_Text_StringBuilder__set_Length(v6, 0, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_8813/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                          0LL);
      v21 = v2->fields.CS___8__locals1;
      if ( v21 )
      {
        v22 = v21->fields.__4__this;
        if ( v22 )
        {
          v23 = (System_String_o *)this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22->fields.overQpValue, 0LL);
          System_Text_StringBuilder__AppendFormat(v6, v23, NumberFormat, 0LL);
          goto LABEL_72;
        }
      }
LABEL_80:
      sub_B52A5C(this, method);
    }
    System_Text_StringBuilder__Append_42994048(v6, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_8814/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                        0LL);
    v25 = v2->fields.CS___8__locals1;
    if ( !v25 )
      goto LABEL_80;
    v26 = v25->fields.__4__this;
    if ( !v26 )
      goto LABEL_80;
    v27 = (System_String_o *)this;
    v28 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26->fields.overQpValue, 0LL);
    v29 = System_String__Format(v27, v28, 0LL);
    v30 = (_QWORD **)Method_System_Array_Empty_object___;
    v31 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v32 = *(_WORD *)(v31 + 306);
    if ( (v32 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v32 = *(_WORD *)(v31 + 306);
    }
    if ( (v32 & 0x400) != 0 )
    {
      v33 = *v30[6];
      if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
        sub_AEB684(*v30[6]);
      if ( !*(_DWORD *)(v33 + 224) )
      {
        v34 = *v30[6];
        if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
          sub_AEB684(*v30[6]);
        j_il2cpp_runtime_class_init_0(v34);
      }
    }
    v35 = *v30[6];
    if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
      sub_AEB684(*v30[6]);
    System_Text_StringBuilder__AppendFormat_43000796(v6, v29, **(System_Object_array ***)(v35 + 184), 0LL);
  }
LABEL_72:
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v2->fields.giftList )
    goto LABEL_80;
  v36 = (CommonUI_o *)this;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v2->fields.giftList,
                                                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v6 )
    goto LABEL_80;
  v37 = this;
  this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                                                                      v6,
                                                                      v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v38 = (Il2CppObject *)v2->fields.CS___8__locals1;
  if ( !v38 )
    goto LABEL_80;
  monitor = (MissionRewardGetDialog_ClickDelegate_o *)v38[2].monitor;
  v40 = (System_String_o *)this;
  if ( !monitor )
  {
    monitor = (MissionRewardGetDialog_ClickDelegate_o *)sub_B52A54(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      monitor,
      v38,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__3__,
      0LL);
    v38[2].monitor = monitor;
    sub_B52920(&v38[2].monitor);
    v38 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( !v38 )
      goto LABEL_80;
  }
  klass = v38[1].klass;
  if ( !klass || !v36 )
    goto LABEL_80;
  CommonUI__OpenMissionRewardGetDialog(v36, (GiftEntity_array *)v37, v40, monitor, BYTE1(klass->vtable[11].method), 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__1(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  MissionListViewManager_o *v4; // x20
  System_Action_o *klass; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_42AD92C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (EventMissionItemListViewManager___c__DisplayClass56_1_o *)sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__);
    byte_42AD92C = 1;
  }
  monitor = v2[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  v4 = (MissionListViewManager_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v2[3].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_EventMissionItemListViewManager___c__DisplayClass56_1__AcceptReward_b__4__,
      0LL);
    v2[3].klass = (Il2CppClass *)klass;
    sub_B52920(&v2[3]);
  }
  if ( !v4 )
LABEL_8:
    sub_B52A5C(this, method);
  MissionListViewManager__StartSvtListGetEffect(v4, 0, klass, 0LL);
}


void __fastcall EventMissionItemListViewManager___c__DisplayClass56_1___AcceptReward_b__4(
        EventMissionItemListViewManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventMissionItemListViewManager___c__DisplayClass56_0_o *CS___8__locals1; // x8
  struct EventMissionItemListViewManager_o *_4__this; // x8
  CommonUI_o *v7; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x23
  System_Action_o *klass; // x22
  System_String_o *v11; // x19
  System_String_o *v12; // x21

  if ( (byte_42AD92D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__);
    sub_B52984(&StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD92D = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v7 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v8, (Il2CppObject *)this->fields.sendName, 0LL);
  v9 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_15;
  klass = (System_Action_o *)v9[3].klass;
  v11 = (System_String_o *)Instance;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v9,
      Method_EventMissionItemListViewManager___c__DisplayClass56_0__AcceptReward_b__5__,
      0LL);
    v9[3].klass = (Il2CppClass *)klass;
    sub_B52920(&v9[3]);
  }
  if ( !v7 )
LABEL_15:
    sub_B52A5C(Instance, v4);
  CommonUI__OpenNotificationDialog(v7, v12, v11, klass, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  int32_t _1__state; // w8
  struct EventMissionItemListViewManager_o *_4__this; // x20
  __int64 v5; // x21
  AutomatedAction_o *Instance; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x22
  System_Func_bool__o *v9; // x20
  UnityEngine_WaitUntil_o *v10; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42AD92F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__);
    sub_B52984(&Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__);
    sub_B52984(&EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo);
    sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    sub_B52984(&StringLiteral_5524/*"END_EFFECT"*/);
    byte_42AD92F = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    if ( !_4__this )
      goto LABEL_13;
    Instance = (AutomatedAction_o *)_4__this->fields.targetFSM;
    if ( !Instance )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5524/*"END_EFFECT"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = sub_B52A54(EventMissionItemListViewManager___c__DisplayClass57_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( v5 )
    {
      *(_BYTE *)(v5 + 16) = 0;
      v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)v5,
        Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__0__,
        0LL);
      if ( _4__this )
      {
        EventMissionItemListViewManager__OpenCommandAssistLvUpDialog(_4__this, v8, 0LL);
        v9 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventMissionItemListViewManager___c__DisplayClass57_0__afterReward_b__1__,
          (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
        v10 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
        this->fields.__2__current = (Il2CppObject *)v10;
        p__2__current = &this->fields.__2__current;
        sub_B52920(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_13:
    sub_B52A5C(Instance, v7);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EventMissionItemListViewManager__afterReward_d__57_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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