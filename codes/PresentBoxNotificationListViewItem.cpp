void __fastcall PresentBoxNotificationListViewItem___ctor(
        PresentBoxNotificationListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *e,
        const MethodInfo *method)
{
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  int32_t giftType; // w8
  struct ServantEntity_o *Entity; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleServantConfConponent_o *p_svtEntity; // x0

  if ( (byte_42AFB49 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFB49 = 1;
  }
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.entity = e;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.entity, (System_Int32_array **)e, v7, v8, v9, v10, v11, v12);
  this->fields.itemEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.itemEntity, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.svtEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.svtEntity, 0LL, v19, v20, v21, v22, v23, v24);
  if ( !e )
    goto LABEL_15;
  UserPresentBoxEntity__GetInfo(e, &this->fields.presentName, &this->fields.presentCount, 0LL);
  giftType = e->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 || giftType == 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             e->fields.objectId,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEntity = Entity;
        p_svtEntity = (BattleServantConfConponent_o *)&this->fields.svtEntity;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_B52A5C(Instance, v26);
  }
  if ( giftType == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             e->fields.objectId,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEntity = (struct ItemEntity_o *)Entity;
        p_svtEntity = (BattleServantConfConponent_o *)&this->fields.itemEntity;
LABEL_13:
        sub_B52920(p_svtEntity, (System_Int32_array **)Entity, v29, v30, v31, v32, v33, v34);
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
  if ( (byte_42AFB4A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10833/*"Present "*/);
    byte_42AFB4A = 1;
  }
  return System_String__Concat_44568316((System_String_o *)StringLiteral_10833/*"Present "*/, this->fields.presentName, 0LL);
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