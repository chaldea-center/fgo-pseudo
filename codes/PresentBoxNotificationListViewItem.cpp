// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewItem___ctor(
        PresentBoxNotificationListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *e,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  int32_t giftType; // w8
  struct ServantEntity_o *Entity; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleServantConfConponent_o *p_svtEntity; // x0

  if ( (byte_4186B75 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4186B75 = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.entity = e;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.entity,
    (System_Int32_array **)e,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.itemEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.itemEntity, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.svtEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.svtEntity, 0LL, v23, v24, v25, v26, v27, v28);
  if ( !e )
    goto LABEL_15;
  UserPresentBoxEntity__GetInfo(e, &this->fields.presentName, &this->fields.presentCount, 0LL);
  giftType = e->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 || giftType == 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             e->fields.objectId,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEntity = Entity;
        p_svtEntity = (BattleServantConfConponent_o *)&this->fields.svtEntity;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_B2C434(Instance, v30);
  }
  if ( giftType == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             e->fields.objectId,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEntity = (struct ItemEntity_o *)Entity;
        p_svtEntity = (BattleServantConfConponent_o *)&this->fields.itemEntity;
LABEL_13:
        sub_B2C2F8(p_svtEntity, (System_Int32_array **)Entity, v33, v34, v35, v36, v37, v38);
        return;
      }
    }
    goto LABEL_15;
  }
}


void __fastcall PresentBoxNotificationListViewItem__Finalize(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall PresentBoxNotificationListViewItem__ToString(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186B76 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10750/*"Present "*/, method);
    byte_4186B76 = 1;
  }
  return System_String__Concat_44305532((System_String_o *)StringLiteral_10750/*"Present "*/, this->fields.presentName, 0LL);
}


System_String_o *__fastcall PresentBoxNotificationListViewItem__get_CountText(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.presentCount;
}


int32_t __fastcall PresentBoxNotificationListViewItem__get_GiftType(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( entity )
    return entity->fields.giftType;
  else
    return 0;
}


ItemEntity_o *__fastcall PresentBoxNotificationListViewItem__get_Item(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.itemEntity;
}


System_String_o *__fastcall PresentBoxNotificationListViewItem__get_NameText(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.presentName;
}


int32_t __fastcall PresentBoxNotificationListViewItem__get_ObjactId(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( entity )
    return entity->fields.objectId;
  else
    return 0;
}


ServantEntity_o *__fastcall PresentBoxNotificationListViewItem__get_Servant(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtEntity;
}


UserPresentBoxEntity_o *__fastcall PresentBoxNotificationListViewItem__get_UserPresentBox(
        PresentBoxNotificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.entity;
}