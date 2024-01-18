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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  void *ValidEntityList; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *List; // x27
  CommandAssistLvUpListViewManager___c_c *v43; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_1; // x28
  Il2CppObject *v46; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v56; // x0
  __int64 v57; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x1
  CommandAssistLvUpListViewManager___c_c *v59; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *v60; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x24
  Il2CppObject *v62; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  unsigned int size; // w8
  __int64 v71; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x21
  SkillLvEntity_o *v73; // x0
  System_String_o *Empty; // x25
  void *v75; // x26
  SkillLvEntity_o *v76; // x0
  System_String_o *beforeDetail; // x28
  int32_t missionTargetId; // w19
  int32_t monitor; // w20
  System_String_o *v80; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_String_o *v82; // x21
  int32_t v83; // w23
  CommandAssistLvUpListViewItem_o *v84; // x26
  const MethodInfo *v85; // [xsp+10h] [xbp-D0h]
  SkillLvMaster_o *v86; // [xsp+20h] [xbp-C0h]
  int32_t missionIdb; // [xsp+34h] [xbp-ACh]
  EventCommandAssistMaster_o *v90; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v93; // [xsp+50h] [xbp-90h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_4188084 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&CommandAssistLvUpListViewItem_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillDetailMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__, v16);
    sub_B2C35C(&Method_System_Func_CommonReleaseEntity__bool___ctor__, v17);
    sub_B2C35C(&Method_System_Func_EventCommandAssistEntity__bool___ctor__, v18);
    sub_B2C35C(&System_Func_CommonReleaseEntity__bool__TypeInfo, v19);
    sub_B2C35C(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v26);
    sub_B2C35C(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v27);
    sub_B2C35C(&string_TypeInfo, v28);
    sub_B2C35C(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v29);
    sub_B2C35C(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v30);
    sub_B2C35C(&CommandAssistLvUpListViewManager___c_TypeInfo, v31);
    byte_4188084 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v33 = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v34 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v35 = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v35 )
    goto LABEL_54;
  v92 = v36;
  v90 = v35;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(v35, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v93,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ValidEntityList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v95 = v93;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v95,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v39 )
      break;
    current = v95.fields.current;
    if ( !v95.fields.current )
      sub_B2C434(v39, v40);
    if ( !Master_WarQuestSelectionMaster )
      sub_B2C434(v39, v40);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  HIDWORD(v95.fields.current[3].monitor),
                                                                  0LL);
    v43 = CommandAssistLvUpListViewManager___c_TypeInfo;
    if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v43 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    static_fields = v43->static_fields;
    _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      }
      v46 = (Il2CppObject *)static_fields->__9;
      _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__0_1,
        v46,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        (const MethodInfo_2711C04 *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
      v47 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      v47->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v47->__9__0_1,
        (System_Int32_array **)_9__0_1,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    v54 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            List,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v54,
                                                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v56 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
            v55,
            (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v56 )
    {
      if ( !v33 )
        sub_B2C434(v56, v57);
      if ( EventMissionGroupMaster__TryGetEntity(v33, &entity, v56->fields.freeStoneNum, missionId, 0LL) )
      {
        CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(v90, eventId, (int32_t)current[1].klass, -1, 0, 0LL);
        if ( !v36 )
          sub_B2C434(0LL, CurrentEntity);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v36,
          (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentEntity,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v95,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v59 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v59 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  v60 = v59->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v60->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v60 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)v60->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v62,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_EventCommandAssistEntity__bool___ctor__);
    v63 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v63->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v63->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  ValidEntityList = (void *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                              (System_Collections_Generic_List_T__o *)v36,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_17266AC *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v36 )
      goto LABEL_54;
    missionIdb = v36->fields._size;
    if ( missionIdb >= 1 )
    {
      size = v36->fields._size;
      v71 = 0LL;
      v86 = v34;
      while ( 1 )
      {
        if ( size <= (unsigned int)v71 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v72 = v36->fields._items->m_Items[v71];
        if ( !v72 || !v34 )
          break;
        v73 = SkillLvMaster__GetEntity(v34, HIDWORD(v72[1].monitor), (int32_t)v72[1].klass, 0LL);
        if ( !v73 || (Empty = SkillLvEntity__getDetail_23775852(v73, v73->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(
                            v90,
                            v72->fields.missionTargetId,
                            LODWORD(v72[1].klass) - 1,
                            0LL);
        if ( !ValidEntityList )
          break;
        v75 = ValidEntityList;
        v76 = SkillLvMaster__GetEntity(v34, *((_DWORD *)ValidEntityList + 13), *((_DWORD *)ValidEntityList + 10), 0LL);
        if ( !v76 || (beforeDetail = SkillLvEntity__getDetail_23775852(v76, v76->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        missionTargetId = v72->fields.missionTargetId;
        monitor = (int32_t)v72[1].monitor;
        v80 = *(System_String_o **)&v72->fields.addCount;
        itemList = this->fields.itemList;
        v82 = (System_String_o *)*((_QWORD *)v75 + 4);
        v83 = v92->fields._size;
        v84 = (CommandAssistLvUpListViewItem_o *)sub_B2C42C(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v84,
          v71,
          eventId,
          missionTargetId,
          monitor,
          v80,
          Empty,
          v82,
          beforeDetail,
          (_DWORD)v71 == v83 - 1,
          v85);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v34 = v86;
        v36 = v92;
        if ( (int)v71 + 1 >= missionIdb )
          goto LABEL_51;
        size = v92->fields._size;
        ++v71;
      }
LABEL_54:
      sub_B2C434(ValidEntityList, v38);
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
  Il2CppObject *v2; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184F3C & 1) == 0 )
  {
    sub_B2C35C(&CommandAssistLvUpListViewManager___c_TypeInfo, v1);
    byte_4184F3C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return ent->fields.condType == 177;
}