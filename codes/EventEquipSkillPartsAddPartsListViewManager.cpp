void EventEquipSkillPartsAddPartsListViewManager___ctor(
        EventEquipSkillPartsAddPartsListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventEquipSkillPartsAddPartsListViewManager__CreateList(
        EventEquipSkillPartsAddPartsListViewManager_o *this,
        int32_t eventId,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        const MethodInfo *method)
{
  AssistEntity_o *Item; // x0
  int32_t v7; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  int32_t skillId; // w24
  System_String_o *name; // x25
  System_String_o *Detail; // x0
  int32_t size; // w27
  System_String_o *v13; // x26
  EventEquipSkillPartsAddPartsListViewItem_o *v14; // x23
  const MethodInfo *v15; // x6
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C31C6D & 1) == 0 )
  {
    sub_1C32C20(&EventEquipSkillPartsAddPartsListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssistEntity__get_Item__);
    byte_4C31C6D = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !assistList )
    goto LABEL_15;
  if ( assistList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      Item = (AssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)assistList,
                                 v7,
                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_AssistEntity__get_Item__);
      if ( !Item )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      skillId = Item->fields.skillId;
      name = Item->fields.name;
      Detail = AssistEntity__GetDetail(Item, 0, 0);
      size = assistList->fields._size;
      v13 = Detail;
      v14 = (EventEquipSkillPartsAddPartsListViewItem_o *)sub_1C32E6C(EventEquipSkillPartsAddPartsListViewItem_TypeInfo);
      EventEquipSkillPartsAddPartsListViewItem___ctor(v14, v7, skillId, name, v13, v7 == size - 1, v15);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v18 = itemList->fields._size;
      if ( (unsigned int)v18 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v14,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + v18;
        itemList->fields._size = v18 + 1;
        v19[4] = (Il2CppClass *)v14;
        sub_1C32BC4(v19 + 4, v14);
      }
      if ( ++v7 >= assistList->fields._size )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C32E7C(Item);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  Item = (AssistEntity_o *)this->fields.scrollView;
  if ( !Item )
    goto LABEL_15;
  UIScrollView__ResetPosition((UIScrollView_o *)Item, 0);
}


void EventEquipSkillPartsAddPartsListViewManager__OnClickListView(
        EventEquipSkillPartsAddPartsListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void EventEquipSkillPartsAddPartsListViewManager__SetScrollBarValue(
        EventEquipSkillPartsAddPartsListViewManager_o *this,
        float value,
        const MethodInfo *method)
{
  struct UIScrollView_o *scrollView; // x8

  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (this = (EventEquipSkillPartsAddPartsListViewManager_o *)scrollView->fields.verticalScrollBar) == 0 )
  {
    sub_1C32E7C(this);
  }
  UIProgressBar__set_value((UIProgressBar_o *)this, value, 0);
}