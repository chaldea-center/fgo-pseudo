void __fastcall PresentBoxNotificationListViewItem___ctor(
        PresentBoxNotificationListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *e,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *p_itemEntity; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int32_t giftType; // w8
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5EC11 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EC11 = 1;
  }
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.entity = e;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.entity, (int32_t)e, v7, v8);
  this->fields.itemEntity = 0LL;
  p_itemEntity = (ServantStatusBattleListViewItem_o *)&this->fields.itemEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, 0, v10, v11);
  this->fields.svtEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, 0, v12, v13);
  if ( !e )
    goto LABEL_15;
  UserPresentBoxEntity__GetInfo(e, &this->fields.presentName, &this->fields.presentCount, 0LL);
  giftType = e->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 || giftType == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   e->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v20 = (int)Entity;
        p_itemEntity = (ServantStatusBattleListViewItem_o *)&this->fields.svtEntity;
        this->fields.svtEntity = (struct ServantEntity_o *)Entity;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1B8880C(Instance, v15);
  }
  if ( giftType == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        v17 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                e->fields.objectId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v20 = (int)v17;
        p_itemEntity->klass = (ServantStatusBattleListViewItem_c *)v17;
LABEL_13:
        sub_1B88554(p_itemEntity, v20, v18, v19);
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
  if ( (byte_4A5EC12 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10727/*"Present "*/);
    byte_4A5EC12 = 1;
  }
  return System_String__Concat_61707032((System_String_o *)StringLiteral_10727/*"Present "*/, this->fields.presentName, 0LL);
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