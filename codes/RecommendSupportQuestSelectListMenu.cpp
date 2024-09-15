void __fastcall RecommendSupportQuestSelectListMenu___ctor(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2A209 & 1) == 0 )
  {
    sub_1B761C0(&BaseMenu_TypeInfo, method);
    byte_4A2A209 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectListMenu__CreateQuestFolder(
        RecommendSupportQuestSelectListMenu_o *this,
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
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  Il2CppObject *Master_object; // x24
  Il2CppObject *v42; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *IsQuestClear_37418488; // x0
  __int64 v44; // x1
  RecommendSupportQuestEntity_array *List; // x24
  System_Collections_Generic_HashSet_int__o *v46; // x26
  int32_t v47; // w2
  int32_t v48; // w3
  System_Collections_Generic_HashSet_int__o **v49; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x25
  unsigned int v53; // w22
  RecommendSupportQuestEntity_o *v54; // x23
  __int64 v55; // x26
  int32_t questId; // w27
  Il2CppObject **v57; // x28
  int32_t v58; // w29
  System_Collections_Generic_HashSet_int__o **v59; // x27
  Il2CppObject *v60; // x20
  WarEntity_o *v61; // x25
  System_String_o *questMessage; // x19
  int32_t questPhase; // w23
  const MethodInfo *v64; // x5
  System_Collections_Generic_IEnumerable_TSource__o *recommendQuestFolderList; // x19
  System_Func_object__bool__o *v66; // x20
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppClass *v70; // x8
  _QWORD *v71; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t v73; // w1
  void **v74; // x8
  ServantStatusBattleListViewItem_o *v75; // x0
  WarEntity_o *v76; // x19
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v77; // x26
  const MethodInfo *v78; // x3
  int32_t v79; // w2
  int32_t v80; // w3
  Il2CppClass *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  void **v84; // x8
  __int64 v85; // x8
  Il2CppObject *v86; // x1
  Il2CppClass *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  void **v90; // x8
  _BOOL8 v91; // x0
  __int64 v92; // x1
  int current; // w23
  Il2CppObject *v94; // x24
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v95; // x22
  const MethodInfo *v96; // x3
  __int64 v97; // x1
  System_Collections_Generic_List_object__o *v98; // x0
  _BOOL8 v99; // x0
  __int64 v100; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  Il2CppObject *v103; // x8
  System_Collections_Generic_List_object__o *subFolder; // x0
  struct System_Object_array *items; // x9
  _QWORD *v106; // x10
  __int64 size; // x11
  Il2CppClass **v108; // x9
  __int64 v109; // x1
  int32_t v110; // w2
  int32_t v111; // w3
  System_Collections_Generic_List_object__o *v112; // x0
  RecommendSupportQuestSelectListMenu___c_c *v113; // x8
  System_Collections_Generic_List_object__o *v114; // x23
  System_Comparison_T__o *_9__7_3; // x24
  Il2CppObject *v116; // x25
  struct RecommendSupportQuestSelectListMenu___c_StaticFields *static_fields; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x8
  System_Collections_Generic_List_object__o *v124; // x21
  System_Predicate_object__o *v125; // x22
  System_Collections_Generic_List_object__o *v126; // x19
  RecommendSupportQuestSelectListMenu___c_c *v127; // x0
  System_Comparison_T__o *_9__7_1; // x20
  Il2CppObject *v129; // x21
  struct RecommendSupportQuestSelectListMenu___c_StaticFields *v130; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  Il2CppObject *v133; // [xsp+8h] [xbp-F8h]
  Il2CppObject *item; // [xsp+10h] [xbp-F0h]
  Il2CppObject *object; // [xsp+18h] [xbp-E8h]
  Il2CppObject *v136; // [xsp+20h] [xbp-E0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v137; // [xsp+28h] [xbp-D8h]
  RecommendSupportQuestSelectListMenu_o *v138; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *v141; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v142; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *v143; // [xsp+90h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4A2A206 & 1) == 0 )
  {
    sub_1B761C0(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo, method);
    sub_1B761C0(&CondType_TypeInfo, v3);
    sub_1B761C0(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMaster_SpotMaster___, v6);
    sub_1B761C0(&Method_DataManager_GetMaster_WarMaster___, v7);
    sub_1B761C0(&DataManager_TypeInfo, v8);
    sub_1B761C0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v9);
    sub_1B761C0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1B761C0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11);
    sub_1B761C0(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v12);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Dispose__,
      v13);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v15);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__MoveNext__,
      v16);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v17);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Current__,
      v18);
    sub_1B761C0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v19);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_int__Add__, v20);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v21);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_int__Remove__, v22);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_int___ctor__, v23);
    sub_1B761C0(&System_Collections_Generic_HashSet_int__TypeInfo, v24);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__,
      v25);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__,
      v26);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__GetEnumerator__,
      v27);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__RemoveAll__,
      v28);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__,
      v29);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__,
      v30);
    sub_1B761C0(&System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo, v31);
    sub_1B761C0(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo, v32);
    sub_1B761C0(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo, v33);
    sub_1B761C0(&Method_RecommendSupportQuestSelectListMenu___c__CreateQuestFolder_b__7_1__, v34);
    sub_1B761C0(&Method_RecommendSupportQuestSelectListMenu___c__CreateQuestFolder_b__7_3__, v35);
    sub_1B761C0(&Method_RecommendSupportQuestSelectListMenu___c__DisplayClass7_0__CreateQuestFolder_b__0__, v36);
    sub_1B761C0(&RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_TypeInfo, v37);
    sub_1B761C0(&Method_RecommendSupportQuestSelectListMenu___c__DisplayClass7_1__CreateQuestFolder_b__2__, v38);
    sub_1B761C0(&RecommendSupportQuestSelectListMenu___c__DisplayClass7_1_TypeInfo, v39);
    sub_1B761C0(&RecommendSupportQuestSelectListMenu___c_TypeInfo, v40);
    byte_4A2A206 = 1;
  }
  v143 = 0LL;
  entity = 0LL;
  memset(&v142, 0, sizeof(v142));
  v141 = 0LL;
  memset(&v140, 0, sizeof(v140));
  object = (Il2CppObject *)sub_1B7640C(RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor(object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v42 = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestMaster___);
  v136 = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_SpotMaster___);
  IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_WarMaster___);
  v137 = IsQuestClear_37418488;
  if ( !Master_object )
    goto LABEL_93;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v46 = (System_Collections_Generic_HashSet_int__o *)sub_1B7640C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v46,
    (const MethodInfo_338FAF8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !object )
    goto LABEL_93;
  object[1].klass = (Il2CppClass *)v46;
  v49 = (System_Collections_Generic_HashSet_int__o **)&object[1];
  v138 = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&object[1], (int32_t)v46, v47, v48);
  if ( !List )
    goto LABEL_93;
  max_length = List->max_length;
  v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)v136;
  v52 = v137;
  if ( max_length >= 1 )
  {
    v53 = 0;
    v133 = v42;
    do
    {
      if ( v53 >= max_length )
        sub_1B76424(IsQuestClear_37418488, v44);
      v54 = List->m_Items[v53];
      v55 = sub_1B7640C(RecommendSupportQuestSelectListMenu___c__DisplayClass7_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v55, 0LL);
      if ( !v54 )
        goto LABEL_93;
      questId = v54->fields.questId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_37418488(
                                                                              questId,
                                                                              -1,
                                                                              0,
                                                                              0LL);
      if ( ((unsigned __int8)IsQuestClear_37418488 & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_93;
        IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v42,
                                                                                &entity,
                                                                                v54->fields.questId,
                                                                                (const MethodInfo_30FF7D4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsQuestClear_37418488 & 1) != 0 )
        {
          if ( !entity || !v51 )
            goto LABEL_93;
          IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                  v51,
                                                                                  &v143,
                                                                                  (int32_t)entity[3].klass,
                                                                                  (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsQuestClear_37418488 & 1) != 0 )
          {
            if ( !v55 || !v143 || !v52 )
              goto LABEL_93;
            v57 = (Il2CppObject **)(v55 + 16);
            IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v52,
                                                                                    (Il2CppObject **)(v55 + 16),
                                                                                    HIDWORD(v143[1].klass),
                                                                                    (const MethodInfo_30FF7D4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsQuestClear_37418488 & 1) != 0 )
            {
              IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)*v57;
              if ( !*v57 )
                goto LABEL_93;
              IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntity__GetPrioredParentId(
                                                                                      (WarEntity_o *)IsQuestClear_37418488,
                                                                                      0LL);
              if ( !*v49 )
                goto LABEL_93;
              v58 = (int)IsQuestClear_37418488;
              v59 = v49;
              System_Collections_Generic_HashSet_int___Add(
                *v49,
                (int32_t)IsQuestClear_37418488,
                (const MethodInfo_3390CFC *)Method_System_Collections_Generic_HashSet_int__Add__);
              v60 = entity;
              v61 = *(WarEntity_o **)(v55 + 16);
              questMessage = v54->fields.questMessage;
              questPhase = v54->fields.questPhase;
              item = (Il2CppObject *)sub_1B7640C(RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
              RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)item,
                (QuestEntity_o *)v60,
                v61,
                questMessage,
                questPhase,
                v64);
              recommendQuestFolderList = (System_Collections_Generic_IEnumerable_TSource__o *)v138->fields.recommendQuestFolderList;
              v66 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v66,
                (Il2CppObject *)v55,
                Method_RecommendSupportQuestSelectListMenu___c__DisplayClass7_1__CreateQuestFolder_b__2__,
                0LL);
              v67 = System_Linq_Enumerable__FirstOrDefault_object__48787792(
                      recommendQuestFolderList,
                      (System_Func_TSource__bool__o *)v66,
                      (const MethodInfo_2E87150 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              if ( v67 )
              {
                IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)v67[2].klass;
                if ( !IsQuestClear_37418488 )
                  goto LABEL_93;
                v70 = *(Il2CppClass **)&IsQuestClear_37418488->fields._MasterKind_k__BackingField;
                v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)v136;
                v52 = v137;
                v42 = v133;
                v71 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
                ++HIDWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField);
                if ( !v70 )
                  goto LABEL_93;
                MasterName_k__BackingField_low = SLODWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField);
                v49 = v59;
                if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v70->_1.namespaze) )
                {
                  v85 = v71[4];
                  v86 = item;
LABEL_44:
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)IsQuestClear_37418488,
                    v86,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v85 + 192) + 112LL));
                  goto LABEL_45;
                }
                v73 = (int)item;
                v74 = &v70->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v74[4] = item;
                v75 = (ServantStatusBattleListViewItem_o *)(v74 + 4);
              }
              else
              {
                v76 = (WarEntity_o *)*v57;
                v77 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)sub_1B7640C(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
                RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(v77, v76, v58, v78);
                if ( !v77 )
                  goto LABEL_93;
                IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)v77->fields.questList;
                v52 = v137;
                if ( !IsQuestClear_37418488 )
                  goto LABEL_93;
                v81 = *(Il2CppClass **)&IsQuestClear_37418488->fields._MasterKind_k__BackingField;
                v42 = v133;
                v82 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
                ++HIDWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField);
                if ( !v81 )
                  goto LABEL_93;
                v83 = SLODWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField);
                v49 = v59;
                if ( (unsigned int)v83 >= LODWORD(v81->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)IsQuestClear_37418488,
                    item,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                }
                else
                {
                  v84 = &v81->_1.image + v83;
                  LODWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField) = v83 + 1;
                  v84[4] = item;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v84 + 4), (int32_t)item, v79, v80);
                }
                IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)v138->fields.recommendQuestFolderList;
                if ( !IsQuestClear_37418488 )
                  goto LABEL_93;
                v87 = *(Il2CppClass **)&IsQuestClear_37418488->fields._MasterKind_k__BackingField;
                v88 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)v136;
                ++HIDWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField);
                if ( !v87 )
                  goto LABEL_93;
                v89 = SLODWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField);
                if ( (unsigned int)v89 >= LODWORD(v87->_1.namespaze) )
                {
                  v85 = v88[4];
                  v86 = (Il2CppObject *)v77;
                  goto LABEL_44;
                }
                v90 = &v87->_1.image + v89;
                LODWORD(IsQuestClear_37418488->fields._MasterName_k__BackingField) = v89 + 1;
                v90[4] = v77;
                v75 = (ServantStatusBattleListViewItem_o *)(v90 + 4);
                v73 = (int)v77;
              }
              sub_1B76164(v75, v73, v68, v69);
            }
          }
        }
      }
LABEL_45:
      max_length = List->max_length;
    }
    while ( (int)++v53 < max_length );
  }
  IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)*v49;
  if ( !*v49 )
    goto LABEL_93;
  System_Collections_Generic_HashSet_int___Remove(
    (System_Collections_Generic_HashSet_int__o *)IsQuestClear_37418488,
    0,
    (const MethodInfo_33903C0 *)Method_System_Collections_Generic_HashSet_int__Remove__);
  IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)*v49;
  if ( !*v49 )
    goto LABEL_93;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v139,
    (System_Collections_Generic_HashSet_int__o *)IsQuestClear_37418488,
    (const MethodInfo_3390680 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v142 = v139;
  while ( 1 )
  {
    v91 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            (System_Collections_Generic_HashSet_Enumerator_T__o *)&v142,
            (const MethodInfo_32525A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v91 )
      break;
    if ( !v52 )
      sub_1B7641C(v91, v92);
    current = (int)v142.fields._current;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v52,
           &v141,
           (int32_t)v142.fields._current,
           (const MethodInfo_30FF7D4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v94 = v141;
      v95 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)sub_1B7640C(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
      RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(v95, (WarEntity_o *)v94, 0, v96);
      v98 = (System_Collections_Generic_List_object__o *)v138->fields.recommendQuestFolderList;
      if ( !v98 )
        sub_1B7641C(0LL, v97);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v139,
        v98,
        (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__GetEnumerator__);
      v140 = v139;
      while ( 1 )
      {
        v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v140,
                (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__MoveNext__);
        if ( !v99 )
          break;
        v103 = v140.fields._current;
        if ( !v140.fields._current )
          sub_1B7641C(v99, v100);
        if ( LODWORD(v140.fields._current[1].monitor) == current )
        {
          if ( !v95 )
            sub_1B7641C(v99, v100);
          subFolder = (System_Collections_Generic_List_object__o *)v95->fields.subFolder;
          if ( !subFolder )
            sub_1B7641C(0LL, v100);
          items = subFolder->fields._items;
          v106 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
          ++subFolder->fields._version;
          if ( !items )
            sub_1B7641C(subFolder, v100);
          size = subFolder->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              subFolder,
              v103,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
          }
          else
          {
            v108 = &items->obj.klass + size;
            subFolder->fields._size = size + 1;
            v108[4] = (Il2CppClass *)v103;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v108 + 4), (int32_t)v103, v101, v102);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v140,
        (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Dispose__);
      v112 = (System_Collections_Generic_List_object__o *)v138->fields.recommendQuestFolderList;
      if ( !v112 )
        sub_1B7641C(0LL, v109);
      v52 = v137;
      if ( v112->fields._size >= 2 )
      {
        if ( !v95 )
          sub_1B7641C(v112, v109);
        v113 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
        v114 = (System_Collections_Generic_List_object__o *)v95->fields.subFolder;
        if ( !RecommendSupportQuestSelectListMenu___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestSelectListMenu___c_TypeInfo);
          v113 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
        }
        _9__7_3 = (System_Comparison_T__o *)v113->static_fields->__9__7_3;
        if ( !_9__7_3 )
        {
          if ( !v113->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v113);
            v113 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
          }
          v116 = (Il2CppObject *)v113->static_fields->__9;
          _9__7_3 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
          System_Comparison_object____ctor(
            _9__7_3,
            v116,
            Method_RecommendSupportQuestSelectListMenu___c__CreateQuestFolder_b__7_3__,
            0LL);
          static_fields = RecommendSupportQuestSelectListMenu___c_TypeInfo->static_fields;
          static_fields->__9__7_3 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__7_3;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_3, (int32_t)_9__7_3, v118, v119);
          v52 = v137;
        }
        if ( !v114 )
          sub_1B7641C(v112, v109);
        System_Collections_Generic_List_object___Sort_55414936(
          v114,
          _9__7_3,
          (const MethodInfo_34D9098 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
        v112 = (System_Collections_Generic_List_object__o *)v138->fields.recommendQuestFolderList;
        if ( !v112 )
          sub_1B7641C(0LL, v109);
      }
      v120 = v112->fields._items;
      v121 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v112->fields._version;
      if ( !v120 )
        sub_1B7641C(v112, v109);
      v122 = v112->fields._size;
      if ( (unsigned int)v122 >= v120->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v112,
          (Il2CppObject *)v95,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
      }
      else
      {
        v123 = &v120->obj.klass + v122;
        v112->fields._size = v122 + 1;
        v123[4] = (Il2CppClass *)v95;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v123 + 4), (int32_t)v95, v110, v111);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v142,
    (const MethodInfo_32525A0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v124 = (System_Collections_Generic_List_object__o *)v138->fields.recommendQuestFolderList;
  v125 = (System_Predicate_object__o *)sub_1B7640C(System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Predicate_object____ctor(
    v125,
    object,
    Method_RecommendSupportQuestSelectListMenu___c__DisplayClass7_0__CreateQuestFolder_b__0__,
    0LL);
  if ( !v124
    || (IsQuestClear_37418488 = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___RemoveAll(
                                                                                v124,
                                                                                (System_Predicate_T__o *)v125,
                                                                                (const MethodInfo_34D8C30 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__RemoveAll__),
        (v126 = (System_Collections_Generic_List_object__o *)v138->fields.recommendQuestFolderList) == 0LL) )
  {
LABEL_93:
    sub_1B7641C(IsQuestClear_37418488, v44);
  }
  if ( v126->fields._size > 1 )
  {
    v127 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
    if ( !RecommendSupportQuestSelectListMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestSelectListMenu___c_TypeInfo);
      v127 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
    }
    _9__7_1 = (System_Comparison_T__o *)v127->static_fields->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !v127->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v127);
        v127 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
      }
      v129 = (Il2CppObject *)v127->static_fields->__9;
      _9__7_1 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
      System_Comparison_object____ctor(
        _9__7_1,
        v129,
        Method_RecommendSupportQuestSelectListMenu___c__CreateQuestFolder_b__7_1__,
        0LL);
      v130 = RecommendSupportQuestSelectListMenu___c_TypeInfo->static_fields;
      v130->__9__7_1 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__7_1;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v130->__9__7_1, (int32_t)_9__7_1, v131, v132);
    }
    System_Collections_Generic_List_object___Sort_55414936(
      v126,
      _9__7_1,
      (const MethodInfo_34D9098 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
  }
}


void __fastcall RecommendSupportQuestSelectListMenu__Init(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4A2A205 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__,
      method);
    sub_1B761C0(
      &System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
      v3);
    byte_4A2A205 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v4;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.recommendQuestFolderList, (int32_t)v4, v5, v6);
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1B7641C(0LL, v7);
  RecommendSupportQuestBoardListViewManager__Init(listViewManager, v7);
  RecommendSupportQuestSelectListMenu__CreateQuestFolder(this, v9);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectListMenu__OnDestroy(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v4; // x8
  ServantStatusBattleListViewItem_o *p_recommendQuestFolderList; // x19
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // t1
  int32_t size; // w2
  int v8; // w9

  if ( (byte_4A2A208 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      method);
    byte_4A2A208 = 1;
  }
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  p_recommendQuestFolderList = (ServantStatusBattleListViewItem_o *)&this->fields.recommendQuestFolderList;
  v4 = recommendQuestFolderList;
  if ( recommendQuestFolderList )
  {
    size = v4->fields._size;
    v8 = v4->fields._version + 1;
    v4->fields._size = 0;
    v4->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v4->fields._items, 0, size, 0LL);
    p_recommendQuestFolderList->klass = 0LL;
    sub_1B76164(p_recommendQuestFolderList, 0, size, v2);
  }
}


void __fastcall RecommendSupportQuestSelectListMenu__Open(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0
  const MethodInfo *v7; // x4
  UILabel_o *explanationLabel; // x20
  System_String_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A2A207 & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, method);
    sub_1B761C0(&LocalizationManager_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1B761C0(&StringLiteral_11021/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, v5);
    byte_4A2A207 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_11;
  RecommendSupportQuestBoardListViewManager__InitOpen(listViewManager, method);
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_11;
  RecommendSupportQuestBoardListViewManager__CreateChapterList(
    listViewManager,
    this->fields.recommendQuestFolderList,
    0,
    0LL,
    v7);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11021/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, 0LL);
  listViewManager = (RecommendSupportQuestBoardListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !listViewManager
    || (v14 = LODWORD(listViewManager->fields.dragParentObject) + 1,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v10, v11, v12),
        listViewManager = (RecommendSupportQuestBoardListViewManager_o *)System_String__Format(v9, v13, 0LL),
        !explanationLabel)
    || (UILabel__set_text(explanationLabel, (System_String_o *)listViewManager, 0LL),
        (listViewManager = (RecommendSupportQuestBoardListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B7641C(listViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall RecommendSupportQuestSelectListMenu__SerializeFieldNotNullCheck(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        WarEntity_o *warEnt,
        int32_t parentId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A2A20A & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__,
      warEnt);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__,
      v7);
    sub_1B761C0(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo, v8);
    sub_1B761C0(
      &System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
      v9);
    byte_4A2A20A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warEntity = warEnt;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)warEnt, v10, v11);
  this->fields.parentWarId = parentId;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.questList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v12;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.questList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  this->fields.subFolder = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v15;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.subFolder, (int32_t)v15, v16, v17);
}


void __fastcall RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *this,
        QuestEntity_o *questEnt,
        WarEntity_o *warEnt,
        System_String_o *questMessage,
        int32_t questPhase,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.questEntity = questEnt;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v10->fields, (int32_t)questEnt, v11, v12);
  v10->fields.warEntity = warEnt;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v10->fields.warEntity, (int32_t)warEnt, v13, v14);
  v10->fields.message = questMessage;
  v10 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)((char *)v10 + 32);
  sub_1B76164((ServantStatusBattleListViewItem_o *)v10, (int32_t)questMessage, v15, v16);
  LODWORD(v10->monitor) = questPhase;
}


void __fastcall RecommendSupportQuestSelectListMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2A20B & 1) == 0 )
  {
    sub_1B761C0(&RecommendSupportQuestSelectListMenu___c_TypeInfo, v1);
    byte_4A2A20B = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(RecommendSupportQuestSelectListMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportQuestSelectListMenu___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestSelectListMenu___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)RecommendSupportQuestSelectListMenu___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall RecommendSupportQuestSelectListMenu___c___ctor(
        RecommendSupportQuestSelectListMenu___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RecommendSupportQuestSelectListMenu___c___CreateQuestFolder_b__7_1(
        RecommendSupportQuestSelectListMenu___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *a,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *b,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct WarEntity_o *v5; // x9

  if ( !b || (warEntity = b->fields.warEntity) == 0LL || !a || (v5 = a->fields.warEntity) == 0LL )
    sub_1B7641C(this, a);
  return warEntity->fields.priority - v5->fields.priority;
}


int32_t __fastcall RecommendSupportQuestSelectListMenu___c___CreateQuestFolder_b__7_3(
        RecommendSupportQuestSelectListMenu___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *a,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *b,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct WarEntity_o *v5; // x9

  if ( !b || (warEntity = b->fields.warEntity) == 0LL || !a || (v5 = a->fields.warEntity) == 0LL )
    sub_1B7641C(this, a);
  return warEntity->fields.priority - v5->fields.priority;
}


void __fastcall RecommendSupportQuestSelectListMenu___c__DisplayClass7_0___ctor(
        RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestSelectListMenu___c__DisplayClass7_0___CreateQuestFolder_b__0(
        RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A2A20C & 1) == 0 )
  {
    this = (RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_o *)sub_1B761C0(
                                                                           &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                                           x);
    byte_4A2A20C = 1;
  }
  if ( !x || (this = (RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_o *)v4->fields.parentWarIds) == 0LL )
    sub_1B7641C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.parentWarId,
           (const MethodInfo_33901EC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall RecommendSupportQuestSelectListMenu___c__DisplayClass7_1___ctor(
        RecommendSupportQuestSelectListMenu___c__DisplayClass7_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestSelectListMenu___c__DisplayClass7_1___CreateQuestFolder_b__2(
        RecommendSupportQuestSelectListMenu___c__DisplayClass7_1_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct WarEntity_o *warEnt; // x9

  if ( !x || (warEntity = x->fields.warEntity) == 0LL || (warEnt = this->fields.warEnt) == 0LL )
    sub_1B7641C(this, x);
  return warEntity->fields.id == warEnt->fields.id;
}