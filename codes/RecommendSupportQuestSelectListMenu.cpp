void __fastcall RecommendSupportQuestSelectListMenu___ctor(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F8746 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F8746 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectListMenu__CreateQuestFolder(
        RecommendSupportQuestSelectListMenu_o *this,
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
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  Il2CppObject *Master_object; // x24
  Il2CppObject *v43; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *IsQuestClear_37285996; // x0
  RecommendSupportQuestEntity_array *List; // x24
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_HashSet_int__o *v48; // x26
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_HashSet_int__o **v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x25
  unsigned int v57; // w22
  RecommendSupportQuestEntity_o *v58; // x23
  __int64 v59; // x26
  int32_t questId; // w27
  Il2CppObject **v61; // x28
  int32_t v62; // w29
  System_Collections_Generic_HashSet_int__o **v63; // x27
  Il2CppObject *v64; // x20
  WarEntity_o *v65; // x25
  System_String_o *questMessage; // x19
  int32_t questPhase; // w23
  __int64 v68; // x1
  __int64 v69; // x2
  const MethodInfo *v70; // x5
  System_Collections_Generic_IEnumerable_TSource__o *recommendQuestFolderList; // x19
  __int64 v72; // x1
  __int64 v73; // x2
  System_Func_object__bool__o *v74; // x20
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  int32_t v78; // w3
  Il2CppClass *v79; // x8
  _QWORD *v80; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t v82; // w1
  void **v83; // x8
  ServantStatusBattleListViewItem_o *v84; // x0
  WarEntity_o *v85; // x19
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v86; // x26
  const MethodInfo *v87; // x3
  int32_t v88; // w2
  int32_t v89; // w3
  Il2CppClass *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  void **v93; // x8
  __int64 v94; // x8
  Il2CppObject *v95; // x1
  Il2CppClass *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  void **v99; // x8
  _BOOL8 v100; // x0
  int current; // w23
  __int64 v102; // x1
  __int64 v103; // x2
  Il2CppObject *v104; // x24
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v105; // x22
  const MethodInfo *v106; // x3
  System_Collections_Generic_List_object__o *v107; // x0
  _BOOL8 v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  Il2CppObject *v111; // x8
  System_Collections_Generic_List_object__o *subFolder; // x0
  struct System_Object_array *items; // x9
  _QWORD *v114; // x10
  __int64 size; // x11
  Il2CppClass **v116; // x9
  __int64 v117; // x1
  __int64 v118; // x2
  int32_t v119; // w3
  System_Collections_Generic_List_object__o *v120; // x0
  RecommendSupportQuestSelectListMenu___c_c *v121; // x8
  System_Collections_Generic_List_object__o *v122; // x23
  System_Comparison_T__o *_9__7_3; // x24
  Il2CppObject *v124; // x25
  struct RecommendSupportQuestSelectListMenu___c_StaticFields *static_fields; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x8
  System_Collections_Generic_List_object__o *v132; // x21
  __int64 v133; // x1
  __int64 v134; // x2
  System_Predicate_object__o *v135; // x22
  __int64 v136; // x1
  __int64 v137; // x2
  System_Collections_Generic_List_object__o *v138; // x19
  RecommendSupportQuestSelectListMenu___c_c *v139; // x0
  System_Comparison_T__o *_9__7_1; // x20
  Il2CppObject *v141; // x21
  struct RecommendSupportQuestSelectListMenu___c_StaticFields *v142; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  Il2CppObject *v145; // [xsp+8h] [xbp-F8h]
  Il2CppObject *item; // [xsp+10h] [xbp-F0h]
  Il2CppObject *object; // [xsp+18h] [xbp-E8h]
  Il2CppObject *v148; // [xsp+20h] [xbp-E0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v149; // [xsp+28h] [xbp-D8h]
  RecommendSupportQuestSelectListMenu_o *v150; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *v153; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v154; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *v155; // [xsp+90h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_49F8743 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo, method);
    sub_1B640C8(&CondType_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_SpotMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Dispose__,
      v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__MoveNext__,
      v17);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v18);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Current__,
      v19);
    sub_1B640C8(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v20);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Remove__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v25);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__,
      v26);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__,
      v27);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__GetEnumerator__,
      v28);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__RemoveAll__,
      v29);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__,
      v30);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__,
      v31);
    sub_1B640C8(&System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo, v32);
    sub_1B640C8(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo, v33);
    sub_1B640C8(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo, v34);
    sub_1B640C8(&Method_RecommendSupportQuestSelectListMenu___c__CreateQuestFolder_b__7_1__, v35);
    sub_1B640C8(&Method_RecommendSupportQuestSelectListMenu___c__CreateQuestFolder_b__7_3__, v36);
    sub_1B640C8(&Method_RecommendSupportQuestSelectListMenu___c__DisplayClass7_0__CreateQuestFolder_b__0__, v37);
    sub_1B640C8(&RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_TypeInfo, v38);
    sub_1B640C8(&Method_RecommendSupportQuestSelectListMenu___c__DisplayClass7_1__CreateQuestFolder_b__2__, v39);
    sub_1B640C8(&RecommendSupportQuestSelectListMenu___c__DisplayClass7_1_TypeInfo, v40);
    sub_1B640C8(&RecommendSupportQuestSelectListMenu___c_TypeInfo, v41);
    byte_49F8743 = 1;
  }
  v155 = 0LL;
  entity = 0LL;
  memset(&v154, 0, sizeof(v154));
  v153 = 0LL;
  memset(&v152, 0, sizeof(v152));
  object = (Il2CppObject *)sub_1B64314(RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_TypeInfo, method, v2);
  System_Object___ctor(object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v43 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  v148 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SpotMaster___);
  IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarMaster___);
  v149 = IsQuestClear_37285996;
  if ( !Master_object )
    goto LABEL_93;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v48 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v46,
                                                       v47);
  System_Collections_Generic_HashSet_int____ctor(
    v48,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !object )
    goto LABEL_93;
  object[1].klass = (Il2CppClass *)v48;
  v51 = (System_Collections_Generic_HashSet_int__o **)&object[1];
  v150 = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&object[1], (int32_t)v48, v49, v50);
  if ( !List )
    goto LABEL_93;
  max_length = List->max_length;
  v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)v148;
  v56 = v149;
  if ( max_length >= 1 )
  {
    v57 = 0;
    v145 = v43;
    do
    {
      if ( v57 >= max_length )
        sub_1B6432C(IsQuestClear_37285996, v52);
      v58 = List->m_Items[v57];
      v59 = sub_1B64314(RecommendSupportQuestSelectListMenu___c__DisplayClass7_1_TypeInfo, v52, v53);
      System_Object___ctor((Il2CppObject *)v59, 0LL);
      if ( !v58 )
        goto LABEL_93;
      questId = v58->fields.questId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_37285996(
                                                                              questId,
                                                                              -1,
                                                                              0,
                                                                              0LL);
      if ( ((unsigned __int8)IsQuestClear_37285996 & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_93;
        IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v43,
                                                                                &entity,
                                                                                v58->fields.questId,
                                                                                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsQuestClear_37285996 & 1) != 0 )
        {
          if ( !entity || !v55 )
            goto LABEL_93;
          IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                  v55,
                                                                                  &v155,
                                                                                  (int32_t)entity[3].klass,
                                                                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsQuestClear_37285996 & 1) != 0 )
          {
            if ( !v59 || !v155 || !v56 )
              goto LABEL_93;
            v61 = (Il2CppObject **)(v59 + 16);
            IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                    v56,
                                                                                    (Il2CppObject **)(v59 + 16),
                                                                                    HIDWORD(v155[1].klass),
                                                                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsQuestClear_37285996 & 1) != 0 )
            {
              IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)*v61;
              if ( !*v61 )
                goto LABEL_93;
              IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntity__GetPrioredParentId(
                                                                                      (WarEntity_o *)IsQuestClear_37285996,
                                                                                      0LL);
              if ( !*v51 )
                goto LABEL_93;
              v62 = (int)IsQuestClear_37285996;
              v63 = v51;
              System_Collections_Generic_HashSet_int___Add(
                *v51,
                (int32_t)IsQuestClear_37285996,
                (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v64 = entity;
              v65 = *(WarEntity_o **)(v59 + 16);
              questMessage = v58->fields.questMessage;
              questPhase = v58->fields.questPhase;
              item = (Il2CppObject *)sub_1B64314(
                                       RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo,
                                       v68,
                                       v69);
              RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)item,
                (QuestEntity_o *)v64,
                v65,
                questMessage,
                questPhase,
                v70);
              recommendQuestFolderList = (System_Collections_Generic_IEnumerable_TSource__o *)v150->fields.recommendQuestFolderList;
              v74 = (System_Func_object__bool__o *)sub_1B64314(
                                                     System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo,
                                                     v72,
                                                     v73);
              System_Func_object__bool____ctor(
                v74,
                (Il2CppObject *)v59,
                Method_RecommendSupportQuestSelectListMenu___c__DisplayClass7_1__CreateQuestFolder_b__2__,
                0LL);
              v75 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                      recommendQuestFolderList,
                      (System_Func_TSource__bool__o *)v74,
                      (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              if ( v75 )
              {
                IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)v75[2].klass;
                if ( !IsQuestClear_37285996 )
                  goto LABEL_93;
                v79 = *(Il2CppClass **)&IsQuestClear_37285996->fields._MasterKind_k__BackingField;
                v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)v148;
                v56 = v149;
                v43 = v145;
                v80 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
                ++HIDWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField);
                if ( !v79 )
                  goto LABEL_93;
                MasterName_k__BackingField_low = SLODWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField);
                v51 = v63;
                if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v79->_1.namespaze) )
                {
                  v94 = v80[4];
                  v95 = item;
LABEL_44:
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)IsQuestClear_37285996,
                    v95,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v94 + 192) + 112LL));
                  goto LABEL_45;
                }
                v82 = (int)item;
                v83 = &v79->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v83[4] = item;
                v84 = (ServantStatusBattleListViewItem_o *)(v83 + 4);
              }
              else
              {
                v85 = (WarEntity_o *)*v61;
                v86 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)sub_1B64314(
                                                                                          RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo,
                                                                                          v76,
                                                                                          v77);
                RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(v86, v85, v62, v87);
                if ( !v86 )
                  goto LABEL_93;
                IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)v86->fields.questList;
                v56 = v149;
                if ( !IsQuestClear_37285996 )
                  goto LABEL_93;
                v90 = *(Il2CppClass **)&IsQuestClear_37285996->fields._MasterKind_k__BackingField;
                v43 = v145;
                v91 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
                ++HIDWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField);
                if ( !v90 )
                  goto LABEL_93;
                v92 = SLODWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField);
                v51 = v63;
                if ( (unsigned int)v92 >= LODWORD(v90->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)IsQuestClear_37285996,
                    item,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
                }
                else
                {
                  v93 = &v90->_1.image + v92;
                  LODWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField) = v92 + 1;
                  v93[4] = item;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v93 + 4), (int32_t)item, v88, v89);
                }
                IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)v150->fields.recommendQuestFolderList;
                if ( !IsQuestClear_37285996 )
                  goto LABEL_93;
                v96 = *(Il2CppClass **)&IsQuestClear_37285996->fields._MasterKind_k__BackingField;
                v97 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)v148;
                ++HIDWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField);
                if ( !v96 )
                  goto LABEL_93;
                v98 = SLODWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField);
                if ( (unsigned int)v98 >= LODWORD(v96->_1.namespaze) )
                {
                  v94 = v97[4];
                  v95 = (Il2CppObject *)v86;
                  goto LABEL_44;
                }
                v99 = &v96->_1.image + v98;
                LODWORD(IsQuestClear_37285996->fields._MasterName_k__BackingField) = v98 + 1;
                v99[4] = v86;
                v84 = (ServantStatusBattleListViewItem_o *)(v99 + 4);
                v82 = (int)v86;
              }
              sub_1B6406C(v84, v82, v77, v78);
            }
          }
        }
      }
LABEL_45:
      max_length = List->max_length;
    }
    while ( (int)++v57 < max_length );
  }
  IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)*v51;
  if ( !*v51 )
    goto LABEL_93;
  System_Collections_Generic_HashSet_int___Remove(
    (System_Collections_Generic_HashSet_int__o *)IsQuestClear_37285996,
    0,
    (const MethodInfo_3364274 *)Method_System_Collections_Generic_HashSet_int__Remove__);
  IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)*v51;
  if ( !*v51 )
    goto LABEL_93;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v151,
    (System_Collections_Generic_HashSet_int__o *)IsQuestClear_37285996,
    (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v154 = v151;
  while ( 1 )
  {
    v100 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
             (System_Collections_Generic_HashSet_Enumerator_T__o *)&v154,
             (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v100 )
      break;
    if ( !v56 )
      sub_1B64324(v100);
    current = (int)v154.fields._current;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v56,
           &v153,
           (int32_t)v154.fields._current,
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v104 = v153;
      v105 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)sub_1B64314(
                                                                                 RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo,
                                                                                 v102,
                                                                                 v103);
      RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(v105, (WarEntity_o *)v104, 0, v106);
      v107 = (System_Collections_Generic_List_object__o *)v150->fields.recommendQuestFolderList;
      if ( !v107 )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v151,
        v107,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__GetEnumerator__);
      v152 = v151;
      while ( 1 )
      {
        v108 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v152,
                 (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__MoveNext__);
        if ( !v108 )
          break;
        v111 = v152.fields._current;
        if ( !v152.fields._current )
          sub_1B64324(v108);
        if ( LODWORD(v152.fields._current[1].monitor) == current )
        {
          if ( !v105 )
            sub_1B64324(v108);
          subFolder = (System_Collections_Generic_List_object__o *)v105->fields.subFolder;
          if ( !subFolder )
            sub_1B64324(0LL);
          items = subFolder->fields._items;
          v114 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
          ++subFolder->fields._version;
          if ( !items )
            sub_1B64324(subFolder);
          size = subFolder->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              subFolder,
              v111,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
          }
          else
          {
            v116 = &items->obj.klass + size;
            subFolder->fields._size = size + 1;
            v116[4] = (Il2CppClass *)v111;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v116 + 4), (int32_t)v111, v109, v110);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v152,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Dispose__);
      v120 = (System_Collections_Generic_List_object__o *)v150->fields.recommendQuestFolderList;
      if ( !v120 )
        sub_1B64324(0LL);
      v56 = v149;
      if ( v120->fields._size >= 2 )
      {
        if ( !v105 )
          sub_1B64324(v120);
        v121 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
        v122 = (System_Collections_Generic_List_object__o *)v105->fields.subFolder;
        if ( !RecommendSupportQuestSelectListMenu___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestSelectListMenu___c_TypeInfo);
          v121 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
        }
        _9__7_3 = (System_Comparison_T__o *)v121->static_fields->__9__7_3;
        if ( !_9__7_3 )
        {
          if ( !v121->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v121);
            v121 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
          }
          v124 = (Il2CppObject *)v121->static_fields->__9;
          _9__7_3 = (System_Comparison_T__o *)sub_1B64314(
                                                System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
                                                v117,
                                                v118);
          System_Comparison_object____ctor(
            _9__7_3,
            v124,
            Method_RecommendSupportQuestSelectListMenu___c__CreateQuestFolder_b__7_3__,
            0LL);
          static_fields = RecommendSupportQuestSelectListMenu___c_TypeInfo->static_fields;
          static_fields->__9__7_3 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__7_3;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_3, (int32_t)_9__7_3, v126, v127);
          v56 = v149;
        }
        if ( !v122 )
          sub_1B64324(v120);
        System_Collections_Generic_List_object___Sort_55243320(
          v122,
          _9__7_3,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
        v120 = (System_Collections_Generic_List_object__o *)v150->fields.recommendQuestFolderList;
        if ( !v120 )
          sub_1B64324(0LL);
      }
      v128 = v120->fields._items;
      v129 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v120->fields._version;
      if ( !v128 )
        sub_1B64324(v120);
      v130 = v120->fields._size;
      if ( (unsigned int)v130 >= v128->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v120,
          (Il2CppObject *)v105,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
      }
      else
      {
        v131 = &v128->obj.klass + v130;
        v120->fields._size = v130 + 1;
        v131[4] = (Il2CppClass *)v105;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v131 + 4), (int32_t)v105, v118, v119);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v154,
    (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v132 = (System_Collections_Generic_List_object__o *)v150->fields.recommendQuestFolderList;
  v135 = (System_Predicate_object__o *)sub_1B64314(
                                         System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
                                         v133,
                                         v134);
  System_Predicate_object____ctor(
    v135,
    object,
    Method_RecommendSupportQuestSelectListMenu___c__DisplayClass7_0__CreateQuestFolder_b__0__,
    0LL);
  if ( !v132
    || (IsQuestClear_37285996 = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___RemoveAll(
                                                                                v132,
                                                                                (System_Predicate_T__o *)v135,
                                                                                (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__RemoveAll__),
        (v138 = (System_Collections_Generic_List_object__o *)v150->fields.recommendQuestFolderList) == 0LL) )
  {
LABEL_93:
    sub_1B64324(IsQuestClear_37285996);
  }
  if ( v138->fields._size > 1 )
  {
    v139 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
    if ( !RecommendSupportQuestSelectListMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestSelectListMenu___c_TypeInfo);
      v139 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
    }
    _9__7_1 = (System_Comparison_T__o *)v139->static_fields->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !v139->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v139);
        v139 = RecommendSupportQuestSelectListMenu___c_TypeInfo;
      }
      v141 = (Il2CppObject *)v139->static_fields->__9;
      _9__7_1 = (System_Comparison_T__o *)sub_1B64314(
                                            System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
                                            v136,
                                            v137);
      System_Comparison_object____ctor(
        _9__7_1,
        v141,
        Method_RecommendSupportQuestSelectListMenu___c__CreateQuestFolder_b__7_1__,
        0LL);
      v142 = RecommendSupportQuestSelectListMenu___c_TypeInfo->static_fields;
      v142->__9__7_1 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__7_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v142->__9__7_1, (int32_t)_9__7_1, v143, v144);
    }
    System_Collections_Generic_List_object___Sort_55243320(
      v138,
      _9__7_1,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
  }
}


void __fastcall RecommendSupportQuestSelectListMenu__Init(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0
  const MethodInfo *v10; // x1

  if ( (byte_49F8742 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__,
      method);
    sub_1B640C8(
      &System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
      v4);
    byte_49F8742 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.recommendQuestFolderList, (int32_t)v5, v6, v7);
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1B64324(0LL);
  RecommendSupportQuestBoardListViewManager__Init(listViewManager, v8);
  RecommendSupportQuestSelectListMenu__CreateQuestFolder(this, v10);
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

  if ( (byte_49F8745 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      method);
    byte_49F8745 = 1;
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
    sub_1B6406C(p_recommendQuestFolderList, 0, size, v2);
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
  Il2CppObject *v10; // x0
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F8744 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_10971/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, v5);
    byte_49F8744 = 1;
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, 0LL);
  listViewManager = (RecommendSupportQuestBoardListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !listViewManager
    || (v11 = LODWORD(listViewManager->fields.dragParentObject) + 1,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11),
        listViewManager = (RecommendSupportQuestBoardListViewManager_o *)System_String__Format(v9, v10, 0LL),
        !explanationLabel)
    || (UILabel__set_text(explanationLabel, (System_String_o *)listViewManager, 0LL),
        (listViewManager = (RecommendSupportQuestBoardListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B64324(listViewManager);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49F8747 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__,
      warEnt);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__,
      v7);
    sub_1B640C8(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo, v8);
    sub_1B640C8(
      &System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
      v9);
    byte_49F8747 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warEntity = warEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)warEnt, v10, v11);
  this->fields.parentWarId = parentId;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.questList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questList, (int32_t)v14, v15, v16);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  this->fields.subFolder = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.subFolder, (int32_t)v19, v20, v21);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields, (int32_t)questEnt, v11, v12);
  v10->fields.warEntity = warEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.warEntity, (int32_t)warEnt, v13, v14);
  v10->fields.message = questMessage;
  v10 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)((char *)v10 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v10, (int32_t)questMessage, v15, v16);
  LODWORD(v10->monitor) = questPhase;
}


void __fastcall RecommendSupportQuestSelectListMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8748 & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportQuestSelectListMenu___c_TypeInfo, v1);
    byte_49F8748 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecommendSupportQuestSelectListMenu___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecommendSupportQuestSelectListMenu___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestSelectListMenu___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecommendSupportQuestSelectListMenu___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49F8749 & 1) == 0 )
  {
    this = (RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_o *)sub_1B640C8(
                                                                           &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                                           x);
    byte_49F8749 = 1;
  }
  if ( !x || (this = (RecommendSupportQuestSelectListMenu___c__DisplayClass7_0_o *)v4->fields.parentWarIds) == 0LL )
    sub_1B64324(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.parentWarId,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1B64324(this);
  return warEntity->fields.id == warEnt->fields.id;
}