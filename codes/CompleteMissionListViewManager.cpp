void __fastcall CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14F4F & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, method, v2);
    byte_4B14F4F = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, method);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager__AcceptReward(
        CompleteMissionListViewManager_o *this,
        System_Action_o *callback,
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  int64_t v70; // x22
  __int64 Master_object; // x0
  Il2CppObject *v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v87; // x20
  struct EventMissionEntity_o *v88; // x8
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x8
  __int64 v92; // x20
  unsigned __int64 v93; // x23
  int64_t v94; // x21
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Object_array *v101; // x27
  __int64 v102; // x8
  char *v103; // x0
  System_Text_StringBuilder_o *v104; // x20
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  System_Text_StringBuilder_o *v114; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  System_Text_StringBuilder_o *v118; // x20
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x20
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  Il2CppObject **v135; // x21
  __int64 v136; // x2
  __int64 v137; // x3
  System_Object_array *v138; // x8
  signed int max_length; // w28
  il2cpp_array_size_t v140; // w9
  __int64 v141; // x27
  Il2CppObject *v142; // x8
  Il2CppObject *v143; // x8
  Il2CppObject *v144; // x8
  Il2CppObject *v145; // x8
  EventRewardSetEntity_o *SetRewardData; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  int64_t v159; // x1
  Il2CppObject **v160; // x22
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v162; // x21
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x3
  System_Action_o *v166; // x22
  System_Collections_Generic_List_object__o *v167; // x26
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  System_Collections_Generic_List_object__o *v171; // x22
  __int64 v172; // x2
  __int64 v173; // x3
  const MethodInfo_37DEB14 **v174; // x23
  il2cpp_array_size_t v175; // w29
  Il2CppObject *v176; // x8
  Il2CppObject *v177; // x8
  ServantEntity_o *v178; // x24
  _BOOL4 IsCombineMaterial; // w25
  Il2CppObject *v180; // x8
  System_String_o *v181; // x0
  Il2CppObject *v182; // x8
  Il2CppObject *v183; // x24
  Il2CppObject *v184; // x0
  Il2CppObject *v185; // x24
  System_Text_StringBuilder_o *monitor; // x25
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  struct System_Object_array *items; // x8
  _QWORD *v194; // x9
  __int64 size; // x10
  Il2CppClass **v196; // x0
  Il2CppObject *v197; // x8
  Il2CppObject *v198; // x8
  bool IsCountableWithPlus; // w0
  __int64 v200; // x1
  __int64 v201; // x2
  __int64 v202; // x3
  Il2CppObject **v203; // x8
  Il2CppObject *v204; // x25
  System_Text_StringBuilder_o *v205; // x24
  const MethodInfo_37DEB14 **v206; // x20
  int32_t getQpValue; // w23
  Il2CppObject *v208; // x8
  System_Collections_Generic_List_object__o *v209; // x19
  System_String_o *v210; // x26
  Il2CppObject *v211; // x0
  __int64 v212; // x8
  System_Text_StringBuilder_o *v213; // x25
  __int64 v214; // x8
  System_Collections_Generic_List_object__o *v215; // x0
  struct System_Object_array *v216; // x8
  _QWORD *v217; // x9
  __int64 v218; // x10
  System_Collections_Generic_List_object__o *v219; // x21
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  __int64 v226; // x1
  __int64 v227; // x2
  __int64 v228; // x3
  System_Action_o *v229; // x21
  Il2CppObject *Instance; // x0
  __int64 v231; // x1
  EventRewardSetEntity_o *v232; // x20
  CommonUI_o *v233; // x23
  System_String_o *v234; // x0
  System_String_o *v235; // x0
  Il2CppObject *v236; // x24
  System_String_o *v237; // x21
  __int64 v238; // x1
  __int64 v239; // x2
  __int64 v240; // x3
  MissionRewardGetDialog_ClickDelegate_o *v241; // x22
  __int64 v242; // x0
  CompleteMissionListViewManager_o *v243; // [xsp+8h] [xbp-98h]
  __int64 v244; // [xsp+10h] [xbp-90h]
  int32_t monitor_high; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v246; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v247; // [xsp+28h] [xbp-78h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B14F3E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_System_Array_Resize_GiftEntity___, v6, v7);
    sub_1BCA7E0(&MissionRewardGetDialog_ClickDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CompleteMissionMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v22, v23);
    sub_1BCA7E0(&int_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor___76786016, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v34, v35);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v42, v43);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v44, v45);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__, v46, v47);
    sub_1BCA7E0(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__, v50, v51);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__, v52, v53);
    sub_1BCA7E0(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo, v54, v55);
    sub_1BCA7E0(&StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_25370/*"{0}×{1:#,0}"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_25418/*"×"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_49/*"\n "*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_25713/*"＋"*/, v68, v69);
    byte_4B14F3E = 1;
  }
  v247 = 0LL;
  entity = 0LL;
  v246 = 0LL;
  v70 = sub_1BCAA2C(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v70, 0LL);
  if ( !v70 )
    goto LABEL_52;
  *(_QWORD *)(v70 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 16), (int64_t)this, v73, v74, v75, v76, v77, v78);
  *(_QWORD *)(v70 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 24), (int64_t)callback, v79, v80, v81, v82, v83, v84);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v85);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_52;
  v87 = (GiftMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_52;
  array = (System_Object_array *)GiftMaster__GetGiftListById(
                                   (GiftMaster_o *)Master_object,
                                   missionToRecieve->fields.giftId,
                                   0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v88 = this->fields.missionToRecieve;
  if ( !v88 || !Master_object )
    goto LABEL_52;
  Master_object = CompleteMissionMaster__TryGetEntityFromObjectId(
                    (CompleteMissionMaster_o *)Master_object,
                    &entity,
                    v88->fields.id,
                    0LL);
  *(_BYTE *)(v70 + 48) = Master_object & 1;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_52;
    Master_object = (__int64)GiftMaster__GetGiftListById(v87, entity->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_52;
    v91 = *(_QWORD *)(Master_object + 24);
    v92 = Master_object;
    if ( (int)v91 >= 1 )
    {
      v93 = 0LL;
      while ( v93 < (unsigned int)v91 )
      {
        if ( !array )
          goto LABEL_52;
        v94 = *(_QWORD *)(v92 + 32 + 8 * v93);
        System_Array__Resize_object_(
          &array,
          array->max_length + 1,
          (const MethodInfo_2ED21D8 *)Method_System_Array_Resize_GiftEntity___);
        v101 = array;
        if ( !array )
          goto LABEL_52;
        if ( v94 )
        {
          Master_object = sub_1BCA91C(v94, array->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v242 = sub_1BCAA60(0LL);
            sub_1BCA908(v242, 0LL);
          }
        }
        v102 = *(_QWORD *)&v101->max_length;
        if ( !(_DWORD)v102 )
          break;
        v103 = (char *)v101 + (((v102 << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v103 + 4) = v94;
        sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 32), v94, v95, v96, v97, v98, v99, v100);
        LODWORD(v91) = *(_DWORD *)(v92 + 24);
        if ( (__int64)++v93 >= (int)v91 )
          goto LABEL_22;
      }
LABEL_156:
      sub_1BCAA44(Master_object, v72);
    }
  }
LABEL_22:
  v104 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v72, v89, v90);
  System_Text_StringBuilder___ctor(v104, 0LL);
  *(_QWORD *)(v70 + 40) = v104;
  sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 40), (int64_t)v104, v105, v106, v107, v108, v109, v110);
  v114 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v111, v112, v113);
  System_Text_StringBuilder___ctor(v114, 0LL);
  v118 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v115, v116, v117);
  System_Text_StringBuilder___ctor(v118, 0LL);
  *(_QWORD *)(v70 + 32) = v118;
  sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 32), (int64_t)v118, v119, v120, v121, v122, v123, v124);
  v128 = sub_1BCAA2C(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo, v125, v126, v127);
  System_Object___ctor((Il2CppObject *)v128, 0LL);
  if ( !v128 )
    goto LABEL_52;
  *(_QWORD *)(v128 + 48) = v70;
  v135 = (Il2CppObject **)(v128 + 48);
  sub_1BCA784((PartyOrganizationUtility_o *)(v128 + 48), v70, v129, v130, v131, v132, v133, v134);
  Master_object = (__int64)this->fields.missionToRecieve;
  if ( !Master_object )
    goto LABEL_52;
  if ( *(_DWORD *)(Master_object + 80) == 1 )
  {
    Master_object = (__int64)this->fields.touchBlockObj;
    if ( Master_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      *(_DWORD *)(v128 + 24) = 0;
      v138 = array;
      v244 = v128;
      if ( array )
      {
        max_length = array->max_length;
        if ( max_length >= 1 )
        {
          v140 = 0;
          while ( v140 < v138->max_length )
          {
            v141 = (int)v140;
            v142 = v138->m_Items[v140];
            if ( !v142 )
              goto LABEL_52;
            Master_object = Gift__IsServant_38401528(HIDWORD(v142[1].klass), 0LL);
            if ( (Master_object & 1) == 0 )
            {
              if ( !array )
                goto LABEL_52;
              if ( (unsigned int)v141 >= array->max_length )
                goto LABEL_156;
              v143 = array->m_Items[v141];
              if ( !v143 )
                goto LABEL_52;
              Master_object = Gift__IsCommandCode_38401920(HIDWORD(v143[1].klass), 0LL);
              if ( (Master_object & 1) == 0 )
              {
                if ( !array )
                  goto LABEL_52;
                if ( (unsigned int)v141 >= array->max_length )
                  goto LABEL_156;
                v144 = array->m_Items[v141];
                if ( !v144 )
                  goto LABEL_52;
                Master_object = Gift__IsCostumeRelease(HIDWORD(v144[1].klass), 0LL);
                if ( (Master_object & 1) == 0 )
                {
                  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Master_object )
                    goto LABEL_52;
                  Master_object = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Master_object,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( !array )
                    goto LABEL_52;
                  if ( (unsigned int)v141 >= array->max_length )
                    goto LABEL_156;
                  v145 = array->m_Items[v141];
                  if ( !v145 || !Master_object )
                    goto LABEL_52;
                  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &v247,
                                    (int32_t)v145[1].monitor,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                  if ( (Master_object & 1) != 0 )
                  {
                    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !v247 || !Master_object )
                      goto LABEL_52;
                    Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v247[1].klass, 0LL);
                    if ( (Master_object & 1) == 0 )
                      ++*(_DWORD *)(v128 + 24);
                  }
                }
              }
            }
            if ( max_length - 1 == (_DWORD)v141 )
              goto LABEL_59;
            v138 = array;
            v140 = v141 + 1;
            if ( !array )
              goto LABEL_52;
          }
          goto LABEL_156;
        }
LABEL_59:
        v167 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                              v72,
                                                              v136,
                                                              v137);
        System_Collections_Generic_List_object____ctor(
          v167,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        v171 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                              v168,
                                                              v169,
                                                              v170);
        System_Collections_Generic_List_object____ctor(
          v171,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( max_length >= 1 )
        {
          v174 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
          v175 = 0;
          v243 = this;
          do
          {
            if ( !array )
              goto LABEL_52;
            if ( v175 >= array->max_length )
              goto LABEL_156;
            v176 = array->m_Items[v175];
            if ( !v176 )
              goto LABEL_52;
            Master_object = Gift__IsServant_38401528(HIDWORD(v176[1].klass), 0LL);
            if ( (Master_object & 1) != 0 )
            {
              Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v174);
              if ( !Master_object )
                goto LABEL_52;
              Master_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Master_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !array )
                goto LABEL_52;
              if ( v175 >= array->max_length )
                goto LABEL_156;
              v177 = array->m_Items[v175];
              if ( !v177 )
                goto LABEL_52;
              if ( !Master_object )
                goto LABEL_52;
              Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         (int32_t)v177[1].monitor,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Master_object )
                goto LABEL_52;
              v178 = (ServantEntity_o *)Master_object;
              IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_object + 84), 0LL);
              Master_object = SvtType__IsStatusUp(v178->fields.type, 0LL);
              v180 = *v135;
              if ( !*v135 )
                goto LABEL_52;
              if ( LOBYTE(v180[3].klass) | (IsCombineMaterial | (unsigned int)Master_object) & 1 )
              {
                Master_object = (__int64)v180[2].monitor;
                if ( !Master_object )
                  goto LABEL_52;
                v181 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 360LL))(
                                            Master_object,
                                            *(_QWORD *)(*(_QWORD *)Master_object + 368LL));
                Master_object = System_String__IsNullOrEmpty(v181, 0LL);
                if ( (Master_object & 1) == 0 )
                {
                  if ( !*v135 )
                    goto LABEL_52;
                  Master_object = (__int64)(*v135)[2].monitor;
                  if ( !Master_object )
                    goto LABEL_52;
                  System_Text_StringBuilder__Append_61563116(
                    (System_Text_StringBuilder_o *)Master_object,
                    (System_String_o *)StringLiteral_49/*"\n "*/,
                    0LL);
                }
                Master_object = (__int64)ServantEntity__getName(v178, -1, -1, 0LL);
                if ( !array )
                  goto LABEL_52;
                if ( v175 >= array->max_length )
                  goto LABEL_156;
                v182 = array->m_Items[v175];
                if ( !v182 )
                  goto LABEL_52;
                v183 = (Il2CppObject *)Master_object;
                monitor_high = HIDWORD(v182[1].monitor);
                v184 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
                Master_object = (__int64)System_String__Format_62415592(
                                           (System_String_o *)StringLiteral_25370/*"{0}×{1:#,0}"*/,
                                           v183,
                                           v184,
                                           0LL);
                if ( !*v135 )
                  goto LABEL_52;
                v185 = (Il2CppObject *)Master_object;
                monitor = (System_Text_StringBuilder_o *)(*v135)[2].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !monitor )
                  goto LABEL_52;
                Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                           monitor,
                                           (System_String_o *)Master_object,
                                           v185,
                                           0LL);
                if ( !array )
                  goto LABEL_52;
                if ( v175 >= array->max_length )
                  goto LABEL_156;
                if ( !v171 )
                  goto LABEL_52;
                v72 = array->m_Items[v175];
                items = v171->fields._items;
                v194 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                ++v171->fields._version;
                if ( !items )
                  goto LABEL_52;
                size = v171->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  v214 = v194[4];
                  v215 = v171;
LABEL_132:
                  System_Collections_Generic_List_object___AddWithResize(
                    v215,
                    v72,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v214 + 192) + 112LL));
                  goto LABEL_133;
                }
                v196 = &items->obj.klass + size;
                v171->fields._size = size + 1;
LABEL_91:
                v196[4] = (Il2CppClass *)v72;
                sub_1BCA784((PartyOrganizationUtility_o *)(v196 + 4), (int64_t)v72, v187, v188, v189, v190, v191, v192);
              }
            }
            else
            {
              if ( !array )
                goto LABEL_52;
              if ( v175 >= array->max_length )
                goto LABEL_156;
              v197 = array->m_Items[v175];
              if ( !v197 )
                goto LABEL_52;
              Master_object = Gift__IsItem_38401476(HIDWORD(v197[1].klass), 0LL);
              if ( (Master_object & 1) != 0 )
              {
                Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v174);
                if ( !Master_object )
                  goto LABEL_52;
                Master_object = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
                if ( !array )
                  goto LABEL_52;
                if ( v175 >= array->max_length )
                  goto LABEL_156;
                v198 = array->m_Items[v175];
                if ( !v198 || !Master_object )
                  goto LABEL_52;
                Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &v246,
                                  (int32_t)v198[1].monitor,
                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                if ( (Master_object & 1) != 0 )
                {
                  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v246 || !Master_object )
                    goto LABEL_52;
                  Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v246[1].klass, 0LL);
                  if ( (Master_object & 1) == 0 )
                  {
                    if ( !array )
                      goto LABEL_52;
                    if ( v175 >= array->max_length )
                      goto LABEL_156;
                    Master_object = (__int64)array->m_Items[v175];
                    if ( !Master_object )
                      goto LABEL_52;
                    Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0LL);
                    if ( (Master_object & 1) == 0 || !this->fields.isQpAlreadyMax )
                    {
                      if ( !v246 )
                        goto LABEL_52;
                      IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v246[3].klass, 0LL);
                      v203 = (Il2CppObject **)&StringLiteral_25713/*"＋"*/;
                      if ( !IsCountableWithPlus )
                        v203 = (Il2CppObject **)&StringLiteral_25418/*"×"*/;
                      v204 = *v203;
                      v205 = (System_Text_StringBuilder_o *)sub_1BCAA2C(
                                                              System_Text_StringBuilder_TypeInfo,
                                                              v200,
                                                              v201,
                                                              v202);
                      System_Text_StringBuilder___ctor(v205, 0LL);
                      if ( !v246 )
                        goto LABEL_52;
                      if ( !v205 )
                        goto LABEL_52;
                      Master_object = (__int64)System_Text_StringBuilder__Append_61563116(
                                                 v205,
                                                 (System_String_o *)v246[1].monitor,
                                                 0LL);
                      if ( !array )
                        goto LABEL_52;
                      if ( v175 >= array->max_length )
                        goto LABEL_156;
                      Master_object = (__int64)array->m_Items[v175];
                      if ( !Master_object )
                        goto LABEL_52;
                      v206 = v174;
                      Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0LL);
                      if ( (Master_object & 1) == 0
                        || !this->fields.isQpMaxAlert
                        || (getQpValue = this->fields.getQpValue) == 0 )
                      {
                        if ( !array )
                          goto LABEL_52;
                        if ( v175 >= array->max_length )
                          goto LABEL_156;
                        v208 = array->m_Items[v175];
                        if ( !v208 )
                          goto LABEL_52;
                        getQpValue = HIDWORD(v208[1].monitor);
                      }
                      v209 = v167;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
                      v210 = LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      monitor_high = getQpValue;
                      v211 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
                      Master_object = (__int64)System_Text_StringBuilder__AppendFormat_61569468(
                                                 v205,
                                                 v210,
                                                 v204,
                                                 v211,
                                                 0LL);
                      v212 = *(_QWORD *)(v244 + 48);
                      if ( !v212 )
                        goto LABEL_52;
                      v213 = *(System_Text_StringBuilder_o **)(v212 + 32);
                      v167 = v209;
                      v174 = v206;
                      if ( *(int *)(v244 + 24) >= 2 )
                      {
                        this = v243;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
                        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                        if ( !v213 )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                                   v213,
                                                   (System_String_o *)Master_object,
                                                   (Il2CppObject *)v205,
                                                   0LL);
                        if ( !*v135 )
                          goto LABEL_52;
                        Master_object = (__int64)(*v135)[2].klass;
                        if ( !Master_object )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__Append_61563116(
                                                   (System_Text_StringBuilder_o *)Master_object,
                                                   (System_String_o *)StringLiteral_49/*"\n "*/,
                                                   0LL);
                      }
                      else
                      {
                        Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v205->klass->vtable._3_ToString.method)(
                                          v205,
                                          v205->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                        this = v243;
                        if ( !v213 )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__Append_61563116(
                                                   v213,
                                                   (System_String_o *)Master_object,
                                                   0LL);
                      }
                      if ( !array )
                        goto LABEL_52;
                      if ( v175 >= array->max_length )
                        goto LABEL_156;
                      if ( !v167 )
                        goto LABEL_52;
                      v72 = array->m_Items[v175];
                      v216 = v167->fields._items;
                      v217 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                      ++v167->fields._version;
                      if ( !v216 )
                        goto LABEL_52;
                      v218 = v167->fields._size;
                      if ( (unsigned int)v218 >= v216->max_length )
                      {
                        v214 = v217[4];
                        v215 = v167;
                        goto LABEL_132;
                      }
                      v196 = &v216->obj.klass + v218;
                      v167->fields._size = v218 + 1;
                      goto LABEL_91;
                    }
                  }
                }
              }
            }
LABEL_133:
            ++v175;
          }
          while ( max_length != v175 );
        }
        v219 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                              v72,
                                                              v172,
                                                              v173);
        System_Collections_Generic_List_object____ctor_56235344(
          v219,
          (System_Collections_Generic_IEnumerable_T__o *)v167,
          (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_GiftEntity___ctor___76786016);
        *(_QWORD *)(v244 + 16) = v219;
        sub_1BCA784((PartyOrganizationUtility_o *)(v244 + 16), (int64_t)v219, v220, v221, v222, v223, v224, v225);
        Master_object = *(_QWORD *)(v244 + 16);
        if ( Master_object )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)Master_object,
            (System_Collections_Generic_IEnumerable_T__o *)v171,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
          v229 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v226, v227, v228);
          System_Action___ctor(
            v229,
            (Il2CppObject *)v244,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
            0LL);
          MissionListViewManager__StartItemGetEffectAction(
            (MissionListViewManager_o *)this,
            (GiftEntity_array *)array,
            0,
            v229,
            0LL);
          goto LABEL_155;
        }
      }
    }
LABEL_52:
    sub_1BCAA3C(Master_object, v72);
  }
  SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Master_object, 0LL);
  *(_QWORD *)(v128 + 32) = SetRewardData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v128 + 32), (int64_t)SetRewardData, v147, v148, v149, v150, v151, v152);
  if ( !*(_QWORD *)(v128 + 32) )
    goto LABEL_52;
  v159 = *(_QWORD *)(*(_QWORD *)(v128 + 32) + 32LL);
  *(_QWORD *)(v128 + 40) = v159;
  v160 = (Il2CppObject **)(v128 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v128 + 40), v159, v153, v154, v155, v156, v157, v158);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList || !*(_QWORD *)&getSvtList->max_length )
  {
    if ( *v135 )
    {
      ActionExtensions__Call((System_Action_o *)(*v135)[1].monitor, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v232 = *(EventRewardSetEntity_o **)(v128 + 32);
      v233 = (CommonUI_o *)Instance;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v231);
      v234 = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v235 = System_String__Format(v234, *v160, 0LL);
      v236 = *v135;
      v237 = v235;
      v241 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                         v238,
                                                         v239,
                                                         v240);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v241,
        v236,
        Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
        0LL);
      if ( v233 )
      {
        CommonUI__OpenMissionRewardGetDialog_30845908(v233, v232, v237, v241, 0LL);
        goto LABEL_155;
      }
    }
    goto LABEL_52;
  }
  Master_object = (__int64)this->fields.touchBlockObj;
  if ( !Master_object )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v162 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v166 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v163, v164, v165);
  System_Action___ctor(
    v166,
    (Il2CppObject *)v128,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
    0LL);
  if ( !v162 )
    goto LABEL_52;
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v162, v166, 0LL);
LABEL_155:
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
  __int64 v31; // x21
  void *QpGiftEntity; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x24
  _DWORD *v41; // x22
  System_String_o *Empty; // x20
  _DWORD *v43; // x23
  int32_t v44; // w25
  int32_t QpMax; // w8
  int v46; // w25
  int v47; // w26
  System_String_o *v48; // x24
  Il2CppObject *NumberFormat; // x25
  System_String_o *v50; // x0
  __int64 v51; // x1
  BalanceConfig_c *v52; // x8
  Il2CppObject *v53; // x26
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  System_String_o *v56; // x24
  int32_t v57; // w8
  int32_t v58; // w8
  System_String_o *v59; // x24
  System_String_o *v60; // x0
  int32_t v61; // w8
  Il2CppObject *v62; // x23
  System_String_o *v63; // x0
  __int64 v64; // x1
  BalanceConfig_c *v65; // x8
  Il2CppObject *v66; // x25
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  System_String_o *v69; // x22
  System_String_o *v70; // x23
  System_String_o *v71; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v73; // x19
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_o *v77; // x26
  __int64 v78; // x2
  __int64 v79; // x3
  System_Action_o *onTransition; // x21
  Il2CppObject *v81; // x27
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7

  if ( (byte_4B14F4E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, missionEntity, decideCallback);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&string_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, v13, v14);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__, v15, v16);
    sub_1BCA7E0(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&CompleteMissionListViewManager___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_8810/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_8813/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11797/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11796/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11803/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v29, v30);
    byte_4B14F4E = 1;
  }
  v31 = sub_1BCAA2C(
          CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo,
          missionEntity,
          decideCallback,
          method);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_35;
  *(_QWORD *)(v31 + 16) = decideCallback;
  v40 = v31 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)decideCallback, v34, v35, v36, v37, v38, v39);
  if ( !missionEntity )
    goto LABEL_35;
  QpGiftEntity = EventMissionEntity__GetQpGiftEntity(missionEntity, 0LL);
  if ( !QpGiftEntity )
  {
LABEL_18:
    if ( *(_QWORD *)v40 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v40 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v40 + 64LL),
        *(_QWORD *)(*(_QWORD *)v40 + 40LL));
      return;
    }
LABEL_35:
    sub_1BCAA3C(QpGiftEntity, v33);
  }
  v41 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  QpGiftEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !QpGiftEntity )
    goto LABEL_35;
  v43 = QpGiftEntity;
  v44 = *((_DWORD *)QpGiftEntity + 24);
  QpGiftEntity = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
    QpGiftEntity = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)QpGiftEntity + 23) + 4LL);
  if ( v44 < QpMax )
  {
    v46 = v43[24];
    v47 = v41[7];
    if ( !*((_DWORD *)QpGiftEntity + 56) )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity, v33);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v47 + v46 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_8813/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v41[7], 0LL);
      v50 = LocalizationManager__GetNumberFormat(v43[24], 0LL);
      v52 = BalanceConfig_TypeInfo;
      v53 = (Il2CppObject *)v50;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v51);
        v52 = BalanceConfig_TypeInfo;
      }
      v54 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v52->static_fields->QpMax, 0LL);
      v56 = System_String__Format_62415660(v48, NumberFormat, v53, v54, 0LL);
      v57 = BalanceConfig_TypeInfo->static_fields->QpMax - v43[24];
      this->fields.getQpValue = v57;
      v58 = v41[7] - v57;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  *(_WORD *)&this->fields.isQpMaxAlert = 257;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_8810/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
  v60 = LocalizationManager__GetNumberFormat(v41[7], 0LL);
  v61 = v43[24];
  v62 = (Il2CppObject *)v60;
  v63 = LocalizationManager__GetNumberFormat(v61, 0LL);
  v65 = BalanceConfig_TypeInfo;
  v66 = (Il2CppObject *)v63;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v64);
    v65 = BalanceConfig_TypeInfo;
  }
  v67 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v65->static_fields->QpMax, 0LL);
  v68 = System_String__Format_62415660(v59, v62, v66, v67, 0LL);
  v58 = v41[7];
  v56 = v68;
LABEL_25:
  this->fields.overQpValue = v58;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v73 = v71;
  v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
  System_Action___ctor(
    v77,
    (Il2CppObject *)v31,
    Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__,
    0LL);
  QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo, v33);
    QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
  }
  onTransition = *(System_Action_o **)(*((_QWORD *)QpGiftEntity + 23) + 32LL);
  if ( !onTransition )
  {
    if ( !*((_DWORD *)QpGiftEntity + 56) )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity, v33);
      QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
    }
    v81 = (Il2CppObject *)**((_QWORD **)QpGiftEntity + 23);
    onTransition = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v78, v79);
    System_Action___ctor(onTransition, v81, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__68_1 = onTransition;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__68_1,
      (int64_t)onTransition,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_35;
  ServantSellMaxAlertDialog__Open(qpMaxAlertDialog, Empty, v56, Empty, v69, v70, v73, v77, onTransition, 0LL, 1, 0LL);
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  CompleteMissionListViewItem_o *v45; // x23
  const MethodInfo *v46; // x3
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t CompleteMissionFilterId_k__BackingField; // w25
  __int64 *v62; // x8
  void *ObjectList; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x1
  __int64 v66; // x2
  const MethodInfo *v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int v74; // w22
  System_Collections_Generic_List_object__o *v75; // x19
  int32_t i; // w20
  __int64 v77; // x1
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B14F33 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, missionList, mstMissionIdList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v24, v25);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, v32, v33);
    byte_4B14F33 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v79,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v80 = v79;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v80,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v80.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v45 = (CompleteMissionListViewItem_o *)sub_1BCAA2C(CompleteMissionListViewItem_TypeInfo, v40, v41, v42);
      CompleteMissionListViewItem___ctor(v45, (EventMissionEntity_o *)current, type, v46);
      if ( !itemList )
        sub_1BCAA3C(v47, v48);
      items = itemList->fields._items;
      v56 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BCAA3C(v47, v48);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v45,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v45;
        sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v45, v49, v50, v51, v52, v53, v54);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v80,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)sort, v34, v35, v36, v37, v38, v39);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_4B14F95 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, sort, v34);
    byte_4B14F95 = 1;
  }
  CompleteMissionFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
  if ( CompleteMissionFilterId_k__BackingField )
    v62 = &StringLiteral_8775/*"MISSION_EMPTY_TXT"*/;
  else
    v62 = &StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/;
  ObjectList = LocalizationManager__Get((System_String_o *)*v62, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_39;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
  if ( !byte_4B14F95 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v65, v66);
    byte_4B14F95 = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v65);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.reDispAct,
      (int64_t)redispCallBack,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v67);
  if ( !ObjectList )
LABEL_39:
    sub_1BCAA3C(ObjectList, v64);
  v74 = *((_DWORD *)ObjectList + 6);
  v75 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v74 >= 1 )
  {
    for ( i = 0; i != v74; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v75,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_39;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)Item, 0LL);
      }
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
  __int64 v6; // x2
  CompleteMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B14F36 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B14F36 = 1;
  }
  result = (CompleteMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CompleteMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CompleteMissionListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
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


void __fastcall CompleteMissionListViewManager__ModifyItem(
        CompleteMissionListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  __int64 v27; // x1
  Il2CppObject *Entity; // x20
  void *monitor; // x8
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *v32; // x8
  DataManager_o *v33; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  MissionListViewItem_o *current; // x22
  __int64 methodPtr_low; // x10
  __int64 MissionId; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct EventMissionEntity_o *v41; // x8
  int32_t v42; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v44; // x1
  struct ListViewObject_o *v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B14F45 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B14F45 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_41;
  if ( (__int64)Instance <= (__int64)Entity[4].klass )
  {
    this->fields.isEndEvent = 0;
    return;
  }
  monitor = Entity[4].monitor;
  this->fields.isEndEvent = (__int64)Instance <= (__int64)monitor;
  if ( (__int64)Instance <= (__int64)monitor && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v32 = this->fields.missionToRecieve;
      if ( v32 )
      {
        if ( MasterData_object )
        {
          Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        (UserEventMissionMaster_o *)MasterData_object,
                                        (int64_t)Instance,
                                        v32->fields.id,
                                        0LL);
          if ( this->fields.itemList )
          {
            v33 = Instance;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v46,
              (System_Collections_Generic_List_object__o *)this->fields.itemList,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v47 = v46;
            while ( 1 )
            {
              v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v47,
                      (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v34 )
                break;
              current = (MissionListViewItem_o *)v47.fields._current;
              if ( !v47.fields._current
                || (methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v47.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                || (CompleteMissionListViewItem_c *)v47.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_1BCAA3C(v34, v35);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v47.fields._current, 0LL);
              v41 = this->fields.missionToRecieve;
              if ( !v41 )
                sub_1BCAA3C(MissionId, v39);
              v42 = MissionId;
              if ( (_DWORD)MissionId == v41->fields.id )
              {
                if ( !byte_4B12FAA )
                {
                  MissionId = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v39, v40);
                  byte_4B12FAA = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v42;
                if ( !v33 )
                  sub_1BCAA3C(MissionId, v39);
                MissionListViewItem__ModifyItem(current, *(_DWORD *)&v33->fields._DispLog == 5, 0LL);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v45 = current->fields.viewObject;
                if ( !v45 )
                  sub_1BCAA3C(0LL, v44);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v45->klass->vtable._5_SetItem.method)(
                  v45,
                  current,
                  v45->klass->vtable._6_SetItem.methodPtr);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, Il2CppMethodPointer))current->klass->vtable._6_CheckMissionCond.method)(
                  current,
                  current->klass->vtable._7_SetGiftData.methodPtr);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v47,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1BCAA3C(Instance, v25);
  }
}


void __fastcall CompleteMissionListViewManager__OnChangeAlphaAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  int size; // w21
  int32_t v9; // w20

  if ( (byte_4B14F4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v4, v5);
    byte_4B14F4D = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, v7);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v7);
      if ( size == ++v9 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v7);
  }
}


void __fastcall CompleteMissionListViewManager__OnClickFilterList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  __int64 filterStatus; // x8

  if ( (byte_4B14F39 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CompleteMissionListViewManager_OnClickFilterList__, method, v2);
    byte_4B14F39 = 1;
  }
  v4 = Method_CompleteMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CompleteMissionListViewManager_OnClickFilterList__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_C0B604[filterStatus];
  CompleteMissionListViewManager__setList(this, v6);
}


void __fastcall CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 methodPtr_low; // x10
  PlayMakerFSM_o *v12; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v14; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  if ( (byte_4B14F37 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CompleteMissionListViewManager_OnClickListView__, obj, method);
    sub_1BCA7E0(&CompleteMissionListViewObject_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_15733/*"Wait_Action"*/, v7, v8);
    byte_4B14F37 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_20;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15733/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (methodPtr_low = LOBYTE(CompleteMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem(
                                        (CompleteMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(targetFSM, obj);
  }
  v12 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)(*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
                                                       targetFSM,
                                                       targetFSM->klass[1]._1.this_arg.data);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v12,
                                                             v14),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v12[4].fields.fsm) )
  {
    if ( v12[4].fields.m_CachedPtr == 3
      && (LODWORD(v12[2].fields.addEventHandlers) != 1
       || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v14)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v12, 0LL);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v16);
    }
    else
    {
      v17 = Method_CompleteMissionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1BCA7F8(Method_CompleteMissionListViewManager_OnClickListView__);
      v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v12, 0, 0LL);
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
  bool v9; // w23
  __int64 v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B14F3F & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo, rewards, rewardDetail);
    byte_4B14F3F = 1;
  }
  v9 = isCompleteMission;
  v10 = sub_1BCAA2C(
          CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo,
          rewards,
          rewardDetail,
          isCompleteMission);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 48) = rewards;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)rewards, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v10 + 56) = rewardDetail;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 56), (int64_t)rewardDetail, v23, v24, v25, v26, v27, v28);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void __fastcall CompleteMissionListViewManager__RefrashListDisp(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_4B14F38 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__, v14, v15);
    byte_4B14F38 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
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
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CompleteMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == CompleteMissionListViewItem_TypeInfo )
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
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
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


void __fastcall CompleteMissionListViewManager__SetOpenItem(
        CompleteMissionListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v26; // x1
  struct CompleteMissionListViewItem_o *v27; // x21
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v37; // x2
  float openItemTime; // s8
  System_Action_o *v39; // x20
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B14F46 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager_modifyOpenItem__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__, v14, v15);
    sub_1BCA7E0(&StringLiteral_19037/*"ef_mission_extric01"*/, v16, v17);
    byte_4B14F46 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1BCAA3C(0LL, v19);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        ObjectList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v41 = v40;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v22 )
          break;
        current = v41.fields._current;
        if ( !v41.fields._current )
          sub_1BCAA3C(v22, v23);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v41.fields._current,
                                          v23);
        v27 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1BCAA3C(0LL, v26);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4B12FAA )
          {
            sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v28, v29);
            byte_4B12FAA = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v27;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.openTargetItem,
            (int64_t)v27,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v27, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_19037/*"ef_mission_extric01"*/, transform, v37);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0LL);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v39, 0LL);
  }
}


void __fastcall CompleteMissionListViewManager__SetResultData(
        CompleteMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.getSvtList,
    (int64_t)svts,
    (int64_t)cmds,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.getCommandCodeList,
    (int64_t)cmds,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1BCAA3C(v16, v17);
  id = missionToRecieve->fields.id;
  if ( !byte_4B12FAA )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v17, v18);
    byte_4B12FAA = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_4B14F4A & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo, method, v2);
    byte_4B14F4A = 1;
  }
  v5 = sub_1BCAA2C(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float endEffectTime; // s8
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B14F50 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager_actionAfterCallback__, v4, v5);
    byte_4B14F50 = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v10, 0LL);
}


void __fastcall CompleteMissionListViewManager__actionAfterCallback(
        CompleteMissionListViewManager_o *this,
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


void __fastcall CompleteMissionListViewManager__afterReward(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  AutomatedAction_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B14F40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_5550/*"END_EFFECT"*/, v4, v5);
    byte_4B14F40 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5550/*"END_EFFECT"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CompleteMissionListViewManager_o *v3; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w20
  void *monitor; // x8

  v3 = this;
  if ( (byte_4B14F49 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1BCA7E0(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 method,
                                                 v2);
    byte_4B14F49 = 1;
  }
  missionToRecieve = v3->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (monitor = this[2].monitor) == 0LL
    || (this = (CompleteMissionListViewManager_o *)*((_QWORD *)monitor + 4)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     dispNo - 2,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     v3->fields.distanceToTexObj,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (CompleteMissionListViewManager_o *)v3->fields.touchBlockObj) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CompleteMissionListViewManager__checkAcceptable(
        CompleteMissionListViewManager_o *this,
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
  __int64 v28; // x1
  __int64 v29; // x2
  int64_t Instance; // x0
  __int64 v31; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v33; // x8
  int64_t v34; // x20
  int64_t v35; // x21
  __int64 v36; // x1
  Il2CppObject *MasterData_object; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  int64_t v39; // x2
  __int64 v40; // x3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  BalanceConfig_c *v45; // x0
  __int64 *v46; // x8
  CompleteMissionListViewManager___c_c *v47; // x0
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v49; // x21
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  if ( (byte_4B14F3C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__, v22, v23);
    sub_1BCA7E0(&CompleteMissionListViewManager___c_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_12292/*"SHOW_MSG"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_11255/*"REWARD_ACCEPTABLE"*/, v28, v29);
    byte_4B14F3C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_36;
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v33 = this->fields.missionToRecieve;
  if ( !v33 )
    goto LABEL_36;
  if ( v33->fields.rewardType == 1 )
  {
    v34 = Instance;
    if ( !Instance )
      goto LABEL_36;
    if ( Gift__IsServant_38401528(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_DWORD *)(v34 + 24),
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v35 = Instance;
            if ( !SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
              && !SvtType__IsStatusUp(*(_DWORD *)(v35 + 84), 0LL) )
            {
              goto LABEL_25;
            }
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
              Instance = NetworkManager__get_UserId(0LL);
              if ( MasterData_object )
              {
                VaildList = UserPresentBoxMaster__getVaildList(
                              (UserPresentBoxMaster_o *)MasterData_object,
                              Instance,
                              0LL);
                Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          *(_DWORD *)(v34 + 24),
                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v45 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31);
                        v45 = BalanceConfig_TypeInfo;
                      }
                      if ( v45->static_fields->PresentBoxMax > (signed int)VaildList->max_length )
                        goto LABEL_25;
                      v47 = CompleteMissionListViewManager___c_TypeInfo;
                      if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo, v31);
                        v47 = CompleteMissionListViewManager___c_TypeInfo;
                      }
                      _9__46_0 = v47->static_fields->__9__46_0;
                      if ( !_9__46_0 )
                      {
                        if ( !v47->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v47, v31);
                          v47 = CompleteMissionListViewManager___c_TypeInfo;
                        }
                        v49 = (Il2CppObject *)v47->static_fields->__9;
                        _9__46_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v39, v40);
                        System_Action___ctor(
                          _9__46_0,
                          v49,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0LL);
                        static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        static_fields->__9__46_0 = _9__46_0;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&static_fields->__9__46_0,
                          (int64_t)_9__46_0,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55,
                          v56);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&this->fields.ShowMSG,
                        (int64_t)_9__46_0,
                        v39,
                        v40,
                        v41,
                        v42,
                        v43,
                        v44);
                      Instance = (int64_t)this->fields.targetFSM;
                      if ( Instance )
                      {
                        v46 = &StringLiteral_12292/*"SHOW_MSG"*/;
                        goto LABEL_27;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_36:
      sub_1BCAA3C(Instance, v31);
    }
  }
LABEL_25:
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_36;
  v46 = &StringLiteral_11255/*"REWARD_ACCEPTABLE"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v46, 0LL);
}


bool __fastcall CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v14; // x19

  if ( (byte_4B14F4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B14F4C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v13 = *(_QWORD *)&Instance[8].fields.writeMasterDataThreadEnd) == 0
    || (v14 = *(System_Collections_Generic_List_EventMissionEntity__o **)(v13 + 128),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v14, 0LL),
        !v14)
    || !Instance )
  {
    sub_1BCAA3C(Instance, v12);
  }
  return v14->fields._size - 1 == LODWORD(Instance->fields.m_CancellationTokenSource);
}


void __fastcall CompleteMissionListViewManager__endloadEffect(
        CompleteMissionListViewManager_o *this,
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
  struct EventMissionEntity_o *v16; // x8

  if ( (byte_4B14F43 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewManager_TypeInfo, data, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10, v11);
    byte_4B14F43 = 1;
  }
  if ( data )
  {
    CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)CompleteMissionListViewManager_TypeInfo->static_fields,
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v16 = this->fields.missionToRecieve;
    if ( !v16 || !Instance )
LABEL_13:
      sub_1BCAA3C(Instance, v13);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v16->fields.id, 5, 0, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall CompleteMissionListViewManager__getEffect(
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

  if ( (byte_4B14F44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, parentTr, method);
    sub_1BCA7E0(&CompleteMissionListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B14F44 = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
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


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_4B14F32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B14F32 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                 (CompleteMissionListViewObject_o *)Component_object,
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
          v42 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
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
        v42 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
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
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v21;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14F31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___, method, v2);
    byte_4B14F31 = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_2F927DC *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void __fastcall CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
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

  if ( (byte_4B14F42 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager_endloadEffect__, v5, v6);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5956/*"Effect/EventMission"*/, v9, v10);
    byte_4B14F42 = 1;
  }
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5956/*"Effect/EventMission"*/, v11, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__modifyOpenItem(
        CompleteMissionListViewManager_o *this,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v25; // x1
  void *v26; // x0
  System_Action_o *v27; // x20
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B14F47 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B14F47 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1BCAA3C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v29 = v28;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v20 )
        break;
      current = v29.fields._current;
      if ( !v29.fields._current
        || (methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v29.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (CompleteMissionListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_1BCAA3C(v20, v21);
      }
      monitor = (UnityEngine_Object_o *)v29.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v26 = current[6].monitor;
        if ( !v26 )
          sub_1BCAA3C(0LL, v25);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v26 + 392LL))(
          v26,
          current,
          *(_QWORD *)(*(_QWORD *)v26 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v19; // w22
  int32_t v20; // w21
  __int64 methodPtr_low; // x10
  bool v22; // w0
  _QWORD *v23; // x8
  bool v24; // w19
  System_Reflection_MethodBase_o *v25; // x0
  int32_t v26; // w1

  if ( (byte_4B14F35 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, *(_QWORD *)&missionID, callback);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    byte_4B14F35 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.actionCallback,
      (int64_t)callback,
      (int64_t)callback,
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
  v19 = size - 1;
  if ( size >= 1 )
  {
    v20 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v20,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0LL);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v19 == v20 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v20;
    }
    while ( itemList );
LABEL_15:
    sub_1BCAA3C(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v20 = 0;
LABEL_17:
  v22 = ListViewManager__MoveTopItem((ListViewManager_o *)this, v20, 1, 0LL);
  v23 = Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__;
  v24 = v22;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BCA7F8(Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
  v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
  if ( v24 )
    v26 = 0;
  else
    v26 = 2;
  OverwriteAssetSoundName__PlaySystemSe(v25, v26, 0LL);
}


void __fastcall CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  __int64 v36; // x1
  System_String_o *v37; // x19
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x19
  __int64 v41; // x2
  __int64 v42; // x3
  CommonUI_o *v43; // x20
  CompleteMissionListViewManager___c_c *v44; // x8
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v46; // x22
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *countText; // [xsp+30h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4B14F4B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, v18, v19);
    sub_1BCA7E0(&CompleteMissionListViewManager___c_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_25371/*"{0}×{1}"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_16135/*"[^0-9]"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_3810/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v30, v31);
    byte_4B14F4B = 1;
  }
  countText = (System_String_o *)StringLiteral_1/*""*/;
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Entity )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)touchBlockObj,
                                                HIDWORD(Entity[1].monitor),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_31;
  klass = touchBlockObj[1].klass;
  if ( !klass )
    return;
  if ( !(_DWORD)klass )
    sub_1BCAA44(touchBlockObj, method);
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_31;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0LL);
  if ( System_String__IsNullOrEmpty(nameText, 0LL) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0LL) )
  {
    v37 = countText;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, v36);
    v38 = System_Text_RegularExpressions_Regex__Replace(
            v37,
            (System_String_o *)StringLiteral_16135/*"[^0-9]"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v38, (System_String_o *)StringLiteral_1262/*"1"*/, 0LL) )
      nameText = System_String__Format_62415592(
                   (System_String_o *)StringLiteral_25371/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0LL);
  v40 = System_String__Format(v39, (Il2CppObject *)nameText, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = (CommonUI_o *)touchBlockObj;
  v44 = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo, method);
    v44 = CompleteMissionListViewManager___c_TypeInfo;
  }
  _9__65_0 = v44->static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44, method);
      v44 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v41, v42);
    System_Action___ctor(_9__65_0, v46, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = _9__65_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__65_0,
      (int64_t)_9__65_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v43 )
LABEL_31:
    sub_1BCAA3C(touchBlockObj, method);
  CommonUI__OpenNotificationDialog(v43, 0LL, v40, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
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
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  EventMissionEntity_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3

  if ( (byte_4B14F3B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, missionEntity, method);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager_recieveReward__, v6, v7);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__, v8, v9);
    sub_1BCA7E0(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo, v10, v11);
    byte_4B14F3B = 1;
  }
  v12 = sub_1BCAA2C(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo, missionEntity, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = missionEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)missionEntity, v21, v22, v23, v24, v25, v26);
  v27 = Method_CompleteMissionListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_recieveReward__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_1BCA7F8(Method_CompleteMissionListViewManager_recieveReward__);
  v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 8, 0LL);
  v29 = *(EventMissionEntity_o **)(v12 + 24);
  v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v12,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0LL);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v29, v33, v34);
}


void __fastcall CompleteMissionListViewManager__setAfterAction(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4B14F41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method, v2);
    byte_4B14F41 = 1;
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
    sub_1BCAA3C(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall CompleteMissionListViewManager__setList(
        CompleteMissionListViewManager_o *this,
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
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v20; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  UILabel_o *v34; // x21
  struct ListViewSort_o *v35; // x8
  int v36; // w9
  bool v37; // w2
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t filterStatus; // w19

  if ( (byte_4B14F3A & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17746/*"btn_txt_completed"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17779/*"btn_txt_receipt"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17778/*"btn_txt_progress"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17728/*"btn_txt_all"*/, v17, v18);
    byte_4B14F3A = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v20 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, method, v2, v3);
  ListViewSort___ctor_41481440(v20, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.operationSortInfo, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_42:
    sub_1BCAA3C(operationSortInfo, v31);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17728/*"btn_txt_all"*/, v32);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0LL);
      v34 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v34 )
        goto LABEL_42;
      UILabel__set_text(v34, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17779/*"btn_txt_receipt"*/, v32);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
      v35 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v36 = 1;
      goto LABEL_37;
    case 2:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17778/*"btn_txt_progress"*/, v32);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v37 = 0;
      goto LABEL_33;
    case 3:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17746/*"btn_txt_completed"*/, v32);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v37 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v37, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_35:
      v35 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v36 = 13;
LABEL_37:
      v35->fields.sortKind = v36;
LABEL_38:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4B14F96 )
      {
        sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v38, v39);
        byte_4B14F96 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = filterStatus;
      EventRewardSaveData__SaveCompleteMissionData(0LL);
      return;
    default:
      goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__setNextMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v21; // w22
  int32_t v22; // w21
  __int64 methodPtr_low; // x10
  System_Action_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B14F34 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&missionID, callback);
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    byte_4B14F34 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.actionCallback,
      (int64_t)callback,
      (int64_t)callback,
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
  v21 = size - 1;
  if ( size >= 1 )
  {
    v22 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v22,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0LL);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v21 == v22 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v22;
    }
    while ( itemList );
LABEL_15:
    sub_1BCAA3C(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v22 = 0;
LABEL_17:
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&missionID, callback, method);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0LL);
  this->fields.callbackAfterScroll = v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackAfterScroll,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v22, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setOpenPanel(
        CompleteMissionListViewManager_o *this,
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
  __int64 v27; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v37; // x8
  Il2CppObject *Entity; // x21
  void *monitor; // x8
  Il2CppObject *Component_object; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  void *v47; // x8
  Il2CppObject *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  void *v55; // x8
  Il2CppObject *v56; // x22
  void *v57; // x8
  UISprite_o *v58; // x20
  Il2CppObject *v59; // x20
  Il2CppObject *v60; // x0
  System_String_o *v61; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  AssetLoader_LoadEndDataHandler_o *v65; // x21
  __int64 v66; // x1
  int v67; // [xsp+8h] [xbp-48h] BYREF
  int klass_high; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B14F48 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__, v21, v22);
    sub_1BCA7E0(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_4728/*"CompleteMission/{0}/{1}"*/, v25, v26);
    byte_4B14F48 = 1;
  }
  v27 = sub_1BCAA2C(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_42;
  *(_QWORD *)(v27 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 40), (int64_t)this, v30, v31, v32, v33, v34, v35);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0LL);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_42;
  *(_DWORD *)(v27 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v37 = this->fields.missionToRecieve;
  if ( !v37 )
    goto LABEL_42;
  if ( !touchBlockObj )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             v37->fields.missionTargetId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  monitor = touchBlockObj[56].monitor;
  if ( !monitor )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v27 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTexObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)touchBlockObj,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v27 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)Component_object, v41, v42, v43, v44, v45, v46);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v47 = touchBlockObj[56].monitor;
  if ( !v47 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v47 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v27 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToAdjustObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToRowlingPanelObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTextureObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  v48 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v27 + 32) = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v48, v49, v50, v51, v52, v53, v54);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v55 = touchBlockObj[56].monitor;
  if ( !v55 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v55 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v27 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToNumObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  v56 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v57 = touchBlockObj[56].monitor;
  if ( !v57 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v57 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v27 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
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
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)touchBlockObj,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v56)
    || (v58 = (UISprite_o *)touchBlockObj) == 0LL
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v56[29].klass, 0LL),
        UISprite__set_spriteName(v58, (System_String_o *)v56[29].monitor, 0LL),
        !Entity) )
  {
LABEL_42:
    sub_1BCAA3C(touchBlockObj, v29);
  }
  klass_high = HIDWORD(Entity[1].klass);
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high);
  v67 = *(_DWORD *)(v27 + 24);
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  v61 = System_String__Format_62415592((System_String_o *)StringLiteral_4728/*"CompleteMission/{0}/{1}"*/, v59, v60, 0LL);
  v65 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v62, v63, v64);
  AssetLoader_LoadEndDataHandler___ctor(
    v65,
    (Il2CppObject *)v27,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v66);
  AssetManager__loadAssetStorage(v61, v65, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall CompleteMissionListViewManager__unAcceptableDlg(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CompleteMissionListViewManager_o *v3; // x19
  struct System_Action_o *ShowMSG; // x8

  v3 = this;
  if ( (byte_4B14F3D & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1BCA7E0(&StringLiteral_5555/*"END_NOTICE"*/, method, v2);
    byte_4B14F3D = 1;
  }
  ShowMSG = v3->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (CompleteMissionListViewManager_o *)v3->fields.targetFSM) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5555/*"END_NOTICE"*/, 0LL);
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
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  void *_8__1; // x0
  struct CompleteMissionListViewManager_o *v29; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v30; // x8
  _BOOL4 isCompleteMission; // w9
  __int64 v32; // x8
  Il2CppObject *Component_object; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v57; // x23
  CommonUI_o *v58; // x19
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  MissionRewardGetDialog_ClickDelegate_o *v62; // x22

  if ( (byte_4B14F5D & 1) == 0 )
  {
    sub_1BCA7E0(&MissionRewardGetDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(
      &Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      v9,
      v10);
    sub_1BCA7E0(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo, v11, v12);
    byte_4B14F5D = 1;
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
    v15 = (Il2CppObject *)sub_1BCAA2C(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v15, 0LL);
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__8__1, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_25;
    v29 = this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v29;
    sub_1BCA784((PartyOrganizationUtility_o *)((char *)_8__1 + 16), (int64_t)v29, v22, v23, v24, v25, v26, v27);
    v30 = this->fields.__8__1;
    if ( !v30 )
      goto LABEL_25;
    isCompleteMission = this->fields.isCompleteMission;
    v30->fields.isCompleteMission = isCompleteMission;
    if ( !isCompleteMission )
      goto LABEL_22;
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0LL);
    _8__1 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_25;
    v32 = *((_QWORD *)_8__1 + 169);
    if ( !v32 )
      goto LABEL_25;
    _8__1 = *(void **)(v32 + 32);
    if ( !_8__1 )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_8__1,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._anim_5__2,
      (int64_t)Component_object,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)_8__1, 0LL);
LABEL_16:
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    _8__1 = (void *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)_8__1, 0LL);
    if ( ((unsigned __int8)_8__1 & 1) != 0 )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v40, v41, v42, v43, v44, v45);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0LL);
    this->fields._anim_5__2 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._anim_5__2, 0LL, v48, v49, v50, v51, v52, v53);
LABEL_22:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v57 = (Il2CppObject *)this->fields.__8__1;
    v58 = (CommonUI_o *)Instance;
    v62 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                      MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                      v59,
                                                      v60,
                                                      v61);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v62,
      v57,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0LL);
    if ( v58 )
    {
      CommonUI__OpenMissionRewardGetDialog(v58, rewards, rewardDetail, v62, 0, 0LL);
      return 0;
    }
LABEL_25:
    sub_1BCAA3C(_8__1, method);
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
         &Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  CompleteMissionListViewManager_o *_4__this; // x20
  UnityEngine_Component_o *Instance; // x0
  _QWORD *monitor; // x8
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4B14F5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B14F5E = 1;
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    monitor = Instance[56].monitor;
    if ( !monitor )
      goto LABEL_17;
    Instance = (UnityEngine_Component_o *)monitor[4];
    if ( !Instance )
      goto LABEL_17;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         Instance,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._anim_5__2,
      (int64_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( !Instance )
      goto LABEL_17;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)Instance, 0LL);
LABEL_11:
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)UnityEngine_Animation__get_isPlaying(
                                              (UnityEngine_Animation_o *)Instance,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v17, v18, v19, v20, v21, v22);
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
    sub_1BCAA3C(Instance, method);
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
         &Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14F51 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewManager___c_TypeInfo, v1, v2);
    byte_4B14F51 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CompleteMissionListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CompleteMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct CompleteMissionListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B14F54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B14F54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v6);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
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
  CompleteMissionListViewManager___c_c *v21; // x8
  System_String_o *v22; // x20
  System_String_o *v23; // x21
  System_Action_o *_9__46_1; // x22
  Il2CppObject *v25; // x23
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B14F52 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, v7, v8);
    sub_1BCA7E0(&CompleteMissionListViewManager___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_8769/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B14F52 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8769/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v21 = CompleteMissionListViewManager___c_TypeInfo;
  v22 = v17;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo, v18);
    v21 = CompleteMissionListViewManager___c_TypeInfo;
  }
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  _9__46_1 = v21->static_fields->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, v18);
      v21 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v21->static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    System_Action___ctor(_9__46_1, v25, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__46_1 = _9__46_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__46_1,
      (int64_t)_9__46_1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !Instance )
    sub_1BCAA3C(v17, v18);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v23, v22, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B14F53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B14F53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CompleteMissionListViewManager___c__DisplayClass45_0_o *v8; // x19
  struct CompleteMissionListViewManager_o *_4__this; // x8
  int64_t missionEntity; // x1
  struct CompleteMissionListViewManager_o *v11; // x8

  v8 = this;
  if ( (byte_4B14F55 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_1BCA7E0(&StringLiteral_8765/*"MISSIONN_REWARD"*/, method, v2);
    byte_4B14F55 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (missionEntity = (int64_t)v8->fields.missionEntity,
        _4__this->fields.missionToRecieve = (struct EventMissionEntity_o *)missionEntity,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.missionToRecieve,
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
    sub_1BCAA3C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8765/*"MISSIONN_REWARD"*/, 0LL);
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
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B14F57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B14F57 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v5);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B14F56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B14F56 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v5);
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
  __int64 v2; // x2
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v3; // x19
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
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v28; // x8
  __int64 v29; // x2
  __int64 v30; // x3
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v32; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v33; // x8
  System_String_o *v34; // x21
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v35; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v36; // x8
  __int64 v37; // x1
  System_String_o *v38; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v39; // x8
  System_String_o *v40; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v41; // x8
  System_String_o *v42; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v43; // x8
  __int64 v44; // x1
  System_String_o *v45; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v46; // x8
  struct CompleteMissionListViewManager_o *v47; // x8
  __int64 v48; // x1
  __int64 v49; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v50; // x8
  struct CompleteMissionListViewManager_o *v51; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v52; // x21
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  System_String_o *v55; // x21
  long double inited; // q0
  _QWORD *v57; // x22
  __int64 v58; // x8
  __int64 v59; // x0
  __int64 v60; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v61; // x8
  struct CompleteMissionListViewManager_o *v62; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v63; // x21
  Il2CppObject *NumberFormat; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v65; // x8
  CompleteMissionListViewManager_o *v66; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v67; // x22
  const MethodInfo *v68; // x4
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v69; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v3 = this;
  if ( (byte_4B14F58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_object___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_8811/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_50/*"\n \n"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_51/*"\n \n "*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_8812/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/, v22, v23);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1BCA7E0(&StringLiteral_8774/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v24, v25);
    byte_4B14F58 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v28 = v3->fields.CS___8__locals1;
  if ( !v28 )
    goto LABEL_73;
  ActionExtensions__Call(v28->fields.callback, 0LL);
  giftList = v3->fields.giftList;
  if ( !giftList )
    goto LABEL_73;
  if ( giftList->fields._size < 1 )
  {
    v35 = v3->fields.CS___8__locals1;
    if ( v35 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v35->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, method);
        v36 = v3->fields.CS___8__locals1;
        if ( v36 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v36->fields.__4__this;
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
  v32 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v29, v30);
  System_Text_StringBuilder___ctor(v32, 0LL);
  v33 = v3->fields.CS___8__locals1;
  if ( !v33 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v33->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v34 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v34, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v3->fields.giftTypeItemNum >= 2 )
    {
      if ( !v34 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_62420224(
                                                                         v34,
                                                                         0,
                                                                         v34->fields._stringLength - 2,
                                                                         0LL);
      if ( !v32 )
        goto LABEL_73;
      System_Text_StringBuilder__Append_61563116(v32, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_61563116(
                                                                         v32,
                                                                         v38,
                                                                         0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0LL);
      if ( !v32 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v32,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v34,
                                                                         0LL);
    }
    v39 = v3->fields.CS___8__locals1;
    if ( !v39 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v39->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    v40 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v40, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_61563116(
                                                                         v32,
                                                                         (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                         0LL);
  }
  v41 = v3->fields.CS___8__locals1;
  if ( !v41 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v41->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v42 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v42, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v43 = v3->fields.CS___8__locals1;
    if ( !v43 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v43->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                       this,
                                                                       this->klass[1]._1.image);
    if ( !v32 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_61563116(v32, (System_String_o *)this, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_8774/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_61563116(
                                                                       v32,
                                                                       v45,
                                                                       0LL);
  }
  v46 = v3->fields.CS___8__locals1;
  if ( !v46 )
    goto LABEL_73;
  v47 = v46->fields.__4__this;
  if ( !v47 )
    goto LABEL_73;
  if ( v47->fields.isQpMaxAlert )
  {
    if ( v47->fields.isQpAlreadyMax )
    {
      if ( v32 )
      {
        if ( v3->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_61563116(v32, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
        else
          System_Text_StringBuilder__set_Length(v32, 0, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8811/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0LL);
        v61 = v3->fields.CS___8__locals1;
        if ( v61 )
        {
          v62 = v61->fields.__4__this;
          if ( v62 )
          {
            v63 = this;
            NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v62->fields.overQpValue, 0LL);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v32,
                                                                               (System_String_o *)v63,
                                                                               NumberFormat,
                                                                               0LL);
            goto LABEL_67;
          }
        }
      }
LABEL_73:
      sub_1BCAA3C(this, method);
    }
    if ( !v32 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_61563116(v32, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8812/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0LL);
    v50 = v3->fields.CS___8__locals1;
    if ( !v50 )
      goto LABEL_73;
    v51 = v50->fields.__4__this;
    if ( !v51 )
      goto LABEL_73;
    v52 = this;
    v53 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v51->fields.overQpValue, 0LL);
    v55 = System_String__Format((System_String_o *)v52, v53, 0LL);
    v57 = Method_System_Array_Empty_object___;
    v58 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v58 )
    {
      sub_1C1C718(Method_System_Array_Empty_object___, v54);
      v58 = v57[7];
    }
    v59 = *(_QWORD *)(v58 + 16);
    if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
      v59 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v59 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v59, v54);
    v60 = *(_QWORD *)(v57[7] + 16LL);
    if ( (*(_BYTE *)(v60 + 309) & 1) == 0 )
      v60 = sub_1C1C6BC(inited);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_61569656(
                                                                       v32,
                                                                       v55,
                                                                       **(System_Object_array ***)(v60 + 184),
                                                                       0LL);
  }
LABEL_67:
  v65 = v3->fields.CS___8__locals1;
  if ( !v65 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v3->fields.giftList;
  if ( !this )
    goto LABEL_73;
  v66 = v65->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v32 )
    goto LABEL_73;
  v67 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v32->klass->vtable._3_ToString.method)(
                                                                     v32,
                                                                     v32->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v69 = v3->fields.CS___8__locals1;
  if ( !v69 || !v66 )
    goto LABEL_73;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v66,
             (GiftEntity_array *)v67,
             (System_String_o *)this,
             v69->fields.isCompleteMission,
             v68);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v66, Dialog, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4B14F59 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1BCA7E0(
                                                                       &Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
                                                                       v5,
                                                                       v6);
    byte_4B14F59 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v4->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v4,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0LL);
    v4->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__3, (int64_t)_9__3, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
LABEL_8:
    sub_1BCAA3C(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
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
  SummonAssetManager_o *Instance; // x0
  __int64 v15; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v18; // x8
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v22; // x21
  System_String_o *v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v26; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v28; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B14F5A & 1) == 0 )
  {
    sub_1BCA7E0(&MissionRewardGetDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__, v10, v11);
    sub_1BCA7E0(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v12, v13);
    byte_4B14F5A = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  v18 = this->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_15;
  ActionExtensions__Call(v18->fields.callback, 0LL);
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v22 = (CommonUI_o *)v19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v23, (Il2CppObject *)this->fields.sendName, 0LL);
  v26 = this->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_15;
  _9__4 = v26->fields.__9__4;
  v28 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                        v15,
                                                        v24,
                                                        v25);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v26,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0LL);
    v26->fields.__9__4 = _9__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.__9__4, (int64_t)_9__4, v29, v30, v31, v32, v33, v34);
  }
  if ( !v22 )
LABEL_15:
    sub_1BCAA3C(Instance, v15);
  CommonUI__OpenMissionRewardGetDialog_30845908(v22, rwdSetEnt, v28, _9__4, 0LL);
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
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B14F5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B14F5B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseMissionRewardGetDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_8;
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v5);
  if ( this->fields.isCompleteMission )
    return;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(Instance, v5);
  CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)Instance, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  struct UITexture_o *tex; // x21
  Il2CppObject *v18; // x0
  struct UITexture_o *animTex; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  struct CompleteMissionComponent_o *completeMissionComp; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionComponent_o *v24; // x8
  struct CompleteMissionListViewManager_o *v25; // x8
  struct CompleteMissionComponent_o *v26; // x8
  struct CompleteMissionListViewManager_o *v27; // x8
  __int64 v28; // x2
  __int64 v29; // x3
  struct CompleteMissionListViewManager_o *v30; // x19
  float endEffectTime; // s8
  System_Action_o *v32; // x20
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B14F5C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, backPanel, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, v5, v6);
    sub_1BCA7E0(&Method_CompleteMissionListViewManager_animAfterCallback__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v13, v14);
    byte_4B14F5C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_25238/*"{0}"*/, v18, 0LL);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_object__49237568(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
    tex,
    Instance,
    tex->klass->vtable._28_get_shader.methodPtr);
  animTex = this->fields.animTex;
  v33 = this->fields.completeMissionPanelChildIdx;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v21 = System_String__Format((System_String_o *)StringLiteral_25238/*"{0}"*/, v20, 0LL);
  Instance = (CommonUI_o *)AssetData__GetObject_object__49237568(
                             backPanel,
                             v21,
                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))animTex->klass->vtable._27_set_mainTexture.method)(
    animTex,
    Instance,
    animTex->klass->vtable._28_get_shader.methodPtr);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v24 = Instance->fields.completeMissionComp;
  if ( !v24 )
    goto LABEL_30;
  Instance = (CommonUI_o *)v24->fields.completeMissionPanel;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0LL);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v25->fields.distanceToTexObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v26 = Instance->fields.completeMissionComp;
  if ( !v26
    || (Instance = (CommonUI_o *)v26->fields.completeMissionPanel) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0LL),
        (v27 = this->fields.__4__this) == 0LL)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v27->fields.distanceToEfPanelObj,
                                   0LL)) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (v30 = this->fields.__4__this) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(Instance, v16);
  }
  endEffectTime = v30->fields.endEffectTime;
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v28, v29);
  System_Action___ctor(v32, (Il2CppObject *)v30, Method_CompleteMissionListViewManager_animAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v30, endEffectTime, v32, 0LL);
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
  struct System_Action_o *decideCallback; // x8

  decideCallback = this->fields.decideCallback;
  if ( !decideCallback )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))decideCallback->fields.m_target)(
    decideCallback->fields.original_method_info,
    *(_QWORD *)&decideCallback->fields.extra_arg);
}