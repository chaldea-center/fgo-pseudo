void __fastcall CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_42B0865 & 1) == 0 )
  {
    sub_B52984(&MissionListViewManager_TypeInfo);
    byte_42B0865 = 1;
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
  __int64 v5; // x22
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v21; // x20
  const MethodInfo *v22; // x3
  struct EventMissionEntity_o *v23; // x8
  __int64 v24; // x8
  __int64 v25; // x20
  unsigned __int64 v26; // x23
  System_Int32_array **v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WarBoardSquareIndexData_array *v34; // x19
  __int64 v35; // x8
  char *v36; // x0
  System_Text_StringBuilder_o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Text_StringBuilder_o *v44; // x0
  System_Text_StringBuilder_o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  Il2CppObject **v59; // x21
  WarBoardSquareIndexData_array *v60; // x8
  signed int max_length; // w28
  int v62; // w22
  int v63; // w9
  __int64 v64; // x27
  WarBoardSquareIndexData_o *v65; // x8
  WarBoardSquareIndexData_o *v66; // x8
  WarBoardSquareIndexData_o *v67; // x8
  WarBoardSquareIndexData_o *v68; // x8
  System_Int32_array **SetRewardData; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  struct GetSvts_array *getSvtList; // x8
  SummonAssetManager_o *v84; // x21
  System_Action_o *v85; // x22
  System_Collections_Generic_List_GiftEntity__c **v86; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v87; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x22
  __int64 v89; // x27
  bool IsCountableWithPlus; // w0
  Il2CppObject **v91; // x8
  Il2CppObject *v92; // x25
  System_Text_StringBuilder_o *v93; // x24
  int getQpValue; // w19
  __int64 v95; // x8
  System_Collections_Generic_List_GiftEntity__c **v96; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v97; // x20
  System_String_o *v98; // x26
  Il2CppObject *v99; // x0
  __int64 v100; // x8
  System_Text_StringBuilder_o *v101; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v102; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v103; // x0
  il2cpp_array_size_t v104; // w23
  __int64 v105; // x8
  __int64 v106; // x8
  ServantEntity_o *v107; // x24
  _BOOL4 IsCombineMaterial; // w25
  Il2CppObject *v109; // x8
  System_String_o *v110; // x0
  __int64 v111; // x8
  Il2CppObject *v112; // x24
  Il2CppObject *v113; // x0
  Il2CppObject *v114; // x24
  System_Text_StringBuilder_o *monitor; // x25
  __int64 v116; // x8
  __int64 v117; // x8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v118; // x21
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Action_o *v125; // x21
  WebViewManager_o *Instance; // x0
  EventRewardSetEntity_o *v127; // x20
  CommonUI_o *v128; // x23
  System_String_o *v129; // x0
  System_String_o *v130; // x0
  Il2CppObject *v131; // x24
  System_String_o *v132; // x21
  MissionRewardGetDialog_ClickDelegate_o *v133; // x22
  __int64 v134; // x0
  __int64 v135; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v136; // [xsp+0h] [xbp-90h]
  __int64 v137; // [xsp+8h] [xbp-88h]
  CompleteMissionListViewManager_o *v138; // [xsp+10h] [xbp-80h]
  int v139; // [xsp+1Ch] [xbp-74h] BYREF
  WarEntity_o *v140; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v141; // [xsp+28h] [xbp-68h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  WarBoardSquareIndexData_array *array; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42B0854 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Array_Resize_GiftEntity___);
    sub_B52984(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor___68511904);
    sub_B52984(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__);
    sub_B52984(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__);
    sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__);
    sub_B52984(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
    sub_B52984(&StringLiteral_8803/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_B52984(&StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/);
    sub_B52984(&StringLiteral_23857/*"{0}×{1:#,0}"*/);
    sub_B52984(&StringLiteral_23899/*"×"*/);
    sub_B52984(&StringLiteral_8798/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_B52984(&StringLiteral_30/*"\n "*/);
    sub_B52984(&StringLiteral_24159/*"＋"*/);
    byte_42B0854 = 1;
  }
  array = 0LL;
  v141 = 0LL;
  entity = 0LL;
  v140 = 0LL;
  v5 = sub_B52A54(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass49_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass49_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_154;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_154;
  v21 = (GiftMaster_o *)Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  array = (WarBoardSquareIndexData_array *)GiftMaster__GetGiftListById(
                                             (GiftMaster_o *)Master_WarQuestSelectionMaster,
                                             missionToRecieve->fields.giftId,
                                             0LL);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v23 = this->fields.missionToRecieve;
  if ( !v23 || !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  Master_WarQuestSelectionMaster = CompleteMissionMaster__TryGetEntityFromObjectId(
                                     (CompleteMissionMaster_o *)Master_WarQuestSelectionMaster,
                                     &entity,
                                     v23->fields.id,
                                     v22);
  *(_BYTE *)(v5 + 48) = Master_WarQuestSelectionMaster & 1;
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_154;
    Master_WarQuestSelectionMaster = (__int64)GiftMaster__GetGiftListById(v21, entity->fields.giftId, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_154;
    v24 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
    v25 = Master_WarQuestSelectionMaster;
    if ( (int)v24 >= 1 )
    {
      v26 = 0LL;
      while ( v26 < (unsigned int)v24 )
      {
        if ( !array )
          goto LABEL_154;
        v27 = *(System_Int32_array ***)(v25 + 32 + 8 * v26);
        System_Array__Resize_WarBoardSquareIndexData_(
          &array,
          array->max_length + 1,
          (const MethodInfo_22C19A8 *)Method_System_Array_Resize_GiftEntity___);
        v34 = array;
        if ( !array )
          goto LABEL_154;
        if ( v27 )
        {
          Master_WarQuestSelectionMaster = sub_B52A44(v27, array->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
          {
            v135 = sub_B52A7C(0LL);
            sub_B52A28(v135, 0LL);
          }
        }
        v35 = *(_QWORD *)&v34->max_length;
        if ( !(_DWORD)v35 )
          break;
        v36 = (char *)v34 + (((v35 << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v36 + 4) = v27;
        sub_B52920((BattleServantConfConponent_o *)(v36 + 32), v27, v28, v29, v30, v31, v32, v33);
        LODWORD(v24) = *(_DWORD *)(v25 + 24);
        if ( (__int64)++v26 >= (int)v24 )
          goto LABEL_23;
      }
LABEL_155:
      v134 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v134, 0LL);
    }
  }
LABEL_23:
  v37 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  *(_QWORD *)(v5 + 40) = v37;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v44, 0LL);
  v45 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v45, 0LL);
  *(_QWORD *)(v5 + 32) = v45;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
  v52 = sub_B52A54(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass49_1___ctor(
    (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v52,
    0LL);
  if ( !v52 )
    goto LABEL_154;
  *(_QWORD *)(v52 + 48) = v5;
  v59 = (Il2CppObject **)(v52 + 48);
  sub_B52920((BattleServantConfConponent_o *)(v52 + 48), (System_Int32_array **)v5, v53, v54, v55, v56, v57, v58);
  Master_WarQuestSelectionMaster = (__int64)this->fields.missionToRecieve;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  if ( *(_DWORD *)(Master_WarQuestSelectionMaster + 80) == 1 )
  {
    Master_WarQuestSelectionMaster = (__int64)this->fields.touchBlockObj;
    if ( Master_WarQuestSelectionMaster )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
      *(_DWORD *)(v52 + 24) = 0;
      v60 = array;
      if ( array )
      {
        max_length = array->max_length;
        v138 = this;
        if ( max_length >= 1 )
        {
          v62 = 1;
          while ( 1 )
          {
            v63 = v62 - 1;
            if ( v62 - 1 >= v60->max_length )
              goto LABEL_155;
            v64 = v63;
            v65 = v60->m_Items[v63];
            if ( !v65 )
              goto LABEL_154;
            Master_WarQuestSelectionMaster = Gift__IsServant_28236324(*(&v65->fields.squareIndex + 1), 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            {
              if ( !array )
                goto LABEL_154;
              if ( (unsigned int)v64 >= array->max_length )
                goto LABEL_155;
              v66 = array->m_Items[v64];
              if ( !v66 )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = Gift__IsCommandCode_28236720(*(&v66->fields.squareIndex + 1), 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                if ( !array )
                  goto LABEL_154;
                if ( (unsigned int)v64 >= array->max_length )
                  goto LABEL_155;
                v67 = array->m_Items[v64];
                if ( !v67 )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = Gift__IsCostumeRelease(*(&v67->fields.squareIndex + 1), 0LL);
                if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                {
                  Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( !array )
                    goto LABEL_154;
                  if ( (unsigned int)v64 >= array->max_length )
                    goto LABEL_155;
                  v68 = array->m_Items[v64];
                  if ( !v68 || !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                     &v141,
                                                     (int32_t)v68->fields.effectIds,
                                                     (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                  {
                    Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !v141 || !Master_WarQuestSelectionMaster )
                      goto LABEL_154;
                    Master_WarQuestSelectionMaster = CommonUI__IsGetItemEffect(
                                                       (CommonUI_o *)Master_WarQuestSelectionMaster,
                                                       v141->fields.id,
                                                       0LL);
                    if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                      ++*(_DWORD *)(v52 + 24);
                  }
                }
              }
            }
            if ( v62 >= max_length )
              break;
            v60 = array;
            ++v62;
            if ( !array )
              goto LABEL_154;
          }
        }
        v86 = &System_Collections_Generic_List_GiftEntity__TypeInfo;
        v137 = v52;
        v87 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v87,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v88,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( max_length >= 1 )
        {
          v89 = 4LL;
          v136 = v88;
          do
          {
            if ( !array )
              goto LABEL_154;
            v104 = v89 - 4;
            if ( (unsigned int)(v89 - 4) >= array->max_length )
              goto LABEL_155;
            v105 = *((_QWORD *)&array->obj.klass + v89);
            if ( !v105 )
              goto LABEL_154;
            Master_WarQuestSelectionMaster = Gift__IsServant_28236324(*(_DWORD *)(v105 + 20), 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) != 0 )
            {
              Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Master_WarQuestSelectionMaster,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !array )
                goto LABEL_154;
              if ( v104 >= array->max_length )
                goto LABEL_155;
              v106 = *((_QWORD *)&array->obj.klass + v89);
              if ( !v106 )
                goto LABEL_154;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                          *(_DWORD *)(v106 + 24),
                                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_154;
              v107 = (ServantEntity_o *)Master_WarQuestSelectionMaster;
              IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_WarQuestSelectionMaster + 84), 0LL);
              Master_WarQuestSelectionMaster = SvtType__IsStatusUp(v107->fields.type, 0LL);
              v109 = *v59;
              if ( !*v59 )
                goto LABEL_154;
              if ( ((IsCombineMaterial | (unsigned int)Master_WarQuestSelectionMaster) & 1) != 0
                || LOBYTE(v109[3].klass) )
              {
                Master_WarQuestSelectionMaster = (__int64)v109[2].monitor;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                v110 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster
                                                                                     + 360LL))(
                                            Master_WarQuestSelectionMaster,
                                            *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 368LL));
                Master_WarQuestSelectionMaster = System_String__IsNullOrEmpty(v110, 0LL);
                if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                {
                  if ( !*v59 )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = (__int64)(*v59)[2].monitor;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  System_Text_StringBuilder__Append_42994048(
                    (System_Text_StringBuilder_o *)Master_WarQuestSelectionMaster,
                    (System_String_o *)StringLiteral_30/*"\n "*/,
                    0LL);
                }
                Master_WarQuestSelectionMaster = (__int64)ServantEntity__getName(v107, -1, -1, 0LL);
                if ( !array )
                  goto LABEL_154;
                if ( v104 >= array->max_length )
                  goto LABEL_155;
                v111 = *((_QWORD *)&array->obj.klass + v89);
                if ( !v111 )
                  goto LABEL_154;
                v112 = (Il2CppObject *)Master_WarQuestSelectionMaster;
                v139 = *(_DWORD *)(v111 + 28);
                v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139);
                Master_WarQuestSelectionMaster = (__int64)System_String__Format_44563852(
                                                            (System_String_o *)StringLiteral_23857/*"{0}×{1:#,0}"*/,
                                                            v112,
                                                            v113,
                                                            0LL);
                if ( !*v59 )
                  goto LABEL_154;
                v114 = (Il2CppObject *)Master_WarQuestSelectionMaster;
                monitor = (System_Text_StringBuilder_o *)(*v59)[2].monitor;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_8798/*"MISSION_ACTION_ITEM_FORMAT"*/,
                                                            0LL);
                if ( !monitor )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat(
                                                            monitor,
                                                            (System_String_o *)Master_WarQuestSelectionMaster,
                                                            v114,
                                                            0LL);
                if ( !array )
                  goto LABEL_154;
                if ( v104 >= array->max_length )
                  goto LABEL_155;
                if ( !v88 )
                  goto LABEL_154;
                v102 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&array->obj.klass + v89);
                v103 = v88;
LABEL_125:
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v103,
                  v102,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
              }
            }
            else
            {
              if ( !array )
                goto LABEL_154;
              if ( v104 >= array->max_length )
                goto LABEL_155;
              v116 = *((_QWORD *)&array->obj.klass + v89);
              if ( !v116 )
                goto LABEL_154;
              Master_WarQuestSelectionMaster = Gift__IsItem_28236268(*(_DWORD *)(v116 + 20), 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) != 0 )
              {
                Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Master_WarQuestSelectionMaster,
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
                if ( !array )
                  goto LABEL_154;
                if ( v104 >= array->max_length )
                  goto LABEL_155;
                v117 = *((_QWORD *)&array->obj.klass + v89);
                if ( !v117 || !Master_WarQuestSelectionMaster )
                  goto LABEL_154;
                Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                   &v140,
                                                   *(_DWORD *)(v117 + 24),
                                                   (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                {
                  Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v140 || !Master_WarQuestSelectionMaster )
                    goto LABEL_154;
                  Master_WarQuestSelectionMaster = CommonUI__IsGetItemEffect(
                                                     (CommonUI_o *)Master_WarQuestSelectionMaster,
                                                     v140->fields.id,
                                                     0LL);
                  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
                  {
                    if ( !array )
                      goto LABEL_154;
                    if ( v104 >= array->max_length )
                      goto LABEL_155;
                    Master_WarQuestSelectionMaster = *((_QWORD *)&array->obj.klass + v89);
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_154;
                    Master_WarQuestSelectionMaster = GiftEntity__isQp(
                                                       (GiftEntity_o *)Master_WarQuestSelectionMaster,
                                                       0LL);
                    if ( (Master_WarQuestSelectionMaster & 1) == 0 || !v138->fields.isQpAlreadyMax )
                    {
                      if ( !v140 )
                        goto LABEL_154;
                      IsCountableWithPlus = ItemType__IsCountableWithPlus(v140->fields.bannerId, 0LL);
                      v91 = (Il2CppObject **)&StringLiteral_24159/*"＋"*/;
                      if ( !IsCountableWithPlus )
                        v91 = (Il2CppObject **)&StringLiteral_23899/*"×"*/;
                      v92 = *v91;
                      v93 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
                      System_Text_StringBuilder___ctor(v93, 0LL);
                      if ( !v140 )
                        goto LABEL_154;
                      if ( !v93 )
                        goto LABEL_154;
                      Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42994048(
                                                                  v93,
                                                                  v140->fields.age,
                                                                  0LL);
                      if ( !array )
                        goto LABEL_154;
                      if ( v104 >= array->max_length )
                        goto LABEL_155;
                      Master_WarQuestSelectionMaster = *((_QWORD *)&array->obj.klass + v89);
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_154;
                      Master_WarQuestSelectionMaster = GiftEntity__isQp(
                                                         (GiftEntity_o *)Master_WarQuestSelectionMaster,
                                                         0LL);
                      if ( (Master_WarQuestSelectionMaster & 1) == 0
                        || !v138->fields.isQpMaxAlert
                        || (getQpValue = v138->fields.getQpValue) == 0 )
                      {
                        if ( !array )
                          goto LABEL_154;
                        if ( v104 >= array->max_length )
                          goto LABEL_155;
                        v95 = *((_QWORD *)&array->obj.klass + v89);
                        if ( !v95 )
                          goto LABEL_154;
                        getQpValue = *(_DWORD *)(v95 + 28);
                      }
                      v96 = v86;
                      v97 = v87;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v98 = LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      v139 = getQpValue;
                      v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139);
                      Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat_43000600(
                                                                  v93,
                                                                  v98,
                                                                  v92,
                                                                  v99,
                                                                  0LL);
                      v52 = v137;
                      v100 = *(_QWORD *)(v137 + 48);
                      if ( !v100 )
                        goto LABEL_154;
                      v101 = *(System_Text_StringBuilder_o **)(v100 + 32);
                      v87 = v97;
                      if ( *(int *)(v137 + 24) >= 2 )
                      {
                        v86 = v96;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_8798/*"MISSION_ACTION_ITEM_FORMAT"*/,
                                                                    0LL);
                        v88 = v136;
                        if ( !v101 )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__AppendFormat(
                                                                    v101,
                                                                    (System_String_o *)Master_WarQuestSelectionMaster,
                                                                    (Il2CppObject *)v93,
                                                                    0LL);
                        if ( !*v59 )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)(*v59)[2].klass;
                        if ( !Master_WarQuestSelectionMaster )
                          goto LABEL_154;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42994048(
                                                                    (System_Text_StringBuilder_o *)Master_WarQuestSelectionMaster,
                                                                    (System_String_o *)StringLiteral_30/*"\n "*/,
                                                                    0LL);
                      }
                      else
                      {
                        Master_WarQuestSelectionMaster = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v93->klass->vtable._3_ToString.method)(
                                                           v93,
                                                           v93->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                        if ( !v101 )
                          goto LABEL_154;
                        v86 = v96;
                        Master_WarQuestSelectionMaster = (__int64)System_Text_StringBuilder__Append_42994048(
                                                                    v101,
                                                                    (System_String_o *)Master_WarQuestSelectionMaster,
                                                                    0LL);
                        v88 = v136;
                      }
                      if ( !array )
                        goto LABEL_154;
                      if ( v104 >= array->max_length )
                        goto LABEL_155;
                      if ( !v87 )
                        goto LABEL_154;
                      v102 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&array->obj.klass + v89);
                      v103 = v87;
                      goto LABEL_125;
                    }
                  }
                }
              }
            }
            ++v89;
          }
          while ( (int)v89 - 4 < max_length );
        }
        v118 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(*v86);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v118,
          (System_Collections_Generic_IEnumerable_T__o *)v87,
          (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_GiftEntity___ctor___68511904);
        *(_QWORD *)(v52 + 16) = v118;
        sub_B52920(
          (BattleServantConfConponent_o *)(v52 + 16),
          (System_Int32_array **)v118,
          v119,
          v120,
          v121,
          v122,
          v123,
          v124);
        Master_WarQuestSelectionMaster = *(_QWORD *)(v52 + 16);
        if ( Master_WarQuestSelectionMaster )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Master_WarQuestSelectionMaster,
            (System_Collections_Generic_IEnumerable_T__o *)v88,
            (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
          v125 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v125,
            (Il2CppObject *)v52,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
            0LL);
          this = v138;
          MissionListViewManager__StartItemGetEffectAction(
            (MissionListViewManager_o *)v138,
            (GiftEntity_array *)array,
            0,
            v125,
            0LL);
          goto LABEL_153;
        }
      }
    }
LABEL_154:
    sub_B52A5C(Master_WarQuestSelectionMaster, v7);
  }
  SetRewardData = (System_Int32_array **)EventMissionEntity__getSetRewardData(
                                           (EventMissionEntity_o *)Master_WarQuestSelectionMaster,
                                           0LL);
  *(_QWORD *)(v52 + 32) = SetRewardData;
  sub_B52920((BattleServantConfConponent_o *)(v52 + 32), SetRewardData, v70, v71, v72, v73, v74, v75);
  if ( !*(_QWORD *)(v52 + 32) )
    goto LABEL_154;
  v82 = *(System_Int32_array ***)(*(_QWORD *)(v52 + 32) + 32LL);
  *(_QWORD *)(v52 + 40) = v82;
  sub_B52920((BattleServantConfConponent_o *)(v52 + 40), v82, v76, v77, v78, v79, v80, v81);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList || !*(_QWORD *)&getSvtList->max_length )
  {
    if ( *v59 )
    {
      ActionExtensions__Call((System_Action_o *)(*v59)[1].monitor, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v127 = *(EventRewardSetEntity_o **)(v52 + 32);
      v128 = (CommonUI_o *)Instance;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v129 = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v130 = System_String__Format(v129, *(Il2CppObject **)(v52 + 40), 0LL);
      v131 = *v59;
      v132 = v130;
      v133 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B52A54(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v133,
        v131,
        Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
        0LL);
      if ( v128 )
      {
        CommonUI__OpenMissionRewardGetDialog_18227188(v128, v127, v132, v133, 0LL);
        goto LABEL_153;
      }
    }
    goto LABEL_154;
  }
  Master_WarQuestSelectionMaster = (__int64)this->fields.touchBlockObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_154;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  v84 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v85 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v85,
    (Il2CppObject *)v52,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
    0LL);
  if ( !v84 )
    goto LABEL_154;
  SummonAssetManager__LoadSummonAssets(v84, v85, 0LL);
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
  __int64 v7; // x21
  void *SelfUserGame; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  void **v16; // x24
  GiftEntity_o *QpGiftEntity; // x0
  GiftEntity_o *v18; // x22
  struct System_String_o *Empty; // x25
  _DWORD *v20; // x23
  int32_t v21; // w19
  BalanceConfig_c *v22; // x0
  int32_t QpMax; // w8
  int v24; // w19
  int32_t num; // w25
  System_String_o *v26; // x24
  Il2CppObject *NumberFormat; // x25
  System_String_o *v28; // x0
  BalanceConfig_c *v29; // x8
  Il2CppObject *v30; // x26
  Il2CppObject *v31; // x0
  System_String_o *v32; // x24
  int32_t v33; // w8
  int32_t v34; // w8
  System_String_o *v35; // x24
  System_String_o *v36; // x0
  int32_t v37; // w8
  Il2CppObject *v38; // x23
  System_String_o *v39; // x0
  BalanceConfig_c *v40; // x8
  Il2CppObject *v41; // x25
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x22
  System_String_o *v45; // x23
  System_String_o *v46; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v48; // x20
  System_Action_o *v49; // x26
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *onTransition; // x21
  Il2CppObject *v52; // x27
  struct CompleteMissionListViewManager___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_o *getable; // [xsp+28h] [xbp-58h]

  if ( (byte_42B0864 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__);
    sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__);
    sub_B52984(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
    sub_B52984(&CompleteMissionListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_8812/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_B52984(&StringLiteral_8815/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_B52984(&StringLiteral_11857/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_B52984(&StringLiteral_11856/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_B52984(&StringLiteral_11863/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_42B0864 = 1;
  }
  v7 = sub_B52A54(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass68_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass68_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_44;
  *(_QWORD *)(v7 + 16) = decideCallback;
  v16 = (void **)(v7 + 16);
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)decideCallback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !missionEntity )
    goto LABEL_44;
  QpGiftEntity = EventMissionEntity__GetQpGiftEntity(missionEntity, 0LL);
  if ( !QpGiftEntity )
  {
LABEL_22:
    SelfUserGame = *v16;
    if ( *v16 )
    {
      System_Action__Invoke((System_Action_o *)SelfUserGame, 0LL);
      return;
    }
LABEL_44:
    sub_B52A5C(SelfUserGame, v9);
  }
  v18 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_44;
  v20 = SelfUserGame;
  v21 = *((_DWORD *)SelfUserGame + 24);
  v22 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  getable = Empty;
  QpMax = v22->static_fields->QpMax;
  if ( v21 < QpMax )
  {
    v24 = v20[24];
    num = v18->fields.num;
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( num + v24 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8815/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v18->fields.num, 0LL);
      v28 = LocalizationManager__GetNumberFormat(v20[24], 0LL);
      v29 = BalanceConfig_TypeInfo;
      v30 = (Il2CppObject *)v28;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      v31 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v29->static_fields->QpMax, 0LL);
      v32 = System_String__Format_44569380(v26, NumberFormat, v30, v31, 0LL);
      v33 = BalanceConfig_TypeInfo->static_fields->QpMax - v20[24];
      this->fields.getQpValue = v33;
      v34 = v18->fields.num - v33;
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
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8812/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
  v36 = LocalizationManager__GetNumberFormat(v18->fields.num, 0LL);
  v37 = v20[24];
  v38 = (Il2CppObject *)v36;
  v39 = LocalizationManager__GetNumberFormat(v37, 0LL);
  v40 = BalanceConfig_TypeInfo;
  v41 = (Il2CppObject *)v39;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  v42 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v40->static_fields->QpMax, 0LL);
  v43 = System_String__Format_44569380(v35, v38, v41, v42, 0LL);
  v34 = v18->fields.num;
  v32 = v43;
LABEL_31:
  this->fields.overQpValue = v34;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11857/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11863/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v48 = v46;
  v49 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v7,
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
    v52 = (Il2CppObject *)static_fields->__9;
    onTransition = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(onTransition, v52, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0LL);
    v53 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v53->__9__68_1 = onTransition;
    sub_B52920(
      (BattleServantConfConponent_o *)&v53->__9__68_1,
      (System_Int32_array **)onTransition,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_44;
  ServantSellMaxAlertDialog__Open(
    qpMaxAlertDialog,
    getable,
    v32,
    getable,
    v44,
    v45,
    v48,
    v49,
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  Il2CppObject *current; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  CompleteMissionListViewItem_o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  __int64 *v24; // x8
  void *ObjectList; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w8
  void *v36; // x19
  unsigned __int64 v37; // x21
  signed __int64 v38; // x22
  UnityEngine_Object_o *v39; // x20
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B0849 & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_8901/*"MST_MISSION_EMPTY_TXT"*/);
    sub_B52984(&StringLiteral_8806/*"MISSION_EMPTY_TXT"*/);
    byte_42B0849 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v40,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v41 = v40;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v41.fields.current;
      itemList = this->fields.itemList;
      v18 = (CompleteMissionListViewItem_o *)sub_B52A54(CompleteMissionListViewItem_TypeInfo);
      CompleteMissionListViewItem___ctor(v18, (EventMissionEntity_o *)current, type, v19);
      if ( !itemList )
        sub_B52A5C(v20, v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_42B093C )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B093C = 1;
  }
  if ( EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = &StringLiteral_8806/*"MISSION_EMPTY_TXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = &StringLiteral_8901/*"MST_MISSION_EMPTY_TXT"*/;
  }
  ObjectList = LocalizationManager__Get((System_String_o *)*v24, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_42;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
  if ( !byte_42B093C )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42B093C = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v27);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.reDispAct,
      (System_Int32_array **)redispCallBack,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v28);
  if ( !ObjectList )
LABEL_42:
    sub_B52A5C(ObjectList, v26);
  v35 = *((_DWORD *)ObjectList + 6);
  v36 = ObjectList;
  if ( v35 >= 1 )
  {
    v37 = 0LL;
    v38 = v35;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v39 = *(UnityEngine_Object_o **)(*((_QWORD *)v36 + 2) + 8 * v37 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ObjectList = (void *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !v39 )
          goto LABEL_42;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)v39, 0LL);
      }
      if ( (__int64)++v37 >= v38 )
        break;
      v35 = *((_DWORD *)v36 + 6);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B084C & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_42B084C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (CompleteMissionListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == CompleteMissionListViewItem_TypeInfo )
    return (CompleteMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall CompleteMissionListViewManager__ModifyItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  WarEntity_o *Entity; // x20
  struct System_String_o *emptyMessage; // x8
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventMissionEntity_o *v9; // x8
  DataManager_o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  MissionListViewItem_o *current; // x22
  __int64 v14; // x10
  __int64 MissionId; // x0
  __int64 v16; // x1
  struct EventMissionEntity_o *v17; // x8
  int32_t v18; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v20; // x1
  struct ListViewObject_o *v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B085B & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewItem_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B085B = 1;
  }
  memset(&v23, 0, sizeof(v23));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_44;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         Instance,
                                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v9 = this->fields.missionToRecieve;
      if ( v9 )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int64_t)Instance,
                                        v9->fields.id,
                                        0LL);
          if ( this->fields.itemList )
          {
            v10 = Instance;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              &v22,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
              (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v23 = v22;
            while ( 1 )
            {
              v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v23,
                      (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v11 )
                break;
              current = (MissionListViewItem_o *)v23.fields.current;
              if ( !v23.fields.current
                || (v14 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v23.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
                || (CompleteMissionListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v14 - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_B52A5C(v11, v12);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v23.fields.current, 0LL);
              v17 = this->fields.missionToRecieve;
              if ( !v17 )
                sub_B52A5C(MissionId, v16);
              v18 = MissionId;
              if ( (_DWORD)MissionId == v17->fields.id )
              {
                if ( !byte_42ADD1C )
                {
                  MissionId = sub_B52984(&EventRewardSaveData_TypeInfo);
                  byte_42ADD1C = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v18;
                if ( !v10 )
                  sub_B52A5C(MissionId, v16);
                MissionListViewItem__ModifyItem(current, LODWORD(v10->fields.lookup) == 5, 0LL);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v21 = current->fields.viewObject;
                if ( !v21 )
                  sub_B52A5C(0LL, v20);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v21->klass->vtable._5_SetItem.method)(
                  v21,
                  current,
                  v21->klass->vtable._6_SetItem.methodPtr);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, Il2CppMethodPointer))current->klass->vtable._6_CheckMissionCond.method)(
                  current,
                  current->klass->vtable._7_SetGiftData.methodPtr);
            }
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v23,
              (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B52A5C(Instance, v4);
  }
}


void __fastcall CompleteMissionListViewManager__OnChangeAlphaAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_CompleteMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  __int64 v6; // x22

  if ( (byte_42B0863 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_42B0863 = 1;
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      ObjectList = (System_Collections_Generic_List_CompleteMissionListViewObject__o *)ObjectList->fields._items->m_Items[v6];
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v4);
      if ( (int)++v6 >= size )
        return;
    }
LABEL_12:
    sub_B52A5C(ObjectList, v4);
  }
}


void __fastcall CompleteMissionListViewManager__OnClickFilterList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_42B084F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B084F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_327C058[filterStatus];
  CompleteMissionListViewManager__setList(this, v3);
}


void __fastcall CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v7; // x10
  PlayMakerFSM_o *v8; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v10; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42B084D & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewObject_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_15503/*"Wait_Action"*/);
    byte_42B084D = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_21;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15503/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (v7 = *(&CompleteMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem(
                                        (CompleteMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_21:
    sub_B52A5C(targetFSM, obj);
  }
  v8 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)(*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
                                                       targetFSM,
                                                       targetFSM->klass[1]._1.this_arg.data);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v8,
                                                             v10),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v8[5].monitor) )
  {
    if ( LODWORD(v8[4].fields.addEventHandlers) == 3
      && (v8[3].fields.m_CachedPtr != 1 || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v10)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v8, 0LL);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v12);
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
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v8, 0LL);
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

  if ( (byte_42B0855 & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
    byte_42B0855 = 1;
  }
  v9 = sub_B52A54(CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
  CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50___ctor(
    (CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = rewards;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)rewards, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 56) = rewardDetail;
  sub_B52920(
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
  System_Collections_Generic_List_CompleteMissionListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_CompleteMissionListViewObject__o *v5; // x20
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

  if ( (byte_42B084E & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_42B084E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, method);
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
      || (v8 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (CompleteMissionListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v8 - 1] != CompleteMissionListViewItem_TypeInfo )
    {
      sub_B52A5C(v6, v7);
    }
    v9 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      if ( (CompleteMissionListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v9 - 1] == CompleteMissionListViewItem_TypeInfo )
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
        ObjectList = (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v5->fields._items->m_Items[v13];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_CompleteMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
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


void __fastcall CompleteMissionListViewManager__SetOpenItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct CompleteMissionListViewItem_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v19; // x2
  float openItemTime; // s8
  System_Action_o *v21; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B085C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager_modifyOpenItem__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_B52984(&StringLiteral_18331/*"ef_mission_extric01"*/);
    byte_42B085C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B52A5C(0LL, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v22,
        ObjectList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v23 = v22;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v23,
               (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v23.fields.current;
        if ( !v23.fields.current )
          sub_B52A5C(v5, v6);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v23.fields.current,
                                          v6);
        v10 = (struct CompleteMissionListViewItem_o *)Item;
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
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_18331/*"ef_mission_extric01"*/, transform, v19);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v23,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0LL);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v21, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)svts,
    (System_String_array **)cmds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_B52920(
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
    sub_B52A5C(v16, v17);
  id = missionToRecieve->fields.id;
  if ( !byte_42ADD1C )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42ADD1C = 1;
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

  if ( (byte_42B0860 & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
    byte_42B0860 = 1;
  }
  v3 = sub_B52A54(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
  CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64___ctor(
    (CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  float endEffectTime; // s8
  System_Action_o *v4; // x20

  if ( (byte_42B0866 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager_actionAfterCallback__);
    byte_42B0866 = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v4, 0LL);
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
    sub_B52920(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


void __fastcall CompleteMissionListViewManager__afterReward(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B0856 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B52984(&StringLiteral_5524/*"END_EFFECT"*/);
    byte_42B0856 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5524/*"END_EFFECT"*/, 0LL);
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
  if ( (byte_42B085F & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B085F = 1;
  }
  missionToRecieve = v2->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CompleteMissionListViewManager__checkAcceptable(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v6; // x8
  int64_t v7; // x20
  int64_t v8; // x21
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BalanceConfig_c *v17; // x0
  __int64 *v18; // x8
  CompleteMissionListViewManager___c_c *v19; // x0
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v22; // x21
  struct CompleteMissionListViewManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42B0852 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__);
    sub_B52984(&CompleteMissionListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_12329/*"SHOW_MSG"*/);
    sub_B52984(&StringLiteral_11224/*"REWARD_ACCEPTABLE"*/);
    byte_42B0852 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_40;
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v6 = this->fields.missionToRecieve;
  if ( !v6 )
    goto LABEL_40;
  if ( v6->fields.rewardType == 1 )
  {
    v7 = Instance;
    if ( !Instance )
      goto LABEL_40;
    if ( Gift__IsServant_28236324(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                *(_DWORD *)(v7 + 24),
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v8 = Instance;
            if ( !SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
              && !SvtType__IsStatusUp(*(_DWORD *)(v8 + 84), 0LL) )
            {
              goto LABEL_27;
            }
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                VaildList = UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
                Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          *(_DWORD *)(v7 + 24),
                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v17 = BalanceConfig_TypeInfo;
                      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v17 = BalanceConfig_TypeInfo;
                      }
                      if ( v17->static_fields->PresentBoxMax > (signed int)VaildList->max_length )
                        goto LABEL_27;
                      v19 = CompleteMissionListViewManager___c_TypeInfo;
                      if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
                        v19 = CompleteMissionListViewManager___c_TypeInfo;
                      }
                      static_fields = v19->static_fields;
                      _9__46_0 = static_fields->__9__46_0;
                      if ( !_9__46_0 )
                      {
                        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v19);
                          static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        }
                        v22 = (Il2CppObject *)static_fields->__9;
                        _9__46_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__46_0,
                          v22,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0LL);
                        v23 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        v23->__9__46_0 = _9__46_0;
                        sub_B52920(
                          (BattleServantConfConponent_o *)&v23->__9__46_0,
                          (System_Int32_array **)_9__46_0,
                          v24,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_B52920(
                        (BattleServantConfConponent_o *)&this->fields.ShowMSG,
                        (System_Int32_array **)_9__46_0,
                        v11,
                        v12,
                        v13,
                        v14,
                        v15,
                        v16);
                      Instance = (int64_t)this->fields.targetFSM;
                      if ( Instance )
                      {
                        v18 = &StringLiteral_12329/*"SHOW_MSG"*/;
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
      sub_B52A5C(Instance, v4);
    }
  }
LABEL_27:
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_40;
  v18 = &StringLiteral_11224/*"REWARD_ACCEPTABLE"*/;
LABEL_29:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0LL);
}


bool __fastcall CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v5; // x19

  if ( (byte_42B0862 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0862 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v4 = *(_QWORD *)&Instance[9].fields.m_CachedPtr) == 0
    || (v5 = *(System_Collections_Generic_List_EventMissionEntity__o **)(v4 + 120),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v5, 0LL), !v5)
    || !Instance )
  {
    sub_B52A5C(Instance, v3);
  }
  return v5->fields._size - 1 == LODWORD(Instance->fields.datalist);
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
  BattleServantConfConponent_o *static_fields; // x0
  AutomatedAction_o *Instance; // x0
  __int64 v12; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v14; // x1
  struct EventMissionEntity_o *v15; // x8

  if ( (byte_42B0859 & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_42B0859 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewManager_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B52920(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0LL) )
    {
      if ( this->fields.filterStatus )
      {
        this->fields.filterStatus = 0;
        CompleteMissionListViewManager__setList(this, v14);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v14);
    }
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v15 = this->fields.missionToRecieve;
    if ( !v15 || !Instance )
LABEL_13:
      sub_B52A5C(Instance, v12);
    AutomatedAction__SetMissionAction(Instance, v15->fields.id, 5, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CompleteMissionListViewManager__getEffect(
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

  if ( (byte_42B085A & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&CompleteMissionListViewManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B085A = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
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


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  CompleteMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B0848 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0848 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
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
      Component_srcLineSprite = (CompleteMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)current,
                                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(Component_srcLineSprite, v10);
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B0847 & 1) == 0 )
  {
    sub_B52984(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
    byte_42B0847 = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_1F6F894 *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void __fastcall CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_42B0858 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager_endloadEffect__);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&StringLiteral_5884/*"Effect/EventMission"*/);
    byte_42B0858 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5884/*"Effect/EventMission"*/, v3, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__modifyOpenItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v9; // x1
  void *v10; // x0
  System_Action_o *v11; // x20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B085D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&CompleteMissionListViewItem_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B085D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B52A5C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v13,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v13.fields.current;
      if ( !v13.fields.current
        || (v7 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v13.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7)
        || (CompleteMissionListViewItem_c *)v13.fields.current->klass->_2.typeHierarchy[v7 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_B52A5C(v4, v5);
      }
      monitor = (UnityEngine_Object_o *)v13.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v10 = current[6].monitor;
        if ( !v10 )
          sub_B52A5C(0LL, v9);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v10 + 392LL))(
          v10,
          current,
          *(_QWORD *)(*(_QWORD *)v10 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v11, 0LL);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v13; // x21
  ListViewItem_o *v14; // x8
  __int64 v15; // x11
  __int64 v16; // x11
  MissionListViewItem_o *v17; // x0
  int32_t v18; // w0

  v10 = this;
  if ( (byte_42B084B & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (CompleteMissionListViewManager_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B084B = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B52920(
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
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v14 = itemList->fields._items->m_Items[v13];
      if ( !v14 )
        break;
      v15 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (CompleteMissionListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        break;
      }
      v16 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
        v17 = (CompleteMissionListViewItem_c *)v14->klass->_2.typeHierarchy[v16 - 1] == CompleteMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v13]
            : 0LL;
      else
        v17 = 0LL;
      this = (CompleteMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v17, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v13 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B52A5C(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v13) = 0;
LABEL_24:
  if ( ListViewManager__MoveTopItem((ListViewManager_o *)v10, v13, 1, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v18 = 0;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v18 = 2;
  }
  SoundManager__playSystemSe(v18, 0LL);
}


void __fastcall CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  WarEntity_o *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  CommonUI_o *v11; // x20
  CompleteMissionListViewManager___c_c *v12; // x8
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v15; // x22
  struct CompleteMissionListViewManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x0
  System_String_o *countText; // [xsp+38h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42B0861 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__);
    sub_B52984(&CompleteMissionListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_23858/*"{0}×{1}"*/);
    sub_B52984(&StringLiteral_15877/*"[^0-9]"*/);
    sub_B52984(&StringLiteral_3314/*"COMPLETE_MISSION_ACTION_SUCCESS"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_1022/*"1"*/);
    byte_42B0861 = 1;
  }
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  countText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_35;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_35;
  if ( !touchBlockObj )
    goto LABEL_35;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_35;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
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
    v23 = sub_B52A88(touchBlockObj);
    sub_B52A28(v23, 0LL);
  }
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_35;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0LL);
  if ( System_String__IsNullOrEmpty(nameText, 0LL) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0LL) )
  {
    v7 = countText;
    if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    }
    v8 = System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15877/*"[^0-9]"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
    if ( System_String__op_Inequality(v8, (System_String_o *)StringLiteral_1022/*"1"*/, 0LL) )
      nameText = System_String__Format_44563852(
                   (System_String_o *)StringLiteral_23858/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3314/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0LL);
  v10 = System_String__Format(v9, (Il2CppObject *)nameText, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)touchBlockObj;
  v12 = CompleteMissionListViewManager___c_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v12 = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__65_0 = static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__65_0, v15, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0LL);
    v16 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v16->__9__65_0 = _9__65_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__65_0,
      (System_Int32_array **)_9__65_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v11 )
LABEL_35:
    sub_B52A5C(touchBlockObj, method);
  CommonUI__OpenNotificationDialog(v11, 0LL, v10, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventMissionEntity_o *v20; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3

  if ( (byte_42B0851 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__);
    sub_B52984(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_42B0851 = 1;
  }
  v5 = sub_B52A54(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass45_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v5,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = missionEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)missionEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v20 = *(EventMissionEntity_o **)(v5 + 24);
  v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0LL);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v20, v21, v22);
}


void __fastcall CompleteMissionListViewManager__setAfterAction(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_42B0857 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_42B0857 = 1;
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
    sub_B52A5C(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall CompleteMissionListViewManager__setList(
        CompleteMissionListViewManager_o *this,
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
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  UILabel_o *v16; // x21
  bool v17; // w2
  struct ListViewSort_o *v18; // x8
  int v19; // w9
  int32_t filterStatus; // w19

  if ( (byte_42B0850 & 1) == 0 )
  {
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8901/*"MST_MISSION_EMPTY_TXT"*/);
    sub_B52984(&StringLiteral_17164/*"btn_txt_completed"*/);
    sub_B52984(&StringLiteral_17197/*"btn_txt_receipt"*/);
    sub_B52984(&StringLiteral_17196/*"btn_txt_progress"*/);
    sub_B52984(&StringLiteral_8806/*"MISSION_EMPTY_TXT"*/);
    sub_B52984(&StringLiteral_17147/*"btn_txt_all"*/);
    byte_42B0850 = 1;
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
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8806/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_44:
    sub_B52A5C(operationSortInfo, v14);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17147/*"btn_txt_all"*/, v15);
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
      v16 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8901/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v16 )
        goto LABEL_44;
      UILabel__set_text(v16, operationSortInfo, 0LL);
      goto LABEL_37;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17197/*"btn_txt_receipt"*/, v15);
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
      v18 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      v19 = 1;
      goto LABEL_39;
    case 2:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17196/*"btn_txt_progress"*/, v15);
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
      v17 = 0;
      goto LABEL_35;
    case 3:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17164/*"btn_txt_completed"*/, v15);
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
      v17 = 1;
LABEL_35:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v17, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_37:
      v18 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_44;
      v19 = 13;
LABEL_39:
      v18->fields.sortKind = v19;
LABEL_40:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_44;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_42B093D )
      {
        sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42B093D = 1;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v13; // x21
  ListViewItem_o *v14; // x8
  __int64 v15; // x11
  __int64 v16; // x11
  MissionListViewItem_o *v17; // x0
  System_Action_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v10 = this;
  if ( (byte_42B084A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&CompleteMissionListViewItem_TypeInfo);
    sub_B52984(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CompleteMissionListViewManager_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_42B084A = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B52920(
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
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v14 = itemList->fields._items->m_Items[v13];
      if ( !v14 )
        break;
      v15 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (CompleteMissionListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        break;
      }
      v16 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
        v17 = (CompleteMissionListViewItem_c *)v14->klass->_2.typeHierarchy[v16 - 1] == CompleteMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v13]
            : 0LL;
      else
        v17 = 0LL;
      this = (CompleteMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v17, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v13 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B52A5C(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v13) = 0;
LABEL_24:
  v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v10,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0LL);
  v10->fields.callbackAfterScroll = v18;
  sub_B52920(
    (BattleServantConfConponent_o *)&v10->fields.callbackAfterScroll,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ListViewManager__MoveTopItem((ListViewManager_o *)v10, v13, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setOpenPanel(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v13; // x8
  WarEntity_o *Entity; // x21
  __int64 v15; // x8
  System_Int32_array **Component_WebViewObject; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x8
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  WebViewObject_o *v32; // x22
  __int64 v33; // x8
  UISprite_o *v34; // x20
  Il2CppObject *v35; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x20
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  int v39; // [xsp+8h] [xbp-28h] BYREF
  int v40; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B085E & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B52984(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_B52984(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__);
    sub_B52984(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
    sub_B52984(&StringLiteral_4242/*"CompleteMission/{0}/{1}"*/);
    byte_42B085E = 1;
  }
  v3 = sub_B52A54(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
  CompleteMissionListViewManager___c__DisplayClass61_0___ctor(
    (CompleteMissionListViewManager___c__DisplayClass61_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_43;
  *(_QWORD *)(v3 + 40) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0LL);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_43;
  *(_DWORD *)(v3 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v13 = this->fields.missionToRecieve;
  if ( !v13 )
    goto LABEL_43;
  if ( !touchBlockObj )
    goto LABEL_43;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)touchBlockObj,
             v13->fields.missionTargetId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v15 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v15 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v15 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
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
                                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v3 + 16) = Component_WebViewObject;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), Component_WebViewObject, v17, v18, v19, v20, v21, v22);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v23 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v23 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v23 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
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
  v24 = (System_Int32_array **)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)touchBlockObj,
                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v3 + 32) = v24;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), v24, v25, v26, v27, v28, v29, v30);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v31 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v31 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v31 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToNumObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_43;
  v32 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_43;
  v33 = *(_QWORD *)&touchBlockObj[51].fields.m_CachedPtr;
  if ( !v33 )
    goto LABEL_43;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v33 + 24);
  if ( !touchBlockObj )
    goto LABEL_43;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
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
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v32)
    || (v34 = (UISprite_o *)touchBlockObj) == 0LL
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v32[4].monitor, 0LL),
        UISprite__set_spriteName(v34, *(System_String_o **)&v32[4].fields.m_CachedPtr, 0LL),
        !Entity) )
  {
LABEL_43:
    sub_B52A5C(touchBlockObj, v5);
  }
  v40 = *(&Entity->fields.id + 1);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v39 = *(_DWORD *)(v3 + 24);
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v37 = System_String__Format_44563852((System_String_o *)StringLiteral_4242/*"CompleteMission/{0}/{1}"*/, v35, v36, 0LL);
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v3,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v37, v38, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_B52A5C(this, method);
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
    sub_B52A5C(0LL, method);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall CompleteMissionListViewManager__unAcceptableDlg(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0

  if ( (byte_42B0853 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5529/*"END_NOTICE"*/);
    byte_42B0853 = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B52A5C(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5529/*"END_NOTICE"*/, 0LL);
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
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v5; // x21
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o **p__8__1; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  void *_8__1; // x0
  System_Int32_array **v20; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v21; // x8
  __int64 v22; // x8
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  BattleServantConfConponent_o *p_anim_5__2; // x20
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
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  WebViewManager_o *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v48; // x23
  CommonUI_o *v49; // x19
  MissionRewardGetDialog_ClickDelegate_o *v50; // x22

  if ( (byte_42AE2B7 & 1) == 0 )
  {
    sub_B52984(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__);
    sub_B52984(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_42AE2B7 = 1;
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
    v5 = (Il2CppObject *)sub_B52A54(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v5;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_26;
    v20 = (System_Int32_array **)this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v20;
    sub_B52920((BattleServantConfConponent_o *)((char *)_8__1 + 16), v20, v13, v14, v15, v16, v17, v18);
    if ( !*p__8__1 )
      goto LABEL_26;
    (*p__8__1)->fields.isCompleteMission = this->fields.isCompleteMission;
    v21 = this->fields.__8__1;
    if ( !v21 )
      goto LABEL_26;
    if ( !v21->fields.isCompleteMission )
      goto LABEL_23;
    if ( !_4__this )
      goto LABEL_26;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0LL);
    _8__1 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_26;
    v22 = *((_QWORD *)_8__1 + 155);
    if ( !v22 )
      goto LABEL_26;
    _8__1 = *(void **)(v22 + 24);
    if ( !_8__1 )
      goto LABEL_26;
    Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)_8__1,
                                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = Component_WebViewObject;
    p_anim_5__2 = (BattleServantConfConponent_o *)&this->fields._anim_5__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._anim_5__2,
      (System_Int32_array **)Component_WebViewObject,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
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
      sub_B52920((BattleServantConfConponent_o *)p__2__current, 0LL, v31, v32, v33, v34, v35, v36);
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
    sub_B52920(p_anim_5__2, 0LL, v39, v40, v41, v42, v43, v44);
LABEL_23:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v48 = (Il2CppObject *)this->fields.__8__1;
    v49 = (CommonUI_o *)Instance;
    v50 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B52A54(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v50,
      v48,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0LL);
    if ( v49 )
    {
      CommonUI__OpenMissionRewardGetDialog(v49, rewards, rewardDetail, v50, 0, 0LL);
      return 0;
    }
LABEL_26:
    sub_B52A5C(_8__1, method);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  int32_t _1__state; // w8
  CompleteMissionListViewManager_o *_4__this; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v6; // x8
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  struct UnityEngine_Animation_o **p_anim_5__2; // x21
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
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42AE2B8 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE2B8 = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    v6 = *(_QWORD *)&Instance[51].fields.m_CachedPtr;
    if ( !v6 )
      goto LABEL_17;
    Instance = *(UnityEngine_Component_o **)(v6 + 24);
    if ( !Instance )
      goto LABEL_17;
    Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  Instance,
                                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = Component_WebViewObject;
    p_anim_5__2 = &this->fields._anim_5__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields._anim_5__2,
      (System_Int32_array **)Component_WebViewObject,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
        sub_B52920((BattleServantConfConponent_o *)p__2__current, 0LL, v15, v16, v17, v18, v19, v20);
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
    sub_B52A5C(Instance, method);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE2AB & 1) == 0 )
  {
    sub_B52984(&CompleteMissionListViewManager___c_TypeInfo);
    byte_42AE2AB = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(CompleteMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AE2AE & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE2AE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(Instance, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x19
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20
  CompleteMissionListViewManager___c_c *v6; // x8
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__46_1; // x22
  System_String_o *v9; // x21
  Il2CppObject *v10; // x23
  struct CompleteMissionListViewManager___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42AE2AC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__);
    sub_B52984(&CompleteMissionListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_8800/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE2AC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8800/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v5 = v3;
  v6 = CompleteMissionListViewManager___c_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v6 = CompleteMissionListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__46_1 = static_fields->__9__46_1;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__46_1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__46_1, v10, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0LL);
    v11 = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    v11->__9__46_1 = _9__46_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v11->__9__46_1,
      (System_Int32_array **)_9__46_1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !Instance )
    sub_B52A5C(v3, v4);
  CommonUI__OpenNotificationDialog(Instance, v9, v5, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AE2AD & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE2AD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
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
  if ( (byte_42AE2AF & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_B52984(&StringLiteral_8796/*"MISSIONN_REWARD"*/);
    byte_42AE2AF = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (missionEntity = (System_Int32_array **)v8->fields.missionEntity,
        _4__this->fields.missionToRecieve = (struct EventMissionEntity_o *)missionEntity,
        sub_B52920(
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
    sub_B52A5C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8796/*"MISSIONN_REWARD"*/, 0LL);
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

  if ( (byte_42AE2B1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE2B1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AE2B0 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE2B0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
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
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v5; // x8
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v7; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v8; // x8
  System_String_o *v9; // x21
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v10; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v11; // x8
  System_String_o *v12; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v13; // x8
  System_String_o *v14; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v15; // x8
  System_String_o *v16; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v17; // x8
  System_String_o *v18; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v19; // x8
  struct CompleteMissionListViewManager_o *v20; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v21; // x8
  struct CompleteMissionListViewManager_o *v22; // x8
  System_String_o *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  _QWORD **v26; // x23
  __int64 v27; // x22
  __int16 v28; // w8
  __int64 v29; // x22
  __int64 v30; // x22
  __int64 v31; // x22
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v32; // x8
  struct CompleteMissionListViewManager_o *v33; // x8
  System_String_o *v34; // x21
  Il2CppObject *NumberFormat; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v36; // x8
  CompleteMissionListViewManager_o *v37; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v38; // x22
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v39; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v2 = this;
  if ( (byte_42AE2B2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_object___);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_8813/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_B52984(&StringLiteral_8799/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_B52984(&StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/);
    sub_B52984(&StringLiteral_31/*"\n \n"*/);
    sub_B52984(&StringLiteral_32/*"\n \n "*/);
    sub_B52984(&StringLiteral_8814/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_B52984(&StringLiteral_8805/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_42AE2B2 = 1;
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
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_81;
  ActionExtensions__Call(v5->fields.callback, 0LL);
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_81;
  if ( giftList->fields._size < 1 )
  {
    v10 = v2->fields.CS___8__locals1;
    if ( v10 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v10->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, 0LL);
        v11 = v2->fields.CS___8__locals1;
        if ( v11 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v11->fields.__4__this;
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
  v7 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v7, 0LL);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v8->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_81;
  v9 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                            this,
                            this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v9, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemNum >= 2 )
    {
      if ( !v9 )
        goto LABEL_81;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_44632052(
                                                                         v9,
                                                                         0,
                                                                         v9->fields.m_stringLength - 2,
                                                                         0LL);
      if ( !v7 )
        goto LABEL_81;
      System_Text_StringBuilder__Append_42994048(v7, (System_String_o *)this, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8799/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42994048(
                                                                         v7,
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
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0LL);
      if ( !v7 )
        goto LABEL_81;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v7,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v9,
                                                                         0LL);
    }
    v13 = v2->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v13->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_81;
    v14 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v14, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42994048(
                                                                         v7,
                                                                         (System_String_o *)StringLiteral_32/*"\n \n "*/,
                                                                         0LL);
  }
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v15->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_81;
  v16 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v16, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v17 = v2->fields.CS___8__locals1;
    if ( !v17 )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v17->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_81;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                       this,
                                                                       this->klass[1]._1.image);
    if ( !v7 )
      goto LABEL_81;
    System_Text_StringBuilder__Append_42994048(v7, (System_String_o *)this, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8805/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_42994048(
                                                                       v7,
                                                                       v18,
                                                                       0LL);
  }
  v19 = v2->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_81;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_81;
  if ( v20->fields.isQpMaxAlert )
  {
    if ( v20->fields.isQpAlreadyMax )
    {
      if ( v7 )
      {
        if ( v2->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_42994048(v7, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
        else
          System_Text_StringBuilder__set_Length(v7, 0, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8813/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0LL);
        v32 = v2->fields.CS___8__locals1;
        if ( v32 )
        {
          v33 = v32->fields.__4__this;
          if ( v33 )
          {
            v34 = (System_String_o *)this;
            NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v33->fields.overQpValue, 0LL);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v7,
                                                                               v34,
                                                                               NumberFormat,
                                                                               0LL);
            goto LABEL_75;
          }
        }
      }
LABEL_81:
      sub_B52A5C(this, method);
    }
    if ( !v7 )
      goto LABEL_81;
    System_Text_StringBuilder__Append_42994048(v7, (System_String_o *)StringLiteral_31/*"\n \n"*/, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8814/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0LL);
    v21 = v2->fields.CS___8__locals1;
    if ( !v21 )
      goto LABEL_81;
    v22 = v21->fields.__4__this;
    if ( !v22 )
      goto LABEL_81;
    v23 = (System_String_o *)this;
    v24 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22->fields.overQpValue, 0LL);
    v25 = System_String__Format(v23, v24, 0LL);
    v26 = (_QWORD **)Method_System_Array_Empty_object___;
    v27 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v28 = *(_WORD *)(v27 + 306);
    if ( (v28 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v28 = *(_WORD *)(v27 + 306);
    }
    if ( (v28 & 0x400) != 0 )
    {
      v29 = *v26[6];
      if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
        sub_AEB684(*v26[6]);
      if ( !*(_DWORD *)(v29 + 224) )
      {
        v30 = *v26[6];
        if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
          sub_AEB684(*v26[6]);
        j_il2cpp_runtime_class_init_0(v30);
      }
    }
    v31 = *v26[6];
    if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
      sub_AEB684(*v26[6]);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_43000796(
                                                                       v7,
                                                                       v25,
                                                                       **(System_Object_array ***)(v31 + 184),
                                                                       0LL);
  }
LABEL_75:
  v36 = v2->fields.CS___8__locals1;
  if ( !v36 )
    goto LABEL_81;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v2->fields.giftList;
  if ( !this )
    goto LABEL_81;
  v37 = v36->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v7 )
    goto LABEL_81;
  v38 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                                                                     v7,
                                                                     v7->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v39 = v2->fields.CS___8__locals1;
  if ( !v39 || !v37 )
    goto LABEL_81;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v37,
             (GiftEntity_array *)v38,
             (System_String_o *)this,
             v39->fields.isCompleteMission,
             0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)v37, Dialog, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v2 = this;
  if ( (byte_42AE2B3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__);
    byte_42AE2B3 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_B52920(
      (BattleServantConfConponent_o *)&v2->fields.__9__3,
      (System_Int32_array **)_9__3,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !_4__this )
LABEL_8:
    sub_B52A5C(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v7; // x8
  WebViewManager_o *v8; // x0
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v10; // x21
  System_String_o *v11; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v12; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42AE2B4 & 1) == 0 )
  {
    sub_B52984(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__);
    sub_B52984(&StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/);
    byte_42AE2B4 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v7 = this->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_16;
  ActionExtensions__Call(v7->fields.callback, 0LL);
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v10 = (CommonUI_o *)v8;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v11, (Il2CppObject *)this->fields.sendName, 0LL);
  v12 = this->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_16;
  _9__4 = v12->fields.__9__4;
  v14 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B52A54(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v12,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0LL);
    v12->fields.__9__4 = _9__4;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->fields.__9__4,
      (System_Int32_array **)_9__4,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v10 )
LABEL_16:
    sub_B52A5C(Instance, v4);
  CommonUI__OpenMissionRewardGetDialog_18227188(v10, rwdSetEnt, v14, _9__4, 0LL);
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

  if ( (byte_42AE2B5 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AE2B5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B52A5C(Instance, v4);
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct UITexture_o *tex; // x21
  Il2CppObject *v8; // x0
  struct UITexture_o *animTex; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  struct MasterMissionComponent_o *masterMissionComp; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct MasterMissionComponent_o *v14; // x8
  struct CompleteMissionListViewManager_o *v15; // x8
  struct MasterMissionComponent_o *v16; // x8
  struct CompleteMissionListViewManager_o *v17; // x8
  struct CompleteMissionListViewManager_o *v18; // x19
  float endEffectTime; // s8
  System_Action_o *v20; // x20
  int32_t v21; // [xsp+8h] [xbp-48h] BYREF
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42AE2B6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&Method_CompleteMissionListViewManager_animAfterCallback__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    byte_42AE2B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_23732/*"{0}"*/, v8, 0LL);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
    tex,
    Instance,
    tex->klass->vtable._28_get_shader.methodPtr);
  animTex = this->fields.animTex;
  v21 = this->fields.completeMissionPanelChildIdx;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v11 = System_String__Format((System_String_o *)StringLiteral_23732/*"{0}"*/, v10, 0LL);
  Instance = (CommonUI_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             backPanel,
                             v11,
                             (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))animTex->klass->vtable._27_set_mainTexture.method)(
    animTex,
    Instance,
    animTex->klass->vtable._28_get_shader.methodPtr);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v14 = Instance->fields.masterMissionComp;
  if ( !v14 )
    goto LABEL_30;
  Instance = (CommonUI_o *)v14->fields.myFsm;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v15->fields.distanceToTexObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v16 = Instance->fields.masterMissionComp;
  if ( !v16
    || (Instance = (CommonUI_o *)v16->fields.myFsm) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0LL),
        (v17 = this->fields.__4__this) == 0LL)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v17->fields.distanceToEfPanelObj,
                                   0LL)) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (v18 = this->fields.__4__this) == 0LL) )
  {
LABEL_30:
    sub_B52A5C(Instance, v6);
  }
  endEffectTime = v18->fields.endEffectTime;
  v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v18, Method_CompleteMissionListViewManager_animAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v18, endEffectTime, v20, 0LL);
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
    sub_B52A5C(0LL, method);
  System_Action__Invoke(decideCallback, 0LL);
}