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
  Il2CppObject *Master_object; // x25
  Il2CppObject *v31; // x26
  Il2CppObject *v32; // x19
  Il2CppObject *v33; // x21
  System_Collections_Generic_List_object__o *v34; // x23
  void *ValidEntityList; // x0
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x22
  CommonReleaseEntity_array *List; // x0
  CommandAssistLvUpListViewManager___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x27
  System_Func_object__bool__o *_9__0_1; // x28
  Il2CppObject *v44; // x29
  struct CommandAssistLvUpListViewManager___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  Il2CppObject *CurrentEntity; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x1
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  CommandAssistLvUpListViewManager___c_c *v60; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v62; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w24
  void *v67; // x25
  SkillLvEntity_o *v68; // x0
  System_String_o *Empty; // x26
  void *v70; // x28
  SkillLvEntity_o *v71; // x0
  System_String_o *beforeDetail; // x29
  int32_t v73; // w19
  int32_t v74; // w20
  System_String_o *v75; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v77; // x28
  int32_t v78; // w21
  CommandAssistLvUpListViewItem_o *v79; // x25
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  const MethodInfo *v86; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v87; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v91; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_49BF234 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_1B4CF90(&CommandAssistLvUpListViewItem_TypeInfo, v4);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillDetailMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v12);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__, v16);
    sub_1B4CF90(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v17);
    sub_1B4CF90(&System_Func_CommonReleaseEntity__bool__TypeInfo, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v24);
    sub_1B4CF90(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v25);
    sub_1B4CF90(&string_TypeInfo, v26);
    sub_1B4CF90(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v27);
    sub_1B4CF90(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v28);
    sub_1B4CF90(&CommandAssistLvUpListViewManager___c_TypeInfo, v29);
    byte_49BF234 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v31 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v33 )
    goto LABEL_53;
  v87 = v32;
  v91 = (EventCommandAssistMaster_o *)v33;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v33, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v95 = v93;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v95,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v95.fields._current;
    if ( !v95.fields._current )
      sub_1B4D1EC(v37, v38);
    if ( !Master_object )
      sub_1B4D1EC(v37, v38);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v95.fields._current[3].monitor),
             0LL);
    v41 = CommandAssistLvUpListViewManager___c_TypeInfo;
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
    if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
      v41 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    _9__0_1 = (System_Func_object__bool__o *)v41->static_fields->__9__0_1;
    if ( !_9__0_1 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = CommandAssistLvUpListViewManager___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v41->static_fields->__9;
      _9__0_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__0_1,
        v44,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0LL);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v46, v47);
    }
    v48 = System_Linq_Enumerable__Where_object_(
            v42,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v48,
                                                                 (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v50 = System_Linq_Enumerable__FirstOrDefault_object_(
            v49,
            (const MethodInfo_2F26C18 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v50 )
    {
      if ( !v31 )
        sub_1B4D1EC(v50, v51);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v31,
             &entity,
             (int32_t)v50[2].klass,
             missionId,
             0LL) )
      {
        CurrentEntity = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                          (EventCommandAssistMaster_o *)v33,
                                          eventId,
                                          (int32_t)current[1].klass,
                                          -1,
                                          0,
                                          0LL);
        v55 = CurrentEntity;
        if ( !v34 )
          sub_1B4D1EC(CurrentEntity, CurrentEntity);
        items = v34->fields._items;
        v57 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v34->fields._version;
        if ( !items )
          sub_1B4D1EC(CurrentEntity, CurrentEntity);
        size = v34->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            CurrentEntity,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v59[4] = (Il2CppClass *)v55;
          sub_1B4CF34((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v55, v53, v54);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v95,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v60 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v60 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v60->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v62,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      0LL);
    v63 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v63->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&v63->__9__0_0, (int32_t)_9__0_0, v64, v65);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v34,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v34 )
      goto LABEL_53;
    missionIdb = v34->fields._size;
    if ( missionIdb >= 1 )
    {
      v66 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v34,
                            v66,
                            (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v32 )
          break;
        v67 = ValidEntityList;
        v68 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v32,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v68 || (Empty = SkillLvEntity__getDetail_40524720(v68, v68->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(v91, *((_DWORD *)v67 + 4), *((_DWORD *)v67 + 10) - 1, 0LL);
        if ( !ValidEntityList )
          break;
        v70 = ValidEntityList;
        v71 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v32,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v71 || (beforeDetail = SkillLvEntity__getDetail_40524720(v71, v71->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v73 = *((_DWORD *)v67 + 4);
        v74 = *((_DWORD *)v67 + 12);
        v75 = (System_String_o *)*((_QWORD *)v67 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v77 = (System_String_o *)*((_QWORD *)v70 + 4);
        v78 = v34->fields._size;
        v79 = (CommandAssistLvUpListViewItem_o *)sub_1B4D1DC(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v79,
          v66,
          eventId,
          v73,
          v74,
          v75,
          Empty,
          v77,
          beforeDetail,
          v66 == v78 - 1,
          v86);
        if ( !itemList )
          break;
        v82 = itemList->fields._items;
        v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v82 )
          break;
        v84 = itemList->fields._size;
        v32 = v87;
        if ( (unsigned int)v84 >= v82->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v79,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          itemList->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v79;
          sub_1B4CF34((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v79, v80, v81);
        }
        if ( missionIdb == ++v66 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1B4D1EC(ValidEntityList, v36);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BF235 & 1) == 0 )
  {
    sub_1B4CF90(&CommandAssistLvUpListViewManager___c_TypeInfo, v1);
    byte_49BF235 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)CommandAssistLvUpListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B4D1EC(this, 0LL);
  return ent->fields.condType == 177;
}