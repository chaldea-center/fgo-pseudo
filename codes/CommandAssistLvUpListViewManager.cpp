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
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x25
  EventMissionGroupMaster_o *v5; // x26
  SkillLvMaster_o *v6; // x23
  EventCommandAssistMaster_o *v7; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  void *ValidEntityList; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *List; // x27
  CommandAssistLvUpListViewManager___c_c *v15; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_1; // x28
  Il2CppObject *v18; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v28; // x0
  __int64 v29; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x1
  CommandAssistLvUpListViewManager___c_c *v31; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *v32; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x24
  Il2CppObject *v34; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  unsigned int size; // w8
  __int64 v43; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x21
  SkillLvEntity_o *v45; // x0
  System_String_o *Empty; // x25
  void *v47; // x26
  SkillLvEntity_o *v48; // x0
  System_String_o *beforeDetail; // x28
  int32_t missionTargetId; // w19
  int32_t monitor; // w20
  System_String_o *v52; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_String_o *v54; // x21
  int32_t v55; // w23
  CommandAssistLvUpListViewItem_o *v56; // x26
  const MethodInfo *v57; // [xsp+10h] [xbp-D0h]
  SkillLvMaster_o *v58; // [xsp+20h] [xbp-C0h]
  int32_t missionIdb; // [xsp+34h] [xbp-ACh]
  EventCommandAssistMaster_o *v62; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+50h] [xbp-90h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42B008E & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_EventCommandAssistEntity___);
    sub_B52984(&CommandAssistLvUpListViewItem_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__);
    sub_B52984(&Method_System_Func_CommonReleaseEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_EventCommandAssistEntity__bool___ctor__);
    sub_B52984(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_B52984(&System_Func_EventCommandAssistEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__);
    sub_B52984(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__);
    sub_B52984(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_42B008E = 1;
  }
  memset(&v67, 0, sizeof(v67));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v5 = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v6 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v7 = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v7 )
    goto LABEL_54;
  v64 = v8;
  v62 = v7;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(v7, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ValidEntityList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v67 = v65;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v67,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v67.fields.current;
    if ( !v67.fields.current )
      sub_B52A5C(v11, v12);
    if ( !Master_WarQuestSelectionMaster )
      sub_B52A5C(v11, v12);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(
                                                                  Master_WarQuestSelectionMaster,
                                                                  HIDWORD(v67.fields.current[3].monitor),
                                                                  0LL);
    v15 = CommandAssistLvUpListViewManager___c_TypeInfo;
    if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v15 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__0_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__0_1,
        v18,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        (const MethodInfo_2BC90BC *)Method_System_Func_CommonReleaseEntity__bool___ctor__);
      v19 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      v19->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v19->__9__0_1,
        (System_Int32_array **)_9__0_1,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            List,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v26,
                                                                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v28 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
            v27,
            (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v28 )
    {
      if ( !v5 )
        sub_B52A5C(v28, v29);
      if ( EventMissionGroupMaster__TryGetEntity(v5, &entity, v28->fields.freeStoneNum, missionId, 0LL) )
      {
        CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(v62, eventId, (int32_t)current[1].klass, -1, 0, 0LL);
        if ( !v8 )
          sub_B52A5C(0LL, CurrentEntity);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentEntity,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v67,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v31 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( (BYTE3(CommandAssistLvUpListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v31 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  v32 = v31->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v32->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v32 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v34,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_EventCommandAssistEntity__bool___ctor__);
    v35 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v35->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v35->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  ValidEntityList = (void *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                              (System_Collections_Generic_List_T__o *)v8,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v8 )
      goto LABEL_54;
    missionIdb = v8->fields._size;
    if ( missionIdb >= 1 )
    {
      size = v8->fields._size;
      v43 = 0LL;
      v58 = v6;
      while ( 1 )
      {
        if ( size <= (unsigned int)v43 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v44 = v8->fields._items->m_Items[v43];
        if ( !v44 || !v6 )
          break;
        v45 = SkillLvMaster__GetEntity(v6, HIDWORD(v44[1].monitor), (int32_t)v44[1].klass, 0LL);
        if ( !v45 || (Empty = SkillLvEntity__getDetail_26526320(v45, v45->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(
                            v62,
                            v44->fields.missionTargetId,
                            LODWORD(v44[1].klass) - 1,
                            0LL);
        if ( !ValidEntityList )
          break;
        v47 = ValidEntityList;
        v48 = SkillLvMaster__GetEntity(v6, *((_DWORD *)ValidEntityList + 13), *((_DWORD *)ValidEntityList + 10), 0LL);
        if ( !v48 || (beforeDetail = SkillLvEntity__getDetail_26526320(v48, v48->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        missionTargetId = v44->fields.missionTargetId;
        monitor = (int32_t)v44[1].monitor;
        v52 = *(System_String_o **)&v44->fields.addCount;
        itemList = this->fields.itemList;
        v54 = (System_String_o *)*((_QWORD *)v47 + 4);
        v55 = v64->fields._size;
        v56 = (CommandAssistLvUpListViewItem_o *)sub_B52A54(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v56,
          v43,
          eventId,
          missionTargetId,
          monitor,
          v52,
          Empty,
          v54,
          beforeDetail,
          (_DWORD)v43 == v55 - 1,
          v57);
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v6 = v58;
        v8 = v64;
        if ( (int)v43 + 1 >= missionIdb )
          goto LABEL_51;
        size = v64->fields._size;
        ++v43;
      }
LABEL_54:
      sub_B52A5C(ValidEntityList, v10);
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
  Il2CppObject *v1; // x19
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42AD71B & 1) == 0 )
  {
    sub_B52984(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_42AD71B = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return ent->fields.condType == 177;
}