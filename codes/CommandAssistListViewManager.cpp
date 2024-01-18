void __fastcall CommandAssistListViewManager___ctor(CommandAssistListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandAssistListViewManager__CreateList(
        CommandAssistListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x21
  void *ValidEntityList; // x0
  __int64 v12; // x1
  void *v13; // x22
  unsigned int v14; // w8
  __int64 i; // x23
  __int64 v16; // x20
  SkillLvEntity_o *Entity; // x0
  System_String_o *Empty; // x25
  int32_t v19; // w27
  int32_t v20; // w28
  System_String_o *v21; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int v23; // w19
  CommandAssistListViewItem_o *v24; // x26
  const MethodInfo *v25; // [xsp+0h] [xbp-70h]
  int v26; // [xsp+10h] [xbp-60h]

  if ( (byte_418807A & 1) == 0 )
  {
    sub_B2C35C(&CommandAssistListViewItem_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v8);
    sub_B2C35C(&string_TypeInfo, v9);
    byte_418807A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0LL);
  if ( !ValidEntityList )
    goto LABEL_22;
  v13 = ValidEntityList;
  v26 = *((_DWORD *)ValidEntityList + 6);
  if ( v26 >= 1 )
  {
    v14 = *((_DWORD *)ValidEntityList + 6);
    for ( i = 0LL; ; ++i )
    {
      if ( v14 <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v16 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 8 * i + 32);
      if ( !v16 || !Master_WarQuestSelectionMaster )
        break;
      Entity = SkillLvMaster__GetEntity(
                 Master_WarQuestSelectionMaster,
                 *(_DWORD *)(v16 + 52),
                 *(_DWORD *)(v16 + 56),
                 0LL);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_23775852(Entity, Entity->fields.lv, 0, 0LL)) == 0LL )
        Empty = string_TypeInfo->static_fields->Empty;
      v19 = *(_DWORD *)(v16 + 16);
      v20 = *(_DWORD *)(v16 + 48);
      v21 = *(System_String_o **)(v16 + 32);
      itemList = this->fields.itemList;
      v23 = *((_DWORD *)v13 + 6);
      v24 = (CommandAssistListViewItem_o *)sub_B2C42C(CommandAssistListViewItem_TypeInfo);
      CommandAssistListViewItem___ctor(v24, i, eventId, v19, v20, v21, Empty, (_DWORD)i == v23 - 1, v25);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)i + 1 >= v26 )
        goto LABEL_20;
      v14 = *((_DWORD *)v13 + 6);
    }
LABEL_22:
    sub_B2C434(ValidEntityList, v12);
  }
LABEL_20:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ValidEntityList = this->fields.scrollView;
  if ( !ValidEntityList )
    goto LABEL_22;
  UIScrollView__ResetPosition((UIScrollView_o *)ValidEntityList, 0LL);
}


void __fastcall CommandAssistListViewManager__OnClickListView(
        CommandAssistListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}