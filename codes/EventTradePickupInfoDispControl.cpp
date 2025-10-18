void EventTradePickupInfoDispControl___ctor(EventTradePickupInfoDispControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventTradePickupInfoDispControl__Init(EventTradePickupInfoDispControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_array *dispGameObjects; // x19
  int max_length; // w8
  unsigned int v6; // w20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  dispGameObjects = this->fields.dispGameObjects;
  if ( !dispGameObjects )
    goto LABEL_10;
  max_length = dispGameObjects->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C372BC(gameObject);
      gameObject = dispGameObjects->m_Items[v6];
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      max_length = dispGameObjects->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_10:
    sub_1C372B4(gameObject);
  }
}


void EventTradePickupInfoDispControl__SerializeFieldNotNullCheck(
        EventTradePickupInfoDispControl_o *this,
        const MethodInfo *method)
{
  ;
}


void EventTradePickupInfoDispControl__SetUi(
        EventTradePickupInfoDispControl_o *this,
        int32_t eventId,
        System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList,
        bool isToday,
        const MethodInfo *method)
{
  System_String_o **v8; // x8
  System_String_o *v9; // x22
  UISprite_o *bg; // x23
  Il2CppObject *Master_object; // x22
  Il2CppObject *v12; // x23
  CommonReleaseMaster_o *Item; // x0
  CommonReleaseMaster_o *v14; // x24
  __int64 v15; // x29
  unsigned __int64 v16; // x25
  __int64 v17; // x8
  int32_t v18; // w26
  System_String_o *v19; // x27
  System_String_o *v20; // x0
  struct UISprite_array *goodsIcon; // x8
  UISprite_o *v22; // x21
  struct UISprite_array *arrowIcon; // x8
  struct ItemIconComponent_array *rewardIcon; // x8
  struct UnityEngine_GameObject_array *dispGameObjects; // x8
  __int64 v26; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3DA1E & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__);
    sub_1C37058(&StringLiteral_20494/*"img_popularitem_today"*/);
    sub_1C37058(&StringLiteral_20495/*"img_popularitem_tommorow"*/);
    sub_1C37058(&StringLiteral_20217/*"icon_popularitem_unknown"*/);
    sub_1C37058(&StringLiteral_20493/*"img_popularitem_"*/);
    sub_1C37058(&StringLiteral_20216/*"icon_popularitem_reward_arrow"*/);
    byte_4C3DA1E = 1;
  }
  entity = 0;
  if ( isToday )
    v8 = (System_String_o **)&StringLiteral_20494/*"img_popularitem_today"*/;
  else
    v8 = (System_String_o **)&StringLiteral_20495/*"img_popularitem_tommorow"*/;
  v9 = *v8;
  bg = this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40606984(eventId, bg, v9, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftMaster___);
  Item = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !pickupEntityList )
    goto LABEL_49;
  if ( pickupEntityList->fields._size >= 1 )
  {
    v14 = Item;
    v15 = 4;
    while ( 1 )
    {
      v16 = v15 - 4;
      Item = (CommonReleaseMaster_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)pickupEntityList,
                                        (int)v15 - 4,
                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__);
      if ( !Item || !Master_object )
        goto LABEL_49;
      Item = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        Item->fields._MasterKind_k__BackingField,
                                        (const MethodInfo_33A10EC *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Item & 1) != 0 )
        break;
LABEL_45:
      if ( v16 <= 1 )
      {
        v26 = v15 - 3;
        ++v15;
        if ( v26 < pickupEntityList->fields._size )
          continue;
      }
      goto LABEL_47;
    }
    if ( !entity || !v12 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)GiftMaster__GetGiftListById((GiftMaster_o *)v12, HIDWORD(entity[2].monitor), 0);
    if ( Item )
    {
      if ( !LODWORD(Item->fields._MasterName_k__BackingField) )
        goto LABEL_50;
      v17 = *(_QWORD *)&Item->fields.revision;
      if ( !v17 )
        goto LABEL_49;
      v18 = *(_DWORD *)(v17 + 24);
    }
    else
    {
      v18 = 0;
    }
    if ( !entity || !v14 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v14, HIDWORD(entity[4].monitor), 0, 0, 0);
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
        v19 = (System_String_o *)StringLiteral_20217/*"icon_popularitem_unknown"*/;
LABEL_32:
        goodsIcon = this->fields.goodsIcon;
        if ( !goodsIcon )
          goto LABEL_49;
        if ( v16 >= LODWORD(goodsIcon->max_length) )
LABEL_50:
          sub_1C372BC(Item);
        v22 = (UISprite_o *)*((_QWORD *)&goodsIcon->obj.klass + v15);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_40606984(eventId, v22, v19, 0);
        arrowIcon = this->fields.arrowIcon;
        if ( !arrowIcon )
          goto LABEL_49;
        if ( v16 >= LODWORD(arrowIcon->max_length) )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_40606984(
                                          eventId,
                                          *((UISprite_o **)&arrowIcon->obj.klass + v15),
                                          (System_String_o *)StringLiteral_20216/*"icon_popularitem_reward_arrow"*/,
                                          0);
        rewardIcon = this->fields.rewardIcon;
        if ( !rewardIcon )
          goto LABEL_49;
        if ( v16 >= LODWORD(rewardIcon->max_length) )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&rewardIcon->obj.klass + v15);
        if ( !Item )
          goto LABEL_49;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Item, v18, -1, 1, 0);
        dispGameObjects = this->fields.dispGameObjects;
        if ( !dispGameObjects )
          goto LABEL_49;
        if ( v16 >= LODWORD(dispGameObjects->max_length) )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&dispGameObjects->obj.klass + v15);
        if ( !Item )
          goto LABEL_49;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0);
        goto LABEL_45;
      }
    }
    v20 = System_Int32__ToString((int)entity + 40, 0);
    Item = (CommonReleaseMaster_o *)System_String__Concat_63561656((System_String_o *)StringLiteral_20493/*"img_popularitem_"*/, v20, 0);
    v19 = (System_String_o *)Item;
    goto LABEL_32;
  }
LABEL_47:
  Item = (CommonReleaseMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Item )
LABEL_49:
    sub_1C372B4(Item);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0);
}