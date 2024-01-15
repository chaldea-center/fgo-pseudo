void __fastcall TitleInfoEventDailyPointItemComponent___ctor(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDFAC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SideItemComponent___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_SideItemComponent__TypeInfo, v6);
    byte_40FDFAC = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_SideItemComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SideItemComponent___ctor__);
  this->fields.effectAssetData = (struct AssetData_o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectAssetData,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  UnityEngine_Component_o *v6; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v9; // x0
  struct AssetData_o *effectAssetData; // x0

  if ( (byte_40FDFAA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SideItemComponent__Add__, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_SideItemComponent___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FDFAA = 1;
  }
  dailyPointItemInfoList = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.dailyPointItemInfoList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    dailyPointItemInfoList,
                                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_SideItemComponent___);
  if ( !v6
    || (v7 = (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
        gameObject = UnityEngine_Component__get_gameObject(v6, 0LL),
        v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SafeSetParent_27425996(gameObject, v9, 0LL),
        (effectAssetData = this->fields.effectAssetData) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effectAssetData,
    v7,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SideItemComponent__Add__);
  return (SideItemComponent_o *)v7;
}


void __fastcall TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(
        TitleInfoEventDailyPointItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  v3 = *(_QWORD *)&this->fields.subLabelPosition.fields.x;
  if ( !v3
    || ((*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v3 + 440LL))(
          v3,
          *(_QWORD *)(*(_QWORD *)v3 + 448LL),
          0.0),
        (v4 = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  struct AssetData_o *effectAssetData; // x22
  int32_t name; // w8
  TitleInfoEventDailyPointItemComponent_ItemInfo_o *v11; // x19
  UnityEngine_Component_o *Item; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  UISprite_o *klass; // x21
  System_String_o *frameSpriteName; // x22
  UnityEngine_Component_c *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_GameObject_o *v21; // x0
  UILabel_o *v22; // x0
  UIWidget_o *v23; // x0
  UILabel_o *v24; // x0
  UILabel_o *v25; // x0
  UILabel_o *v26; // x0
  UILabel_o *v27; // x0
  UILabel_o *v28; // x0

  if ( (byte_40FDFA9 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_SideItemComponent__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SideItemComponent__get_Item__, v6);
    byte_40FDFA9 = 1;
  }
  ItemInfo = TitleInfoEventDailyPointItemComponent__GetItemInfo(this, index, method);
  if ( !ItemInfo )
    return 0LL;
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    goto LABEL_27;
  name = (int32_t)effectAssetData->fields.name;
  v11 = ItemInfo;
  if ( name <= index )
  {
    Item = (UnityEngine_Component_o *)TitleInfoEventDailyPointItemComponent__CreateItem(this, v8);
    if ( !Item )
      goto LABEL_27;
  }
  else
  {
    if ( name <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    Item = *(UnityEngine_Component_o **)(*(_QWORD *)&effectAssetData->fields.type + 8LL * index + 32);
    if ( !Item )
LABEL_27:
      sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(Item, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  v14 = UnityEngine_Component__get_gameObject(Item, 0LL);
  GameObjectExtensions__SetLocalPosition(v14, v11->fields.itemPosition, 0LL);
  klass = (UISprite_o *)Item[1].klass;
  frameSpriteName = v11->fields.frameSpriteName;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(klass, frameSpriteName, 0LL);
  v17 = Item[1].klass;
  if ( !v17 )
    goto LABEL_27;
  (*((void (__fastcall **)(UnityEngine_Component_c *, _QWORD))v17->_1.image + 105))(
    v17,
    *((_QWORD *)v17->_1.image + 106));
  v18 = (UnityEngine_Component_o *)Item[1].klass;
  if ( !v18 )
    goto LABEL_27;
  v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
  GameObjectExtensions__SetLocalPosition(v19, v11->fields.frameSpritePosition, 0LL);
  monitor = (UnityEngine_Component_o *)Item[1].monitor;
  if ( !monitor )
    goto LABEL_27;
  v21 = UnityEngine_Component__get_gameObject(monitor, 0LL);
  GameObjectExtensions__SetLocalPosition(v21, v11->fields.pointTextPosition, 0LL);
  v22 = (UILabel_o *)Item[1].monitor;
  if ( !v22 )
    goto LABEL_27;
  UILabel__set_fontSize(v22, v11->fields.pointTextFontSize, 0LL);
  v23 = (UIWidget_o *)Item[1].monitor;
  if ( !v23 )
    goto LABEL_27;
  UIWidget__set_height(v23, v11->fields.pointTextFontSize, 0LL);
  v24 = (UILabel_o *)Item[1].monitor;
  if ( !v24 )
    goto LABEL_27;
  UILabel__set_effectStyle(v24, v11->fields.pointTextEffectStyle, 0LL);
  v25 = (UILabel_o *)Item[1].monitor;
  if ( !v25 )
    goto LABEL_27;
  UILabel__set_effectColor(v25, v11->fields.pointTextEffectColor, 0LL);
  v26 = (UILabel_o *)Item[1].monitor;
  if ( !v26 )
    goto LABEL_27;
  UILabel__set_applyGradient(v26, 1, 0LL);
  v27 = (UILabel_o *)Item[1].monitor;
  if ( !v27 )
    goto LABEL_27;
  UILabel__set_gradientTop(v27, v11->fields.pointTextGradientColorTop, 0LL);
  v28 = (UILabel_o *)Item[1].monitor;
  if ( !v28 )
    goto LABEL_27;
  UILabel__set_gradientBottom(v28, v11->fields.pointTextGradientColorBottom, 0LL);
  return (SideItemComponent_o *)Item;
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventDailyPointItemComponent_ItemInfo_o *__fastcall TitleInfoEventDailyPointItemComponent__GetItemInfo(
        TitleInfoEventDailyPointItemComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UILabel_o *subLabel; // x8
  int32_t leftAnchor; // w9

  subLabel = this->fields.subLabel;
  if ( !subLabel )
    sub_B170D4();
  leftAnchor = (int32_t)subLabel->fields.leftAnchor;
  if ( leftAnchor <= index )
    return 0LL;
  if ( leftAnchor <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
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
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v12; // x0
  QuestGroupMaster_o *v13; // x0
  QuestGroupMaster_o *v14; // x22
  System_Collections_Generic_List_int__o *QuestIdListByGroupType; // x0
  int32_t v16; // w20
  int32_t current; // w23
  int klass; // w26
  int64_t UserId; // x1
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FDFAB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FDFAB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        (v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v12,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v14 = v13;
  QuestIdListByGroupType = QuestGroupMaster__GetQuestIdListByGroupType(v13, 11, 0LL);
  if ( !QuestIdListByGroupType )
    return 0;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    QuestIdListByGroupType,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  v16 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v22.fields.current;
    klass = (int)this[1].klass;
    if ( klass == QuestGroupMaster__GetEventId(v14, v22.fields.current, 0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      if ( UserQuestMaster__getClearCountsFromId(MasterData_WarQuestSelectionMaster, UserId, current, 0LL) >= 1 )
        v16 += QuestGroupMaster__GetGroupId(v14, current, 11, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v16;
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FDFA7 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo, label);
    byte_40FDFA7 = 1;
  }
  v10 = sub_B170CC(
          TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_TypeInfo,
          label,
          *(_QWORD *)&from,
          *(_QWORD *)&to,
          method);
  TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31___ctor(
    (TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_o *)v10,
    0,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 32) = label;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)label, v11, v12, v13, v14, v15, v16);
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
  __int64 v5; // x4
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x21
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
  if ( (byte_40FDFA6 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo, effectName);
    byte_40FDFA6 = 1;
  }
  v11 = sub_B170CC(TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_TypeInfo, effectName, method, v4, v5);
  TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30___ctor(
    (TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_o *)v11,
    0,
    0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 40) = effectName;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 40),
    (System_Int32_array **)effectName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(float *)(v11 + 48) = x;
  *(float *)(v11 + 52) = y;
  *(float *)(v11 + 56) = z;
  return (System_Collections_IEnumerator_o *)v11;
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
  __int64 v7; // x4
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FDFA8 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo, method);
    byte_40FDFA8 = 1;
  }
  v12 = sub_B170CC(
          TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_TypeInfo,
          method,
          v5,
          v6,
          v7);
  TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32___ctor(
    (TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_o *)v12,
    0,
    0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(float *)(v12 + 40) = duration;
  *(float *)(v12 + 44) = fromAlpha;
  *(float *)(v12 + 48) = toAlpha;
  return (System_Collections_IEnumerator_o *)v12;
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
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v23; // x0
  UIWidget_o *v24; // x0
  UILabel_o *v25; // x0
  UILabel_o *v26; // x0
  UILabel_o *v27; // x22
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *v31; // x0
  UILabel_o *v32; // x0
  UILabel_o *v33; // x0
  __int64 v34; // x0
  UILabel_o *monitor; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  int v38; // [xsp+8h] [xbp-28h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FDFA4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&recievePoint);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_690/*"+"*/, v12);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v13);
    byte_40FDFA4 = 1;
  }
  *(_QWORD *)&this->fields.eventId = assetData;
  sub_B16F98(
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
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      v17 = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v17 )
        goto LABEL_29;
      transform = UnityEngine_Component__get_transform(v17, 0LL);
      if ( !Item )
        goto LABEL_29;
      v19 = transform;
      v20 = UnityEngine_Component__get_transform(Item, 0LL);
      if ( !v19 )
        goto LABEL_29;
      UnityEngine_Transform__SetParent_34930292(v19, v20, 0, 0LL);
      v21 = *(UnityEngine_Component_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v21 )
        goto LABEL_29;
      gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
      GameObjectExtensions__SetLocalPosition(
        gameObject,
        *(UnityEngine_Vector3_o *)&this->fields.subLabelPosition.fields.z,
        0LL);
      v23 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v23 )
        goto LABEL_29;
      UILabel__set_fontSize(v23, LODWORD(this->fields.subLabelEffectColor.fields.r), 0LL);
      v24 = *(UIWidget_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v24 )
        goto LABEL_29;
      UIWidget__set_height(v24, LODWORD(this->fields.subLabelEffectColor.fields.r), 0LL);
      v25 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v25 )
        goto LABEL_29;
      UILabel__set_effectStyle(v25, LODWORD(this->fields.subLabelEffectColor.fields.g), 0LL);
      v26 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v26 )
        goto LABEL_29;
      UILabel__set_effectColor(v26, *(UnityEngine_Color_o *)&this->fields.subLabelEffectColor.fields.b, 0LL);
      v27 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      v39 = recievePoint;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      v29 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v28, 0LL);
      v30 = System_String__Concat_43743732((System_String_o *)StringLiteral_690/*"+"*/, v29, 0LL);
      if ( !v27 )
        goto LABEL_29;
      UILabel__set_text(v27, v30, 0LL);
      v31 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v31 )
        goto LABEL_29;
      UILabel__set_applyGradient(v31, 1, 0LL);
      v32 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v32 )
        goto LABEL_29;
      UILabel__set_gradientTop(v32, *(UnityEngine_Color_o *)&this->fields.subLabelGradientColorTop.fields.b, 0LL);
      v33 = *(UILabel_o **)&this->fields.subLabelPosition.fields.x;
      if ( !v33 )
        goto LABEL_29;
      UILabel__set_gradientBottom(v33, *(UnityEngine_Color_o *)&this->fields.subLabelGradientColorBottom.fields.b, 0LL);
      v34 = *(_QWORD *)&this->fields.subLabelPosition.fields.x;
      if ( !v34 )
        goto LABEL_29;
      (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v34 + 440LL))(
        v34,
        *(_QWORD *)(*(_QWORD *)v34 + 448LL),
        0.0);
    }
    else if ( !Item )
    {
      goto LABEL_29;
    }
    monitor = (UILabel_o *)Item[1].monitor;
    v38 = UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL) - HIDWORD(this[1].klass);
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v37 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v36, 0LL);
    if ( monitor )
    {
      UILabel__set_text(monitor, v37, 0LL);
      return;
    }
LABEL_29:
    sub_B170D4();
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_List_int__o *v13; // x20
  int32_t EventPointNoGroup; // w0
  const MethodInfo *v15; // x1
  int32_t TotalDailyEventQuestPoint; // w0
  const MethodInfo *v17; // x2
  struct UILabel_o *subLabel; // x8
  unsigned __int64 v19; // x21
  UnityEngine_Object_o *Item; // x22
  UILabel_o *monitor; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FDFA3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v8);
    byte_40FDFA3 = 1;
  }
  TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(this, method);
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v9,
                                                    v10,
                                                    v11,
                                                    v12);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup((int32_t)this[1].klass, 0LL);
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  System_Collections_Generic_List_int___Add(
    v13,
    EventPointNoGroup,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  TotalDailyEventQuestPoint = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventQuestPoint(this, v15);
  System_Collections_Generic_List_int___Add(
    v13,
    TotalDailyEventQuestPoint,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  subLabel = this->fields.subLabel;
  if ( subLabel )
  {
    v19 = 0LL;
    while ( (__int64)v19 < SLODWORD(subLabel->fields.leftAnchor) )
    {
      Item = (UnityEngine_Object_o *)TitleInfoEventDailyPointItemComponent__GetItem(this, v19, v17);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Item, 0LL, 0LL) )
      {
        if ( !Item )
          goto LABEL_17;
        monitor = (UILabel_o *)Item[1].monitor;
        if ( v19 >= (unsigned int)v13->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v24 = v13->fields._items->m_Items[v19 + 1];
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
        v23 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v22, 0LL);
        if ( !monitor )
          goto LABEL_17;
        UILabel__set_text(monitor, v23, 0LL);
      }
      subLabel = this->fields.subLabel;
      ++v19;
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
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FDFA5 & 1) == 0 )
  {
    sub_B16FFC(
      &TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo,
      *(_QWORD *)&recievePoint);
    byte_40FDFA5 = 1;
  }
  v7 = sub_B170CC(
         TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_TypeInfo,
         *(_QWORD *)&recievePoint,
         finishEffectEvent,
         method,
         v4);
  TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29___ctor(
    (TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = finishEffectEvent;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)finishEffectEvent,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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
  Il2CppObject **p__2__current; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  bool result; // w0
  UILabel_o *v26; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int v29; // [xsp+8h] [xbp-28h] BYREF
  int32_t to; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F7825 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v4);
    byte_40F7825 = 1;
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
      v26 = this->fields.label;
      to = this->fields.to;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &to);
      v28 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v27, 0LL);
      if ( !v26 )
        goto LABEL_18;
      UILabel__set_text(v26, v28, 0LL);
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
    v29 = v14 + from;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v17 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v16, 0LL);
    if ( v15 )
    {
      UILabel__set_text(v15, v17, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v19, v20, v21, v22, v23, v24);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_18:
    sub_B170D4();
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE_d__31_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  UnityEngine_Object_o *Object_29932412; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v17; // x21
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *transform; // x0
  TabOpenEffectComponent_o *Component_srcLineSprite; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Action_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Func_bool__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  UnityEngine_WaitWhile_o *v41; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40F7826 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v3);
    sub_B16FFC(&System_Func_bool__TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___, v5);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__, v9);
    sub_B16FFC(&Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__, v10);
    sub_B16FFC(&TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v12);
    byte_40F7826 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_28;
      v15 = *(AssetData_o **)&_4__this->fields.eventId;
      if ( !v15 )
        return (char)v15;
      Object_29932412 = AssetData__GetObject_29932412(v15, this->fields.effectName, 0LL);
      if ( Object_29932412 )
      {
        if ( (UnityEngine_GameObject_c *)Object_29932412->klass == UnityEngine_GameObject_TypeInfo )
          v17 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_29932412;
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
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( !gameObject )
          goto LABEL_28;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
        GameObjectExtensions__SafeSetParent(v18, transform, 0LL);
        GameObjectExtensions__SetLocalPosition(v18, this->fields.position, 0LL);
        if ( !v18 )
          goto LABEL_28;
        Component_srcLineSprite = (TabOpenEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v18,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TabOpenEffectComponent___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          v26 = sub_B170CC(TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0_TypeInfo, v22, v23, v24, v25);
          System_Object___ctor((Il2CppObject *)v26, 0LL);
          if ( v26 )
          {
            *(_BYTE *)(v26 + 16) = 0;
            v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
            System_Action___ctor(
              v31,
              (Il2CppObject *)v26,
              Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              TabOpenEffectComponent__SetAnimationEndCallback(Component_srcLineSprite, v31, 0LL);
              v36 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v32, v33, v34, v35);
              System_Func_bool____ctor(
                v36,
                (Il2CppObject *)v26,
                Method_TitleInfoEventDailyPointItemComponent___c__DisplayClass30_0__PlayEffect_IE_b__1__,
                (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
              v41 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v37, v38, v39, v40);
              UnityEngine_WaitWhile___ctor(v41, v36, 0LL);
              this->fields.__2__current = (Il2CppObject *)v41;
              p__2__current = &this->fields.__2__current;
              sub_B16F98(
                (BattleServantConfConponent_o *)p__2__current,
                (System_Int32_array **)v41,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48);
              LOBYTE(v15) = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return (char)v15;
            }
          }
LABEL_28:
          sub_B170D4();
        }
      }
    }
    LOBYTE(v15) = 0;
    return (char)v15;
  }
  LOBYTE(v15) = 0;
  this->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_TitleInfoEventDailyPointItemComponent__PlayEffect_IE_d__30_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  int32_t _1__state; // w8
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x21
  UnityEngine_Object_o *v5; // x20
  float timer_5__2; // s8
  bool result; // w0
  float deltaTime; // s0
  float v9; // s0
  __int64 v10; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7827 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7827 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = this->fields._timer_5__2;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_B170D4();
    v5 = *(UnityEngine_Object_o **)&_4__this->fields.subLabelPosition.fields.x;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
      return 0;
    this->fields._timer_5__2 = 0.0;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 >= this->fields.duration )
    return 0;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v9 = UnityEngine_Mathf__Clamp(timer_5__2 + deltaTime, 0.0, this->fields.duration, 0LL);
  this->fields._timer_5__2 = v9;
  if ( !_4__this )
    goto LABEL_17;
  v10 = *(_QWORD *)&_4__this->fields.subLabelPosition.fields.x;
  if ( !v10 )
    goto LABEL_17;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v10 + 440LL))(
    v10,
    *(_QWORD *)(*(_QWORD *)v10 + 448LL),
    this->fields.fromAlpha
  + (float)((float)(v9 / this->fields.duration) * (float)(this->fields.toAlpha - this->fields.fromAlpha)));
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v12, v13, v14, v15, v16, v17);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE_d__32_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct TitleInfoEventDailyPointItemComponent_o *_4__this; // x20
  struct UILabel_o *subLabel; // x8
  struct SideItemComponent_o *Item; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *dailyPointItem_5__4; // x21
  int klass_high; // w8
  float v24; // s0
  double v25; // d0
  float v26; // s0
  System_Collections_IEnumerator_o *v27; // x0
  Il2CppObject *v28; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int v36; // w8
  float v37; // s8
  UnityEngine_WaitForSeconds_o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct SideItemComponent_o *v45; // x8
  System_Collections_IEnumerator_o *v46; // x0
  Il2CppObject *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v56; // w21
  System_Collections_IEnumerator_o *v57; // x0
  System_Collections_IEnumerator_o *v58; // x0
  Il2CppObject *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_IEnumerator_o *v66; // x0
  Il2CppObject *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  TitleInfoEventDailyPointItemComponent___c_c *v74; // x0
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_0; // x20
  Il2CppObject *v77; // x21
  struct TitleInfoEventDailyPointItemComponent___c_StaticFields *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Action_o *finishEffectEvent; // x0
  float v93; // s2
  unsigned __int64 v94; // d0 OVERLAPPED
  float v95; // s2
  int v96; // s1
  System_Collections_IEnumerator_o *v97; // x0
  Il2CppObject *started; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7

  if ( (byte_40F7828 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__, v7);
    sub_B16FFC(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16685/*"bit_dedicate_left_item_flash_2"*/, v10);
    sub_B16FFC(&StringLiteral_16684/*"bit_dedicate_left_item_flash_1"*/, v11);
    sub_B16FFC(&StringLiteral_16686/*"bit_dedicate_left_item_flash_3"*/, v12);
    byte_40F7828 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      subLabel = _4__this->fields.subLabel;
      if ( !subLabel || LODWORD(subLabel->fields.leftAnchor) != 2 )
        goto LABEL_41;
      this->fields._totalDailyPoint_5__2 = TitleInfoEventDailyPointItemComponent__GetTotalDailyEventPoint(_4__this, 0LL);
      this->fields._lastDailyPoint_5__3 = TitleInfoEventDailyPointItemComponent__GetLastDailyEventPoint(_4__this, 0LL);
      Item = TitleInfoEventDailyPointItemComponent__GetItem(_4__this, 0, 0LL);
      this->fields._dailyPointItem_5__4 = Item;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._dailyPointItem_5__4,
        (System_Int32_array **)Item,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      dailyPointItem_5__4 = (UnityEngine_Object_o *)this->fields._dailyPointItem_5__4;
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
        v26 = 1.0;
      }
      else
      {
        v24 = log10f((float)klass_high);
        if ( v24 == INFINITY )
          v25 = -v24;
        else
          v25 = v24;
        v26 = (float)((int)v25 + 1);
      }
      v93 = v26 * _4__this->fields.lastEffectPosition.fields.y;
      v94 = vadd_f32(
              *(float32x2_t *)&_4__this->fields.firstEffectPosition.fields.z,
              vmul_n_f32(*(float32x2_t *)&_4__this->fields.firstEffectPositionDiff.fields.z, v26)).n64_u64[0];
      v95 = _4__this->fields.firstEffectPositionDiff.fields.y + v93;
      *(_QWORD *)&this->fields._position_5__5.fields.x = v94;
      this->fields._position_5__5.fields.z = v95;
      v96 = HIDWORD(v94);
      v97 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16684/*"bit_dedicate_left_item_flash_1"*/,
              *(UnityEngine_Vector3_o *)&v94,
              0LL);
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v97,
                                  0LL);
      this->fields.__2__current = started;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)started,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
      v56 = 1;
      this->fields.__1__state = 1;
      return v56;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v54 = *(UnityEngine_Component_o **)&_4__this->fields.subLabelPosition.fields.x;
      if ( !v54 )
        goto LABEL_47;
      gameObject = UnityEngine_Component__get_gameObject(v54, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      v56 = 1;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v57 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              0.0,
              1.0,
              _4__this->fields.firstEffectPosition.fields.y,
              0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, v57, 0LL);
      v58 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16686/*"bit_dedicate_left_item_flash_3"*/,
              this->fields._position_5__5,
              0LL);
      v59 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                              (UnityEngine_MonoBehaviour_o *)_4__this,
                              v58,
                              0LL);
      this->fields.__2__current = v59;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      this->fields.__1__state = 2;
      return v56;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v37 = *(&_4__this->fields.countAnimDuration + 1);
      v38 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v38, v37, 0LL);
      this->fields.__2__current = (Il2CppObject *)v38;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v36 = 3;
      goto LABEL_29;
    case 3:
      v45 = this->fields._dailyPointItem_5__4;
      this->fields.__1__state = -1;
      if ( !v45 || !_4__this )
        goto LABEL_47;
      v46 = TitleInfoEventDailyPointItemComponent__PlayCountAnimation_IE(
              _4__this,
              v45->fields.label,
              this->fields._lastDailyPoint_5__3,
              this->fields._totalDailyPoint_5__2,
              *(float *)&_4__this->fields.itemList,
              0LL);
      v47 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                              (UnityEngine_MonoBehaviour_o *)_4__this,
                              v46,
                              0LL);
      this->fields.__2__current = v47;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      this->fields.__1__state = 4;
      return 1;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_47;
      v27 = TitleInfoEventDailyPointItemComponent__PlaySubLabelFadeAnimation_IE(
              _4__this,
              1.0,
              0.0,
              _4__this->fields.firstEffectPosition.fields.y,
              0LL);
      v28 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                              (UnityEngine_MonoBehaviour_o *)_4__this,
                              v27,
                              0LL);
      this->fields.__2__current = v28;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v28,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v36 = 5;
      goto LABEL_29;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
LABEL_47:
        sub_B170D4();
      TitleInfoEventDailyPointItemComponent__DeactivateSubLabel(_4__this, 0LL);
      v66 = TitleInfoEventDailyPointItemComponent__PlayEffect_IE(
              _4__this,
              (System_String_o *)StringLiteral_16685/*"bit_dedicate_left_item_flash_2"*/,
              *(UnityEngine_Vector3_o *)&_4__this->fields.lastEffectPosition.fields.z,
              0LL);
      v67 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                              (UnityEngine_MonoBehaviour_o *)_4__this,
                              v66,
                              0LL);
      this->fields.__2__current = v67;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v36 = 6;
LABEL_29:
      *((_DWORD *)p__2__current - 2) = v36;
      return 1;
    case 6:
      this->fields._position_5__5.fields.z = 0.0;
      this->fields.__1__state = -1;
      *(_QWORD *)&this->fields._position_5__5.fields.x = 0LL;
LABEL_32:
      v74 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      if ( (BYTE3(TitleInfoEventDailyPointItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventDailyPointItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventDailyPointItemComponent___c_TypeInfo);
        v74 = TitleInfoEventDailyPointItemComponent___c_TypeInfo;
      }
      static_fields = v74->static_fields;
      _9__29_0 = static_fields->__9__29_0;
      if ( !_9__29_0 )
      {
        if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          static_fields = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        }
        v77 = (Il2CppObject *)static_fields->__9;
        _9__29_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
        System_Action___ctor(
          _9__29_0,
          v77,
          Method_TitleInfoEventDailyPointItemComponent___c__UpdateDailyPointUIWithEffect_IE_b__29_0__,
          0LL);
        v78 = TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
        v78->__9__29_0 = _9__29_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v78->__9__29_0,
          (System_Int32_array **)_9__29_0,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84);
      }
      EventTutorialMaster__CheckTutorial(0, 52, _9__29_0, 0, 0, 0, 0, 0LL);
      this->fields._dailyPointItem_5__4 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._dailyPointItem_5__4, 0LL, v85, v86, v87, v88, v89, v90);
LABEL_41:
      finishEffectEvent = this->fields.finishEffectEvent;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_TitleInfoEventDailyPointItemComponent__UpdateDailyPointUIWithEffect_IE_d__29_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7823 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventDailyPointItemComponent___c_TypeInfo, v1);
    byte_40F7823 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TitleInfoEventDailyPointItemComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventDailyPointItemComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F7824 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_40F7824 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B170D4();
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