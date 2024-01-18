void __fastcall CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4187F6E & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewManager_TypeInfo, method);
    byte_4187F6E = 1;
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
  __int64 v36; // x1
  __int64 v37; // x22
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v53; // x20
  const MethodInfo *v54; // x3
  struct EventMissionEntity_o *v55; // x8
  __int64 v56; // x8
  __int64 v57; // x20
  unsigned __int64 v58; // x23
  System_Int32_array **v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  WarBoardSquareIndexData_array *v66; // x19
  __int64 v67; // x8
  char *v68; // x0
  System_Text_StringBuilder_o *v69; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Text_StringBuilder_o *v76; // x0
  System_Text_StringBuilder_o *v77; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x19
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  Il2CppObject **v91; // x21
  WarBoardSquareIndexData_array *v92; // x8
  signed int max_length; // w28
  int v94; // w22
  int v95; // w9
  __int64 v96; // x27
  WarBoardSquareIndexData_o *v97; // x8
  WarBoardSquareIndexData_o *v98; // x8
  WarBoardSquareIndexData_o *v99; // x8
  WarBoardSquareIndexData_o *v100; // x8
  System_Int32_array **SetRewardData; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x1
  struct GetSvts_array *getSvtList; // x8
  SummonAssetManager_o *v116; // x21
  System_Action_o *v117; // x22
  System_Collections_Generic_List_GiftEntity__c **v118; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v119; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v120; // x22
  __int64 v121; // x27
  bool IsCountableWithPlus; // w0
  Il2CppObject **v123; // x8
  Il2CppObject *v124; // x25
  System_Text_StringBuilder_o *v125; // x24
  int getQpValue; // w19
  __int64 v127; // x8
  System_Collections_Generic_List_GiftEntity__c **v128; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v129; // x20
  System_String_o *v130; // x26
  Il2CppObject *v131; // x0
  __int64 v132; // x8
  System_Text_StringBuilder_o *v133; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v134; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v135; // x0
  il2cpp_array_size_t v136; // w23
  __int64 v137; // x8
  __int64 v138; // x8
  ServantEntity_o *v139; // x24
  _BOOL4 IsCombineMaterial; // w25
  Il2CppObject *v141; // x8
  System_String_o *v142; // x0
  __int64 v143; // x8
  Il2CppObject *v144; // x24
  Il2CppObject *v145; // x0
  Il2CppObject *v146; // x24
  System_Text_StringBuilder_o *monitor; // x25
  __int64 v148; // x8
  __int64 v149; // x8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v150; // x21
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Action_o *v157; // x21
  WebViewManager_o *Instance; // x0
  EventRewardSetEntity_o *v159; // x20
  CommonUI_o *v160; // x23
  System_String_o *v161; // x0
  System_String_o *v162; // x0
  Il2CppObject *v163; // x24
  System_String_o *v164; // x21
  MissionRewardGetDialog_ClickDelegate_o *v165; // x22
  __int64 v166; // x0
  __int64 v167; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v168; // [xsp+0h] [xbp-90h]
  __int64 v169; // [xsp+8h] [xbp-88h]
  CompleteMissionListViewManager_o *v170; // [xsp+10h] [xbp-80h]
  int v171; // [xsp+1Ch] [xbp-74h] BYREF
  WarEntity_o *v172; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v173; // [xsp+28h] [xbp-68h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  WarBoardSquareIndexData_array *array; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4187F5D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_System_Array_Resize_GiftEntity___, v5);
    sub_B2C35C(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_CompleteMissionMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor___67310480, v18);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v24);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__, v25);
    sub_B2C35C(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo, v26);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__, v27);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__, v28);
    sub_B2C35C(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_8750/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v30);
    sub_B2C35C(&StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, v31);
    sub_B2C35C(&StringLiteral_23663/*"{0}×{1:#,0}"*/, v32);
    sub_B2C35C(&StringLiteral_23705/*"×"*/, v33);
    sub_B2C35C(&StringLiteral_8745/*"MISSION_ACTION_ITEM_FORMAT"*/, v34);
    sub_B2C35C(&StringLiteral_30/*"\n "*/, v35);
    sub_B2C35C(&StringLiteral_23956/*"＋"*/, v36);
    byte_4187F5D = 1;
  }
  array = 0LL;
  v173 = 0LL;
  entity = 0LL;
  v172 = 0LL;
  v37 = sub_B2C42C(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass49_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass49_0_o *)v37,
    0LL);
  if ( !v37 )
    goto LABEL_154;
  *(_QWORD *)(v37 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)this, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v37 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v37 + 24), (System_Int32_array **)callback, v46, v47, v48, v49, v50, v51);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_154;
  v53 = (GiftMaster_o *)Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  array = (WarBoardSquareIndexData_array *)GiftMaster__GetGiftListById(
                                             (GiftMaster_o *)Master_WarQuestSelectionMaster,
                                             missionToRecieve->fields.giftId,
                                             0LL);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v55 = this->fields.missionToRecieve;
  if ( !v55 || !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  Master_WarQuestSelectionMaster = CompleteMissionMaster__TryGetEntityFromObjectId(
                                     (CompleteMissionMaster_o *)Master_WarQuestSelectionMaster,
                                     &entity,
                                     v55->fields.id,
                                     v54);
  *(_BYTE *)(v37 + 48) = Master_WarQuestSelectionMaster & 1;
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_154;
    Master_WarQuestSelectionMaster = (__int64)GiftMaster__GetGiftListById(v53, entity->fields.giftId, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_154;
    v56 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
    v57 = Master_WarQuestSelectionMaster;
    if ( (int)v56 >= 1 )
    {
      v58 = 0LL;
      while ( v58 < (unsigned int)v56 )
      {
        if ( !array )
          goto LABEL_154;
        v59 = *(System_Int32_array ***)(v57 + 32 + 8 * v58);
        System_Array__Resize_WarBoardSquareIndexData_(
          &array,
          array->max_length + 1,
          (const MethodInfo_23C235C *)Method_System_Array_Resize_GiftEntity___);
        v66 = array;
        if ( !array )
          goto LABEL_154;
        if ( v59 )
        {
          Master_WarQuestSelectionMaster = sub_B2C41C(v59, array->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
          {
            v167 = sub_B2C454(0LL);
            sub_B2C400(v167, 0LL);
          }
        }
        v67 = *(_QWORD *)&v66->max_length;
        if ( !(_DWORD)v67 )
          break;
        v68 = (char *)v66 + (((v67 << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v68 + 4) = v59;
        sub_B2C2F8((BattleServantConfConponent_o *)(v68 + 32), v59, v60, v61, v62, v63, v64, v65);
        LODWORD(v56) = *(_DWORD *)(v57 + 24);
        if ( (__int64)++v58 >= (int)v56 )
          goto LABEL_23;
      }
LABEL_155:
      v166 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v166, 0LL);
    }
  }
LABEL_23:
  v69 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v69, 0LL);
  *(_QWORD *)(v37 + 40) = v69;
  sub_B2C2F8((BattleServantConfConponent_o *)(v37 + 40), (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
  v76 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v76, 0LL);
  v77 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v77, 0LL);
  *(_QWORD *)(v37 + 32) = v77;
  sub_B2C2F8((BattleServantConfConponent_o *)(v37 + 32), (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
  v84 = sub_B2C42C(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass49_1___ctor(
    (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v84,
    0LL);
  if ( !v84 )
    goto LABEL_154;
  *(_QWORD *)(v84 + 48) = v37;
  v91 = (Il2CppObject **)(v84 + 48);
  sub_B2C2F8((BattleServantConfConponent_o *)(v84 + 48), (System_Int32_array **)v37, v85, v86, v87, v88, v89, v90);
  Master_WarQuestSelectionMaster = (__int64)this->fields.missionToRecieve;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  if ( *(_DWORD *)(Master_WarQuestSelectionMaster + 80) == 1 )
  {
    Master_WarQuestSelectionMaster = (__int64)this->fields.touchBlockObj;
    if ( Master_WarQuestSelectionMaster )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
      *(_DWORD *)(v84 + 24) = 0;
      v92 = array;
      if ( array )
      {
        max_length = array->max_length;
        v170 = this;
        if ( max_length >= 1 )
        {
          v94 = 1;
          while ( 1 )
          {
            v95 = v94 - 1;
            if ( v94 - 1 >= v92->max_length )
              goto LABEL_155;
            v96 = v95;
            v97 = v92->m_Items[v95];
            if ( !v97 )
              goto LABEL_154;
            Master_WarQuestSelectionMaster = Gift__IsServant_27324084(*(&v97->fields.squareIndex + 1), 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            {
              if ( !array )
                goto LABEL_154;
              if ( (unsigned int)v96 >= array->max_length )
                goto LABEL_155;
              v98 = array->m_Items[v96];
              if ( !v98 )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = Gift__IsCommandCode_27324480(*(&v98->fields.squareIndex + 1), 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                if ( !array )
                  goto LABEL_154;
                if ( (unsigned int)v96 >= array->max_length )
                  goto LABEL_155;
                v99 = array->m_Items[v96];
                if ( !v99 )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = Gift__IsCostumeRelease(*(&v99->fields.squareIndex + 1), 0LL);
                if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                {
                  Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( !array )
                    goto LABEL_154;
                  if ( (unsigned int)v96 >= array->max_length )
                    goto LABEL_155;
                  v100 = array->m_Items[v96];
                  if ( !v100 || !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                     &v173,
                                                     (int32_t)v100->fields.effectIds,
                                                     (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                  {
                    Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !v173 || !Master_WarQuestSelectionMaster )
                      goto LABEL_154;
                    Master_WarQuestSelectionMaster = CommonUI__IsGetItemEffect(
                                                       (CommonUI_o *)Master_WarQuestSelectionMaster,
                                                       v173->fields.id,
                                                       0LL);
                    if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                      ++*(_DWORD *)(v84 + 24);
                  }
                }
              }
            }
            if ( v94 >= max_length )
              break;
            v92 = array;
            ++v94;
            if ( !array )
              goto LABEL_154;
          }
        }
        v118 = &System_Collections_Generic_List_GiftEntity__TypeInfo;
        v169 = v84;
        v119 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v119,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        v120 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v120,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( max_length >= 1 )
        {
          v121 = 4LL;
          v168 = v120;
          do
          {
            if ( !array )
              goto LABEL_154;
            v136 = v121 - 4;
            if ( (unsigned int)(v121 - 4) >= array->max_length )
              goto LABEL_155;
            v137 = *((_QWORD *)&array->obj.klass + v121);
            if ( !v137 )
              goto LABEL_154;
            Master_WarQuestSelectionMaster = Gift__IsServant_27324084(*(_DWORD *)(v137 + 20), 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Master_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !array )
                goto LABEL_154;
              if ( v136 >= array->max_length )
                goto LABEL_155;
              v138 = *((_QWORD *)&array->obj.klass + v121);
              if ( !v138 )
                goto LABEL_154;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                          *(_DWORD *)(v138 + 24),
                                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              v139 = (ServantEntity_o *)Master_WarQuestSelectionMaster;
              IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_WarQuestSelectionMaster + 84), 0LL);
              Master_WarQuestSelectionMaster = SvtType__IsStatusUp(v139->fields.type, 0LL);
              v141 = *v91;
              if ( !*v91 )
                goto LABEL_154;
              if ( ((IsCombineMaterial | (unsigned int)Master_WarQuestSelectionMaster) & 1) != 0
                || LOBYTE(v141[3].klass) )
              {
                Master_WarQuestSelectionMaster = (__int64)v141[2].monitor;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                v142 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster
                                                                                     + 360LL))(
                                            Master_WarQuestSelectionMaster,
                                            *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 368LL));
                Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(v142, 0LL);
                if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                {
                  if ( !*v91 )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = (__int64)(*v91)[2].monitor;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  System_Text_StringBuilder__Append_42408700(
                    (System_Text_StringBuilder_o *)Master_WarQuestSelectionMaster,
                    (System_String_o *)StringLiteral_30/*"\n "*/,
                    0LL);
                }
                Master_WarQuestSelectionMaster = (__int64)ServantEntity__getName(v139, -1, -1, 0LL);
                if ( !array )
                  goto LABEL_154;
                if ( v136 >= array->max_length )
                  goto LABEL_155;
                v143 = *((_QWORD *)&array->obj.klass + v121);
                if ( !v143 )
                  goto LABEL_154;
                v144 = (Il2CppObject *)Master_WarQuestSelectionMaster;
                v171 = *(_DWORD *)(v143 + 28);
                v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
                Master_WarQuestSelectionMaster = (__int64)System_String__Format_44301068(
                                                            (System_String_o *)StringLiteral_23663/*"{0}×{1:#,0}"*/,
                                                            v144,
                                                            v145,
                                                            0LL);
                if ( !*v91 )
                  goto LABEL_154;
                v146 = (Il2CppObject *)Master_WarQuestSelectionMaster;
                monitor = (System_Text_StringBuilder_o *)(*v91)[2].monitor;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_8745/*"MISSION_ACTION_ITEM_FORMAT"*/,
                                                            0LL);
                if ( !monitor )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat(
                                                            monitor,
                                                            (System_String_o *)Master_WarQuestSelectionMaster,
                                                            v146,
                                                            0LL);
                if ( !array )
                  goto LABEL_154;
                if ( v136 >= array->max_length )
                  goto LABEL_155;
                if ( !v120 )
                  goto LABEL_154;
                v134 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&array->obj.klass + v121);
                v135 = v120;
LABEL_125:
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v135,
                  v134,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
              }
            }
            else
            {
              if ( !array )
                goto LABEL_154;
              if ( v136 >= array->max_length )
                goto LABEL_155;
              v148 = *((_QWORD *)&array->obj.klass + v121);
              if ( !v148 )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = Gift__IsItem_27324028(*(_DWORD *)(v148 + 20), 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) != 0 )
              {
                Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Master_WarQuestSelectionMaster,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
                if ( !array )
                  goto LABEL_154;
                if ( v136 >= array->max_length )
                  goto LABEL_155;
                v149 = *((_QWORD *)&array->obj.klass + v121);
                if ( !v149 || !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                   &v172,
                                                   *(_DWORD *)(v149 + 24),
                                                   (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                {
                  Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v172 || !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = CommonUI__IsGetItemEffect(
                                                     (CommonUI_o *)Master_WarQuestSelectionMaster,
                                                     v172->fields.id,
                                                     0LL);
                  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                  {
                    if ( !array )
                      goto LABEL_154;
                    if ( v136 >= array->max_length )
                      goto LABEL_155;
                    Master_WarQuestSelectionMaster = *((_QWORD *)&array->obj.klass + v121);
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_154;
                    Master_WarQuestSelectionMaster = GiftEntity__isQp(
                                                       (GiftEntity_o *)Master_WarQuestSelectionMaster,
                                                       0LL);
                    if ( (Master_WarQuestSelectionMaster & 1) == 0 || !v170->fields.isQpAlreadyMax )
                    {
                      if ( !v172 )
                        goto LABEL_154;
                      IsCountableWithPlus = ItemType__IsCountableWithPlus(v172->fields.bannerId, 0LL);
                      v123 = (Il2CppObject **)&StringLiteral_23956/*"＋"*/;
                      if ( !IsCountableWithPlus )
                        v123 = (Il2CppObject **)&StringLiteral_23705/*"×"*/;
                      v124 = *v123;
                      v125 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
                      System_Text_StringBuilder___ctor(v125, 0LL);
                      if ( !v172 )
                        goto LABEL_154;
                      if ( !v125 )
                        goto LABEL_154;
                      Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42408700(
                                                                  v125,
                                                                  v172->fields.age,
                                                                  0LL);
                      if ( !array )
                        goto LABEL_154;
                      if ( v136 >= array->max_length )
                        goto LABEL_155;
                      Master_WarQuestSelectionMaster = *((_QWORD *)&array->obj.klass + v121);
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_154;
                      Master_WarQuestSelectionMaster = GiftEntity__isQp(
                                                         (GiftEntity_o *)Master_WarQuestSelectionMaster,
                                                         0LL);
                      if ( (Master_WarQuestSelectionMaster & 1) == 0
                        || !v170->fields.isQpMaxAlert
                        || (getQpValue = v170->fields.getQpValue) == 0 )
                      {
                        if ( !array )
                          goto LABEL_154;
                        if ( v136 >= array->max_length )
                          goto LABEL_155;
                        v127 = *((_QWORD *)&array->obj.klass + v121);
                        if ( !v127 )
                          goto LABEL_154;
                        getQpValue = *(_DWORD *)(v127 + 28);
                      }
                      v128 = v118;
                      v129 = v119;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v130 = LocalizationManager__Get((System_String_o *)StringLiteral_8750/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      v171 = getQpValue;
                      v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
                      Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat_42415252(
                                                                  v125,
                                                                  v130,
                                                                  v124,
                                                                  v131,
                                                                  0LL);
                      v84 = v169;
                      v132 = *(_QWORD *)(v169 + 48);
                      if ( !v132 )
                        goto LABEL_154;
                      v133 = *(System_Text_StringBuilder_o **)(v132 + 32);
                      v119 = v129;
                      if ( *(int *)(v169 + 24) >= 2 )
                      {
                        v118 = v128;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_8745/*"MISSION_ACTION_ITEM_FORMAT"*/,
                                                                    0LL);
                        v120 = v168;
                        if ( !v133 )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat(
                                                                    v133,
                                                                    (System_String_o *)Master_WarQuestSelectionMaster,
                                                                    (Il2CppObject *)v125,
                                                                    0LL);
                        if ( !*v91 )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)(*v91)[2].klass;
                        if ( !Master_WarQuestSelectionMaster )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42408700(
                                                                    (System_Text_StringBuilder_o *)Master_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_30/*"\n "*/,
                                                                    0LL);
                      }
                      else
                      {
                        Master_WarQuestSelectionMaster = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v125->klass->vtable._3_ToString.method)(
                                                           v125,
                                                           v125->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                        if ( !v133 )
                          goto LABEL_154;
                        v118 = v128;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42408700(
                                                                    v133,
                                                                    (System_String_o *)Master_WarQuestSelectionMaster,
                                                                    0LL);
                        v120 = v168;
                      }
                      if ( !array )
                        goto LABEL_154;
                      if ( v136 >= array->max_length )
                        goto LABEL_155;
                      if ( !v119 )
                        goto LABEL_154;
                      v134 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&array->obj.klass + v121);
                      v135 = v119;
                      goto LABEL_125;
                    }
                  }
                }
              }
            }
            ++v121;
          }
          while ( (int)v121 - 4 < max_length );
        }
        v150 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(*v118);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v150,
          (System_Collections_Generic_IEnumerable_T__o *)v119,
          (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_GiftEntity___ctor___67310480);
        *(_QWORD *)(v84 + 16) = v150;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v84 + 16),
          (System_Int32_array **)v150,
          v151,
          v152,
          v153,
          v154,
          v155,
          v156);
        Master_WarQuestSelectionMaster = *(_QWORD *)(v84 + 16);
        if ( Master_WarQuestSelectionMaster )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Master_WarQuestSelectionMaster,
            (System_Collections_Generic_IEnumerable_T__o *)v120,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
          v157 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v157,
            (Il2CppObject *)v84,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
            0LL);
          this = v170;
          MissionListViewManager__StartItemGetEffectAction(
            (MissionListViewManager_o *)v170,
            (GiftEntity_array *)array,
            0,
            v157,
            0LL);
          goto LABEL_153;
        }
      }
    }
LABEL_154:
    sub_B2C434(Master_WarQuestSelectionMaster, v39);
  }
  SetRewardData = (System_Int32_array **)EventMissionEntity__getSetRewardData(
                                           (EventMissionEntity_o *)Master_WarQuestSelectionMaster,
                                           0LL);
  *(_QWORD *)(v84 + 32) = SetRewardData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v84 + 32), SetRewardData, v102, v103, v104, v105, v106, v107);
  if ( !*(_QWORD *)(v84 + 32) )
    goto LABEL_154;
  v114 = *(System_Int32_array ***)(*(_QWORD *)(v84 + 32) + 32LL);
  *(_QWORD *)(v84 + 40) = v114;
  sub_B2C2F8((BattleServantConfConponent_o *)(v84 + 40), v114, v108, v109, v110, v111, v112, v113);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList || !*(_QWORD *)&getSvtList->max_length )
  {
    if ( *v91 )
    {
      ActionExtensions__Call((System_Action_o *)(*v91)[1].monitor, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v159 = *(EventRewardSetEntity_o **)(v84 + 32);
      v160 = (CommonUI_o *)Instance;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v161 = LocalizationManager__Get((System_String_o *)StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v162 = System_String__Format(v161, *(Il2CppObject **)(v84 + 40), 0LL);
      v163 = *v91;
      v164 = v162;
      v165 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B2C42C(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v165,
        v163,
        Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
        0LL);
      if ( v160 )
      {
        CommonUI__OpenMissionRewardGetDialog_18040212(v160, v159, v164, v165, 0LL);
        goto LABEL_153;
      }
    }
    goto LABEL_154;
  }
  Master_WarQuestSelectionMaster = (__int64)this->fields.touchBlockObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  v116 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v117 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v117,
    (Il2CppObject *)v84,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
    0LL);
  if ( !v116 )
    goto LABEL_154;
  SummonAssetManager__LoadSummonAssets(v116, v117, 0LL);
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
  __int64 v19; // x21
  void *SelfUserGame; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  void **v28; // x24
  GiftEntity_o *QpGiftEntity; // x0
  GiftEntity_o *v30; // x22
  struct System_String_o *Empty; // x25
  _DWORD *v32; // x23
  int32_t v33; // w19
  BalanceConfig_c *v34; // x0
  int32_t QpMax; // w8
  int v36; // w19
  int32_t num; // w25
  System_String_o *v38; // x24
  Il2CppObject *NumberFormat; // x25
  System_String_o *v40; // x0
  BalanceConfig_c *v41; // x8
  Il2CppObject *v42; // x26
  Il2CppObject *v43; // x0
  System_String_o *v44; // x24
  int32_t v45; // w8
  int32_t v46; // w8
  System_String_o *v47; // x24
  System_String_o *v48; // x0
  int32_t v49; // w8
  Il2CppObject *v50; // x23
  System_String_o *v51; // x0
  BalanceConfig_c *v52; // x8
  Il2CppObject *v53; // x25
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  System_String_o *v58; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v60; // x20
  System_Action_o *v61; // x26
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *onTransition; // x21
  Il2CppObject *v64; // x27
  struct CompleteMissionListViewManager___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_o *getable; // [xsp+28h] [xbp-58h]

  if ( (byte_4187F6D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, missionEntity);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&string_TypeInfo, v9);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, v10);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__, v11);
    sub_B2C35C(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo, v12);
    sub_B2C35C(&CompleteMissionListViewManager___c_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_8759/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v14);
    sub_B2C35C(&StringLiteral_8762/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v15);
    sub_B2C35C(&StringLiteral_11783/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v16);
    sub_B2C35C(&StringLiteral_11782/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v17);
    sub_B2C35C(&StringLiteral_11789/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v18);
    byte_4187F6D = 1;
  }
  v19 = sub_B2C42C(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass68_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass68_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_44;
  *(_QWORD *)(v19 + 16) = decideCallback;
  v28 = (void **)(v19 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v19 + 16),
    (System_Int32_array **)decideCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !missionEntity )
    goto LABEL_44;
  QpGiftEntity = EventMissionEntity__GetQpGiftEntity(missionEntity, 0LL);
  if ( !QpGiftEntity )
  {
LABEL_22:
    SelfUserGame = *v28;
    if ( *v28 )
    {
      System_Action__Invoke((System_Action_o *)SelfUserGame, 0LL);
      return;
    }
LABEL_44:
    sub_B2C434(SelfUserGame, v21);
  }
  v30 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_44;
  v32 = SelfUserGame;
  v33 = *((_DWORD *)SelfUserGame + 24);
  v34 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  getable = Empty;
  QpMax = v34->static_fields->QpMax;
  if ( v33 < QpMax )
  {
    v36 = v32[24];
    num = v30->fields.num;
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( num + v36 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8762/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v30->fields.num, 0LL);
      v40 = LocalizationManager__GetNumberFormat(v32[24], 0LL);
      v41 = BalanceConfig_TypeInfo;
      v42 = (Il2CppObject *)v40;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v41 = BalanceConfig_TypeInfo;
      }
      v43 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v41->static_fields->QpMax, 0LL);
      v44 = System_String__Format_44306596(v38, NumberFormat, v42, v43, 0LL);
      v45 = BalanceConfig_TypeInfo->static_fields->QpMax - v32[24];
      this->fields.getQpValue = v45;
      v46 = v30->fields.num - v45;
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
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8759/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
  v48 = LocalizationManager__GetNumberFormat(v30->fields.num, 0LL);
  v49 = v32[24];
  v50 = (Il2CppObject *)v48;
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
  v55 = System_String__Format_44306596(v47, v50, v53, v54, 0LL);
  v46 = v30->fields.num;
  v44 = v55;
LABEL_31:
  this->fields.overQpValue = v46;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11783/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11782/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v60 = v58;
  v61 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v19,
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
    v64 = (Il2CppObject *)static_fields->__9;
    onTransition = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(onTransition, v64, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0LL);
    v65 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v65->__9__68_1 = onTransition;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v65->__9__68_1,
      (System_Int32_array **)onTransition,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_44;
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    getable,
    v44,
    getable,
    v56,
    v57,
    v60,
    v61,
    onTransition,
    0LL,
    1,
    0LL);
}


void __fastcall CompleteMissionListViewManager__CreateList(
        CompleteMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppObject *current; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  CompleteMissionListViewItem_o *v30; // x23
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  __int64 v33; // x1
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  __int64 *v36; // x8
  void *ObjectList; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int v47; // w8
  void *v48; // x19
  unsigned __int64 v49; // x21
  signed __int64 v50; // x22
  UnityEngine_Object_o *v51; // x20
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187F52 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, missionList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_B2C35C(&StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, v21);
    byte_4187F52 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v52,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v53 = v52;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v53.fields.current;
      itemList = this->fields.itemList;
      v30 = (CompleteMissionListViewItem_o *)sub_B2C42C(CompleteMissionListViewItem_TypeInfo);
      CompleteMissionListViewItem___ctor(v30, (EventMissionEntity_o *)current, type, v31);
      if ( !itemList )
        sub_B2C434(v32, v33);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_4188043 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, sort);
    byte_4188043 = 1;
  }
  if ( EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = &StringLiteral_8753/*"MISSION_EMPTY_TXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = &StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/;
  }
  ObjectList = LocalizationManager__Get((System_String_o *)*v36, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_42;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
  if ( !byte_4188043 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v39);
    byte_4188043 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v39);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.reDispAct,
      (System_Int32_array **)redispCallBack,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v40);
  if ( !ObjectList )
LABEL_42:
    sub_B2C434(ObjectList, v38);
  v47 = *((_DWORD *)ObjectList + 6);
  v48 = ObjectList;
  if ( v47 >= 1 )
  {
    v49 = 0LL;
    v50 = v47;
    while ( 1 )
    {
      if ( v49 >= (unsigned int)v47 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v51 = *(UnityEngine_Object_o **)(*((_QWORD *)v48 + 2) + 8 * v49 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ObjectList = (void *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_42;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)v51, 0LL);
      }
      if ( (__int64)++v49 >= v50 )
        break;
      v47 = *((_DWORD *)v48 + 6);
    }
  }
}


void __fastcall CompleteMissionListViewManager__DestroyList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CompleteMissionListViewItem_o *__fastcall CompleteMissionListViewManager__GetItem(
        CompleteMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4187F55 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4187F55 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (CompleteMissionListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == CompleteMissionListViewItem_TypeInfo )
    return (CompleteMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall CompleteMissionListViewManager__ModifyItem(
        CompleteMissionListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  WarEntity_o *Entity; // x20
  struct System_String_o *emptyMessage; // x8
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventMissionEntity_o *v19; // x8
  DataManager_o *v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  MissionListViewItem_o *current; // x22
  __int64 v24; // x10
  __int64 MissionId; // x0
  __int64 v26; // x1
  struct EventMissionEntity_o *v27; // x8
  int32_t v28; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v30; // x1
  struct ListViewObject_o *v31; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187F64 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4187F64 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_44;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         Instance,
                                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v19 = this->fields.missionToRecieve;
      if ( v19 )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int64_t)Instance,
                                        v19->fields.id,
                                        0LL);
          if ( this->fields.itemList )
          {
            v20 = Instance;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              &v32,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v33 = v32;
            while ( 1 )
            {
              v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v33,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v21 )
                break;
              current = (MissionListViewItem_o *)v33.fields.current;
              if ( !v33.fields.current
                || (v24 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v33.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v24)
                || (CompleteMissionListViewItem_c *)v33.fields.current->klass->_2.typeHierarchy[v24 - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_B2C434(v21, v22);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v33.fields.current, 0LL);
              v27 = this->fields.missionToRecieve;
              if ( !v27 )
                sub_B2C434(MissionId, v26);
              v28 = MissionId;
              if ( (_DWORD)MissionId == v27->fields.id )
              {
                if ( !byte_4185D95 )
                {
                  MissionId = sub_B2C35C(&EventRewardSaveData_TypeInfo, v26);
                  byte_4185D95 = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v28;
                if ( !v20 )
                  sub_B2C434(MissionId, v26);
                MissionListViewItem__ModifyItem(current, LODWORD(v20->fields.lookup) == 5, 0LL);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v31 = current->fields.viewObject;
                if ( !v31 )
                  sub_B2C434(0LL, v30);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v31->klass->vtable._5_SetItem.method)(
                  v31,
                  current,
                  v31->klass->vtable._6_SetItem.methodPtr);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, Il2CppMethodPointer))current->klass->vtable._6_CheckMissionCond.method)(
                  current,
                  current->klass->vtable._7_SetGiftData.methodPtr);
            }
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v33,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B2C434(Instance, v14);
  }
}


void __fastcall CompleteMissionListViewManager__OnChangeAlphaAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_CompleteMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  __int64 v7; // x22

  if ( (byte_4187F6C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v3);
    byte_4187F6C = 1;
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v5);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      ObjectList = (System_Collections_Generic_List_CompleteMissionListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v5);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B2C434(ObjectList, v5);
  }
}


void __fastcall CompleteMissionListViewManager__OnClickFilterList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_4187F58 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187F58 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_31A2728[filterStatus];
  CompleteMissionListViewManager__setList(this, v3);
}


void __fastcall CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v9; // x10
  PlayMakerFSM_o *v10; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v12; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4187F56 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewObject_TypeInfo, obj);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15398/*"Wait_Action"*/, v6);
    byte_4187F56 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_21;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15398/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (v9 = *(&CompleteMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v9 - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem(
                                        (CompleteMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_21:
    sub_B2C434(targetFSM, obj);
  }
  v10 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)(*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
                                                       targetFSM,
                                                       targetFSM->klass[1]._1.this_arg.data);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v10,
                                                             v12),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v10[5].monitor) )
  {
    if ( LODWORD(v10[4].fields.addEventHandlers) == 3
      && (v10[3].fields.m_CachedPtr != 1 || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v12)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v10, 0LL);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v14);
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
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v10, 0LL);
  }
}


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

  if ( (byte_4187F5E & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo, rewards);
    byte_4187F5E = 1;
  }
  v9 = sub_B2C42C(CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
  CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50___ctor(
    (CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = rewards;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)rewards, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 56) = rewardDetail;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_CompleteMissionListViewObject__o *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_CompleteMissionListViewObject__o *v11; // x20
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

  if ( (byte_4187F57 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v8);
    byte_4187F57 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, method);
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
      || (v14 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v21.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
      || (CompleteMissionListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v14 - 1] != CompleteMissionListViewItem_TypeInfo )
    {
      sub_B2C434(v12, v13);
    }
    v15 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
    {
      if ( (CompleteMissionListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v15 - 1] == CompleteMissionListViewItem_TypeInfo )
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
        ObjectList = (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v11->fields._items->m_Items[v19];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_CompleteMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
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


void __fastcall CompleteMissionListViewManager__SetOpenItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v16; // x1
  struct CompleteMissionListViewItem_o *v17; // x21
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v27; // x2
  float openItemTime; // s8
  System_Action_o *v29; // x20
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187F65 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CompleteMissionListViewManager_modifyOpenItem__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v8);
    sub_B2C35C(&StringLiteral_18197/*"ef_mission_extric01"*/, v9);
    byte_4187F65 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B2C434(0LL, v11);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v30,
        ObjectList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v31 = v30;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v31,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v12 )
          break;
        current = v31.fields.current;
        if ( !v31.fields.current )
          sub_B2C434(v12, v13);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v31.fields.current,
                                          v13);
        v17 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_B2C434(0LL, v16);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4185D95 )
          {
            sub_B2C35C(&EventRewardSaveData_TypeInfo, v18);
            byte_4185D95 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v17;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v17,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v17, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_18197/*"ef_mission_extric01"*/, transform, v27);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v31,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0LL);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v29, 0LL);
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
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)svts,
    (System_String_array **)cmds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_B2C2F8(
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
    sub_B2C434(v16, v17);
  id = missionToRecieve->fields.id;
  if ( !byte_4185D95 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v17);
    byte_4185D95 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_4187F69 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo, method);
    byte_4187F69 = 1;
  }
  v3 = sub_B2C42C(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
  CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64___ctor(
    (CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float endEffectTime; // s8
  System_Action_o *v5; // x20

  if ( (byte_4187F6F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CompleteMissionListViewManager_actionAfterCallback__, v3);
    byte_4187F6F = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v5, 0LL);
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
    sub_B2C2F8(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


void __fastcall CompleteMissionListViewManager__afterReward(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4187F5F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    sub_B2C35C(&StringLiteral_5482/*"END_EFFECT"*/, v3);
    byte_4187F5F = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_B2C434(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5482/*"END_EFFECT"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w20
  struct ListViewItemSeed_o *seed; // x8

  v2 = this;
  if ( (byte_4187F68 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_B2C35C(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 method);
    byte_4187F68 = 1;
  }
  missionToRecieve = v2->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (seed = this[2].fields.seed) == 0LL
    || (this = (CompleteMissionListViewManager_o *)seed->fields.parent) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     dispNo - 2,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     v2->fields.distanceToTexObj,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (CompleteMissionListViewManager_o *)v2->fields.touchBlockObj) == 0LL) )
  {
LABEL_12:
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CompleteMissionListViewManager__checkAcceptable(
        CompleteMissionListViewManager_o *this,
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
  int64_t Instance; // x0
  __int64 v17; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v19; // x8
  int64_t v20; // x20
  int64_t v21; // x21
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BalanceConfig_c *v30; // x0
  __int64 *v31; // x8
  CompleteMissionListViewManager___c_c *v32; // x0
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v35; // x21
  struct CompleteMissionListViewManager___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_4187F5B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__, v12);
    sub_B2C35C(&CompleteMissionListViewManager___c_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_12240/*"SHOW_MSG"*/, v14);
    sub_B2C35C(&StringLiteral_11137/*"REWARD_ACCEPTABLE"*/, v15);
    byte_4187F5B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_40;
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v19 = this->fields.missionToRecieve;
  if ( !v19 )
    goto LABEL_40;
  if ( v19->fields.rewardType == 1 )
  {
    v20 = Instance;
    if ( !Instance )
      goto LABEL_40;
    if ( Gift__IsServant_27324084(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                *(_DWORD *)(v20 + 24),
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v21 = Instance;
            if ( !SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
              && !SvtType__IsStatusUp(*(_DWORD *)(v21 + 84), 0LL) )
            {
              goto LABEL_27;
            }
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                VaildList = UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
                Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          *(_DWORD *)(v20 + 24),
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v30 = BalanceConfig_TypeInfo;
                      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v30 = BalanceConfig_TypeInfo;
                      }
                      if ( v30->static_fields->PresentBoxMax > (signed int)VaildList->max_length )
                        goto LABEL_27;
                      v32 = CompleteMissionListViewManager___c_TypeInfo;
                      if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
                        v32 = CompleteMissionListViewManager___c_TypeInfo;
                      }
                      static_fields = v32->static_fields;
                      _9__46_0 = static_fields->__9__46_0;
                      if ( !_9__46_0 )
                      {
                        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v32);
                          static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        }
                        v35 = (Il2CppObject *)static_fields->__9;
                        _9__46_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__46_0,
                          v35,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0LL);
                        v36 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        v36->__9__46_0 = _9__46_0;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&v36->__9__46_0,
                          (System_Int32_array **)_9__46_0,
                          v37,
                          v38,
                          v39,
                          v40,
                          v41,
                          v42);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)&this->fields.ShowMSG,
                        (System_Int32_array **)_9__46_0,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29);
                      Instance = (int64_t)this->fields.targetFSM;
                      if ( Instance )
                      {
                        v31 = &StringLiteral_12240/*"SHOW_MSG"*/;
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
      sub_B2C434(Instance, v17);
    }
  }
LABEL_27:
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_40;
  v31 = &StringLiteral_11137/*"REWARD_ACCEPTABLE"*/;
LABEL_29:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v31, 0LL);
}


bool __fastcall CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v9; // x19

  if ( (byte_4187F6B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4187F6B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v8 = *(_QWORD *)&Instance[9].fields.m_CachedPtr) == 0
    || (v9 = *(System_Collections_Generic_List_EventMissionEntity__o **)(v8 + 120),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v9, 0LL), !v9)
    || !Instance )
  {
    sub_B2C434(Instance, v7);
  }
  return v9->fields._size - 1 == LODWORD(Instance->fields.datalist);
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
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  AutomatedAction_o *Instance; // x0
  __int64 v13; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v15; // x1
  struct EventMissionEntity_o *v16; // x8

  if ( (byte_4187F62 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewManager_TypeInfo, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10);
    byte_4187F62 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewManager_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B2C2F8(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0LL) )
    {
      if ( this->fields.filterStatus )
      {
        this->fields.filterStatus = 0;
        CompleteMissionListViewManager__setList(this, v15);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v15);
    }
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v16 = this->fields.missionToRecieve;
    if ( !v16 || !Instance )
LABEL_13:
      sub_B2C434(Instance, v13);
    AutomatedAction__SetMissionAction(Instance, v16->fields.id, 5, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CompleteMissionListViewManager__getEffect(
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

  if ( (byte_4187F63 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, parentTr);
    sub_B2C35C(&CompleteMissionListViewManager_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4187F63 = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
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


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
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
  CompleteMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4187F51 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4187F51 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
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
      Component_srcLineSprite = (CompleteMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)current,
                                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(Component_srcLineSprite, v18);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v11;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187F50 & 1) == 0 )
  {
    sub_B2C35C(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___, method);
    byte_4187F50 = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_1AB37C8 *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void __fastcall CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4187F61 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_CompleteMissionListViewManager_endloadEffect__, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5841/*"Effect/EventMission"*/, v5);
    byte_4187F61 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5841/*"Effect/EventMission"*/, v6, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__modifyOpenItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 v14; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v16; // x1
  void *v17; // x0
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187F66 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, v3);
    sub_B2C35C(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4187F66 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B2C434(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v20.fields.current;
      if ( !v20.fields.current
        || (v14 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
        || (CompleteMissionListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v14 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_B2C434(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v20.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_B2C434(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v18, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v16; // x21
  ListViewItem_o *v17; // x8
  __int64 v18; // x11
  __int64 v19; // x11
  MissionListViewItem_o *v20; // x0
  int32_t v21; // w0

  v10 = this;
  if ( (byte_4187F54 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    this = (CompleteMissionListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v13);
    byte_4187F54 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B2C2F8(
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
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v17 = itemList->fields._items->m_Items[v16];
      if ( !v17 )
        break;
      v18 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (CompleteMissionListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        break;
      }
      v19 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) >= (unsigned int)v19 )
        v20 = (CompleteMissionListViewItem_c *)v17->klass->_2.typeHierarchy[v19 - 1] == CompleteMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v16]
            : 0LL;
      else
        v20 = 0LL;
      this = (CompleteMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v20, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v16 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v16) = 0;
LABEL_24:
  if ( ListViewManager__MoveTopItem((ListViewManager_o *)v10, v16, 1, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v21 = 0;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v21 = 2;
  }
  SoundManager__playSystemSe(v21, 0LL);
}


void __fastcall CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
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
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  WarEntity_o *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  System_String_o *v21; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x19
  CommonUI_o *v25; // x20
  CompleteMissionListViewManager___c_c *v26; // x8
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v29; // x22
  struct CompleteMissionListViewManager___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0
  System_String_o *countText; // [xsp+38h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4187F6A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&System_Text_RegularExpressions_Regex_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, v10);
    sub_B2C35C(&CompleteMissionListViewManager___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_23664/*"{0}×{1}"*/, v12);
    sub_B2C35C(&StringLiteral_15771/*"[^0-9]"*/, v13);
    sub_B2C35C(&StringLiteral_3281/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v16);
    byte_4187F6A = 1;
  }
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  countText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_35;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_35;
  if ( !touchBlockObj )
    goto LABEL_35;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_35;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
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
    v37 = sub_B2C460(touchBlockObj);
    sub_B2C400(v37, 0LL);
  }
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_35;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0LL);
  if ( System_String__IsNullOrEmpty(nameText, 0LL) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0LL) )
  {
    v21 = countText;
    if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    }
    v22 = System_Text_RegularExpressions_Regex__Replace(
            v21,
            (System_String_o *)StringLiteral_15771/*"[^0-9]"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v22, (System_String_o *)StringLiteral_1006/*"1"*/, 0LL) )
      nameText = System_String__Format_44301068(
                   (System_String_o *)StringLiteral_23664/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3281/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)nameText, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (CommonUI_o *)touchBlockObj;
  v26 = CompleteMissionListViewManager___c_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v26 = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__65_0 = static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__65_0, v29, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0LL);
    v30 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v30->__9__65_0 = _9__65_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v30->__9__65_0,
      (System_Int32_array **)_9__65_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v25 )
LABEL_35:
    sub_B2C434(touchBlockObj, method);
  CommonUI__OpenNotificationDialog(v25, 0LL, v24, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  EventMissionEntity_o *v23; // x21
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3

  if ( (byte_4187F5A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, missionEntity);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__, v6);
    sub_B2C35C(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo, v7);
    byte_4187F5A = 1;
  }
  v8 = sub_B2C42C(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass45_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v8,
    0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = missionEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v8 + 24),
    (System_Int32_array **)missionEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v23 = *(EventMissionEntity_o **)(v8 + 24);
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0LL);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v23, v24, v25);
}


void __fastcall CompleteMissionListViewManager__setAfterAction(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4187F60 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4187F60 = 1;
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
    sub_B2C434(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall CompleteMissionListViewManager__setList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v11; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UILabel_o *v23; // x21
  bool v24; // w2
  struct ListViewSort_o *v25; // x8
  int v26; // w9
  __int64 v27; // x1
  int32_t filterStatus; // w19

  if ( (byte_4187F59 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/, v4);
    sub_B2C35C(&StringLiteral_17046/*"btn_txt_completed"*/, v5);
    sub_B2C35C(&StringLiteral_17079/*"btn_txt_receipt"*/, v6);
    sub_B2C35C(&StringLiteral_17078/*"btn_txt_progress"*/, v7);
    sub_B2C35C(&StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, v8);
    sub_B2C35C(&StringLiteral_17029/*"btn_txt_all"*/, v9);
    byte_4187F59 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v11 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914748(v11, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_44:
    sub_B2C434(operationSortInfo, v21);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17029/*"btn_txt_all"*/, v22);
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
      v23 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v23 )
        goto LABEL_44;
      UILabel__set_text(v23, operationSortInfo, 0LL);
      goto LABEL_37;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17079/*"btn_txt_receipt"*/, v22);
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
      v25 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      v26 = 1;
      goto LABEL_39;
    case 2:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17078/*"btn_txt_progress"*/, v22);
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
      v24 = 0;
      goto LABEL_35;
    case 3:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17046/*"btn_txt_completed"*/, v22);
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
      v24 = 1;
LABEL_35:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v24, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_37:
      v25 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      v26 = 13;
LABEL_39:
      v25->fields.sortKind = v26;
LABEL_40:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_44;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4188044 )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, v27);
        byte_4188044 = 1;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v17; // x21
  ListViewItem_o *v18; // x8
  __int64 v19; // x11
  __int64 v20; // x11
  MissionListViewItem_o *v21; // x0
  System_Action_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  v10 = this;
  if ( (byte_4187F53 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, v11);
    sub_B2C35C(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13);
    this = (CompleteMissionListViewManager_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                 v14);
    byte_4187F53 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B2C2F8(
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
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v18 = itemList->fields._items->m_Items[v17];
      if ( !v18 )
        break;
      v19 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (CompleteMissionListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        break;
      }
      v20 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v20 )
        v21 = (CompleteMissionListViewItem_c *)v18->klass->_2.typeHierarchy[v20 - 1] == CompleteMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v17]
            : 0LL;
      else
        v21 = 0LL;
      this = (CompleteMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v21, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v17 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v17) = 0;
LABEL_24:
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0LL);
  v10->fields.callbackAfterScroll = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v10->fields.callbackAfterScroll,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewManager__MoveTopItem((ListViewManager_o *)v10, v17, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setOpenPanel(
        CompleteMissionListViewManager_o *this,
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
  __int64 v14; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v24; // x8
  WarEntity_o *Entity; // x21
  __int64 v26; // x8
  System_Int32_array **Component_WebViewObject; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x8
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  WebViewObject_o *v43; // x22
  __int64 v44; // x8
  UISprite_o *v45; // x20
  Il2CppObject *v46; // x20
  Il2CppObject *v47; // x0
  System_String_o *v48; // x20
  AssetLoader_LoadEndDataHandler_o *v49; // x21
  int v50; // [xsp+8h] [xbp-28h] BYREF
  int v51; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187F67 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__, v11);
    sub_B2C35C(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_4204/*"CompleteMission/{0}/{1}"*/, v13);
    byte_4187F67 = 1;
  }
  v14 = sub_B2C42C(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass61_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass61_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_43;
  *(_QWORD *)(v14 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 40), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0LL);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_43;
  *(_DWORD *)(v14 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v24 = this->fields.missionToRecieve;
  if ( !v24 )
    goto LABEL_43;
  if ( !touchBlockObj )
    goto LABEL_43;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)touchBlockObj,
             v24->fields.missionTargetId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v26 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v26 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v26 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v14 + 24),
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v14 + 16) = Component_WebViewObject;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), Component_WebViewObject, v28, v29, v30, v31, v32, v33);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v34 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v34 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v34 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v14 + 24),
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
  v35 = (System_Int32_array **)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)touchBlockObj,
                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v14 + 32) = v35;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 32), v35, v36, v37, v38, v39, v40, v41);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v42 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v42 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v42 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v14 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToNumObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  v43 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v44 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v44 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v44 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v14 + 24),
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
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v43)
    || (v45 = (UISprite_o *)touchBlockObj) == 0LL
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v43[4].monitor, 0LL),
        UISprite__set_spriteName(v45, *(System_String_o **)&v43[4].fields.m_CachedPtr, 0LL),
        !Entity) )
  {
LABEL_43:
    sub_B2C434(touchBlockObj, v16);
  }
  v51 = *(&Entity->fields.id + 1);
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v50 = *(_DWORD *)(v14 + 24);
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v48 = System_String__Format_44301068((System_String_o *)StringLiteral_4204/*"CompleteMission/{0}/{1}"*/, v46, v47, 0LL);
  v49 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v49,
    (Il2CppObject *)v14,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v48, v49, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall CompleteMissionListViewManager__unAcceptableDlg(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0

  if ( (byte_4187F5C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5487/*"END_NOTICE"*/, method);
    byte_4187F5C = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B2C434(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5487/*"END_NOTICE"*/, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v9; // x21
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o **p__8__1; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  void *_8__1; // x0
  System_Int32_array **v24; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v25; // x8
  __int64 v26; // x8
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  BattleServantConfConponent_o *p_anim_5__2; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  WebViewManager_o *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v52; // x23
  CommonUI_o *v53; // x19
  MissionRewardGetDialog_ClickDelegate_o *v54; // x22

  if ( (byte_418648B & 1) == 0 )
  {
    sub_B2C35C(&MissionRewardGetDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__, v5);
    sub_B2C35C(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo, v6);
    byte_418648B = 1;
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
    v9 = (Il2CppObject *)sub_B2C42C(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    System_Object___ctor(v9, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v9;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v9,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_26;
    v24 = (System_Int32_array **)this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v24;
    sub_B2C2F8((BattleServantConfConponent_o *)((char *)_8__1 + 16), v24, v17, v18, v19, v20, v21, v22);
    if ( !*p__8__1 )
      goto LABEL_26;
    (*p__8__1)->fields.isCompleteMission = this->fields.isCompleteMission;
    v25 = this->fields.__8__1;
    if ( !v25 )
      goto LABEL_26;
    if ( !v25->fields.isCompleteMission )
      goto LABEL_23;
    if ( !_4__this )
      goto LABEL_26;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0LL);
    _8__1 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_26;
    v26 = *((_QWORD *)_8__1 + 155);
    if ( !v26 )
      goto LABEL_26;
    _8__1 = *(void **)(v26 + 24);
    if ( !_8__1 )
      goto LABEL_26;
    Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)_8__1,
                                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = Component_WebViewObject;
    p_anim_5__2 = (BattleServantConfConponent_o *)&this->fields._anim_5__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._anim_5__2,
      (System_Int32_array **)Component_WebViewObject,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
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
      sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, 0LL, v35, v36, v37, v38, v39, v40);
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
    sub_B2C2F8(p_anim_5__2, 0LL, v43, v44, v45, v46, v47, v48);
LABEL_23:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v52 = (Il2CppObject *)this->fields.__8__1;
    v53 = (CommonUI_o *)Instance;
    v54 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B2C42C(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v54,
      v52,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0LL);
    if ( v53 )
    {
      CommonUI__OpenMissionRewardGetDialog(v53, rewards, rewardDetail, v54, 0, 0LL);
      return 0;
    }
LABEL_26:
    sub_B2C434(_8__1, method);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  CompleteMissionListViewManager_o *_4__this; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v7; // x8
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  struct UnityEngine_Animation_o **p_anim_5__2; // x21
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
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_418648C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_418648C = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    v7 = *(_QWORD *)&Instance[51].fields.m_CachedPtr;
    if ( !v7 )
      goto LABEL_17;
    Instance = *(UnityEngine_Component_o **)(v7 + 24);
    if ( !Instance )
      goto LABEL_17;
    Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  Instance,
                                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = Component_WebViewObject;
    p_anim_5__2 = &this->fields._anim_5__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._anim_5__2,
      (System_Int32_array **)Component_WebViewObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
        sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, 0LL, v16, v17, v18, v19, v20, v21);
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
    sub_B2C434(Instance, method);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418647F & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewManager___c_TypeInfo, v1);
    byte_418647F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CompleteMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  __int64 v2; // x1
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4186482 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4186482 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v4);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
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
  CompleteMissionListViewManager___c_c *v12; // x8
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__46_1; // x22
  System_String_o *v15; // x21
  Il2CppObject *v16; // x23
  struct CompleteMissionListViewManager___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4186480 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, v4);
    sub_B2C35C(&CompleteMissionListViewManager___c_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8747/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4186480 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8747/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v11 = v9;
  v12 = CompleteMissionListViewManager___c_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v12 = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__46_1 = static_fields->__9__46_1;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__46_1 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__46_1, v16, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0LL);
    v17 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v17->__9__46_1 = _9__46_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v17->__9__46_1,
      (System_Int32_array **)_9__46_1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__OpenNotificationDialog(Instance, v15, v11, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4186481 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4186481 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  if ( (byte_4186483 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_B2C35C(&StringLiteral_8743/*"MISSIONN_REWARD"*/, method);
    byte_4186483 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (missionEntity = (System_Int32_array **)v8->fields.missionEntity,
        _4__this->fields.missionToRecieve = (struct EventMissionEntity_o *)missionEntity,
        sub_B2C2F8(
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
    sub_B2C434(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8743/*"MISSIONN_REWARD"*/, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4186485 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4186485 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4186484 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4186484 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
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
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v16; // x8
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v18; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v19; // x8
  System_String_o *v20; // x21
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v21; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v22; // x8
  System_String_o *v23; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v24; // x8
  System_String_o *v25; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v26; // x8
  System_String_o *v27; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v28; // x8
  System_String_o *v29; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v30; // x8
  struct CompleteMissionListViewManager_o *v31; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v32; // x8
  struct CompleteMissionListViewManager_o *v33; // x8
  System_String_o *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x21
  _QWORD **v37; // x23
  __int64 v38; // x22
  __int16 v39; // w8
  __int64 v40; // x22
  __int64 v41; // x22
  __int64 v42; // x22
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v43; // x8
  struct CompleteMissionListViewManager_o *v44; // x8
  System_String_o *v45; // x21
  Il2CppObject *NumberFormat; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v47; // x8
  CompleteMissionListViewManager_o *v48; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v49; // x22
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v50; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v2 = this;
  if ( (byte_4186486 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_object___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_8760/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v7);
    sub_B2C35C(&StringLiteral_8746/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v8);
    sub_B2C35C(&StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, v9);
    sub_B2C35C(&StringLiteral_31/*"\n \n"*/, v10);
    sub_B2C35C(&StringLiteral_32/*"\n \n "*/, v11);
    sub_B2C35C(&StringLiteral_8761/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v12);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_B2C35C(&StringLiteral_8752/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v13);
    byte_4186486 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_81;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v16 = v2->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_81;
  ActionExtensions__Call(v16->fields.callback, 0LL);
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_81;
  if ( giftList->fields._size < 1 )
  {
    v21 = v2->fields.CS___8__locals1;
    if ( v21 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v21->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, 0LL);
        v22 = v2->fields.CS___8__locals1;
        if ( v22 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v22->fields.__4__this;
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
  v18 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0LL);
  v19 = v2->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v19->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_81;
  v20 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v20, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemNum >= 2 )
    {
      if ( !v20 )
        goto LABEL_81;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_44369268(
                                                                         v20,
                                                                         0,
                                                                         v20->fields.m_stringLength - 2,
                                                                         0LL);
      if ( !v18 )
        goto LABEL_81;
      System_Text_StringBuilder__Append_42408700(v18, (System_String_o *)this, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8746/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42408700(
                                                                         v18,
                                                                         v23,
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
                                                                         (System_String_o *)StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0LL);
      if ( !v18 )
        goto LABEL_81;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v18,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v20,
                                                                         0LL);
    }
    v24 = v2->fields.CS___8__locals1;
    if ( !v24 )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v24->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_81;
    v25 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v25, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42408700(
                                                                         v18,
                                                                         (System_String_o *)StringLiteral_32/*"\n \n "*/,
                                                                         0LL);
  }
  v26 = v2->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v26->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_81;
  v27 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v27, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v28 = v2->fields.CS___8__locals1;
    if ( !v28 )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v28->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                       this,
                                                                       this->klass[1]._1.image);
    if ( !v18 )
      goto LABEL_81;
    System_Text_StringBuilder__Append_42408700(v18, (System_String_o *)this, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8752/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42408700(
                                                                       v18,
                                                                       v29,
                                                                       0LL);
  }
  v30 = v2->fields.CS___8__locals1;
  if ( !v30 )
    goto LABEL_81;
  v31 = v30->fields.__4__this;
  if ( !v31 )
    goto LABEL_81;
  if ( v31->fields.isQpMaxAlert )
  {
    if ( v31->fields.isQpAlreadyMax )
    {
      if ( v18 )
      {
        if ( v2->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_42408700(v18, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
        else
          System_Text_StringBuilder__set_Length(v18, 0, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8760/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0LL);
        v43 = v2->fields.CS___8__locals1;
        if ( v43 )
        {
          v44 = v43->fields.__4__this;
          if ( v44 )
          {
            v45 = (System_String_o *)this;
            NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v44->fields.overQpValue, 0LL);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v18,
                                                                               v45,
                                                                               NumberFormat,
                                                                               0LL);
            goto LABEL_75;
          }
        }
      }
LABEL_81:
      sub_B2C434(this, method);
    }
    if ( !v18 )
      goto LABEL_81;
    System_Text_StringBuilder__Append_42408700(v18, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8761/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0LL);
    v32 = v2->fields.CS___8__locals1;
    if ( !v32 )
      goto LABEL_81;
    v33 = v32->fields.__4__this;
    if ( !v33 )
      goto LABEL_81;
    v34 = (System_String_o *)this;
    v35 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v33->fields.overQpValue, 0LL);
    v36 = System_String__Format(v34, v35, 0LL);
    v37 = (_QWORD **)Method_System_Array_Empty_object___;
    v38 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v39 = *(_WORD *)(v38 + 306);
    if ( (v39 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v39 = *(_WORD *)(v38 + 306);
    }
    if ( (v39 & 0x400) != 0 )
    {
      v40 = *v37[6];
      if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
        sub_AC505C(*v37[6]);
      if ( !*(_DWORD *)(v40 + 224) )
      {
        v41 = *v37[6];
        if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
          sub_AC505C(*v37[6]);
        j_il2cpp_runtime_class_init_0(v41);
      }
    }
    v42 = *v37[6];
    if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
      sub_AC505C(*v37[6]);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_42415448(
                                                                       v18,
                                                                       v36,
                                                                       **(System_Object_array ***)(v42 + 184),
                                                                       0LL);
  }
LABEL_75:
  v47 = v2->fields.CS___8__locals1;
  if ( !v47 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v2->fields.giftList;
  if ( !this )
    goto LABEL_81;
  v48 = v47->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v18 )
    goto LABEL_81;
  v49 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                                                     v18,
                                                                     v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v50 = v2->fields.CS___8__locals1;
  if ( !v50 || !v48 )
    goto LABEL_81;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v48,
             (GiftEntity_array *)v49,
             (System_String_o *)this,
             v50->fields.isCompleteMission,
             0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v48, Dialog, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  __int64 v3; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v2 = this;
  if ( (byte_4186487 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_B2C35C(
                                                                       &Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
                                                                       v3);
    byte_4186487 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__3,
      (System_Int32_array **)_9__3,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !_4__this )
LABEL_8:
    sub_B2C434(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SummonAssetManager_o *Instance; // x0
  __int64 v9; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v12; // x8
  WebViewManager_o *v13; // x0
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v15; // x21
  System_String_o *v16; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v17; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v19; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4186488 & 1) == 0 )
  {
    sub_B2C35C(&MissionRewardGetDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__, v6);
    sub_B2C35C(&StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, v7);
    byte_4186488 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v12 = this->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_16;
  ActionExtensions__Call(v12->fields.callback, 0LL);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v15 = (CommonUI_o *)v13;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v16, (Il2CppObject *)this->fields.sendName, 0LL);
  v17 = this->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_16;
  _9__4 = v17->fields.__9__4;
  v19 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B2C42C(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v17,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0LL);
    v17->fields.__9__4 = _9__4;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v17->fields.__9__4,
      (System_Int32_array **)_9__4,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v15 )
LABEL_16:
    sub_B2C434(Instance, v9);
  CommonUI__OpenMissionRewardGetDialog_18040212(v15, rwdSetEnt, v19, _9__4, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4186489 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4186489 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(Instance, v4);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  struct UITexture_o *tex; // x21
  Il2CppObject *v13; // x0
  struct UITexture_o *animTex; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  struct MasterMissionComponent_o *masterMissionComp; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct MasterMissionComponent_o *v19; // x8
  struct CompleteMissionListViewManager_o *v20; // x8
  struct MasterMissionComponent_o *v21; // x8
  struct CompleteMissionListViewManager_o *v22; // x8
  struct CompleteMissionListViewManager_o *v23; // x19
  float endEffectTime; // s8
  System_Action_o *v25; // x20
  int32_t v26; // [xsp+8h] [xbp-48h] BYREF
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418648A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, backPanel);
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, v5);
    sub_B2C35C(&Method_CompleteMissionListViewManager_animAfterCallback__, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v9);
    byte_418648A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_23539/*"{0}"*/, v13, 0LL);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
    tex,
    Instance,
    tex->klass->vtable._28_get_shader.methodPtr);
  animTex = this->fields.animTex;
  v26 = this->fields.completeMissionPanelChildIdx;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v16 = System_String__Format((System_String_o *)StringLiteral_23539/*"{0}"*/, v15, 0LL);
  Instance = (CommonUI_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             backPanel,
                             v16,
                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))animTex->klass->vtable._27_set_mainTexture.method)(
    animTex,
    Instance,
    animTex->klass->vtable._28_get_shader.methodPtr);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v19 = Instance->fields.masterMissionComp;
  if ( !v19 )
    goto LABEL_30;
  Instance = (CommonUI_o *)v19->fields.myFsm;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v20->fields.distanceToTexObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v21 = Instance->fields.masterMissionComp;
  if ( !v21
    || (Instance = (CommonUI_o *)v21->fields.myFsm) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0LL),
        (v22 = this->fields.__4__this) == 0LL)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v22->fields.distanceToEfPanelObj,
                                   0LL)) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (v23 = this->fields.__4__this) == 0LL) )
  {
LABEL_30:
    sub_B2C434(Instance, v11);
  }
  endEffectTime = v23->fields.endEffectTime;
  v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)v23, Method_CompleteMissionListViewManager_animAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v23, endEffectTime, v25, 0LL);
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
    sub_B2C434(0LL, method);
  System_Action__Invoke(decideCallback, 0LL);
}