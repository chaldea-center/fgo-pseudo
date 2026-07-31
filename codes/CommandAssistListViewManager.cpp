void CommandAssistListViewManager___ctor(CommandAssistListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CommandAssistListViewManager__CreateList(
        CommandAssistListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Master_object; // x21
  void *ValidEntityList; // x0
  __int64 v7; // x1
  int v8; // w20
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w23
  void *v11; // x25
  SkillLvEntity_o *Entity; // x0
  System_String_o *Detail_49837896; // x26
  int32_t v14; // w27
  int32_t v15; // w28
  System_String_o *v16; // x29
  int32_t size; // w19
  System_Collections_Generic_List_object__o *itemList; // x24
  CommandAssistListViewItem_o *v19; // x25
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // [xsp+0h] [xbp-80h]

  if ( (byte_5931D41 & 1) == 0 )
  {
    sub_21FFC50(&CommandAssistListViewItem_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    byte_5931D41 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  ValidEntityList = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !ValidEntityList )
    goto LABEL_22;
  ValidEntityList = EventCommandAssistMaster__GetValidEntityList(
                      (EventCommandAssistMaster_o *)ValidEntityList,
                      eventId,
                      -1,
                      0);
  if ( !ValidEntityList )
    goto LABEL_22;
  v8 = *((_DWORD *)ValidEntityList + 6);
  v9 = (System_Collections_Generic_List_object__o *)ValidEntityList;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      ValidEntityList = System_Collections_Generic_List_object___get_Item(
                          v9,
                          v10,
                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !ValidEntityList || !Master_object )
        break;
      v11 = ValidEntityList;
      Entity = SkillLvMaster__GetEntity(
                 (SkillLvMaster_o *)Master_object,
                 *((_DWORD *)ValidEntityList + 13),
                 *((_DWORD *)ValidEntityList + 14),
                 0);
      if ( !Entity || (Detail_49837896 = SkillLvEntity__getDetail_49837896(Entity, Entity->fields.lv, 0, 0)) == 0 )
        Detail_49837896 = **(System_String_o ***)(qword_594C0B8 + 184);
      v14 = *((_DWORD *)v11 + 4);
      v15 = *((_DWORD *)v11 + 12);
      v16 = (System_String_o *)*((_QWORD *)v11 + 4);
      size = v9->fields._size;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v19 = (CommandAssistListViewItem_o *)sub_21FFEBC(CommandAssistListViewItem_TypeInfo);
      CommandAssistListViewItem___ctor(v19, v10, eventId, v14, v15, v16, Detail_49837896, v10 == size - 1, v24);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v22 = itemList->fields._size;
      if ( (unsigned int)v22 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v19,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + v22;
        itemList->fields._size = v22 + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_21FFBF4(v23 + 4, v19);
      }
      if ( v8 == ++v10 )
        goto LABEL_20;
    }
LABEL_22:
    sub_21FFECC(ValidEntityList, v7);
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