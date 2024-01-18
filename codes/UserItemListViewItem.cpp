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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_String_o *name; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_418700B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, usrItemData);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418700B = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemData = usrItemData;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemName,
    (System_Int32_array **)name,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.itemNum = usrItemData->fields.num;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_9:
    sub_B2C434(Instance, v14);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.itemId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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