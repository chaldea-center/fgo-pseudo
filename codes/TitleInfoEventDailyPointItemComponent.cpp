void __fastcall TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418B9E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SideItemComponent___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_SideItemComponent__TypeInfo, v3);
    byte_418B9E6 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SideItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.effectAssetData = (struct AssetData_o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.effectAssetData,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  LODWORD(this[1].klass) = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__CreateItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *dailyPointItemInfoList; // x20
  UnityEngine_Component_o *effectAssetData; // x0
  __int64 v7; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_418B9E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SideItemComponent__Add__, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418B9E4 = 1;
  }
  dailyPointItemInfoList = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.dailyPointItemInfoList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 dailyPointItemInfoList,
                                                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !effectAssetData
    || (v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)effectAssetData,
        gameObject = UnityEngine_Component__get_gameObject(effectAssetData, 0LL),
        v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SafeSetParent_31331952(gameObject, v10, 0LL),
        (effectAssetData = (UnityEngine_Component_o *)this->fields.effectAssetData) == 0LL) )
  {
    sub_B2C434(effectAssetData, v7);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effectAssetData,
    v8,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SideItemComponent__Add__);
  return (SideItemComponent_o *)v8;
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
    sub_B2C434(gameObject, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__GetItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *ItemInfo; // x0
  const MethodInfo *v8; // x1
  struct AssetData_o *effectAssetData; // x22
  int32_t name; // w8
  UnityEngine_Component_o *v11; // x19
  UnityEngine_Component_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  UISprite_o *klass; // x21
  System_String_o *monitor; // x22
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_418B9E3 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__, v6);
    byte_418B9E3 = 1;
  }
  ItemInfo = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__GetItemInfo(this, index, method);
  if ( !ItemInfo )
    return 0LL;
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    goto LABEL_27;
  name = (int32_t)effectAssetData->fields.name;
  v11 = ItemInfo;
  if ( name <= index )
  {
    ItemInfo = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__CreateItem(this, v8);
    v12 = ItemInfo;
    if ( !ItemInfo )
      goto LABEL_27;
  }
  else
  {
    if ( name <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v12 = *(UnityEngine_Component_o **)(*(_QWORD *)&effectAssetData->fields.type + 8LL * index + 32);
    if ( !v12 )
LABEL_27:
      sub_B2C434(ItemInfo, v8);
  }
  gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  v14 = UnityEngine_Component__get_gameObject(v12, 0LL);
  GameObjectExtensions__SetLocalPosition(v14, *(UnityEngine_Vector3_o *)&v11->fields.m_CachedPtr, 0LL);
  klass = (UISprite_o *)v12[1].klass;
  monitor = (System_String_o *)v11[1].monitor;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, monitor, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].klass;
  if ( !ItemInfo )
    goto LABEL_27;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))ItemInfo->klass[2]._1.typeMetadataHandle)(
    ItemInfo,
    ItemInfo->klass[2]._1.interopData);
  ItemInfo = (UnityEngine_Component_o *)v12[1].klass;
  if ( !ItemInfo )
    goto LABEL_27;
  v17 = UnityEngine_Component__get_gameObject(ItemInfo, 0LL);
  GameObjectExtensions__SetLocalPosition(v17, *(UnityEngine_Vector3_o *)&v11[1].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  v18 = UnityEngine_Component__get_gameObject(ItemInfo, 0LL);
  GameObjectExtensions__SetLocalPosition(v18, *(UnityEngine_Vector3_o *)((char *)&v11[2].klass + 4), 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_fontSize((UILabel_o *)ItemInfo, v11[2].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UIWidget__set_height((UIWidget_o *)ItemInfo, v11[2].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_effectStyle((UILabel_o *)ItemInfo, *((_DWORD *)&v11[2].fields + 1), 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_effectColor((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v11[3].klass, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_applyGradient((UILabel_o *)ItemInfo, 1, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_gradientTop((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v11[3].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v12[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_gradientBottom((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v11[4].monitor, 0LL);
  return (SideItemComponent_o *)v12;
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
    sub_B2C434(this, index);
  leftAnchor = (int32_t)subLabel->fields.leftAnchor;
  if ( leftAnchor <= index )
    return 0LL;
  if ( leftAnchor <= (unsigned int)index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v13; // x22
  System_Collections_Generic_List_int__o *QuestIdListByGroupType; // x0
  int32_t v15; // w20
  int32_t current; // w23
  int klass; // w26
  int64_t UserId; // x0
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418B9E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418B9E5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v11);
  }
  v13 = (QuestGroupMaster_o *)Instance;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType((QuestGroupMaster_o *)Instance, 11, 0LL);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    QuestIdListByGroupType,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v21 = v20;
  v15 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v21,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v21.fields.current;
    klass = (int)this[1].klass;
    if ( klass == QuestGroupMaster__GetEventId(v13, v21.fields.current, 0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(UserId, UserId);
      if ( UserQuestMaster__getClearCountsFromId(MasterData_WarQuestSelectionMaster, UserId, current, 0LL) >= 1 )
        v15 += QuestGroupMaster__GetGroupId(v13, current, 11, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v21,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418B9E1 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo, label);
    byte_418B9E1 = 1;
  }
  v10 = sub_B2C42C(TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31___ctor(
    (TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *)v10,
    0,
    0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 32) = label;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)label, v13, v14, v15, v16, v17, v18);
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
  if ( (byte_418B9E0 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo, effectName);
    byte_418B9E0 = 1;
  }
  v9 = sub_B2C42C(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30___ctor(
    (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = effectName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)effectName, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_418B9E2 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo, method);
    byte_418B9E2 = 1;
  }
  v9 = sub_B2C42C(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32___ctor(
    (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(float *)(v9 + 40) = duration;
  *(float *)(v9 + 44) = fromAlpha;
  *(float *)(v9 + 48) = toAlpha;
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  UnityEngine_Component_o *Item; // x20
  UnityEngine_Object_o *v16; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UILabel_o *monitor; // x20
  Il2CppObject *v25; // x0
  int v26; // [xsp+8h] [xbp-28h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418B9DE & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&recievePoint);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v12);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v13);
    byte_418B9DE = 1;
  }
  *(_QWORD *)&this->fields.eventId = assetData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventId,
    (System_Int32_array **)assetData,
    (System_String_array **)assetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  HIDWORD(this[1].klass) = recievePoint;
  Item = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, 0, v14);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
  {
    v16 = *(UnityEngine_Object_o **)&this->fields.subLabelPosition.fields.x;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !Item )
        goto LABEL_29;
      v19 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Item, 0LL);
      if ( !v19 )
        goto LABEL_29;
      UnityEngine_Transform__SetParent_35435768(v19, (UnityEngine_Transform_o *)transform, 0, 0LL);
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
      v21 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      v27 = recievePoint;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v23 = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v22, 0LL);
      transform = (UnityEngine_Component_o *)System_String__Concat_44305532(
                                               (System_String_o *)StringLiteral_691/*"+"*/,
                                               v23,
                                               0LL);
      if ( !v21 )
        goto LABEL_29;
      UILabel__set_text(v21, (System_String_o *)transform, 0LL);
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
    v26 = UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL) - HIDWORD(this[1].klass);
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    transform = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v25, 0LL);
    if ( monitor )
    {
      UILabel__set_text(monitor, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_29:
    sub_B2C434(transform, v18);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  int64_t EventPointNoGroup; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  int32_t TotalDailyEventQuestPoint; // w0
  const MethodInfo *v14; // x2
  struct UILabel_o *subLabel; // x8
  unsigned __int64 v16; // x21
  UnityEngine_Object_o *Item; // x22
  UILabel_o *monitor; // x22
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418B9DD & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v8);
    byte_418B9DD = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL);
  if ( !v9 )
LABEL_17:
    sub_B2C434(EventPointNoGroup, v11);
  System_Collections_Generic_List_int___Add(
    v9,
    EventPointNoGroup,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  TotalDailyEventQuestPoint = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(this, v12);
  System_Collections_Generic_List_int___Add(
    v9,
    TotalDailyEventQuestPoint,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  subLabel = this->fields.subLabel;
  if ( subLabel )
  {
    v16 = 0LL;
    while ( (__int64)v16 < SLODWORD(subLabel->fields.leftAnchor) )
    {
      Item = (UnityEngine_Object_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, v16, v14);
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
        if ( v16 >= (unsigned int)v9->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v20 = v9->fields._items->m_Items[v16 + 1];
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
        EventPointNoGroup = (int64_t)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v19, 0LL);
        if ( !monitor )
          goto LABEL_17;
        UILabel__set_text(monitor, (System_String_o *)EventPointNoGroup, 0LL);
      }
      subLabel = this->fields.subLabel;
      ++v16;
      if ( !subLabel )
        goto LABEL_17;
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

  if ( (byte_418B9DF & 1) == 0 )
  {
    sub_B2C35C(
      &TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo,
      *(_QWORD *)&recievePoint);
    byte_418B9DF = 1;
  }
  v6 = sub_B2C42C(TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29___ctor(
    (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B2C434(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = finishEffectEvent;
  sub_B2C2F8(
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  UnityEngine_Object_o *label; // x20
  float duration; // s0
  float timer_5__2; // s8
  float deltaTime; // s0
  float v10; // s0
  int32_t v11; // w8
  int32_t from; // w21
  float v13; // s1
  int32_t v14; // w0
  UILabel_o *v15; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UILabel_o *v21; // x20
  Il2CppObject *v22; // x0
  int v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t to; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4185334 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v4);
    byte_4185334 = 1;
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
      v21 = this->fields.label;
      to = this->fields.to;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &to);
      v17 = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v22, 0LL);
      if ( !v21 )
        goto LABEL_18;
      UILabel__set_text(v21, v17, 0LL);
      return 0;
    }
    this->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 < duration )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v10 = UnityEngine_Mathf__Clamp(timer_5__2 + deltaTime, 0.0, this->fields.duration, 0LL);
    v11 = this->fields.to;
    from = this->fields.from;
    v13 = this->fields.duration;
    this->fields._timer_5__2 = v10;
    v14 = UnityEngine_Mathf__FloorToInt((float)(v10 / v13) * (float)(v11 - from), 0LL);
    v15 = this->fields.label;
    v23 = v14 + from;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v17 = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v16, 0LL);
    if ( v15 )
    {
      UILabel__set_text(v15, v17, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_18:
    sub_B2C434(v17, v18);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  AssetData_o *v15; // x0
  UnityEngine_Object_o *Object_30137720; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v17; // x21
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Component_o *transform; // x0
  TabOpenEffectComponent_o *Component_srcLineSprite; // x21
  __int64 v21; // x20
  System_Action_o *v22; // x22
  System_Func_bool__o *v23; // x21
  UnityEngine_WaitWhile_o *v24; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4185335 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v5);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__, v9);
    sub_B2C35C(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__, v10);
    sub_B2C35C(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo, v11);
    this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)sub_B2C35C(
                                                                             &UnityEngine_WaitWhile_TypeInfo,
                                                                             v12);
    byte_4185335 = 1;
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
      v15 = *(AssetData_o **)&_4__this->fields.eventId;
      if ( !v15 )
        return (char)v15;
      Object_30137720 = AssetData__GetObject_30137720(v15, v2->fields.effectName, 0LL);
      if ( Object_30137720 )
      {
        if ( (UnityEngine_GameObject_c *)Object_30137720->klass == UnityEngine_GameObject_TypeInfo )
          v17 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30137720;
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v17,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)_4__this,
                                                                                 0LL);
        if ( !this )
          goto LABEL_28;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        GameObjectExtensions__SafeSetParent(v18, transform, 0LL);
        GameObjectExtensions__SetLocalPosition(v18, v2->fields.position, 0LL);
        if ( !v18 )
          goto LABEL_28;
        Component_srcLineSprite = (TabOpenEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v18,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          v21 = sub_B2C42C(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v21, 0LL);
          if ( v21 )
          {
            *(_BYTE *)(v21 + 16) = 0;
            v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v22,
              (Il2CppObject *)v21,
              Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              TabOpenEffectComponent__SetAnimationEndCallback(Component_srcLineSprite, v22, 0LL);
              v23 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v23,
                (Il2CppObject *)v21,
                Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
                (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
              v24 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
              UnityEngine_WaitWhile___ctor(v24, v23, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v24;
              p__2__current = &v2->fields.__2__current;
              sub_B2C2F8(p__2__current, v24);
              LOBYTE(v15) = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return (char)v15;
            }
          }
LABEL_28:
          sub_B2C434(this, method);
        }
      }
    }
    LOBYTE(v15) = 0;
    return (char)v15;
  }
  LOBYTE(v15) = 0;
  v2->fields.__1__state = -1;
  return (char)v15;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4185336 & 1) == 0 )
  {
    this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)sub_B2C35C(
                                                                                            &UnityEngine_Object_TypeInfo,
                                                                                            method);
    byte_4185336 = 1;
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
      sub_B2C434(this, method);
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
  sub_B2C2F8(p__2__current, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  struct UILabel_o *subLabel; // x8
  SideItemComponent_o *Item; // x0
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  int klass_high; // w8
  float v15; // s0
  double v16; // d0
  float v17; // s0
  System_Collections_IEnumerator_o *v18; // x0
  UnityEngine_Coroutine_o *v19; // x0
  Il2CppObject **p__2__current; // x19
  int v21; // w8
  float v22; // s8
  UnityEngine_WaitForSeconds_o *v23; // x20
  struct SideItemComponent_o *v24; // x8
  System_Collections_IEnumerator_o *v25; // x0
  UnityEngine_Coroutine_o *v26; // x0
  bool v27; // w21
  System_Collections_IEnumerator_o *v28; // x0
  System_Collections_IEnumerator_o *v29; // x0
  UnityEngine_Coroutine_o *v30; // x0
  System_Collections_IEnumerator_o *v31; // x0
  UnityEngine_Coroutine_o *v32; // x0
  TitleInfoEventDailyPointItemComponent___c_c *v33; // x0
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v36; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *v37; // x0
  System_Action_o *finishEffectEvent; // x0
  float v40; // s2
  unsigned __int64 v41; // d0 OVERLAPPED
  float v42; // s2
  int v43; // s1
  System_Collections_IEnumerator_o *v44; // x0
  UnityEngine_Coroutine_o *started; // x0

  v2 = this;
  if ( (byte_4185337 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__, v4);
    sub_B2C35C(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_16749/*"bit_dedicate_left_item_flash_2"*/, v7);
    sub_B2C35C(&StringLiteral_16748/*"bit_dedicate_left_item_flash_1"*/, v8);
    this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)sub_B2C35C(
                                                                                               &StringLiteral_16750/*"bit_dedicate_left_item_flash_3"*/,
                                                                                               v9);
    byte_4185337 = 1;
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
      Item = TitleInfoEventDailyPointItemComponent__GetItem(_4__this, 0, 0LL);
      v2->fields._dailyPointItem_5__4 = Item;
      sub_B2C2F8(&v2->fields._dailyPointItem_5__4, Item);
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
        v17 = 1.0;
      }
      else
      {
        v15 = log10f((float)klass_high);
        if ( v15 == INFINITY )
          v16 = -v15;
        else
          v16 = v15;
        v17 = (float)((int)v16 + 1);
      }
      v40 = v17 * _4__this->fields.lastEffectPosition.fields.y;
      v41 = vadd_f32(
              *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.z,
              vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.z, v17)).n64_u64[0];
      v42 = _4__this->fields.firstEffectPositionDiff.fields.y + v40;
      *(_QWORD *)&v2->fields._position_5__5.fields.x = v41;
      v2->fields._position_5__5.fields.z = v42;
      v43 = HIDWORD(v41);
      v44 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16748/*"bit_dedicate_left_item_flash_1"*/,
              *(UnityEngine_Vector3_o *)&v41,
              0LL);
      started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v44, 0LL);
      v2->fields.__2__current = (Il2CppObject *)started;
      sub_B2C2F8(&v2->fields.__2__current, started);
      v27 = 1;
      v2->fields.__1__state = 1;
      return v27;
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
      v27 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v28 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              0.0,
              1.0,
              _4__this->fields.firstEffectPosition.fields.y,
              0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0LL);
      v29 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16750/*"bit_dedicate_left_item_flash_3"*/,
              v2->fields._position_5__5,
              0LL);
      v30 = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v29, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v30;
      sub_B2C2F8(&v2->fields.__2__current, v30);
      v2->fields.__1__state = 2;
      return v27;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v22 = *(&_4__this->fields.countAnimDuration + 1);
      v23 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v23, v22, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v23;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v23);
      v21 = 3;
      goto LABEL_29;
    case 3:
      v24 = v2->fields._dailyPointItem_5__4;
      v2->fields.__1__state = -1;
      if ( !v24 || !_4__this )
        goto LABEL_47;
      v25 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
              _4__this,
              v24->fields.label,
              v2->fields._lastDailyPoint_5__3,
              v2->fields._totalDailyPoint_5__2,
              *(float *)&_4__this->fields.itemList,
              0LL);
      v26 = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v25, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v26;
      sub_B2C2F8(&v2->fields.__2__current, v26);
      v2->fields.__1__state = 4;
      return 1;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v18 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              1.0,
              0.0,
              _4__this->fields.firstEffectPosition.fields.y,
              0LL);
      v19 = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v18, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v19);
      v21 = 5;
      goto LABEL_29;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_47:
        sub_B2C434(this, method);
      TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, 0LL);
      v31 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16749/*"bit_dedicate_left_item_flash_2"*/,
              *(UnityEngine_Vector3_o *)&_4__this->fields.lastEffectPosition.fields.z,
              0LL);
      v32 = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v31, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v32;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v32);
      v21 = 6;
LABEL_29:
      *((_DWORD *)p__2__current - 2) = v21;
      return 1;
    case 6:
      v2->fields._position_5__5.fields.z = 0.0;
      v2->fields.__1__state = -1;
      *(_QWORD *)&v2->fields._position_5__5.fields.x = 0LL;
LABEL_32:
      v33 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      if ( (BYTE3(TitleInfoEventDailyPointItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
        v33 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      }
      static_fields = v33->static_fields;
      _9__29_0 = static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        }
        v36 = (Il2CppObject *)static_fields->__9;
        _9__29_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__29_0,
          v36,
          Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
          0LL);
        v37 = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        v37->__9__29_0 = _9__29_0;
        sub_B2C2F8(&v37->__9__29_0, _9__29_0);
      }
      EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0LL);
      v2->fields._dailyPointItem_5__4 = 0LL;
      sub_B2C2F8(&v2->fields._dailyPointItem_5__4, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4185332 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v1);
    byte_4185332 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventDailyPointItemComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v2; // x1
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4185333 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_4185333 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
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