void __fastcall EventRankingListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EventRankingListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4B1A319 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewManager_TypeInfo, v1, v2);
    byte_4B1A319 = 1;
  }
  static_fields = EventRankingListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x404000003F000000LL;
  static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall EventRankingListViewManager___ctor(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CloseItemDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1A315 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRankingListViewManager_CloseItemDetail__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B1A315 = 1;
  }
  v5 = Method_EventRankingListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_EventRankingListViewManager_CloseItemDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1A316 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1A316 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CreateList(
        EventRankingListViewManager_o *this,
        int32_t eventId,
        int32_t round,
        int32_t mostSupportGroupId,
        System_Int64_array *userSupportPoints,
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
  int64_t Instance; // x0
  __int64 v47; // x1
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // x0
  EventPointGroupEntity_array *EntityList; // x27
  EventRaceMaster_o *v50; // x26
  EventRaceEntity_o *Entity; // x28
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *v55; // x24
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_object__o *v59; // x25
  signed int v60; // w20
  signed int i; // w29
  __int64 v62; // x2
  __int64 v63; // x3
  il2cpp_array_size_t v64; // w20
  int64_t v65; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Int32_array *giftIds; // x8
  Il2CppClass **v73; // x21
  Il2CppClass *v74; // x8
  char *v75; // x21
  Il2CppClass *v76; // t1
  int64_t namespaze; // x1
  __int64 v78; // x8
  int32_t v79; // w3
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v81; // x8
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  float GoalRate; // s0
  __int64 v89; // x8
  __int64 v90; // x9
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 size; // x10
  __int64 v98; // x8
  System_Collections_Generic_List_object__o *v99; // x0
  System_Comparison_T__o *v100; // x19
  EventRankingListViewManager___c_c *v101; // x0
  System_Comparison_T__o *_9__19_0; // x19
  Il2CppObject *v103; // x21
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int32_t v111; // w19
  Il2CppObject *Item; // x25
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  EventRankingListViewItem_o *v116; // x22
  const MethodInfo *v117; // x6
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x8
  char v128; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v129; // [xsp+10h] [xbp-90h]
  EventRaceResultMaster_o *MasterData_object; // [xsp+18h] [xbp-88h]
  signed int v131; // [xsp+20h] [xbp-80h]
  TotalEventRaceEntity_array *v133; // [xsp+28h] [xbp-78h]
  int max_length; // [xsp+38h] [xbp-68h]

  if ( (byte_4B1A30D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventRankingRoundItemInfo__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&round);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventScriptMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, v16, v17);
    sub_1BCA7E0(&EventRankingListViewItem_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_EventRankingListViewManager_GoalTimeSort__, v20, v21);
    sub_1BCA7E0(&EventRankingRoundItemInfo_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&Method_EventRankingListViewManager___c__CreateList_b__19_0__, v42, v43);
    sub_1BCA7E0(&EventRankingListViewManager___c_TypeInfo, v44, v45);
    byte_4B1A30D = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_77;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0LL);
  if ( TargetTermRaceEntityList )
  {
    v133 = TargetTermRaceEntityList;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_77;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v129 = (Il2CppObject *)this;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_77;
    v50 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    MasterData_object = (EventRaceResultMaster_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    max_length = v133->max_length;
    v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo,
                                                         v52,
                                                         v53,
                                                         v54);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v59 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo,
                                                         v56,
                                                         v57,
                                                         v58);
    System_Collections_Generic_List_object____ctor(
      v59,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_77;
    v60 = userSupportPoints->max_length;
    if ( v60 < 1 )
    {
      i = 0;
    }
    else
    {
      for ( i = 0; i != v60; ++i )
      {
        if ( v60 == i )
LABEL_78:
          sub_1BCAA44(Instance, v47);
        if ( userSupportPoints->m_Items[i] > 0 )
          break;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v131 = v60;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventScriptMaster___);
    if ( !Instance )
      goto LABEL_77;
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0LL);
    v128 = Instance;
    if ( max_length >= 1 )
    {
      v64 = 0;
      do
      {
        v65 = sub_1BCAA2C(EventRankingRoundItemInfo_TypeInfo, v47, v62, v63);
        System_Object___ctor((Il2CppObject *)v65, 0LL);
        if ( !v65 )
          goto LABEL_77;
        *(_DWORD *)(v65 + 16) = eventId;
        if ( !Entity )
          goto LABEL_77;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_77;
        if ( v64 >= giftIds->max_length )
          goto LABEL_78;
        *(_DWORD *)(v65 + 20) = giftIds->m_Items[v64 + 1];
        if ( !EntityList )
          goto LABEL_77;
        if ( v64 >= EntityList->max_length )
          goto LABEL_78;
        v73 = &EntityList->obj.klass + (int)v64;
        v76 = v73[4];
        v75 = (char *)(v73 + 4);
        v74 = v76;
        if ( !v76 )
          goto LABEL_77;
        namespaze = (int64_t)v74->_1.namespaze;
        *(_QWORD *)(v65 + 24) = namespaze;
        sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 24), namespaze, v66, v67, v68, v69, v70, v71);
        if ( v64 >= EntityList->max_length )
          goto LABEL_78;
        v78 = *(_QWORD *)v75;
        if ( !*(_QWORD *)v75 )
          goto LABEL_77;
        v79 = *(_DWORD *)(v78 + 20);
        *(_DWORD *)(v65 + 32) = v79;
        *(_DWORD *)(v65 + 36) = *(_DWORD *)(v78 + 32);
        if ( v64 >= userSupportPoints->max_length )
          goto LABEL_78;
        *(_QWORD *)(v65 + 40) = userSupportPoints->m_Items[v64];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_77;
        if ( v64 >= goalPoints->max_length )
          goto LABEL_78;
        *(_QWORD *)(v65 + 48) = goalPoints->m_Items[v64];
        if ( v64 >= v133->max_length )
          goto LABEL_78;
        v81 = v133->m_Items[v64];
        if ( !v81 )
          goto LABEL_77;
        Instance = (int64_t)MasterData_object;
        *(_QWORD *)(v65 + 56) = v81->fields.totalPoint;
        *(_DWORD *)(v65 + 72) = mostSupportGroupId;
        if ( !MasterData_object )
          goto LABEL_77;
        Instance = EventRaceResultMaster__GetTargetGoalTime(MasterData_object, eventId, round, v79, 0LL);
        *(_QWORD *)(v65 + 64) = Instance;
        if ( v64 >= EntityList->max_length )
          goto LABEL_78;
        if ( !*(_QWORD *)v75 )
          goto LABEL_77;
        GoalRate = EventRaceMaster__GetGoalRate(v50, eventId, round, *(_DWORD *)(*(_QWORD *)v75 + 20LL), 0LL);
        v89 = *(_QWORD *)(v65 + 48);
        v90 = *(_QWORD *)(v65 + 56);
        *(float *)(v65 + 76) = GoalRate;
        if ( v89 <= v90 )
        {
          if ( !v55 )
            goto LABEL_77;
          items = v55->fields._items;
          v96 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v55->fields._version;
          if ( !items )
            goto LABEL_77;
          size = v55->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v98 = v96[4];
            v99 = v55;
            goto LABEL_53;
          }
          v94 = &items->obj.klass + size;
          v55->fields._size = size + 1;
        }
        else
        {
          if ( !v59 )
            goto LABEL_77;
          v91 = v59->fields._items;
          v92 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v59->fields._version;
          if ( !v91 )
            goto LABEL_77;
          v93 = v59->fields._size;
          if ( (unsigned int)v93 >= v91->max_length )
          {
            v98 = v92[4];
            v99 = v59;
LABEL_53:
            System_Collections_Generic_List_object___AddWithResize(
              v99,
              (Il2CppObject *)v65,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98 + 192) + 112LL));
            continue;
          }
          v94 = &v91->obj.klass + v93;
          v59->fields._size = v93 + 1;
        }
        v94[4] = (Il2CppClass *)v65;
        sub_1BCA784((PartyOrganizationUtility_o *)(v94 + 4), v65, v82, v83, v84, v85, v86, v87);
      }
      while ( max_length != ++v64 );
    }
    if ( v55 && v55->fields._size >= 2 )
    {
      v100 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventRankingRoundItemInfo__TypeInfo, v47, v62, v63);
      System_Comparison_object____ctor(v100, v129, Method_EventRankingListViewManager_GoalTimeSort__, 0LL);
      System_Collections_Generic_List_object___Sort_56244000(
        v55,
        v100,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( v59 && v59->fields._size >= 2 )
    {
      v101 = EventRankingListViewManager___c_TypeInfo;
      if ( !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo, v47);
        v101 = EventRankingListViewManager___c_TypeInfo;
      }
      _9__19_0 = (System_Comparison_T__o *)v101->static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( !v101->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v101, v47);
          v101 = EventRankingListViewManager___c_TypeInfo;
        }
        v103 = (Il2CppObject *)v101->static_fields->__9;
        _9__19_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                               System_Comparison_EventRankingRoundItemInfo__TypeInfo,
                                               v47,
                                               v62,
                                               v63);
        System_Comparison_object____ctor(
          _9__19_0,
          v103,
          Method_EventRankingListViewManager___c__CreateList_b__19_0__,
          0LL);
        static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__19_0,
          (int64_t)_9__19_0,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
      }
      System_Collections_Generic_List_object___Sort_56244000(
        v59,
        _9__19_0,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( !v55 )
LABEL_77:
      sub_1BCAA3C(Instance, v47);
    System_Collections_Generic_List_object___AddRange(
      v55,
      (System_Collections_Generic_IEnumerable_T__o *)v59,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( max_length >= 1 )
    {
      v111 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v55,
                 v111++,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
        v116 = (EventRankingListViewItem_o *)sub_1BCAA2C(EventRankingListViewItem_TypeInfo, v113, v114, v115);
        EventRankingListViewItem___ctor(
          v116,
          (EventRankingRoundItemInfo_o *)Item,
          v111,
          i < v131,
          v128 & 1,
          round,
          v117);
        Instance = (int64_t)v129[12].klass;
        if ( !Instance )
          goto LABEL_77;
        v124 = *(_QWORD *)(Instance + 16);
        v125 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v124 )
          goto LABEL_77;
        v126 = *(int *)(Instance + 24);
        if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v116,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
        }
        else
        {
          v127 = v124 + 8 * v126;
          *(_DWORD *)(Instance + 24) = v126 + 1;
          *(_QWORD *)(v127 + 32) = v116;
          sub_1BCA784((PartyOrganizationUtility_o *)(v127 + 32), (int64_t)v116, v118, v119, v120, v121, v122, v123);
        }
      }
      while ( max_length != v111 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v129, -1, 0, -1, 0LL);
  }
}


int32_t __fastcall EventRankingListViewManager__GetAlphaAnimCnt(
        EventRankingListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


// local variable allocation has failed, the output may be wrong!
EventRankingListViewItem_o *__fastcall EventRankingListViewManager__GetItem(
        EventRankingListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  EventRankingListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A30E & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B1A30E = 1;
  }
  result = (EventRankingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRankingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventRankingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventRankingListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewItem_TypeInfo )
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


int32_t __fastcall EventRankingListViewManager__GoalTimeSort(
        EventRankingListViewManager_o *this,
        EventRankingRoundItemInfo_o *x,
        EventRankingRoundItemInfo_o *y,
        const MethodInfo *method)
{
  int64_t goalTime; // x8
  int64_t v5; // x9

  if ( !x || !y )
    sub_1BCAA3C(this, x);
  goalTime = x->fields.goalTime;
  v5 = y->fields.goalTime;
  if ( goalTime > v5 )
    return 1;
  if ( goalTime < v5 )
    return -1;
  return x->fields.groupId - y->fields.groupId;
}


void __fastcall EventRankingListViewManager__OnChangeAlphaAnim(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  int size; // w21
  int32_t v9; // w20

  if ( (byte_4B1A318 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v4, v5);
    byte_4B1A318 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventRankingListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventRankingListViewManager__get_ObjectList(this, v7);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v7);
      if ( size == ++v9 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v7);
  }
}


void __fastcall EventRankingListViewManager__OnClickListView(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  DataManager_o *Item; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x9
  struct System_Exception_o *writeMasterDataThreadException; // x8
  unsigned int message; // w9
  int v30; // w10
  GiftEntity_o *data; // x20
  int32_t type; // w8
  Il2CppObject *Entity; // x20
  Il2CppObject *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v38; // x22
  Il2CppObject *Instance; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  ServantStatusDialog_EndDelegate_o *v43; // x22

  if ( (byte_4B1A314 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventRankingListViewManager_CloseItemDetail__, v11, v12);
    sub_1BCA7E0(&Method_EventRankingListViewManager_CloseSvtDetail__, v13, v14);
    sub_1BCA7E0(&Method_EventRankingListViewManager_OnClickListView__, v15, v16);
    sub_1BCA7E0(&EventRankingListViewObject_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B1A314 = 1;
  }
  v23 = Method_EventRankingListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BCA7F8(Method_EventRankingListViewManager_OnClickListView__);
  v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
  if ( !obj )
    goto LABEL_24;
  methodPtr_low = LOBYTE(EventRankingListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_1BCACFC(obj);
    goto LABEL_26;
  }
  Item = (DataManager_o *)EventRankingListViewObject__GetItem(
                            (EventRankingListViewObject_o *)obj,
                            (const MethodInfo *)EventRankingListViewObject_TypeInfo);
  if ( !Item )
    goto LABEL_24;
  writeMasterDataThreadException = Item->fields.writeMasterDataThreadException;
  if ( !writeMasterDataThreadException )
    goto LABEL_24;
  message = (unsigned int)writeMasterDataThreadException->fields._message;
  if ( message != 1 )
  {
    v30 = this->fields.alphaAnimCnt % (int)message;
    if ( v30 < message )
    {
      writeMasterDataThreadException = (struct System_Exception_o *)((char *)writeMasterDataThreadException + 8 * v30);
      goto LABEL_13;
    }
LABEL_26:
    sub_1BCAA44(Item, v26);
  }
LABEL_13:
  data = (GiftEntity_o *)writeMasterDataThreadException->fields._data;
  if ( !data )
    goto LABEL_24;
  type = data->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v43 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v40, v41, v42);
    ServantStatusDialog_EndDelegate___ctor(
      v43,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0LL);
    if ( !Instance )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_30780220((CommonUI_o *)Instance, 7, data, v43, 0LL);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_object_(
                                Item,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                   data->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v38 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v35,
                                                          v36,
                                                          v37);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v38,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRankingListViewManager_CloseItemDetail__,
          0LL);
        if ( v34 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v34, (ItemEntity_o *)Entity, v38, 50, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(Item, v26);
  }
}


void __fastcall EventRankingListViewManager__OnMoveEnd(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B1A313 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A313 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_20;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
          gameObject,
          1LL,
          gameObject->klass[1]._1.declaringType);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_18;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_18:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1BCAA3C(gameObject, v8);
    }
  }
}


void __fastcall EventRankingListViewManager__RequestInto(EventRankingListViewManager_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w24
  System_Collections_Generic_List_object__o *v16; // x20
  int v17; // w25
  int32_t i; // w21
  Il2CppObject *Item; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x3

  if ( (byte_4B1A312 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventRankingListViewManager_OnMoveEnd__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v10, v11);
    byte_4B1A312 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v12);
  if ( !ObjectList )
LABEL_13:
    sub_1BCAA3C(ObjectList, v14);
  size = ObjectList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v17 = 0;
  for ( i = 0; i != size; ++i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v16,
             i,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v17;
      EventRankingListViewObject__Init_46692280(
        (EventRankingListViewObject_o *)Item,
        4,
        v23,
        this->fields.listInDelay,
        v24);
    }
    else
    {
      --this->fields.callbackCount;
    }
  }
  if ( !v17 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__RequestListObject(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
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
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  Il2CppObject *Item; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3

  if ( (byte_4B1A311 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_EventRankingListViewManager_OnMoveEnd__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v11, v12);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v13, v14);
    byte_4B1A311 = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventRankingListViewObject__Init_46691760((EventRankingListViewObject_o *)Item, mode, v24, v25);
      if ( size == ++v19 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v16);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventRankingListViewManager__ResetAlphaAnimTime(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.alphaAnimNow = _D0;
  this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
}


void __fastcall EventRankingListViewManager__SetMode(
        EventRankingListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventRankingListViewManager__SetMode_46691036(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__SetMode_46691036(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x2
  int32_t v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B1A310 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&StringLiteral_11448/*"RequestInto"*/, v5, v6);
    byte_4B1A310 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
          sub_1BCAA3C(gameObject, v11);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11448/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v8 = 3;
      goto LABEL_15;
    case 2:
      v8 = 2;
LABEL_15:
      EventRankingListViewManager__RequestListObject(this, v8, 0.0, v7);
      break;
  }
}


void __fastcall EventRankingListViewManager__SetMode_46691340(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  EventRankingListViewManager__SetMode_46691036(this, mode, v11);
}


void __fastcall EventRankingListViewManager__SetObjectItem(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventRankingListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B1A30F & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_1BCA7E0(&EventRankingListViewObject_TypeInfo, obj, item);
    byte_4B1A30F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventRankingListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  EventRankingListViewObject__Init_46690908((EventRankingListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall EventRankingListViewManager__Update(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  EventRankingListViewManager__UpdateAnim(this, v3);
}


void __fastcall EventRankingListViewManager__UpdateAnim(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventRankingListViewManager_c *v4; // x0
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  const MethodInfo *v7; // x1
  float realtimeSinceStartup; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v10; // w21
  EventRankingListViewManager_c *v11; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v13; // w21

  if ( (byte_4B1A317 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewManager_TypeInfo, method, v2);
    byte_4B1A317 = 1;
  }
  v4 = EventRankingListViewManager_TypeInfo;
  alphaAnimNow = this->fields.alphaAnimNow;
  alphaAnimTgt = this->fields.alphaAnimTgt;
  if ( !EventRankingListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo, method);
    v4 = EventRankingListViewManager_TypeInfo;
  }
  this->fields.alphaAnimNow = alphaAnimNow
                            + (float)((float)(alphaAnimTgt - alphaAnimNow) * v4->static_fields->ALPHA_ANIMATION_SPD);
  if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.alphaAnimTimeOld) >= EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL )
  {
    this->fields.alphaAnimTgt = 0.0;
    this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  }
  if ( this->fields.alphaAnimTgt <= 0.0 && this->fields.alphaAnimNow <= 0.01 )
  {
    *(_QWORD *)&this->fields.alphaAnimNow = 0x3F80000000000000LL;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimCnt = this->fields.alphaAnimCnt;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    v10 = alphaAnimCnt + 1;
    this->fields.alphaAnimCnt = alphaAnimCnt + 1;
    v11 = EventRankingListViewManager_TypeInfo;
    if ( !EventRankingListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo, v7);
      v11 = EventRankingListViewManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v11->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v10 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v13 = this->fields.alphaAnimCnt;
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11, v7);
        ALPHA_ANIM_COUNT_RESET_VAL = EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.alphaAnimCnt = v13 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    EventRankingListViewManager__OnChangeAlphaAnim(this, v7);
  }
}


void __fastcall EventRankingListViewManager__add_callbackFunc2(
        EventRankingListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventRankingListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1A309 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A309 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  EventRankingListViewManager__remove_callbackFunc2(v10, v11, v12);
}


float __fastcall EventRankingListViewManager__get_AlphaAnimNow(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ClippingObjectList(
        EventRankingListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4B1A30C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1A30C = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRankingListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !objectList )
          break;
        v24 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)EventRankingListViewObject__GetItem(
                                                                    (EventRankingListViewObject_o *)objectList,
                                                                    v18);
        if ( !objectList )
          break;
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v32 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          v33 = v17->fields._size;
          if ( (unsigned int)v33 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v24,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + v33;
            v17->fields._size = v33 + 1;
            v34[4] = (Il2CppClass *)v24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v24, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      if ( size == ++v21 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v17;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v17;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  int64_t objectList; // x0
  int v20; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0

  if ( (byte_4B1A30B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1A30B = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRankingListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = (int64_t)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  v20 = *(_DWORD *)(objectList + 24);
  if ( v20 >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      objectList = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Item,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v31 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        v33 = objectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v17;
      objectList = (int64_t)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v17;
}


void __fastcall EventRankingListViewManager__remove_callbackFunc2(
        EventRankingListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventRankingListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B1A30A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A30A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void __fastcall EventRankingListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1A31A & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewManager___c_TypeInfo, v1, v2);
    byte_4B1A31A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventRankingListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventRankingListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRankingListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRankingListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventRankingListViewManager___c___ctor(
        EventRankingListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRankingListViewManager___c___CreateList_b__19_0(
        EventRankingListViewManager___c_o *this,
        EventRankingRoundItemInfo_o *a,
        EventRankingRoundItemInfo_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return System_Single__CompareTo_63288996(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}