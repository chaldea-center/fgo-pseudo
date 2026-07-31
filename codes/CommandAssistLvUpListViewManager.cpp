void CommandAssistLvUpListViewManager___ctor(CommandAssistLvUpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CommandAssistLvUpListViewManager__CreateList(
        CommandAssistLvUpListViewManager_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x25
  Il2CppObject *v7; // x26
  Il2CppObject *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x23
  void *ValidEntityList; // x0
  __int64 v11; // x1
  const MethodInfo_40C7F4C **v12; // x19
  const MethodInfo_386FFB0 **v13; // x29
  const MethodInfo_3868664 **v14; // x21
  const MethodInfo_384E0B0 **v15; // x24
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_IEnumerable_TSource__o *List; // x27
  CommandAssistLvUpListViewManager___c_c *v22; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__0_1; // x28
  const MethodInfo_40C7F4C **v25; // x20
  const MethodInfo_384E0B0 **v26; // x19
  const MethodInfo_3868664 **v27; // x24
  const MethodInfo_386FFB0 **v28; // x21
  Il2CppObject *v29; // x29
  struct CommandAssistLvUpListViewManager___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  Il2CppObject *CurrentEntity; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  Il2CppObject *v48; // x1
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  CommandAssistLvUpListViewManager___c_c *v55; // x0
  struct CommandAssistLvUpListViewManager___c_StaticFields *v56; // x8
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v58; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  SkillLvMaster_o *v66; // x19
  int32_t v67; // w24
  void *v68; // x25
  SkillLvEntity_o *v69; // x0
  System_String_o *Detail_49837896; // x26
  void *v71; // x28
  SkillLvEntity_o *v72; // x0
  System_String_o *beforeDetail; // x29
  int32_t v74; // w19
  int32_t v75; // w20
  System_String_o *v76; // x22
  System_String_o *v77; // x28
  int32_t v78; // w21
  System_Collections_Generic_List_object__o *itemList; // x27
  CommandAssistLvUpListViewItem_o *v80; // x25
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  const MethodInfo *v91; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v92; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v96; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_5932936 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_EventCommandAssistEntity___);
    sub_21FFC50(&CommandAssistLvUpListViewItem_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__);
    sub_21FFC50(&System_Func_EventCommandAssistEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    sub_21FFC50(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__);
    sub_21FFC50(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__);
    sub_21FFC50(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_5932936 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  entity = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v92 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v8 )
    goto LABEL_53;
  v96 = (EventCommandAssistMaster_o *)v8;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v8, eventId, -1, 0);
  if ( !ValidEntityList )
    goto LABEL_53;
  v12 = (const MethodInfo_40C7F4C **)&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__;
  v13 = (const MethodInfo_386FFB0 **)&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___;
  v14 = (const MethodInfo_3868664 **)&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___;
  v15 = (const MethodInfo_384E0B0 **)&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v98,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v100 = v98;
  v98.fields._list = 0;
  *(_QWORD *)&v98.fields._index = &v100;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(&v100, *v12);
    if ( !v16 )
      break;
    current = v100.fields._current;
    if ( !v100.fields._current )
      sub_21FFECC(v16, v17);
    if ( !Master_object )
      sub_21FFECC(v16, v17);
    List = (System_Collections_Generic_IEnumerable_TSource__o *)CommonReleaseMaster__getList(
                                                                  (CommonReleaseMaster_o *)Master_object,
                                                                  HIDWORD(v100.fields._current[3].monitor),
                                                                  0);
    v22 = CommandAssistLvUpListViewManager___c_TypeInfo;
    if ( !*(&CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo, v19, v20);
      v22 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__0_1 = (System_Func_object__bool__o *)static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( !*(&v22->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v22, v19, v20);
        static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      }
      v25 = v12;
      v26 = v15;
      v27 = v14;
      v28 = v13;
      v29 = (Il2CppObject *)static_fields->__9;
      _9__0_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__0_1,
        v29,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0);
      v30 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      v30->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30->__9__0_1, (int32_t)_9__0_1, v31, v32, v33, v34, v35, v36);
      v13 = v28;
      v14 = v27;
      v15 = v26;
      v12 = v25;
    }
    v37 = System_Linq_Enumerable__Where_object_(List, (System_Func_TSource__bool__o *)_9__0_1, *v13);
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(v37, *v14);
    v39 = System_Linq_Enumerable__FirstOrDefault_object_(v38, *v15);
    if ( v39 )
    {
      if ( !v7 )
        sub_21FFECC(v39, v40);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v7,
             &entity,
             (int32_t)v39[2].klass,
             missionId,
             0) )
      {
        CurrentEntity = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                          v96,
                                          eventId,
                                          (int32_t)current[1].klass,
                                          -1,
                                          0,
                                          0);
        v48 = CurrentEntity;
        if ( !v9
          || (items = v9->fields._items,
              v50 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__,
              ++v9->fields._version,
              !items) )
        {
          sub_21FFECC(CurrentEntity, CurrentEntity);
        }
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            CurrentEntity,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v52[4] = (Il2CppClass *)v48;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v48, v42, v43, v44, v45, v46, v47);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v100,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v55 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !*(&CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo, v53, v54);
    v55 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  v56 = v55->static_fields;
  _9__0_0 = (System_Func_object__bool__o *)v56->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v55->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v55, v53, v54);
      v56 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__0_0, v58, Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, 0);
    v59 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v59->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v59->__9__0_0, (int32_t)_9__0_0, v60, v61, v62, v63, v64, v65);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v9,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v9 )
      goto LABEL_53;
    v66 = (SkillLvMaster_o *)v92;
    missionIdb = v9->fields._size;
    if ( missionIdb >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v9,
                            v67,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v66 )
          break;
        v68 = ValidEntityList;
        v69 = SkillLvMaster__GetEntity(v66, *((_DWORD *)ValidEntityList + 13), *((_DWORD *)ValidEntityList + 10), 0);
        if ( !v69 || (Detail_49837896 = SkillLvEntity__getDetail_49837896(v69, v69->fields.lv, 0, 0)) == 0 )
          Detail_49837896 = **(System_String_o ***)(qword_594C0B8 + 184);
        ValidEntityList = EventCommandAssistMaster__GetEntity(v96, *((_DWORD *)v68 + 4), *((_DWORD *)v68 + 10) - 1, 0);
        if ( !ValidEntityList )
          break;
        v71 = ValidEntityList;
        v72 = SkillLvMaster__GetEntity(v66, *((_DWORD *)ValidEntityList + 13), *((_DWORD *)ValidEntityList + 10), 0);
        if ( !v72 || (beforeDetail = SkillLvEntity__getDetail_49837896(v72, v72->fields.lv, 0, 0)) == 0 )
          beforeDetail = **(System_String_o ***)(qword_594C0B8 + 184);
        v74 = *((_DWORD *)v68 + 4);
        v75 = *((_DWORD *)v68 + 12);
        v76 = (System_String_o *)*((_QWORD *)v68 + 4);
        v77 = (System_String_o *)*((_QWORD *)v71 + 4);
        v78 = v9->fields._size;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v80 = (CommandAssistLvUpListViewItem_o *)sub_21FFEBC(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v80,
          v67,
          eventId,
          v74,
          v75,
          v76,
          Detail_49837896,
          v77,
          beforeDetail,
          v67 == v78 - 1,
          v91);
        if ( !itemList )
          break;
        v87 = itemList->fields._items;
        v88 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v87 )
          break;
        v89 = itemList->fields._size;
        v66 = (SkillLvMaster_o *)v92;
        if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v80,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &v87->obj.klass + v89;
          itemList->fields._size = v89 + 1;
          v90[4] = (Il2CppClass *)v80;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v90 + 4), (int32_t)v80, v81, v82, v83, v84, v85, v86);
        }
        if ( missionIdb == ++v67 )
          goto LABEL_50;
      }
LABEL_53:
      sub_21FFECC(ValidEntityList, v11);
    }
LABEL_50:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
    ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
    ValidEntityList = this->fields.scrollView;
    if ( !ValidEntityList )
      goto LABEL_53;
    UIScrollView__ResetPosition((UIScrollView_o *)ValidEntityList, 0);
  }
}


void CommandAssistLvUpListViewManager__OnClickListView(
        CommandAssistLvUpListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void CommandAssistLvUpListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932937 & 1) == 0 )
  {
    sub_21FFC50(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_5932937 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CommandAssistLvUpListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandAssistLvUpListViewManager___c___ctor(
        CommandAssistLvUpListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CommandAssistLvUpListViewManager___c___CreateList_b__0_0(
        CommandAssistLvUpListViewManager___c_o *this,
        EventCommandAssistEntity_o *x,
        const MethodInfo *method)
{
  return x == 0;
}


bool CommandAssistLvUpListViewManager___c___CreateList_b__0_1(
        CommandAssistLvUpListViewManager___c_o *this,
        CommonReleaseEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.condType == 177;
}