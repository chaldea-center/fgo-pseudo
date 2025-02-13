void __fastcall CommandAssistListViewManager___ctor(CommandAssistListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CommandAssistListViewManager__CreateList(
        CommandAssistListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  void *ValidEntityList; // x0
  __int64 v5; // x1
  int v6; // w20
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  void *v9; // x25
  SkillLvEntity_o *Entity; // x0
  System_String_o *Empty; // x26
  int32_t v12; // w27
  int32_t v13; // w28
  System_String_o *v14; // x29
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t size; // w19
  CommandAssistListViewItem_o *v17; // x25
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0
  const MethodInfo *v22; // [xsp+0h] [xbp-80h]

  if ( (byte_4BD6FE5 & 1) == 0 )
  {
    sub_1C21E38(&CommandAssistListViewItem_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_1C21E38(&string_TypeInfo);
    byte_4BD6FE5 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0LL);
  if ( !ValidEntityList )
    goto LABEL_22;
  v6 = *((_DWORD *)ValidEntityList + 6);
  v7 = (System_Collections_Generic_List_object__o *)ValidEntityList;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      ValidEntityList = System_Collections_Generic_List_object___get_Item(
                          v7,
                          v8,
                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !ValidEntityList || !Master_object )
        break;
      v9 = ValidEntityList;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)Master_object,
                 *((_DWORD *)ValidEntityList + 13),
                 *((_DWORD *)ValidEntityList + 14),
                 0LL);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_41206052(Entity, Entity->fields.lv, 0, 0LL)) == 0LL )
        Empty = string_TypeInfo->static_fields->Empty;
      v12 = *((_DWORD *)v9 + 4);
      v13 = *((_DWORD *)v9 + 12);
      v14 = (System_String_o *)*((_QWORD *)v9 + 4);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      size = v7->fields._size;
      v17 = (CommandAssistListViewItem_o *)sub_1C22084(CommandAssistListViewItem_TypeInfo);
      CommandAssistListViewItem___ctor(v17, v8, eventId, v12, v13, v14, Empty, v8 == size - 1, v22);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v20 = itemList->fields._size;
      if ( (unsigned int)v20 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + v20;
        itemList->fields._size = v20 + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1C21DDC(v21 + 4, v17);
      }
      if ( v6 == ++v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C22094(ValidEntityList, v5);
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