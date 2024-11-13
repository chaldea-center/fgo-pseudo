void __fastcall HorizontalQuestInformationIconListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct HorizontalQuestInformationIconListComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1312B & 1) == 0 )
  {
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/, v10, v11);
    byte_4B1312B = 1;
  }
  HorizontalQuestInformationIconListComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)HorizontalQuestInformationIconListComponent_TypeInfo->static_fields,
    StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = HorizontalQuestInformationIconListComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v12, v14, v15, v16, v17, v18, v19);
}


void __fastcall HorizontalQuestInformationIconListComponent___ctor(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.displayLimitNum = 6;
  *(_QWORD *)&this->fields.questInfoFadeFrameNum = 0x4040000000000007LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
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
  __int64 v19; // x19
  System_Collections_Generic_List_object__o *iconGroupList; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Action_object__o **v28; // x20
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_object__o *v33; // x22
  Il2CppObject *current; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1311F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_HorizontalQuestInformationIconDraw__TypeInfo, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
      v15,
      v16);
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo, v17, v18);
    byte_4B1311F = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v19 = sub_1BCAA2C(HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo, method, v2, v3);
  HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ctor(
    (HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *)v19,
    0LL);
  if ( !v19
    || (*(_QWORD *)(v19 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)this, v22, v23, v24, v25, v26, v27),
        *(_DWORD *)(v19 + 16) = 0,
        (iconGroupList = (System_Collections_Generic_List_object__o *)this->fields.iconGroupList) == 0LL) )
  {
    sub_1BCAA3C(iconGroupList, v21);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    iconGroupList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
  v28 = (System_Action_object__o **)(v19 + 32);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    if ( !v29 )
      break;
    v33 = *v28;
    current = v41.fields._current;
    if ( !*v28 )
    {
      v33 = (System_Action_object__o *)sub_1BCAA2C(
                                         System_Action_HorizontalQuestInformationIconDraw__TypeInfo,
                                         v30,
                                         v31,
                                         v32);
      System_Action_object____ctor(
        v33,
        (Il2CppObject *)v19,
        Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
        0LL);
      *v28 = v33;
      sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v33, v35, v36, v37, v38, v39, v40);
    }
    if ( !current )
      sub_1BCAA3C(v29, v30);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)current,
      (System_Action_T__o *)v33,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    ++*(_DWORD *)(v19 + 16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  int32_t v5; // w19
  int v6; // w20
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t v11; // w22
  QuestInformationListViewItem_o *v12; // x23
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  QuestInformationListViewItem_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x8

  v5 = svtCnt;
  v6 = itemCnt;
  if ( (byte_4B13126 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
      *(_QWORD *)&kind,
      *(_QWORD *)&itemCnt);
    sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v9, v10);
    byte_4B13126 = 1;
  }
  if ( !kind )
  {
    if ( v6 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = (QuestInformationListViewItem_o *)sub_1BCAA2C(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  *(_QWORD *)&kind,
                                                  *(_QWORD *)&itemCnt,
                                                  *(_QWORD *)&svtCnt);
        QuestInformationListViewItem___ctor(v12, v11, 2, 0, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v22 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v12,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v12;
          sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v12, v14, v15, v16, v17, v18, v19);
        }
        if ( v6 == ++v11 )
          goto LABEL_14;
      }
LABEL_22:
      sub_1BCAA3C(itemList, v13);
    }
    v6 = 0;
LABEL_14:
    if ( v5 >= 1 )
    {
      while ( 1 )
      {
        v25 = (QuestInformationListViewItem_o *)sub_1BCAA2C(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  *(_QWORD *)&kind,
                                                  *(_QWORD *)&itemCnt,
                                                  *(_QWORD *)&svtCnt);
        QuestInformationListViewItem___ctor(v25, v6, 1, 0, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        v32 = itemList->fields._items;
        v33 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v32 )
          break;
        v34 = itemList->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v25,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &v32->obj.klass + v34;
          itemList->fields._size = v34 + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v25, v26, v27, v28, v29, v30, v31);
        }
        --v5;
        ++v6;
        if ( !v5 )
          return;
      }
      goto LABEL_22;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
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
  __int64 v51; // x20
  __int64 QuestEntity; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 *v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v69; // x24
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  unsigned int **v73; // x25
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x1
  bool HasFlag; // w28
  __int64 v82; // x1
  Il2CppObject *v83; // x27
  __int64 v84; // x8
  int64_t v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  __int64 v97; // x8
  __int64 v98; // x29
  __int64 v99; // x23
  __int64 v100; // x26
  unsigned __int64 v101; // x9
  unsigned __int64 v102; // x19
  int32_t v103; // w3
  __int64 v104; // x8
  ViewEnemyEntity_o *v105; // x27
  unsigned int *v106; // x8
  PartyOrganizationUtility_o *v107; // x0
  System_String_o *v108; // x0
  Il2CppObject *v109; // x27
  int64_t v110; // x2
  __int64 v111; // x3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct System_Object_array *items; // x8
  _QWORD *v117; // x9
  __int64 size; // x10
  Il2CppClass **v119; // x0
  ViewEnemyEntity_o *v120; // x28
  unsigned int *v121; // x28
  System_Object_array *v122; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  System_Action_o *v132; // x21
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  System_Action_o *v142; // x21
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  System_Action_o *v152; // x19
  __int64 v153; // x1
  __int64 v154; // x0
  HorizontalQuestInformationIconListComponent_o *v155; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v156; // [xsp+8h] [xbp-88h]
  bool v157; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v159; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v160; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B13127 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&questId);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ViewEnemyMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v33, v34);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v35, v36);
    sub_1BCA7E0(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__,
      v37,
      v38);
    sub_1BCA7E0(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__,
      v39,
      v40);
    sub_1BCA7E0(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__,
      v41,
      v42);
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo, v43, v44);
    sub_1BCA7E0(&ViewEnemyEntity___TypeInfo, v45, v46);
    sub_1BCA7E0(&ViewEnemyEntity_TypeInfo, v47, v48);
    sub_1BCA7E0(&StringLiteral_12814/*"Servants/Commands/"*/, v49, v50);
    byte_4B13127 = 1;
  }
  v159 = 0LL;
  v160 = 0LL;
  entity = 0LL;
  v51 = sub_1BCAA2C(
          HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&questId,
          enemies);
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___ctor(
    (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v51,
    0LL);
  if ( !v51 )
    goto LABEL_63;
  *(_QWORD *)(v51 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 16), (int64_t)this, v54, v55, v56, v57, v58, v59);
  *(_QWORD *)(v51 + 32) = enemies;
  v60 = (__int64 *)(v51 + 32);
  *(_DWORD *)(v51 + 24) = questId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 32), (int64_t)enemies, v61, v62, v63, v64, v65, v66);
  if ( kind )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v69 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v156 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v70,
                                                        v71,
                                                        v72);
  System_Collections_Generic_List_object____ctor(
    v156,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v51 + 40) = 0LL;
  v73 = (unsigned int **)(v51 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 40), 0LL, v74, v75, v76, v77, v78, v79);
  QuestEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_63;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v51 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_63;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v80);
  v155 = this;
  v83 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v82);
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v83 )
    goto LABEL_63;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v83, &entity, QuestEntity, *(_DWORD *)(v51 + 24), 0LL);
  v84 = *(_QWORD *)(v51 + 32);
  if ( v84 )
  {
    v85 = sub_1BCA888(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v84 + 24));
    *v73 = (unsigned int *)v85;
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 40), v85, v86, v87, v88, v89, v90, v91);
    v97 = *v60;
    if ( !*v60 )
      goto LABEL_63;
    v98 = 0LL;
    v99 = 8LL;
    v100 = 8LL;
    v157 = HasFlag;
    while ( 1 )
    {
      v101 = *(unsigned int *)(v97 + 24);
      v102 = v99 - 8;
      if ( v99 - 8 >= (int)v101 )
        break;
      if ( v102 >= v101 )
        goto LABEL_64;
      v103 = *(_DWORD *)(v97 + 4 * v99);
      if ( v103 < 1 )
        goto LABEL_39;
      if ( !Master_object )
        goto LABEL_63;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      (ViewEnemyMaster_o *)Master_object,
                      &v159,
                      *(_DWORD *)(v51 + 24),
                      v103,
                      0LL);
      if ( (QuestEntity & 1) == 0 )
        goto LABEL_39;
      if ( !HasFlag )
      {
        if ( !entity )
          goto LABEL_28;
        QuestEntity = (__int64)entity->fields.enemyIds;
        if ( !QuestEntity || !*(_QWORD *)(QuestEntity + 24) )
          goto LABEL_28;
        if ( !v159 )
          goto LABEL_63;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v159->fields.enemyId,
                        (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_28:
          v104 = *v60;
          if ( !*v60 )
            goto LABEL_63;
          if ( v102 >= *(unsigned int *)(v104 + 24) )
            goto LABEL_64;
          *(_DWORD *)(v104 + 4 * v99) = 0;
        }
      }
      if ( !v159 || !v69 )
        goto LABEL_63;
      QuestEntity = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v69,
                      &v160,
                      v159->fields.svtId,
                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v160;
        if ( !v160 )
          goto LABEL_63;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v160, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_38;
        QuestEntity = (__int64)v159;
        if ( !v159 )
          goto LABEL_63;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v159, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v159 )
            goto LABEL_63;
          v108 = System_Int32__ToString((int)v159 + 36, 0LL);
          v109 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_12814/*"Servants/Commands/"*/, v108, 0LL);
          QuestEntity = (__int64)v156;
          if ( !v156 )
            goto LABEL_63;
          QuestEntity = System_Collections_Generic_List_object___Contains(
                          v156,
                          v109,
                          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
          if ( (QuestEntity & 1) == 0 )
          {
            items = v156->fields._items;
            v117 = Method_System_Collections_Generic_List_string__Add__;
            ++v156->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v156->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v156,
                v109,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
            }
            else
            {
              v119 = &items->obj.klass + size;
              v156->fields._size = size + 1;
              v119[4] = (Il2CppClass *)v109;
              sub_1BCA784((PartyOrganizationUtility_o *)(v119 + 4), (int64_t)v109, v110, v111, v112, v113, v114, v115);
            }
          }
          v120 = v159;
          v105 = (ViewEnemyEntity_o *)sub_1BCAA2C(ViewEnemyEntity_TypeInfo, v53, v110, v111);
          ViewEnemyEntity___ctor_41013736(v105, v120, 0LL);
          v159 = v105;
          if ( !v105 )
            goto LABEL_63;
          v105->fields.iconId = 0;
        }
        else
        {
LABEL_38:
          v105 = v159;
        }
        v121 = *v73;
        if ( !*v73 )
          goto LABEL_63;
        if ( v105 )
        {
          QuestEntity = sub_1BCA91C(v105, *(_QWORD *)(*(_QWORD *)v121 + 64LL));
          if ( !QuestEntity )
          {
            v154 = sub_1BCAA60();
            sub_1BCA908(v154, 0LL);
          }
        }
        if ( v102 >= v121[6] )
LABEL_64:
          sub_1BCAA44(QuestEntity, v53);
        v107 = (PartyOrganizationUtility_o *)&v121[v100];
        HasFlag = v157;
        v107->klass = (PartyOrganizationUtility_c *)v105;
      }
      else
      {
LABEL_39:
        v106 = *v73;
        if ( !*v73 )
          goto LABEL_63;
        if ( v102 >= v106[6] )
          goto LABEL_64;
        v105 = 0LL;
        v107 = (PartyOrganizationUtility_o *)&v106[2 * v98 + 8];
        *(_QWORD *)&v106[v100] = 0LL;
      }
      sub_1BCA784(v107, (int64_t)v105, v92, v103, v93, v94, v95, v96);
      v97 = *v60;
      ++v98;
      ++v99;
      v100 += 2LL;
      if ( !*v60 )
        goto LABEL_63;
    }
  }
  QuestEntity = (__int64)v156;
  if ( !v156 )
LABEL_63:
    sub_1BCAA3C(QuestEntity, v53);
  v122 = System_Collections_Generic_List_object___ToArray(
           v156,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v155->fields.loadedAssets = (struct System_String_array *)v122;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v155->fields.loadedAssets,
    (int64_t)v122,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  v155->fields.loading = 1;
  v132 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v129, v130, v131);
  System_Action___ctor(
    v132,
    (Il2CppObject *)v51,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__,
    0LL);
  v155->fields.assetStoragesLoadCallback = v132;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v155->fields.assetStoragesLoadCallback,
    (int64_t)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  v142 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v139, v140, v141);
  System_Action___ctor(
    v142,
    (Il2CppObject *)v51,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__,
    0LL);
  v155->fields.enemyAtlasLoadCallback = v142;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v155->fields.enemyAtlasLoadCallback,
    (int64_t)v142,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  v152 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v149, v150, v151);
  System_Action___ctor(
    v152,
    (Il2CppObject *)v51,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v153);
  AtlasManager__LoadEnemyAtlas(v152, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList_34652716(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  int32_t v12; // w22
  ViewEnemyEntity_o *v13; // x24
  QuestInformationListViewItem_o *v14; // x0
  Il2CppObject *v15; // x23
  int32_t v16; // w1
  ViewEnemyEntity_o *v17; // x2
  bool v18; // w3
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v28; // x8

  v7 = this;
  if ( (byte_4B13128 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
      *(_QWORD *)&questId,
      enemies);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v8, v9);
    byte_4B13128 = 1;
  }
  if ( v7->fields.loading )
  {
    v7->fields.loading = 0;
    if ( enemies )
    {
      v10 = *(_QWORD *)&enemies->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = 0LL;
        v12 = 0;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)v10 )
            goto LABEL_23;
          if ( !veEnts )
            goto LABEL_22;
          if ( v11 >= veEnts->max_length )
LABEL_23:
            sub_1BCAA44(this, *(_QWORD *)&questId);
          v13 = veEnts->m_Items[v11];
          if ( enemies->m_Items[v11 + 1] <= 0 )
            break;
          if ( v13 )
          {
            v14 = (QuestInformationListViewItem_o *)sub_1BCAA2C(
                                                      QuestInformationListViewItem_TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      enemies,
                                                      veEnts);
            v15 = (Il2CppObject *)v14;
            v16 = v12;
            v17 = v13;
            v18 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v11 >= (int)v10 )
            return;
        }
        v14 = (QuestInformationListViewItem_o *)sub_1BCAA2C(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  *(_QWORD *)&questId,
                                                  enemies,
                                                  veEnts);
        v15 = (Il2CppObject *)v14;
        v18 = 1;
        v16 = v12;
        v17 = v13;
LABEL_14:
        QuestInformationListViewItem___ctor_34662932(v14, v16, v17, v18, 0LL);
        this = (HorizontalQuestInformationIconListComponent_o *)v7->fields.itemList;
        if ( !this
          || (v25 = *(_QWORD *)&this->fields.m_CachedPtr,
              v26 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v25) )
        {
LABEL_22:
          sub_1BCAA3C(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v15,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v28 + 32) = v15;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)v15, v19, v20, v21, v22, v23, v24);
        }
        LODWORD(v10) = enemies->max_length;
        ++v12;
        goto LABEL_20;
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateIconGroupList(
        HorizontalQuestInformationIconListComponent_o *this,
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
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v71; // x21
  __int64 v72; // x1
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *itemList; // x8
  UILabel_o *infoLabel; // x20
  int32_t iconType; // w19
  System_String_o **v76; // x8
  __int64 gameObject; // x0
  bool v78; // w1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x2
  __int64 v86; // x3
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *v87; // x22
  HorizontalQuestInformationIconListComponent___c_c *v88; // x0
  System_Func_T1__T2__TResult__o *_9__19_0; // x23
  Il2CppObject *v90; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x20
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  System_Func_object__int__o *v102; // x22
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  HorizontalQuestInformationIconListComponent___c_c *v107; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x22
  System_Func_object__object__o *_9__19_2; // x23
  Il2CppObject *v110; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x26
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  System_Collections_Generic_List_object__o *v122; // x20
  UnityEngine_GameObject_o *iconGrid; // x27
  int64_t v124; // x2
  __int64 v125; // x3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int v130; // w29
  char v131; // w8
  System_Collections_Generic_List_object__o *iconDrawList; // x25
  __int64 v133; // x1
  UnityEngine_Transform_o *parent; // x20
  __int64 v135; // x1
  System_Collections_IEnumerator_o *Enumerator; // x26
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v138; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v141; // x8
  __int64 v142; // x9
  System_Collections_IEnumerator_c **v143; // x10
  __int64 v144; // x0
  UnityEngine_Component_o *v145; // x0
  __int64 v146; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v148; // x0
  __int64 v149; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int64_t v157; // x1
  struct System_Object_array *items; // x8
  _QWORD *v159; // x9
  __int64 size; // x10
  Il2CppClass **v161; // x0
  __int64 v162; // x8
  __int64 v163; // x26
  __int64 v164; // x9
  int *v165; // x10
  __int64 v166; // x0
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  Il2CppClass **v170; // x0
  System_Collections_Generic_List_object__o *v171; // x19
  System_Collections_Generic_IEnumerable_TSource__c *v172; // x8
  __int64 v173; // x9
  int32_t *v174; // x10
  __int64 v175; // x0
  __int64 v176; // x1
  int32_t v177; // w26
  Il2CppObject *v178; // x23
  HorizontalQuestInformationIconDraw_o *v179; // x25
  __int64 v180; // x8
  __int64 v181; // x9
  int *v182; // x10
  __int64 v183; // x0
  __int64 v184; // x8
  __int64 v185; // x9
  int *v186; // x10
  __int64 v187; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v188; // x0
  System_Collections_Generic_List_TSource__o *v189; // x0
  __int64 v190; // x1
  System_Collections_Generic_List_object__o *v191; // x27
  int32_t v192; // w24
  Il2CppObject *Item; // x0
  __int64 v194; // x1
  int64_t v195; // x2
  int32_t v196; // w3
  MethodInfo *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  System_Collections_Generic_List_object__o *v201; // x26
  int32_t v202; // w28
  Il2CppObject *v203; // x29
  HorizontalQuestInformationIconDraw_o *v204; // x20
  Il2CppObject *v205; // x0
  const MethodInfo *v206; // x4
  Il2CppObject *v207; // x29
  struct System_Object_array *v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  Il2CppClass **v211; // x0
  __int64 v212; // x8
  __int64 v213; // x9
  int *v214; // x10
  __int64 v215; // x20
  __int64 v216; // x0
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  __int64 v223; // x0
  __int64 v224; // x20
  __int64 v225; // x8
  __int64 v226; // x9
  int *v227; // x10
  __int64 v228; // x0
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o **p_iconGroupList; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_object__o *v230; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v231; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_IEnumerable_TSource__o *v232; // [xsp+20h] [xbp-70h]
  __int64 v233; // [xsp+20h] [xbp-70h]
  HorizontalQuestInformationIconListComponent_o *iconListComponent; // [xsp+28h] [xbp-68h]

  if ( (byte_4B1311E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____, method, v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_GroupBy___f__AnonymousType4_QuestInformationListViewItem__int___int___,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType4_QuestInformationListViewItem__int____,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___, v11, v12);
    sub_1BCA7E0(&System_Func___f__AnonymousType4_QuestInformationListViewItem__int___int__TypeInfo, v13, v14);
    sub_1BCA7E0(
      &System_Func_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo,
      v15,
      v16);
    sub_1BCA7E0(
      &System_Func_QuestInformationListViewItem__int____f__AnonymousType4_QuestInformationListViewItem__int___TypeInfo,
      v17,
      v18);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___, v19, v20);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Count__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__, v43, v44);
    sub_1BCA7E0(&System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo, v45, v46);
    sub_1BCA7E0(&System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo, v47, v48);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v51, v52);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v53, v54);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v55, v56);
    sub_1BCA7E0(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__, v57, v58);
    sub_1BCA7E0(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__, v59, v60);
    sub_1BCA7E0(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
      v61,
      v62);
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo, v63, v64);
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v65, v66);
    sub_1BCA7E0(&StringLiteral_8778/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_8779/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/, v69, v70);
    byte_4B1311E = 1;
  }
  v71 = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_1BCAA2C(
                                                                                 HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo,
                                                                                 method,
                                                                                 v2,
                                                                                 v3);
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___ctor(v71, 0LL);
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size >= 1 )
  {
    infoLabel = this->fields.infoLabel;
    iconType = this->fields.iconType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    v76 = (System_String_o **)&StringLiteral_8779/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/;
    if ( iconType )
      v76 = (System_String_o **)&StringLiteral_8778/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/;
    gameObject = (__int64)LocalizationManager__Get(*v76, 0LL);
    if ( !infoLabel )
      goto LABEL_139;
    UILabel__set_text(infoLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    v78 = 1;
  }
  else
  {
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    v78 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v78, 0LL);
  this->fields.iconGroupList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconGroupList, 0LL, v79, v80, v81, v82, v83, v84);
  if ( !v71 )
    goto LABEL_139;
  p_iconGroupList = &this->fields.iconGroupList;
  v71->fields.chunkSize = this->fields.displayLimitNum;
  v87 = this->fields.itemList;
  v88 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo, v72);
    v88 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T1__T2__TResult__o *)v88->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v88->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v88, v72);
      v88 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v90 = (Il2CppObject *)v88->static_fields->__9;
    _9__19_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                   System_Func_QuestInformationListViewItem__int____f__AnonymousType4_QuestInformationListViewItem__int___TypeInfo,
                                                   v72,
                                                   v85,
                                                   v86);
    System_Func_object__int__object____ctor(
      _9__19_0,
      v90,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_QuestInformationListViewItem__int____f__AnonymousType4_QuestInformationListViewItem__int___o *)_9__19_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__19_0,
      (int64_t)_9__19_0,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
  }
  v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__49560932(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v87,
                                                               (System_Func_TSource__int__TResult__o *)_9__19_0,
                                                               (const MethodInfo_2F43D64 *)Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType4_QuestInformationListViewItem__int____);
  v102 = (System_Func_object__int__o *)sub_1BCAA2C(
                                         System_Func___f__AnonymousType4_QuestInformationListViewItem__int___int__TypeInfo,
                                         v99,
                                         v100,
                                         v101);
  System_Func_object__int____ctor(
    v102,
    (Il2CppObject *)v71,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
    0LL);
  v103 = System_Linq_Enumerable__GroupBy_object__int_(
           v98,
           (System_Func_TSource__TKey__o *)v102,
           (const MethodInfo_2F36458 *)Method_System_Linq_Enumerable_GroupBy___f__AnonymousType4_QuestInformationListViewItem__int___int___);
  v107 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v108 = (System_Collections_Generic_IEnumerable_TSource__o *)v103;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo, v104);
    v107 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_2 = (System_Func_object__object__o *)v107->static_fields->__9__19_2;
  if ( !_9__19_2 )
  {
    if ( !v107->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v107, v104);
      v107 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v110 = (Il2CppObject *)v107->static_fields->__9;
    _9__19_2 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo,
                                                  v104,
                                                  v105,
                                                  v106);
    System_Func_object__object____ctor(
      _9__19_2,
      v110,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__,
      0LL);
    v111 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v111->__9__19_2 = (struct System_Func_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___o *)_9__19_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v111->__9__19_2, (int64_t)_9__19_2, v112, v113, v114, v115, v116, v117);
  }
  v118 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                v108,
                                                                (System_Func_TSource__TResult__o *)_9__19_2,
                                                                (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
  v122 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo,
                                                        v119,
                                                        v120,
                                                        v121);
  System_Collections_Generic_List_object____ctor(
    v122,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  iconGrid = this->fields.iconGrid;
  iconListComponent = this;
  if ( !iconGrid )
    goto LABEL_139;
  UnityEngine_GameObject__SetActive(iconGrid, 1, 0LL);
  gameObject = System_Linq_Enumerable__Count_object_(
                 v118,
                 (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
  v231 = v122;
  if ( (int)gameObject >= 1 )
  {
    v130 = 0;
    v131 = 1;
    v230 = (System_Collections_Generic_List_object__o *)iconGrid;
    v232 = v118;
    do
    {
      if ( (v131 & 1) != 0 )
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)this->fields.iconDrawList;
      }
      else
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo,
                                                                      v72,
                                                                      v124,
                                                                      v125);
        System_Collections_Generic_List_object____ctor(
          iconDrawList,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
        gameObject = (__int64)UnityEngine_GameObject__get_transform(iconGrid, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v133);
        gameObject = (__int64)UnityEngine_Object__Instantiate_object__49903816(
                                (Il2CppObject *)iconGrid,
                                parent,
                                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        if ( !gameObject )
          goto LABEL_139;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !Enumerator )
          sub_1BCAA3C(0LL, v135);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v138 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v138;
              p_offset += 4;
              if ( !v138 )
                goto LABEL_44;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_44:
            p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v141 = Enumerator->klass;
          v142 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v143 = (System_Collections_IEnumerator_c **)&v141->_1.interfaceOffsets->offset;
            while ( *(v143 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v142;
              v143 += 2;
              if ( !v142 )
                goto LABEL_51;
            }
            v144 = (__int64)&v141->vtable[*(_DWORD *)v143 + 1].method;
          }
          else
          {
LABEL_51:
            v144 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v145 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v144)(
                                              Enumerator,
                                              *(_QWORD *)(v144 + 8));
          if ( !v145 )
            sub_1BCAA3C(0LL, v146);
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v145->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (UnityEngine_Transform_c *)v145->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
          {
            sub_1BCACFC(v145);
            v223 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
            v224 = v223;
            if ( v223 )
            {
              v225 = *(_QWORD *)v223;
              v226 = *(unsigned __int16 *)(*(_QWORD *)v223 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v223 + 302LL) )
              {
                v227 = (int *)(*(_QWORD *)(v225 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v227 - 1) != System_IDisposable_TypeInfo )
                {
                  --v226;
                  v227 += 4;
                  if ( !v226 )
                    goto LABEL_150;
                }
                v228 = v225 + 16LL * *v227 + 312;
              }
              else
              {
LABEL_150:
                v228 = sub_1C1C7C0(v223, System_IDisposable_TypeInfo, 0LL);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v228)(v224, *(_QWORD *)(v228 + 8));
            }
            sub_1BCAA34(iconGrid);
          }
          v148 = UnityEngine_Component__get_gameObject(v145, 0LL);
          if ( !v148 )
            sub_1BCAA3C(0LL, v149);
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         v148,
                                         (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
          v157 = (int64_t)ComponentInChildren_object;
          if ( !iconDrawList )
            sub_1BCAA3C(ComponentInChildren_object, ComponentInChildren_object);
          items = iconDrawList->fields._items;
          v159 = Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__;
          ++iconDrawList->fields._version;
          if ( !items )
            sub_1BCAA3C(ComponentInChildren_object, ComponentInChildren_object);
          size = iconDrawList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              iconDrawList,
              ComponentInChildren_object,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
          }
          else
          {
            v161 = &items->obj.klass + size;
            iconDrawList->fields._size = size + 1;
            v161[4] = (Il2CppClass *)v157;
            sub_1BCA784((PartyOrganizationUtility_o *)(v161 + 4), v157, v151, v152, v153, v154, v155, v156);
          }
        }
        gameObject = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
        if ( gameObject )
        {
          v162 = *(_QWORD *)gameObject;
          v163 = gameObject;
          v164 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v165 = (int *)(*(_QWORD *)(v162 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v165 - 1) != System_IDisposable_TypeInfo )
            {
              --v164;
              v165 += 4;
              if ( !v164 )
                goto LABEL_67;
            }
            v166 = v162 + 16LL * *v165 + 312;
          }
          else
          {
LABEL_67:
            v166 = sub_1C1C7C0(gameObject, System_IDisposable_TypeInfo, 0LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v166)(v163, *(_QWORD *)(v166 + 8));
        }
        v122 = v231;
        v118 = v232;
        iconGrid = (UnityEngine_GameObject_o *)v230;
      }
      if ( !v122 )
        goto LABEL_139;
      v167 = v122->fields._items;
      v168 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
      ++v122->fields._version;
      if ( !v167 )
        goto LABEL_139;
      v169 = v122->fields._size;
      if ( (unsigned int)v169 >= v167->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v122,
          (Il2CppObject *)iconDrawList,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
      }
      else
      {
        v170 = &v167->obj.klass + v169;
        v122->fields._size = v169 + 1;
        v170[4] = (Il2CppClass *)iconDrawList;
        sub_1BCA784((PartyOrganizationUtility_o *)(v170 + 4), (int64_t)iconDrawList, v124, v125, v126, v127, v128, v129);
      }
      ++v130;
      gameObject = System_Linq_Enumerable__Count_object_(
                     v118,
                     (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
      v131 = 0;
    }
    while ( v130 < (int)gameObject );
  }
  v171 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo,
                                                        v72,
                                                        v124,
                                                        v125);
  System_Collections_Generic_List_object____ctor(
    v171,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  if ( !v118 )
LABEL_139:
    sub_1BCAA3C(gameObject, v72);
  v172 = v118->klass;
  v173 = *(unsigned __int16 *)(&v118->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v118->klass->_2.bitflags2 + 3) )
  {
    v174 = &v172->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___c **)v174 - 1) != System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo )
    {
      --v173;
      v174 += 4;
      if ( !v173 )
        goto LABEL_89;
    }
    v175 = (__int64)&v172->vtable[*v174].method;
  }
  else
  {
LABEL_89:
    v175 = sub_1C1C7C0(
             v118,
             System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo,
             0LL);
  }
  v233 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v175)(
           v118,
           *(_QWORD *)(v175 + 8));
  if ( !v233 )
    sub_1BCAA3C(0LL, v176);
  v177 = 0;
  v178 = 0LL;
  v179 = 0LL;
  while ( 1 )
  {
    v180 = *(_QWORD *)v233;
    v181 = *(unsigned __int16 *)(*(_QWORD *)v233 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v233 + 302LL) )
    {
      v182 = (int *)(*(_QWORD *)(v180 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v182 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v181;
        v182 += 4;
        if ( !v181 )
          goto LABEL_97;
      }
      v183 = v180 + 16LL * *v182 + 312;
    }
    else
    {
LABEL_97:
      v183 = sub_1C1C7C0(v233, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v183)(v233, *(_QWORD *)(v183 + 8)) & 1) == 0 )
      break;
    v184 = *(_QWORD *)v233;
    v185 = *(unsigned __int16 *)(*(_QWORD *)v233 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v233 + 302LL) )
    {
      v186 = (int *)(*(_QWORD *)(v184 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___c **)v186 - 1) != System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo )
      {
        --v185;
        v186 += 4;
        if ( !v185 )
          goto LABEL_104;
      }
      v187 = v184 + 16LL * *v186 + 312;
    }
    else
    {
LABEL_104:
      v187 = sub_1C1C7C0(
               v233,
               System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo,
               0LL);
    }
    v188 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v187)(
                                                                  v233,
                                                                  *(_QWORD *)(v187 + 8));
    v189 = System_Linq_Enumerable__ToList_object_(
             v188,
             (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    if ( !v122 )
      sub_1BCAA3C(v189, v190);
    v191 = (System_Collections_Generic_List_object__o *)v189;
    v192 = v177;
    Item = System_Collections_Generic_List_object___get_Item(
             v122,
             v177,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    v201 = (System_Collections_Generic_List_object__o *)Item;
    if ( Item && v71->fields.chunkSize >= 1 )
    {
      if ( !v191 )
        sub_1BCAA3C(Item, v194);
      v202 = 0;
      do
      {
        if ( v191->fields._size <= v202 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v201,
                   v202,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v207 = Item;
          if ( !Item )
            Item = v178;
          if ( v207 )
          {
            if ( !Item )
              sub_1BCAA3C(0LL, v194);
            HorizontalQuestInformationIconDraw__SetItem(
              (HorizontalQuestInformationIconDraw_o *)Item,
              0LL,
              0,
              iconListComponent,
              v197);
            v178 = v207;
          }
        }
        else
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v201,
                   v202,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v203 = Item;
          if ( Item )
            v204 = (HorizontalQuestInformationIconDraw_o *)Item;
          else
            v204 = v179;
          if ( Item )
          {
            v205 = System_Collections_Generic_List_object___get_Item(
                     v191,
                     v202,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
            if ( !v204 )
              sub_1BCAA3C(v205, v205);
            HorizontalQuestInformationIconDraw__SetItem(
              v204,
              (QuestInformationListViewItem_o *)v205,
              2,
              iconListComponent,
              v206);
            v179 = (HorizontalQuestInformationIconDraw_o *)v203;
          }
        }
        ++v202;
      }
      while ( v202 < v71->fields.chunkSize );
    }
    if ( !v171 )
      sub_1BCAA3C(Item, v194);
    v208 = v171->fields._items;
    v209 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
    ++v171->fields._version;
    if ( !v208 )
      sub_1BCAA3C(Item, v194);
    v210 = v171->fields._size;
    if ( (unsigned int)v210 >= v208->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v171,
        (Il2CppObject *)v201,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
    }
    else
    {
      v211 = &v208->obj.klass + v210;
      v171->fields._size = v210 + 1;
      v211[4] = (Il2CppClass *)v201;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)(v211 + 4),
        (int64_t)v201,
        v195,
        v196,
        (System_String_o *)v197,
        v198,
        v199,
        v200);
    }
    v122 = v231;
    v177 = v192 + 1;
  }
  v212 = *(_QWORD *)v233;
  v213 = *(unsigned __int16 *)(*(_QWORD *)v233 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v233 + 302LL) )
  {
    v214 = (int *)(*(_QWORD *)(v212 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v214 - 1) != System_IDisposable_TypeInfo )
    {
      --v213;
      v214 += 4;
      if ( !v213 )
        goto LABEL_134;
    }
    v215 = v233;
    v216 = v212 + 16LL * *v214 + 312;
  }
  else
  {
LABEL_134:
    v215 = v233;
    v216 = sub_1C1C7C0(v233, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v216)(v215, *(_QWORD *)(v216 + 8));
  iconListComponent->fields.iconGroupList = (struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *)v171;
  sub_1BCA784((PartyOrganizationUtility_o *)p_iconGroupList, (int64_t)v171, v217, v218, v219, v220, v221, v222);
  iconListComponent->fields.isNeedInit = 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardItemList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w23
  QuestInformationListViewItem_o *v12; // x22
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_4B13124 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, items, *(_QWORD *)&sum);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v7, v8);
    byte_4B13124 = 1;
  }
  if ( items )
  {
    v9 = *(_QWORD *)&items->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
          sub_1BCAA44(this, items);
        v11 = items->m_Items[v10 + 1];
        v12 = (QuestInformationListViewItem_o *)sub_1BCAA2C(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  items,
                                                  *(_QWORD *)&sum,
                                                  method);
        QuestInformationListViewItem___ctor(v12, v4 + v10, 2, v11, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v21 = itemList->fields._items,
              v22 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !v21) )
        {
          sub_1BCAA3C(itemList, v13);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v21->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v12,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &v21->obj.klass + size;
          itemList->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v12;
          sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v12, v14, v15, v16, v17, v18, v19);
        }
        LODWORD(v9) = items->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
      v4 += v10;
    }
  }
  return v4;
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        System_Int32_array *items,
        System_Int32_array *svts,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v7; // x0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x3
  int32_t RewardSvtList; // w0
  const MethodInfo *v11; // x3
  int32_t RewardItemList; // w0
  const MethodInfo *v13; // x3
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  System_Int32_array *qps; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *withoutQP; // [xsp+10h] [xbp-30h] BYREF
  System_Int32_array *combineMaterials; // [xsp+18h] [xbp-28h] BYREF
  System_Int32_array *withoutCM; // [xsp+28h] [xbp-18h] BYREF

  withoutQP = 0LL;
  combineMaterials = 0LL;
  qps = 0LL;
  if ( !kind )
  {
    HorizontalQuestInformationIconListComponent__SplitSvtsWithCombineMaterial(
      this,
      svts,
      &withoutCM,
      &combineMaterials,
      method);
    HorizontalQuestInformationIconListComponent__SplitItemsWithQP(v7, items, &withoutQP, &qps, v8);
    RewardSvtList = HorizontalQuestInformationIconListComponent__CreateRewardSvtList(this, withoutCM, 0, v9);
    RewardItemList = HorizontalQuestInformationIconListComponent__CreateRewardItemList(
                       this,
                       withoutQP,
                       RewardSvtList,
                       v11);
    v14 = HorizontalQuestInformationIconListComponent__CreateRewardSvtList(this, combineMaterials, RewardItemList, v13);
    HorizontalQuestInformationIconListComponent__CreateRewardItemList(this, qps, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardSvtList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w23
  QuestInformationListViewItem_o *v12; // x22
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_4B13125 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, svts, *(_QWORD *)&sum);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v7, v8);
    byte_4B13125 = 1;
  }
  if ( svts )
  {
    v9 = *(_QWORD *)&svts->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
          sub_1BCAA44(this, svts);
        v11 = svts->m_Items[v10 + 1];
        v12 = (QuestInformationListViewItem_o *)sub_1BCAA2C(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  svts,
                                                  *(_QWORD *)&sum,
                                                  method);
        QuestInformationListViewItem___ctor(v12, v4 + v10, 1, v11, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v22 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1BCAA3C(itemList, v13);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v12,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v12;
          sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v12, v14, v15, v16, v17, v18, v19);
        }
        LODWORD(v9) = svts->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
      v4 += v10;
    }
  }
  return v4;
}


void __fastcall HorizontalQuestInformationIconListComponent__DeleteCallback(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  this->fields.assetStoragesLoadCallback = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetStoragesLoadCallback, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.enemyAtlasLoadCallback = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enemyAtlasLoadCallback, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questInfoRoot; // x0

  questInfoRoot = this->fields.questInfoRoot;
  if ( !questInfoRoot )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(questInfoRoot, 0, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent__InitQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  AlphaTransitionCalculator_o *questInfoPanel; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  float v11; // s8
  TitleInfoControl_c *v12; // x0
  System_Func_float__float__float__float__o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  AlphaTransitionCalculator_o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x8

  if ( (byte_4B13120 & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__, v4, v5);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v6, v7);
    byte_4B13120 = 1;
  }
  questInfoPanel = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
  this->fields.mstQuestInfoIconUpdateTimer = 0.0;
  if ( !questInfoPanel )
    goto LABEL_14;
  ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))questInfoPanel->klass[1]._1.castClass)(
    questInfoPanel,
    questInfoPanel->klass[1]._1.declaringType,
    1.0);
  if ( this->fields.questInfoAlphaCalculator )
    goto LABEL_9;
  v11 = ChangedFPSUtil__CovertFrameNumToSecond(this->fields.questInfoFadeFrameNum, 0LL);
  v12 = TitleInfoControl_TypeInfo;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v10);
    v12 = TitleInfoControl_TypeInfo;
  }
  v13 = ExtraEasing__AsymptoticSeriesFloat(
          v12->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
          (float)this->fields.questInfoFadeFrameNum,
          0LL);
  v17 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v14, v15, v16);
  AlphaTransitionCalculator___ctor(v17, v11, v13, 0LL);
  this->fields.questInfoAlphaCalculator = v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questInfoAlphaCalculator,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  questInfoPanel = this->fields.questInfoAlphaCalculator;
  if ( !questInfoPanel )
LABEL_14:
    sub_1BCAA3C(questInfoPanel, method);
  AlphaTransitionCalculator__MakeFadeInFinished(questInfoPanel, 0LL);
LABEL_9:
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( iconGroupList->fields._size < 1 )
    {
      HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(this, v9);
    }
    else
    {
      this->fields.currentInformationIndex = 0;
      HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v9);
    }
  }
}


UnityEngine_Material_o *__fastcall HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
        HorizontalQuestInformationIconListComponent_o *this,
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
  PartyOrganizationUtility_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  __int64 v16; // x1
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v18; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  __int64 v20; // x1
  Il2CppObject *object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  HorizontalQuestInformationIconListComponent_c *v28; // x0
  UnityEngine_Shader_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  UnityEngine_Material_o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1

  if ( (byte_4B1312A & 1) == 0 )
  {
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v8, v9);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v12, v13);
    byte_4B1312A = 1;
  }
  p_mChocoMaterialSp = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v18 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BCA784(p_mChocoTex, (int64_t)object, v22, v23, v24, v25, v26, v27);
    }
    v28 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo, v20);
      v28 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v29 = UnityEngine_Shader__Find(v28->static_fields->CHOCO_SHADER_SP, 0LL);
    v33 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v30, v31, v32);
    UnityEngine_Material___ctor(v33, v29, 0LL);
    p_mChocoMaterialSp->klass = (PartyOrganizationUtility_c *)v33;
    sub_1BCA784(p_mChocoMaterialSp, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    if ( !p_mChocoMaterialSp->klass )
      sub_1BCAA3C(0LL, v40);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
        HorizontalQuestInformationIconListComponent_o *this,
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
  PartyOrganizationUtility_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  __int64 v16; // x1
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v18; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  __int64 v20; // x1
  Il2CppObject *object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  HorizontalQuestInformationIconListComponent_c *v28; // x0
  UnityEngine_Shader_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  UnityEngine_Material_o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1

  if ( (byte_4B13129 & 1) == 0 )
  {
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v8, v9);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v12, v13);
    byte_4B13129 = 1;
  }
  p_mChocoMaterialTx = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v18 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BCA784(p_mChocoTex, (int64_t)object, v22, v23, v24, v25, v26, v27);
    }
    v28 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo, v20);
      v28 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v29 = UnityEngine_Shader__Find(v28->static_fields->CHOCO_SHADER_TX, 0LL);
    v33 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v30, v31, v32);
    UnityEngine_Material___ctor(v33, v29, 0LL);
    p_mChocoMaterialTx->klass = (PartyOrganizationUtility_c *)v33;
    sub_1BCA784(p_mChocoMaterialTx, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    if ( !p_mChocoMaterialTx->klass )
      sub_1BCAA3C(0LL, v40);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall HorizontalQuestInformationIconListComponent__Setup(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
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
  System_Collections_Generic_List_object__o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  int32_t iconType; // w8
  int64_t Master_object; // x0
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v44; // x4
  const MethodInfo *v45; // x1
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x21
  HorizontalQuestInformationIconListComponent___c_c *v50; // x0
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v52; // x23
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Int32_array *v61; // x0
  const MethodInfo *v62; // x4
  const MethodInfo *v63; // x4
  Il2CppObject *v65; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1311D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestInfoMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ViewEnemyMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v16, v17);
    sub_1BCA7E0(&System_Func_ViewEnemyEntity__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__, v28, v29);
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v30, v31);
    byte_4B1311D = 1;
  }
  entity = 0LL;
  v65 = 0LL;
  this->fields.isNeedInit = 0;
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_QuestInformationListViewItem__o *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  iconType = this->fields.iconType;
  if ( iconType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ViewEnemyMaster___);
    if ( !Master_object )
      goto LABEL_35;
    EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)Master_object, questId, 0LL);
    if ( EntityListFromQuestId )
    {
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
      if ( *(_QWORD *)&EntityListFromQuestId->max_length )
      {
        v50 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo, v39);
          v50 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        }
        _9__18_0 = (System_Func_object__int__o *)v50->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50, v39);
            v50 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
          }
          v52 = (Il2CppObject *)v50->static_fields->__9;
          _9__18_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                     System_Func_ViewEnemyEntity__int__TypeInfo,
                                                     v39,
                                                     v47,
                                                     v48);
          System_Func_object__int____ctor(
            _9__18_0,
            v52,
            Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__,
            0LL);
          static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__18_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
            (int64_t)_9__18_0,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
        }
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v49,
                                                                     (System_Func_TSource__TResult__o *)_9__18_0,
                                                                     (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
        v61 = System_Linq_Enumerable__ToArray_int_(
                v60,
                (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
        HorizontalQuestInformationIconListComponent__CreateEnemyList(this, 0, questId, v61, v62);
        return 1;
      }
    }
  }
  else if ( !iconType )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
    Master_object = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_35;
    Master_object = UserQuestInfoMaster__TryGetEntity(
                      (UserQuestInfoMaster_o *)MasterData_object,
                      &entity,
                      Master_object,
                      questId,
                      0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( entity )
      {
        HorizontalQuestInformationIconListComponent__CreateRewardList(
          this,
          0,
          entity->fields.dropItemIds,
          entity->fields.dropSvtIds,
          v44);
LABEL_29:
        HorizontalQuestInformationIconListComponent__CreateIconGroupList(this, v45);
        return 1;
      }
      goto LABEL_35;
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &v65,
                      questId,
                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( v65 )
      {
        HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
          this,
          0,
          (int32_t)v65[1].monitor,
          HIDWORD(v65[1].klass),
          v63);
        goto LABEL_29;
      }
LABEL_35:
      sub_1BCAA3C(Master_object, v39);
    }
  }
  Master_object = (int64_t)this->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  return 0;
}


void __fastcall HorizontalQuestInformationIconListComponent__SplitItemsWithQP(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *itms,
        System_Int32_array **withoutQP,
        System_Int32_array **qps,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_int__o *v22; // x22
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  ItemMaster_o *v26; // x24
  unsigned __int64 v27; // x25
  int32_t *v28; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  char *v32; // x8
  struct System_Int32_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  char *v39; // x8
  __int64 v40; // x8
  System_Collections_Generic_List_int__o *v41; // x0
  const MethodInfo_3584C38 *v42; // x2
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  System_Int32_array *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Int32_array *v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B13123 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, itms, withoutQP);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B13123 = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    itms,
                                                    withoutQP,
                                                    qps);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v22 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  v25 = *(_QWORD *)&itms->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = (ItemMaster_o *)Instance;
    v27 = 0LL;
    v28 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
LABEL_43:
        sub_1BCAA44(Instance, v24);
      v24 = (unsigned int)v28[v27];
      if ( !(_DWORD)v24 )
        break;
      if ( (_DWORD)v24 == -1 )
      {
        if ( !v22 )
          goto LABEL_42;
        items = v22->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v40 = v30[4];
          v41 = v22;
          goto LABEL_28;
        }
        v32 = (char *)items + 4 * size;
        v22->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v32 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v26 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v26, v24, 0LL);
      if ( v27 >= itms->max_length )
        goto LABEL_43;
      v24 = (unsigned int)v28[v27];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v22 )
          goto LABEL_42;
        v36 = v22->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v22->fields._version;
        if ( !v36 )
          goto LABEL_42;
        v38 = v22->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          v46 = v37[4];
          v41 = v22;
LABEL_36:
          v42 = *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46 + 192) + 112LL);
          goto LABEL_37;
        }
        v39 = (char *)v36 + 4 * v38;
        v22->fields._size = v38 + 1;
      }
      else
      {
        if ( !v18 )
          goto LABEL_42;
        v43 = v18->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !v43 )
          goto LABEL_42;
        v45 = v18->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          v46 = v44[4];
          v41 = v18;
          goto LABEL_36;
        }
        v39 = (char *)v43 + 4 * v45;
        v18->fields._size = v45 + 1;
      }
      *((_DWORD *)v39 + 8) = v24;
LABEL_38:
      LODWORD(v25) = itms->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_39;
    }
    if ( !v18 )
      goto LABEL_42;
    v33 = v18->fields._items;
    v34 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !v33 )
      goto LABEL_42;
    v35 = v18->fields._size;
    if ( (unsigned int)v35 >= v33->max_length )
    {
      v40 = v34[4];
      v41 = v18;
LABEL_28:
      v42 = *(const MethodInfo_3584C38 **)(*(_QWORD *)(v40 + 192) + 112LL);
      LODWORD(v24) = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v41, v24, v42);
      goto LABEL_38;
    }
    v32 = (char *)v33 + 4 * v35;
    v18->fields._size = v35 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v18
    || (v47 = System_Collections_Generic_List_int___ToArray(
                v18,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v47,
        sub_1BCA784((PartyOrganizationUtility_o *)withoutQP, (int64_t)v47, v48, v49, v50, v51, v52, v53),
        !v22) )
  {
LABEL_42:
    sub_1BCAA3C(Instance, v24);
  }
  v54 = System_Collections_Generic_List_int___ToArray(
          v22,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)qps, (int64_t)v54, v55, v56, v57, v58, v59, v60);
}


void __fastcall HorizontalQuestInformationIconListComponent__SplitSvtsWithCombineMaterial(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_int__o *v24; // x22
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x24
  unsigned __int64 v29; // x25
  int32_t *v30; // x28
  int32_t v31; // w2
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  char *v35; // x8
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct System_Int32_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  char *v42; // x8
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  System_Collections_Generic_List_int__o *v47; // x0
  const MethodInfo_3584C38 *v48; // x2
  __int64 v49; // x8
  System_Int32_array *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Int32_array *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B13122 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, svts, withoutCM);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B13122 = 1;
  }
  entity = 0LL;
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    svts,
                                                    withoutCM,
                                                    combineMaterials);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  v27 = *(_QWORD *)&svts->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v29 = 0LL;
    v30 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v29 >= (unsigned int)v27 )
LABEL_46:
        sub_1BCAA44(Instance, v26);
      v31 = v30[v29];
      if ( !v31 )
        break;
      if ( v31 == -1 )
      {
        if ( !v24 )
          goto LABEL_45;
        items = v24->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v46 = v33[4];
          v47 = v24;
LABEL_36:
          v48 = *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46 + 192) + 112LL);
          LODWORD(v26) = 0;
          goto LABEL_40;
        }
        v35 = (char *)items + 4 * size;
        v24->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v35 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v28 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v28,
                                   &entity,
                                   v31,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v29 >= svts->max_length )
          goto LABEL_46;
        if ( !v24 )
          goto LABEL_45;
        v26 = (unsigned int)v30[v29];
        v39 = v24->fields._items;
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !v39 )
          goto LABEL_45;
        v41 = v24->fields._size;
        if ( (unsigned int)v41 >= v39->max_length )
        {
          v49 = v40[4];
          v47 = v24;
LABEL_39:
          v48 = *(const MethodInfo_3584C38 **)(*(_QWORD *)(v49 + 192) + 112LL);
LABEL_40:
          System_Collections_Generic_List_int___AddWithResize(v47, v26, v48);
          goto LABEL_41;
        }
        v42 = (char *)v39 + 4 * v41;
        v24->fields._size = v41 + 1;
      }
      else
      {
LABEL_28:
        if ( v29 >= svts->max_length )
          goto LABEL_46;
        if ( !v20 )
          goto LABEL_45;
        v26 = (unsigned int)v30[v29];
        v43 = v20->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !v43 )
          goto LABEL_45;
        v45 = v20->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          v49 = v44[4];
          v47 = v20;
          goto LABEL_39;
        }
        v42 = (char *)v43 + 4 * v45;
        v20->fields._size = v45 + 1;
      }
      *((_DWORD *)v42 + 8) = v26;
LABEL_41:
      LODWORD(v27) = svts->max_length;
      if ( (__int64)++v29 >= (int)v27 )
        goto LABEL_42;
    }
    if ( !v20 )
      goto LABEL_45;
    v36 = v20->fields._items;
    v37 = Method_System_Collections_Generic_List_int__Add__;
    ++v20->fields._version;
    if ( !v36 )
      goto LABEL_45;
    v38 = v20->fields._size;
    if ( (unsigned int)v38 >= v36->max_length )
    {
      v46 = v37[4];
      v47 = v20;
      goto LABEL_36;
    }
    v35 = (char *)v36 + 4 * v38;
    v20->fields._size = v38 + 1;
    goto LABEL_18;
  }
LABEL_42:
  if ( !v20
    || (v50 = System_Collections_Generic_List_int___ToArray(
                v20,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v50,
        sub_1BCA784((PartyOrganizationUtility_o *)withoutCM, (int64_t)v50, v51, v52, v53, v54, v55, v56),
        !v24) )
  {
LABEL_45:
    sub_1BCAA3C(Instance, v26);
  }
  v57 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v57;
  sub_1BCA784((PartyOrganizationUtility_o *)combineMaterials, (int64_t)v57, v58, v59, v60, v61, v62, v63);
}


void __fastcall HorizontalQuestInformationIconListComponent__Update(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isNeedInit )
  {
    HorizontalQuestInformationIconListComponent__InitQuestInfoLb(this, method);
    this->fields.isNeedInit = 0;
  }
  if ( this->fields.iconGroupList )
    HorizontalQuestInformationIconListComponent__UpdateQuestInfoLb(this, method);
}


void __fastcall HorizontalQuestInformationIconListComponent__UpdateQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
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
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x0
  TransitionCalculator_float__o *questInfoAlphaCalculator; // x0
  AlphaTransitionCalculator_o *Instance; // x0
  const MethodInfo *v15; // x1
  float mstQuestInfoIconUpdateTimer; // s8
  float deltaTime; // s0
  float questInfoChangeInterval; // s1
  float v19; // s0
  int32_t currentInformationIndex; // w20
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *v21; // x8
  struct AlphaTransitionCalculator_o *v22; // x8

  if ( (byte_4B13121 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v8, v9);
    sub_1BCA7E0(&Method_TransitionCalculator_float__get_Current__, v10, v11);
    byte_4B13121 = 1;
  }
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)iconGroupList,
           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____) >= 2 )
    {
      questInfoAlphaCalculator = (TransitionCalculator_float__o *)this->fields.questInfoAlphaCalculator;
      if ( questInfoAlphaCalculator )
      {
        TransitionCalculator_float___Update(
          questInfoAlphaCalculator,
          (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_20;
        if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0LL) )
        {
          mstQuestInfoIconUpdateTimer = this->fields.mstQuestInfoIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0LL);
          questInfoChangeInterval = this->fields.questInfoChangeInterval;
          v19 = mstQuestInfoIconUpdateTimer + deltaTime;
          this->fields.mstQuestInfoIconUpdateTimer = v19;
          if ( v19 >= questInfoChangeInterval )
          {
            Instance = this->fields.questInfoAlphaCalculator;
            this->fields.mstQuestInfoIconUpdateTimer = 0.0;
            if ( !Instance )
              goto LABEL_20;
            AlphaTransitionCalculator__StartFadeOut(Instance, 0LL);
          }
        }
        Instance = this->fields.questInfoAlphaCalculator;
        if ( Instance )
        {
          Instance = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(Instance, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = this->fields.questInfoAlphaCalculator;
            if ( !Instance )
              goto LABEL_20;
            currentInformationIndex = this->fields.currentInformationIndex;
            AlphaTransitionCalculator__StartFadeIn(Instance, 0LL);
            v21 = this->fields.iconGroupList;
            if ( !v21 )
              goto LABEL_20;
            this->fields.currentInformationIndex = (currentInformationIndex + 1) % v21->fields._size;
            HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v15);
          }
          v22 = this->fields.questInfoAlphaCalculator;
          if ( v22 )
          {
            Instance = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
            if ( Instance )
            {
              ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.castClass)(
                Instance,
                Instance->klass[1]._1.declaringType,
                v22->fields._Current_k__BackingField);
              return;
            }
          }
        }
LABEL_20:
        sub_1BCAA3C(Instance, v15);
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B13131 & 1) == 0 )
  {
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v1, v2);
    byte_4B13131 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(HorizontalQuestInformationIconListComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields->__9 = (struct HorizontalQuestInformationIconListComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall HorizontalQuestInformationIconListComponent___c___ctor(
        HorizontalQuestInformationIconListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
__f__AnonymousType4_QuestInformationListViewItem__int__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        QuestInformationListViewItem_o *v,
        int32_t i,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __f__AnonymousType4__v_j__TPar___i_j__TPar__o *v8; // x21

  if ( (byte_4B13132 & 1) == 0 )
  {
    sub_1BCA7E0(&Method___f__AnonymousType4_QuestInformationListViewItem__int___ctor__, v, *(_QWORD *)&i);
    sub_1BCA7E0(&_f__AnonymousType4_QuestInformationListViewItem__int__TypeInfo, v6, v7);
    byte_4B13132 = 1;
  }
  v8 = (__f__AnonymousType4__v_j__TPar___i_j__TPar__o *)sub_1BCAA2C(
                                                          _f__AnonymousType4_QuestInformationListViewItem__int__TypeInfo,
                                                          v,
                                                          *(_QWORD *)&i,
                                                          method);
  _f__AnonymousType4_object__int____ctor(
    v8,
    (Il2CppObject *)v,
    i,
    (const MethodInfo_30E7198 *)Method___f__AnonymousType4_QuestInformationListViewItem__int___ctor__);
  return (__f__AnonymousType4_QuestInformationListViewItem__int__o *)v8;
}


System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_2(
        HorizontalQuestInformationIconListComponent___c_o *this,
        System_Linq_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int___o *g,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  HorizontalQuestInformationIconListComponent___c_c *v11; // x0
  System_Func_object__object__o *_9__19_3; // x20
  Il2CppObject *v13; // x21
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B13133 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem___,
      g,
      method);
    sub_1BCA7E0(
      &System_Func___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo,
      v5,
      v6);
    sub_1BCA7E0(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__, v7, v8);
    sub_1BCA7E0(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v9, v10);
    byte_4B13133 = 1;
  }
  v11 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo, g);
    v11 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_3 = (System_Func_object__object__o *)v11->static_fields->__9__19_3;
  if ( !_9__19_3 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, g);
      v11 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__19_3 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo,
                                                  g,
                                                  method,
                                                  v3);
    System_Func_object__object____ctor(
      _9__19_3,
      v13,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_3 = (struct System_Func___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem__o *)_9__19_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__19_3,
      (int64_t)_9__19_3,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return (System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                                     (System_Func_TSource__TResult__o *)_9__19_3,
                                                                                     (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem___);
}


QuestInformationListViewItem_o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_3(
        HorizontalQuestInformationIconListComponent___c_o *this,
        __f__AnonymousType4_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4B13134 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c_o *)sub_1BCA7E0(
                                                                  &Method___f__AnonymousType4_QuestInformationListViewItem__int__get_v__,
                                                                  x,
                                                                  method);
    byte_4B13134 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return x->fields._v_i__Field;
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c___Setup_b__18_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1BCAA3C(this, 0LL);
  return value->fields.enemyId;
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___CreateIconGroupList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *this,
        __f__AnonymousType4_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B13135 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_1BCA7E0(
                                                                                    &Method___f__AnonymousType4_QuestInformationListViewItem__int__get_i__,
                                                                                    x,
                                                                                    method);
    byte_4B13135 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return x->fields._i_i__Field / v4->fields.chunkSize;
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ChangeViewQuestInfoLb_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *this,
        HorizontalQuestInformationIconDraw_o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *v3; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)x,
                                                                                        0LL),
        (_4__this = v3->fields.__4__this) == 0LL)
    || !this )
  {
    sub_1BCAA3C(this, x);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    v3->fields.index == _4__this->fields.currentInformationIndex,
    0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v3; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x20

  v3 = this;
  if ( (byte_4B13136 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1BCA7E0(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    method,
                                                                                    v2);
    byte_4B13136 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  if ( _4__this->fields.enemyAtlasLoadCallback && _4__this->fields.assetStoragesLoadCallback )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)_4__this, 0LL, 0LL) )
    {
      this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v3->fields.__4__this;
      if ( this )
      {
        HorizontalQuestInformationIconListComponent__CreateEnemyList_34652716(
          (HorizontalQuestInformationIconListComponent_o *)this,
          v3->fields.questId,
          v3->fields.enemies,
          v3->fields.veEnts,
          0LL);
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v3->fields.__4__this;
        if ( this )
        {
          HorizontalQuestInformationIconListComponent__CreateIconGroupList(
            (HorizontalQuestInformationIconListComponent_o *)this,
            0LL);
          return;
        }
      }
LABEL_13:
      sub_1BCAA3C(this, method);
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  Il2CppObject *assetStoragesLoadCallback; // x21
  System_Action_o *v12; // x20
  __int64 v13; // x1

  v4 = this;
  if ( (byte_4B13137 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call__, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1BCA7E0(
                                                                                    &AssetManager_TypeInfo,
                                                                                    v7,
                                                                                    v8);
    byte_4B13137 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  assetStoragesLoadCallback = (Il2CppObject *)_4__this->fields.assetStoragesLoadCallback;
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v12, assetStoragesLoadCallback, Method_ActionExtensions_Call__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
  AssetManager__loadAssetStorage_38512336(loadedAssets, v12, 1, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__2(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call(_4__this->fields.enemyAtlasLoadCallback, 0LL);
}