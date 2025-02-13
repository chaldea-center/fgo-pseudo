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
  Il2CppObject *Master_object; // x25
  Il2CppObject *v5; // x26
  Il2CppObject *v6; // x19
  Il2CppObject *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x23
  void *ValidEntityList; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x22
  CommonReleaseEntity_array *List; // x0
  CommandAssistLvUpListViewManager___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x27
  System_Func_object__bool__o *_9__0_1; // x28
  Il2CppObject *v18; // x29
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  Il2CppObject *CurrentEntity; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  CommandAssistLvUpListViewManager___c_c *v42; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v44; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int32_t v52; // w24
  void *v53; // x25
  SkillLvEntity_o *v54; // x0
  System_String_o *Empty; // x26
  void *v56; // x28
  SkillLvEntity_o *v57; // x0
  System_String_o *beforeDetail; // x29
  int32_t v59; // w19
  int32_t v60; // w20
  System_String_o *v61; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v63; // x28
  int32_t v64; // w21
  CommandAssistLvUpListViewItem_o *v65; // x25
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  const MethodInfo *v76; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v77; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v81; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4BE081F & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_EventCommandAssistEntity___);
    sub_1C21E38(&CommandAssistLvUpListViewItem_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__);
    sub_1C21E38(&System_Func_EventCommandAssistEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__);
    sub_1C21E38(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__);
    sub_1C21E38(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_4BE081F = 1;
  }
  memset(&v85, 0, sizeof(v85));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v7 )
    goto LABEL_53;
  v77 = v6;
  v81 = (EventCommandAssistMaster_o *)v7;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v7, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v83,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v85 = v83;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v85.fields._current;
    if ( !v85.fields._current )
      sub_1C22094(v11, v12);
    if ( !Master_object )
      sub_1C22094(v11, v12);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v85.fields._current[3].monitor),
             0LL);
    v15 = CommandAssistLvUpListViewManager___c_TypeInfo;
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
    if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v15 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    _9__0_1 = (System_Func_object__bool__o *)v15->static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CommandAssistLvUpListViewManager___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__0_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__0_1,
        v18,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0LL);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__0_1,
        (int64_t)_9__0_1,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = System_Linq_Enumerable__Where_object_(
            v16,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v26,
                                                                 (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v28 = System_Linq_Enumerable__FirstOrDefault_object_(
            v27,
            (const MethodInfo_2FD26B0 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v28 )
    {
      if ( !v5 )
        sub_1C22094(v28, v29);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v5,
             &entity,
             (int32_t)v28[2].klass,
             missionId,
             0LL) )
      {
        CurrentEntity = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                          (EventCommandAssistMaster_o *)v7,
                                          eventId,
                                          (int32_t)current[1].klass,
                                          -1,
                                          0,
                                          0LL);
        v37 = (int64_t)CurrentEntity;
        if ( !v8 )
          sub_1C22094(CurrentEntity, CurrentEntity);
        items = v8->fields._items;
        v39 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C22094(CurrentEntity, CurrentEntity);
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            CurrentEntity,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v37;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 4), v37, v31, v32, v33, v34, v35, v36);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v42 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v42 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v42->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v44,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      0LL);
    v45 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v45->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v45->__9__0_0, (int64_t)_9__0_0, v46, v47, v48, v49, v50, v51);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v8,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v8 )
      goto LABEL_53;
    missionIdb = v8->fields._size;
    if ( missionIdb >= 1 )
    {
      v52 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v8,
                            v52,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v6 )
          break;
        v53 = ValidEntityList;
        v54 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v6,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v54 || (Empty = SkillLvEntity__getDetail_41206052(v54, v54->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(v81, *((_DWORD *)v53 + 4), *((_DWORD *)v53 + 10) - 1, 0LL);
        if ( !ValidEntityList )
          break;
        v56 = ValidEntityList;
        v57 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v6,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v57 || (beforeDetail = SkillLvEntity__getDetail_41206052(v57, v57->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v59 = *((_DWORD *)v53 + 4);
        v60 = *((_DWORD *)v53 + 12);
        v61 = (System_String_o *)*((_QWORD *)v53 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v63 = (System_String_o *)*((_QWORD *)v56 + 4);
        v64 = v8->fields._size;
        v65 = (CommandAssistLvUpListViewItem_o *)sub_1C22084(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v65,
          v52,
          eventId,
          v59,
          v60,
          v61,
          Empty,
          v63,
          beforeDetail,
          v52 == v64 - 1,
          v76);
        if ( !itemList )
          break;
        v72 = itemList->fields._items;
        v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v72 )
          break;
        v74 = itemList->fields._size;
        v6 = v77;
        if ( (unsigned int)v74 >= v72->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v65,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &v72->obj.klass + v74;
          itemList->fields._size = v74 + 1;
          v75[4] = (Il2CppClass *)v65;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v65, v66, v67, v68, v69, v70, v71);
        }
        if ( missionIdb == ++v52 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1C22094(ValidEntityList, v10);
    }
LABEL_50:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
    ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
    ValidEntityList = this->fields.scrollView;
    if ( !ValidEntityList )
      goto LABEL_53;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0820 & 1) == 0 )
  {
    sub_1C21E38(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_4BE0820 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)CommandAssistLvUpListViewManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return ent->fields.condType == 177;
}