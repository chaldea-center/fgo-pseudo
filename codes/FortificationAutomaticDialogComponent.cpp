void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A13C & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A13C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
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
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  int64_t v94; // x26
  EventFortificationMaster_o *Master_object; // x0
  __int64 v96; // x1
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  System_Collections_Generic_List_object__o *v106; // x20
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x2
  const MethodInfo *v110; // x3
  int64_t v111; // x24
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x3
  System_Collections_Generic_HashSet_int__o *v121; // x19
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  const MethodInfo *v128; // x3
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v132; // x25
  FortificationAutomaticDialogComponent___c_c *v133; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v135; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v143; // x0
  Il2CppObject *v144; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v145; // x23
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  System_Func_object__int__o *v149; // x25
  __int64 v150; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v151; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  Il2CppObject *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v161; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  FortificationAutomaticDialogComponent_o *v164; // x26
  _BOOL8 v165; // x0
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  int32_t v169; // w23
  int32_t klass_high; // w24
  EnterUserSvtInfo_o *v171; // x22
  __int64 v172; // x0
  __int64 v173; // x1
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  struct System_Object_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  Il2CppClass **v183; // x0
  __int64 v184; // x1
  __int64 v185; // x23
  __int64 v186; // x8
  __int64 v187; // x9
  int *v188; // x10
  __int64 v189; // x0
  __int64 v190; // x1
  __int64 v191; // x2
  __int64 v192; // x3
  __int64 v193; // x27
  __int64 v194; // x0
  __int64 v195; // x1
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  __int64 v202; // x8
  __int64 v203; // x9
  int *v204; // x10
  __int64 v205; // x0
  int64_t v206; // x0
  __int64 *v207; // x26
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  __int64 v214; // x1
  __int64 v215; // x2
  __int64 v216; // x3
  System_Func_object__bool__o *v217; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v218; // x0
  System_Collections_Generic_List_TSource__o *v219; // x0
  __int64 v220; // x1
  __int64 v221; // x2
  __int64 v222; // x3
  FortificationAutomaticDialogComponent___c_c *v223; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v224; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v226; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v227; // x0
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v234; // x0
  Il2CppObject *v235; // x0
  __int64 v236; // x1
  Il2CppObject *v237; // x27
  Il2CppClass *v238; // x19
  void *monitor; // x29
  System_Collections_Generic_HashSet_int__o *v240; // x28
  __int64 v241; // x0
  _BOOL8 v242; // x0
  __int64 v243; // x1
  __int64 v244; // x8
  Il2CppObject v245; // q0
  Il2CppObject v246; // q1
  int32_t v247; // w27
  int32_t v248; // w28
  int64_t v249; // x29
  __int64 v250; // x1
  __int64 v251; // x2
  __int64 v252; // x3
  EnterUserSvtInfo_o *v253; // x26
  __int64 v254; // x0
  __int64 v255; // x1
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  struct System_Object_array *items; // x8
  _QWORD *v263; // x9
  __int64 size; // x10
  Il2CppClass **v265; // x0
  __int64 v266; // x8
  __int64 v267; // x9
  int *v268; // x10
  __int64 v269; // x0
  _QWORD *v270; // x0
  System_Reflection_MethodBase_o *v271; // x0
  __int64 v272; // x1
  __int64 v273; // x2
  __int64 v274; // x3
  NetworkManager_ResultCallbackFunc_o *v275; // x22
  __int64 v276; // x1
  int32_t eventId; // w19
  EventFortificationRequest_o *v278; // x21
  const MethodInfo *v279; // x3
  FortificationAutomaticDialogComponent_o *v280; // [xsp+8h] [xbp-D8h]
  Il2CppObject *object; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v283; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v284; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v285; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v287; // 0:x0.16

  if ( (byte_4B1A137 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&EnterUserSvtInfo_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v16, v17);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v20,
      v21);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v22, v23);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v24, v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v26,
      v27);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v28,
      v29);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v30,
      v31);
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent_AutoSet__, v32, v33);
    sub_1BCA7E0(&System_Func_UserServantEntity__bool__TypeInfo, v34, v35);
    sub_1BCA7E0(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v36, v37);
    sub_1BCA7E0(&System_Func_UserServantEntity__int__TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Clear__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v44, v45);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v46, v47);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v48, v49);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
      v50,
      v51);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
      v52,
      v53);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v56, v57);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v58,
      v59);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v60, v61);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v62, v63);
    sub_1BCA7E0(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v64, v65);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventFortificationRequest___, v66, v67);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v68, v69);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v70, v71);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v72, v73);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v74, v75);
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v76, v77);
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v78, v79);
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v80, v81);
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v82, v83);
    sub_1BCA7E0(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v84, v85);
    sub_1BCA7E0(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v86, v87);
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v88, v89);
    sub_1BCA7E0(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v90, v91);
    sub_1BCA7E0(&FortificationAutomaticDialogComponent___c_TypeInfo, v92, v93);
    byte_4B1A137 = 1;
  }
  entities = 0LL;
  memset(&v285, 0, sizeof(v285));
  v94 = sub_1BCAA2C(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, isSet, method, v3);
  System_Object___ctor((Il2CppObject *)v94, 0LL);
  if ( !v94 )
    goto LABEL_93;
  *(_QWORD *)(v94 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v94 + 24), (int64_t)this, v97, v98, v99, v100, v101, v102);
  *(_BYTE *)(v94 + 32) = isSet;
  v106 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo,
                                                        v103,
                                                        v104,
                                                        v105);
  System_Collections_Generic_List_object____ctor(
    v106,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v94 + 16) = 0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v107);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0LL) )
    return;
  object = (Il2CppObject *)v94;
  if ( *(_BYTE *)(v94 + 32) )
  {
    v111 = sub_1BCAA2C(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v108, v109, v110);
    System_Object___ctor((Il2CppObject *)v111, 0LL);
    if ( v111 )
    {
      *(_QWORD *)(v111 + 24) = v94;
      sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 24), v94, v112, v113, v114, v115, v116, v117);
      v121 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_HashSet_int__TypeInfo,
                                                            v118,
                                                            v119,
                                                            v120);
      System_Collections_Generic_HashSet_int____ctor(
        v121,
        (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v121;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.setSvtIdList,
        (int64_t)v121,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127);
      v280 = this;
      v132 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v128);
      v133 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo, v129);
        v133 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v133->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v133->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v133, v129);
          v133 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v135 = (Il2CppObject *)v133->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                   System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo,
                                                   v129,
                                                   v130,
                                                   v131);
        System_Func_object__int____ctor(
          _9__18_1,
          v135,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0LL);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__18_1,
          (int64_t)_9__18_1,
          v137,
          v138,
          v139,
          v140,
          v141,
          v142);
      }
      v143 = System_Linq_Enumerable__OrderBy_object__int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v132,
               (System_Func_TSource__TKey__o *)_9__18_1,
               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v144 = *(Il2CppObject **)(v111 + 24);
      v145 = v143;
      v149 = (System_Func_object__int__o *)sub_1BCAA2C(
                                             System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo,
                                             v146,
                                             v147,
                                             v148);
      System_Func_object__int____ctor(
        v149,
        v144,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0LL);
      v151 = System_Linq_Enumerable__ThenByDescending_object__int_(
               v145,
               (System_Func_TSource__TKey__o *)v149,
               (const MethodInfo_2F4B298 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v150);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL);
        v153 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v111 + 16) = v153;
        sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 16), (int64_t)v153, v154, v155, v156, v157, v158, v159);
        if ( v151 )
        {
          klass = v151->klass;
          v161 = *(unsigned __int16 *)(&v151->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v151->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v161;
              p_offset += 4;
              if ( !v161 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_24:
            p_method = sub_1C1C7C0(
                         v151,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v185 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                   v151,
                   *(_QWORD *)(p_method + 8));
          if ( !v185 )
            sub_1BCAA3C(0LL, v184);
          while ( 1 )
          {
            v186 = *(_QWORD *)v185;
            v187 = *(unsigned __int16 *)(*(_QWORD *)v185 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v185 + 302LL) )
            {
              v188 = (int *)(*(_QWORD *)(v186 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v188 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v187;
                v188 += 4;
                if ( !v187 )
                  goto LABEL_41;
              }
              v189 = v186 + 16LL * *v188 + 312;
            }
            else
            {
LABEL_41:
              v189 = sub_1C1C7C0(v185, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v189)(v185, *(_QWORD *)(v189 + 8)) & 1) == 0 )
              break;
            v193 = sub_1BCAA2C(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v190, v191, v192);
            System_Object___ctor((Il2CppObject *)v193, 0LL);
            if ( !v193 )
              sub_1BCAA3C(v194, v195);
            *(_QWORD *)(v193 + 24) = v111;
            sub_1BCA784((PartyOrganizationUtility_o *)(v193 + 24), v111, v196, v197, v198, v199, v200, v201);
            v202 = *(_QWORD *)v185;
            v203 = *(unsigned __int16 *)(*(_QWORD *)v185 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v185 + 302LL) )
            {
              v204 = (int *)(*(_QWORD *)(v202 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v204
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v203;
                v204 += 4;
                if ( !v203 )
                  goto LABEL_49;
              }
              v205 = v202 + 16LL * *v204 + 312;
            }
            else
            {
LABEL_49:
              v205 = sub_1C1C7C0(
                       v185,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL);
            }
            v206 = (*(__int64 (__fastcall **)(__int64, _QWORD))v205)(v185, *(_QWORD *)(v205 + 8));
            *(_QWORD *)(v193 + 16) = v206;
            v207 = (__int64 *)(v193 + 16);
            sub_1BCA784((PartyOrganizationUtility_o *)(v193 + 16), v206, v208, v209, v210, v211, v212, v213);
            v217 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_UserServantEntity__bool__TypeInfo,
                                                    v214,
                                                    v215,
                                                    v216);
            System_Func_object__bool____ctor(
              v217,
              (Il2CppObject *)v193,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0LL);
            v218 = System_Linq_Enumerable__Where_object_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v217,
                     (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v219 = System_Linq_Enumerable__ToList_object_(
                     v218,
                     (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v223 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v224 = (System_Collections_Generic_IEnumerable_TSource__o *)v219;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo, v220);
              v223 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v223->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v223->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v223, v220);
                v223 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v226 = (Il2CppObject *)v223->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                         System_Func_UserServantEntity__int__TypeInfo,
                                                         v220,
                                                         v221,
                                                         v222);
              System_Func_object__int____ctor(
                _9__18_4,
                v226,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0LL);
              v227 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v227->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v227->__9__18_4,
                (int64_t)_9__18_4,
                v228,
                v229,
                v230,
                v231,
                v232,
                v233);
            }
            v234 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                          v224,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v235 = System_Linq_Enumerable__FirstOrDefault_object_(
                     v234,
                     (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v237 = v235;
            if ( v235 )
            {
              v238 = v235[5].klass;
              monitor = v235[5].monitor;
              v240 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v236);
              *(_QWORD *)&v287.fields.currentCryptoKey = v238;
              *(_QWORD *)&v287.fields.fakeValue = monitor;
              v241 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v287, 0LL);
              if ( !v240 )
                sub_1BCAA3C(v241, (unsigned int)v241);
              v242 = System_Collections_Generic_HashSet_int___Add(
                       v240,
                       v241,
                       (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v244 = *v207;
              if ( !*v207 )
                sub_1BCAA3C(v242, v243);
              v245 = v237[1];
              v246 = v237[2];
              v248 = *(_DWORD *)(v244 + 16);
              v247 = *(_DWORD *)(v244 + 20);
              *(Il2CppObject *)&v284.fields.currentCryptoKey = v245;
              *(Il2CppObject *)&v284.fields.fakeValue = v246;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v243);
              v283 = v284;
              v249 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v283, 0LL);
              v253 = (EnterUserSvtInfo_o *)sub_1BCAA2C(EnterUserSvtInfo_TypeInfo, v250, v251, v252);
              EnterUserSvtInfo___ctor(v253, v248, v247, v249, 0LL);
              if ( !v106 )
                sub_1BCAA3C(v254, v255);
              items = v106->fields._items;
              v263 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v106->fields._version;
              if ( !items )
                sub_1BCAA3C(v254, v255);
              size = v106->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v106,
                  (Il2CppObject *)v253,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
              }
              else
              {
                v265 = &items->obj.klass + size;
                v106->fields._size = size + 1;
                v265[4] = (Il2CppClass *)v253;
                sub_1BCA784((PartyOrganizationUtility_o *)(v265 + 4), (int64_t)v253, v256, v257, v258, v259, v260, v261);
              }
            }
          }
          v266 = *(_QWORD *)v185;
          v267 = *(unsigned __int16 *)(*(_QWORD *)v185 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v185 + 302LL) )
          {
            v268 = (int *)(*(_QWORD *)(v266 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v268 - 1) != System_IDisposable_TypeInfo )
            {
              --v267;
              v268 += 4;
              if ( !v267 )
                goto LABEL_73;
            }
            v269 = v266 + 16LL * *v268 + 312;
          }
          else
          {
LABEL_73:
            v269 = sub_1C1C7C0(v185, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v269)(v185, *(_QWORD *)(v269 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_3455238 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            v164 = v280;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1BCAA3C(Master_object, v96);
  }
  v164 = this;
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v110);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v284,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v285.fields._list = *(_OWORD *)&v284.fields.currentCryptoKey;
  v285.fields._current = (Il2CppObject *)v284.fields.fakeValue;
  while ( 1 )
  {
    v165 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v285,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v165 )
      break;
    if ( !v285.fields._current )
      sub_1BCAA3C(v165, v166);
    v169 = (int32_t)v285.fields._current[1].klass;
    klass_high = HIDWORD(v285.fields._current[1].klass);
    v171 = (EnterUserSvtInfo_o *)sub_1BCAA2C(EnterUserSvtInfo_TypeInfo, v166, v167, v168);
    EnterUserSvtInfo___ctor(v171, v169, klass_high, 0LL, 0LL);
    if ( !v106 )
      sub_1BCAA3C(v172, v173);
    v180 = v106->fields._items;
    v181 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v106->fields._version;
    if ( !v180 )
      sub_1BCAA3C(v172, v173);
    v182 = v106->fields._size;
    if ( (unsigned int)v182 >= v180->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v106,
        (Il2CppObject *)v171,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    }
    else
    {
      v183 = &v180->obj.klass + v182;
      v106->fields._size = v182 + 1;
      v183[4] = (Il2CppClass *)v171;
      sub_1BCA784((PartyOrganizationUtility_o *)(v183 + 4), (int64_t)v171, v174, v175, v176, v177, v178, v179);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v285,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v270 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v270 = (_QWORD *)sub_1BCA7F8(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v271 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v270, v270[4]);
  OverwriteAssetSoundName__PlaySystemSe(v271, 8, 0LL);
  v275 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  v272,
                                                  v273,
                                                  v274);
  NetworkManager_ResultCallbackFunc___ctor(
    v275,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v276);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v275,
                                                  (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v106 )
    goto LABEL_93;
  eventId = v164->fields.eventId;
  v278 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v106,
                                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v278 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v278, eventId, (EnterUserSvtInfo_array *)Master_object, v279);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A13A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v5, v6);
    byte_4B1A13A = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__OnClickCancel(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1A139 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method, v2);
    byte_4B1A139 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    FortificationAutomaticDialogComponent__Close(this, v6);
  }
}


void __fastcall FortificationAutomaticDialogComponent__OnClickRemove(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationAutomaticDialogComponent__AutoSet(this, 0, v2);
  }
}


void __fastcall FortificationAutomaticDialogComponent__OnClickSet(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationAutomaticDialogComponent__AutoSet(this, 1, v2);
  }
}


void __fastcall FortificationAutomaticDialogComponent__Open(
        FortificationAutomaticDialogComponent_o *this,
        System_Action_o *onDecide,
        System_Action_o *closeCallBack,
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  UILabel_o *titleLb; // x20
  System_String_o *v33; // x0
  __int64 v34; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *v42; // x20

  if ( (byte_4B1A136 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, onDecide, closeCallBack);
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_6566/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_6567/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6568/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6569/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v23, v24);
    byte_4B1A136 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)onDecide,
      (int64_t)closeCallBack,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.closeCallBack,
      (int64_t)closeCallBack,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_6569/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v33, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_6566/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v33, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_6568/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v33, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_6567/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v33, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1BCAA3C(v33, v34);
    }
    UILabel__set_text(cancelButtonLb, v33, 0LL);
    this->fields.state = 1;
    v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *__fastcall FortificationAutomaticDialogComponent__ReferenceDetailList(
        FortificationAutomaticDialogComponent_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o *teamList,
        bool isSet,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
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
  System_Collections_Generic_List_object__o *v48; // x19
  __int64 v49; // x1
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  EventFortificationSvtMaster_o *v52; // x24
  _BOOL8 v53; // x0
  __int64 v54; // x1
  Il2CppObject *current; // x22
  __int64 v56; // x1
  __int64 v57; // x1
  int64_t UserId; // x2
  _BOOL8 v59; // x0
  __int64 v60; // x1
  _BOOL8 v61; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x25
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  int v67; // w26
  int monitor; // w27
  int v69; // w28
  int64_t v70; // x25
  __int64 v71; // x0
  __int64 v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x26
  __int64 v87; // x0
  __int64 v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  Il2CppObject *v95; // x1
  __int64 v96; // x25
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  System_Object_array *setSvtInfos; // x27
  System_Func_object__bool__o *v102; // x28
  Il2CppObject *object; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  Il2CppObject *v107; // x26
  __int64 monitor_low; // x1
  int v109; // w28
  int v110; // w27
  int v111; // w26
  int64_t v112; // x25
  __int64 v113; // x0
  __int64 v114; // x1
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct System_Object_array *items; // x8
  _QWORD *v122; // x9
  __int64 size; // x10
  __int64 v124; // x8
  int v125; // w27
  int v126; // w28
  int klass_high; // w26
  __int64 v128; // x0
  __int64 v129; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  int v135; // w28
  int v136; // w27
  int klass; // w26
  __int64 v138; // x0
  __int64 v139; // x1
  Il2CppClass **v140; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v143; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v146; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v147; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v148; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4B1A138 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_SetSvtInfo___, teamList, isSet);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v24, v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&System_Func_SetSvtInfo__bool__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v30, v31);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__,
      v32,
      v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v36, v37);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__,
      v38,
      v39);
    sub_1BCA7E0(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v40, v41);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v42, v43);
    sub_1BCA7E0(
      &Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
      v44,
      v45);
    sub_1BCA7E0(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v46, v47);
    byte_4B1A138 = 1;
  }
  memset(&v151, 0, sizeof(v151));
  entity = 0LL;
  entities = 0LL;
  memset(&v148, 0, sizeof(v148));
  v146 = 0LL;
  v147 = 0LL;
  v48 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                                                       teamList,
                                                       isSet,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v143 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v50 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1BCAA3C(v50, v51);
  v52 = (EventFortificationSvtMaster_o *)v50;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v145,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v151 = v145;
  while ( 1 )
  {
    v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v151,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v53 )
      break;
    current = v151.fields._current;
    if ( !v151.fields._current )
      sub_1BCAA3C(v53, v54);
    if ( !v143 )
      sub_1BCAA3C(0LL, v54);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v143,
           &entities,
           (int32_t)v151.fields._current[1].klass,
           HIDWORD(v151.fields._current[1].klass),
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v56);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_object )
        sub_1BCAA3C(0LL, v57);
      v59 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( v59 )
      {
        if ( !entity )
          sub_1BCAA3C(v59, v60);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1BCAA3C(0LL, v60);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v145,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v148 = v145;
          while ( 1 )
          {
LABEL_31:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v148,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_28;
            v86 = sub_1BCAA2C(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v83, v84, v85);
            System_Object___ctor((Il2CppObject *)v86, 0LL);
            if ( !v86 )
              sub_1BCAA3C(v87, v88);
            v95 = v148.fields._current;
            *(_QWORD *)(v86 + 16) = v148.fields._current;
            v96 = v86 + 16;
            sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 16), (int64_t)v95, v89, v90, v91, v92, v93, v94);
            if ( !entity )
              sub_1BCAA3C(v97, v98);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v102 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SetSvtInfo__bool__TypeInfo, v98, v99, v100);
            System_Func_object__bool____ctor(
              v102,
              (Il2CppObject *)v86,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0LL);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v102,
                       (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_SetSvtInfo___);
            v107 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              v124 = *(_QWORD *)v96;
              if ( !*(_QWORD *)v96 )
                sub_1BCAA3C(0LL, v104);
              v125 = *(_DWORD *)(v124 + 24);
              v126 = *(_DWORD *)(v124 + 40);
              klass_high = HIDWORD(current[1].klass);
              v112 = sub_1BCAA2C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v104, v105, v106);
              System_Object___ctor((Il2CppObject *)v112, 0LL);
              *(_DWORD *)(v112 + 16) = klass_high;
              *(_DWORD *)(v112 + 20) = v125;
              *(_DWORD *)(v112 + 24) = v126;
              if ( !v48 )
                sub_1BCAA3C(v128, v129);
              items = v48->fields._items;
              v122 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v48->fields._version;
              if ( !items )
                sub_1BCAA3C(v128, v129);
              size = v48->fields._size;
              if ( (unsigned int)size < items->max_length )
              {
LABEL_61:
                v140 = &items->obj.klass + size;
                v48->fields._size = size + 1;
                v140[4] = (Il2CppClass *)v112;
                sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 4), v112, v115, v116, v117, v118, v119, v120);
                continue;
              }
              goto LABEL_62;
            }
            monitor_low = LODWORD(object[1].monitor);
            if ( !(_DWORD)monitor_low && v4 )
              break;
            if ( (_DWORD)monitor_low && !HIDWORD(object[1].klass) && v4 )
            {
              setSvtIdList = this->fields.setSvtIdList;
              if ( !setSvtIdList )
                sub_1BCAA3C(0LL, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v52 )
                sub_1BCAA3C(object, monitor_low);
              v131 = EventFortificationSvtMaster__TryGetEntity(
                       v52,
                       &v146,
                       (int32_t)current[1].klass,
                       HIDWORD(current[1].klass),
                       (int32_t)object[1].klass,
                       0LL);
              if ( !v131 )
              {
                if ( !*(_QWORD *)v96 )
                  sub_1BCAA3C(v131, v132);
                v135 = *(_DWORD *)(*(_QWORD *)v96 + 40LL);
                v136 = HIDWORD(current[1].klass);
                klass = (int)v107[1].klass;
                v112 = sub_1BCAA2C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v132, v133, v134);
                System_Object___ctor((Il2CppObject *)v112, 0LL);
                *(_DWORD *)(v112 + 16) = v136;
                *(_DWORD *)(v112 + 20) = klass;
                *(_DWORD *)(v112 + 24) = v135;
                if ( !v48 )
                  sub_1BCAA3C(v138, v139);
                items = v48->fields._items;
                v122 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v48->fields._version;
                if ( !items )
                  sub_1BCAA3C(v138, v139);
                size = v48->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_61;
                goto LABEL_62;
              }
            }
          }
          if ( !*(_QWORD *)v96 )
            sub_1BCAA3C(object, monitor_low);
          v109 = *(_DWORD *)(*(_QWORD *)v96 + 40LL);
          v110 = HIDWORD(current[1].klass);
          v111 = (int)object[1].klass;
          v112 = sub_1BCAA2C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, monitor_low, v105, v106);
          System_Object___ctor((Il2CppObject *)v112, 0LL);
          *(_DWORD *)(v112 + 16) = v110;
          *(_DWORD *)(v112 + 20) = v111;
          *(_DWORD *)(v112 + 24) = v109;
          if ( !v48 )
            sub_1BCAA3C(v113, v114);
          items = v48->fields._items;
          v122 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v48->fields._version;
          if ( !items )
            sub_1BCAA3C(v113, v114);
          size = v48->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_61;
LABEL_62:
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            (Il2CppObject *)v112,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
          goto LABEL_31;
        }
      }
      if ( !entities )
        sub_1BCAA3C(0LL, v60);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v145,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v148 = v145;
      while ( 1 )
      {
        v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v148,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v61 )
          break;
        v63 = v148.fields._current;
        if ( !v148.fields._current )
          sub_1BCAA3C(v61, v62);
        if ( !v52 )
          sub_1BCAA3C(v61, v62);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v52,
                &v147,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v148.fields._current[1].monitor,
                0LL)
          && v4 )
        {
          v67 = HIDWORD(current[1].klass);
          monitor = (int)v63[1].monitor;
          v69 = (int)v63[2].monitor;
          v70 = sub_1BCAA2C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v64, v65, v66);
          System_Object___ctor((Il2CppObject *)v70, 0LL);
          *(_DWORD *)(v70 + 16) = v67;
          *(_DWORD *)(v70 + 20) = monitor;
          *(_DWORD *)(v70 + 24) = v69;
          if ( !v48 )
            sub_1BCAA3C(v71, v72);
          v79 = v48->fields._items;
          v80 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v48->fields._version;
          if ( !v79 )
            sub_1BCAA3C(v71, v72);
          v81 = v48->fields._size;
          if ( (unsigned int)v81 >= v79->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v48,
              (Il2CppObject *)v70,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            v82 = &v79->obj.klass + v81;
            v48->fields._size = v81 + 1;
            v82[4] = (Il2CppClass *)v70;
            sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 4), v70, v73, v74, v75, v76, v77, v78);
          }
        }
      }
LABEL_28:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v148,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v151,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v48;
}


void __fastcall FortificationAutomaticDialogComponent__SerializeFieldNotNullCheck(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationAutomaticDialogComponent___Close_b__23_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  ActionExtensions__Call(this->fields.closeCallBack, 0LL);
  FortificationAutomaticDialogComponent__Init(this, this->fields.eventId, v3);
}


void __fastcall FortificationAutomaticDialogComponent___Open_b__16_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall FortificationAutomaticDialogComponent__get_closeBtnObject(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A13B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A13B = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent_DetailInfo___ctor(
        FortificationAutomaticDialogComponent_DetailInfo_o *this,
        int32_t idx,
        int32_t position,
        int32_t classId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.idx = idx;
  this->fields.position = position;
  this->fields.classId = classId;
}


void __fastcall FortificationAutomaticDialogComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1A13D & 1) == 0 )
  {
    sub_1BCA7E0(&FortificationAutomaticDialogComponent___c_TypeInfo, v1, v2);
    byte_4B1A13D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FortificationAutomaticDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall FortificationAutomaticDialogComponent___c___ctor(
        FortificationAutomaticDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_1(
        FortificationAutomaticDialogComponent___c_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.lv;
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B1A13E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result, method);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v5, v6);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1BCA7E0(&StringLiteral_17047/*"ar200"*/, v7, v8);
    byte_4B1A13E = 1;
  }
  if ( v4->fields.isSet )
  {
    v9 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v10,
                                                                              (System_String_o *)StringLiteral_17047/*"ar200"*/,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1BCAA3C(this, result);
  FortificationAutomaticDialogComponent__Close(
    (FortificationAutomaticDialogComponent_o *)this,
    (const MethodInfo *)result);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  classId = x->fields.classId;
  if ( classId == this->fields.typeAll )
    return -1;
  if ( classId == this->fields.typeExtra )
    return 0;
  return x->fields.classId;
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_2___AutoSet_b__3(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct FortificationAutomaticDialogComponent_DetailInfo_o *detail; // x9
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *CS___8__locals2; // x8
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *CS___8__locals1; // x10
  int32_t classId; // w22
  ServantClassMaster_o *svtClassMst; // x21
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v12; // x8
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_4B1A13F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, x, method);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1BCA7E0(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v5,
                                                                              v6);
    byte_4B1A13F = 1;
  }
  detail = v4->fields.detail;
  if ( !detail )
    goto LABEL_20;
  CS___8__locals2 = v4->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_20;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  classId = detail->fields.classId;
  if ( classId != CS___8__locals1->fields.typeAll )
  {
    if ( !x )
      goto LABEL_20;
    svtClassMst = CS___8__locals2->fields.svtClassMst;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)UserServantEntity__getSvtClassId(x, 0, 0LL);
    if ( !svtClassMst )
      goto LABEL_20;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)ServantClassMaster__getSupportGroupType(
                                                                              svtClassMst,
                                                                              (int32_t)this,
                                                                              0LL);
    if ( classId != (_DWORD)this )
      return 0;
    CS___8__locals2 = v4->fields.CS___8__locals2;
    if ( !CS___8__locals2 )
      goto LABEL_20;
  }
  v12 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_20;
  _4__this = v12->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_20;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v16 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                            v19,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_20:
    sub_1BCAA3C(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortificationAutomaticDialogComponent___c__DisplayClass19_0___ReferenceDetailList_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *detail; // x8

  if ( !info || (detail = this->fields.detail) == 0LL )
    sub_1BCAA3C(this, info);
  return info->fields.position == detail->fields.position;
}