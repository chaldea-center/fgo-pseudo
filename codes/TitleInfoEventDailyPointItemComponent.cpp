void __fastcall TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B4405 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SideItemComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_SideItemComponent__TypeInfo);
    byte_42B4405 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SideItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.effectAssetData = (struct AssetData_o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.effectAssetData,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  LODWORD(this[1].klass) = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__CreateItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_UI_Dropdown_DropdownItem_o *dailyPointItemInfoList; // x20
  UnityEngine_Component_o *effectAssetData; // x0
  __int64 v5; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42B4403 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SideItemComponent__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_SideItemComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B4403 = 1;
  }
  dailyPointItemInfoList = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.dailyPointItemInfoList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 dailyPointItemInfoList,
                                                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !effectAssetData
    || (v6 = (EventMissionProgressRequest_Argument_ProgressData_o *)effectAssetData,
        gameObject = UnityEngine_Component__get_gameObject(effectAssetData, 0LL),
        v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SafeSetParent_32091088(gameObject, v8, 0LL),
        (effectAssetData = (UnityEngine_Component_o *)this->fields.effectAssetData) == 0LL) )
  {
    sub_B52A5C(effectAssetData, v5);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effectAssetData,
    v6,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SideItemComponent__Add__);
  return (SideItemComponent_o *)v6;
}


void __fastcall TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0

  gameObject = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
  if ( !gameObject
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
          gameObject,
          gameObject->klass[1]._1.declaringType,
          0.0),
        (gameObject = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_B52A5C(gameObject, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__GetItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Component_o *ItemInfo; // x0
  const MethodInfo *v6; // x1
  struct AssetData_o *effectAssetData; // x22
  int32_t name; // w8
  UnityEngine_Component_o *v9; // x19
  UnityEngine_Component_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  UISprite_o *klass; // x21
  System_String_o *monitor; // x22
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_42B4402 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__);
    byte_42B4402 = 1;
  }
  ItemInfo = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__GetItemInfo(this, index, method);
  if ( !ItemInfo )
    return 0LL;
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    goto LABEL_27;
  name = (int32_t)effectAssetData->fields.name;
  v9 = ItemInfo;
  if ( name <= index )
  {
    ItemInfo = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__CreateItem(this, v6);
    v10 = ItemInfo;
    if ( !ItemInfo )
      goto LABEL_27;
  }
  else
  {
    if ( name <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v10 = *(UnityEngine_Component_o **)(*(_QWORD *)&effectAssetData->fields.type + 8LL * index + 32);
    if ( !v10 )
LABEL_27:
      sub_B52A5C(ItemInfo, v6);
  }
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  v12 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalPosition(v12, *(UnityEngine_Vector3_o *)&v9->fields.m_CachedPtr, 0LL);
  klass = (UISprite_o *)v10[1].klass;
  monitor = (System_String_o *)v9[1].monitor;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, monitor, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].klass;
  if ( !ItemInfo )
    goto LABEL_27;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))ItemInfo->klass[2]._1.typeMetadataHandle)(
    ItemInfo,
    ItemInfo->klass[2]._1.interopData);
  ItemInfo = (UnityEngine_Component_o *)v10[1].klass;
  if ( !ItemInfo )
    goto LABEL_27;
  v15 = UnityEngine_Component__get_gameObject(ItemInfo, 0LL);
  GameObjectExtensions__SetLocalPosition(v15, *(UnityEngine_Vector3_o *)&v9[1].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  v16 = UnityEngine_Component__get_gameObject(ItemInfo, 0LL);
  GameObjectExtensions__SetLocalPosition(v16, *(UnityEngine_Vector3_o *)((char *)&v9[2].klass + 4), 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_fontSize((UILabel_o *)ItemInfo, v9[2].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UIWidget__set_height((UIWidget_o *)ItemInfo, v9[2].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_effectStyle((UILabel_o *)ItemInfo, *((_DWORD *)&v9[2].fields + 1), 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_effectColor((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v9[3].klass, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_applyGradient((UILabel_o *)ItemInfo, 1, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_gradientTop((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v9[3].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v10[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_gradientBottom((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v9[4].monitor, 0LL);
  return (SideItemComponent_o *)v10;
}


TitleInfoEventDailyPointItemComponent_ItemInfo_o *__fastcall TitleInfoEventDailyPointItemComponent__GetItemInfo(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UILabel_o *subLabel; // x8
  int32_t leftAnchor; // w9
  __int64 v6; // x0

  subLabel = this->fields.subLabel;
  if ( !subLabel )
    sub_B52A5C(this, index);
  leftAnchor = (int32_t)subLabel->fields.leftAnchor;
  if ( leftAnchor <= index )
    return 0LL;
  if ( leftAnchor <= (unsigned int)index )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  return (TitleInfoEventDailyPointItemComponent_ItemInfo_o *)*((_QWORD *)&subLabel->fields.rightAnchor + index);
}


int32_t __fastcall TitleInfoEventDailyPointItemComponent__GetLastDailyEventPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL) - HIDWORD(this[1].klass);
}


int32_t __fastcall TitleInfoEventDailyPointItemComponent__GetTotalDailyEventPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL);
}


int32_t __fastcall TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v6; // x22
  System_Collections_Generic_List_int__o *QuestIdListByGroupType; // x0
  int32_t v8; // w20
  int32_t current; // w23
  int klass; // w26
  int64_t UserId; // x0
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B4404 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4404 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  v6 = (QuestGroupMaster_o *)Instance;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType((QuestGroupMaster_o *)Instance, 11, 0LL);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    QuestIdListByGroupType,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v14 = v13;
  v8 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v14,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v14.fields.current;
    klass = (int)this[1].klass;
    if ( klass == QuestGroupMaster__GetEventId(v6, v14.fields.current, 0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B52A5C(UserId, UserId);
      if ( UserQuestMaster__getClearCountsFromId(MasterData_WarQuestSelectionMaster, UserId, current, 0LL) >= 1 )
        v8 += QuestGroupMaster__GetGroupId(v6, current, 11, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v14,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v8;
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
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42B4400 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
    byte_42B4400 = 1;
  }
  v10 = sub_B52A54(TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31___ctor(
    (TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *)v10,
    0,
    0LL);
  if ( !v10 )
    sub_B52A5C(v11, v12);
  *(_QWORD *)(v10 + 32) = label;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)label, v13, v14, v15, v16, v17, v18);
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
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_42B43FF & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
    byte_42B43FF = 1;
  }
  v9 = sub_B52A54(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30___ctor(
    (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = effectName;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)effectName, v18, v19, v20, v21, v22, v23);
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
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B4401 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
    byte_42B4401 = 1;
  }
  v9 = sub_B52A54(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32___ctor(
    (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(float *)(v9 + 40) = duration;
  *(float *)(v9 + 44) = fromAlpha;
  *(float *)(v9 + 48) = toAlpha;
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall TitleInfoEventDailyPointItemComponent__PrepareUpdateUIWithEffect(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t recievePoint,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v11; // x2
  UnityEngine_Component_o *Item; // x20
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *monitor; // x20
  Il2CppObject *v22; // x0
  int v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B43FD & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42B43FD = 1;
  }
  *(_QWORD *)&this->fields.eventId = assetData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventId,
    (System_Int32_array **)assetData,
    (System_String_array **)assetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  HIDWORD(this[1].klass) = recievePoint;
  Item = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, 0, v11);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
  {
    v13 = *(UnityEngine_Object_o **)&this->fields.subLabelPosition.fields.x;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !Item )
        goto LABEL_29;
      v16 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Item, 0LL);
      if ( !v16 )
        goto LABEL_29;
      UnityEngine_Transform__SetParent_35737932(v16, (UnityEngine_Transform_o *)transform, 0, 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
      GameObjectExtensions__SetLocalPosition(
        gameObject,
        *(UnityEngine_Vector3_o *)&this->fields.subLabelPosition.fields.z,
        0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      UILabel__set_fontSize((UILabel_o *)transform, LODWORD(this->fields.subLabelEffectColor.fields.r), 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      UIWidget__set_height((UIWidget_o *)transform, LODWORD(this->fields.subLabelEffectColor.fields.r), 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      UILabel__set_effectStyle((UILabel_o *)transform, LODWORD(this->fields.subLabelEffectColor.fields.g), 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      UILabel__set_effectColor(
        (UILabel_o *)transform,
        *(UnityEngine_Color_o *)&this->fields.subLabelEffectColor.fields.b,
        0LL);
      v18 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      v24 = recievePoint;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v20 = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v19, 0LL);
      transform = (UnityEngine_Component_o *)System_String__Concat_44568316(
                                               (System_String_o *)StringLiteral_701/*"+"*/,
                                               v20,
                                               0LL);
      if ( !v18 )
        goto LABEL_29;
      UILabel__set_text(v18, (System_String_o *)transform, 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      UILabel__set_applyGradient((UILabel_o *)transform, 1, 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      UILabel__set_gradientTop(
        (UILabel_o *)transform,
        *(UnityEngine_Color_o *)&this->fields.subLabelGradientColorTop.fields.b,
        0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      UILabel__set_gradientBottom(
        (UILabel_o *)transform,
        *(UnityEngine_Color_o *)&this->fields.subLabelGradientColorBottom.fields.b,
        0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))transform->klass[1]._1.castClass)(
        transform,
        transform->klass[1]._1.declaringType,
        0.0);
    }
    else if ( !Item )
    {
      goto LABEL_29;
    }
    monitor = (UILabel_o *)Item[1].monitor;
    v23 = UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL) - HIDWORD(this[1].klass);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    transform = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v22, 0LL);
    if ( monitor )
    {
      UILabel__set_text(monitor, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_29:
    sub_B52A5C(transform, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventDailyPointItemComponent__Setup(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  LODWORD(this[1].klass) = eventId;
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUI(this, *(const MethodInfo **)&eventId);
}


void __fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUI(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int64_t EventPointNoGroup; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  int32_t TotalDailyEventQuestPoint; // w0
  const MethodInfo *v8; // x2
  struct UILabel_o *subLabel; // x8
  unsigned __int64 v10; // x21
  UnityEngine_Object_o *Item; // x22
  UILabel_o *monitor; // x22
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B43FC & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42B43FC = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL);
  if ( !v3 )
LABEL_17:
    sub_B52A5C(EventPointNoGroup, v5);
  System_Collections_Generic_List_int___Add(
    v3,
    EventPointNoGroup,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  TotalDailyEventQuestPoint = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(this, v6);
  System_Collections_Generic_List_int___Add(
    v3,
    TotalDailyEventQuestPoint,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  subLabel = this->fields.subLabel;
  if ( subLabel )
  {
    v10 = 0LL;
    while ( (__int64)v10 < SLODWORD(subLabel->fields.leftAnchor) )
    {
      Item = (UnityEngine_Object_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, v10, v8);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      EventPointNoGroup = UnityEngine_Object__op_Inequality(Item, 0LL, 0LL);
      if ( (EventPointNoGroup & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_17;
        monitor = (UILabel_o *)Item[1].monitor;
        if ( v10 >= (unsigned int)v3->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v14 = v3->fields._items->m_Items[v10 + 1];
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
        EventPointNoGroup = (int64_t)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v13, 0LL);
        if ( !monitor )
          goto LABEL_17;
        UILabel__set_text(monitor, (System_String_o *)EventPointNoGroup, 0LL);
      }
      subLabel = this->fields.subLabel;
      ++v10;
      if ( !subLabel )
        goto LABEL_17;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t recievePoint,
        System_Action_o *finishEffectEvent,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42B43FE & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
    byte_42B43FE = 1;
  }
  v6 = sub_B52A54(TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29___ctor(
    (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B52A5C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = finishEffectEvent;
  sub_B52920(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)finishEffectEvent,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


void __fastcall TitleInfoEventDailyPointItemComponent_ItemInfo___ctor(
        TitleInfoEventDailyPointItemComponent_ItemInfo_o *this,
        const MethodInfo *method)
{
  this->fields.itemPosition = UnityEngine_Vector3__get_zero(0LL);
  this->fields.frameSpritePosition = UnityEngine_Vector3__get_zero(0LL);
  this->fields.pointTextPosition = UnityEngine_Vector3__get_zero(0LL);
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
  int32_t _1__state; // w8
  UnityEngine_Object_o *label; // x20
  float duration; // s0
  float timer_5__2; // s8
  float deltaTime; // s0
  float v8; // s0
  int32_t v9; // w8
  int32_t from; // w21
  float v11; // s1
  int32_t v12; // w0
  UILabel_o *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UILabel_o *v19; // x20
  Il2CppObject *v20; // x0
  int v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t to; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AD9D9 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42AD9D9 = 1;
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
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(label, 0LL, 0LL) )
      return 0;
    duration = this->fields.duration;
    if ( duration <= 0.0 )
    {
      v19 = this->fields.label;
      to = this->fields.to;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &to);
      v15 = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v20, 0LL);
      if ( !v19 )
        goto LABEL_18;
      UILabel__set_text(v19, v15, 0LL);
      return 0;
    }
    this->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 < duration )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v8 = UnityEngine_Mathf__Clamp(timer_5__2 + deltaTime, 0.0, this->fields.duration, 0LL);
    v9 = this->fields.to;
    from = this->fields.from;
    v11 = this->fields.duration;
    this->fields._timer_5__2 = v8;
    v12 = UnityEngine_Mathf__FloorToInt((float)(v8 / v11) * (float)(v9 - from), 0LL);
    v13 = this->fields.label;
    v21 = v12 + from;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v15 = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v14, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, v15, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B52920(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_18:
    sub_B52A5C(v15, v16);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  int32_t _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  AssetData_o *v5; // x0
  UnityEngine_Object_o *Object_30344972; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_Component_o *transform; // x0
  TabOpenEffectComponent_o *Component_srcLineSprite; // x21
  __int64 v11; // x20
  System_Action_o *v12; // x22
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitWhile_o *v14; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_42AD9DA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__);
    sub_B52984(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__);
    sub_B52984(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
    this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)sub_B52984(&UnityEngine_WaitWhile_TypeInfo);
    byte_42AD9DA = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      _4__this = v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_28;
      v5 = *(AssetData_o **)&_4__this->fields.eventId;
      if ( !v5 )
        return (char)v5;
      Object_30344972 = AssetData__GetObject_30344972(v5, v2->fields.effectName, 0LL);
      if ( Object_30344972 )
      {
        if ( (UnityEngine_GameObject_c *)Object_30344972->klass == UnityEngine_GameObject_TypeInfo )
          v7 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30344972;
        else
          v7 = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v7,
                                           (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)_4__this,
                                                                                 0LL);
        if ( !this )
          goto LABEL_28;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        GameObjectExtensions__SafeSetParent(v8, transform, 0LL);
        GameObjectExtensions__SetLocalPosition(v8, v2->fields.position, 0LL);
        if ( !v8 )
          goto LABEL_28;
        Component_srcLineSprite = (TabOpenEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v8,
                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          v11 = sub_B52A54(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v11, 0LL);
          if ( v11 )
          {
            *(_BYTE *)(v11 + 16) = 0;
            v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              v12,
              (Il2CppObject *)v11,
              Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              TabOpenEffectComponent__SetAnimationEndCallback(Component_srcLineSprite, v12, 0LL);
              v13 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v13,
                (Il2CppObject *)v11,
                Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
                (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
              v14 = (UnityEngine_WaitWhile_o *)sub_B52A54(UnityEngine_WaitWhile_TypeInfo);
              UnityEngine_WaitWhile___ctor(v14, v13, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = &v2->fields.__2__current;
              sub_B52920(p__2__current);
              LOBYTE(v5) = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return (char)v5;
            }
          }
LABEL_28:
          sub_B52A5C(this, method);
        }
      }
    }
    LOBYTE(v5) = 0;
    return (char)v5;
  }
  LOBYTE(v5) = 0;
  v2->fields.__1__state = -1;
  return (char)v5;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  UnityEngine_Object_o *v5; // x20
  float timer_5__2; // s8
  bool result; // w0
  float deltaTime; // s0
  float v9; // s0
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_42AD9DB & 1) == 0 )
  {
    this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD9DB = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = v2->fields._timer_5__2;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_B52A5C(this, method);
    v5 = *(UnityEngine_Object_o **)&_4__this->fields.subLabelPosition.fields.x;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
      return 0;
    v2->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 >= v2->fields.duration )
    return 0;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v9 = UnityEngine_Mathf__Clamp(timer_5__2 + deltaTime, 0.0, v2->fields.duration, 0LL);
  v2->fields._timer_5__2 = v9;
  if ( !_4__this )
    goto LABEL_17;
  this = *(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o **)&_4__this->fields.subLabelPosition.fields.x;
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
    this,
    this->klass[1]._1.image,
    v2->fields.fromAlpha
  + (float)((float)(v9 / v2->fields.duration) * (float)(v2->fields.toAlpha - v2->fields.fromAlpha)));
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B52920(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *v2; // x19
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  struct UILabel_o *subLabel; // x8
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  int klass_high; // w8
  float v7; // s0
  double v8; // d0
  float v9; // s0
  System_Collections_IEnumerator_o *v10; // x0
  Il2CppObject **p__2__current; // x19
  int v12; // w8
  float v13; // s8
  UnityEngine_WaitForSeconds_o *v14; // x20
  struct SideItemComponent_o *v15; // x8
  System_Collections_IEnumerator_o *v16; // x0
  bool v17; // w21
  System_Collections_IEnumerator_o *v18; // x0
  System_Collections_IEnumerator_o *v19; // x0
  System_Collections_IEnumerator_o *v20; // x0
  TitleInfoEventDailyPointItemComponent___c_c *v21; // x0
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v24; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *v25; // x0
  System_Action_o *finishEffectEvent; // x0
  float v28; // s2
  unsigned __int64 v29; // d0 OVERLAPPED
  float v30; // s2
  int v31; // s1
  System_Collections_IEnumerator_o *v32; // x0

  v2 = this;
  if ( (byte_42AD9DC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__);
    sub_B52984(&TitleInfoEventDailyPointItemComponent___c_TypeInfo);
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B52984(&StringLiteral_16864/*"bit_dedicate_left_item_flash_2"*/);
    sub_B52984(&StringLiteral_16863/*"bit_dedicate_left_item_flash_1"*/);
    this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)sub_B52984(&StringLiteral_16865/*"bit_dedicate_left_item_flash_3"*/);
    byte_42AD9DC = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      subLabel = _4__this->fields.subLabel;
      if ( !subLabel || LODWORD(subLabel->fields.leftAnchor) != 2 )
        goto LABEL_41;
      v2->fields._totalDailyPoint_5__2 = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventPoint(_4__this, 0LL);
      v2->fields._lastDailyPoint_5__3 = TitleInfoEventDailyPointItemComponent__GetLastDailyEventPoint(_4__this, 0LL);
      v2->fields._dailyPointItem_5__4 = TitleInfoEventDailyPointItemComponent__GetItem(_4__this, 0, 0LL);
      sub_B52920(&v2->fields._dailyPointItem_5__4);
      dailyPointItem_5__4 = (UnityEngine_Object_o *)v2->fields._dailyPointItem_5__4;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(dailyPointItem_5__4, 0LL, 0LL) )
        goto LABEL_32;
      klass_high = HIDWORD(_4__this[1].klass);
      if ( klass_high < 1 )
      {
        v9 = 1.0;
      }
      else
      {
        v7 = log10f((float)klass_high);
        if ( v7 == INFINITY )
          v8 = -v7;
        else
          v8 = v7;
        v9 = (float)((int)v8 + 1);
      }
      v28 = v9 * _4__this->fields.lastEffectPosition.fields.y;
      v29 = vadd_f32(
              *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.z,
              vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.z, v9)).n64_u64[0];
      v30 = _4__this->fields.firstEffectPositionDiff.fields.y + v28;
      *(_QWORD *)&v2->fields._position_5__5.fields.x = v29;
      v2->fields._position_5__5.fields.z = v30;
      v31 = HIDWORD(v29);
      v32 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16863/*"bit_dedicate_left_item_flash_1"*/,
              *(UnityEngine_Vector3_o *)&v29,
              0LL);
      v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v32,
                                                  0LL);
      sub_B52920(&v2->fields.__2__current);
      v17 = 1;
      v2->fields.__1__state = 1;
      return v17;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      this = *(TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o **)&_4__this->fields.subLabelPosition.fields.x;
      if ( !this )
        goto LABEL_47;
      this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)this,
                                                                                                 0LL);
      if ( !this )
        goto LABEL_47;
      v17 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v18 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              0.0,
              1.0,
              _4__this->fields.firstEffectPosition.fields.y,
              0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)_4__this, v18, 0LL);
      v19 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16865/*"bit_dedicate_left_item_flash_3"*/,
              v2->fields._position_5__5,
              0LL);
      v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v19,
                                                  0LL);
      sub_B52920(&v2->fields.__2__current);
      v2->fields.__1__state = 2;
      return v17;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v13 = *(&_4__this->fields.countAnimDuration + 1);
      v14 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v14, v13, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      v12 = 3;
      goto LABEL_29;
    case 3:
      v15 = v2->fields._dailyPointItem_5__4;
      v2->fields.__1__state = -1;
      if ( !v15 || !_4__this )
        goto LABEL_47;
      v16 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
              _4__this,
              v15->fields.label,
              v2->fields._lastDailyPoint_5__3,
              v2->fields._totalDailyPoint_5__2,
              *(float *)&_4__this->fields.itemList,
              0LL);
      v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v16,
                                                  0LL);
      sub_B52920(&v2->fields.__2__current);
      v2->fields.__1__state = 4;
      return 1;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v10 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              1.0,
              0.0,
              _4__this->fields.firstEffectPosition.fields.y,
              0LL);
      v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v10,
                                                  0LL);
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      v12 = 5;
      goto LABEL_29;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_47:
        sub_B52A5C(this, method);
      TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, 0LL);
      v20 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16864/*"bit_dedicate_left_item_flash_2"*/,
              *(UnityEngine_Vector3_o *)&_4__this->fields.lastEffectPosition.fields.z,
              0LL);
      v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v20,
                                                  0LL);
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      v12 = 6;
LABEL_29:
      *((_DWORD *)p__2__current - 2) = v12;
      return 1;
    case 6:
      v2->fields._position_5__5.fields.z = 0.0;
      v2->fields.__1__state = -1;
      *(_QWORD *)&v2->fields._position_5__5.fields.x = 0LL;
LABEL_32:
      v21 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      if ( (BYTE3(TitleInfoEventDailyPointItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
        v21 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__29_0 = static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__29_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          _9__29_0,
          v24,
          Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
          0LL);
        v25 = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        v25->__9__29_0 = _9__29_0;
        sub_B52920(&v25->__9__29_0);
      }
      EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0LL);
      v2->fields._dailyPointItem_5__4 = 0LL;
      sub_B52920(&v2->fields._dailyPointItem_5__4);
LABEL_41:
      finishEffectEvent = v2->fields.finishEffectEvent;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD9D7 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventDailyPointItemComponent___c_TypeInfo);
    byte_42AD9D7 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventDailyPointItemComponent___c_o *)v1;
  sub_B52920(static_fields);
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
  MissionNotifyManager_o *v2; // x0
  __int64 v3; // x1

  if ( (byte_42AD9D8 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42AD9D8 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v2 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v2 )
    sub_B52A5C(0LL, v3);
  MissionNotifyManager__EndPause(v2, 0LL);
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