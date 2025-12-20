void CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B26A & 1) == 0 )
  {
    sub_1C94098(&MissionListViewManager_TypeInfo);
    byte_4D2B26A = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
}


void CompleteMissionListViewManager__AcceptReward(
        CompleteMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 Master_object; // x0
  Il2CppObject *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v21; // x20
  struct EventMissionEntity_o *v22; // x8
  __int64 v23; // x8
  __int64 v24; // x20
  unsigned __int64 v25; // x23
  __int64 v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Object_array *v33; // x27
  il2cpp_array_size_t max_length; // x8
  char *v35; // x0
  System_Text_StringBuilder_o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Text_StringBuilder_o *v43; // x0
  System_Text_StringBuilder_o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  Il2CppObject **v58; // x21
  System_Object_array *v59; // x8
  int v60; // w28
  unsigned int v61; // w9
  __int64 v62; // x27
  Il2CppObject *v63; // x8
  Il2CppObject *v64; // x8
  Il2CppObject *v65; // x8
  Il2CppObject *v66; // x8
  EventRewardSetEntity_o *SetRewardData; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x1
  Il2CppObject **v81; // x22
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x21
  System_Action_o *v84; // x22
  System_Collections_Generic_List_object__o *v85; // x26
  System_Collections_Generic_List_object__o *v86; // x22
  const MethodInfo_3ABA574 **v87; // x23
  unsigned int v88; // w29
  Il2CppObject *v89; // x8
  Il2CppObject *v90; // x8
  ServantEntity_o *v91; // x24
  bool IsCombineMaterial; // w25
  Il2CppObject *v93; // x8
  System_String_o *v94; // x0
  Il2CppObject *v95; // x8
  Il2CppObject *v96; // x24
  Il2CppObject *v97; // x0
  Il2CppObject *v98; // x24
  System_Text_StringBuilder_o *monitor; // x25
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  struct System_Object_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  Il2CppClass **v109; // x0
  Il2CppObject *v110; // x8
  Il2CppObject *v111; // x8
  bool IsCountableWithPlus; // w0
  Il2CppObject **v113; // x8
  Il2CppObject *v114; // x25
  System_Text_StringBuilder_o *v115; // x24
  const MethodInfo_3ABA574 **v116; // x20
  int64_t monitor_high; // x23
  Il2CppObject *v118; // x8
  System_Collections_Generic_List_object__o *v119; // x19
  System_String_o *v120; // x26
  Il2CppObject *v121; // x0
  __int64 v122; // x8
  System_Text_StringBuilder_o *v123; // x25
  __int64 v124; // x8
  System_Collections_Generic_List_object__o *v125; // x0
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  System_Collections_Generic_List_object__o *v129; // x21
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  System_Action_o *v136; // x21
  Il2CppObject *v137; // x0
  EventRewardSetEntity_o *v138; // x20
  CommonUI_o *v139; // x23
  System_String_o *v140; // x0
  System_String_o *v141; // x0
  Il2CppObject *v142; // x24
  System_String_o *v143; // x21
  MissionRewardGetDialog_ClickDelegate_o *v144; // x22
  __int64 v145; // x0
  CompleteMissionListViewManager_o *v146; // [xsp+8h] [xbp-98h]
  __int64 v147; // [xsp+10h] [xbp-90h]
  int64_t v148; // [xsp+18h] [xbp-88h] BYREF
  Il2CppObject *v149; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v150; // [xsp+28h] [xbp-78h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D2B259 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Array_Resize_GiftEntity___);
    sub_1C94098(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity___ctor___78993752);
    sub_1C94098(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__);
    sub_1C94098(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__);
    sub_1C94098(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
    sub_1C94098(&StringLiteral_8697/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1C94098(&StringLiteral_8696/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C94098(&StringLiteral_25467/*"{0}×{1:#,0}"*/);
    sub_1C94098(&StringLiteral_25520/*"×"*/);
    sub_1C94098(&StringLiteral_8692/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1C94098(&StringLiteral_49/*"\n "*/);
    sub_1C94098(&StringLiteral_25829/*"＋"*/);
    byte_4D2B259 = 1;
  }
  v150 = 0;
  entity = 0;
  v149 = 0;
  v5 = sub_1C942E4(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_52;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_52;
  v21 = (GiftMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_52;
  array = (System_Object_array *)GiftMaster__GetGiftListById(
                                   (GiftMaster_o *)Master_object,
                                   missionToRecieve->fields.giftId,
                                   0);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v22 = this->fields.missionToRecieve;
  if ( !v22 || !Master_object )
    goto LABEL_52;
  Master_object = CompleteMissionMaster__TryGetEntityFromObjectId(
                    (CompleteMissionMaster_o *)Master_object,
                    &entity,
                    v22->fields.id,
                    0);
  *(_BYTE *)(v5 + 48) = Master_object & 1;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_52;
    Master_object = (__int64)GiftMaster__GetGiftListById(v21, entity->fields.giftId, 0);
    if ( !Master_object )
      goto LABEL_52;
    v23 = *(_QWORD *)(Master_object + 24);
    v24 = Master_object;
    if ( (int)v23 >= 1 )
    {
      v25 = 0;
      while ( v25 < (unsigned int)v23 )
      {
        if ( !array )
          goto LABEL_52;
        v26 = *(_QWORD *)(v24 + 32 + 8 * v25);
        System_Array__Resize_object_(
          &array,
          LODWORD(array->max_length) + 1,
          (const MethodInfo_315A0D4 *)Method_System_Array_Resize_GiftEntity___);
        v33 = array;
        if ( !array )
          goto LABEL_52;
        if ( v26 )
        {
          Master_object = sub_1C941D4(v26, array->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v145 = sub_1C94314(0);
            sub_1C941C0(v145, 0);
          }
        }
        max_length = v33->max_length;
        if ( !(_DWORD)max_length )
          break;
        v35 = (char *)v33 + ((__int64)((max_length << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v35 + 4) = v26;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 32), v26, v27, v28, v29, v30, v31, v32);
        LODWORD(v23) = *(_DWORD *)(v24 + 24);
        if ( (__int64)++v25 >= (int)v23 )
          goto LABEL_22;
      }
LABEL_158:
      sub_1C942F8(Master_object);
    }
  }
LABEL_22:
  v36 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v36, 0);
  *(_QWORD *)(v5 + 40) = v36;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v43, 0);
  v44 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v44, 0);
  *(_QWORD *)(v5 + 32) = v44;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = sub_1C942E4(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v51, 0);
  if ( !v51 )
    goto LABEL_52;
  *(_QWORD *)(v51 + 48) = v5;
  v58 = (Il2CppObject **)(v51 + 48);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v51 + 48), v5, v52, v53, v54, v55, v56, v57);
  Master_object = (__int64)this->fields.missionToRecieve;
  if ( !Master_object )
    goto LABEL_52;
  if ( *(_DWORD *)(Master_object + 80) != 1 )
  {
    SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Master_object, 0);
    *(_QWORD *)(v51 + 32) = SetRewardData;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v51 + 32), (int32_t)SetRewardData, v68, v69, v70, v71, v72, v73);
    if ( *(_QWORD *)(v51 + 32) )
    {
      v80 = *(_QWORD *)(*(_QWORD *)(v51 + 32) + 32LL);
      *(_QWORD *)(v51 + 40) = v80;
      v81 = (Il2CppObject **)(v51 + 40);
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v51 + 40), v80, v74, v75, v76, v77, v78, v79);
      getSvtList = this->fields.getSvtList;
      if ( getSvtList && getSvtList->max_length )
      {
        Master_object = (__int64)this->fields.touchBlockObj;
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
          v84 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(
            v84,
            (Il2CppObject *)v51,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
            0);
          if ( Instance )
          {
            SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v84, 0);
            goto LABEL_157;
          }
        }
      }
      else if ( *v58 )
      {
        ActionExtensions__Call((System_Action_o *)(*v58)[1].monitor, 0);
        v137 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v138 = *(EventRewardSetEntity_o **)(v51 + 32);
        v139 = (CommonUI_o *)v137;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v140 = LocalizationManager__Get((System_String_o *)StringLiteral_8696/*"MISSION_ACTION_SUCCESS"*/, 0);
        v141 = System_String__Format(v140, *v81, 0);
        v142 = *v58;
        v143 = v141;
        v144 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C942E4(MissionRewardGetDialog_ClickDelegate_TypeInfo);
        MissionRewardGetDialog_ClickDelegate___ctor(
          v144,
          v142,
          Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
          0);
        if ( v139 )
        {
          CommonUI__OpenMissionRewardGetDialog_31666636(v139, v138, v143, v144, 0);
          goto LABEL_157;
        }
      }
    }
LABEL_52:
    sub_1C942F0(Master_object, v7);
  }
  Master_object = (__int64)this->fields.touchBlockObj;
  if ( !Master_object )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  *(_DWORD *)(v51 + 24) = 0;
  v59 = array;
  v147 = v51;
  if ( !array )
    goto LABEL_52;
  v60 = array->max_length;
  if ( v60 >= 1 )
  {
    v61 = 0;
    while ( v61 < LODWORD(v59->max_length) )
    {
      v62 = (int)v61;
      v63 = v59->m_Items[v61];
      if ( !v63 )
        goto LABEL_52;
      Master_object = Gift__IsServant_41175504(HIDWORD(v63[1].klass), 0);
      if ( (Master_object & 1) == 0 )
      {
        if ( !array )
          goto LABEL_52;
        if ( (unsigned int)v62 >= LODWORD(array->max_length) )
          goto LABEL_158;
        v64 = array->m_Items[v62];
        if ( !v64 )
          goto LABEL_52;
        Master_object = Gift__IsCommandCode_41175896(HIDWORD(v64[1].klass), 0);
        if ( (Master_object & 1) == 0 )
        {
          if ( !array )
            goto LABEL_52;
          if ( (unsigned int)v62 >= LODWORD(array->max_length) )
            goto LABEL_158;
          v65 = array->m_Items[v62];
          if ( !v65 )
            goto LABEL_52;
          Master_object = Gift__IsCostumeRelease(HIDWORD(v65[1].klass), 0);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Master_object )
              goto LABEL_52;
            Master_object = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Master_object,
                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( !array )
              goto LABEL_52;
            if ( (unsigned int)v62 >= LODWORD(array->max_length) )
              goto LABEL_158;
            v66 = array->m_Items[v62];
            if ( !v66 || !Master_object )
              goto LABEL_52;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &v150,
                              (int32_t)v66[1].monitor,
                              (const MethodInfo_345B50C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v150 || !Master_object )
                goto LABEL_52;
              Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v150[1].klass, 0);
              if ( (Master_object & 1) == 0 )
                ++*(_DWORD *)(v51 + 24);
            }
          }
        }
      }
      if ( v60 - 1 == (_DWORD)v62 )
        goto LABEL_59;
      v59 = array;
      v61 = v62 + 1;
      if ( !array )
        goto LABEL_52;
    }
    goto LABEL_158;
  }
LABEL_59:
  v85 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v85,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v86 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v86,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( v60 >= 1 )
  {
    v87 = (const MethodInfo_3ABA574 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    v88 = 0;
    v146 = this;
    do
    {
      if ( !array )
        goto LABEL_52;
      if ( v88 >= LODWORD(array->max_length) )
        goto LABEL_158;
      v89 = array->m_Items[v88];
      if ( !v89 )
        goto LABEL_52;
      Master_object = Gift__IsServant_41175504(HIDWORD(v89[1].klass), 0);
      if ( (Master_object & 1) != 0 )
      {
        Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v87);
        if ( !Master_object )
          goto LABEL_52;
        Master_object = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Master_object,
                                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !array )
          goto LABEL_52;
        if ( v88 >= LODWORD(array->max_length) )
          goto LABEL_158;
        v90 = array->m_Items[v88];
        if ( !v90 )
          goto LABEL_52;
        if ( !Master_object )
          goto LABEL_52;
        Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   (int32_t)v90[1].monitor,
                                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Master_object )
          goto LABEL_52;
        v91 = (ServantEntity_o *)Master_object;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_object + 84), 0);
        Master_object = SvtType__IsStatusUp(v91->fields.type, 0);
        v93 = *v58;
        if ( !*v58 )
          goto LABEL_52;
        if ( LOBYTE(v93[3].klass) | (IsCombineMaterial | (unsigned __int8)Master_object) & 1 )
        {
          Master_object = (__int64)v93[2].monitor;
          if ( !Master_object )
            goto LABEL_52;
          v94 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 360LL))(
                                     Master_object,
                                     *(_QWORD *)(*(_QWORD *)Master_object + 368LL));
          Master_object = System_String__IsNullOrEmpty(v94, 0);
          if ( (Master_object & 1) == 0 )
          {
            if ( !*v58 )
              goto LABEL_52;
            Master_object = (__int64)(*v58)[2].monitor;
            if ( !Master_object )
              goto LABEL_52;
            System_Text_StringBuilder__Append_64501704(
              (System_Text_StringBuilder_o *)Master_object,
              (System_String_o *)StringLiteral_49/*"\n "*/,
              0);
          }
          Master_object = (__int64)ServantEntity__getName(v91, -1, -1, 0, 0);
          if ( !array )
            goto LABEL_52;
          if ( v88 >= LODWORD(array->max_length) )
            goto LABEL_158;
          v95 = array->m_Items[v88];
          if ( !v95 )
            goto LABEL_52;
          v96 = (Il2CppObject *)Master_object;
          LODWORD(v148) = HIDWORD(v95[1].monitor);
          v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v148);
          Master_object = (__int64)System_String__Format_64459052((System_String_o *)StringLiteral_25467/*"{0}×{1:#,0}"*/, v96, v97, 0);
          if ( !*v58 )
            goto LABEL_52;
          v98 = (Il2CppObject *)Master_object;
          monitor = (System_Text_StringBuilder_o *)(*v58)[2].monitor;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
          if ( !monitor )
            goto LABEL_52;
          Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                     monitor,
                                     (System_String_o *)Master_object,
                                     v98,
                                     0);
          if ( !array )
            goto LABEL_52;
          if ( v88 >= LODWORD(array->max_length) )
            goto LABEL_158;
          if ( !v86 )
            goto LABEL_52;
          v7 = array->m_Items[v88];
          items = v86->fields._items;
          v107 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v86->fields._version;
          if ( !items )
            goto LABEL_52;
          size = v86->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v124 = v107[4];
            v125 = v86;
LABEL_132:
            System_Collections_Generic_List_object___AddWithResize(
              v125,
              v7,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v124 + 192) + 112LL));
            continue;
          }
          v109 = &items->obj.klass + size;
          v86->fields._size = size + 1;
LABEL_91:
          v109[4] = (Il2CppClass *)v7;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v109 + 4), (int32_t)v7, v100, v101, v102, v103, v104, v105);
        }
      }
      else
      {
        if ( !array )
          goto LABEL_52;
        if ( v88 >= LODWORD(array->max_length) )
          goto LABEL_158;
        v110 = array->m_Items[v88];
        if ( !v110 )
          goto LABEL_52;
        Master_object = Gift__IsItem_41175452(HIDWORD(v110[1].klass), 0);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v87);
          if ( !Master_object )
            goto LABEL_52;
          Master_object = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Master_object,
                                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !array )
            goto LABEL_52;
          if ( v88 >= LODWORD(array->max_length) )
            goto LABEL_158;
          v111 = array->m_Items[v88];
          if ( !v111 || !Master_object )
            goto LABEL_52;
          Master_object = DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &v149,
                            (int32_t)v111[1].monitor,
                            (const MethodInfo_345B50C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Master_object & 1) != 0 )
          {
            Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !v149 || !Master_object )
              goto LABEL_52;
            Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v149[1].klass, 0);
            if ( (Master_object & 1) == 0 )
            {
              if ( !array )
                goto LABEL_52;
              if ( v88 >= LODWORD(array->max_length) )
                goto LABEL_158;
              Master_object = (__int64)array->m_Items[v88];
              if ( !Master_object )
                goto LABEL_52;
              Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0);
              if ( (Master_object & 1) == 0 || !this->fields.isQpAlreadyMax )
              {
                if ( !v149 )
                  goto LABEL_52;
                IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v149[3].klass, 0);
                v113 = (Il2CppObject **)&StringLiteral_25829/*"＋"*/;
                if ( !IsCountableWithPlus )
                  v113 = (Il2CppObject **)&StringLiteral_25520/*"×"*/;
                v114 = *v113;
                v115 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
                System_Text_StringBuilder___ctor(v115, 0);
                if ( !v149 )
                  goto LABEL_52;
                if ( !v115 )
                  goto LABEL_52;
                Master_object = (__int64)System_Text_StringBuilder__Append_64501704(
                                           v115,
                                           (System_String_o *)v149[1].monitor,
                                           0);
                if ( !array )
                  goto LABEL_52;
                if ( v88 >= LODWORD(array->max_length) )
                  goto LABEL_158;
                Master_object = (__int64)array->m_Items[v88];
                if ( !Master_object )
                  goto LABEL_52;
                v116 = v87;
                Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0);
                if ( (Master_object & 1) == 0
                  || !this->fields.isQpMaxAlert
                  || (monitor_high = this->fields.getQpValue) == 0 )
                {
                  if ( !array )
                    goto LABEL_52;
                  if ( v88 >= LODWORD(array->max_length) )
                    goto LABEL_158;
                  v118 = array->m_Items[v88];
                  if ( !v118 )
                    goto LABEL_52;
                  monitor_high = SHIDWORD(v118[1].monitor);
                }
                v119 = v85;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v120 = LocalizationManager__Get((System_String_o *)StringLiteral_8697/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
                v148 = monitor_high;
                v121 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v148);
                Master_object = (__int64)System_Text_StringBuilder__AppendFormat_64508056(v115, v120, v114, v121, 0);
                v122 = *(_QWORD *)(v147 + 48);
                if ( !v122 )
                  goto LABEL_52;
                v123 = *(System_Text_StringBuilder_o **)(v122 + 32);
                v85 = v119;
                v87 = v116;
                if ( *(int *)(v147 + 24) >= 2 )
                {
                  this = v146;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                  if ( !v123 )
                    goto LABEL_52;
                  Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                             v123,
                                             (System_String_o *)Master_object,
                                             (Il2CppObject *)v115,
                                             0);
                  if ( !*v58 )
                    goto LABEL_52;
                  Master_object = (__int64)(*v58)[2].klass;
                  if ( !Master_object )
                    goto LABEL_52;
                  Master_object = (__int64)System_Text_StringBuilder__Append_64501704(
                                             (System_Text_StringBuilder_o *)Master_object,
                                             (System_String_o *)StringLiteral_49/*"\n "*/,
                                             0);
                }
                else
                {
                  Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v115->klass->vtable._3_ToString.methodPtr)(
                                    v115,
                                    v115->klass->vtable._3_ToString.method);
                  this = v146;
                  if ( !v123 )
                    goto LABEL_52;
                  Master_object = (__int64)System_Text_StringBuilder__Append_64501704(
                                             v123,
                                             (System_String_o *)Master_object,
                                             0);
                }
                if ( !array )
                  goto LABEL_52;
                if ( v88 >= LODWORD(array->max_length) )
                  goto LABEL_158;
                if ( !v85 )
                  goto LABEL_52;
                v7 = array->m_Items[v88];
                v126 = v85->fields._items;
                v127 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                ++v85->fields._version;
                if ( !v126 )
                  goto LABEL_52;
                v128 = v85->fields._size;
                if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
                {
                  v124 = v127[4];
                  v125 = v85;
                  goto LABEL_132;
                }
                v109 = &v126->obj.klass + v128;
                v85->fields._size = v128 + 1;
                goto LABEL_91;
              }
            }
          }
        }
      }
    }
    while ( v60 != ++v88 );
  }
  v129 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_59156264(
    v129,
    (System_Collections_Generic_IEnumerable_T__o *)v85,
    (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_GiftEntity___ctor___78993752);
  *(_QWORD *)(v147 + 16) = v129;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v147 + 16), (int32_t)v129, v130, v131, v132, v133, v134, v135);
  Master_object = *(_QWORD *)(v147 + 16);
  if ( !Master_object )
    goto LABEL_52;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)v86,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  v136 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v136,
    (Il2CppObject *)v147,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
    0);
  if ( this->fields.isTreasureEffect )
    MissionListViewManager__StartEventMissionClearItemAction(
      (MissionListViewManager_o *)this,
      (GiftEntity_array *)array,
      0,
      v136,
      0);
  else
    MissionListViewManager__StartItemGetEffectAction(
      (MissionListViewManager_o *)this,
      (GiftEntity_array *)array,
      0,
      v136,
      0);
LABEL_157:
  ActionExtensions__Call(this->fields.reDispAct, 0);
}


void CompleteMissionListViewManager__Awake(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void CompleteMissionListViewManager__CehckQpMaxAlert(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int *QpGiftEntity; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x24
  int *v17; // x22
  System_String_o *Empty; // x20
  _QWORD *v19; // x23
  int64_t v20; // x25
  int64_t QpMax; // x8
  __int64 v22; // x25
  __int64 v23; // x26
  System_String_o *v24; // x24
  Il2CppObject *NumberFormatLong; // x25
  System_String_o *v26; // x0
  BalanceConfig_c *v27; // x8
  Il2CppObject *v28; // x26
  Il2CppObject *v29; // x0
  System_String_o *v30; // x24
  int64_t v31; // x8
  int64_t v32; // x8
  System_String_o *v33; // x24
  System_String_o *v34; // x0
  int64_t v35; // x8
  Il2CppObject *v36; // x23
  System_String_o *v37; // x0
  BalanceConfig_c *v38; // x8
  Il2CppObject *v39; // x25
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x22
  System_String_o *v43; // x23
  System_String_o *v44; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v46; // x19
  System_Action_o *v47; // x26
  System_Action_o *onTransition; // x21
  Il2CppObject *v49; // x27
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7

  if ( (byte_4D2B269 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__);
    sub_1C94098(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
    sub_1C94098(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_8735/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_1C94098(&StringLiteral_8738/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11739/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_1C94098(&StringLiteral_11738/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_1C94098(&StringLiteral_11745/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_4D2B269 = 1;
  }
  v7 = sub_1C942E4(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_35;
  *(_QWORD *)(v7 + 16) = decideCallback;
  v16 = v7 + 16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)decideCallback, v10, v11, v12, v13, v14, v15);
  if ( !missionEntity )
    goto LABEL_35;
  QpGiftEntity = (int *)EventMissionEntity__GetQpGiftEntity(missionEntity, 0);
  if ( !QpGiftEntity )
  {
LABEL_18:
    if ( *(_QWORD *)v16 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v16 + 64LL),
        *(_QWORD *)(*(_QWORD *)v16 + 40LL));
      return;
    }
LABEL_35:
    sub_1C942F0(QpGiftEntity, v9);
  }
  v17 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_OWORD *)&this->fields.overQpValue = 0u;
  QpGiftEntity = (int *)UserGameMaster__getSelfUserGame(0);
  if ( !QpGiftEntity )
    goto LABEL_35;
  v19 = QpGiftEntity;
  v20 = *((_QWORD *)QpGiftEntity + 12);
  QpGiftEntity = (int *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    QpGiftEntity = (int *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(*((_QWORD *)QpGiftEntity + 23) + 8LL);
  if ( v20 < QpMax )
  {
    v22 = v19[12];
    v23 = v17[7];
    if ( !QpGiftEntity[56] )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v22 + v23 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8738/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0);
      NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v17[7], 0);
      v26 = LocalizationManager__GetNumberFormatLong(v19[12], 0);
      v27 = BalanceConfig_TypeInfo;
      v28 = (Il2CppObject *)v26;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      v29 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v27->static_fields->QpMax, 0);
      v30 = System_String__Format_64459120(v24, NumberFormatLong, v28, v29, 0);
      v31 = BalanceConfig_TypeInfo->static_fields->QpMax - v19[12];
      this->fields.getQpValue = v31;
      v32 = v17[7] - v31;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  *(_WORD *)&this->fields.isQpMaxAlert = 257;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8735/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0);
  v34 = LocalizationManager__GetNumberFormatLong(v17[7], 0);
  v35 = v19[12];
  v36 = (Il2CppObject *)v34;
  v37 = LocalizationManager__GetNumberFormatLong(v35, 0);
  v38 = BalanceConfig_TypeInfo;
  v39 = (Il2CppObject *)v37;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  v40 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v38->static_fields->QpMax, 0);
  v41 = System_String__Format_64459120(v33, v36, v39, v40, 0);
  v32 = v17[7];
  v30 = v41;
LABEL_25:
  this->fields.overQpValue = v32;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11739/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11745/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11738/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v46 = v44;
  v47 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v7,
    Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__,
    0);
  QpGiftEntity = (int *)CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    QpGiftEntity = (int *)CompleteMissionListViewManager___c_TypeInfo;
  }
  onTransition = *(System_Action_o **)(*((_QWORD *)QpGiftEntity + 23) + 32LL);
  if ( !onTransition )
  {
    if ( !QpGiftEntity[56] )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpGiftEntity = (int *)CompleteMissionListViewManager___c_TypeInfo;
    }
    v49 = (Il2CppObject *)**((_QWORD **)QpGiftEntity + 23);
    onTransition = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(onTransition, v49, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__68_1 = onTransition;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__68_1,
      (int32_t)onTransition,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_35;
  ServantSellMaxAlertDialog__Open(qpMaxAlertDialog, Empty, v30, Empty, v42, v43, v46, v47, onTransition, 0, 1, 0);
}


void CompleteMissionListViewManager__CreateList(
        CompleteMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  CompleteMissionListViewItem_o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t CompleteMissionFilterId_k__BackingField; // w25
  __int64 *v35; // x8
  void *ObjectList; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int v46; // w22
  System_Collections_Generic_List_object__o *v47; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2B24E & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_8833/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C94098(&StringLiteral_8700/*"MISSION_EMPTY_TXT"*/);
    byte_4D2B24E = 1;
  }
  memset(&v51, 0, sizeof(v51));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v51 = v50;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v51.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v18 = (CompleteMissionListViewItem_o *)sub_1C942E4(CompleteMissionListViewItem_TypeInfo);
      CompleteMissionListViewItem___ctor(v18, (EventMissionEntity_o *)current, type, v19);
      if ( !itemList )
        sub_1C942F0(v20, v21);
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C942F0(v20, v21);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v18;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v18, v22, v23, v24, v25, v26, v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v10, v11, v12, v13, v14, v15);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_4D26BA4 )
  {
    sub_1C94098(&EventRewardSaveData_TypeInfo);
    byte_4D26BA4 = 1;
  }
  CompleteMissionFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( CompleteMissionFilterId_k__BackingField )
    v35 = &StringLiteral_8700/*"MISSION_EMPTY_TXT"*/;
  else
    v35 = &StringLiteral_8833/*"MST_MISSION_EMPTY_TXT"*/;
  ObjectList = LocalizationManager__Get((System_String_o *)*v35, 0);
  if ( !emptyMessageLabel )
    goto LABEL_39;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0);
  if ( !byte_4D26BA4 )
  {
    sub_1C94098(&EventRewardSaveData_TypeInfo);
    byte_4D26BA4 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v38);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.reDispAct,
      (int32_t)redispCallBack,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v39);
  if ( !ObjectList )
LABEL_39:
    sub_1C942F0(ObjectList, v37);
  v46 = *((_DWORD *)ObjectList + 6);
  v47 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v46 >= 1 )
  {
    for ( i = 0; i != v46; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v47,
               i,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_39;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)Item, 0);
      }
    }
  }
}


void CompleteMissionListViewManager__DestroyList(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


CompleteMissionListViewItem_o *CompleteMissionListViewManager__GetItem(
        CompleteMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CompleteMissionListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D2B251 & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B251 = 1;
  }
  result = (CompleteMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CompleteMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (CompleteMissionListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void CompleteMissionListViewManager__ModifyItem(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x20
  bool v7; // cc
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *v9; // x8
  int64_t v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  MissionListViewItem_o *current; // x22
  __int64 naturalAligment; // x10
  __int64 MissionId; // x0
  __int64 v16; // x1
  struct EventMissionEntity_o *v17; // x8
  int32_t v18; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v20; // x1
  struct ListViewObject_o *v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2B260 & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewItem_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C94098(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B260 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !Entity )
    goto LABEL_46;
  if ( Instance <= (__int64)Entity[4].klass )
  {
    this->fields.isEndEvent = 0;
    return;
  }
  v7 = Instance <= (__int64)Entity[4].monitor;
  this->fields.isEndEvent = v7;
  if ( v7 && this->fields.itemList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      v9 = this->fields.missionToRecieve;
      if ( v9 )
      {
        if ( MasterData_object )
        {
          Instance = (int64_t)UserEventMissionMaster__GetEntity(
                                (UserEventMissionMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                                v9->fields.id,
                                0);
          if ( this->fields.itemList )
          {
            v10 = Instance;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v22,
              (System_Collections_Generic_List_object__o *)this->fields.itemList,
              (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v23 = v22;
            while ( 1 )
            {
              v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v23,
                      (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v11 )
                break;
              current = (MissionListViewItem_o *)v23.fields._current;
              if ( !v23.fields._current
                || (naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment,
                    v23.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
                || (CompleteMissionListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_1C942F0(v11, v12);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v23.fields._current, 0);
              v17 = this->fields.missionToRecieve;
              if ( !v17 )
                sub_1C942F0(MissionId, v16);
              v18 = MissionId;
              if ( (_DWORD)MissionId == v17->fields.id )
              {
                if ( !byte_4D26B9D )
                {
                  MissionId = sub_1C94098(&EventRewardSaveData_TypeInfo);
                  byte_4D26B9D = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v18;
                if ( !v10 )
                  sub_1C942F0(MissionId, v16);
                MissionListViewItem__ModifyItem(current, *(_DWORD *)(v10 + 32) == 5, 0);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v21 = current->fields.viewObject;
                if ( !v21 )
                  sub_1C942F0(0, v20);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, const MethodInfo *))v21->klass->vtable._5_SetItem.methodPtr)(
                  v21,
                  current,
                  v21->klass->vtable._5_SetItem.method);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, const MethodInfo *))current->klass->vtable._6_CheckMissionCond.methodPtr)(
                  current,
                  current->klass->vtable._6_CheckMissionCond.method);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v23,
              (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_46:
    sub_1C942F0(Instance, v4);
  }
}


void CompleteMissionListViewManager__OnChangeAlphaAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4D2B268 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_4D2B268 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v6,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C942F0(ObjectList, v4);
  }
}


void CompleteMissionListViewManager__OnClickFilterList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4D2B254 & 1) == 0 )
  {
    sub_1C94098(&Method_CompleteMissionListViewManager_OnClickFilterList__);
    byte_4D2B254 = 1;
  }
  v3 = Method_CompleteMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_CompleteMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_D31440[filterStatus];
  CompleteMissionListViewManager__setList(this, v5);
}


void CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 naturalAligment; // x10
  PlayMakerFSM_o *v8; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v10; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4D2B252 & 1) == 0 )
  {
    sub_1C94098(&Method_CompleteMissionListViewManager_OnClickListView__);
    sub_1C94098(&CompleteMissionListViewObject_TypeInfo);
    sub_1C94098(&StringLiteral_15624/*"Wait_Action"*/);
    byte_4D2B252 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_20;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15624/*"Wait_Action"*/, 0);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (naturalAligment = CompleteMissionListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem(
                                        (CompleteMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0 )
  {
LABEL_20:
    sub_1C942F0(targetFSM, obj);
  }
  v8 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)((__int64 (__fastcall *)(PlayMakerFSM_o *, _QWORD))targetFSM->klass[1]._1.byval_arg.data)(
                                                       targetFSM,
                                                       *(_QWORD *)&targetFSM->klass[1]._1.byval_arg.bits);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v8,
                                                             v10),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v8[4].fields.fsmTemplate) )
  {
    if ( LODWORD(v8[4].fields.m_CancellationTokenSource) == 3
      && (LODWORD(v8[3].klass) != 1 || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v10)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v8, 0);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v12);
    }
    else
    {
      v13 = Method_CompleteMissionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C940B0(Method_CompleteMissionListViewManager_OnClickListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C9407C(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v8, 0, 0);
  }
}


System_Collections_IEnumerator_o *CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
        CompleteMissionListViewManager_o *this,
        GiftEntity_array *rewards,
        System_String_o *rewardDetail,
        bool isCompleteMission,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D2B25A & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
    byte_4D2B25A = 1;
  }
  v9 = isCompleteMission;
  v10 = sub_1C942E4(CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 32), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 48) = rewards;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 48), (int32_t)rewards, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v10 + 56) = rewardDetail;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 56), (int32_t)rewardDetail, v23, v24, v25, v26, v27, v28);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void CompleteMissionListViewManager__RefrashListDisp(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x11
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B253 & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_4D2B253 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v11;
        ;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))i.fields._current->klass->vtable[6].methodPtr)(
          i.fields._current,
          i.fields._current->klass->vtable[6].method) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( i.fields._current )
    {
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CompleteMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == CompleteMissionListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1C942F0(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v10,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v10 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_1C942F0(ObjectList, v4);
  }
}


void CompleteMissionListViewManager__SetOpenItem(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct CompleteMissionListViewItem_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v19; // x2
  float openItemTime; // s8
  System_Action_o *v21; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B261 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager_modifyOpenItem__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1C94098(&StringLiteral_18975/*"ef_mission_extric01"*/);
    byte_4D2B261 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1C942F0(0, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        ObjectList,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v23 = v22;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v23,
               (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v23.fields._current;
        if ( !v23.fields._current )
          sub_1C942F0(v5, v6);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v23.fields._current,
                                          v6);
        v10 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1C942F0(0, v9);
        MissionId = MissionListViewItem__get_MissionId(Item, 0);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4D26B9D )
          {
            sub_1C94098(&EventRewardSaveData_TypeInfo);
            byte_4D26B9D = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v10;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.openTargetItem,
            (int32_t)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v10, 0) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0);
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_18975/*"ef_mission_extric01"*/, transform, v19);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v21 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v21, 0);
  }
}


void CompleteMissionListViewManager__SetResultData(
        CompleteMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (int32_t)cmds,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.getCommandCodeList,
    (int32_t)cmds,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1C942F0(v16, v17);
  id = missionToRecieve->fields.id;
  if ( !byte_4D26B9D )
  {
    sub_1C94098(&EventRewardSaveData_TypeInfo);
    byte_4D26B9D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B265 & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
    byte_4D2B265 = 1;
  }
  v3 = sub_1C942E4(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  float endEffectTime; // s8
  System_Action_o *v4; // x20

  if ( (byte_4D2B26B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager_actionAfterCallback__);
    byte_4D2B26B = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v4, 0);
}


void CompleteMissionListViewManager__actionAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *actionCallback; // x19
  GrandQuestFolderBoardItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (GrandQuestFolderBoardItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0;
    sub_1C9403C(p_actionCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      actionCallback->fields.method);
  }
}


void CompleteMissionListViewManager__afterReward(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2B25B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C94098(&StringLiteral_5445/*"END_EFFECT"*/);
    byte_4D2B25B = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0) )
  {
    sub_1C942F0(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5445/*"END_EFFECT"*/, 0);
}


void CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8

  v2 = this;
  if ( (byte_4D2B264 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B264 = 1;
  }
  missionToRecieve = v2->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[2].fields.m_CancellationTokenSource) == 0
    || (this = *(CompleteMissionListViewManager_o **)&m_CancellationTokenSource->fields._state) == 0
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     dispNo - 2,
                                                     0)) == 0
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     v2->fields.distanceToTexObj,
                                                     0)) == 0
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (CompleteMissionListViewManager_o *)v2->fields.touchBlockObj) == 0) )
  {
LABEL_12:
    sub_1C942F0(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void CompleteMissionListViewManager__checkAcceptable(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v6; // x8
  _DWORD *v7; // x20
  _DWORD *v8; // x21
  Il2CppObject *MasterData_object; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BalanceConfig_c *v17; // x0
  __int64 *v18; // x8
  CompleteMissionListViewManager___c_c *v19; // x0
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v21; // x21
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D2B257 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__);
    sub_1C94098(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_12263/*"SHOW_MSG"*/);
    sub_1C94098(&StringLiteral_11198/*"REWARD_ACCEPTABLE"*/);
    byte_4D2B257 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_40;
  if ( !Instance )
    goto LABEL_40;
  Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v6 = this->fields.missionToRecieve;
  if ( !v6 )
    goto LABEL_40;
  if ( v6->fields.rewardType == 1 )
  {
    v7 = Instance;
    if ( !Instance )
      goto LABEL_40;
    if ( Gift__IsServant_41175504(*((_DWORD *)Instance + 5), 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v7[6],
                       (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v8 = Instance;
            if ( !SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0) && !SvtType__IsStatusUp(v8[21], 0) )
              goto LABEL_29;
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4D2633A )
              {
                sub_1C94098(&NetworkManager_TypeInfo);
                byte_4D2633A = 1;
              }
              Instance = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = NetworkManager_TypeInfo;
              }
              if ( MasterData_object )
              {
                VaildList = UserPresentBoxMaster__getVaildList(
                              (UserPresentBoxMaster_o *)MasterData_object,
                              *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                              0);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 v7[6],
                                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v17 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v17 = BalanceConfig_TypeInfo;
                      }
                      if ( v17->static_fields->PresentBoxMax > SLODWORD(VaildList->max_length) )
                        goto LABEL_29;
                      v19 = CompleteMissionListViewManager___c_TypeInfo;
                      if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
                        v19 = CompleteMissionListViewManager___c_TypeInfo;
                      }
                      _9__46_0 = v19->static_fields->__9__46_0;
                      if ( !_9__46_0 )
                      {
                        if ( !v19->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v19);
                          v19 = CompleteMissionListViewManager___c_TypeInfo;
                        }
                        v21 = (Il2CppObject *)v19->static_fields->__9;
                        _9__46_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__46_0,
                          v21,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0);
                        static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        static_fields->__9__46_0 = _9__46_0;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)&static_fields->__9__46_0,
                          (int32_t)_9__46_0,
                          v23,
                          v24,
                          v25,
                          v26,
                          v27,
                          v28);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_1C9403C(
                        (GrandQuestFolderBoardItem_o *)&this->fields.ShowMSG,
                        (int32_t)_9__46_0,
                        v11,
                        v12,
                        v13,
                        v14,
                        v15,
                        v16);
                      Instance = this->fields.targetFSM;
                      if ( Instance )
                      {
                        v18 = &StringLiteral_12263/*"SHOW_MSG"*/;
                        goto LABEL_31;
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
      sub_1C942F0(Instance, v4);
    }
  }
LABEL_29:
  Instance = this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_40;
  v18 = &StringLiteral_11198/*"REWARD_ACCEPTABLE"*/;
LABEL_31:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0);
}


bool CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  intptr_t m_CachedPtr; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v5; // x19

  if ( (byte_4D2B267 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B267 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (m_CachedPtr = Instance[9].fields.m_CachedPtr) == 0
    || (v5 = *(System_Collections_Generic_List_EventMissionEntity__o **)(m_CachedPtr + 128),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v5, 0), !v5)
    || !Instance )
  {
    sub_1C942F0(Instance, v3);
  }
  return v5->fields._size - 1 == LODWORD(Instance->fields.m_CancellationTokenSource);
}


void CompleteMissionListViewManager__endloadEffect(
        CompleteMissionListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v13; // x1
  struct EventMissionEntity_o *v14; // x8

  if ( (byte_4D2B25E & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4D2B25E = 1;
  }
  if ( data )
  {
    CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)CompleteMissionListViewManager_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0) )
    {
      if ( this->fields.filterStatus )
      {
        this->fields.filterStatus = 0;
        CompleteMissionListViewManager__setList(this, v13);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v13);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v14 = this->fields.missionToRecieve;
    if ( !v14 || !Instance )
LABEL_13:
      sub_1C942F0(Instance, v11);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v14->fields.id, 5, 0, 0);
  }
}


UnityEngine_GameObject_o *CompleteMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51893132; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4D2B25F & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&CompleteMissionListViewManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B25F = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              effectAssetData,
                              name,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51893132,
                                     (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4D25F19 )
  {
    effectAssetData = (AssetData_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4D25F1E )
  {
    effectAssetData = (AssetData_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C942F0(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2B24D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B24D = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                 (CompleteMissionListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C942F0(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44610268((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C942F0(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C942F0(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C942F0(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B24C & 1) == 0 )
  {
    sub_1C94098(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
    byte_4D2B24C = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_322516C *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4D2B25D & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager_endloadEffect__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&StringLiteral_5887/*"Effect/EventMission"*/);
    byte_4D2B25D = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5887/*"Effect/EventMission"*/, v3, 1, 0);
}


void CompleteMissionListViewManager__modifyOpenItem(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x21
  __int64 v9; // x1
  Il2CppClass *v10; // x0
  System_Action_o *v11; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B262 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&CompleteMissionListViewItem_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B262 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1C942F0(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current
        || (naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment,
            v13.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (CompleteMissionListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_1C942F0(v4, v5);
      }
      klass = v13.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v10 = current[7].klass;
        if ( !v10 )
          sub_1C942F0(0, v9);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v10->_1.image + 49))(
          v10,
          current,
          *((_QWORD *)v10->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v11, 0);
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v13; // w22
  int32_t v14; // w21
  __int64 naturalAligment; // x10
  bool v16; // w0
  _QWORD *v17; // x8
  bool v18; // w19
  System_Reflection_MethodBase_o *v19; // x0
  int32_t v20; // w1

  if ( (byte_4D2B250 & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewItem_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B250 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v13 = size - 1;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v14,
                                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v13 == v14 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v14;
    }
    while ( itemList );
LABEL_15:
    sub_1C942F0(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v14 = 0;
LABEL_17:
  v16 = ListViewManager__MoveTopItem((ListViewManager_o *)this, v14, 1, 0.0, 0);
  v17 = Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__;
  v18 = v16;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1C940B0(Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
  v19 = (System_Reflection_MethodBase_o *)sub_1C9407C(v17, v17[4]);
  if ( v18 )
    v20 = 0;
  else
    v20 = 2;
  OverwriteAssetSoundName__PlaySystemSe(v19, v20, 0, 0);
}


void CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  CommonUI_o *v11; // x20
  CompleteMissionListViewManager___c_c *v12; // x8
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v14; // x22
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *countText; // [xsp+40h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4D2B266 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C94098(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__);
    sub_1C94098(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_25468/*"{0}×{1}"*/);
    sub_1C94098(&StringLiteral_16013/*"[^0-9]"*/);
    sub_1C94098(&StringLiteral_3714/*"COMPLETE_MISSION_ACTION_SUCCESS"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_1165/*"1"*/);
    byte_4D2B266 = 1;
  }
  countText = (System_String_o *)StringLiteral_1/*""*/;
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Entity )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)touchBlockObj,
                                                HIDWORD(Entity[1].monitor),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_31;
  klass = touchBlockObj[1].klass;
  if ( !klass )
    return;
  if ( !(_DWORD)klass )
    sub_1C942F8(touchBlockObj);
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_31;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0);
  if ( System_String__IsNullOrEmpty(nameText, 0) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0) )
  {
    v7 = countText;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    v8 = System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_16013/*"[^0-9]"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
    if ( System_String__op_Inequality(v8, (System_String_o *)StringLiteral_1165/*"1"*/, 0) )
      nameText = System_String__Format_64459052(
                   (System_String_o *)StringLiteral_25468/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3714/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0);
  v10 = System_String__Format(v9, (Il2CppObject *)nameText, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)touchBlockObj;
  v12 = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v12 = CompleteMissionListViewManager___c_TypeInfo;
  }
  _9__65_0 = v12->static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__65_0, v14, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = _9__65_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__65_0,
      (int32_t)_9__65_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v11 )
LABEL_31:
    sub_1C942F0(touchBlockObj, method);
  CommonUI__OpenNotificationDialog(v11, 0, v10, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  EventMissionEntity_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_4D2B256 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager_recieveReward__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__);
    sub_1C94098(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_4D2B256 = 1;
  }
  v5 = sub_1C942E4(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = missionEntity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)missionEntity, v14, v15, v16, v17, v18, v19);
  MissionListViewManager__SetupGetEffectOptions(
    (MissionListViewManager_o *)this,
    *(EventMissionEntity_o **)(v5 + 24),
    0);
  v20 = Method_CompleteMissionListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_recieveReward__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C940B0(Method_CompleteMissionListViewManager_recieveReward__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C9407C(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 8, 0, 0);
  v22 = *(EventMissionEntity_o **)(v5 + 24);
  v23 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v22, v23, v24);
}


void CompleteMissionListViewManager__setAfterAction(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4D2B25C & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4D2B25C = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1C942F0(Instance, v4);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, missionToRecieve->fields.id, 5, 1, 0);
  }
  else
  {
    CompleteMissionListViewManager__loadOpenMissionEffect(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionListViewManager__setFilterId(
        CompleteMissionListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  CompleteMissionListViewManager__setList(this, *(const MethodInfo **)&id);
}


void CompleteMissionListViewManager__setFilterName(
        CompleteMissionListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UISprite_o *filterBtnTxt; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0), (filterBtnTxt = this->fields.filterBtnTxt) == 0) )
  {
    sub_1C942F0(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))filterBtnTxt->klass->vtable._33_MakePixelPerfect.methodPtr)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._33_MakePixelPerfect.method);
}


void CompleteMissionListViewManager__setList(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  UILabel_o *v16; // x21
  struct ListViewSort_o *v17; // x8
  int v18; // w9
  bool v19; // w2
  int32_t filterStatus; // w19

  if ( (byte_4D2B255 & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_8833/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C94098(&StringLiteral_17645/*"btn_txt_completed"*/);
    sub_1C94098(&StringLiteral_17678/*"btn_txt_receipt"*/);
    sub_1C94098(&StringLiteral_17677/*"btn_txt_progress"*/);
    sub_1C94098(&StringLiteral_8700/*"MISSION_EMPTY_TXT"*/);
    sub_1C94098(&StringLiteral_17627/*"btn_txt_all"*/);
    byte_4D2B255 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44629008(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8700/*"MISSION_EMPTY_TXT"*/, 0);
  if ( !emptyMessageLabel )
LABEL_42:
    sub_1C942F0(operationSortInfo, v14);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17627/*"btn_txt_all"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0);
      v16 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8833/*"MST_MISSION_EMPTY_TXT"*/, 0);
      if ( !v16 )
        goto LABEL_42;
      UILabel__set_text(v16, operationSortInfo, 0);
      goto LABEL_35;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17678/*"btn_txt_receipt"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
      v17 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v18 = 1;
      goto LABEL_37;
    case 2:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17677/*"btn_txt_progress"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v19 = 0;
      goto LABEL_33;
    case 3:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17645/*"btn_txt_completed"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v19 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v19, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
LABEL_35:
      v17 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v18 = 13;
LABEL_37:
      v17->fields.sortKind = v18;
LABEL_38:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4D26BA3 )
      {
        sub_1C94098(&EventRewardSaveData_TypeInfo);
        byte_4D26BA3 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = filterStatus;
      EventRewardSaveData__SaveCompleteMissionData(0);
      return;
    default:
      goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionListViewManager__setNextMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v13; // w22
  int32_t v14; // w21
  __int64 naturalAligment; // x10
  System_Action_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2B24F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&CompleteMissionListViewItem_TypeInfo);
    sub_1C94098(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B24F = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v13 = size - 1;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v14,
                                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v13 == v14 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v14;
    }
    while ( itemList );
LABEL_15:
    sub_1C942F0(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v14 = 0;
LABEL_17:
  v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0);
  this->fields.callbackAfterScroll = v16;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v14, 1, 0.0, 0);
}


void CompleteMissionListViewManager__setOpenPanel(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v13; // x8
  Il2CppObject *Entity; // x21
  intptr_t m_CachedPtr; // x8
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  intptr_t v23; // x8
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  intptr_t v31; // x8
  Il2CppObject *v32; // x22
  intptr_t v33; // x8
  UISprite_o *v34; // x20
  Il2CppObject *v35; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x20
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  int v39; // [xsp+8h] [xbp-48h] BYREF
  int klass_high; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B263 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C94098(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C94098(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__);
    sub_1C94098(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
    sub_1C94098(&StringLiteral_4634/*"CompleteMission/{0}/{1}"*/);
    byte_4D2B263 = 1;
  }
  v3 = sub_1C942E4(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_42;
  *(_QWORD *)(v3 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_42;
  *(_DWORD *)(v3 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v13 = this->fields.missionToRecieve;
  if ( !v13 )
    goto LABEL_42;
  if ( !touchBlockObj )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             v13->fields.missionTargetId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  m_CachedPtr = touchBlockObj[57].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_42;
  touchBlockObj = *(UnityEngine_GameObject_o **)(m_CachedPtr + 32);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTexObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)touchBlockObj,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Component_object, v17, v18, v19, v20, v21, v22);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v23 = touchBlockObj[57].fields.m_CachedPtr;
  if ( !v23 )
    goto LABEL_42;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v23 + 32);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToAdjustObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToRowlingPanelObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTextureObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  v24 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v3 + 32) = v24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v24, v25, v26, v27, v28, v29, v30);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v31 = touchBlockObj[57].fields.m_CachedPtr;
  if ( !v31 )
    goto LABEL_42;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v31 + 32);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToNumObj,
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  v32 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v33 = touchBlockObj[57].fields.m_CachedPtr;
  if ( !v33 )
    goto LABEL_42;
  touchBlockObj = *(UnityEngine_GameObject_o **)(v33 + 32);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0);
  if ( !touchBlockObj
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToAdjustObj,
                                                      0)) == 0
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToRowlingPanelObj,
                                                      0)) == 0
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToNumberObj,
                                                      0)) == 0
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)touchBlockObj,
                                                      (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v32)
    || (v34 = (UISprite_o *)touchBlockObj) == 0
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v32[29].klass, 0),
        UISprite__set_spriteName(v34, (System_String_o *)v32[29].monitor, 0),
        !Entity) )
  {
LABEL_42:
    sub_1C942F0(touchBlockObj, v5);
  }
  klass_high = HIDWORD(Entity[1].klass);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high);
  v39 = *(_DWORD *)(v3 + 24);
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v37 = System_String__Format_64459052((System_String_o *)StringLiteral_4634/*"CompleteMission/{0}/{1}"*/, v35, v36, 0);
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v3,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v37, v38, 1, 0);
}


void CompleteMissionListViewManager__setPanelAnim(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1C942F0(this, method);
  if ( missionToRecieve->fields.dispNo >= 2 )
    CompleteMissionListViewManager__setOpenPanel(this, method);
}


void CompleteMissionListViewManager__startPanelAnim(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    sub_1C942F0(0, method);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void CompleteMissionListViewManager__unAcceptableDlg(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4D2B258 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1C94098(&StringLiteral_5450/*"END_NOTICE"*/);
    byte_4D2B258 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (CompleteMissionListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_1C942F0(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5450/*"END_NOTICE"*/, 0);
}


void CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50___ctor(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__MoveNext(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  void *_8__1; // x0
  struct CompleteMissionListViewManager_o *v19; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v20; // x8
  _BOOL4 isCompleteMission; // w9
  __int64 v22; // x8
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  Il2CppObject *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v47; // x23
  CommonUI_o *v48; // x19
  MissionRewardGetDialog_ClickDelegate_o *v49; // x22

  if ( (byte_4D2B278 & 1) == 0 )
  {
    sub_1C94098(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__);
    sub_1C94098(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4D2B278 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1C942E4(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    System_Object___ctor(v5, 0);
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_25;
    v19 = this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v19;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)((char *)_8__1 + 16), (int32_t)v19, v12, v13, v14, v15, v16, v17);
    v20 = this->fields.__8__1;
    if ( !v20 )
      goto LABEL_25;
    isCompleteMission = this->fields.isCompleteMission;
    v20->fields.isCompleteMission = isCompleteMission;
    if ( !isCompleteMission )
      goto LABEL_22;
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0);
    _8__1 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_25;
    v22 = *((_QWORD *)_8__1 + 173);
    if ( !v22 )
      goto LABEL_25;
    _8__1 = *(void **)(v22 + 32);
    if ( !_8__1 )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_8__1,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._anim_5__2,
      (int32_t)Component_object,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)_8__1, 0);
LABEL_16:
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    _8__1 = (void *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)_8__1, 0);
    if ( ((unsigned __int8)_8__1 & 1) != 0 )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v30, v31, v32, v33, v34, v35);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
    this->fields._anim_5__2 = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._anim_5__2, 0, v38, v39, v40, v41, v42, v43);
LABEL_22:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v47 = (Il2CppObject *)this->fields.__8__1;
    v48 = (CommonUI_o *)Instance;
    v49 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C942E4(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v49,
      v47,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0);
    if ( v48 )
    {
      CommonUI__OpenMissionRewardGetDialog(v48, rewards, rewardDetail, v49, 0, 0);
      return 0;
    }
LABEL_25:
    sub_1C942F0(_8__1, method);
  }
  return 0;
}


Il2CppObject *CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_IDisposable_Dispose(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64___ctor(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__MoveNext(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  CompleteMissionListViewManager_o *_4__this; // x20
  UnityEngine_Component_o *Instance; // x0
  intptr_t m_CachedPtr; // x8
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4D2B279 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B279 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    m_CachedPtr = Instance[57].fields.m_CachedPtr;
    if ( !m_CachedPtr )
      goto LABEL_17;
    Instance = *(UnityEngine_Component_o **)(m_CachedPtr + 32);
    if ( !Instance )
      goto LABEL_17;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         Instance,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._anim_5__2,
      (int32_t)Component_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( !Instance )
      goto LABEL_17;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)Instance, 0);
LABEL_11:
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v14, v15, v16, v17, v18, v19);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( _4__this )
      {
        CompleteMissionListViewManager__panelAfterCallback(_4__this, method);
        return 0;
      }
    }
LABEL_17:
    sub_1C942F0(Instance, method);
  }
  return 0;
}


Il2CppObject *CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_IDisposable_Dispose(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  ;
}


void CompleteMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B26C & 1) == 0 )
  {
    sub_1C94098(&CompleteMissionListViewManager___c_TypeInfo);
    byte_4D2B26C = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(CompleteMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CompleteMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct CompleteMissionListViewManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CompleteMissionListViewManager___c___ctor(CompleteMissionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c___CehckQpMaxAlert_b__68_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2B26F & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B26F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C942F0(Instance, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
}


void CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x0
  __int64 v4; // x1
  CompleteMissionListViewManager___c_c *v5; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  System_Action_o *_9__46_1; // x22
  Il2CppObject *v9; // x23
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2B26D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__);
    sub_1C94098(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_8694/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B26D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8694/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0);
  v5 = CompleteMissionListViewManager___c_TypeInfo;
  v6 = v3;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v5 = CompleteMissionListViewManager___c_TypeInfo;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  _9__46_1 = v5->static_fields->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v5->static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__46_1, v9, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__46_1 = _9__46_1;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__46_1,
      (int32_t)_9__46_1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !Instance )
    sub_1C942F0(v3, v4);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v7, v6, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2B26E & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B26E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void CompleteMissionListViewManager___c___panelAfterCallback_b__65_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void CompleteMissionListViewManager___c__DisplayClass45_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass45_0___recieveReward_b__0(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  CompleteMissionListViewManager___c__DisplayClass45_0_o *v8; // x19
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct CompleteMissionListViewManager_o *v11; // x8

  v8 = this;
  if ( (byte_4D2B270 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_1C94098(&StringLiteral_8690/*"MISSIONN_REWARD"*/);
    byte_4D2B270 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (missionEntity = v8->fields.missionEntity,
        _4__this->fields.missionToRecieve = missionEntity,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.missionToRecieve,
          (int32_t)missionEntity,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (v11 = v8->fields.__4__this) == 0)
    || (this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v11->fields.targetFSM) == 0 )
  {
    sub_1C942F0(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8690/*"MISSIONN_REWARD"*/, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__2(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D2B272 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B272 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C942F0(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D2B271 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B271 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C942F0(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__0(
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
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  long double inited; // q0
  _QWORD *v27; // x22
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v31; // x8
  struct CompleteMissionListViewManager_o *v32; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v33; // x21
  Il2CppObject *NumberFormatLong; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v35; // x8
  CompleteMissionListViewManager_o *v36; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v37; // x22
  const MethodInfo *v38; // x4
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v39; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v2 = this;
  if ( (byte_4D2B273 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&StringLiteral_8736/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_1C94098(&StringLiteral_8693/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1C94098(&StringLiteral_8696/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C94098(&StringLiteral_50/*"\n \n"*/);
    sub_1C94098(&StringLiteral_51/*"\n \n "*/);
    sub_1C94098(&StringLiteral_8737/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1C94098(&StringLiteral_8699/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_4D2B273 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_73;
  ActionExtensions__Call(v5->fields.callback, 0);
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_73;
  if ( giftList->fields._size < 1 )
  {
    v10 = v2->fields.CS___8__locals1;
    if ( v10 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v10->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, method);
        v11 = v2->fields.CS___8__locals1;
        if ( v11 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v11->fields.__4__this;
          if ( this )
          {
            CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)this, method);
            return;
          }
        }
      }
    }
    goto LABEL_73;
  }
  v7 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v7, 0);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v8->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v9 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                            this,
                            this->klass->vtable._3_ToString.method);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v9, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemNum >= 2 )
    {
      if ( !v9 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_64463684(
                                                                         v9,
                                                                         0,
                                                                         v9->fields._stringLength - 2,
                                                                         0);
      if ( !v7 )
        goto LABEL_73;
      System_Text_StringBuilder__Append_64501704(v7, (System_String_o *)this, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8693/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_64501704(
                                                                         v7,
                                                                         v12,
                                                                         0);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_8696/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0);
      if ( !v7 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v7,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v9,
                                                                         0);
    }
    v13 = v2->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v13->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    v14 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                               this,
                               this->klass->vtable._3_ToString.method);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v14, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_64501704(
                                                                         v7,
                                                                         (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                         0);
  }
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v15->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v16 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                             this,
                             this->klass->vtable._3_ToString.method);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v16, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v17 = v2->fields.CS___8__locals1;
    if ( !v17 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v17->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                                                                       this,
                                                                       this->klass->vtable._3_ToString.method);
    if ( !v7 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_64501704(v7, (System_String_o *)this, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_64501704(
                                                                       v7,
                                                                       v18,
                                                                       0);
  }
  v19 = v2->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_73;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_73;
  if ( v20->fields.isQpMaxAlert )
  {
    if ( v20->fields.isQpAlreadyMax )
    {
      if ( v7 )
      {
        if ( v2->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_64501704(v7, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0);
        else
          System_Text_StringBuilder__set_Length(v7, 0, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8736/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0);
        v31 = v2->fields.CS___8__locals1;
        if ( v31 )
        {
          v32 = v31->fields.__4__this;
          if ( v32 )
          {
            v33 = this;
            NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v32->fields.overQpValue, 0);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v7,
                                                                               (System_String_o *)v33,
                                                                               NumberFormatLong,
                                                                               0);
            goto LABEL_67;
          }
        }
      }
LABEL_73:
      sub_1C942F0(this, method);
    }
    if ( !v7 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_64501704(v7, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8737/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0);
    v21 = v2->fields.CS___8__locals1;
    if ( !v21 )
      goto LABEL_73;
    v22 = v21->fields.__4__this;
    if ( !v22 )
      goto LABEL_73;
    v23 = this;
    v24 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v22->fields.overQpValue, 0);
    v25 = System_String__Format((System_String_o *)v23, v24, 0);
    v27 = Method_System_Array_Empty_object___;
    v28 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v28 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v28 = v27[7];
    }
    v29 = *(_QWORD *)(v28 + 16);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v29 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v29);
    v30 = *(_QWORD *)(v27[7] + 16LL);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C6A12C(inited);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_64508244(
                                                                       v7,
                                                                       v25,
                                                                       **(System_Object_array ***)(v30 + 184),
                                                                       0);
  }
LABEL_67:
  v35 = v2->fields.CS___8__locals1;
  if ( !v35 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v2->fields.giftList;
  if ( !this )
    goto LABEL_73;
  v36 = v35->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v7 )
    goto LABEL_73;
  v37 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                                                     v7,
                                                                     v7->klass->vtable._3_ToString.method);
  v39 = v2->fields.CS___8__locals1;
  if ( !v39 || !v36 )
    goto LABEL_73;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v36,
             (GiftEntity_array *)v37,
             (System_String_o *)this,
             v39->fields.isCompleteMission,
             v38);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)v36, Dialog, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v2 = this;
  if ( (byte_4D2B274 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__);
    byte_4D2B274 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
LABEL_8:
    sub_1C942F0(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0);
}


void CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v7; // x8
  Il2CppObject *v8; // x0
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v10; // x21
  System_String_o *v11; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v12; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D2B275 & 1) == 0 )
  {
    sub_1C94098(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C94098(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__);
    sub_1C94098(&StringLiteral_8696/*"MISSION_ACTION_SUCCESS"*/);
    byte_4D2B275 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SummonAssetManager__UnloadSummonAssets(Instance, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v7 = this->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_15;
  ActionExtensions__Call(v7->fields.callback, 0);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v10 = (CommonUI_o *)v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8696/*"MISSION_ACTION_SUCCESS"*/, 0);
  Instance = (SummonAssetManager_o *)System_String__Format(v11, (Il2CppObject *)this->fields.sendName, 0);
  v12 = this->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_15;
  _9__4 = v12->fields.__9__4;
  v14 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C942E4(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v12,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0);
    v12->fields.__9__4 = _9__4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12->fields.__9__4, (int32_t)_9__4, v15, v16, v17, v18, v19, v20);
  }
  if ( !v10 )
LABEL_15:
    sub_1C942F0(Instance, v4);
  CommonUI__OpenMissionRewardGetDialog_31666636(v10, rwdSetEnt, v14, _9__4, 0);
}


void CompleteMissionListViewManager___c__DisplayClass50_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass50_0___OpenPanelMissionRewardGetDialog_b__0(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D2B276 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B276 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseMissionRewardGetDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_8;
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
  if ( this->fields.isCompleteMission )
    return;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
LABEL_8:
    sub_1C942F0(Instance, v4);
  CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)Instance, v4);
}


void CompleteMissionListViewManager___c__DisplayClass61_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass61_0___setOpenPanel_b__0(
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
  struct CompleteMissionComponent_o *completeMissionComp; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionComponent_o *v14; // x8
  struct CompleteMissionListViewManager_o *v15; // x8
  struct CompleteMissionComponent_o *v16; // x8
  struct CompleteMissionListViewManager_o *v17; // x8
  struct CompleteMissionListViewManager_o *v18; // x19
  float endEffectTime; // s8
  System_Action_o *v20; // x20
  int32_t v21; // [xsp+8h] [xbp-48h] BYREF
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B277 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&Method_CompleteMissionListViewManager_animAfterCallback__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_25354/*"{0}"*/);
    byte_4D2B277 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_25354/*"{0}"*/, v8, 0);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_object__51893132(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
    tex,
    Instance,
    tex->klass->vtable._27_set_mainTexture.method);
  animTex = this->fields.animTex;
  v21 = this->fields.completeMissionPanelChildIdx;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v11 = System_String__Format((System_String_o *)StringLiteral_25354/*"{0}"*/, v10, 0);
  Instance = (CommonUI_o *)AssetData__GetObject_object__51893132(
                             backPanel,
                             v11,
                             (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, const MethodInfo *))animTex->klass->vtable._27_set_mainTexture.methodPtr)(
    animTex,
    Instance,
    animTex->klass->vtable._27_set_mainTexture.method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  completeMissionComp = Instance->fields.completeMissionComp;
  if ( !completeMissionComp )
    goto LABEL_30;
  Instance = (CommonUI_o *)completeMissionComp->fields.completeMissionPanel;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             _4__this->fields.distanceToNumObj,
                             0);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v14 = Instance->fields.completeMissionComp;
  if ( !v14 )
    goto LABEL_30;
  Instance = (CommonUI_o *)v14->fields.completeMissionPanel;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v15->fields.distanceToTexObj,
                             0);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v16 = Instance->fields.completeMissionComp;
  if ( !v16
    || (Instance = (CommonUI_o *)v16->fields.completeMissionPanel) == 0
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0),
        (v17 = this->fields.__4__this) == 0)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v17->fields.distanceToEfPanelObj,
                                   0)) == 0
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        (v18 = this->fields.__4__this) == 0) )
  {
LABEL_30:
    sub_1C942F0(Instance, v6);
  }
  endEffectTime = v18->fields.endEffectTime;
  v20 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v18, Method_CompleteMissionListViewManager_animAfterCallback__, 0);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v18, endEffectTime, v20, 0);
}


void CompleteMissionListViewManager___c__DisplayClass68_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionListViewManager___c__DisplayClass68_0___CehckQpMaxAlert_b__0(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *decideCallback; // x8

  decideCallback = this->fields.decideCallback;
  if ( !decideCallback )
    sub_1C942F0(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))decideCallback->fields.invoke_impl)(
    decideCallback->fields.method_code,
    decideCallback->fields.method);
}