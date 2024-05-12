void __fastcall CommandAssistListViewManager___ctor(CommandAssistListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CommandAssistListViewManager__CreateList(
        CommandAssistListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x21
  void *ValidEntityList; // x0
  __int64 v5; // x1
  void *v6; // x22
  unsigned int v7; // w8
  __int64 i; // x23
  __int64 v9; // x20
  SkillLvEntity_o *Entity; // x0
  System_String_o *Empty; // x25
  int32_t v12; // w27
  int32_t v13; // w28
  System_String_o *v14; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int v16; // w19
  CommandAssistListViewItem_o *v17; // x26
  const MethodInfo *v18; // [xsp+0h] [xbp-70h]
  int v19; // [xsp+10h] [xbp-60h]

  if ( (byte_438DEC5 & 1) == 0 )
  {
    sub_B775C4(&CommandAssistListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_B775C4(&string_TypeInfo);
    byte_438DEC5 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0LL);
  if ( !ValidEntityList )
    goto LABEL_22;
  v6 = ValidEntityList;
  v19 = *((_DWORD *)ValidEntityList + 6);
  if ( v19 >= 1 )
  {
    v7 = *((_DWORD *)ValidEntityList + 6);
    for ( i = 0LL; ; ++i )
    {
      if ( v7 <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 8 * i + 32);
      if ( !v9 || !Master_WarQuestSelectionMaster )
        break;
      Entity = SkillLvMaster__GetEntity(Master_WarQuestSelectionMaster, *(_DWORD *)(v9 + 52), *(_DWORD *)(v9 + 56), 0LL);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_26832724(Entity, Entity->fields.lv, 0, 0LL)) == 0LL )
        Empty = string_TypeInfo->static_fields->Empty;
      v12 = *(_DWORD *)(v9 + 16);
      v13 = *(_DWORD *)(v9 + 48);
      v14 = *(System_String_o **)(v9 + 32);
      itemList = this->fields.itemList;
      v16 = *((_DWORD *)v6 + 6);
      v17 = (CommandAssistListViewItem_o *)sub_B77694(CommandAssistListViewItem_TypeInfo);
      CommandAssistListViewItem___ctor(v17, i, eventId, v12, v13, v14, Empty, (_DWORD)i == v16 - 1, v18);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)i + 1 >= v19 )
        goto LABEL_20;
      v7 = *((_DWORD *)v6 + 6);
    }
LABEL_22:
    sub_B7769C(ValidEntityList, v5);
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