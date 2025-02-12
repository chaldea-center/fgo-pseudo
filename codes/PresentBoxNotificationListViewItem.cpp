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
  _QWORD *p_itemEntity; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int32_t giftType; // w8

  if ( (byte_4BC2718 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BC2718 = 1;
  }
  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.entity = e;
  sub_1C1AB78(&this->fields.entity);
  this->fields.itemEntity = 0LL;
  p_itemEntity = &this->fields.itemEntity;
  sub_1C1AB78(&this->fields.itemEntity);
  this->fields.svtEntity = 0LL;
  Instance = (Il2CppObject *)sub_1C1AB78(&this->fields.svtEntity);
  if ( !e )
    goto LABEL_15;
  UserPresentBoxEntity__GetInfo(e, &this->fields.presentName, &this->fields.presentCount, 0LL);
  giftType = e->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 || giftType == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        p_itemEntity = &this->fields.svtEntity;
        this->fields.svtEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                             e->fields.objectId,
                                                             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1C1AE30(Instance, v13);
  }
  if ( giftType == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        *p_itemEntity = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          e->fields.objectId,
                          (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
LABEL_13:
        sub_1C1AB78(p_itemEntity);
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
  if ( (byte_4BC2719 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10926/*"Present "*/, method);
    byte_4BC2719 = 1;
  }
  return System_String__Concat_63040368((System_String_o *)StringLiteral_10926/*"Present "*/, this->fields.presentName, 0LL);
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