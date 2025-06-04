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
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *dispGameObjects; // x19
  int max_length; // w8
  unsigned int v8; // w20

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
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1BC326C(gameObject, v4, v5);
      gameObject = dispGameObjects->m_Items[v8];
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      max_length = dispGameObjects->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_10:
    sub_1BC3264(gameObject, v4);
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
  __int64 v30; // x2
  __int64 v31; // x8
  int32_t v32; // w26
  System_String_o *v33; // x27
  System_String_o *v34; // x0
  struct UISprite_array *goodsIcon; // x8
  UISprite_o *v36; // x21
  struct UISprite_array *arrowIcon; // x8
  struct ItemIconComponent_array *rewardIcon; // x8
  struct UnityEngine_GameObject_array *dispGameObjects; // x8
  __int64 v40; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFCADD & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_GiftMaster___, v10);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__, v14);
    sub_1BC3008(&StringLiteral_20293/*"img_popularitem_today"*/, v15);
    sub_1BC3008(&StringLiteral_20294/*"img_popularitem_tommorow"*/, v16);
    sub_1BC3008(&StringLiteral_20023/*"icon_popularitem_unknown"*/, v17);
    sub_1BC3008(&StringLiteral_20292/*"img_popularitem_"*/, v18);
    sub_1BC3008(&StringLiteral_20022/*"icon_popularitem_reward_arrow"*/, v19);
    byte_4AFCADD = 1;
  }
  entity = 0LL;
  if ( isToday )
    v20 = (System_String_o **)&StringLiteral_20293/*"img_popularitem_today"*/;
  else
    v20 = (System_String_o **)&StringLiteral_20294/*"img_popularitem_tommorow"*/;
  v21 = *v20;
  bg = this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39643540(eventId, bg, v21, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GiftMaster___);
  Item = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventTradePickupEntity__get_Item__);
      if ( !Item || !Master_object )
        goto LABEL_49;
      Item = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        Item->fields._MasterKind_k__BackingField,
                                        (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Item & 1) != 0 )
        break;
LABEL_45:
      if ( v29 <= 1 )
      {
        v40 = v28 - 3;
        ++v28;
        if ( v40 < pickupEntityList->fields._size )
          continue;
      }
      goto LABEL_47;
    }
    if ( !entity || !v24 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)GiftMaster__GetGiftListById((GiftMaster_o *)v24, HIDWORD(entity[2].monitor), 0LL);
    if ( Item )
    {
      if ( !LODWORD(Item->fields._MasterName_k__BackingField) )
        goto LABEL_50;
      v31 = *(_QWORD *)&Item->fields.revision;
      if ( !v31 )
        goto LABEL_49;
      v32 = *(_DWORD *)(v31 + 24);
    }
    else
    {
      v32 = 0;
    }
    if ( !entity || !v27 )
      goto LABEL_49;
    Item = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v27, HIDWORD(entity[4].monitor), 0LL, 0, 0LL);
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
        v33 = (System_String_o *)StringLiteral_20023/*"icon_popularitem_unknown"*/;
LABEL_32:
        goodsIcon = this->fields.goodsIcon;
        if ( !goodsIcon )
          goto LABEL_49;
        if ( v29 >= goodsIcon->max_length )
LABEL_50:
          sub_1BC326C(Item, v26, v30);
        v36 = (UISprite_o *)*((_QWORD *)&goodsIcon->obj.klass + v28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_39643540(eventId, v36, v33, 0LL);
        arrowIcon = this->fields.arrowIcon;
        if ( !arrowIcon )
          goto LABEL_49;
        if ( v29 >= arrowIcon->max_length )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)AtlasManager__SetEventUI_39643540(
                                          eventId,
                                          *((UISprite_o **)&arrowIcon->obj.klass + v28),
                                          (System_String_o *)StringLiteral_20022/*"icon_popularitem_reward_arrow"*/,
                                          0LL);
        rewardIcon = this->fields.rewardIcon;
        if ( !rewardIcon )
          goto LABEL_49;
        if ( v29 >= rewardIcon->max_length )
          goto LABEL_50;
        Item = (CommonReleaseMaster_o *)*((_QWORD *)&rewardIcon->obj.klass + v28);
        if ( !Item )
          goto LABEL_49;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Item, v32, -1, 1, 0LL);
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
    v34 = System_Int32__ToString((int)entity + 40, 0LL);
    Item = (CommonReleaseMaster_o *)System_String__Concat_62348648((System_String_o *)StringLiteral_20292/*"img_popularitem_"*/, v34, 0LL);
    v33 = (System_String_o *)Item;
    goto LABEL_32;
  }
LABEL_47:
  Item = (CommonReleaseMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Item )
LABEL_49:
    sub_1BC3264(Item, v26);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0LL);
}