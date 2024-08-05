void __fastcall EventTradePickupInfoDispControl___ctor(
        EventTradePickupInfoDispControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTradePickupInfoDispControl__Init(
        EventTradePickupInfoDispControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *dispGameObjects; // x19
  int max_length; // w8
  unsigned int v7; // w20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  dispGameObjects = this->fields.dispGameObjects;
  if ( !dispGameObjects )
    goto LABEL_10;
  max_length = dispGameObjects->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B64AD4(gameObject, v4);
      gameObject = dispGameObjects->m_Items[v7];
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      max_length = dispGameObjects->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_10:
    sub_1B64ACC(gameObject, v4);
  }
}


void __fastcall EventTradePickupInfoDispControl__SerializeFieldNotNullCheck(
        EventTradePickupInfoDispControl_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradePickupInfoDispControl__SetUi(
        EventTradePickupInfoDispControl_o *this,
        int32_t eventId,
        System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList,
        bool isToday,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o **v20; // x8
  System_String_o *v21; // x22
  UISprite_o *bg; // x23
  Il2CppObject *Master_object; // x22
  Il2CppObject *v24; // x23
  CommonReleaseMaster_o *Item; // x0
  __int64 v26; // x1
  CommonReleaseMaster_o *v27; // x24
  __int64 v28; // x29
  unsigned __int64 v29; // x25
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  int32_t monitor; // w26
  System_String_o *v32; // x27
  System_String_o *v33; // x0
  struct UISprite_array *goodsIcon; // x8
  UISprite_o *v35; // x21
  struct UISprite_array *arrowIcon; // x8
  struct ItemIconComponent_array *rewardIcon; // x8
  struct UnityEngine_GameObject_array *dispGameObjects; // x8
  __int64 v39; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A027E5 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64870(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_1B64870(&DataManager_TypeInfo, v11);
    sub_1B64870(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__, v14);
    sub_1B64870(&StringLiteral_20316/*"img_popularitem_today"*/, v15);
    sub_1B64870(&StringLiteral_20317/*"img_popularitem_tommorow"*/, v16);
    sub_1B64870(&StringLiteral_20089/*"icon_popularitem_unknown"*/, v17);
    sub_1B64870(&StringLiteral_20315/*"img_popularitem_"*/, v18);
    sub_1B64870(&StringLiteral_20088/*"icon_popularitem_reward_arrow"*/, v19);
    byte_4A027E5 = 1;
  }
  entity = 0LL;
  if ( isToday )
    v20 = (System_String_o **)&StringLiteral_20316/*"img_popularitem_today"*/;
  else
    v20 = (System_String_o **)&StringLiteral_20317/*"img_popularitem_tommorow"*/;
  v21 = *v20;
  bg = this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37549072(eventId, bg, v21, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_GiftMaster___);
  Item = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !pickupEntityList )
    goto LABEL_49;
  if ( pickupEntityList->fields._size >= 1 )
  {
    v27 = Item;
    v28 = 4LL;
    while ( 1 )
    {
      v29 = v28 - 4;
      Item = (CommonReleaseMaster_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)pickupEntityList,
                                        (int)v28 - 4,
                                        (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__);
      if ( !Item || !Master_object )
        goto LABEL_49;
      Item = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        Item->fields._MasterKind_k__BackingField,
                                        (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Item & 1) != 0 )
        break;
LABEL_45:
      if ( v29 <= 1 )
      {
        v39 = v28 - 3;
        ++v28;
        if ( v39 < pickupEntityList->fields._size )
          continue;
      }
      goto LABEL_47;
    }
    if ( !entity || !v24 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)GiftMaster__GetGiftListById((GiftMaster_o *)v24, HIDWORD(entity[2].klass), 0LL);
    if ( Item )
    {
      if ( !LODWORD(Item->fields._MasterName_k__BackingField) )
        goto LABEL_50;
      list = Item->fields.list;
      if ( !list )
        goto LABEL_49;
      monitor = (int32_t)list->fields._monitor;
    }
    else
    {
      monitor = 0;
    }
    if ( !entity || !v27 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v27, HIDWORD(entity[4].klass), 0LL, 0, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_49;
    }
    else
    {
      if ( !entity )
        goto LABEL_49;
      if ( HIDWORD(entity[4].klass) )
      {
        v32 = (System_String_o *)StringLiteral_20089/*"icon_popularitem_unknown"*/;
LABEL_32:
        goodsIcon = this->fields.goodsIcon;
        if ( !goodsIcon )
          goto LABEL_49;
        if ( v29 >= goodsIcon->max_length )
LABEL_50:
          sub_1B64AD4(Item, v26);
        v35 = (UISprite_o *)*((_QWORD *)&goodsIcon->obj.klass + v28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_37549072(eventId, v35, v32, 0LL);
        arrowIcon = this->fields.arrowIcon;
        if ( !arrowIcon )
          goto LABEL_49;
        if ( v29 >= arrowIcon->max_length )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_37549072(
                                          eventId,
                                          *((UISprite_o **)&arrowIcon->obj.klass + v28),
                                          (System_String_o *)StringLiteral_20088/*"icon_popularitem_reward_arrow"*/,
                                          0LL);
        rewardIcon = this->fields.rewardIcon;
        if ( !rewardIcon )
          goto LABEL_49;
        if ( v29 >= rewardIcon->max_length )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&rewardIcon->obj.klass + v28);
        if ( !Item )
          goto LABEL_49;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Item, monitor, -1, 0LL);
        dispGameObjects = this->fields.dispGameObjects;
        if ( !dispGameObjects )
          goto LABEL_49;
        if ( v29 >= dispGameObjects->max_length )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&dispGameObjects->obj.klass + v28);
        if ( !Item )
          goto LABEL_49;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0LL);
        goto LABEL_45;
      }
    }
    v33 = System_Int32__ToString((int)entity + 32, 0LL);
    Item = (CommonReleaseMaster_o *)System_String__Concat_61383576((System_String_o *)StringLiteral_20315/*"img_popularitem_"*/, v33, 0LL);
    v32 = (System_String_o *)Item;
    goto LABEL_32;
  }
LABEL_47:
  Item = (CommonReleaseMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Item )
LABEL_49:
    sub_1B64ACC(Item, v26);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0LL);
}