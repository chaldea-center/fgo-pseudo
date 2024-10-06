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
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p_itemEntity; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int32_t giftType; // w8
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  Il2CppObject *Entity; // x0

  if ( (byte_4A7392A & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A7392A = 1;
  }
  ListViewItem___ctor_40760684((ListViewItem_o *)this, index, 0LL);
  this->fields.entity = e;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.entity, (int32_t)e, v11, v12);
  this->fields.itemEntity = 0LL;
  p_itemEntity = (ServantStatusBattleListViewItem_o *)&this->fields.itemEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, 0, v14, v15);
  this->fields.svtEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, 0, v16, v17);
  if ( !e )
    goto LABEL_15;
  UserPresentBoxEntity__GetInfo(e, &this->fields.presentName, &this->fields.presentCount, 0LL);
  giftType = e->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 || giftType == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   e->fields.objectId,
                   (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v24 = (int)Entity;
        p_itemEntity = (ServantStatusBattleListViewItem_o *)&this->fields.svtEntity;
        this->fields.svtEntity = (struct ServantEntity_o *)Entity;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1B9026C(Instance, v19);
  }
  if ( giftType == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        v21 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                e->fields.objectId,
                (const MethodInfo_312C5A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v24 = (int)v21;
        p_itemEntity->klass = (ServantStatusBattleListViewItem_c *)v21;
LABEL_13:
        sub_1B8FFB4(p_itemEntity, v24, v22, v23);
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
  if ( (byte_4A7392B & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_10733/*"Present "*/, method);
    byte_4A7392B = 1;
  }
  return System_String__Concat_61787092((System_String_o *)StringLiteral_10733/*"Present "*/, this->fields.presentName, 0LL);
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