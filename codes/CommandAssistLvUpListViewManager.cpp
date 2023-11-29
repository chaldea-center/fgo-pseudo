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
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  System_Collections_Generic_List_EventCommandAssistEntity__o *ValidEntityList; // x0
  Il2CppObject *current; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_IEnumerable_TSource__o *List; // x27
  CommandAssistLvUpListViewManager___c_c *v48; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_1; // x28
  Il2CppObject *v51; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v61; // x0
  EventCommandAssistEntity_o *CurrentEntity; // x1
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  CommandAssistLvUpListViewManager___c_c *v67; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *v68; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x24
  Il2CppObject *v70; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  unsigned int size; // w8
  __int64 v79; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v80; // x21
  SkillLvEntity_o *v81; // x0
  System_String_o *Empty; // x25
  EventCommandAssistEntity_o *v83; // x0
  EventCommandAssistEntity_o *v84; // x26
  SkillLvEntity_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  System_String_o *beforeDetail; // x28
  int32_t missionTargetId; // w19
  int32_t monitor; // w20
  System_String_o *v93; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_String_o *name; // x21
  int32_t v96; // w23
  CommandAssistLvUpListViewItem_o *v97; // x26
  UIScrollView_o *scrollView; // x0
  const MethodInfo *v99; // [xsp+10h] [xbp-D0h]
  SkillLvMaster_o *v100; // [xsp+20h] [xbp-C0h]
  int32_t missionIdb; // [xsp+34h] [xbp-ACh]
  EventCommandAssistMaster_o *v104; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v107; // [xsp+50h] [xbp-90h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_40FA53B & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&CommandAssistLvUpListViewItem_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillDetailMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__, v16);
    sub_B16FFC(&Method_System_Func_CommonReleaseEntity__bool___ctor__, v17);
    sub_B16FFC(&Method_System_Func_EventCommandAssistEntity__bool___ctor__, v18);
    sub_B16FFC(&System_Func_CommonReleaseEntity__bool__TypeInfo, v19);
    sub_B16FFC(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v26);
    sub_B16FFC(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v27);
    sub_B16FFC(&string_TypeInfo, v28);
    sub_B16FFC(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v29);
    sub_B16FFC(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v30);
    sub_B16FFC(&CommandAssistLvUpListViewManager___c_TypeInfo, v31);
    byte_40FA53B = 1;
  }
  memset(&v109, 0, sizeof(v109));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v33 = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v34 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v35 = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v35 )
    goto LABEL_54;
  v106 = v40;
  v104 = v35;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(v35, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v107,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ValidEntityList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v109 = v107;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v109,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__) )
  {
    current = v109.fields.current;
    if ( !v109.fields.current )
      sub_B170D4();
    if ( !Master_WarQuestSelectionMaster )
      sub_B170D4();
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  HIDWORD(v109.fields.current[3].monitor),
                                                                  0LL);
    v48 = CommandAssistLvUpListViewManager___c_TypeInfo;
    if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v48 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    static_fields = v48->static_fields;
    _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)static_fields->__9;
      _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_CommonReleaseEntity__bool__TypeInfo,
                                                                                     v43,
                                                                                     v44,
                                                                                     v45,
                                                                                     v46);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__0_1,
        v51,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
      v52 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      v52->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v52->__9__0_1,
        (System_Int32_array **)_9__0_1,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            List,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v59,
                                                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v61 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
            v60,
            (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v61 )
    {
      if ( !v33 )
        sub_B170D4();
      if ( EventMissionGroupMaster__TryGetEntity(v33, &entity, v61->fields.freeStoneNum, missionId, 0LL) )
      {
        CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(v104, eventId, (int32_t)current[1].klass, -1, 0, 0LL);
        if ( !v40 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v40,
          (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentEntity,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v109,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v67 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v67 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  v68 = v67->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v68->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v68 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)v68->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_EventCommandAssistEntity__bool__TypeInfo,
                                                                                   v63,
                                                                                   v64,
                                                                                   v65,
                                                                                   v66);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v70,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_EventCommandAssistEntity__bool___ctor__);
    v71 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v71->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v71->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v40,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_EventCommandAssistEntity___) )
  {
    if ( !v40 )
      goto LABEL_54;
    missionIdb = v40->fields._size;
    if ( missionIdb >= 1 )
    {
      size = v40->fields._size;
      v79 = 0LL;
      v100 = v34;
      while ( 1 )
      {
        if ( size <= (unsigned int)v79 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v80 = v40->fields._items->m_Items[v79];
        if ( !v80 || !v34 )
          break;
        v81 = SkillLvMaster__GetEntity(v34, HIDWORD(v80[1].monitor), (int32_t)v80[1].klass, 0LL);
        if ( !v81 || (Empty = SkillLvEntity__getDetail_23602036(v81, v81->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        v83 = EventCommandAssistMaster__GetEntity(v104, v80->fields.missionTargetId, LODWORD(v80[1].klass) - 1, 0LL);
        if ( !v83 )
          break;
        v84 = v83;
        v85 = SkillLvMaster__GetEntity(v34, v83->fields.skillId, v83->fields.lv, 0LL);
        if ( !v85 || (beforeDetail = SkillLvEntity__getDetail_23602036(v85, v85->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        missionTargetId = v80->fields.missionTargetId;
        monitor = (int32_t)v80[1].monitor;
        v93 = *(System_String_o **)&v80->fields.addCount;
        itemList = this->fields.itemList;
        name = v84->fields.name;
        v96 = v106->fields._size;
        v97 = (CommandAssistLvUpListViewItem_o *)sub_B170CC(CommandAssistLvUpListViewItem_TypeInfo, v86, v87, v88, v89);
        CommandAssistLvUpListViewItem___ctor(
          v97,
          v79,
          eventId,
          missionTargetId,
          monitor,
          v93,
          Empty,
          name,
          beforeDetail,
          (_DWORD)v79 == v96 - 1,
          v99);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v34 = v100;
        v40 = v106;
        if ( (int)v79 + 1 >= missionIdb )
          goto LABEL_51;
        size = v106->fields._size;
        ++v79;
      }
LABEL_54:
      sub_B170D4();
    }
LABEL_51:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
    ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_54;
    UIScrollView__ResetPosition(scrollView, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7133 & 1) == 0 )
  {
    sub_B16FFC(&CommandAssistLvUpListViewManager___c_TypeInfo, v1);
    byte_40F7133 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CommandAssistLvUpListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return ent->fields.condType == 177;
}