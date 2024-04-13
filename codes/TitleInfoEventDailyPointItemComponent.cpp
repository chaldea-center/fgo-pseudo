void __fastcall TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42ECBD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SideItemComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_SideItemComponent__TypeInfo, v5, v6, v7);
    byte_42ECBD3 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SideItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.effectAssetData = (struct AssetData_o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectAssetData,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  LODWORD(this[1].klass) = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__CreateItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *dailyPointItemInfoList; // x20
  UnityEngine_Component_o *effectAssetData; // x0
  __int64 v13; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_42ECBD1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SideItemComponent__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42ECBD1 = 1;
  }
  dailyPointItemInfoList = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.dailyPointItemInfoList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 dailyPointItemInfoList,
                                                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !effectAssetData
    || (v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)effectAssetData,
        gameObject = UnityEngine_Component__get_gameObject(effectAssetData, 0LL),
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SafeSetParent_32436524(gameObject, v16, 0LL),
        (effectAssetData = (UnityEngine_Component_o *)this->fields.effectAssetData) == 0LL) )
  {
    sub_B5D69C(effectAssetData, v13);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effectAssetData,
    v14,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SideItemComponent__Add__);
  return (SideItemComponent_o *)v14;
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
    sub_B5D69C(gameObject, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


SideItemComponent_o *__fastcall TitleInfoEventDailyPointItemComponent__GetItem(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *ItemInfo; // x0
  const MethodInfo *v13; // x1
  struct AssetData_o *effectAssetData; // x22
  int32_t name; // w8
  UnityEngine_Component_o *v16; // x19
  UnityEngine_Component_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  UISprite_o *klass; // x21
  System_String_o *monitor; // x22
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_42ECBD0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__, v9, v10, v11);
    byte_42ECBD0 = 1;
  }
  ItemInfo = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__GetItemInfo(this, index, method);
  if ( !ItemInfo )
    return 0LL;
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    goto LABEL_27;
  name = (int32_t)effectAssetData->fields.name;
  v16 = ItemInfo;
  if ( name <= index )
  {
    ItemInfo = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__CreateItem(this, v13);
    v17 = ItemInfo;
    if ( !ItemInfo )
      goto LABEL_27;
  }
  else
  {
    if ( name <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v17 = *(UnityEngine_Component_o **)(*(_QWORD *)&effectAssetData->fields.type + 8LL * index + 32);
    if ( !v17 )
LABEL_27:
      sub_B5D69C(ItemInfo, v13);
  }
  gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  v19 = UnityEngine_Component__get_gameObject(v17, 0LL);
  GameObjectExtensions__SetLocalPosition(v19, *(UnityEngine_Vector3_o *)&v16->fields.m_CachedPtr, 0LL);
  klass = (UISprite_o *)v17[1].klass;
  monitor = (System_String_o *)v16[1].monitor;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, monitor, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].klass;
  if ( !ItemInfo )
    goto LABEL_27;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))ItemInfo->klass[2]._1.typeMetadataHandle)(
    ItemInfo,
    ItemInfo->klass[2]._1.interopData);
  ItemInfo = (UnityEngine_Component_o *)v17[1].klass;
  if ( !ItemInfo )
    goto LABEL_27;
  v22 = UnityEngine_Component__get_gameObject(ItemInfo, 0LL);
  GameObjectExtensions__SetLocalPosition(v22, *(UnityEngine_Vector3_o *)&v16[1].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  v23 = UnityEngine_Component__get_gameObject(ItemInfo, 0LL);
  GameObjectExtensions__SetLocalPosition(v23, *(UnityEngine_Vector3_o *)((char *)&v16[2].klass + 4), 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_fontSize((UILabel_o *)ItemInfo, v16[2].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UIWidget__set_height((UIWidget_o *)ItemInfo, v16[2].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_effectStyle((UILabel_o *)ItemInfo, *((_DWORD *)&v16[2].fields + 1), 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_effectColor((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v16[3].klass, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_applyGradient((UILabel_o *)ItemInfo, 1, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_gradientTop((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v16[3].fields.m_CachedPtr, 0LL);
  ItemInfo = (UnityEngine_Component_o *)v17[1].monitor;
  if ( !ItemInfo )
    goto LABEL_27;
  UILabel__set_gradientBottom((UILabel_o *)ItemInfo, *(UnityEngine_Color_o *)&v16[4].monitor, 0LL);
  return (SideItemComponent_o *)v17;
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
    sub_B5D69C(this, index);
  leftAnchor = (int32_t)subLabel->fields.leftAnchor;
  if ( leftAnchor <= index )
    return 0LL;
  if ( leftAnchor <= (unsigned int)index )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  QuestGroupMaster_o *v29; // x22
  System_Collections_Generic_List_int__o *QuestIdListByGroupType; // x0
  int32_t v31; // w20
  int32_t current; // w23
  int klass; // w26
  int64_t UserId; // x0
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42ECBD2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42ECBD2 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v27);
  }
  v29 = (QuestGroupMaster_o *)Instance;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType((QuestGroupMaster_o *)Instance, 11, 0LL);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    QuestIdListByGroupType,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v37 = v36;
  v31 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v37,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v37.fields.current;
    klass = (int)this[1].klass;
    if ( klass == QuestGroupMaster__GetEventId(v29, v37.fields.current, 0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(UserId, UserId);
      if ( UserQuestMaster__getClearCountsFromId(MasterData_WarQuestSelectionMaster, UserId, current, 0LL) >= 1 )
        v31 += QuestGroupMaster__GetGroupId(v29, current, 11, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v37,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v31;
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
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42ECBCE & 1) == 0 )
  {
    sub_B5D5C4(
      &TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo,
      (_DWORD)label,
      from,
      *(_QWORD *)&to);
    byte_42ECBCE = 1;
  }
  v10 = sub_B5D694(TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31___ctor(
    (TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *)v10,
    0,
    0LL);
  if ( !v10 )
    sub_B5D69C(v11, v12);
  *(_QWORD *)(v10 + 32) = label;
  sub_B5D560((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)label, v13, v14, v15, v16, v17, v18);
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
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_42ECBCD & 1) == 0 )
  {
    sub_B5D5C4(
      &TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo,
      (_DWORD)effectName,
      (_DWORD)method,
      v4);
    byte_42ECBCD = 1;
  }
  v10 = sub_B5D694(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30___ctor(
    (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)v10,
    0,
    0LL);
  if ( !v10 )
    sub_B5D69C(v11, v12);
  *(_QWORD *)(v10 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 40) = effectName;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v10 + 40),
    (System_Int32_array **)effectName,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  int v5; // w2
  __int64 v6; // x3
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42ECBCF & 1) == 0 )
  {
    sub_B5D5C4(
      &TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo,
      (_DWORD)method,
      v5,
      v6);
    byte_42ECBCF = 1;
  }
  v11 = sub_B5D694(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo);
  TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32___ctor(
    (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)v11,
    0,
    0LL);
  if ( !v11 )
    sub_B5D69C(v12, v13);
  *(_QWORD *)(v11 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(float *)(v11 + 40) = duration;
  *(float *)(v11 + 44) = fromAlpha;
  *(float *)(v11 + 48) = toAlpha;
  return (System_Collections_IEnumerator_o *)v11;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  const MethodInfo *v20; // x2
  UnityEngine_Component_o *Item; // x20
  UnityEngine_Object_o *v22; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v24; // x1
  UnityEngine_Transform_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v27; // x22
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *monitor; // x20
  Il2CppObject *v31; // x0
  int v32; // [xsp+8h] [xbp-28h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42ECBCB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, recievePoint, (_DWORD)assetData, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v17, v18, v19);
    byte_42ECBCB = 1;
  }
  *(_QWORD *)&this->fields.eventId = assetData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventId,
    (System_Int32_array **)assetData,
    (System_String_array **)assetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  HIDWORD(this[1].klass) = recievePoint;
  Item = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, 0, v20);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
  {
    v22 = *(UnityEngine_Object_o **)&this->fields.subLabelPosition.fields.x;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !transform )
        goto LABEL_29;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !Item )
        goto LABEL_29;
      v25 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Item, 0LL);
      if ( !v25 )
        goto LABEL_29;
      UnityEngine_Transform__SetParent_35741212(v25, (UnityEngine_Transform_o *)transform, 0, 0LL);
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
      v27 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      v33 = recievePoint;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
      v29 = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v28, 0LL);
      transform = (UnityEngine_Component_o *)System_String__Concat_44577788(
                                               (System_String_o *)StringLiteral_699/*"+"*/,
                                               v29,
                                               0LL);
      if ( !v27 )
        goto LABEL_29;
      UILabel__set_text(v27, (System_String_o *)transform, 0LL);
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
    v32 = UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL) - HIDWORD(this[1].klass);
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    transform = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v31, 0LL);
    if ( monitor )
    {
      UILabel__set_text(monitor, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_29:
    sub_B5D69C(transform, v24);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_int__o *v23; // x20
  int64_t EventPointNoGroup; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x1
  int32_t TotalDailyEventQuestPoint; // w0
  const MethodInfo *v28; // x2
  struct UILabel_o *subLabel; // x8
  unsigned __int64 v30; // x21
  UnityEngine_Object_o *Item; // x22
  UILabel_o *monitor; // x22
  Il2CppObject *v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ECBCA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v20, v21, v22);
    byte_42ECBCA = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v23 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL);
  if ( !v23 )
LABEL_17:
    sub_B5D69C(EventPointNoGroup, v25);
  System_Collections_Generic_List_int___Add(
    v23,
    EventPointNoGroup,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  TotalDailyEventQuestPoint = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(this, v26);
  System_Collections_Generic_List_int___Add(
    v23,
    TotalDailyEventQuestPoint,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  subLabel = this->fields.subLabel;
  if ( subLabel )
  {
    v30 = 0LL;
    while ( (__int64)v30 < SLODWORD(subLabel->fields.leftAnchor) )
    {
      Item = (UnityEngine_Object_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, v30, v28);
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
        if ( v30 >= (unsigned int)v23->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v34 = v23->fields._items->m_Items[v30 + 1];
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
        EventPointNoGroup = (int64_t)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v33, 0LL);
        if ( !monitor )
          goto LABEL_17;
        UILabel__set_text(monitor, (System_String_o *)EventPointNoGroup, 0LL);
      }
      subLabel = this->fields.subLabel;
      ++v30;
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

  if ( (byte_42ECBCC & 1) == 0 )
  {
    sub_B5D5C4(
      &TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo,
      recievePoint,
      (_DWORD)finishEffectEvent,
      method);
    byte_42ECBCC = 1;
  }
  v6 = sub_B5D694(TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo);
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29___ctor(
    (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = finishEffectEvent;
  sub_B5D560(
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  UnityEngine_Object_o *label; // x20
  float duration; // s0
  float timer_5__2; // s8
  float deltaTime; // s0
  float v16; // s0
  int32_t v17; // w8
  int32_t from; // w21
  float v19; // s1
  int32_t v20; // w0
  UILabel_o *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UILabel_o *v27; // x20
  Il2CppObject *v28; // x0
  int v29; // [xsp+8h] [xbp-28h] BYREF
  int32_t to; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E623B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v8, v9, v10);
    byte_42E623B = 1;
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
      v27 = this->fields.label;
      to = this->fields.to;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &to);
      v23 = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v28, 0LL);
      if ( !v27 )
        goto LABEL_18;
      UILabel__set_text(v27, v23, 0LL);
      return 0;
    }
    this->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 < duration )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v16 = UnityEngine_Mathf__Clamp(timer_5__2 + deltaTime, 0.0, this->fields.duration, 0LL);
    v17 = this->fields.to;
    from = this->fields.from;
    v19 = this->fields.duration;
    this->fields._timer_5__2 = v16;
    v20 = UnityEngine_Mathf__FloorToInt((float)(v16 / v19) * (float)(v17 - from), 0LL);
    v21 = this->fields.label;
    v29 = v20 + from;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v23 = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v22, 0LL);
    if ( v21 )
    {
      UILabel__set_text(v21, v23, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_18:
    sub_B5D69C(v23, v24);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int32_t _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  AssetData_o *v37; // x0
  UnityEngine_Object_o *Object_30642600; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v39; // x21
  UnityEngine_GameObject_o *v40; // x21
  UnityEngine_Component_o *transform; // x0
  TabOpenEffectComponent_o *Component_srcLineSprite; // x21
  __int64 v43; // x20
  System_Action_o *v44; // x22
  System_Func_bool__o *v45; // x21
  UnityEngine_WaitWhile_o *v46; // x20
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E623C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__, v23, v24, v25);
    sub_B5D5C4(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__, v26, v27, v28);
    sub_B5D5C4(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo, v29, v30, v31);
    this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)sub_B5D5C4(
                                                                             &UnityEngine_WaitWhile_TypeInfo,
                                                                             v32,
                                                                             v33,
                                                                             v34);
    byte_42E623C = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      _4__this = v4->fields.__4__this;
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_28;
      v37 = *(AssetData_o **)&_4__this->fields.eventId;
      if ( !v37 )
        return (char)v37;
      Object_30642600 = AssetData__GetObject_30642600(v37, v4->fields.effectName, 0LL);
      if ( Object_30642600 )
      {
        if ( (UnityEngine_GameObject_c *)Object_30642600->klass == UnityEngine_GameObject_TypeInfo )
          v39 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30642600;
        else
          v39 = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v40 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v39,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this = (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)_4__this,
                                                                                 0LL);
        if ( !this )
          goto LABEL_28;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        GameObjectExtensions__SafeSetParent(v40, transform, 0LL);
        GameObjectExtensions__SetLocalPosition(v40, v4->fields.position, 0LL);
        if ( !v40 )
          goto LABEL_28;
        Component_srcLineSprite = (TabOpenEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v40,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          v43 = sub_B5D694(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v43, 0LL);
          if ( v43 )
          {
            *(_BYTE *)(v43 + 16) = 0;
            v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v44,
              (Il2CppObject *)v43,
              Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              TabOpenEffectComponent__SetAnimationEndCallback(Component_srcLineSprite, v44, 0LL);
              v45 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v45,
                (Il2CppObject *)v43,
                Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
                (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
              v46 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
              UnityEngine_WaitWhile___ctor(v46, v45, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v46;
              p__2__current = &v4->fields.__2__current;
              sub_B5D560(p__2__current);
              LOBYTE(v37) = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return (char)v37;
            }
          }
LABEL_28:
          sub_B5D69C(this, method);
        }
      }
    }
    LOBYTE(v37) = 0;
    return (char)v37;
  }
  LOBYTE(v37) = 0;
  v4->fields.__1__state = -1;
  return (char)v37;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *v4; // x19
  int32_t _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x21
  UnityEngine_Object_o *v7; // x20
  float timer_5__2; // s8
  bool result; // w0
  float deltaTime; // s0
  float v11; // s0
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E623D & 1) == 0 )
  {
    this = (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)sub_B5D5C4(
                                                                                            &UnityEngine_Object_TypeInfo,
                                                                                            (_DWORD)method,
                                                                                            v2,
                                                                                            v3);
    byte_42E623D = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = v4->fields._timer_5__2;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_B5D69C(this, method);
    v7 = *(UnityEngine_Object_o **)&_4__this->fields.subLabelPosition.fields.x;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
      return 0;
    v4->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 >= v4->fields.duration )
    return 0;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v11 = UnityEngine_Mathf__Clamp(timer_5__2 + deltaTime, 0.0, v4->fields.duration, 0LL);
  v4->fields._timer_5__2 = v11;
  if ( !_4__this )
    goto LABEL_17;
  this = *(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o **)&_4__this->fields.subLabelPosition.fields.x;
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
    this,
    this->klass[1]._1.image,
    v4->fields.fromAlpha
  + (float)((float)(v11 / v4->fields.duration) * (float)(v4->fields.toAlpha - v4->fields.fromAlpha)));
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  struct UILabel_o *subLabel; // x8
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  int klass_high; // w8
  float v30; // s0
  double v31; // d0
  float v32; // s0
  System_Collections_IEnumerator_o *v33; // x0
  Il2CppObject **p__2__current; // x19
  int v35; // w8
  float v36; // s8
  UnityEngine_WaitForSeconds_o *v37; // x20
  struct SideItemComponent_o *v38; // x8
  System_Collections_IEnumerator_o *v39; // x0
  bool v40; // w21
  System_Collections_IEnumerator_o *v41; // x0
  System_Collections_IEnumerator_o *v42; // x0
  System_Collections_IEnumerator_o *v43; // x0
  TitleInfoEventDailyPointItemComponent___c_c *v44; // x0
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v47; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *v48; // x0
  System_Action_o *finishEffectEvent; // x0
  float v51; // s2
  unsigned __int64 v52; // d0 OVERLAPPED
  float v53; // s2
  int v54; // s1
  System_Collections_IEnumerator_o *v55; // x0

  v4 = this;
  if ( (byte_42E623E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16955/*"bit_dedicate_left_item_flash_2"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16954/*"bit_dedicate_left_item_flash_1"*/, v20, v21, v22);
    this = (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)sub_B5D5C4(
                                                                                               &StringLiteral_16956/*"bit_dedicate_left_item_flash_3"*/,
                                                                                               v23,
                                                                                               v24,
                                                                                               v25);
    byte_42E623E = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      subLabel = _4__this->fields.subLabel;
      if ( !subLabel || LODWORD(subLabel->fields.leftAnchor) != 2 )
        goto LABEL_41;
      v4->fields._totalDailyPoint_5__2 = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventPoint(_4__this, 0LL);
      v4->fields._lastDailyPoint_5__3 = TitleInfoEventDailyPointItemComponent__GetLastDailyEventPoint(_4__this, 0LL);
      v4->fields._dailyPointItem_5__4 = TitleInfoEventDailyPointItemComponent__GetItem(_4__this, 0, 0LL);
      sub_B5D560(&v4->fields._dailyPointItem_5__4);
      dailyPointItem_5__4 = (UnityEngine_Object_o *)v4->fields._dailyPointItem_5__4;
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
        v32 = 1.0;
      }
      else
      {
        v30 = log10f((float)klass_high);
        if ( v30 == INFINITY )
          v31 = -v30;
        else
          v31 = v30;
        v32 = (float)((int)v31 + 1);
      }
      v51 = v32 * _4__this->fields.lastEffectPosition.fields.y;
      v52 = vadd_f32(
              *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.z,
              vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.z, v32)).n64_u64[0];
      v53 = _4__this->fields.firstEffectPositionDiff.fields.y + v51;
      *(_QWORD *)&v4->fields._position_5__5.fields.x = v52;
      v4->fields._position_5__5.fields.z = v53;
      v54 = HIDWORD(v52);
      v55 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16954/*"bit_dedicate_left_item_flash_1"*/,
              *(UnityEngine_Vector3_o *)&v52,
              0LL);
      v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v55,
                                                  0LL);
      sub_B5D560(&v4->fields.__2__current);
      v40 = 1;
      v4->fields.__1__state = 1;
      return v40;
    case 1:
      v4->fields.__1__state = -1;
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
      v40 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v41 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              0.0,
              1.0,
              _4__this->fields.firstEffectPosition.fields.y,
              0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v41, 0LL);
      v42 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16956/*"bit_dedicate_left_item_flash_3"*/,
              v4->fields._position_5__5,
              0LL);
      v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v42,
                                                  0LL);
      sub_B5D560(&v4->fields.__2__current);
      v4->fields.__1__state = 2;
      return v40;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v36 = *(&_4__this->fields.countAnimDuration + 1);
      v37 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v37, v36, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v37;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      v35 = 3;
      goto LABEL_29;
    case 3:
      v38 = v4->fields._dailyPointItem_5__4;
      v4->fields.__1__state = -1;
      if ( !v38 || !_4__this )
        goto LABEL_47;
      v39 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
              _4__this,
              v38->fields.label,
              v4->fields._lastDailyPoint_5__3,
              v4->fields._totalDailyPoint_5__2,
              *(float *)&_4__this->fields.itemList,
              0LL);
      v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v39,
                                                  0LL);
      sub_B5D560(&v4->fields.__2__current);
      v4->fields.__1__state = 4;
      return 1;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v33 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              1.0,
              0.0,
              _4__this->fields.firstEffectPosition.fields.y,
              0LL);
      v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v33,
                                                  0LL);
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      v35 = 5;
      goto LABEL_29;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
LABEL_47:
        sub_B5D69C(this, method);
      TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, 0LL);
      v43 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16955/*"bit_dedicate_left_item_flash_2"*/,
              *(UnityEngine_Vector3_o *)&_4__this->fields.lastEffectPosition.fields.z,
              0LL);
      v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v43,
                                                  0LL);
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      v35 = 6;
LABEL_29:
      *((_DWORD *)p__2__current - 2) = v35;
      return 1;
    case 6:
      v4->fields._position_5__5.fields.z = 0.0;
      v4->fields.__1__state = -1;
      *(_QWORD *)&v4->fields._position_5__5.fields.x = 0LL;
LABEL_32:
      v44 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      if ( (BYTE3(TitleInfoEventDailyPointItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
        v44 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      }
      static_fields = v44->static_fields;
      _9__29_0 = static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        }
        v47 = (Il2CppObject *)static_fields->__9;
        _9__29_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__29_0,
          v47,
          Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
          0LL);
        v48 = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        v48->__9__29_0 = _9__29_0;
        sub_B5D560(&v48->__9__29_0);
      }
      EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0LL);
      v4->fields._dailyPointItem_5__4 = 0LL;
      sub_B5D560(&v4->fields._dailyPointItem_5__4);
LABEL_41:
      finishEffectEvent = v4->fields.finishEffectEvent;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E6239 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v1, v2, v3);
    byte_42E6239 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventDailyPointItemComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  MissionNotifyManager_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42E623A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4, v5, v6);
    byte_42E623A = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v7 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  MissionNotifyManager__EndPause(v7, 0LL);
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