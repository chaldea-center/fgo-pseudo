void __fastcall TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B144E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SideItemComponent___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_SideItemComponent__TypeInfo, v5, v6);
    byte_4B144E6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_SideItemComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_SideItemComponent__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  this->fields.eventId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__CreateItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *prefab; // x19
  Il2CppObject *itemList; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppClass *klass; // x8
  _QWORD *v21; // x9
  __int64 monitor_low; // x10
  __int64 v23; // x8

  if ( (byte_4B144E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SideItemComponent__Add__, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B144E4 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  itemList = UnityEngine_Object__Instantiate_object_(
               prefab,
               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !itemList )
    goto LABEL_12;
  v11 = itemList;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(gameObject, v13, 0LL);
  itemList = (Il2CppObject *)this->fields.itemList;
  if ( !itemList
    || (klass = itemList[1].klass,
        v21 = Method_System_Collections_Generic_List_SideItemComponent__Add__,
        ++HIDWORD(itemList[1].monitor),
        !klass) )
  {
LABEL_12:
    sub_1BCAA3C(itemList, v10);
  }
  monitor_low = SLODWORD(itemList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)itemList,
      v11,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = (__int64)klass + 8 * monitor_low;
    LODWORD(itemList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v23 + 32) = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)v11, v14, v15, v16, v17, v18, v19);
  }
  return (SideItemComponent_o *)v11;
}


void __fastcall TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *subLabel; // x0

  subLabel = (UnityEngine_Component_o *)this->fields.subLabel;
  if ( !subLabel
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))subLabel->klass[1]._1.castClass)(
          subLabel,
          subLabel->klass[1]._1.declaringType,
          0.0),
        (subLabel = (UnityEngine_Component_o *)this->fields.subLabel) == 0LL)
    || (subLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(subLabel, 0LL)) == 0LL )
  {
    sub_1BCAA3C(subLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)subLabel, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__GetItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TitleInfoEventDailyPointItemComponent_ItemInfo_o *ItemInfo; // x0
  const MethodInfo *v10; // x1
  TitleInfoEventDailyPointItemComponent_ItemInfo_o *v11; // x19
  System_Collections_Generic_List_object__o *itemList; // x0
  System_Collections_Generic_List_object__o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  UISprite_o *syncRoot; // x21
  System_String_o *frameSpriteName; // x22
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0

  if ( (byte_4B144E3 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__, v7, v8);
    byte_4B144E3 = 1;
  }
  ItemInfo = TitleInfoEventDailyPointItemComponent__GetItemInfo(this, index, method);
  if ( !ItemInfo )
    return 0LL;
  v11 = ItemInfo;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  itemList = itemList->fields._size <= index
           ? (System_Collections_Generic_List_object__o *)TitleInfoEventDailyPointItemComponent__CreateItem(this, v10)
           : (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            itemList,
                                                            index,
                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SideItemComponent__get_Item__);
  v13 = itemList;
  if ( !itemList )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
  GameObjectExtensions__SetLocalPosition(v15, v11->fields.itemPosition, 0LL);
  syncRoot = (UISprite_o *)v13->fields._syncRoot;
  frameSpriteName = v11->fields.frameSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
  AtlasManager__SetEventUI(syncRoot, frameSpriteName, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v13->fields._syncRoot;
  if ( !itemList )
    goto LABEL_24;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemList->klass->vtable._33_get_Item.method)(
    itemList,
    itemList->klass->vtable._34_get_Count.methodPtr);
  itemList = (System_Collections_Generic_List_object__o *)v13->fields._syncRoot;
  if ( !itemList )
    goto LABEL_24;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  GameObjectExtensions__SetLocalPosition(v19, v11->fields.frameSpritePosition, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v13[1].klass;
  if ( !itemList )
    goto LABEL_24;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  GameObjectExtensions__SetLocalPosition(v20, v11->fields.pointTextPosition, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v13[1].klass;
  if ( !itemList )
    goto LABEL_24;
  UILabel__set_fontSize((UILabel_o *)itemList, v11->fields.pointTextFontSize, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v13[1].klass;
  if ( !itemList )
    goto LABEL_24;
  UIWidget__set_height((UIWidget_o *)itemList, v11->fields.pointTextFontSize, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v13[1].klass;
  if ( !itemList )
    goto LABEL_24;
  UILabel__set_effectStyle((UILabel_o *)itemList, v11->fields.pointTextEffectStyle, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v13[1].klass;
  if ( !itemList
    || (UILabel__set_effectColor((UILabel_o *)itemList, v11->fields.pointTextEffectColor, 0LL),
        (itemList = (System_Collections_Generic_List_object__o *)v13[1].klass) == 0LL)
    || (UILabel__set_applyGradient((UILabel_o *)itemList, 1, 0LL),
        (itemList = (System_Collections_Generic_List_object__o *)v13[1].klass) == 0LL)
    || (UILabel__set_gradientTop((UILabel_o *)itemList, v11->fields.pointTextGradientColorTop, 0LL),
        (itemList = (System_Collections_Generic_List_object__o *)v13[1].klass) == 0LL) )
  {
LABEL_24:
    sub_1BCAA3C(itemList, v10);
  }
  UILabel__set_gradientBottom((UILabel_o *)itemList, v11->fields.pointTextGradientColorBottom, 0LL);
  return (SideItemComponent_o *)v13;
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventDailyPointItemComponent_ItemInfo_o *__fastcall TitleInfoEventDailyPointItemComponent__GetItemInfo(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  int32_t max_length; // w9

  dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
  if ( !dailyPointItemInfoList )
    sub_1BCAA3C(this, *(_QWORD *)&index);
  max_length = dailyPointItemInfoList->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BCAA44(this, index);
  return dailyPointItemInfoList->m_Items[index];
}


int32_t __fastcall TitleInfoEventDailyPointItemComponent__GetLastDailyEventPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL) - this->fields.recievePoint;
}


int32_t __fastcall TitleInfoEventDailyPointItemComponent__GetTotalDailyEventPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
}


int32_t __fastcall TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x21
  QuestGroupMaster_o *v21; // x22
  System_Collections_Generic_List_int__o *QuestIdListByGroupType; // x0
  int32_t v23; // w20
  int32_t current; // w23
  int32_t eventId; // w27
  __int64 v26; // x1
  int64_t UserId; // x0
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B144E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B144E5 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v19);
  }
  v21 = (QuestGroupMaster_o *)Instance;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType((QuestGroupMaster_o *)Instance, 11, 0LL);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    QuestIdListByGroupType,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = 0;
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v30.fields._current;
    eventId = this->fields.eventId;
    if ( eventId == QuestGroupMaster__GetEventId(v21, v30.fields._current, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        sub_1BCAA3C(UserId, UserId);
      if ( UserQuestMaster__getClearCountsFromId((UserQuestMaster_o *)MasterData_object, UserId, current, 0LL) >= 1 )
        v23 += QuestGroupMaster__GetGroupId(v21, current, 11, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v23;
}


bool __fastcall TitleInfoEventDailyPointItemComponent__IsDispPossible(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventDailyPointItemComponent__IsEventRaidBoss(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        UILabel_o *label,
        int32_t from,
        int32_t to,
        float duration,
        const MethodInfo *method)
{
  __int64 v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B144E1 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo, label, *(_QWORD *)&from);
    byte_4B144E1 = 1;
  }
  v10 = sub_1BCAA2C(
          TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo,
          label,
          *(_QWORD *)&from,
          *(_QWORD *)&to);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = label;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)label, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v10 + 44) = to;
  *(_DWORD *)(v10 + 48) = from;
  *(float *)(v10 + 40) = duration;
  return (System_Collections_IEnumerator_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        System_String_o *effectName,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4B144E0 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo, effectName, method);
    byte_4B144E0 = 1;
  }
  v10 = sub_1BCAA2C(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo, effectName, method, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 40) = effectName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 40), (int64_t)effectName, v17, v18, v19, v20, v21, v22);
  *(float *)(v10 + 48) = x;
  *(float *)(v10 + 52) = y;
  *(float *)(v10 + 56) = z;
  return (System_Collections_IEnumerator_o *)v10;
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        float fromAlpha,
        float toAlpha,
        float duration,
        const MethodInfo *method)
{
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B144E2 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo, method, v5);
    byte_4B144E2 = 1;
  }
  v11 = sub_1BCAA2C(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo, method, v5, v6);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(float *)(v11 + 44) = fromAlpha;
  *(float *)(v11 + 48) = toAlpha;
  *(float *)(v11 + 40) = duration;
  return (System_Collections_IEnumerator_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventDailyPointItemComponent__PrepareUpdateUIWithEffect(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t recievePoint,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  SideItemComponent_o *Item; // x20
  __int64 v20; // x1
  UnityEngine_Object_o *subLabel; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_Transform_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v26; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  UILabel_o *label; // x20
  Il2CppObject *v30; // x0
  int v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B144DE & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&recievePoint, assetData);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v15, v16);
    byte_4B144DE = 1;
  }
  this->fields.effectAssetData = assetData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.effectAssetData,
    (int64_t)assetData,
    (int64_t)assetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.recievePoint = recievePoint;
  Item = TitleInfoEventDailyPointItemComponent__GetItem(this, 0, v17);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
  {
    subLabel = (UnityEngine_Object_o *)this->fields.subLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(subLabel, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !Item )
        goto LABEL_27;
      v24 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Item, 0LL);
      if ( !v24 )
        goto LABEL_27;
      UnityEngine_Transform__SetParent_70175492(v24, (UnityEngine_Transform_o *)transform, 0, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
      GameObjectExtensions__SetLocalPosition(gameObject, this->fields.subLabelPosition, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_fontSize((UILabel_o *)transform, this->fields.subLabelFontSize, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UIWidget__set_height((UIWidget_o *)transform, this->fields.subLabelFontSize, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_effectStyle((UILabel_o *)transform, this->fields.subLabelEffectStyle, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_effectColor((UILabel_o *)transform, this->fields.subLabelEffectColor, 0LL);
      v26 = this->fields.subLabel;
      v32 = recievePoint;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
      v28 = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v27, 0LL);
      transform = (UnityEngine_Component_o *)System_String__Concat_62401220(
                                               (System_String_o *)StringLiteral_855/*"+"*/,
                                               v28,
                                               0LL);
      if ( !v26 )
        goto LABEL_27;
      UILabel__set_text(v26, (System_String_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_applyGradient((UILabel_o *)transform, 1, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_gradientTop((UILabel_o *)transform, this->fields.subLabelGradientColorTop, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      UILabel__set_gradientBottom((UILabel_o *)transform, this->fields.subLabelGradientColorBottom, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))transform->klass[1]._1.castClass)(
        transform,
        transform->klass[1]._1.declaringType,
        0.0);
    }
    else if ( !Item )
    {
      goto LABEL_27;
    }
    label = Item->fields.label;
    v31 = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL) - this->fields.recievePoint;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    transform = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v30, 0LL);
    if ( label )
    {
      UILabel__set_text(label, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_27:
    sub_1BCAA3C(transform, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventDailyPointItemComponent__Setup(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  this->fields.eventId = eventId;
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUI(this, *(const MethodInfo **)&eventId);
}


void __fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUI(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_int__o *v19; // x20
  int64_t EventPointNoGroup; // x0
  __int64 v21; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  int32_t v31; // w21
  __int64 v32; // x1
  SideItemComponent_o *Item; // x22
  UILabel_o *label; // x22
  Il2CppObject *v35; // x0
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B144DD & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v14, v15);
    byte_4B144DD = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  if ( !v19 )
    goto LABEL_22;
  items = v19->fields._items;
  v23 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v19->fields._size;
  v25 = (const MethodInfo *)EventPointNoGroup;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      EventPointNoGroup,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    items->m_Items[size + 1] = EventPointNoGroup;
  }
  EventPointNoGroup = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(this, v25);
  v27 = v19->fields._items;
  v28 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !v27 )
LABEL_22:
    sub_1BCAA3C(EventPointNoGroup, v21);
  v29 = v19->fields._size;
  if ( (unsigned int)v29 >= v27->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      EventPointNoGroup,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = v29 + 1;
    v27->m_Items[v29 + 1] = EventPointNoGroup;
  }
  dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
  if ( dailyPointItemInfoList )
  {
    v31 = 0;
    while ( v31 < (signed int)dailyPointItemInfoList->max_length )
    {
      Item = TitleInfoEventDailyPointItemComponent__GetItem(this, v31, v26);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      EventPointNoGroup = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (EventPointNoGroup & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_22;
        label = Item->fields.label;
        v36 = System_Collections_Generic_List_int___get_Item(
                v19,
                v31,
                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
        EventPointNoGroup = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v35, 0LL);
        if ( !label )
          goto LABEL_22;
        UILabel__set_text(label, (System_String_o *)EventPointNoGroup, 0LL);
      }
      dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
      ++v31;
      if ( !dailyPointItemInfoList )
        goto LABEL_22;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t recievePoint,
        System_Action_o *finishEffectEvent,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B144DF & 1) == 0 )
  {
    sub_1BCA7E0(
      &TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo,
      *(_QWORD *)&recievePoint,
      finishEffectEvent);
    byte_4B144DF = 1;
  }
  v6 = sub_1BCAA2C(
         TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo,
         *(_QWORD *)&recievePoint,
         finishEffectEvent,
         method);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = finishEffectEvent;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)finishEffectEvent, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall TitleInfoEventDailyPointItemComponent__UpdateDisp(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventDailyPointItemComponent__UpdateUIWithEffect(
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


void __fastcall TitleInfoEventDailyPointItemComponent_ItemInfo___ctor(
        TitleInfoEventDailyPointItemComponent_ItemInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Vector3_c *v4; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v7; // x9
  float v8; // s1
  struct UnityEngine_Vector3_StaticFields *v9; // x8
  float v10; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  v4 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.itemPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.itemPosition.fields.z = z;
  v7 = v4->static_fields;
  v8 = v7->zeroVector.fields.z;
  *(_QWORD *)&this->fields.frameSpritePosition.fields.x = *(_QWORD *)&v7->zeroVector.fields.x;
  this->fields.frameSpritePosition.fields.z = v8;
  v9 = v4->static_fields;
  v10 = v9->zeroVector.fields.z;
  *(_QWORD *)&this->fields.pointTextPosition.fields.x = *(_QWORD *)&v9->zeroVector.fields.x;
  this->fields.pointTextPosition.fields.z = v10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31___ctor(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__MoveNext(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t _1__state; // w8
  UnityEngine_Object_o *label; // x20
  float duration; // s0
  float timer_5__2; // s8
  __int64 v12; // x1
  __int64 v13; // x2
  float deltaTime; // s0
  float v15; // s1
  float v16; // s0
  int32_t v17; // w8
  int32_t from; // w21
  float v19; // s2
  bool v20; // nf
  float v21; // s0
  float v22; // s8
  float v23; // s9
  float v24; // s8
  UILabel_o *v25; // x20
  unsigned int v26; // w8
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  Il2CppObject **p__2__current; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  bool result; // w0
  UILabel_o *v38; // x20
  Il2CppObject *v39; // x0
  unsigned int v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t to; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B144E9 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v6, v7);
    byte_4B144E9 = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(label, 0LL, 0LL) )
      return 0;
    duration = this->fields.duration;
    if ( duration <= 0.0 )
    {
      v38 = this->fields.label;
      to = this->fields.to;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &to);
      v28 = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v39, 0LL);
      if ( !v38 )
        goto LABEL_28;
      UILabel__set_text(v38, v28, 0LL);
      return 0;
    }
    this->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 < duration )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v15 = this->fields.duration;
    v16 = timer_5__2 + deltaTime;
    v17 = this->fields.to;
    from = this->fields.from;
    if ( v16 <= v15 )
      v19 = v16;
    else
      v19 = this->fields.duration;
    v20 = v16 < 0.0;
    v21 = 0.0;
    if ( !v20 )
      v21 = v19;
    this->fields._timer_5__2 = v21;
    v22 = (float)(v17 - from);
    v23 = v21 / v15;
    if ( !byte_4B109C0 )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, v12, v13);
      byte_4B109C0 = 1;
    }
    v24 = v23 * v22;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
    v25 = this->fields.label;
    v26 = vcvtms_s32_f32(v24);
    if ( floorf(v24) == INFINITY )
      v26 = 0x80000000;
    v40 = v26 + from;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    v28 = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v27, 0LL);
    if ( v25 )
    {
      UILabel__set_text(v25, v28, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v31, v32, v33, v34, v35, v36);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_28:
    sub_1BCAA3C(v28, v29);
  }
  return 0;
}


Il2CppObject *__fastcall TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__System_Collections_IEnumerator_Reset(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__System_Collections_IEnumerator_get_Current(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31__System_IDisposable_Dispose(
        TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30___ctor(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__MoveNext(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t _1__state; // w8
  UnityEngine_Component_o *_4__this; // x20
  AssetData_o *klass; // x0
  UnityEngine_Object_o *Object_38483832; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x21
  __int64 v28; // x1
  Il2CppObject *v29; // x21
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_bool__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  UnityEngine_WaitWhile_o *v46; // x21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  v3 = this;
  if ( (byte_4B144EA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v6, v7);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__, v14, v15);
    sub_1BCA7E0(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__, v16, v17);
    sub_1BCA7E0(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo, v18, v19);
    this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)sub_1BCA7E0(
                                                                             &UnityEngine_WaitWhile_TypeInfo,
                                                                             v20,
                                                                             v21);
    byte_4B144EA = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      _4__this = (UnityEngine_Component_o *)v3->fields.__4__this;
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_26;
      klass = (AssetData_o *)_4__this[8].klass;
      if ( !klass )
        return (char)klass;
      Object_38483832 = AssetData__GetObject_38483832(klass, v3->fields.effectName, 0LL);
      if ( Object_38483832 )
      {
        if ( (UnityEngine_GameObject_c *)Object_38483832->klass == UnityEngine_GameObject_TypeInfo )
          v27 = (Il2CppObject *)Object_38483832;
        else
          v27 = 0LL;
      }
      else
      {
        v27 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
        v29 = UnityEngine_Object__Instantiate_object_(
                v27,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)UnityEngine_Component__get_gameObject(
                                                                                 _4__this,
                                                                                 0LL);
        if ( !this )
          goto LABEL_26;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v29, transform, 0LL);
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v29, v3->fields.position, 0LL);
        if ( !v29 )
          goto LABEL_26;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v29,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        {
          v35 = sub_1BCAA2C(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo, v32, v33, v34);
          System_Object___ctor((Il2CppObject *)v35, 0LL);
          if ( v35 )
          {
            *(_BYTE *)(v35 + 16) = 0;
            v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v36, v37);
            System_Action___ctor(
              v38,
              (Il2CppObject *)v35,
              Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
              0LL);
            if ( Component_object )
            {
              TabOpenEffectComponent__SetAnimationEndCallback((TabOpenEffectComponent_o *)Component_object, v38, 0LL);
              v42 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v39, v40, v41);
              System_Func_bool____ctor(
                v42,
                (Il2CppObject *)v35,
                Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
                0LL);
              v46 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v43, v44, v45);
              UnityEngine_WaitWhile___ctor(v46, v42, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v46;
              p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
              sub_1BCA784(p__2__current, (int64_t)v46, v48, v49, v50, v51, v52, v53);
              LOBYTE(klass) = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return (char)klass;
            }
          }
LABEL_26:
          sub_1BCAA3C(this, method);
        }
      }
    }
    LOBYTE(klass) = 0;
    return (char)klass;
  }
  LOBYTE(klass) = 0;
  v3->fields.__1__state = -1;
  return (char)klass;
}


Il2CppObject *__fastcall TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__System_Collections_IEnumerator_Reset(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__System_Collections_IEnumerator_get_Current(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30__System_IDisposable_Dispose(
        TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32___ctor(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__MoveNext(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *v3; // x19
  int32_t _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x21
  UnityEngine_Object_o *subLabel; // x20
  float timer_5__2; // s8
  float deltaTime; // s0
  float duration; // s1
  float v10; // s0
  float v11; // s2
  bool v12; // nf
  float v13; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  bool result; // w0

  v3 = this;
  if ( (byte_4B144EB & 1) == 0 )
  {
    this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)sub_1BCA7E0(
                                                                                            &UnityEngine_Object_TypeInfo,
                                                                                            method,
                                                                                            v2);
    byte_4B144EB = 1;
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
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      duration = v3->fields.duration;
      v10 = timer_5__2 + deltaTime;
      if ( v10 <= duration )
        v11 = v10;
      else
        v11 = v3->fields.duration;
      v12 = v10 < 0.0;
      v13 = 0.0;
      if ( !v12 )
        v13 = v11;
      v3->fields._timer_5__2 = v13;
      if ( _4__this )
      {
        this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)_4__this->fields.subLabel;
        if ( this )
        {
          ((void (__fastcall *)(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
            this,
            this->klass[1]._1.image,
            v3->fields.fromAlpha + (float)((float)(v13 / duration) * (float)(v3->fields.toAlpha - v3->fields.fromAlpha)));
          v3->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(p__2__current, 0LL, v15, v16, v17, v18, v19, v20);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
LABEL_21:
      sub_1BCAA3C(this, method);
    }
    return 0;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
    subLabel = (UnityEngine_Object_o *)_4__this->fields.subLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(subLabel, 0LL, 0LL) )
    {
      v3->fields._timer_5__2 = 0.0;
      timer_5__2 = 0.0;
      goto LABEL_11;
    }
  }
  return 0;
}


Il2CppObject *__fastcall TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__System_Collections_IEnumerator_Reset(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__System_Collections_IEnumerator_get_Current(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32__System_IDisposable_Dispose(
        TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29___ctor(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__MoveNext(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  const MethodInfo *v22; // x2
  SideItemComponent_o *Item; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  int recievePoint; // w8
  float v33; // s0
  float v34; // s2
  bool v35; // zf
  float v36; // s0
  bool v37; // w21
  const MethodInfo *v38; // x1
  System_Collections_IEnumerator_o *v39; // x0
  const MethodInfo *v40; // x2
  System_Collections_IEnumerator_o *v41; // x0
  UnityEngine_Coroutine_o *v42; // x0
  PartyOrganizationUtility_o *v43; // x19
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  float pointTextInterval; // s8
  UnityEngine_WaitForSeconds_o *v51; // x20
  PartyOrganizationUtility_o *v52; // x19
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int v59; // w8
  struct SideItemComponent_o *v60; // x8
  System_Collections_IEnumerator_o *v61; // x0
  UnityEngine_Coroutine_o *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Collections_IEnumerator_o *v69; // x0
  UnityEngine_Coroutine_o *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  const MethodInfo *v77; // x2
  System_Collections_IEnumerator_o *v78; // x0
  UnityEngine_Coroutine_o *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  TitleInfoEventDailyPointItemComponent___c_c *v86; // x0
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v88; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Action_o *finishEffectEvent; // x0
  float v104; // s2
  unsigned __int64 v105; // d0 OVERLAPPED
  float v106; // s2
  int v107; // s1
  System_Collections_IEnumerator_o *v108; // x0
  UnityEngine_Coroutine_o *started; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7

  v5 = this;
  if ( (byte_4B144EC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__, v8, v9);
    sub_1BCA7E0(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_17393/*"bit_dedicate_left_item_flash_2"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17392/*"bit_dedicate_left_item_flash_1"*/, v16, v17);
    this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)sub_1BCA7E0(
                                                                                               &StringLiteral_17394/*"bit_dedicate_left_item_flash_3"*/,
                                                                                               v18,
                                                                                               v19);
    byte_4B144EC = 1;
  }
  _4__this = v5->fields.__4__this;
  switch ( v5->fields.__1__state )
  {
    case 0:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      dailyPointItemInfoList = _4__this->fields.dailyPointItemInfoList;
      if ( !dailyPointItemInfoList || dailyPointItemInfoList->max_length != 2 )
        goto LABEL_36;
      v5->fields._totalDailyPoint_5__2 = UserEventPointMaster__GetEventPointNoGroup(_4__this->fields.eventId, 0LL);
      v5->fields._lastDailyPoint_5__3 = UserEventPointMaster__GetEventPointNoGroup(_4__this->fields.eventId, 0LL)
                                      - _4__this->fields.recievePoint;
      Item = TitleInfoEventDailyPointItemComponent__GetItem(_4__this, 0, v22);
      v5->fields._dailyPointItem_5__4 = Item;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields._dailyPointItem_5__4,
        (int64_t)Item,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      dailyPointItem_5__4 = (UnityEngine_Object_o *)v5->fields._dailyPointItem_5__4;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      if ( !UnityEngine_Object__op_Inequality(dailyPointItem_5__4, 0LL, 0LL) )
        goto LABEL_29;
      recievePoint = _4__this->fields.recievePoint;
      if ( recievePoint < 1 )
      {
        v36 = 1.0;
      }
      else
      {
        v33 = log10f((float)recievePoint);
        v34 = (float)((int)v33 + 1);
        v35 = v33 == INFINITY;
        v36 = -2147500000.0;
        if ( !v35 )
          v36 = v34;
      }
      v104 = v36 * _4__this->fields.firstEffectPositionDiff.fields.z;
      v105 = vadd_f32(
               *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.x,
               vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.x, v36)).n64_u64[0];
      v106 = _4__this->fields.firstEffectPosition.fields.z + v104;
      *(_QWORD *)&v5->fields._position_5__5.fields.x = v105;
      v5->fields._position_5__5.fields.z = v106;
      v107 = HIDWORD(v105);
      v108 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
               _4__this,
               (System_String_o *)StringLiteral_17392/*"bit_dedicate_left_item_flash_1"*/,
               *(UnityEngine_Vector3_o *)&v105,
               v2);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v108, 0LL);
      v5->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)started, v111, v112, v113, v114, v115, v116);
      v37 = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return v37;
    case 1:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)_4__this->fields.subLabel;
      if ( !this )
        goto LABEL_42;
      this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)this,
                                                                                                 0LL);
      if ( !this )
        goto LABEL_42;
      v37 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v39 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              0.0,
              1.0,
              _4__this->fields.recievePointFadeDuration,
              v38);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v39, 0LL);
      v41 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_17394/*"bit_dedicate_left_item_flash_3"*/,
              v5->fields._position_5__5,
              v40);
      v42 = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v41, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v42;
      v43 = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
      sub_1BCA784(v43, (int64_t)v42, v44, v45, v46, v47, v48, v49);
      *(_DWORD *)&v43[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return v37;
    case 2:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      pointTextInterval = _4__this->fields.pointTextInterval;
      v51 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v51, pointTextInterval, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v51;
      v52 = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
      sub_1BCA784(v52, (int64_t)v51, v53, v54, v55, v56, v57, v58);
      v59 = 3;
      goto LABEL_27;
    case 3:
      v60 = v5->fields._dailyPointItem_5__4;
      v5->fields.__1__state = -1;
      if ( !v60 || !_4__this )
        goto LABEL_42;
      v61 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
              (TitleInfoEventDailyPointItemComponent_o *)this,
              v60->fields.label,
              v5->fields._lastDailyPoint_5__3,
              v5->fields._totalDailyPoint_5__2,
              _4__this->fields.countAnimDuration,
              v4);
      v62 = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v61, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v62;
      v52 = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
      sub_1BCA784(v52, (int64_t)v62, v63, v64, v65, v66, v67, v68);
      v59 = 4;
      goto LABEL_27;
    case 4:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      v69 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              1.0,
              0.0,
              _4__this->fields.recievePointFadeDuration,
              method);
      v70 = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v69, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v70;
      v52 = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
      sub_1BCA784(v52, (int64_t)v70, v71, v72, v73, v74, v75, v76);
      v59 = 5;
      goto LABEL_27;
    case 5:
      v5->fields.__1__state = -1;
      if ( !_4__this )
LABEL_42:
        sub_1BCAA3C(this, method);
      TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, method);
      v78 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_17393/*"bit_dedicate_left_item_flash_2"*/,
              _4__this->fields.lastEffectPosition,
              v77);
      v79 = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v78, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v79;
      v52 = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
      sub_1BCA784(v52, (int64_t)v79, v80, v81, v82, v83, v84, v85);
      v59 = 6;
LABEL_27:
      *(_DWORD *)&v52[-1].fields._IsQuestStartMenuMode_k__BackingField = v59;
      return 1;
    case 6:
      *(_QWORD *)&v5->fields._position_5__5.fields.x = 0LL;
      v5->fields.__1__state = -1;
      v5->fields._position_5__5.fields.z = 0.0;
LABEL_29:
      v86 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      if ( !TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo, method);
        v86 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      }
      _9__29_0 = v86->static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( !v86->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v86, method);
          v86 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
        }
        v88 = (Il2CppObject *)v86->static_fields->__9;
        _9__29_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
        System_Action___ctor(
          _9__29_0,
          v88,
          Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
          0LL);
        static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        static_fields->__9__29_0 = _9__29_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
          (int64_t)_9__29_0,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95);
      }
      EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0LL);
      v5->fields._dailyPointItem_5__4 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields._dailyPointItem_5__4, 0LL, v96, v97, v98, v99, v100, v101);
LABEL_36:
      finishEffectEvent = v5->fields.finishEffectEvent;
      if ( finishEffectEvent )
        ActionExtensions__Call(finishEffectEvent, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__System_Collections_IEnumerator_Reset(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__System_Collections_IEnumerator_get_Current(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29__System_IDisposable_Dispose(
        TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventDailyPointItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B144E7 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v1, v2);
    byte_4B144E7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TitleInfoEventDailyPointItemComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventDailyPointItemComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TitleInfoEventDailyPointItemComponent___c___ctor(
        TitleInfoEventDailyPointItemComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPointItemComponent___c___UpdateDailyPointUIWithEffect_IE_b__29_0(
        TitleInfoEventDailyPointItemComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B144E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B144E8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


void __fastcall TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0___ctor(
        TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0___PlayEffect_IE_b__0(
        TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  this->fields.isFinished = 1;
}


bool __fastcall TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0___PlayEffect_IE_b__1(
        TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  return !this->fields.isFinished;
}