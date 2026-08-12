void EventTradePickupInfoDispControl___ctor(EventTradePickupInfoDispControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventTradePickupInfoDispControl__Init(EventTradePickupInfoDispControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *dispGameObjects; // x19
  int max_length; // w8
  __int64 v7; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  dispGameObjects = this->fields.dispGameObjects;
  if ( !dispGameObjects )
    goto LABEL_9;
  max_length = dispGameObjects->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
        sub_2213CE4(gameObject);
      gameObject = dispGameObjects->m_Items[v7];
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      max_length = dispGameObjects->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_9:
    sub_2213CDC(gameObject, v4);
  }
}


void EventTradePickupInfoDispControl__SerializeFieldNotNullCheck(
        EventTradePickupInfoDispControl_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventTradePickupInfoDispControl__SetUi(
        EventTradePickupInfoDispControl_o *this,
        int32_t eventId,
        System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList,
        bool isToday,
        const MethodInfo *method)
{
  System_String_o **v8; // x8
  UISprite_o *bg; // x23
  System_String_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Master_object; // x22
  Il2CppObject *v14; // x23
  CommonReleaseMaster_o *Item; // x0
  __int64 v16; // x1
  CommonReleaseMaster_o *v17; // x24
  __int64 v18; // x29
  unsigned __int64 v19; // x25
  __int64 v20; // x8
  int32_t v21; // w26
  __int64 v22; // x2
  System_String_o *v23; // x27
  System_String_o *v24; // x0
  struct UISprite_array *goodsIcon; // x8
  UISprite_o *v26; // x20
  struct UISprite_array *arrowIcon; // x8
  struct ItemIconComponent_array *rewardIcon; // x8
  struct UnityEngine_GameObject_array *dispGameObjects; // x8
  __int64 v30; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596AD72 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__);
    sub_2213A60(&StringLiteral_21484/*"img_popularitem_today"*/);
    sub_2213A60(&StringLiteral_21485/*"img_popularitem_tommorow"*/);
    sub_2213A60(&StringLiteral_21193/*"icon_popularitem_unknown"*/);
    sub_2213A60(&StringLiteral_21483/*"img_popularitem_"*/);
    sub_2213A60(&StringLiteral_21192/*"icon_popularitem_reward_arrow"*/);
    byte_596AD72 = 1;
  }
  entity = 0;
  if ( isToday )
    v8 = (System_String_o **)&StringLiteral_21484/*"img_popularitem_today"*/;
  else
    v8 = (System_String_o **)&StringLiteral_21485/*"img_popularitem_tommorow"*/;
  bg = this->fields.bg;
  v10 = *v8;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId, pickupEntityList);
  AtlasManager__SetEventUI_47569484(eventId, bg, v10, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  Item = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !pickupEntityList )
    goto LABEL_49;
  if ( pickupEntityList->fields._size >= 1 )
  {
    v17 = Item;
    v18 = 4;
    while ( 1 )
    {
      v19 = v18 - 4;
      Item = (CommonReleaseMaster_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)pickupEntityList,
                                        (int)v18 - 4,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__);
      if ( !Item || !Master_object )
        goto LABEL_49;
      Item = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        Item->fields._MasterKind_k__BackingField,
                                        (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Item & 1) != 0 )
        break;
LABEL_45:
      if ( v19 <= 1 )
      {
        v30 = v18 - 3;
        ++v18;
        if ( v30 < pickupEntityList->fields._size )
          continue;
      }
      goto LABEL_47;
    }
    if ( !entity || !v14 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)GiftMaster__GetGiftListById((GiftMaster_o *)v14, HIDWORD(entity[2].monitor), 0);
    if ( Item )
    {
      if ( !LODWORD(Item->fields._MasterName_k__BackingField) )
        goto LABEL_50;
      v20 = *(_QWORD *)&Item->fields.revision;
      if ( !v20 )
        goto LABEL_49;
      v21 = *(_DWORD *)(v20 + 24);
    }
    else
    {
      v21 = 0;
    }
    if ( !entity || !v17 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v17, HIDWORD(entity[4].monitor), 0, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_49;
    }
    else
    {
      if ( !entity )
        goto LABEL_49;
      if ( HIDWORD(entity[4].monitor) )
      {
        v23 = (System_String_o *)StringLiteral_21193/*"icon_popularitem_unknown"*/;
LABEL_32:
        goodsIcon = this->fields.goodsIcon;
        if ( !goodsIcon )
          goto LABEL_49;
        if ( v19 >= LODWORD(goodsIcon->max_length) )
LABEL_50:
          sub_2213CE4(Item);
        v26 = (UISprite_o *)*((_QWORD *)&goodsIcon->obj.klass + v18);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v22);
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_47569484(eventId, v26, v23, 0);
        arrowIcon = this->fields.arrowIcon;
        if ( !arrowIcon )
          goto LABEL_49;
        if ( v19 >= LODWORD(arrowIcon->max_length) )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_47569484(
                                          eventId,
                                          *((UISprite_o **)&arrowIcon->obj.klass + v18),
                                          (System_String_o *)StringLiteral_21192/*"icon_popularitem_reward_arrow"*/,
                                          0);
        rewardIcon = this->fields.rewardIcon;
        if ( !rewardIcon )
          goto LABEL_49;
        if ( v19 >= LODWORD(rewardIcon->max_length) )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&rewardIcon->obj.klass + v18);
        if ( !Item )
          goto LABEL_49;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Item, v21, -1, 1, 0);
        dispGameObjects = this->fields.dispGameObjects;
        if ( !dispGameObjects )
          goto LABEL_49;
        if ( v19 >= LODWORD(dispGameObjects->max_length) )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&dispGameObjects->obj.klass + v18);
        if ( !Item )
          goto LABEL_49;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0);
        goto LABEL_45;
      }
    }
    v24 = System_Int32__ToString((int)entity + 40, 0);
    Item = (CommonReleaseMaster_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_21483/*"img_popularitem_"*/, v24, 0);
    v23 = (System_String_o *)Item;
    goto LABEL_32;
  }
LABEL_47:
  Item = (CommonReleaseMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Item )
LABEL_49:
    sub_2213CDC(Item, v16);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0);
}