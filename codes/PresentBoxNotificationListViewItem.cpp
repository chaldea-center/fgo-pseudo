void __fastcall PresentBoxNotificationListViewItem___ctor(
        PresentBoxNotificationListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *e,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  DataManager_o *Instance; // x0
  __int64 v38; // x1
  int32_t giftType; // w8
  struct ServantEntity_o *Entity; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BattleServantConfConponent_o *p_svtEntity; // x0

  if ( (byte_42E878E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, index, (_DWORD)e, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E878E = 1;
  }
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.entity = e;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.entity,
    (System_Int32_array **)e,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.itemEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.itemEntity, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.svtEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.svtEntity, 0LL, v31, v32, v33, v34, v35, v36);
  if ( !e )
    goto LABEL_15;
  UserPresentBoxEntity__GetInfo(e, &this->fields.presentName, &this->fields.presentCount, 0LL);
  giftType = e->fields.giftType;
  if ( (unsigned int)(giftType - 6) < 2 || giftType == 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             e->fields.objectId,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEntity = Entity;
        p_svtEntity = (BattleServantConfConponent_o *)&this->fields.svtEntity;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_B5D69C(Instance, v38);
  }
  if ( giftType == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             e->fields.objectId,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEntity = (struct ItemEntity_o *)Entity;
        p_svtEntity = (BattleServantConfConponent_o *)&this->fields.itemEntity;
LABEL_13:
        sub_B5D560(p_svtEntity, (System_Int32_array **)Entity, v41, v42, v43, v44, v45, v46);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E878F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10879/*"Present "*/, (_DWORD)method, v2, v3);
    byte_42E878F = 1;
  }
  return System_String__Concat_44577788((System_String_o *)StringLiteral_10879/*"Present "*/, this->fields.presentName, 0LL);
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