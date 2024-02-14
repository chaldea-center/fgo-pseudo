void __fastcall CommandAssistLvUpListViewManager___ctor(
        CommandAssistLvUpListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandAssistLvUpListViewManager__CreateList(
        CommandAssistLvUpListViewManager_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
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
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x25
  EventMissionGroupMaster_o *v33; // x26
  SkillLvMaster_o *v34; // x23
  EventCommandAssistMaster_o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  void *ValidEntityList; // x0
  _BOOL8 v40; // x0
  Il2CppObject *current; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_IEnumerable_TSource__o *List; // x27
  CommandAssistLvUpListViewManager___c_c *v45; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_1; // x28
  Il2CppObject *v48; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v58; // x0
  EventCommandAssistEntity_o *CurrentEntity; // x1
  __int64 v60; // x1
  __int64 v61; // x2
  CommandAssistLvUpListViewManager___c_c *v62; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *v63; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x24
  Il2CppObject *v65; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  unsigned int size; // w8
  __int64 v74; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v75; // x21
  SkillLvEntity_o *v76; // x0
  System_String_o *Empty; // x25
  void *v78; // x26
  SkillLvEntity_o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  System_String_o *beforeDetail; // x28
  int32_t missionTargetId; // w19
  int32_t monitor; // w20
  System_String_o *v85; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_String_o *v87; // x21
  int32_t v88; // w23
  CommandAssistLvUpListViewItem_o *v89; // x26
  const MethodInfo *v90; // [xsp+10h] [xbp-D0h]
  SkillLvMaster_o *v91; // [xsp+20h] [xbp-C0h]
  int32_t missionIdb; // [xsp+34h] [xbp-ACh]
  EventCommandAssistMaster_o *v95; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v97; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+50h] [xbp-90h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v100; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42147C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B0D8A4(&CommandAssistLvUpListViewItem_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillDetailMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__, v16);
    sub_B0D8A4(&Method_System_Func_CommonReleaseEntity__bool___ctor__, v17);
    sub_B0D8A4(&Method_System_Func_EventCommandAssistEntity__bool___ctor__, v18);
    sub_B0D8A4(&System_Func_CommonReleaseEntity__bool__TypeInfo, v19);
    sub_B0D8A4(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v26);
    sub_B0D8A4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v27);
    sub_B0D8A4(&string_TypeInfo, v28);
    sub_B0D8A4(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v29);
    sub_B0D8A4(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v30);
    sub_B0D8A4(&CommandAssistLvUpListViewManager___c_TypeInfo, v31);
    byte_42147C6 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v33 = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v34 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v35 = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v35 )
    goto LABEL_54;
  v97 = v38;
  v95 = v35;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(v35, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v98,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ValidEntityList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v100 = v98;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v100,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v40 )
      break;
    current = v100.fields.current;
    if ( !v100.fields.current )
      sub_B0D97C(v40);
    if ( !Master_WarQuestSelectionMaster )
      sub_B0D97C(v40);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  HIDWORD(v100.fields.current[3].monitor),
                                                                  0LL);
    v45 = CommandAssistLvUpListViewManager___c_TypeInfo;
    if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v45 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    static_fields = v45->static_fields;
    _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)static_fields->__9;
      _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_CommonReleaseEntity__bool__TypeInfo,
                                                                                     v42,
                                                                                     v43);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__0_1,
        v48,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        (const MethodInfo_26189B8 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
      v49 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      v49->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v49->__9__0_1,
        (System_Int32_array **)_9__0_1,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v56 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            List,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v56,
                                                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v58 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
            v57,
            (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v58 )
    {
      if ( !v33 )
        sub_B0D97C(v58);
      if ( EventMissionGroupMaster__TryGetEntity(v33, &entity, v58->fields.freeStoneNum, missionId, 0LL) )
      {
        CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(v95, eventId, (int32_t)current[1].klass, -1, 0, 0LL);
        if ( !v38 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v38,
          (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentEntity,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v100,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v62 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v62 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  v63 = v62->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v63->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v63 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_EventCommandAssistEntity__bool__TypeInfo,
                                                                                   v60,
                                                                                   v61);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v65,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_EventCommandAssistEntity__bool___ctor__);
    v66 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v66->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v66->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  ValidEntityList = (void *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                              (System_Collections_Generic_List_T__o *)v38,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_1707138 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v38 )
      goto LABEL_54;
    missionIdb = v38->fields._size;
    if ( missionIdb >= 1 )
    {
      size = v38->fields._size;
      v74 = 0LL;
      v91 = v34;
      while ( 1 )
      {
        if ( size <= (unsigned int)v74 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v75 = v38->fields._items->m_Items[v74];
        if ( !v75 || !v34 )
          break;
        v76 = SkillLvMaster__GetEntity(v34, HIDWORD(v75[1].monitor), (int32_t)v75[1].klass, 0LL);
        if ( !v76 || (Empty = SkillLvEntity__getDetail_26117940(v76, v76->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(
                            v95,
                            v75->fields.missionTargetId,
                            LODWORD(v75[1].klass) - 1,
                            0LL);
        if ( !ValidEntityList )
          break;
        v78 = ValidEntityList;
        v79 = SkillLvMaster__GetEntity(v34, *((_DWORD *)ValidEntityList + 13), *((_DWORD *)ValidEntityList + 10), 0LL);
        if ( !v79 || (beforeDetail = SkillLvEntity__getDetail_26117940(v79, v79->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        missionTargetId = v75->fields.missionTargetId;
        monitor = (int32_t)v75[1].monitor;
        v85 = *(System_String_o **)&v75->fields.addCount;
        itemList = this->fields.itemList;
        v87 = (System_String_o *)*((_QWORD *)v78 + 4);
        v88 = v97->fields._size;
        v89 = (CommandAssistLvUpListViewItem_o *)sub_B0D974(CommandAssistLvUpListViewItem_TypeInfo, v80, v81);
        CommandAssistLvUpListViewItem___ctor(
          v89,
          v74,
          eventId,
          missionTargetId,
          monitor,
          v85,
          Empty,
          v87,
          beforeDetail,
          (_DWORD)v74 == v88 - 1,
          v90);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v34 = v91;
        v38 = v97;
        if ( (int)v74 + 1 >= missionIdb )
          goto LABEL_51;
        size = v97->fields._size;
        ++v74;
      }
LABEL_54:
      sub_B0D97C(ValidEntityList);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211E79 & 1) == 0 )
  {
    sub_B0D8A4(&CommandAssistLvUpListViewManager___c_TypeInfo, v1);
    byte_4211E79 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CommandAssistLvUpListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return ent->fields.condType == 177;
}