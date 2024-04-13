void __fastcall CommandAssistLvUpListViewManager___ctor(
        CommandAssistLvUpListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpListViewManager__CreateList(
        CommandAssistLvUpListViewManager_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x25
  EventMissionGroupMaster_o *v89; // x26
  SkillLvMaster_o *v90; // x23
  EventCommandAssistMaster_o *v91; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // x20
  void *ValidEntityList; // x0
  __int64 v94; // x1
  _BOOL8 v95; // x0
  __int64 v96; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *List; // x27
  CommandAssistLvUpListViewManager___c_c *v99; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_1; // x28
  Il2CppObject *v102; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v111; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v112; // x0
  __int64 v113; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x1
  CommandAssistLvUpListViewManager___c_c *v115; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *v116; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x24
  Il2CppObject *v118; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  unsigned int size; // w8
  __int64 v127; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v128; // x21
  SkillLvEntity_o *v129; // x0
  System_String_o *Empty; // x25
  void *v131; // x26
  SkillLvEntity_o *v132; // x0
  System_String_o *beforeDetail; // x28
  int32_t missionTargetId; // w19
  int32_t monitor; // w20
  System_String_o *v136; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_String_o *v138; // x21
  int32_t v139; // w23
  CommandAssistLvUpListViewItem_o *v140; // x26
  const MethodInfo *v141; // [xsp+10h] [xbp-D0h]
  SkillLvMaster_o *v142; // [xsp+20h] [xbp-C0h]
  int32_t missionIdb; // [xsp+34h] [xbp-ACh]
  EventCommandAssistMaster_o *v146; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v148; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v149; // [xsp+50h] [xbp-90h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v151; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42E8B6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_EventCommandAssistEntity___, eventId, missionId, method);
    sub_B5D5C4(&CommandAssistLvUpListViewItem_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillDetailMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v25, v26, v27);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v28, v29, v30);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v37, v38, v39);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__,
      v40,
      v41,
      v42);
    sub_B5D5C4(&Method_System_Func_CommonReleaseEntity__bool___ctor__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Func_EventCommandAssistEntity__bool___ctor__, v46, v47, v48);
    sub_B5D5C4(&System_Func_CommonReleaseEntity__bool__TypeInfo, v49, v50, v51);
    sub_B5D5C4(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v67, v68, v69);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v70, v71, v72);
    sub_B5D5C4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v73, v74, v75);
    sub_B5D5C4(&string_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v79, v80, v81);
    sub_B5D5C4(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v82, v83, v84);
    sub_B5D5C4(&CommandAssistLvUpListViewManager___c_TypeInfo, v85, v86, v87);
    byte_42E8B6F = 1;
  }
  memset(&v151, 0, sizeof(v151));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v89 = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v90 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v91 = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v92,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v91 )
    goto LABEL_54;
  v148 = v92;
  v146 = v91;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(v91, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v149,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ValidEntityList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v151 = v149;
  while ( 1 )
  {
    v95 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v151,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v95 )
      break;
    current = v151.fields.current;
    if ( !v151.fields.current )
      sub_B5D69C(v95, v96);
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(v95, v96);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  HIDWORD(v151.fields.current[3].monitor),
                                                                  0LL);
    v99 = CommandAssistLvUpListViewManager___c_TypeInfo;
    if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v99 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    static_fields = v99->static_fields;
    _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      }
      v102 = (Il2CppObject *)static_fields->__9;
      _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__0_1,
        v102,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
      v103 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      v103->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v103->__9__0_1,
        (System_Int32_array **)_9__0_1,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
    }
    v110 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
             List,
             (System_Func_TSource__bool__o *)_9__0_1,
             (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v111 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                  v110,
                                                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v112 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
             v111,
             (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v112 )
    {
      if ( !v89 )
        sub_B5D69C(v112, v113);
      if ( EventMissionGroupMaster__TryGetEntity(v89, &entity, v112->fields.freeStoneNum, missionId, 0LL) )
      {
        CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(v146, eventId, (int32_t)current[1].klass, -1, 0, 0LL);
        if ( !v92 )
          sub_B5D69C(0LL, CurrentEntity);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v92,
          (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentEntity,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v151,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v115 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v115 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  v116 = v115->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v116->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) != 0 && !v115->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v115);
      v116 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    }
    v118 = (Il2CppObject *)v116->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v118,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_EventCommandAssistEntity__bool___ctor__);
    v119 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v119->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v119->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
  }
  ValidEntityList = (void *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                              (System_Collections_Generic_List_T__o *)v92,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v92 )
      goto LABEL_54;
    missionIdb = v92->fields._size;
    if ( missionIdb >= 1 )
    {
      size = v92->fields._size;
      v127 = 0LL;
      v142 = v90;
      while ( 1 )
      {
        if ( size <= (unsigned int)v127 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v128 = v92->fields._items->m_Items[v127];
        if ( !v128 || !v90 )
          break;
        v129 = SkillLvMaster__GetEntity(v90, HIDWORD(v128[1].monitor), (int32_t)v128[1].klass, 0LL);
        if ( !v129 || (Empty = SkillLvEntity__getDetail_26810736(v129, v129->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(
                            v146,
                            v128->fields.missionTargetId,
                            LODWORD(v128[1].klass) - 1,
                            0LL);
        if ( !ValidEntityList )
          break;
        v131 = ValidEntityList;
        v132 = SkillLvMaster__GetEntity(v90, *((_DWORD *)ValidEntityList + 13), *((_DWORD *)ValidEntityList + 10), 0LL);
        if ( !v132 || (beforeDetail = SkillLvEntity__getDetail_26810736(v132, v132->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        missionTargetId = v128->fields.missionTargetId;
        monitor = (int32_t)v128[1].monitor;
        v136 = *(System_String_o **)&v128->fields.addCount;
        itemList = this->fields.itemList;
        v138 = (System_String_o *)*((_QWORD *)v131 + 4);
        v139 = v148->fields._size;
        v140 = (CommandAssistLvUpListViewItem_o *)sub_B5D694(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v140,
          v127,
          eventId,
          missionTargetId,
          monitor,
          v136,
          Empty,
          v138,
          beforeDetail,
          (_DWORD)v127 == v139 - 1,
          v141);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v140,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v90 = v142;
        v92 = v148;
        if ( (int)v127 + 1 >= missionIdb )
          goto LABEL_51;
        size = v148->fields._size;
        ++v127;
      }
LABEL_54:
      sub_B5D69C(ValidEntityList, v94);
    }
LABEL_51:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
    ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
    ValidEntityList = this->fields.scrollView;
    if ( !ValidEntityList )
      goto LABEL_54;
    UIScrollView__ResetPosition((UIScrollView_o *)ValidEntityList, 0LL);
  }
}


void __fastcall CommandAssistLvUpListViewManager__OnClickListView(
        CommandAssistLvUpListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommandAssistLvUpListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5ED2 & 1) == 0 )
  {
    sub_B5D5C4(&CommandAssistLvUpListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5ED2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall CommandAssistLvUpListViewManager___c___ctor(
        CommandAssistLvUpListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CommandAssistLvUpListViewManager___c___CreateList_b__0_0(
        CommandAssistLvUpListViewManager___c_o *this,
        EventCommandAssistEntity_o *x,
        const MethodInfo *method)
{
  return x == 0LL;
}


bool __fastcall CommandAssistLvUpListViewManager___c___CreateList_b__0_1(
        CommandAssistLvUpListViewManager___c_o *this,
        CommonReleaseEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
  return ent->fields.condType == 177;
}