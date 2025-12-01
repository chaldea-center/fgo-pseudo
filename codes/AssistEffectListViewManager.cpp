void AssistEffectListViewManager___ctor(AssistEffectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


int32_t AssistEffectListViewManager__CreateList(
        AssistEffectListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  void *v9; // x25
  System_String_o *Detail; // x0
  System_Collections_Generic_List_object__o *itemList; // x24
  int32_t v12; // w26
  int32_t v13; // w27
  System_String_o *v14; // x28
  int32_t size; // w20
  System_String_o *v16; // x29
  AssistEffectListViewItem_o *v17; // x25
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0
  const MethodInfo *v23; // [xsp+0h] [xbp-70h]

  if ( (byte_4CC1084 & 1) == 0 )
  {
    sub_1C713B0(&AssistEffectListViewItem_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC1084 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_17;
  v6 = *((_DWORD *)Instance + 6);
  v7 = (System_Collections_Generic_List_object__o *)Instance;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v7,
                   v8,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_AssistEntity__get_Item__);
      if ( !Instance )
        break;
      v9 = Instance;
      Detail = AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v12 = *((_DWORD *)v9 + 4);
      v13 = *((_DWORD *)v9 + 9);
      v14 = (System_String_o *)*((_QWORD *)v9 + 3);
      size = v7->fields._size;
      v16 = Detail;
      v17 = (AssistEffectListViewItem_o *)sub_1C715FC(AssistEffectListViewItem_TypeInfo);
      AssistEffectListViewItem___ctor(v17, v8, eventId, v12, v13, v14, v16, v8 == size - 1, v23);
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v20 = itemList->fields._size;
      if ( (unsigned int)v20 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + v20;
        itemList->fields._size = v20 + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1C71354(v21 + 4, v17);
      }
      if ( v6 == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C71608(Instance, v5);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  Instance = this->fields.scrollView;
  if ( !Instance )
    goto LABEL_17;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
  return v6;
}


void AssistEffectListViewManager__OnClickListView(
        AssistEffectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}