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
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  Il2CppObject *CurrentEntity; // x0
  Il2CppObject *v51; // x1
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  CommandAssistLvUpListViewManager___c_c *v56; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v58; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v59; // x0
  int32_t v60; // w24
  void *v61; // x25
  SkillLvEntity_o *v62; // x0
  System_String_o *Empty; // x26
  void *v64; // x28
  SkillLvEntity_o *v65; // x0
  System_String_o *beforeDetail; // x29
  int32_t v67; // w19
  int32_t v68; // w20
  System_String_o *v69; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v71; // x28
  int32_t v72; // w21
  CommandAssistLvUpListViewItem_o *v73; // x25
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  const MethodInfo *v78; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v79; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v83; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4A48F20 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_1B863B8(&CommandAssistLvUpListViewItem_TypeInfo, v4);
    sub_1B863B8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_SkillDetailMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___, v12);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__, v16);
    sub_1B863B8(&System_Func_EventCommandAssistEntity__bool__TypeInfo, v17);
    sub_1B863B8(&System_Func_CommonReleaseEntity__bool__TypeInfo, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v24);
    sub_1B863B8(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v25);
    sub_1B863B8(&string_TypeInfo, v26);
    sub_1B863B8(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, v27);
    sub_1B863B8(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__, v28);
    sub_1B863B8(&CommandAssistLvUpListViewManager___c_TypeInfo, v29);
    byte_4A48F20 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v31 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v33 )
    goto LABEL_53;
  v79 = v32;
  v83 = (EventCommandAssistMaster_o *)v33;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v33, eventId, -1, 0LL);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v87 = v85;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v87.fields._current;
    if ( !v87.fields._current )
      sub_1B86614(v37, v38);
    if ( !Master_object )
      sub_1B86614(v37, v38);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v87.fields._current[3].monitor),
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
      _9__0_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__0_1,
        v44,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0LL);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1B8635C(&static_fields->__9__0_1);
    }
    v46 = System_Linq_Enumerable__Where_object_(
            v42,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v46,
                                                                 (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v48 = System_Linq_Enumerable__FirstOrDefault_object_(
            v47,
            (const MethodInfo_2F93C68 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v48 )
    {
      if ( !v31 )
        sub_1B86614(v48, v49);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v31,
             &entity,
             (int32_t)v48[2].klass,
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
        v51 = CurrentEntity;
        if ( !v34 )
          sub_1B86614(CurrentEntity, CurrentEntity);
        items = v34->fields._items;
        v53 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v34->fields._version;
        if ( !items )
          sub_1B86614(CurrentEntity, CurrentEntity);
        size = v34->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            CurrentEntity,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v55[4] = (Il2CppClass *)v51;
          sub_1B8635C(v55 + 4);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v56 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v56 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v56->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v56->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v58,
      Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__,
      0LL);
    v59 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v59->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1B8635C(&v59->__9__0_0);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v34,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v34 )
      goto LABEL_53;
    missionIdb = v34->fields._size;
    if ( missionIdb >= 1 )
    {
      v60 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v34,
                            v60,
                            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v32 )
          break;
        v61 = ValidEntityList;
        v62 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v32,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v62 || (Empty = SkillLvEntity__getDetail_40960224(v62, v62->fields.lv, 0, 0LL)) == 0LL )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(v83, *((_DWORD *)v61 + 4), *((_DWORD *)v61 + 10) - 1, 0LL);
        if ( !ValidEntityList )
          break;
        v64 = ValidEntityList;
        v65 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v32,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0LL);
        if ( !v65 || (beforeDetail = SkillLvEntity__getDetail_40960224(v65, v65->fields.lv, 0, 0LL)) == 0LL )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v67 = *((_DWORD *)v61 + 4);
        v68 = *((_DWORD *)v61 + 12);
        v69 = (System_String_o *)*((_QWORD *)v61 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v71 = (System_String_o *)*((_QWORD *)v64 + 4);
        v72 = v34->fields._size;
        v73 = (CommandAssistLvUpListViewItem_o *)sub_1B86604(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v73,
          v60,
          eventId,
          v67,
          v68,
          v69,
          Empty,
          v71,
          beforeDetail,
          v60 == v72 - 1,
          v78);
        if ( !itemList )
          break;
        v74 = itemList->fields._items;
        v75 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v74 )
          break;
        v76 = itemList->fields._size;
        v32 = v79;
        if ( (unsigned int)v76 >= v74->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v73,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = &v74->obj.klass + v76;
          itemList->fields._size = v76 + 1;
          v77[4] = (Il2CppClass *)v73;
          sub_1B8635C(v77 + 4);
        }
        if ( missionIdb == ++v60 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1B86614(ValidEntityList, v36);
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

  if ( (byte_4A48F21 & 1) == 0 )
  {
    sub_1B863B8(&CommandAssistLvUpListViewManager___c_TypeInfo, v1);
    byte_4A48F21 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v2;
  sub_1B8635C(CommandAssistLvUpListViewManager___c_TypeInfo->static_fields);
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
    sub_1B86614(this, 0LL);
  return ent->fields.condType == 177;
}