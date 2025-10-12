void CommandAssistListViewManager___ctor(CommandAssistListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CommandAssistListViewManager__CreateList(
        CommandAssistListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  void *ValidEntityList; // x0
  int v5; // w20
  System_Collections_Generic_List_object__o *v6; // x22
  int32_t v7; // w23
  void *v8; // x25
  SkillLvEntity_o *Entity; // x0
  System_String_o *Empty; // x26
  int32_t v11; // w27
  int32_t v12; // w28
  System_String_o *v13; // x29
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t size; // w19
  CommandAssistListViewItem_o *v16; // x25
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // [xsp+0h] [xbp-80h]

  if ( (byte_4C31801 & 1) == 0 )
  {
    sub_1C32C20(&CommandAssistListViewItem_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_1C32C20(&string_TypeInfo);
    byte_4C31801 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0);
  if ( !ValidEntityList )
    goto LABEL_22;
  v5 = *((_DWORD *)ValidEntityList + 6);
  v6 = (System_Collections_Generic_List_object__o *)ValidEntityList;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ValidEntityList = System_Collections_Generic_List_object___get_Item(
                          v6,
                          v7,
                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !ValidEntityList || !Master_object )
        break;
      v8 = ValidEntityList;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)Master_object,
                 *((_DWORD *)ValidEntityList + 13),
                 *((_DWORD *)ValidEntityList + 14),
                 0);
      if ( !Entity || (Empty = SkillLvEntity__getDetail_42778376(Entity, Entity->fields.lv, 0, 0)) == 0 )
        Empty = string_TypeInfo->static_fields->Empty;
      v11 = *((_DWORD *)v8 + 4);
      v12 = *((_DWORD *)v8 + 12);
      v13 = (System_String_o *)*((_QWORD *)v8 + 4);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      size = v6->fields._size;
      v16 = (CommandAssistListViewItem_o *)sub_1C32E6C(CommandAssistListViewItem_TypeInfo);
      CommandAssistListViewItem___ctor(v16, v7, eventId, v11, v12, v13, Empty, v7 == size - 1, v21);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v19 = itemList->fields._size;
      if ( (unsigned int)v19 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v16,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + v19;
        itemList->fields._size = v19 + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C32BC4(v20 + 4, v16);
      }
      if ( v5 == ++v7 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C32E7C(ValidEntityList);
  }
LABEL_20:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ValidEntityList = this->fields.scrollView;
  if ( !ValidEntityList )
    goto LABEL_22;
  UIScrollView__ResetPosition((UIScrollView_o *)ValidEntityList, 0);
}


void CommandAssistListViewManager__OnClickListView(
        CommandAssistListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}