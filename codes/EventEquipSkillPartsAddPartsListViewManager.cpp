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
  __int64 v7; // x1
  int32_t v8; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  int32_t skillId; // w24
  System_String_o *name; // x25
  System_String_o *Detail; // x0
  int32_t size; // w27
  System_String_o *v14; // x26
  EventEquipSkillPartsAddPartsListViewItem_o *v15; // x23
  const MethodInfo *v16; // x6
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  if ( (byte_596A577 & 1) == 0 )
  {
    sub_2213A60(&EventEquipSkillPartsAddPartsListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssistEntity__get_Item__);
    byte_596A577 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !assistList )
    goto LABEL_15;
  if ( assistList->fields._size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Item = (AssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)assistList,
                                 v8,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssistEntity__get_Item__);
      if ( !Item )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      skillId = Item->fields.skillId;
      name = Item->fields.name;
      Detail = AssistEntity__GetDetail(Item, 0, 0);
      size = assistList->fields._size;
      v14 = Detail;
      v15 = (EventEquipSkillPartsAddPartsListViewItem_o *)sub_2213CCC(EventEquipSkillPartsAddPartsListViewItem_TypeInfo);
      EventEquipSkillPartsAddPartsListViewItem___ctor(v15, v8, skillId, name, v14, v8 == size - 1, v16);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v25 = itemList->fields._size;
      if ( (unsigned int)v25 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + v25;
        itemList->fields._size = v25 + 1;
        v26[4] = (Il2CppClass *)v15;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v17, v18, v19, v20, v21, v22);
      }
      if ( ++v8 >= assistList->fields._size )
        goto LABEL_13;
    }
LABEL_15:
    sub_2213CDC(Item, v7);
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
    sub_2213CDC(this, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)this, value, 0);
}