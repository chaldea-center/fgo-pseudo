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
  Il2CppObject *Master_object; // x25
  Il2CppObject *v5; // x26
  Il2CppObject *v6; // x19
  Il2CppObject *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x23
  void *ValidEntityList; // x0
  _BOOL8 v10; // x0
  Il2CppObject *current; // x22
  CommonReleaseEntity_array *List; // x0
  CommandAssistLvUpListViewManager___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x27
  System_Func_object__bool__o *_9__0_1; // x28
  Il2CppObject *v16; // x29
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  Il2CppObject *v20; // x0
  Il2CppObject *CurrentEntity; // x0
  Il2CppObject *v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  CommandAssistLvUpListViewManager___c_c *v27; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v29; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v30; // x0
  int32_t v31; // w24
  void *v32; // x25
  SkillLvEntity_o *v33; // x0
  System_String_o *Empty; // x26
  void *v35; // x28
  SkillLvEntity_o *v36; // x0
  System_String_o *beforeDetail; // x29
  int32_t v38; // w19
  int32_t v39; // w20
  System_String_o *v40; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v42; // x28
  int32_t v43; // w21
  CommandAssistLvUpListViewItem_o *v44; // x25
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  const MethodInfo *v49; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v50; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v54; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C3D632 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_EventCommandAssistEntity___);
    sub_1C37058(&CommandAssistLvUpListViewItem_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__);
    sub_1C37058(&System_Func_EventCommandAssistEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__);
    sub_1C37058(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__);
    sub_1C37058(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_4C3D632 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  entity = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v7 )
    goto LABEL_53;
  v50 = v6;
  v54 = (EventCommandAssistMaster_o *)v7;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v7, eventId, -1, 0);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v58 = v56;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_1C372B4(v10);
    if ( !Master_object )
      sub_1C372B4(v10);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v58.fields._current[3].monitor),
             0);
    v13 = CommandAssistLvUpListViewManager___c_TypeInfo;
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
    if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v13 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    _9__0_1 = (System_Func_object__bool__o *)v13->static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = CommandAssistLvUpListViewManager___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__0_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__0_1,
        v16,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1C36FFC(&static_fields->__9__0_1, _9__0_1);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            v14,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v18,
                                                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v20 = System_Linq_Enumerable__FirstOrDefault_object_(
            v19,
            (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v20 )
    {
      if ( !v5 )
        sub_1C372B4(v20);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v5,
             &entity,
             (int32_t)v20[2].klass,
             missionId,
             0) )
      {
        CurrentEntity = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                          (EventCommandAssistMaster_o *)v7,
                                          eventId,
                                          (int32_t)current[1].klass,
                                          -1,
                                          0,
                                          0);
        v22 = CurrentEntity;
        if ( !v8 )
          sub_1C372B4(CurrentEntity);
        items = v8->fields._items;
        v24 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C372B4(CurrentEntity);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            CurrentEntity,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v22;
          sub_1C36FFC(v26 + 4, v22);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v27 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v27 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v27->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__0_0, v29, Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, 0);
    v30 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v30->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1C36FFC(&v30->__9__0_0, _9__0_0);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v8,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v8 )
      goto LABEL_53;
    missionIdb = v8->fields._size;
    if ( missionIdb >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v8,
                            v31,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v6 )
          break;
        v32 = ValidEntityList;
        v33 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v6,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0);
        if ( !v33 || (Empty = SkillLvEntity__getDetail_42880244(v33, v33->fields.lv, 0, 0)) == 0 )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(v54, *((_DWORD *)v32 + 4), *((_DWORD *)v32 + 10) - 1, 0);
        if ( !ValidEntityList )
          break;
        v35 = ValidEntityList;
        v36 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v6,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0);
        if ( !v36 || (beforeDetail = SkillLvEntity__getDetail_42880244(v36, v36->fields.lv, 0, 0)) == 0 )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v38 = *((_DWORD *)v32 + 4);
        v39 = *((_DWORD *)v32 + 12);
        v40 = (System_String_o *)*((_QWORD *)v32 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v42 = (System_String_o *)*((_QWORD *)v35 + 4);
        v43 = v8->fields._size;
        v44 = (CommandAssistLvUpListViewItem_o *)sub_1C372A4(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v44,
          v31,
          eventId,
          v38,
          v39,
          v40,
          Empty,
          v42,
          beforeDetail,
          v31 == v43 - 1,
          v49);
        if ( !itemList )
          break;
        v45 = itemList->fields._items;
        v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v45 )
          break;
        v47 = itemList->fields._size;
        v6 = v50;
        if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v44,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &v45->obj.klass + v47;
          itemList->fields._size = v47 + 1;
          v48[4] = (Il2CppClass *)v44;
          sub_1C36FFC(v48 + 4, v44);
        }
        if ( missionIdb == ++v31 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1C372B4(ValidEntityList);
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

  if ( (byte_4C3D633 & 1) == 0 )
  {
    sub_1C37058(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_4C3D633 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v1;
  sub_1C36FFC(CommandAssistLvUpListViewManager___c_TypeInfo->static_fields, v1);
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
    sub_1C372B4(this);
  return ent->fields.condType == 177;
}