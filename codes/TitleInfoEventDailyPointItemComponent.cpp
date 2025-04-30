void __fastcall TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4CE52 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_SideItemComponent___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_SideItemComponent__TypeInfo, v3);
    byte_4A4CE52 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_SideItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_SideItemComponent__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v4, v5, v6);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 monitor_low; // x10
  __int64 v16; // x8

  if ( (byte_4A4CE50 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_SideItemComponent__Add__, method);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A4CE50 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemList = UnityEngine_Object__Instantiate_object_(
               prefab,
               (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !itemList )
    goto LABEL_12;
  v8 = itemList;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34388184(gameObject, v10, 0LL);
  itemList = (Il2CppObject *)this->fields.itemList;
  if ( !itemList
    || (klass = itemList[1].klass,
        v14 = Method_System_Collections_Generic_List_SideItemComponent__Add__,
        ++HIDWORD(itemList[1].monitor),
        !klass) )
  {
LABEL_12:
    sub_1B86614(itemList, v7);
  }
  monitor_low = SLODWORD(itemList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)itemList,
      v8,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = (__int64)klass + 8 * monitor_low;
    LODWORD(itemList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v16 + 32) = v8;
    sub_1B8635C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v8, v11, v12);
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
    sub_1B86614(subLabel, method);
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

  if ( (byte_4A4CE4F & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1B863B8(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__, v6);
    byte_4A4CE4F = 1;
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
                                                            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_SideItemComponent__get_Item__);
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
    sub_1B86614(itemList, v8);
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
    sub_1B86614(this, index);
  max_length = dailyPointItemInfoList->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1B8661C(this, *(_QWORD *)&index);
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

  if ( (byte_4A4CE51 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestGroupMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestMaster___, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4CE51 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v11);
  }
  v13 = (QuestGroupMaster_o *)Instance;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType((QuestGroupMaster_o *)Instance, 11, 0LL);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    QuestIdListByGroupType,
    (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = 0;
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v22.fields._current;
    eventId = this->fields.eventId;
    if ( eventId == QuestGroupMaster__GetEventId(v13, v22.fields._current, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v18);
        byte_4A48C25 = 1;
      }
      v19 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v19 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_1B86614(v19, v18);
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
    (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A4CE4D & 1) == 0 )
  {
    sub_1B863B8(&TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo, label);
    byte_4A4CE4D = 1;
  }
  v10 = sub_1B86604(TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = label;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)label, v11, v12);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4A4CE4C & 1) == 0 )
  {
    sub_1B863B8(&TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo, effectName);
    byte_4A4CE4C = 1;
  }
  v9 = sub_1B86604(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 40) = effectName;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 40), (int32_t)effectName, v12, v13);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4CE4E & 1) == 0 )
  {
    sub_1B863B8(&TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo, method);
    byte_4A4CE4E = 1;
  }
  v9 = sub_1B86604(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  SideItemComponent_o *Item; // x20
  UnityEngine_Object_o *subLabel; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *label; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  int v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4CE4A & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&recievePoint);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_809/*"+"*/, v8);
    sub_1B863B8(&StringLiteral_24769/*"{0:#,0}"*/, v9);
    byte_4A4CE4A = 1;
  }
  this->fields.effectAssetData = assetData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.effectAssetData, (int32_t)assetData, (int32_t)assetData, method);
  this->fields.recievePoint = recievePoint;
  Item = TitleInfoEventDailyPointItemComponent__GetItem(this, 0, v10);
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
      v15 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Item, 0LL);
      if ( !v15 )
        goto LABEL_27;
      UnityEngine_Transform__SetParent_69379772(v15, (UnityEngine_Transform_o *)transform, 0, 0LL);
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
      v17 = this->fields.subLabel;
      v29 = recievePoint;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v18, v19, v20);
      v22 = System_String__Format((System_String_o *)StringLiteral_24769/*"{0:#,0}"*/, v21, 0LL);
      transform = (UnityEngine_Component_o *)System_String__Concat_61645176(
                                               (System_String_o *)StringLiteral_809/*"+"*/,
                                               v22,
                                               0LL);
      if ( !v17 )
        goto LABEL_27;
      UILabel__set_text(v17, (System_String_o *)transform, 0LL);
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
    v28 = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL) - this->fields.recievePoint;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v24, v25, v26);
    transform = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_24769/*"{0:#,0}"*/, v27, 0LL);
    if ( label )
    {
      UILabel__set_text(label, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_27:
    sub_1B86614(transform, v14);
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

  if ( (byte_4A4CE49 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_24769/*"{0:#,0}"*/, v8);
    byte_4A4CE49 = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1B86614(EventPointNoGroup, v11);
  v19 = v9->fields._size;
  if ( (unsigned int)v19 >= v17->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      EventPointNoGroup,
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
                (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v24, v25, v26);
        EventPointNoGroup = (int64_t)System_String__Format((System_String_o *)StringLiteral_24769/*"{0:#,0}"*/, v27, 0LL);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A4CE4B & 1) == 0 )
  {
    sub_1B863B8(
      &TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo,
      *(_QWORD *)&recievePoint);
    byte_4A4CE4B = 1;
  }
  v6 = sub_1B86604(TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v6 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 40) = finishEffectEvent;
  sub_1B8635C((CGThumbnailListItem_o *)(v6 + 40), (int32_t)finishEffectEvent, v9, v10);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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

  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A487E1 = 1;
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  bool result; // w0
  UILabel_o *v36; // x20
  Il2CppObject *v37; // x0
  unsigned int v38; // [xsp+8h] [xbp-38h] BYREF
  int32_t to; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4CE55 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_24769/*"{0:#,0}"*/, v4);
    byte_4A4CE55 = 1;
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
      v36 = this->fields.label;
      to = this->fields.to;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &to, v7, v8, v9);
      v30 = System_String__Format((System_String_o *)StringLiteral_24769/*"{0:#,0}"*/, v37, 0LL);
      if ( !v36 )
        goto LABEL_28;
      UILabel__set_text(v36, v30, 0LL);
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
    if ( !byte_4A487E0 )
    {
      sub_1B863B8(&System_Math_TypeInfo, v12);
      byte_4A487E0 = 1;
    }
    v26 = v25 * v24;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = this->fields.label;
    v28 = vcvtms_s32_f32(v26);
    if ( floorf(v26) == INFINITY )
      v28 = 0x80000000;
    v38 = v28 + from;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v13, v14, v15);
    v30 = System_String__Format((System_String_o *)StringLiteral_24769/*"{0:#,0}"*/, v29, 0LL);
    if ( v27 )
    {
      UILabel__set_text(v27, v30, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B8635C((CGThumbnailListItem_o *)p__2__current, 0, v33, v34);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_28:
    sub_1B86614(v30, v31);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  UnityEngine_Object_o *Object_38723128; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x21
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x20
  __int64 v20; // x21
  System_Action_o *v21; // x22
  System_Func_bool__o *v22; // x20
  UnityEngine_WaitWhile_o *v23; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  v2 = this;
  if ( (byte_4A4CE56 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&System_Func_bool__TypeInfo, v3);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v4);
    sub_1B863B8(&UnityEngine_GameObject_TypeInfo, v5);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__, v8);
    sub_1B863B8(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__, v9);
    sub_1B863B8(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo, v10);
    this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)sub_1B863B8(
                                                                             &UnityEngine_WaitWhile_TypeInfo,
                                                                             v11);
    byte_4A4CE56 = 1;
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
      Object_38723128 = AssetData__GetObject_38723128(klass, v2->fields.effectName, 0LL);
      if ( Object_38723128 )
      {
        if ( (UnityEngine_GameObject_c *)Object_38723128->klass == UnityEngine_GameObject_TypeInfo )
          v16 = (Il2CppObject *)Object_38723128;
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
                (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        {
          v20 = sub_1B86604(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v20, 0LL);
          if ( v20 )
          {
            *(_BYTE *)(v20 + 16) = 0;
            v21 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              v21,
              (Il2CppObject *)v20,
              Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
              0LL);
            if ( Component_object )
            {
              TabOpenEffectComponent__SetAnimationEndCallback((TabOpenEffectComponent_o *)Component_object, v21, 0LL);
              v22 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v22,
                (Il2CppObject *)v20,
                Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
                0LL);
              v23 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
              UnityEngine_WaitWhile___ctor(v23, v22, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v23;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1B8635C(p__2__current, (int32_t)v23, v25, v26);
              LOBYTE(klass) = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return (char)klass;
            }
          }
LABEL_26:
          sub_1B86614(this, method);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool result; // w0

  v2 = this;
  if ( (byte_4A4CE57 & 1) == 0 )
  {
    this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)sub_1B863B8(
                                                                                            &UnityEngine_Object_TypeInfo,
                                                                                            method);
    byte_4A4CE57 = 1;
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
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1B8635C(p__2__current, 0, v14, v15);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
LABEL_21:
      sub_1B86614(this, method);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  const MethodInfo *v18; // x2
  int recievePoint; // w8
  float v20; // s0
  float v21; // s2
  bool v22; // zf
  float v23; // s0
  bool v24; // w21
  const MethodInfo *v25; // x1
  System_Collections_IEnumerator_o *v26; // x0
  const MethodInfo *v27; // x2
  System_Collections_IEnumerator_o *v28; // x0
  UnityEngine_Coroutine_o *v29; // x0
  CGThumbnailListItem_o *v30; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  float pointTextInterval; // s8
  UnityEngine_WaitForSeconds_o *v34; // x20
  CGThumbnailListItem_o *v35; // x19
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int v38; // w8
  struct SideItemComponent_o *v39; // x8
  System_Collections_IEnumerator_o *v40; // x0
  UnityEngine_Coroutine_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_IEnumerator_o *v44; // x0
  UnityEngine_Coroutine_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x2
  System_Collections_IEnumerator_o *v49; // x0
  UnityEngine_Coroutine_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  TitleInfoEventDailyPointItemComponent___c_c *v53; // x0
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v55; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Action_o *finishEffectEvent; // x0
  float v63; // s2
  unsigned __int64 v64; // d0 OVERLAPPED
  float v65; // s2
  int v66; // s1
  System_Collections_IEnumerator_o *v67; // x0
  UnityEngine_Coroutine_o *started; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v70; // w2
  const MethodInfo *v71; // x3

  v3 = this;
  if ( (byte_4A4CE58 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__, v5);
    sub_1B863B8(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v6);
    sub_1B863B8(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_16982/*"bit_dedicate_left_item_flash_2"*/, v8);
    sub_1B863B8(&StringLiteral_16981/*"bit_dedicate_left_item_flash_1"*/, v9);
    this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)sub_1B863B8(
                                                                                               &StringLiteral_16983/*"bit_dedicate_left_item_flash_3"*/,
                                                                                               v10);
    byte_4A4CE58 = 1;
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
      sub_1B8635C((CGThumbnailListItem_o *)&v3->fields._dailyPointItem_5__4, (int32_t)Item, v15, v16);
      dailyPointItem_5__4 = (UnityEngine_Object_o *)v3->fields._dailyPointItem_5__4;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dailyPointItem_5__4, 0LL, 0LL) )
        goto LABEL_29;
      recievePoint = _4__this->fields.recievePoint;
      if ( recievePoint < 1 )
      {
        v23 = 1.0;
      }
      else
      {
        v20 = log10f((float)recievePoint);
        v21 = (float)((int)v20 + 1);
        v22 = v20 == INFINITY;
        v23 = -2147500000.0;
        if ( !v22 )
          v23 = v21;
      }
      v63 = v23 * _4__this->fields.firstEffectPositionDiff.fields.z;
      v64 = vadd_f32(
              *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.x,
              vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.x, v23)).n64_u64[0];
      v65 = _4__this->fields.firstEffectPosition.fields.z + v63;
      *(_QWORD *)&v3->fields._position_5__5.fields.x = v64;
      v3->fields._position_5__5.fields.z = v65;
      v66 = HIDWORD(v64);
      v67 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16981/*"bit_dedicate_left_item_flash_1"*/,
              *(UnityEngine_Vector3_o *)&v64,
              v18);
      started = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v67, 0LL);
      v3->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1B8635C(p__2__current, (int32_t)started, v70, v71);
      v24 = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return v24;
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
      v24 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v26 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              0.0,
              1.0,
              _4__this->fields.recievePointFadeDuration,
              v25);
      UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v26, 0LL);
      v28 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16983/*"bit_dedicate_left_item_flash_3"*/,
              v3->fields._position_5__5,
              v27);
      v29 = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v29;
      v30 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1B8635C(v30, (int32_t)v29, v31, v32);
      LODWORD(v30[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return v24;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      pointTextInterval = _4__this->fields.pointTextInterval;
      v34 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v34, pointTextInterval, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v34;
      v35 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1B8635C(v35, (int32_t)v34, v36, v37);
      v38 = 3;
      goto LABEL_27;
    case 3:
      v39 = v3->fields._dailyPointItem_5__4;
      v3->fields.__1__state = -1;
      if ( !v39 || !_4__this )
        goto LABEL_42;
      v40 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
              (TitleInfoEventDailyPointItemComponent_o *)this,
              v39->fields.label,
              v3->fields._lastDailyPoint_5__3,
              v3->fields._totalDailyPoint_5__2,
              _4__this->fields.countAnimDuration,
              v2);
      v41 = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v40, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v41;
      v35 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1B8635C(v35, (int32_t)v41, v42, v43);
      v38 = 4;
      goto LABEL_27;
    case 4:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_42;
      v44 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              1.0,
              0.0,
              _4__this->fields.recievePointFadeDuration,
              method);
      v45 = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v44, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v45;
      v35 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1B8635C(v35, (int32_t)v45, v46, v47);
      v38 = 5;
      goto LABEL_27;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
LABEL_42:
        sub_1B86614(this, method);
      TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, method);
      v49 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16982/*"bit_dedicate_left_item_flash_2"*/,
              _4__this->fields.lastEffectPosition,
              v48);
      v50 = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v49, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v50;
      v35 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1B8635C(v35, (int32_t)v50, v51, v52);
      v38 = 6;
LABEL_27:
      LODWORD(v35[-1].fields._ThumbnailSpritePath_k__BackingField) = v38;
      return 1;
    case 6:
      *(_QWORD *)&v3->fields._position_5__5.fields.x = 0LL;
      v3->fields.__1__state = -1;
      v3->fields._position_5__5.fields.z = 0.0;
LABEL_29:
      v53 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      if ( !TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
        v53 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      }
      _9__29_0 = v53->static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v53 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
        }
        v55 = (Il2CppObject *)v53->static_fields->__9;
        _9__29_0 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          _9__29_0,
          v55,
          Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
          0LL);
        static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        static_fields->__9__29_0 = _9__29_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v57, v58);
      }
      EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0LL);
      v3->fields._dailyPointItem_5__4 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v3->fields._dailyPointItem_5__4, 0, v59, v60);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4CE53 & 1) == 0 )
  {
    sub_1B863B8(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v1);
    byte_4A4CE53 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventDailyPointItemComponent___c_o *)v2;
  sub_1B8635C(
    (CGThumbnailListItem_o *)TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A4CE54 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A4CE54 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
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