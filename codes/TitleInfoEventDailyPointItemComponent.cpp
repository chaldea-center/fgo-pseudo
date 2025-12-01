void TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC5314 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_SideItemComponent___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_SideItemComponent__TypeInfo);
    byte_4CC5314 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_SideItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_SideItemComponent__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.eventId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


SideItemComponent_o *TitleInfoEventDailyPointItemComponent__CreateItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *prefab; // x19
  Il2CppObject *itemList; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppClass *klass; // x8
  _QWORD *v16; // x9
  __int64 monitor_low; // x10
  __int64 v18; // x8

  if ( (byte_4CC5312 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_SideItemComponent__Add__);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5312 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemList = UnityEngine_Object__Instantiate_object_(
               prefab,
               (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !itemList )
    goto LABEL_12;
  v6 = itemList;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36395768(gameObject, v8, 0);
  itemList = (Il2CppObject *)this->fields.itemList;
  if ( !itemList
    || (klass = itemList[1].klass,
        v16 = Method_System_Collections_Generic_List_SideItemComponent__Add__,
        ++HIDWORD(itemList[1].monitor),
        !klass) )
  {
LABEL_12:
    sub_1C71608(itemList, v5);
  }
  monitor_low = SLODWORD(itemList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)itemList,
      v6,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = (__int64)klass + 8 * monitor_low;
    LODWORD(itemList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v18 + 32) = v6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  }
  return (SideItemComponent_o *)v6;
}


void TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *subLabel; // x0

  subLabel = (UnityEngine_Component_o *)this->fields.subLabel;
  if ( !subLabel
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))subLabel->klass[1]._1.element_class)(
          subLabel,
          subLabel->klass[1]._1.castClass,
          0.0),
        (subLabel = (UnityEngine_Component_o *)this->fields.subLabel) == 0)
    || (subLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(subLabel, 0)) == 0 )
  {
    sub_1C71608(subLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)subLabel, 0, 0);
}


SideItemComponent_o *TitleInfoEventDailyPointItemComponent__GetItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  TitleInfoEventDailyPointItemComponent_ItemInfo_o *ItemInfo; // x0
  const MethodInfo *v6; // x1
  TitleInfoEventDailyPointItemComponent_ItemInfo_o *v7; // x19
  System_Collections_Generic_List_object__o *itemList; // x0
  UnityEngine_Component_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UISprite_o *monitor; // x21
  System_String_o *frameSpriteName; // x22
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0

  if ( (byte_4CC5311 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__);
    byte_4CC5311 = 1;
  }
  ItemInfo = TitleInfoEventDailyPointItemComponent__GetItemInfo(this, index, method);
  if ( !ItemInfo )
    return 0;
  v7 = ItemInfo;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  itemList = itemList->fields._size <= index
           ? (System_Collections_Generic_List_object__o *)TitleInfoEventDailyPointItemComponent__CreateItem(this, v6)
           : (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            itemList,
                                                            index,
                                                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_SideItemComponent__get_Item__);
  v9 = (UnityEngine_Component_o *)itemList;
  if ( !itemList )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
  GameObjectExtensions__ResetLocalScale(gameObject, 0);
  v11 = UnityEngine_Component__get_gameObject(v9, 0);
  GameObjectExtensions__SetLocalPosition(v11, v7->fields.itemPosition, 0);
  monitor = (UISprite_o *)v9[1].monitor;
  frameSpriteName = v7->fields.frameSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(monitor, frameSpriteName, 0);
  itemList = (System_Collections_Generic_List_object__o *)v9[1].monitor;
  if ( !itemList )
    goto LABEL_24;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))itemList->klass->vtable._33_get_Item.methodPtr)(
    itemList,
    itemList->klass->vtable._33_get_Item.method);
  itemList = (System_Collections_Generic_List_object__o *)v9[1].monitor;
  if ( !itemList )
    goto LABEL_24;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
  GameObjectExtensions__SetLocalPosition(v14, v7->fields.frameSpritePosition, 0);
  itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr;
  if ( !itemList )
    goto LABEL_24;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
  GameObjectExtensions__SetLocalPosition(v15, v7->fields.pointTextPosition, 0);
  itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr;
  if ( !itemList )
    goto LABEL_24;
  UILabel__set_fontSize((UILabel_o *)itemList, v7->fields.pointTextFontSize, 0);
  itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr;
  if ( !itemList )
    goto LABEL_24;
  UIWidget__set_height((UIWidget_o *)itemList, v7->fields.pointTextFontSize, 0);
  itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr;
  if ( !itemList )
    goto LABEL_24;
  UILabel__set_effectStyle((UILabel_o *)itemList, v7->fields.pointTextEffectStyle, 0);
  itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr;
  if ( !itemList
    || (UILabel__set_effectColor((UILabel_o *)itemList, v7->fields.pointTextEffectColor, 0),
        (itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr) == 0)
    || (UILabel__set_applyGradient((UILabel_o *)itemList, 1, 0),
        (itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr) == 0)
    || (UILabel__set_gradientTop((UILabel_o *)itemList, v7->fields.pointTextGradientColorTop, 0),
        (itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr) == 0) )
  {
LABEL_24:
    sub_1C71608(itemList, v6);
  }
  UILabel__set_gradientBottom((UILabel_o *)itemList, v7->fields.pointTextGradientColorBottom, 0);
  return (SideItemComponent_o *)v9;
}


TitleInfoEventDailyPointItemComponent_ItemInfo_o *TitleInfoEventDailyPointItemComponent__GetItemInfo(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  int32_t max_length; // w9

  dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
  if ( !dailyPointItemInfoList )
    sub_1C71608(this, index);
  max_length = dailyPointItemInfoList->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C71610(this);
  return dailyPointItemInfoList->m_Items[index];
}


int32_t TitleInfoEventDailyPointItemComponent__GetLastDailyEventPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0) - this->fields.recievePoint;
}


int32_t TitleInfoEventDailyPointItemComponent__GetTotalDailyEventPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0);
}


int32_t TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  QuestGroupMaster_o *v6; // x22
  System_Collections_Generic_List_int__o *QuestIdListByGroupType; // x0
  int32_t v8; // w20
  int32_t current; // w24
  int32_t eventId; // w29
  __int64 v11; // x1
  NetworkManager_c *v12; // x0
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC5313 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC5313 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  v6 = (QuestGroupMaster_o *)Instance;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType((QuestGroupMaster_o *)Instance, 11, 0);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    QuestIdListByGroupType,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v8 = 0;
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v15,
            (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v15.fields._current;
    eventId = this->fields.eventId;
    if ( eventId == QuestGroupMaster__GetEventId(v6, v15.fields._current, 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CC112A )
      {
        sub_1C713B0(&NetworkManager_TypeInfo);
        byte_4CC112A = 1;
      }
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v12 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_1C71608(v12, v11);
      if ( UserQuestMaster__getClearCountsFromId(
             (UserQuestMaster_o *)MasterData_object,
             v12->static_fields->userIdNumber,
             current,
             0) >= 1 )
        v8 += QuestGroupMaster__GetGroupId(v6, current, 11, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v15,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v8;
}


bool TitleInfoEventDailyPointItemComponent__IsDispPossible(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventDailyPointItemComponent__IsEventRaidBoss(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


System_Collections_IEnumerator_o *TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        UILabel_o *label,
        int32_t from,
        int32_t to,
        float duration,
        const MethodInfo *method)
{
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC530F & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
    byte_4CC530F = 1;
  }
  v10 = sub_1C715FC(TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = label;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 32), (int32_t)label, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v10 + 44) = to;
  *(_DWORD *)(v10 + 48) = from;
  *(float *)(v10 + 40) = duration;
  return (System_Collections_IEnumerator_o *)v10;
}


System_Collections_IEnumerator_o *TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        System_String_o *effectName,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4CC530E & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
    byte_4CC530E = 1;
  }
  v9 = sub_1C715FC(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 40) = effectName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)effectName, v16, v17, v18, v19, v20, v21);
  *(float *)(v9 + 48) = x;
  *(float *)(v9 + 52) = y;
  *(float *)(v9 + 56) = z;
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        float fromAlpha,
        float toAlpha,
        float duration,
        const MethodInfo *method)
{
  __int64 v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC5310 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
    byte_4CC5310 = 1;
  }
  v9 = sub_1C715FC(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v9 + 44) = fromAlpha;
  *(float *)(v9 + 48) = toAlpha;
  *(float *)(v9 + 40) = duration;
  return (System_Collections_IEnumerator_o *)v9;
}


void TitleInfoEventDailyPointItemComponent__PrepareUpdateUIWithEffect(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t recievePoint,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x2
  UnityEngine_Component_o *Item; // x20
  UnityEngine_Object_o *subLabel; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *m_CachedPtr; // x20
  Il2CppObject *v22; // x0
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC530C & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_800/*"+"*/);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    byte_4CC530C = 1;
  }
  this->fields.effectAssetData = assetData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.effectAssetData,
    (int32_t)assetData,
    (int32_t)assetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.recievePoint = recievePoint;
  Item = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, 0, v11);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
  {
    subLabel = (UnityEngine_Object_o *)this->fields.subLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(subLabel, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !Item )
        goto LABEL_27;
      v16 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Item, 0);
      if ( !v16 )
        goto LABEL_27;
      UnityEngine_Transform__SetParent_71748048(v16, (UnityEngine_Transform_o *)transform, 0, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      gameObject = UnityEngine_Component__get_gameObject(transform, 0);
      GameObjectExtensions__SetLocalPosition(gameObject, this->fields.subLabelPosition, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_fontSize((UILabel_o *)transform, this->fields.subLabelFontSize, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UIWidget__set_height((UIWidget_o *)transform, this->fields.subLabelFontSize, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_effectStyle((UILabel_o *)transform, this->fields.subLabelEffectStyle, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_effectColor((UILabel_o *)transform, this->fields.subLabelEffectColor, 0);
      v18 = this->fields.subLabel;
      v24 = recievePoint;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v20 = System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v19, 0);
      transform = (UnityEngine_Component_o *)System_String__Concat_64031724(
                                               (System_String_o *)StringLiteral_800/*"+"*/,
                                               v20,
                                               0);
      if ( !v18 )
        goto LABEL_27;
      UILabel__set_text(v18, (System_String_o *)transform, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_applyGradient((UILabel_o *)transform, 1, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_gradientTop((UILabel_o *)transform, this->fields.subLabelGradientColorTop, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_gradientBottom((UILabel_o *)transform, this->fields.subLabelGradientColorBottom, 0);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))transform->klass[1]._1.element_class)(
        transform,
        transform->klass[1]._1.castClass,
        0.0);
    }
    else if ( !Item )
    {
      goto LABEL_27;
    }
    m_CachedPtr = (UILabel_o *)Item[1].fields.m_CachedPtr;
    v23 = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0) - this->fields.recievePoint;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    transform = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v22, 0);
    if ( m_CachedPtr )
    {
      UILabel__set_text(m_CachedPtr, (System_String_o *)transform, 0);
      return;
    }
LABEL_27:
    sub_1C71608(transform, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventDailyPointItemComponent__Setup(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  this->fields.eventId = eventId;
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUI(this, *(const MethodInfo **)&eventId);
}


void TitleInfoEventDailyPointItemComponent__UpdateDailyPointUI(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int64_t EventPointNoGroup; // x0
  __int64 v5; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct System_Int32_array *v11; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  int32_t v15; // w21
  UnityEngine_Object_o *Item; // x22
  UILabel_o *m_CachedPtr; // x22
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CC530B & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    byte_4CC530B = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0);
  if ( !v3 )
    goto LABEL_22;
  items = v3->fields._items;
  v7 = Method_System_Collections_Generic_List_int__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v3->fields._size;
  v9 = (const MethodInfo *)EventPointNoGroup;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      EventPointNoGroup,
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = size + 1;
    items->m_Items[size] = EventPointNoGroup;
  }
  EventPointNoGroup = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(this, v9);
  v11 = v3->fields._items;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++v3->fields._version;
  if ( !v11 )
LABEL_22:
    sub_1C71608(EventPointNoGroup, v5);
  v13 = v3->fields._size;
  if ( (unsigned int)v13 >= LODWORD(v11->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      EventPointNoGroup,
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v13 + 1;
    v11->m_Items[v13] = EventPointNoGroup;
  }
  dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
  if ( dailyPointItemInfoList )
  {
    v15 = 0;
    while ( v15 < SLODWORD(dailyPointItemInfoList->max_length) )
    {
      Item = (UnityEngine_Object_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, v15, v10);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      EventPointNoGroup = UnityEngine_Object__op_Inequality(Item, 0, 0);
      if ( (EventPointNoGroup & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_22;
        m_CachedPtr = (UILabel_o *)Item[1].fields.m_CachedPtr;
        v19 = System_Collections_Generic_List_int___get_Item(
                v3,
                v15,
                (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
        EventPointNoGroup = (int64_t)System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v18, 0);
        if ( !m_CachedPtr )
          goto LABEL_22;
        UILabel__set_text(m_CachedPtr, (System_String_o *)EventPointNoGroup, 0);
      }
      dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
      ++v15;
      if ( !dailyPointItemInfoList )
        goto LABEL_22;
    }
  }
}


System_Collections_IEnumerator_o *TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t recievePoint,
        System_Action_o *finishEffectEvent,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CC530D & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
    byte_4CC530D = 1;
  }
  v6 = sub_1C715FC(TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = finishEffectEvent;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)finishEffectEvent, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void TitleInfoEventDailyPointItemComponent__UpdateDisp(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventDailyPointItemComponent__UpdateUIWithEffect(
        TitleInfoEventDailyPointItemComponent_o *this,
        System_Action_o *finishEffectEvent,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_IEnumerator_o *updated; // x1

  updated = TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE(
              this,
              (int32_t)finishEffectEvent,
              finishEffectEvent,
              v3);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, updated, 0);
}


void TitleInfoEventDailyPointItemComponent_ItemInfo___ctor(
        TitleInfoEventDailyPointItemComponent_ItemInfo_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x9
  float v7; // s1
  struct UnityEngine_Vector3_StaticFields *v8; // x8
  float v9; // s1

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.itemPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.itemPosition.fields.z = z;
  v6 = v3->static_fields;
  v7 = v6->zeroVector.fields.z;
  *(_QWORD *)&this->fields.frameSpritePosition.fields.x = *(_QWORD *)&v6->zeroVector.fields.x;
  this->fields.frameSpritePosition.fields.z = v7;
  v8 = v3->static_fields;
  v9 = v8->zeroVector.fields.z;
  *(_QWORD *)&this->fields.pointTextPosition.fields.x = *(_QWORD *)&v8->zeroVector.fields.x;
  this->fields.pointTextPosition.fields.z = v9;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31___ctor(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__MoveNext(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_Object_o *label; // x20
  float duration; // s0
  float timer_5__2; // s8
  float deltaTime; // s0
  float v8; // s1
  float v9; // s0
  int32_t v10; // w8
  int32_t from; // w21
  float v12; // s2
  bool v13; // nf
  float v14; // s0
  float v15; // s8
  float v16; // s9
  float v17; // s8
  UILabel_o *v18; // x20
  unsigned int v19; // w8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  Il2CppObject **p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  bool result; // w0
  UILabel_o *v31; // x20
  Il2CppObject *v32; // x0
  unsigned int v33; // [xsp+8h] [xbp-38h] BYREF
  int32_t to; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC5317 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    byte_4CC5317 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    timer_5__2 = this->fields._timer_5__2;
    duration = this->fields.duration;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    label = (UnityEngine_Object_o *)this->fields.label;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(label, 0, 0) )
      return 0;
    duration = this->fields.duration;
    if ( duration <= 0.0 )
    {
      v31 = this->fields.label;
      to = this->fields.to;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &to);
      v21 = System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v32, 0);
      if ( !v31 )
        goto LABEL_28;
      UILabel__set_text(v31, v21, 0);
      return 0;
    }
    this->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 < duration )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    v8 = this->fields.duration;
    v9 = timer_5__2 + deltaTime;
    v10 = this->fields.to;
    from = this->fields.from;
    if ( v9 <= v8 )
      v12 = v9;
    else
      v12 = this->fields.duration;
    v13 = v9 < 0.0;
    v14 = 0.0;
    if ( !v13 )
      v14 = v12;
    this->fields._timer_5__2 = v14;
    v15 = (float)(v10 - from);
    v16 = v14 / v8;
    if ( !byte_4CC0D08 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC0D08 = 1;
    }
    v17 = v16 * v15;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v18 = this->fields.label;
    v19 = vcvtms_s32_f32(v17);
    if ( floorf(v17) == INFINITY )
      v19 = 0x80000000;
    v33 = v19 + from;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    v21 = System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v20, 0);
    if ( v18 )
    {
      UILabel__set_text(v18, v21, 0);
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, 0, v24, v25, v26, v27, v28, v29);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_28:
    sub_1C71608(v21, v22);
  }
  return 0;
}


Il2CppObject *TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__System_Collections_IEnumerator_Reset(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__System_Collections_IEnumerator_get_Current(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__System_IDisposable_Dispose(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30___ctor(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__MoveNext(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_Component_o *_4__this; // x20
  AssetData_o *klass; // x0
  UnityEngine_Object_o *Object_40783956; // x0
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x21
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x20
  __int64 v11; // x21
  System_Action_o *v12; // x22
  System_Func_bool__o *v13; // x20
  UnityEngine_WaitWhile_o *v14; // x21
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  v2 = this;
  if ( (byte_4CC5318 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&System_Func_bool__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
    sub_1C713B0(&UnityEngine_GameObject_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__);
    sub_1C713B0(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__);
    sub_1C713B0(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
    this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)sub_1C713B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4CC5318 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      _4__this = (UnityEngine_Component_o *)v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_26;
      klass = (AssetData_o *)_4__this[8].klass;
      if ( !klass )
        return (char)klass;
      Object_40783956 = AssetData__GetObject_40783956(klass, v2->fields.effectName, 0);
      if ( Object_40783956 )
      {
        if ( (UnityEngine_GameObject_c *)Object_40783956->klass == UnityEngine_GameObject_TypeInfo )
          v7 = (Il2CppObject *)Object_40783956;
        else
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v8 = UnityEngine_Object__Instantiate_object_(
               v7,
               (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)UnityEngine_Component__get_gameObject(
                                                                                 _4__this,
                                                                                 0);
        if ( !this )
          goto LABEL_26;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v8, transform, 0);
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v8, v2->fields.position, 0);
        if ( !v8 )
          goto LABEL_26;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v8,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        {
          v11 = sub_1C715FC(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v11, 0);
          if ( v11 )
          {
            *(_BYTE *)(v11 + 16) = 0;
            v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v12,
              (Il2CppObject *)v11,
              Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
              0);
            if ( Component_object )
            {
              TabOpenEffectComponent__SetAnimationEndCallback((TabOpenEffectComponent_o *)Component_object, v12, 0);
              v13 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v13,
                (Il2CppObject *)v11,
                Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
                0);
              v14 = (UnityEngine_WaitWhile_o *)sub_1C715FC(UnityEngine_WaitWhile_TypeInfo);
              UnityEngine_WaitWhile___ctor(v14, v13, 0);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
              sub_1C71354(p__2__current, (int32_t)v14, v16, v17, v18, v19, v20, v21);
              LOBYTE(klass) = 1;
              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
              return (char)klass;
            }
          }
LABEL_26:
          sub_1C71608(this, method);
        }
      }
    }
    LOBYTE(klass) = 0;
    return (char)klass;
  }
  LOBYTE(klass) = 0;
  v2->fields.__1__state = -1;
  return (char)klass;
}


Il2CppObject *TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__System_Collections_IEnumerator_Reset(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__System_Collections_IEnumerator_get_Current(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__System_IDisposable_Dispose(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32___ctor(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__MoveNext(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *v2; // x19
  int32_t _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x21
  UnityEngine_Object_o *subLabel; // x20
  float timer_5__2; // s8
  float deltaTime; // s0
  float duration; // s1
  float v9; // s0
  float v10; // s2
  bool v11; // nf
  float v12; // s0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4CC5319 & 1) == 0 )
  {
    this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5319 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = v2->fields._timer_5__2;
    v2->fields.__1__state = -1;
LABEL_11:
    if ( timer_5__2 < v2->fields.duration )
    {
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      duration = v2->fields.duration;
      v9 = timer_5__2 + deltaTime;
      if ( v9 <= duration )
        v10 = v9;
      else
        v10 = v2->fields.duration;
      v11 = v9 < 0.0;
      v12 = 0.0;
      if ( !v11 )
        v12 = v10;
      v2->fields._timer_5__2 = v12;
      if ( _4__this )
      {
        this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)_4__this->fields.subLabel;
        if ( this )
        {
          ((void (__fastcall *)(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
            this,
            this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
            v2->fields.fromAlpha + (float)((float)(v12 / duration) * (float)(v2->fields.toAlpha - v2->fields.fromAlpha)));
          v2->fields.__2__current = 0;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
          sub_1C71354(p__2__current, 0, v14, v15, v16, v17, v18, v19);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
LABEL_21:
      sub_1C71608(this, method);
    }
    return 0;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
    subLabel = (UnityEngine_Object_o *)_4__this->fields.subLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(subLabel, 0, 0) )
    {
      v2->fields._timer_5__2 = 0.0;
      timer_5__2 = 0.0;
      goto LABEL_11;
    }
  }
  return 0;
}


Il2CppObject *TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__System_Collections_IEnumerator_Reset(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__System_Collections_IEnumerator_get_Current(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__System_IDisposable_Dispose(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29___ctor(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__MoveNext(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *v3; // x19
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  const MethodInfo *v6; // x2
  SideItemComponent_o *Item; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  const MethodInfo *v15; // x2
  int recievePoint; // w8
  float v17; // s0
  float v18; // s2
  bool v19; // zf
  float v20; // s0
  bool v21; // w21
  const MethodInfo *v22; // x1
  System_Collections_IEnumerator_o *v23; // x0
  const MethodInfo *v24; // x2
  System_Collections_IEnumerator_o *v25; // x0
  UnityEngine_Coroutine_o *v26; // x0
  GrandQuestFolderBoardItem_o *v27; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  float pointTextInterval; // s8
  UnityEngine_WaitForSeconds_o *v35; // x20
  GrandQuestFolderBoardItem_o *v36; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int v43; // w8
  struct SideItemComponent_o *v44; // x8
  System_Collections_IEnumerator_o *v45; // x0
  UnityEngine_Coroutine_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Collections_IEnumerator_o *v53; // x0
  UnityEngine_Coroutine_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  const MethodInfo *v61; // x2
  System_Collections_IEnumerator_o *v62; // x0
  UnityEngine_Coroutine_o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  TitleInfoEventDailyPointItemComponent___c_c *v70; // x0
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v72; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  System_Action_o *finishEffectEvent; // x0
  float v88; // s2
  unsigned __int64 v89; // d0 OVERLAPPED
  float v90; // s2
  int v91; // s1
  System_Collections_IEnumerator_o *v92; // x0
  UnityEngine_Coroutine_o *started; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7

  v3 = this;
  if ( (byte_4CC531A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__);
    sub_1C713B0(&TitleInfoEventDailyPointItemComponent___c_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C713B0(&StringLiteral_17213/*"bit_dedicate_left_item_flash_2"*/);
    sub_1C713B0(&StringLiteral_17212/*"bit_dedicate_left_item_flash_1"*/);
    this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)sub_1C713B0(&StringLiteral_17214/*"bit_dedicate_left_item_flash_3"*/);
    byte_4CC531A = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      dailyPointItemInfoList = _4__this->fields.dailyPointItemInfoList;
      if ( !dailyPointItemInfoList || LODWORD(dailyPointItemInfoList->max_length) != 2 )
        goto LABEL_36;
      v3->fields._totalDailyPoint_5__2 = UserEventPointMaster__GetEventPointNoGroup(_4__this->fields.eventId, 0);
      v3->fields._lastDailyPoint_5__3 = UserEventPointMaster__GetEventPointNoGroup(_4__this->fields.eventId, 0)
                                      - _4__this->fields.recievePoint;
      Item = TitleInfoEventDailyPointItemComponent__GetItem(_4__this, 0, v6);
      v3->fields._dailyPointItem_5__4 = Item;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v3->fields._dailyPointItem_5__4,
        (int32_t)Item,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      dailyPointItem_5__4 = (UnityEngine_Object_o *)v3->fields._dailyPointItem_5__4;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dailyPointItem_5__4, 0, 0) )
        goto LABEL_29;
      recievePoint = _4__this->fields.recievePoint;
      if ( recievePoint < 1 )
      {
        v20 = 1.0;
      }
      else
      {
        v17 = log10f((float)recievePoint);
        v18 = (float)((int)v17 + 1);
        v19 = v17 == INFINITY;
        v20 = -2147500000.0;
        if ( !v19 )
          v20 = v18;
      }
      v88 = v20 * _4__this->fields.firstEffectPositionDiff.fields.z;
      v89 = vadd_f32(
              *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.x,
              vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.x, v20)).n64_u64[0];
      v90 = _4__this->fields.firstEffectPosition.fields.z + v88;
      *(_QWORD *)&v3->fields._position_5__5.fields.x = v89;
      v3->fields._position_5__5.fields.z = v90;
      v91 = HIDWORD(v89);
      v92 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_17212/*"bit_dedicate_left_item_flash_1"*/,
              *(UnityEngine_Vector3_o *)&v89,
              v15);
      started = UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)_4__this, v92, 0);
      v3->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
      sub_1C71354(p__2__current, (int32_t)started, v95, v96, v97, v98, v99, v100);
      v21 = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return v21;
    case 1:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)_4__this->fields.subLabel;
      if ( !this )
        goto LABEL_42;
      this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)this,
                                                                                                 0);
      if ( !this )
        goto LABEL_42;
      v21 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v23 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              0.0,
              1.0,
              _4__this->fields.recievePointFadeDuration,
              v22);
      UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)_4__this, v23, 0);
      v25 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_17214/*"bit_dedicate_left_item_flash_3"*/,
              v3->fields._position_5__5,
              v24);
      v26 = UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)_4__this, v25, 0);
      v3->fields.__2__current = (Il2CppObject *)v26;
      v27 = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
      sub_1C71354(v27, (int32_t)v26, v28, v29, v30, v31, v32, v33);
      LODWORD(v27[-1].fields._ClosedMessage_k__BackingField) = 2;
      return v21;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      pointTextInterval = _4__this->fields.pointTextInterval;
      v35 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v35, pointTextInterval, 0);
      v3->fields.__2__current = (Il2CppObject *)v35;
      v36 = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
      sub_1C71354(v36, (int32_t)v35, v37, v38, v39, v40, v41, v42);
      v43 = 3;
      goto LABEL_27;
    case 3:
      v44 = v3->fields._dailyPointItem_5__4;
      v3->fields.__1__state = -1;
      if ( !v44 || !_4__this )
        goto LABEL_42;
      v45 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
              (TitleInfoEventDailyPointItemComponent_o *)this,
              v44->fields.label,
              v3->fields._lastDailyPoint_5__3,
              v3->fields._totalDailyPoint_5__2,
              _4__this->fields.countAnimDuration,
              v2);
      v46 = UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)_4__this, v45, 0);
      v3->fields.__2__current = (Il2CppObject *)v46;
      v36 = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
      sub_1C71354(v36, (int32_t)v46, v47, v48, v49, v50, v51, v52);
      v43 = 4;
      goto LABEL_27;
    case 4:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      v53 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              1.0,
              0.0,
              _4__this->fields.recievePointFadeDuration,
              method);
      v54 = UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)_4__this, v53, 0);
      v3->fields.__2__current = (Il2CppObject *)v54;
      v36 = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
      sub_1C71354(v36, (int32_t)v54, v55, v56, v57, v58, v59, v60);
      v43 = 5;
      goto LABEL_27;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
LABEL_42:
        sub_1C71608(this, method);
      TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, method);
      v62 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_17213/*"bit_dedicate_left_item_flash_2"*/,
              _4__this->fields.lastEffectPosition,
              v61);
      v63 = UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)_4__this, v62, 0);
      v3->fields.__2__current = (Il2CppObject *)v63;
      v36 = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
      sub_1C71354(v36, (int32_t)v63, v64, v65, v66, v67, v68, v69);
      v43 = 6;
LABEL_27:
      LODWORD(v36[-1].fields._ClosedMessage_k__BackingField) = v43;
      return 1;
    case 6:
      *(_QWORD *)&v3->fields._position_5__5.fields.x = 0;
      v3->fields.__1__state = -1;
      v3->fields._position_5__5.fields.z = 0.0;
LABEL_29:
      v70 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      if ( !TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
        v70 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      }
      _9__29_0 = v70->static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( !v70->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v70);
          v70 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
        }
        v72 = (Il2CppObject *)v70->static_fields->__9;
        _9__29_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__29_0,
          v72,
          Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
          0);
        static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        static_fields->__9__29_0 = _9__29_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__29_0,
          (int32_t)_9__29_0,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
      }
      EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0);
      v3->fields._dailyPointItem_5__4 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields._dailyPointItem_5__4, 0, v80, v81, v82, v83, v84, v85);
LABEL_36:
      finishEffectEvent = v3->fields.finishEffectEvent;
      if ( finishEffectEvent )
        ActionExtensions__Call(finishEffectEvent, 0);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__System_Collections_IEnumerator_Reset(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__System_Collections_IEnumerator_get_Current(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__System_IDisposable_Dispose(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventDailyPointItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC5315 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventDailyPointItemComponent___c_TypeInfo);
    byte_4CC5315 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventDailyPointItemComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoEventDailyPointItemComponent___c___ctor(
        TitleInfoEventDailyPointItemComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventDailyPointItemComponent___c___UpdateDailyPointUIWithEffect_IE_b__29_0(
        TitleInfoEventDailyPointItemComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC5316 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CC5316 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


void TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0___ctor(
        TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0___PlayEffect_IE_b__0(
        TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  this->fields.isFinished = 1;
}


bool TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0___PlayEffect_IE_b__1(
        TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  return !this->fields.isFinished;
}