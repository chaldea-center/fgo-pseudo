void __fastcall TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB2996 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_SideItemComponent___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_SideItemComponent__TypeInfo, v3);
    byte_4BB2996 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_SideItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_SideItemComponent__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  this->fields.eventId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__CreateItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *prefab; // x19
  Il2CppObject *itemList; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x19
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppClass *klass; // x8
  _QWORD *v18; // x9
  __int64 monitor_low; // x10
  __int64 v20; // x8

  if ( (byte_4BB2994 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_SideItemComponent__Add__, method);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    byte_4BB2994 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemList = UnityEngine_Object__Instantiate_object_(
               prefab,
               (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !itemList )
    goto LABEL_12;
  v8 = itemList;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34717732(gameObject, v10, 0LL);
  itemList = (Il2CppObject *)this->fields.itemList;
  if ( !itemList
    || (klass = itemList[1].klass,
        v18 = Method_System_Collections_Generic_List_SideItemComponent__Add__,
        ++HIDWORD(itemList[1].monitor),
        !klass) )
  {
LABEL_12:
    sub_1C13F80(itemList, v7);
  }
  monitor_low = SLODWORD(itemList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)itemList,
      v8,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (__int64)klass + 8 * monitor_low;
    LODWORD(itemList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v20 + 32) = v8;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v8, v11, v12, v13, v14, v15, v16);
  }
  return (SideItemComponent_o *)v8;
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
    sub_1C13F80(subLabel, method);
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
  __int64 v6; // x1
  TitleInfoEventDailyPointItemComponent_ItemInfo_o *ItemInfo; // x0
  const MethodInfo *v8; // x1
  TitleInfoEventDailyPointItemComponent_ItemInfo_o *v9; // x19
  System_Collections_Generic_List_object__o *itemList; // x0
  System_Collections_Generic_List_object__o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UISprite_o *syncRoot; // x21
  System_String_o *frameSpriteName; // x22
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4BB2993 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1C13D24(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__, v6);
    byte_4BB2993 = 1;
  }
  ItemInfo = TitleInfoEventDailyPointItemComponent__GetItemInfo(this, index, method);
  if ( !ItemInfo )
    return 0LL;
  v9 = ItemInfo;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  itemList = itemList->fields._size <= index
           ? (System_Collections_Generic_List_object__o *)TitleInfoEventDailyPointItemComponent__CreateItem(this, v8)
           : (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            itemList,
                                                            index,
                                                            (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_SideItemComponent__get_Item__);
  v11 = itemList;
  if ( !itemList )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
  GameObjectExtensions__SetLocalPosition(v13, v9->fields.itemPosition, 0LL);
  syncRoot = (UISprite_o *)v11->fields._syncRoot;
  frameSpriteName = v9->fields.frameSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(syncRoot, frameSpriteName, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v11->fields._syncRoot;
  if ( !itemList )
    goto LABEL_24;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemList->klass->vtable._33_get_Item.method)(
    itemList,
    itemList->klass->vtable._34_get_Count.methodPtr);
  itemList = (System_Collections_Generic_List_object__o *)v11->fields._syncRoot;
  if ( !itemList )
    goto LABEL_24;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  GameObjectExtensions__SetLocalPosition(v16, v9->fields.frameSpritePosition, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v11[1].klass;
  if ( !itemList )
    goto LABEL_24;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  GameObjectExtensions__SetLocalPosition(v17, v9->fields.pointTextPosition, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v11[1].klass;
  if ( !itemList )
    goto LABEL_24;
  UILabel__set_fontSize((UILabel_o *)itemList, v9->fields.pointTextFontSize, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v11[1].klass;
  if ( !itemList )
    goto LABEL_24;
  UIWidget__set_height((UIWidget_o *)itemList, v9->fields.pointTextFontSize, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v11[1].klass;
  if ( !itemList )
    goto LABEL_24;
  UILabel__set_effectStyle((UILabel_o *)itemList, v9->fields.pointTextEffectStyle, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)v11[1].klass;
  if ( !itemList
    || (UILabel__set_effectColor((UILabel_o *)itemList, v9->fields.pointTextEffectColor, 0LL),
        (itemList = (System_Collections_Generic_List_object__o *)v11[1].klass) == 0LL)
    || (UILabel__set_applyGradient((UILabel_o *)itemList, 1, 0LL),
        (itemList = (System_Collections_Generic_List_object__o *)v11[1].klass) == 0LL)
    || (UILabel__set_gradientTop((UILabel_o *)itemList, v9->fields.pointTextGradientColorTop, 0LL),
        (itemList = (System_Collections_Generic_List_object__o *)v11[1].klass) == 0LL) )
  {
LABEL_24:
    sub_1C13F80(itemList, v8);
  }
  UILabel__set_gradientBottom((UILabel_o *)itemList, v9->fields.pointTextGradientColorBottom, 0LL);
  return (SideItemComponent_o *)v11;
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
    sub_1C13F80(this, index);
  max_length = dailyPointItemInfoList->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1C13F88(this, *(_QWORD *)&index);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  QuestGroupMaster_o *v13; // x22
  System_Collections_Generic_List_int__o *QuestIdListByGroupType; // x0
  int32_t v15; // w20
  int32_t current; // w24
  int32_t eventId; // w29
  __int64 v18; // x1
  NetworkManager_c *v19; // x0
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB2995 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestGroupMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserQuestMaster___, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB2995 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v11);
  }
  v13 = (QuestGroupMaster_o *)Instance;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType((QuestGroupMaster_o *)Instance, 11, 0LL);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    QuestIdListByGroupType,
    (const MethodInfo_3610C7C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = 0;
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_33BAB1C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v22.fields._current;
    eventId = this->fields.eventId;
    if ( eventId == QuestGroupMaster__GetEventId(v13, v22.fields._current, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAF1E5 )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, v18);
        byte_4BAF1E5 = 1;
      }
      v19 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v19 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_1C13F80(v19, v18);
      if ( UserQuestMaster__getClearCountsFromId(
             (UserQuestMaster_o *)MasterData_object,
             v19->static_fields->userIdNumber,
             current,
             0LL) >= 1 )
        v15 += QuestGroupMaster__GetGroupId(v13, current, 11, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_33BAB18 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v15;
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

  if ( (byte_4BB2991 & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo, label);
    byte_4BB2991 = 1;
  }
  v10 = sub_1C13F70(TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = label;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)label, v11, v12, v13, v14, v15, v16);
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
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4BB2990 & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo, effectName);
    byte_4BB2990 = 1;
  }
  v9 = sub_1C13F70(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 40) = effectName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)effectName, v16, v17, v18, v19, v20, v21);
  *(float *)(v9 + 48) = x;
  *(float *)(v9 + 52) = y;
  *(float *)(v9 + 56) = z;
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        float fromAlpha,
        float toAlpha,
        float duration,
        const MethodInfo *method)
{
  __int64 v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BB2992 & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo, method);
    byte_4BB2992 = 1;
  }
  v9 = sub_1C13F70(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v9 + 44) = fromAlpha;
  *(float *)(v9 + 48) = toAlpha;
  *(float *)(v9 + 40) = duration;
  return (System_Collections_IEnumerator_o *)v9;
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
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  SideItemComponent_o *Item; // x20
  UnityEngine_Object_o *subLabel; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  UILabel_o *label; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  int v32; // [xsp+8h] [xbp-38h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB298E & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&recievePoint);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v11);
    sub_1C13D24(&StringLiteral_858/*"+"*/, v12);
    sub_1C13D24(&StringLiteral_25332/*"zoom"*/, v13);
    byte_4BB298E = 1;
  }
  this->fields.effectAssetData = assetData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.effectAssetData,
    (int64_t)assetData,
    (int64_t)assetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.recievePoint = recievePoint;
  Item = TitleInfoEventDailyPointItemComponent__GetItem(this, 0, v14);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
  {
    subLabel = (UnityEngine_Object_o *)this->fields.subLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(subLabel, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UnityEngine_Component_o *)this->fields.subLabel;
      if ( !transform )
        goto LABEL_27;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !Item )
        goto LABEL_27;
      v19 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Item, 0LL);
      if ( !v19 )
        goto LABEL_27;
      UnityEngine_Transform__SetParent_70743396(v19, (UnityEngine_Transform_o *)transform, 0, 0LL);
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
      v21 = this->fields.subLabel;
      v33 = recievePoint;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v22, v23, v24);
      v26 = System_String__Format((System_String_o *)StringLiteral_25332/*"zoom"*/, v25, 0LL);
      transform = (UnityEngine_Component_o *)System_String__Concat_62967944(
                                               (System_String_o *)StringLiteral_858/*"+"*/,
                                               v26,
                                               0LL);
      if ( !v21 )
        goto LABEL_27;
      UILabel__set_text(v21, (System_String_o *)transform, 0LL);
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
    v32 = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL) - this->fields.recievePoint;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v28, v29, v30);
    transform = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25332/*"zoom"*/, v31, 0LL);
    if ( label )
    {
      UILabel__set_text(label, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_27:
    sub_1C13F80(transform, v18);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  int64_t EventPointNoGroup; // x0
  __int64 v11; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  int32_t v21; // w21
  SideItemComponent_o *Item; // x22
  UILabel_o *label; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB298D & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_25332/*"zoom"*/, v8);
    byte_4BB298D = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  if ( !v9 )
    goto LABEL_22;
  items = v9->fields._items;
  v13 = Method_System_Collections_Generic_List_int__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v9->fields._size;
  v15 = (const MethodInfo *)EventPointNoGroup;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      EventPointNoGroup,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    items->m_Items[size + 1] = EventPointNoGroup;
  }
  EventPointNoGroup = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(this, v15);
  v17 = v9->fields._items;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++v9->fields._version;
  if ( !v17 )
LABEL_22:
    sub_1C13F80(EventPointNoGroup, v11);
  v19 = v9->fields._size;
  if ( (unsigned int)v19 >= v17->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      EventPointNoGroup,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = v19 + 1;
    v17->m_Items[v19 + 1] = EventPointNoGroup;
  }
  dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
  if ( dailyPointItemInfoList )
  {
    v21 = 0;
    while ( v21 < (signed int)dailyPointItemInfoList->max_length )
    {
      Item = TitleInfoEventDailyPointItemComponent__GetItem(this, v21, v16);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      EventPointNoGroup = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (EventPointNoGroup & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_22;
        label = Item->fields.label;
        v28 = System_Collections_Generic_List_int___get_Item(
                v9,
                v21,
                (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v24, v25, v26);
        EventPointNoGroup = (int64_t)System_String__Format((System_String_o *)StringLiteral_25332/*"zoom"*/, v27, 0LL);
        if ( !label )
          goto LABEL_22;
        UILabel__set_text(label, (System_String_o *)EventPointNoGroup, 0LL);
      }
      dailyPointItemInfoList = this->fields.dailyPointItemInfoList;
      ++v21;
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

  if ( (byte_4BB298F & 1) == 0 )
  {
    sub_1C13D24(
      &TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo,
      *(_QWORD *)&recievePoint);
    byte_4BB298F = 1;
  }
  v6 = sub_1C13F70(TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = finishEffectEvent;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)finishEffectEvent, v13, v14, v15, v16, v17, v18);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


void __fastcall TitleInfoEventDailyPointItemComponent_ItemInfo___ctor(
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

  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BAEDA1 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  UnityEngine_Object_o *label; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  float duration; // s0
  float timer_5__2; // s8
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  float deltaTime; // s0
  float v17; // s1
  float v18; // s0
  int32_t v19; // w8
  int32_t from; // w21
  float v21; // s2
  bool v22; // nf
  float v23; // s0
  float v24; // s8
  float v25; // s9
  float v26; // s8
  UILabel_o *v27; // x20
  unsigned int v28; // w8
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  Il2CppObject **p__2__current; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool result; // w0
  UILabel_o *v40; // x20
  Il2CppObject *v41; // x0
  unsigned int v42; // [xsp+8h] [xbp-38h] BYREF
  int32_t to; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB2999 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_25332/*"zoom"*/, v4);
    byte_4BB2999 = 1;
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
    if ( UnityEngine_Object__op_Equality(label, 0LL, 0LL) )
      return 0;
    duration = this->fields.duration;
    if ( duration <= 0.0 )
    {
      v40 = this->fields.label;
      to = this->fields.to;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &to, v7, v8, v9);
      v30 = System_String__Format((System_String_o *)StringLiteral_25332/*"zoom"*/, v41, 0LL);
      if ( !v40 )
        goto LABEL_28;
      UILabel__set_text(v40, v30, 0LL);
      return 0;
    }
    this->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 < duration )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v17 = this->fields.duration;
    v18 = timer_5__2 + deltaTime;
    v19 = this->fields.to;
    from = this->fields.from;
    if ( v18 <= v17 )
      v21 = v18;
    else
      v21 = this->fields.duration;
    v22 = v18 < 0.0;
    v23 = 0.0;
    if ( !v22 )
      v23 = v21;
    this->fields._timer_5__2 = v23;
    v24 = (float)(v19 - from);
    v25 = v23 / v17;
    if ( !byte_4BAEDA0 )
    {
      sub_1C13D24(&System_Math_TypeInfo, v12);
      byte_4BAEDA0 = 1;
    }
    v26 = v25 * v24;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = this->fields.label;
    v28 = vcvtms_s32_f32(v26);
    if ( floorf(v26) == INFINITY )
      v28 = 0x80000000;
    v42 = v28 + from;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v13, v14, v15);
    v30 = System_String__Format((System_String_o *)StringLiteral_25332/*"zoom"*/, v29, 0LL);
    if ( v27 )
    {
      UILabel__set_text(v27, v30, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1C13CC8((PartyOrganizationUtility_o *)p__2__current, 0LL, v33, v34, v35, v36, v37, v38);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_28:
    sub_1C13F80(v30, v31);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  UnityEngine_Component_o *_4__this; // x20
  AssetData_o *klass; // x0
  UnityEngine_Object_o *Object_38913448; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x21
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x20
  __int64 v20; // x21
  System_Action_o *v21; // x22
  System_Func_bool__o *v22; // x20
  UnityEngine_WaitWhile_o *v23; // x21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  v2 = this;
  if ( (byte_4BB299A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&System_Func_bool__TypeInfo, v3);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v4);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v5);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__, v8);
    sub_1C13D24(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__, v9);
    sub_1C13D24(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo, v10);
    this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)sub_1C13D24(
                                                                             &UnityEngine_WaitWhile_TypeInfo,
                                                                             v11);
    byte_4BB299A = 1;
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
      Object_38913448 = AssetData__GetObject_38913448(klass, v2->fields.effectName, 0LL);
      if ( Object_38913448 )
      {
        if ( (UnityEngine_GameObject_c *)Object_38913448->klass == UnityEngine_GameObject_TypeInfo )
          v16 = (Il2CppObject *)Object_38913448;
        else
          v16 = 0LL;
      }
      else
      {
        v16 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v17 = UnityEngine_Object__Instantiate_object_(
                v16,
                (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)UnityEngine_Component__get_gameObject(
                                                                                 _4__this,
                                                                                 0LL);
        if ( !this )
          goto LABEL_26;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v17, transform, 0LL);
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v17, v2->fields.position, 0LL);
        if ( !v17 )
          goto LABEL_26;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v17,
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        {
          v20 = sub_1C13F70(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v20, 0LL);
          if ( v20 )
          {
            *(_BYTE *)(v20 + 16) = 0;
            v21 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(
              v21,
              (Il2CppObject *)v20,
              Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
              0LL);
            if ( Component_object )
            {
              TabOpenEffectComponent__SetAnimationEndCallback((TabOpenEffectComponent_o *)Component_object, v21, 0LL);
              v22 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v22,
                (Il2CppObject *)v20,
                Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
                0LL);
              v23 = (UnityEngine_WaitWhile_o *)sub_1C13F70(UnityEngine_WaitWhile_TypeInfo);
              UnityEngine_WaitWhile___ctor(v23, v22, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v23;
              p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C13CC8(p__2__current, (int64_t)v23, v25, v26, v27, v28, v29, v30);
              LOBYTE(klass) = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return (char)klass;
            }
          }
LABEL_26:
          sub_1C13F80(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4BB299B & 1) == 0 )
  {
    this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)sub_1C13D24(
                                                                                            &UnityEngine_Object_TypeInfo,
                                                                                            method);
    byte_4BB299B = 1;
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
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
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
          ((void (__fastcall *)(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
            this,
            this->klass[1]._1.image,
            v2->fields.fromAlpha + (float)((float)(v12 / duration) * (float)(v2->fields.toAlpha - v2->fields.fromAlpha)));
          v2->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C13CC8(p__2__current, 0LL, v14, v15, v16, v17, v18, v19);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
LABEL_21:
      sub_1C13F80(this, method);
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
    if ( UnityEngine_Object__op_Inequality(subLabel, 0LL, 0LL) )
    {
      v2->fields._timer_5__2 = 0.0;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  const MethodInfo *v2; // x4
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  struct TitleInfoEventDailyPointItemComponent_ItemInfo_array *dailyPointItemInfoList; // x8
  const MethodInfo *v13; // x2
  SideItemComponent_o *Item; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  const MethodInfo *v22; // x2
  int recievePoint; // w8
  float v24; // s0
  float v25; // s2
  bool v26; // zf
  float v27; // s0
  bool v28; // w21
  const MethodInfo *v29; // x1
  System_Collections_IEnumerator_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_IEnumerator_o *v32; // x0
  UnityEngine_Coroutine_o *v33; // x0
  PartyOrganizationUtility_o *v34; // x19
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  float pointTextInterval; // s8
  UnityEngine_WaitForSeconds_o *v42; // x20
  PartyOrganizationUtility_o *v43; // x19
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int v50; // w8
  struct SideItemComponent_o *v51; // x8
  System_Collections_IEnumerator_o *v52; // x0
  UnityEngine_Coroutine_o *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_IEnumerator_o *v60; // x0
  UnityEngine_Coroutine_o *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x2
  System_Collections_IEnumerator_o *v69; // x0
  UnityEngine_Coroutine_o *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  TitleInfoEventDailyPointItemComponent___c_c *v77; // x0
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v79; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_Action_o *finishEffectEvent; // x0
  float v95; // s2
  unsigned __int64 v96; // d0 OVERLAPPED
  float v97; // s2
  int v98; // s1
  System_Collections_IEnumerator_o *v99; // x0
  UnityEngine_Coroutine_o *started; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7

  v3 = this;
  if ( (byte_4BB299C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__, v5);
    sub_1C13D24(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v6);
    sub_1C13D24(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_17483/*"bit_board_disappear5"*/, v8);
    sub_1C13D24(&StringLiteral_17482/*"bit_board_disappear4"*/, v9);
    this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)sub_1C13D24(
                                                                                               &StringLiteral_17484/*"bit_buddy_rankup"*/,
                                                                                               v10);
    byte_4BB299C = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      dailyPointItemInfoList = _4__this->fields.dailyPointItemInfoList;
      if ( !dailyPointItemInfoList || dailyPointItemInfoList->max_length != 2 )
        goto LABEL_36;
      v3->fields._totalDailyPoint_5__2 = UserEventPointMaster__GetEventPointNoGroup(_4__this->fields.eventId, 0LL);
      v3->fields._lastDailyPoint_5__3 = UserEventPointMaster__GetEventPointNoGroup(_4__this->fields.eventId, 0LL)
                                      - _4__this->fields.recievePoint;
      Item = TitleInfoEventDailyPointItemComponent__GetItem(_4__this, 0, v13);
      v3->fields._dailyPointItem_5__4 = Item;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v3->fields._dailyPointItem_5__4,
        (int64_t)Item,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      dailyPointItem_5__4 = (UnityEngine_Object_o *)v3->fields._dailyPointItem_5__4;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dailyPointItem_5__4, 0LL, 0LL) )
        goto LABEL_29;
      recievePoint = _4__this->fields.recievePoint;
      if ( recievePoint < 1 )
      {
        v27 = 1.0;
      }
      else
      {
        v24 = log10f((float)recievePoint);
        v25 = (float)((int)v24 + 1);
        v26 = v24 == INFINITY;
        v27 = -2147500000.0;
        if ( !v26 )
          v27 = v25;
      }
      v95 = v27 * _4__this->fields.firstEffectPositionDiff.fields.z;
      v96 = vadd_f32(
              *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.x,
              vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.x, v27)).n64_u64[0];
      v97 = _4__this->fields.firstEffectPosition.fields.z + v95;
      *(_QWORD *)&v3->fields._position_5__5.fields.x = v96;
      v3->fields._position_5__5.fields.z = v97;
      v98 = HIDWORD(v96);
      v99 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_17482/*"bit_board_disappear4"*/,
              *(UnityEngine_Vector3_o *)&v96,
              v22);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)_4__this, v99, 0LL);
      v3->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C13CC8(p__2__current, (int64_t)started, v102, v103, v104, v105, v106, v107);
      v28 = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return v28;
    case 1:
      v3->fields.__1__state = -1;
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
      v28 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v30 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              0.0,
              1.0,
              _4__this->fields.recievePointFadeDuration,
              v29);
      UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)_4__this, v30, 0LL);
      v32 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_17484/*"bit_buddy_rankup"*/,
              v3->fields._position_5__5,
              v31);
      v33 = UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)_4__this, v32, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v33;
      v34 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C13CC8(v34, (int64_t)v33, v35, v36, v37, v38, v39, v40);
      *(_DWORD *)&v34[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return v28;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      pointTextInterval = _4__this->fields.pointTextInterval;
      v42 = (UnityEngine_WaitForSeconds_o *)sub_1C13F70(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v42, pointTextInterval, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v42;
      v43 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C13CC8(v43, (int64_t)v42, v44, v45, v46, v47, v48, v49);
      v50 = 3;
      goto LABEL_27;
    case 3:
      v51 = v3->fields._dailyPointItem_5__4;
      v3->fields.__1__state = -1;
      if ( !v51 || !_4__this )
        goto LABEL_42;
      v52 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
              (TitleInfoEventDailyPointItemComponent_o *)this,
              v51->fields.label,
              v3->fields._lastDailyPoint_5__3,
              v3->fields._totalDailyPoint_5__2,
              _4__this->fields.countAnimDuration,
              v2);
      v53 = UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)_4__this, v52, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v53;
      v43 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C13CC8(v43, (int64_t)v53, v54, v55, v56, v57, v58, v59);
      v50 = 4;
      goto LABEL_27;
    case 4:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      v60 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              1.0,
              0.0,
              _4__this->fields.recievePointFadeDuration,
              method);
      v61 = UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)_4__this, v60, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v61;
      v43 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C13CC8(v43, (int64_t)v61, v62, v63, v64, v65, v66, v67);
      v50 = 5;
      goto LABEL_27;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
LABEL_42:
        sub_1C13F80(this, method);
      TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, method);
      v69 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_17483/*"bit_board_disappear5"*/,
              _4__this->fields.lastEffectPosition,
              v68);
      v70 = UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)_4__this, v69, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v70;
      v43 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C13CC8(v43, (int64_t)v70, v71, v72, v73, v74, v75, v76);
      v50 = 6;
LABEL_27:
      *(_DWORD *)&v43[-1].fields._IsQuestStartMenuMode_k__BackingField = v50;
      return 1;
    case 6:
      *(_QWORD *)&v3->fields._position_5__5.fields.x = 0LL;
      v3->fields.__1__state = -1;
      v3->fields._position_5__5.fields.z = 0.0;
LABEL_29:
      v77 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      if ( !TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
        v77 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      }
      _9__29_0 = v77->static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
        }
        v79 = (Il2CppObject *)v77->static_fields->__9;
        _9__29_0 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          _9__29_0,
          v79,
          Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
          0LL);
        static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        static_fields->__9__29_0 = _9__29_0;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
          (int64_t)_9__29_0,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
      }
      EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0LL);
      v3->fields._dailyPointItem_5__4 = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v3->fields._dailyPointItem_5__4, 0LL, v87, v88, v89, v90, v91, v92);
LABEL_36:
      finishEffectEvent = v3->fields.finishEffectEvent;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB2997 & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v1);
    byte_4BB2997 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventDailyPointItemComponent___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB2998 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BB2998 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v3);
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