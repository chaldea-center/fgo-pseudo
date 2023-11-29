void __fastcall UserItemListViewItem___ctor(
        UserItemListViewItem_o *this,
        UserItemData_o *usrItemData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_String_o *name; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F9715 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, usrItemData);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F9715 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemData = usrItemData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemData,
    (System_Int32_array **)usrItemData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !usrItemData )
    goto LABEL_9;
  this->fields.itemId = usrItemData->fields.itemId;
  this->fields.itemType = usrItemData->fields.type;
  this->fields.dispPriority = usrItemData->fields.dispPriority;
  this->fields.itemImgId = usrItemData->fields.itemImgId;
  name = usrItemData->fields.name;
  this->fields.itemName = name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemName,
    (System_Int32_array **)name,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.itemNum = usrItemData->fields.num;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.itemId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( Entity )
    this->fields.itemLostTime = *(_QWORD *)&Entity->fields.eventId;
}


void __fastcall UserItemListViewItem__Finalize(UserItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall UserItemListViewItem__SetSortValue(
        UserItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t dispPriority; // x9
  bool result; // w0

  dispPriority = this->fields.dispPriority;
  *(_WORD *)&this->fields.isTermination = 0;
  result = 1;
  this->fields.sortValue1 = dispPriority;
  return result;
}


int32_t __fastcall UserItemListViewItem__get_DispPriority(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dispPriority;
}


int32_t __fastcall UserItemListViewItem__get_ItemId(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}


int32_t __fastcall UserItemListViewItem__get_ItemImgId(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemImgId;
}


int64_t __fastcall UserItemListViewItem__get_ItemLostTime(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemLostTime;
}


System_String_o *__fastcall UserItemListViewItem__get_ItemName(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemName;
}


int32_t __fastcall UserItemListViewItem__get_ItemNum(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemNum;
}


int32_t __fastcall UserItemListViewItem__get_ItemType(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemType;
}


UserItemData_o *__fastcall UserItemListViewItem__get_userItemData(
        UserItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.itemData;
}