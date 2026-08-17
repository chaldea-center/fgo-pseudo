void TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E797 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SideItemComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SideItemComponent__TypeInfo);
    byte_596E797 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SideItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_SideItemComponent__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.eventId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


SideItemComponent_o *TitleInfoEventDailyPointItemComponent__CreateItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *prefab; // x19
  Il2CppObject *itemList; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppClass *klass; // x8
  _QWORD *v17; // x9
  __int64 monitor_low; // x10
  __int64 v19; // x8

  if ( (byte_596E795 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SideItemComponent__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E795 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  itemList = UnityEngine_Object__Instantiate_object_(
               prefab,
               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !itemList )
    goto LABEL_12;
  v7 = itemList;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_42897308(gameObject, v9, 0);
  itemList = (Il2CppObject *)this->fields.itemList;
  if ( !itemList
    || (klass = itemList[1].klass,
        v17 = Method_System_Collections_Generic_List_SideItemComponent__Add__,
        ++HIDWORD(itemList[1].monitor),
        !klass) )
  {
LABEL_12:
    sub_2213CDC(itemList, v6);
  }
  monitor_low = SLODWORD(itemList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)itemList,
      v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = (__int64)klass + 8 * monitor_low;
    LODWORD(itemList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v19 + 32) = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)v7, v10, v11, v12, v13, v14, v15);
  }
  return (SideItemComponent_o *)v7;
}


void TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *subLabel; // x0

  subLabel = (UnityEngine_Component_o *)this->fields.subLabel;
  if ( !subLabel
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))subLabel->klass[1]._1.element_class)(
          subLabel,
          subLabel->klass[1]._1.castClass,
          0.0),
        (subLabel = (UnityEngine_Component_o *)this->fields.subLabel) == 0)
    || (subLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(subLabel, 0)) == 0 )
  {
    sub_2213CDC(subLabel, method);
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
  __int64 v12; // x1
  __int64 v13; // x2
  UISprite_o *monitor; // x21
  System_String_o *frameSpriteName; // x22
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_596E794 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__);
    byte_596E794 = 1;
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
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SideItemComponent__get_Item__);
  v9 = (UnityEngine_Component_o *)itemList;
  if ( !itemList )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
  GameObjectExtensions__ResetLocalScale(gameObject, 0);
  v11 = UnityEngine_Component__get_gameObject(v9, 0);
  GameObjectExtensions__SetLocalPosition(v11, v7->fields.itemPosition, 0);
  monitor = (UISprite_o *)v9[1].monitor;
  frameSpriteName = v7->fields.frameSpriteName;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
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
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
  GameObjectExtensions__SetLocalPosition(v16, v7->fields.frameSpritePosition, 0);
  itemList = (System_Collections_Generic_List_object__o *)v9[1].fields.m_CachedPtr;
  if ( !itemList )
    goto LABEL_24;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
  GameObjectExtensions__SetLocalPosition(v17, v7->fields.pointTextPosition, 0);
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
    sub_2213CDC(itemList, v6);
  }
  UILabel__set_gradientBottom((UILabel_o *)itemList, v7->fields.pointTextGradientColorBottom, 0);
  return (SideItemComponent_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventDailyPointItemComponent_ItemInfo_o *TitleInfoEventDailyPointItemComponent__GetItemInfo(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  int32_t max_length; // w9

  dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
  if ( !dailyPointItemInfoList )
    sub_2213CDC(this, *(_QWORD *)&index);
  max_length = dailyPointItemInfoList->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_2213CE4(this);
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
  __int64 v12; // x2
  NetworkManager_c *v13; // x0
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596E796 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596E796 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  v6 = (QuestGroupMaster_o *)Instance;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType((QuestGroupMaster_o *)Instance, 11, 0);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    QuestIdListByGroupType,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v8 = 0;
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v16,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v16.fields._current;
    eventId = this->fields.eventId;
    if ( eventId == QuestGroupMaster__GetEventId(v6, v16.fields._current, 0) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v13 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
        v13 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_2213CDC(v13, v11);
      if ( UserQuestMaster__getClearCountsFromId(
             (UserQuestMaster_o *)MasterData_object,
             v13->static_fields->userIdNumber,
             current,
             0) >= 1 )
        v8 += QuestGroupMaster__GetGroupId(v6, current, 11, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v16,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_596E792 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
    byte_596E792 = 1;
  }
  v10 = sub_2213CCC(TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = label;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)label, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v10 + 44) = to;
  *(_DWORD *)(v10 + 48) = from;
  result = (System_Collections_IEnumerator_o *)v10;
  *(float *)(v10 + 40) = duration;
  return result;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_IEnumerator_o *result; // x0

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_596E791 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
    byte_596E791 = 1;
  }
  v9 = sub_2213CCC(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 40) = effectName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)effectName, v16, v17, v18, v19, v20, v21);
  *(float *)(v9 + 48) = x;
  *(float *)(v9 + 52) = y;
  result = (System_Collections_IEnumerator_o *)v9;
  *(float *)(v9 + 56) = z;
  return result;
}


System_Collections_IEnumerator_o *TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        float fromAlpha,
        float toAlpha,
        float duration,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_596E793 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
    byte_596E793 = 1;
  }
  v9 = sub_2213CCC(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v9 + 44) = fromAlpha;
  *(float *)(v9 + 48) = toAlpha;
  result = (System_Collections_IEnumerator_o *)v9;
  *(float *)(v9 + 40) = duration;
  return result;
}


void TitleInfoEventDailyPointItemComponent__PrepareUpdateUIWithEffect(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t recievePoint,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Component_o *Item; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *subLabel; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *m_CachedPtr; // x20
  Il2CppObject *v26; // x0
  int v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596E78F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_596E78F = 1;
  }
  this->fields.effectAssetData = assetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectAssetData,
    (int32_t)assetData,
    (System_String_o *)assetData,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.recievePoint = recievePoint;
  Item = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, 0, v11);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
  {
    subLabel = (UnityEngine_Object_o *)this->fields.subLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(subLabel, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !Item )
        goto LABEL_27;
      v20 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Item, 0);
      if ( !v20 )
        goto LABEL_27;
      UnityEngine_Transform__SetParent_83492444(v20, (UnityEngine_Transform_o *)transform, 0, 0);
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
      v22 = this->fields.subLabel;
      v28 = recievePoint;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v28);
      v24 = System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v23, 0);
      transform = (UnityEngine_Component_o *)System_String__Concat_75651716(
                                               (System_String_o *)StringLiteral_861/*"+"*/,
                                               v24,
                                               0);
      if ( !v22 )
        goto LABEL_27;
      UILabel__set_text(v22, (System_String_o *)transform, 0);
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
      ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))transform->klass[1]._1.element_class)(
        transform,
        transform->klass[1]._1.castClass,
        0.0);
    }
    else if ( !Item )
    {
      goto LABEL_27;
    }
    m_CachedPtr = (UILabel_o *)Item[1].fields.m_CachedPtr;
    v27 = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0) - this->fields.recievePoint;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v27);
    transform = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v26, 0);
    if ( m_CachedPtr )
    {
      UILabel__set_text(m_CachedPtr, (System_String_o *)transform, 0);
      return;
    }
LABEL_27:
    sub_2213CDC(transform, v19);
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
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *Item; // x22
  UILabel_o *m_CachedPtr; // x22
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596E78E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_596E78E = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
    sub_2213CDC(EventPointNoGroup, v5);
  v13 = v3->fields._size;
  if ( (unsigned int)v13 >= LODWORD(v11->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      EventPointNoGroup,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      EventPointNoGroup = UnityEngine_Object__op_Inequality(Item, 0, 0);
      if ( (EventPointNoGroup & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_22;
        m_CachedPtr = (UILabel_o *)Item[1].fields.m_CachedPtr;
        v21 = System_Collections_Generic_List_int___get_Item(
                v3,
                v15,
                (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
        EventPointNoGroup = (int64_t)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v20, 0);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596E790 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
    byte_596E790 = 1;
  }
  v6 = sub_2213CCC(TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = finishEffectEvent;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)finishEffectEvent, v13, v14, v15, v16, v17, v18);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, updated, 0);
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

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
  __int64 v2; // x2
  int32_t _1__state; // w8
  UnityEngine_Object_o *label; // x20
  float duration; // s0
  float timer_5__2; // s8
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // s0
  float v11; // s1
  int32_t from; // w20
  float v13; // s9
  int v14; // w8
  float v15; // s2
  float v16; // s0
  float v17; // s8
  float v18; // s8
  unsigned int v19; // w9
  unsigned int v20; // w8
  unsigned int v21; // w8
  UILabel_o *v22; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  Il2CppObject **p__2__current; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  bool result; // w0
  int32_t to; // w9
  UILabel_o *v35; // x19
  Il2CppObject *v36; // x0
  unsigned int v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596E79A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_596E79A = 1;
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
    label = (UnityEngine_Object_o *)this->fields.label;
    this->fields.__1__state = -1;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Equality(label, 0, 0) )
      return 0;
    duration = this->fields.duration;
    if ( duration <= 0.0 )
    {
      to = this->fields.to;
      v35 = this->fields.label;
      v38 = to;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
      v24 = System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v36, 0);
      if ( !v35 )
        goto LABEL_30;
      UILabel__set_text(v35, v24, 0);
      return 0;
    }
    timer_5__2 = 0.0;
    this->fields._timer_5__2 = 0.0;
  }
  if ( timer_5__2 < duration )
  {
    v10 = timer_5__2 + UnityEngine_Time__get_deltaTime(0);
    v11 = this->fields.duration;
    from = this->fields.from;
    v13 = (float)(this->fields.to - from);
    v14 = (unsigned __int8)byte_5969ADF;
    if ( v10 <= v11 )
      v15 = v10;
    else
      v15 = this->fields.duration;
    if ( v10 >= 0.0 )
      v16 = v15;
    else
      v16 = 0.0;
    v17 = v16 / v11;
    this->fields._timer_5__2 = v16;
    if ( !v14 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969ADF = 1;
    }
    v18 = v17 * v13;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8, v9);
    v19 = vcvtms_s32_f32(v18);
    if ( floorf(v18) == INFINITY )
      v20 = 0x80000000;
    else
      v20 = v19;
    v21 = v20 + from;
    v22 = this->fields.label;
    v37 = v21;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
    v24 = System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v23, 0);
    if ( v22 )
    {
      UILabel__set_text(v22, v24, 0);
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v27, v28, v29, v30, v31, v32);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_30:
    sub_2213CDC(v24, v25);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t _1__state; // w8
  AssetData_o *klass; // x0
  UnityEngine_Component_o *_4__this; // x20
  UnityEngine_Object_o *Object_47472752; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *v9; // x21
  int32_t v10; // w8
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x21
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x21
  __int64 v16; // x20
  System_Action_o *v17; // x22
  System_Func_bool__o *v18; // x21
  UnityEngine_WaitWhile_o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596E79B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__);
    sub_2213A60(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__);
    sub_2213A60(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596E79B = 1;
  }
  _1__state = this->fields.__1__state;
  klass = 0;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return (char)klass;
    _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      klass = (AssetData_o *)_4__this[8].klass;
      if ( !klass )
        return (char)klass;
      Object_47472752 = AssetData__GetObject_47472752(klass, this->fields.effectName, 0);
      if ( Object_47472752 )
      {
        if ( (UnityEngine_GameObject_c *)Object_47472752->klass == UnityEngine_GameObject_TypeInfo )
          v9 = Object_47472752;
        else
          v9 = 0;
      }
      else
      {
        v9 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
        goto LABEL_25;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      v13 = UnityEngine_Object__Instantiate_object_(
              (Il2CppObject *)v9,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      klass = (AssetData_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
      if ( !klass )
        goto LABEL_27;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)klass, 0);
      GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v13, transform, 0);
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v13, this->fields.position, 0);
      if ( !v13 )
        goto LABEL_27;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v13,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
LABEL_25:
        LOBYTE(klass) = 0;
        return (char)klass;
      }
      v16 = sub_2213CCC(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( v16 )
      {
        *(_BYTE *)(v16 + 16) = 0;
        v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v17,
          (Il2CppObject *)v16,
          Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
          0);
        if ( Component_object )
        {
          TabOpenEffectComponent__SetAnimationEndCallback((TabOpenEffectComponent_o *)Component_object, v17, 0);
          v18 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            v18,
            (Il2CppObject *)v16,
            Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
            0);
          v19 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
          UnityEngine_WaitWhile___ctor(v19, v18, 0);
          this->fields.__2__current = (Il2CppObject *)v19;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
            (int32_t)v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v10 = 1;
          LOBYTE(klass) = 1;
          goto LABEL_12;
        }
      }
    }
LABEL_27:
    sub_2213CDC(klass, method);
  }
  v10 = -1;
LABEL_12:
  this->fields.__1__state = v10;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  __int64 v2; // x2
  TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *v3; // x19
  int32_t _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x21
  UnityEngine_Object_o *subLabel; // x20
  float timer_5__2; // s8
  float v8; // s1
  float duration; // s0
  float v10; // s2
  float v11; // s1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  bool result; // w0

  v3 = this;
  if ( (byte_596E79C & 1) == 0 )
  {
    this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E79C = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = v3->fields._timer_5__2;
    v3->fields.__1__state = -1;
LABEL_11:
    if ( timer_5__2 < v3->fields.duration )
    {
      v8 = timer_5__2 + UnityEngine_Time__get_deltaTime(0);
      duration = v3->fields.duration;
      if ( v8 <= duration )
        v10 = v8;
      else
        v10 = v3->fields.duration;
      if ( v8 >= 0.0 )
        v11 = v10;
      else
        v11 = 0.0;
      v3->fields._timer_5__2 = v11;
      if ( _4__this )
      {
        this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)_4__this->fields.subLabel;
        if ( this )
        {
          ((void (__fastcall *)(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
            this,
            this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
            v3->fields.fromAlpha + (float)((float)(v11 / duration) * (float)(v3->fields.toAlpha - v3->fields.fromAlpha)));
          v3->fields.__2__current = 0;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
          sub_2213A04(p__2__current, 0, v13, v14, v15, v16, v17, v18);
          result = 1;
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return result;
        }
      }
LABEL_22:
      sub_2213CDC(this, method);
    }
    return 0;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    subLabel = (UnityEngine_Object_o *)_4__this->fields.subLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(subLabel, 0, 0) )
    {
      timer_5__2 = 0.0;
      v3->fields._timer_5__2 = 0.0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x4
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *v4; // x19
  int _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  bool v7; // w21
  System_Collections_IEnumerator_o *v8; // x0
  UnityEngine_Coroutine_o *v9; // x0
  MissionNaviTransitionBoardItem_o *v10; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int v17; // w8
  float pointTextInterval; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  TitleInfoEventDailyPointItemComponent___c_c *v26; // x0
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v29; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  int32_t EventPointNoGroup; // w0
  int32_t eventId; // w8
  const MethodInfo *v46; // x2
  SideItemComponent_o *Item; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  int recievePoint; // w8
  float v58; // s0
  System_Action_o *finishEffectEvent; // x0
  struct SideItemComponent_o *v60; // x8
  System_Collections_IEnumerator_o *v61; // x0
  UnityEngine_Coroutine_o *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  const MethodInfo *v69; // x2
  System_Collections_IEnumerator_o *v70; // x0
  UnityEngine_Coroutine_o *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  const MethodInfo *v79; // x1
  System_Collections_IEnumerator_o *v80; // x0
  const MethodInfo *v81; // x2
  System_Collections_IEnumerator_o *v82; // x0
  UnityEngine_Coroutine_o *v83; // x0
  MissionNaviTransitionBoardItem_o *v84; // x19
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  float v91; // s2
  unsigned __int64 v92; // d0 OVERLAPPED
  float v93; // s2
  System_String_o *v94; // x1
  int v95; // s1
  System_Collections_IEnumerator_o *v96; // x0
  UnityEngine_Coroutine_o *started; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7

  v4 = this;
  if ( (byte_596E79D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__);
    sub_2213A60(&TitleInfoEventDailyPointItemComponent___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_17931/*"bit_dedicate_left_item_flash_2"*/);
    sub_2213A60(&StringLiteral_17930/*"bit_dedicate_left_item_flash_1"*/);
    this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)sub_2213A60(&StringLiteral_17932/*"bit_dedicate_left_item_flash_3"*/);
    byte_596E79D = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  v7 = 0;
  if ( _1__state <= 2 )
  {
    switch ( _1__state )
    {
      case 0:
        v4->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_47;
        dailyPointItemInfoList = _4__this->fields.dailyPointItemInfoList;
        if ( !dailyPointItemInfoList || LODWORD(dailyPointItemInfoList->max_length) != 2 )
          goto LABEL_31;
        EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(_4__this->fields.eventId, 0);
        eventId = _4__this->fields.eventId;
        v4->fields._totalDailyPoint_5__2 = EventPointNoGroup;
        v4->fields._lastDailyPoint_5__3 = UserEventPointMaster__GetEventPointNoGroup(eventId, 0)
                                        - _4__this->fields.recievePoint;
        Item = TitleInfoEventDailyPointItemComponent__GetItem(_4__this, 0, v46);
        v4->fields._dailyPointItem_5__4 = Item;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v4->fields._dailyPointItem_5__4,
          (int32_t)Item,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        dailyPointItem_5__4 = (UnityEngine_Object_o *)v4->fields._dailyPointItem_5__4;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
        if ( UnityEngine_Object__op_Inequality(dailyPointItem_5__4, 0, 0) )
        {
          recievePoint = _4__this->fields.recievePoint;
          if ( recievePoint < 1 )
            v58 = 1.0;
          else
            v58 = (float)((int)log10f((float)recievePoint) + 1);
          v91 = v58 * _4__this->fields.firstEffectPositionDiff.fields.z;
          v92 = vadd_f32(
                  *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.x,
                  vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.x, v58)).n64_u64[0];
          v93 = _4__this->fields.firstEffectPosition.fields.z + v91;
          v94 = (System_String_o *)StringLiteral_17930/*"bit_dedicate_left_item_flash_1"*/;
          v95 = HIDWORD(v92);
          *(_QWORD *)&v4->fields._position_5__5.fields.x = v92;
          v4->fields._position_5__5.fields.z = v93;
          v96 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(_4__this, v94, *(UnityEngine_Vector3_o *)&v92, v2);
          started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v96, 0);
          v4->fields.__2__current = (Il2CppObject *)started;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
          sub_2213A04(p__2__current, (int32_t)started, v99, v100, v101, v102, v103, v104);
          v7 = 1;
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return v7;
        }
LABEL_16:
        v26 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
        if ( !*(&TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo, method, v2);
          v26 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
        }
        static_fields = v26->static_fields;
        _9__29_0 = static_fields->__9__29_0;
        if ( !_9__29_0 )
        {
          if ( !*(&v26->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v26, method, v2);
            static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
          }
          v29 = (Il2CppObject *)static_fields->__9;
          _9__29_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__29_0,
            v29,
            Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
            0);
          v30 = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
          v30->__9__29_0 = _9__29_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v30->__9__29_0,
            (int32_t)_9__29_0,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
        EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0);
        v4->fields._dailyPointItem_5__4 = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v4->fields._dailyPointItem_5__4,
          0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
LABEL_31:
        finishEffectEvent = v4->fields.finishEffectEvent;
        if ( finishEffectEvent )
          ActionExtensions__Call(finishEffectEvent, 0);
        return 0;
      case 1:
        v4->fields.__1__state = -1;
        if ( _4__this )
        {
          this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)_4__this->fields.subLabel;
          if ( this )
          {
            this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( this )
            {
              v7 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              v80 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
                      _4__this,
                      0.0,
                      1.0,
                      _4__this->fields.recievePointFadeDuration,
                      v79);
              UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v80, 0);
              v82 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
                      _4__this,
                      (System_String_o *)StringLiteral_17932/*"bit_dedicate_left_item_flash_3"*/,
                      v4->fields._position_5__5,
                      v81);
              v83 = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v82, 0);
              v4->fields.__2__current = (Il2CppObject *)v83;
              v84 = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
              sub_2213A04(v84, (int32_t)v83, v85, v86, v87, v88, v89, v90);
              v84[-1].fields._BoardType_k__BackingField = 2;
              return v7;
            }
          }
        }
        goto LABEL_47;
      case 2:
        v4->fields.__1__state = -1;
        if ( _4__this )
        {
          pointTextInterval = _4__this->fields.pointTextInterval;
          v19 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v19, pointTextInterval, 0);
          v4->fields.__2__current = (Il2CppObject *)v19;
          v10 = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
          sub_2213A04(v10, (int32_t)v19, v20, v21, v22, v23, v24, v25);
          v17 = 3;
          goto LABEL_39;
        }
LABEL_47:
        sub_2213CDC(this, method);
    }
  }
  else
  {
    if ( _1__state <= 4 )
    {
      if ( _1__state == 3 )
      {
        v60 = v4->fields._dailyPointItem_5__4;
        v4->fields.__1__state = -1;
        if ( v60 && _4__this )
        {
          v61 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
                  (TitleInfoEventDailyPointItemComponent_o *)this,
                  v60->fields.label,
                  v4->fields._lastDailyPoint_5__3,
                  v4->fields._totalDailyPoint_5__2,
                  _4__this->fields.countAnimDuration,
                  v3);
          v62 = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v61, 0);
          v4->fields.__2__current = (Il2CppObject *)v62;
          v10 = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
          sub_2213A04(v10, (int32_t)v62, v63, v64, v65, v66, v67, v68);
          v17 = 4;
          goto LABEL_39;
        }
      }
      else
      {
        v4->fields.__1__state = -1;
        if ( _4__this )
        {
          v8 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
                 _4__this,
                 1.0,
                 0.0,
                 _4__this->fields.recievePointFadeDuration,
                 method);
          v9 = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0);
          v4->fields.__2__current = (Il2CppObject *)v9;
          v10 = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
          sub_2213A04(v10, (int32_t)v9, v11, v12, v13, v14, v15, v16);
          v17 = 5;
LABEL_39:
          v10[-1].fields._BoardType_k__BackingField = v17;
          return 1;
        }
      }
      goto LABEL_47;
    }
    if ( _1__state == 5 )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, method);
        v70 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
                _4__this,
                (System_String_o *)StringLiteral_17931/*"bit_dedicate_left_item_flash_2"*/,
                _4__this->fields.lastEffectPosition,
                v69);
        v71 = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v70, 0);
        v4->fields.__2__current = (Il2CppObject *)v71;
        v10 = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
        sub_2213A04(v10, (int32_t)v71, v72, v73, v74, v75, v76, v77);
        v17 = 6;
        goto LABEL_39;
      }
      goto LABEL_47;
    }
    if ( _1__state == 6 )
    {
      *(_QWORD *)&v4->fields._position_5__5.fields.x = 0;
      v4->fields.__1__state = -1;
      v4->fields._position_5__5.fields.z = 0.0;
      goto LABEL_16;
    }
  }
  return v7;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E798 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventDailyPointItemComponent___c_TypeInfo);
    byte_596E798 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventDailyPointItemComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields,
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

  if ( (byte_596E799 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596E799 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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