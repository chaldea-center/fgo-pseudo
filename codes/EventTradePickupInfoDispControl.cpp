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
        sub_1C2209C(gameObject, v4);
      gameObject = dispGameObjects->m_Items[v7];
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      max_length = dispGameObjects->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_10:
    sub_1C22094(gameObject, v4);
  }
}


void __fastcall EventTradePickupInfoDispControl__SerializeFieldNotNullCheck(
        EventTradePickupInfoDispControl_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventTradePickupInfoDispControl__SetUi(
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
  __int64 v14; // x1
  CommonReleaseMaster_o *v15; // x24
  __int64 v16; // x29
  unsigned __int64 v17; // x25
  __int64 v18; // x8
  int32_t v19; // w26
  System_String_o *v20; // x27
  System_String_o *v21; // x0
  struct UISprite_array *goodsIcon; // x8
  UISprite_o *v23; // x21
  struct UISprite_array *arrowIcon; // x8
  struct ItemIconComponent_array *rewardIcon; // x8
  struct UnityEngine_GameObject_array *dispGameObjects; // x8
  __int64 v27; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD750A & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__);
    sub_1C21E38(&StringLiteral_20758/*"img_popularitem_today"*/);
    sub_1C21E38(&StringLiteral_20759/*"img_popularitem_tommorow"*/);
    sub_1C21E38(&StringLiteral_20520/*"icon_popularitem_unknown"*/);
    sub_1C21E38(&StringLiteral_20757/*"img_popularitem_"*/);
    sub_1C21E38(&StringLiteral_20519/*"icon_popularitem_reward_arrow"*/);
    byte_4BD750A = 1;
  }
  entity = 0LL;
  if ( isToday )
    v8 = (System_String_o **)&StringLiteral_20758/*"img_popularitem_today"*/;
  else
    v8 = (System_String_o **)&StringLiteral_20759/*"img_popularitem_tommorow"*/;
  v9 = *v8;
  bg = this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39104396(eventId, bg, v9, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
  Item = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !pickupEntityList )
    goto LABEL_49;
  if ( pickupEntityList->fields._size >= 1 )
  {
    v15 = Item;
    v16 = 4LL;
    while ( 1 )
    {
      v17 = v16 - 4;
      Item = (CommonReleaseMaster_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)pickupEntityList,
                                        (int)v16 - 4,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__);
      if ( !Item || !Master_object )
        goto LABEL_49;
      Item = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        Item->fields._MasterKind_k__BackingField,
                                        (const MethodInfo_325BE14 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Item & 1) != 0 )
        break;
LABEL_45:
      if ( v17 <= 1 )
      {
        v27 = v16 - 3;
        ++v16;
        if ( v27 < pickupEntityList->fields._size )
          continue;
      }
      goto LABEL_47;
    }
    if ( !entity || !v12 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)GiftMaster__GetGiftListById((GiftMaster_o *)v12, HIDWORD(entity[2].monitor), 0LL);
    if ( Item )
    {
      if ( !LODWORD(Item->fields._MasterName_k__BackingField) )
        goto LABEL_50;
      v18 = *(_QWORD *)&Item->fields.revision;
      if ( !v18 )
        goto LABEL_49;
      v19 = *(_DWORD *)(v18 + 24);
    }
    else
    {
      v19 = 0;
    }
    if ( !entity || !v15 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v15, HIDWORD(entity[4].monitor), 0LL, 0, 0LL);
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
        v20 = (System_String_o *)StringLiteral_20520/*"icon_popularitem_unknown"*/;
LABEL_32:
        goodsIcon = this->fields.goodsIcon;
        if ( !goodsIcon )
          goto LABEL_49;
        if ( v17 >= goodsIcon->max_length )
LABEL_50:
          sub_1C2209C(Item, v14);
        v23 = (UISprite_o *)*((_QWORD *)&goodsIcon->obj.klass + v16);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_39104396(eventId, v23, v20, 0LL);
        arrowIcon = this->fields.arrowIcon;
        if ( !arrowIcon )
          goto LABEL_49;
        if ( v17 >= arrowIcon->max_length )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_39104396(
                                          eventId,
                                          *((UISprite_o **)&arrowIcon->obj.klass + v16),
                                          (System_String_o *)StringLiteral_20519/*"icon_popularitem_reward_arrow"*/,
                                          0LL);
        rewardIcon = this->fields.rewardIcon;
        if ( !rewardIcon )
          goto LABEL_49;
        if ( v17 >= rewardIcon->max_length )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&rewardIcon->obj.klass + v16);
        if ( !Item )
          goto LABEL_49;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Item, v19, -1, 1, 0LL);
        dispGameObjects = this->fields.dispGameObjects;
        if ( !dispGameObjects )
          goto LABEL_49;
        if ( v17 >= dispGameObjects->max_length )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&dispGameObjects->obj.klass + v16);
        if ( !Item )
          goto LABEL_49;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0LL);
        goto LABEL_45;
      }
    }
    v21 = System_Int32__ToString((int)entity + 40, 0LL);
    Item = (CommonReleaseMaster_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_20757/*"img_popularitem_"*/, v21, 0LL);
    v20 = (System_String_o *)Item;
    goto LABEL_32;
  }
LABEL_47:
  Item = (CommonReleaseMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Item )
LABEL_49:
    sub_1C22094(Item, v14);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0LL);
}