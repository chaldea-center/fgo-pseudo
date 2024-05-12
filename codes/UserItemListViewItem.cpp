void __fastcall UserItemListViewItem___ctor(
        UserItemListViewItem_o *this,
        UserItemData_o *usrItemData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_String_o *name; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_4389D5D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389D5D = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemData = usrItemData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemData,
    (System_Int32_array **)usrItemData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !usrItemData )
    goto LABEL_9;
  this->fields.itemId = usrItemData->fields.itemId;
  this->fields.itemType = usrItemData->fields.type;
  this->fields.dispPriority = usrItemData->fields.dispPriority;
  this->fields.itemImgId = usrItemData->fields.itemImgId;
  name = usrItemData->fields.name;
  this->fields.itemName = name;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemName,
    (System_Int32_array **)name,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.itemNum = usrItemData->fields.num;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_9:
    sub_B7769C(Instance, v12);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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