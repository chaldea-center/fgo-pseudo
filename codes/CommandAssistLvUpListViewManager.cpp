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
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  Il2CppObject *CurrentEntity; // x0
  Il2CppObject *v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  CommandAssistLvUpListViewManager___c_c *v30; // x0
  System_Func_object__bool__o *_9__0_0; // x24
  Il2CppObject *v32; // x25
  struct CommandAssistLvUpListViewManager___c_StaticFields *v33; // x0
  int32_t v34; // w24
  void *v35; // x25
  SkillLvEntity_o *v36; // x0
  System_String_o *Empty; // x26
  void *v38; // x28
  SkillLvEntity_o *v39; // x0
  System_String_o *beforeDetail; // x29
  int32_t v41; // w19
  int32_t v42; // w20
  System_String_o *v43; // x22
  System_Collections_Generic_List_object__o *itemList; // x27
  System_String_o *v45; // x28
  int32_t v46; // w21
  CommandAssistLvUpListViewItem_o *v47; // x25
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  const MethodInfo *v52; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v53; // [xsp+18h] [xbp-C8h]
  int32_t missionIdb; // [xsp+2Ch] [xbp-B4h]
  EventCommandAssistMaster_o *v57; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+40h] [xbp-A0h] BYREF
  EventMissionGroupEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4D2AE92 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_EventCommandAssistEntity___);
    sub_1C93AD4(&CommandAssistLvUpListViewItem_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__get_Current__);
    sub_1C93AD4(&System_Func_EventCommandAssistEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__);
    sub_1C93AD4(&Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__);
    sub_1C93AD4(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_4D2AE92 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  entity = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  if ( !v7 )
    goto LABEL_53;
  v53 = v6;
  v57 = (EventCommandAssistMaster_o *)v7;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList((EventCommandAssistMaster_o *)v7, eventId, -1, 0);
  if ( !ValidEntityList )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)ValidEntityList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__GetEnumerator__);
  v61 = v59;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v61.fields._current;
    if ( !v61.fields._current )
      sub_1C93D2C(v11, v12);
    if ( !Master_object )
      sub_1C93D2C(v11, v12);
    List = CommonReleaseMaster__getList(
             (CommonReleaseMaster_o *)Master_object,
             HIDWORD(v61.fields._current[3].monitor),
             0);
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
      _9__0_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_CommonReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__0_1,
        v18,
        Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_1__,
        0);
      static_fields = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__0_1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__0_1;
      sub_1C93A78(&static_fields->__9__0_1, _9__0_1);
    }
    v20 = System_Linq_Enumerable__Where_object_(
            v16,
            (System_Func_TSource__bool__o *)_9__0_1,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v20,
                                                                 (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_CommonReleaseEntity___);
    v22 = System_Linq_Enumerable__FirstOrDefault_object_(
            v21,
            (const MethodInfo_31CC378 *)Method_System_Linq_Enumerable_FirstOrDefault_CommonReleaseEntity___);
    if ( v22 )
    {
      if ( !v5 )
        sub_1C93D2C(v22, v23);
      if ( EventMissionGroupMaster__TryGetEntity(
             (EventMissionGroupMaster_o *)v5,
             &entity,
             (int32_t)v22[2].klass,
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
        v25 = CurrentEntity;
        if ( !v8 )
          sub_1C93D2C(CurrentEntity, CurrentEntity);
        items = v8->fields._items;
        v27 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C93D2C(CurrentEntity, CurrentEntity);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            CurrentEntity,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v25;
          sub_1C93A78(v29 + 4, v25);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventCommandAssistEntity__Dispose__);
  v30 = CommandAssistLvUpListViewManager___c_TypeInfo;
  if ( !CommandAssistLvUpListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandAssistLvUpListViewManager___c_TypeInfo);
    v30 = CommandAssistLvUpListViewManager___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v30->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = CommandAssistLvUpListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventCommandAssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__0_0, v32, Method_CommandAssistLvUpListViewManager___c__CreateList_b__0_0__, 0);
    v33 = CommandAssistLvUpListViewManager___c_TypeInfo->static_fields;
    v33->__9__0_0 = (struct System_Func_EventCommandAssistEntity__bool__o *)_9__0_0;
    sub_1C93A78(&v33->__9__0_0, _9__0_0);
  }
  ValidEntityList = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v8,
                              (System_Func_T__bool__o *)_9__0_0,
                              (const MethodInfo_318DB78 *)Method_BasicHelper_Any_EventCommandAssistEntity___);
  if ( ((unsigned __int8)ValidEntityList & 1) == 0 )
  {
    if ( !v8 )
      goto LABEL_53;
    missionIdb = v8->fields._size;
    if ( missionIdb >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        ValidEntityList = System_Collections_Generic_List_object___get_Item(
                            v8,
                            v34,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
        if ( !ValidEntityList || !v6 )
          break;
        v35 = ValidEntityList;
        v36 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v6,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0);
        if ( !v36 || (Empty = SkillLvEntity__getDetail_43584536(v36, v36->fields.lv, 0, 0)) == 0 )
          Empty = string_TypeInfo->static_fields->Empty;
        ValidEntityList = EventCommandAssistMaster__GetEntity(v57, *((_DWORD *)v35 + 4), *((_DWORD *)v35 + 10) - 1, 0);
        if ( !ValidEntityList )
          break;
        v38 = ValidEntityList;
        v39 = SkillLvMaster__GetEntity(
                (SkillLvMaster_o *)v6,
                *((_DWORD *)ValidEntityList + 13),
                *((_DWORD *)ValidEntityList + 10),
                0);
        if ( !v39 || (beforeDetail = SkillLvEntity__getDetail_43584536(v39, v39->fields.lv, 0, 0)) == 0 )
          beforeDetail = string_TypeInfo->static_fields->Empty;
        v41 = *((_DWORD *)v35 + 4);
        v42 = *((_DWORD *)v35 + 12);
        v43 = (System_String_o *)*((_QWORD *)v35 + 4);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v45 = (System_String_o *)*((_QWORD *)v38 + 4);
        v46 = v8->fields._size;
        v47 = (CommandAssistLvUpListViewItem_o *)sub_1C93D20(CommandAssistLvUpListViewItem_TypeInfo);
        CommandAssistLvUpListViewItem___ctor(
          v47,
          v34,
          eventId,
          v41,
          v42,
          v43,
          Empty,
          v45,
          beforeDetail,
          v34 == v46 - 1,
          v52);
        if ( !itemList )
          break;
        v48 = itemList->fields._items;
        v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v48 )
          break;
        v50 = itemList->fields._size;
        v6 = v53;
        if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v47,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v48->obj.klass + v50;
          itemList->fields._size = v50 + 1;
          v51[4] = (Il2CppClass *)v47;
          sub_1C93A78(v51 + 4, v47);
        }
        if ( missionIdb == ++v34 )
          goto LABEL_50;
      }
LABEL_53:
      sub_1C93D2C(ValidEntityList, v10);
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

  if ( (byte_4D2AE93 & 1) == 0 )
  {
    sub_1C93AD4(&CommandAssistLvUpListViewManager___c_TypeInfo);
    byte_4D2AE93 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(CommandAssistLvUpListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandAssistLvUpListViewManager___c_TypeInfo->static_fields->__9 = (struct CommandAssistLvUpListViewManager___c_o *)v1;
  sub_1C93A78(CommandAssistLvUpListViewManager___c_TypeInfo->static_fields, v1);
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
    sub_1C93D2C(this, 0);
  return ent->fields.condType == 177;
}