void MissionListViewManager___cctor(const MethodInfo *method)
{
  struct MissionListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4C461C9 & 1) == 0 )
  {
    sub_1C37058(&MissionListViewManager_TypeInfo);
    byte_4C461C9 = 1;
  }
  static_fields = MissionListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x40DE021F0LL;
}


void MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AvalonSceneManager_c *v9; // x0

  if ( (byte_4C461C8 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    byte_4C461C8 = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rewardItemGetEffectPlayList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dispRewardInfoList, (int32_t)v6, v7, v8);
  this->fields.FADEOUT_KIND = 1;
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v9->static_fields->DEFAULT_FADE_TIME);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C461B1 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C461B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void MissionListViewManager__CloseItemDetail(MissionListViewManager_o *this, bool isDecide, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C461AF & 1) == 0 )
  {
    sub_1C37058(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C461AF = 1;
  }
  v3 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_MissionListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C461B0 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C461B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void MissionListViewManager__CreateDisplayRewardList(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  MissionListViewManager___c_c *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  System_Func_object__bool__o *_9__84_0; // x22
  Il2CppObject *v9; // x23
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  MissionListViewManager___c_c *v13; // x0
  System_Func_object__bool__o *_9__84_1; // x22
  Il2CppObject *v15; // x23
  struct MissionListViewManager___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_List_object__o *v20; // x23
  struct System_Collections_Generic_List_QuestRewardInfo__o **p_dispRewardInfoList; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  MissionListViewManager_o *ItemEffect; // x0
  int max_length; // w8
  __int64 v26; // x23
  GiftEntity_o **m_Items; // x28
  GiftEntity_o *v28; // x8
  const MethodInfo *v29; // x2
  QuestRewardInfo_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  GiftEntity_o *v33; // x8
  int32_t size; // w27
  const char *m_CachedPtr; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const char *v38; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C461BE & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_GiftEntity___);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C37058(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    sub_1C37058(&MissionListViewManager_TypeInfo);
    sub_1C37058(&QuestRewardInfo_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__);
    sub_1C37058(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__);
    sub_1C37058(&MissionListViewManager___c_TypeInfo);
    byte_4C461BE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
  v6 = MissionListViewManager___c_TypeInfo;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
    v6 = MissionListViewManager___c_TypeInfo;
  }
  _9__84_0 = (System_Func_object__bool__o *)v6->static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = MissionListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__84_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__84_0,
      v9,
      Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__,
      0);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__84_0 = (struct System_Func_GiftEntity__bool__o *)_9__84_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__84_0, (int32_t)_9__84_0, v11, v12);
  }
  if ( BasicHelper__Any_object__51187876(
         (System_Object_array *)gifts,
         (System_Func_T__bool__o *)_9__84_0,
         (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v13 = MissionListViewManager___c_TypeInfo;
    if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
      v13 = MissionListViewManager___c_TypeInfo;
    }
    _9__84_1 = (System_Func_object__bool__o *)v13->static_fields->__9__84_1;
    if ( !_9__84_1 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = MissionListViewManager___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__84_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__84_1,
        v15,
        Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__,
        0);
      v16 = MissionListViewManager___c_TypeInfo->static_fields;
      v16->__9__84_1 = (struct System_Func_GiftEntity__bool__o *)_9__84_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v16->__9__84_1, (int32_t)_9__84_1, v17, v18);
    }
    v19 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)gifts,
            (System_Func_TSource__bool__o *)_9__84_1,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    gifts = (GiftEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                  v19,
                                  (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  p_dispRewardInfoList = &this->fields.dispRewardInfoList;
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dispRewardInfoList, (int32_t)v20, v22, v23);
  if ( !gifts )
    goto LABEL_43;
  max_length = gifts->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    m_Items = gifts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= max_length )
LABEL_44:
        sub_1C372BC(ItemEffect);
      v28 = m_Items[v26];
      if ( !v28 || !v7 )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v7,
                                                 &entity,
                                                 v28->fields.objectId,
                                                 (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   (int32_t)entity[1].klass,
                                                   v29);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v30 = (QuestRewardInfo_o *)sub_1C372A4(QuestRewardInfo_TypeInfo);
          QuestRewardInfo___ctor(v30, 0);
          if ( !v30 )
            break;
          v30->fields.type = 2;
          if ( !entity )
            break;
          v30->fields.objectId = (int32_t)entity[1].klass;
          if ( (unsigned int)v26 >= LODWORD(gifts->max_length) )
            goto LABEL_44;
          v33 = m_Items[v26];
          if ( !v33 )
            break;
          v30->fields.num = v33->fields.num;
          if ( !*p_dispRewardInfoList )
            break;
          ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          size = (*p_dispRewardInfoList)->fields._size;
          if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
            ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          }
          if ( size < ItemEffect->fields.sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE )
          {
            ItemEffect = (MissionListViewManager_o *)*p_dispRewardInfoList;
            if ( !*p_dispRewardInfoList )
              break;
            m_CachedPtr = (const char *)ItemEffect->fields.m_CachedPtr;
            v36 = Method_System_Collections_Generic_List_QuestRewardInfo__Add__;
            ++HIDWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *((_DWORD *)m_CachedPtr + 6) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ItemEffect,
                (Il2CppObject *)v30,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &m_CachedPtr[8 * m_CancellationTokenSource_low];
              LODWORD(ItemEffect->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *((_QWORD *)v38 + 4) = v30;
              sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 32), (int32_t)v30, v31, v32);
            }
          }
        }
      }
      max_length = gifts->max_length;
      if ( (int)++v26 >= max_length )
        return;
    }
LABEL_43:
    sub_1C372B4(ItemEffect);
  }
}


AlphaTransitionCalculator_o *MissionListViewManager__CreateRewardIconAlphaCalculator(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_4C461A6 & 1) == 0 )
  {
    sub_1C37058(&AlphaTransitionCalculator_TypeInfo);
    sub_1C37058(&MissionListViewManager_TypeInfo);
    byte_4C461A6 = 1;
  }
  v2 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v2 = MissionListViewManager_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0);
  v5 = (AlphaTransitionCalculator_o *)sub_1C372A4(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0);
  return v5;
}


void MissionListViewManager__DisplayAfterMissionAchieveTutorial(
        MissionListViewManager_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 94, callbackAfter, 0, 0, 0, 0, 0);
}


void MissionListViewManager__EndItemGetEffectAction(
        MissionListViewManager_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_Dictionary_int__AssetData__o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  int v14; // w9
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w2
  int v21; // w9
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  Il2CppObject *value; // x21
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v25; // x8
  CommonUI_o *v26; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4C461B5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass75_0_TypeInfo);
    byte_4C461B5 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v5 = sub_1C372A4(MissionListViewManager___c__DisplayClass75_0_TypeInfo);
  MissionListViewManager___c__DisplayClass75_0___ctor((MissionListViewManager___c__DisplayClass75_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = afterDetail;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)afterDetail, v9, v10);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_22;
  v14 = rewardItemGetEffectPlayList->fields._version + 1;
  rewardItemGetEffectPlayList->fields._size = 0;
  rewardItemGetEffectPlayList->fields._version = v14;
  this->fields.questRewardBoxAction = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questRewardBoxAction, 0, v11, v12);
  this->fields.isTreasureEffect = 0;
  this->fields.isChangeTitleSprite = 0;
  this->fields.useTreasureGetEffectName = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.useTreasureGetEffectName, 0, v15, v16);
  this->fields.overWriteTitleSpriteName = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.overWriteTitleSpriteName, 0, v17, v18);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_22;
  size = dispRewardInfoList->fields._size;
  v21 = dispRewardInfoList->fields._version + 1;
  dispRewardInfoList->fields._size = 0;
  dispRewardInfoList->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)dispRewardInfoList->fields._items, 0, size, 0);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
         (const MethodInfo_33FA234 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__) >= 1 )
  {
    v6 = this->fields.itemGetAssetDatas;
    if ( !v6 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v29,
      (System_Collections_Generic_Dictionary_int__object__o *)v6,
      (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v29,
              (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
    {
      value = v29.fields._current.fields.value;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40534712((AssetData_o *)value, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v29,
      (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    v6 = this->fields.itemGetAssetDatas;
    if ( !v6 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)v6,
      (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  v26 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__,
    0);
  if ( !v26 )
LABEL_22:
    sub_1C372B4(v6);
  CommonUI__maskFadein(v26, DEFAULT_FADE_TIME, v28, 0);
}


int32_t MissionListViewManager__GetAlphaAnimCnt(
        MissionListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


int32_t MissionListViewManager__GetItemGetEffectId(
        MissionListViewManager_o *this,
        QuestRewardInfo_o *rewardInfo,
        const MethodInfo *method)
{
  MissionListViewManager_o *v4; // x20
  BalanceConfig_c *v5; // x0
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C461C2 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    this = (MissionListViewManager_o *)sub_1C37058(&StringLiteral_18923/*"effectId"*/);
    byte_4C461C2 = 1;
  }
  entity = 0;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0) )
  {
    this = (MissionListViewManager_o *)Gift__IsItem_40427128(rewardInfo->fields.type, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    dispRewardInfoList = v4->fields.dispRewardInfoList;
    if ( !dispRewardInfoList )
      goto LABEL_19;
    if ( dispRewardInfoList->fields._size > 1 )
      return 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18923/*"effectId"*/, 0, 0);
LABEL_19:
    sub_1C372B4(this);
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v5->static_fields->EquipGetEffectId;
}


System_Collections_Generic_List_TObject__o *MissionListViewManager__GetObjectList___Il2CppFullySharedGenericType_(
        MissionListViewManager_o *this,
        const MethodInfo_316FE04 *method)
{
  const MethodInfo_316FE04_RGCTXs *rgctx_data; // x19
  size_t actualSize; // x21
  long double v6; // q0
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_TObject__o *v8; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x25
  _BOOL8 v11; // x0
  MethodInfo *_2_UnityEngine_GameObject_GetComponent_TObject; // x1
  void (*methodPointer)(); // x0
  void *v14; // x0
  const MethodInfo_316FE04_RGCTXs *v15; // x8
  struct System_Collections_Generic_List_T__o *v16; // x4
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x1
  Il2CppMethodPointer v18; // x0
  __int64 v20; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-20h] BYREF
  __int64 v23; // [xsp+38h] [xbp-8h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8();
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_3_TObject->_2.actualSize;
  memset(&v22, 0, sizeof(v22));
  memset((char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (*(&rgctx_data->_0_System_Collections_Generic_List_TObject_->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C8776C(v6);
  v8 = (System_Collections_Generic_List_TObject__o *)sub_1C372A4(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v11 )
    {
      if ( !current )
        sub_1C372B4(v11);
      _2_UnityEngine_GameObject_GetComponent_TObject = method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_;
      methodPointer = _2_UnityEngine_GameObject_GetComponent_TObject->methodPointer;
      v21.fields._list = (struct System_Collections_Generic_List_T__o *)((char *)&v20
                                                                       - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _2_UnityEngine_GameObject_GetComponent_TObject->invoker_method(
        methodPointer,
        _2_UnityEngine_GameObject_GetComponent_TObject,
        current,
        (void **)&v21.fields._list,
        v21.fields._list);
      memcpy(
        (char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        (char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      v14 = memcpy(
              (char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              (char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              actualSize);
      if ( !v8 )
        sub_1C372B4(v14);
      v15 = method->rgctx_data;
      v16 = (struct System_Collections_Generic_List_T__o *)((char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      if ( (v15->_3_TObject->_1.byval_arg.bits & 0x80000000) == 0 )
        v16 = *(struct System_Collections_Generic_List_T__o **)((char *)&v20 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_TObject__Add = v15->_4_System_Collections_Generic_List_TObject__Add;
      v18 = _4_System_Collections_Generic_List_TObject__Add->methodPointer;
      v21.fields._list = v16;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_TObject__o *, System_Collections_Generic_List_Enumerator_object__o *))_4_System_Collections_Generic_List_TObject__Add->invoker_method)(
        v18,
        _4_System_Collections_Generic_List_TObject__Add,
        v8,
        &v21);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return v8;
}


System_Collections_Generic_List_TObject__o *MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_316FBB4 *method)
{
  long double v2; // q0
  const MethodInfo_316FBB4_RGCTXs *rgctx_data; // x8
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_object__o *v7; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v10; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x1
  struct System_Object_array *items; // x8
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8();
      rgctx_data = method->rgctx_data;
    }
  }
  memset(&v21, 0, sizeof(v21));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (*(&rgctx_data->_0_System_Collections_Generic_List_TObject_->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C8776C(v2);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(_0_System_Collections_Generic_List_TObject);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v10 )
    {
      if ( !current )
        sub_1C372B4(v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      v14 = Component_object;
      if ( !v7 )
        sub_1C372B4(Component_object);
      items = v7->fields._items;
      _4_System_Collections_Generic_List_TObject__Add = method->rgctx_data->_4_System_Collections_Generic_List_TObject__Add;
      ++v7->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          Component_object,
          (const MethodInfo_37A3024 *)_4_System_Collections_Generic_List_TObject__Add->klass->rgctx_data[14].rgctxDataDummy);
      }
      else
      {
        v18 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v14;
        sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_TObject__o *)v7;
}


bool MissionListViewManager__IsExcludeGetItemEffect(
        MissionListViewManager_o *this,
        int32_t targetItemId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *EventItemNotDispItemGetEffect; // x8
  int max_length; // w9
  bool v7; // w10
  int i; // w11

  if ( (byte_4C461B2 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C461B2 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  EventItemNotDispItemGetEffect = v4->static_fields->EventItemNotDispItemGetEffect;
  if ( EventItemNotDispItemGetEffect )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      EventItemNotDispItemGetEffect = BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
      if ( !EventItemNotDispItemGetEffect )
        sub_1C372B4(v4);
    }
    max_length = EventItemNotDispItemGetEffect->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1C372BC(v4);
        if ( EventItemNotDispItemGetEffect->m_Items[i] == targetItemId )
          break;
        ++i;
      }
    }
    LOBYTE(EventItemNotDispItemGetEffect) = !v7;
  }
  return (unsigned __int8)EventItemNotDispItemGetEffect & 1;
}


void MissionListViewManager__LoadItemGetEffects(
        MissionListViewManager_o *this,
        int32_t idx,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Action_o *v4; // x21
  int32_t v5; // w22
  MissionListViewManager_o *v6; // x19
  __int64 v7; // x20
  System_Collections_Generic_List_object__o *dispRewardInfoList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w8
  System_Collections_Generic_Dictionary_int__object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v18; // x2
  int32_t EffectId; // w0
  int32_t v20; // w1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  ScrTerminalListTop_c *v27; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v29; // x0
  System_String_o *v30; // x19
  AssetLoader_LoadEndDataHandler_o *v31; // x21
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  while ( 1 )
  {
    v4 = endAct;
    v5 = idx;
    v6 = this;
    if ( (byte_4C461C3 & 1) == 0 )
    {
      sub_1C37058(&AssetManager_TypeInfo);
      sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__);
      sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      sub_1C37058(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      sub_1C37058(&int_TypeInfo);
      sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
      sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
      sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
      sub_1C37058(&ScrTerminalListTop_TypeInfo);
      sub_1C37058(&Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__);
      sub_1C37058(&MissionListViewManager___c__DisplayClass89_0_TypeInfo);
      byte_4C461C3 = 1;
    }
    v7 = sub_1C372A4(MissionListViewManager___c__DisplayClass89_0_TypeInfo);
    MissionListViewManager___c__DisplayClass89_0___ctor((MissionListViewManager___c__DisplayClass89_0_o *)v7, 0);
    if ( !v7
      || (*(_QWORD *)(v7 + 16) = v6,
          sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v6, v9, v10),
          *(_QWORD *)(v7 + 32) = v4,
          *(_DWORD *)(v7 + 28) = v5,
          sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v4, v11, v12),
          (dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList) == 0) )
    {
LABEL_17:
      sub_1C372B4(dispRewardInfoList);
    }
    v13 = *(_DWORD *)(v7 + 28);
    if ( v13 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
      return;
    }
    if ( !v13 )
    {
      v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v14,
        (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v6->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v14;
      sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.itemGetAssetDatas, (int32_t)v14, v15, v16);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_17;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             dispRewardInfoList,
             *(_DWORD *)(v7 + 28),
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    EffectId = MissionListViewManager__GetItemGetEffectId(v6, (QuestRewardInfo_o *)Item, v18);
    *(_DWORD *)(v7 + 24) = EffectId;
    v20 = EffectId;
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.itemGetAssetDatas;
    if ( !dispRewardInfoList )
      goto LABEL_17;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)dispRewardInfoList,
            v20,
            (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v7 + 32);
    this = v6;
    idx = *(_DWORD *)(v7 + 28) + 1;
  }
  v27 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v27 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v27->static_fields->ITEM_GET_ASSET_NAME;
  v32 = *(_DWORD *)(v7 + 24);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v21, v22, v23, v24, v25, v26);
  v30 = System_String__Format(ITEM_GET_ASSET_NAME, v29, 0);
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v30, v31, 1, 0);
}


void MissionListViewManager__LoadTreasureGetEffect(
        MissionListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x19
  AssetLoader_LoadEndDataHandler_o *v12; // x20

  if ( (byte_4C461C0 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass86_0_TypeInfo);
    sub_1C37058(&StringLiteral_5894/*"Effect/Talk/"*/);
    byte_4C461C0 = 1;
  }
  v5 = sub_1C372A4(MissionListViewManager___c__DisplayClass86_0_TypeInfo);
  MissionListViewManager___c__DisplayClass86_0___ctor((MissionListViewManager___c__DisplayClass86_0_o *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = endAct;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endAct, v9, v10);
  v11 = System_String__Concat_63561656((System_String_o *)StringLiteral_5894/*"Effect/Talk/"*/, this->fields.useTreasureGetEffectName, 0);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v11, v12, 1, 0);
}


void MissionListViewManager__OnChangeAlphaAnim(MissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void MissionListViewManager__OnMoveEnd(MissionListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C461AA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C461AA = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_20;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.element_class)(
          gameObject,
          1,
          gameObject->klass[1]._1.castClass);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_18;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
LABEL_18:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
          if ( callbackFunc2 )
            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
              callbackFunc2->fields.method_code,
              callbackFunc2->fields.method);
          return;
        }
      }
LABEL_20:
      sub_1C372B4(gameObject);
    }
  }
}


void MissionListViewManager__OpenCostumeReleaseDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *v5; // x19
  ServantCostumeEntity_o *v6; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x2
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-28h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_4C461AD & 1) == 0 )
  {
    sub_1C37058(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    this = (MissionListViewManager_o *)sub_1C37058(&Method_MissionListViewManager_CloseItemDetail__);
    byte_4C461AD = 1;
  }
  resultEntity = 0;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v6 = resultEntity;
    v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C372A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v7, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenCostumeReleaseDetail(v6, v7, v8);
  }
}


void MissionListViewManager__OpenEquipDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v6; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C461AE & 1) == 0 )
  {
    sub_1C37058(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C37058(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C461AE = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v6 = entity;
    v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C372A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenEquipDetail((EquipEntity_o *)v6, v7, v8);
  }
}


void MissionListViewManager__RequestInto(MissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_TObject__o *ObjectList_object; // x0
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v5; // x20
  int v6; // w24
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v9; // x23

  if ( (byte_4C461A9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    sub_1C37058(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_1C37058(&Method_MissionListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C461A9 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_316FBB4 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_13:
    sub_1C372B4(ObjectList_object);
  size = ObjectList_object->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)ObjectList_object;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v6 = 0;
  v7 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v5,
             v7,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v6;
      MissionListViewObject__Init((MissionListViewObject_o *)Item, 4, v9, this->fields.listInDelay, 1, 0);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v7;
  }
  while ( v7 < v5->fields._size );
  if ( !v6 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0);
  }
}


void MissionListViewManager__RequestListObject(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList_object; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C461A8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_1C37058(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_1C37058(&Method_MissionListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C461A8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList_object = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetObjectList_object_(
                                                                     this,
                                                                     (const MethodInfo_316FBB4 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_1C372B4(0);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList_object,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v10, delay, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void MissionListViewManager__RequestListObject_47004544(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  MissionListViewManager__RequestListObject(this, mode, 0.0, method);
}


void MissionListViewManager__ResetAlphaAnimTime(MissionListViewManager_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  this->fields.alphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimTimeOld = realtimeSinceStartup;
  if ( rewardIconAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0);
}


void MissionListViewManager__SetMode(
        MissionListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  MissionListViewManager__SetMode_47004184(this, mode, v6);
}


void MissionListViewManager__SetMode_47004184(MissionListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *gameObject; // x0
  int32_t v8; // w1

  if ( (byte_4C461A7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11346/*"RequestInto"*/);
    byte_4C461A7 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
      {
        sub_1C372B4(gameObject);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11346/*"RequestInto"*/,
      0.0,
      0);
  }
  else if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 3 )
      v8 = 3;
    else
      v8 = 2;
    MissionListViewManager__RequestListObject(this, v8, 0.0, v5);
  }
}


void MissionListViewManager__SetMode_47004488(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  MissionListViewManager__SetMode_47004184(this, mode, v7);
}


void MissionListViewManager__SetObjectItem(
        MissionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MissionListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C461AB & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_1C37058(&MissionListViewObject_TypeInfo);
    byte_4C461AB = 1;
  }
  if ( !obj
    || (naturalAligment = MissionListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MissionListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  MissionListViewObject__Init_47914192((MissionListViewObject_o *)obj, v7, 1, 0);
}


void MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_c *v3; // x0
  float DEFAULT_FADE_TIME; // s0

  if ( (byte_4C461BD & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    byte_4C461BD = 1;
  }
  if ( this->fields.isTreasureEffect && !this->fields.isEffect )
  {
    this->fields.FADEOUT_KIND = 2;
    DEFAULT_FADE_TIME = 1.0;
  }
  else
  {
    this->fields.FADEOUT_KIND = 1;
    v3 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v3 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v3->static_fields->DEFAULT_FADE_TIME;
  }
  this->fields.FADEOUT_TIME = DEFAULT_FADE_TIME;
}


void MissionListViewManager__SetupGetEffectOptions(
        MissionListViewManager_o *this,
        EventMissionEntity_o *eventMissionEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  GiftAddEntity_o *ValidPriorDataById; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  GiftAddEntity_o *v9; // x21
  int32_t giftId; // w8
  int giftIconId; // w20
  ScrTerminalListTop_c *v12; // x0
  __int64 v13; // x9
  struct System_String_o *v14; // x1
  struct System_String_o *OverwriteTreasureEffectId; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C461C7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GiftAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    byte_4C461C7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftAddMaster___);
  if ( !eventMissionEntity || !Master_object )
    goto LABEL_30;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(
                         (GiftAddMaster_o *)Master_object,
                         eventMissionEntity->fields.giftId,
                         0);
  v9 = ValidPriorDataById;
  if ( ValidPriorDataById )
  {
    if ( ValidPriorDataById->fields.priority > 1 )
    {
      giftId = ValidPriorDataById->fields.giftId;
      if ( giftId == eventMissionEntity->fields.giftId && ValidPriorDataById->fields.priorGiftId != giftId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftAddMaster___);
        if ( Master_object )
        {
          v9 = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Master_object, v9->fields.priorGiftId, 0);
          goto LABEL_15;
        }
LABEL_30:
        sub_1C372B4(Master_object);
      }
    }
  }
LABEL_15:
  giftIconId = eventMissionEntity->fields.giftIconId;
  this->fields.giftIconId = giftIconId;
  if ( giftIconId >= 1 )
  {
    v12 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v12 = ScrTerminalListTop_TypeInfo;
    }
    v13 = 160;
    if ( giftIconId < 4 )
      v13 = 152;
    v14 = *(struct System_String_o **)((char *)&v12->static_fields->WAR_CLEAR_TITLE_SIZE + v13);
    this->fields.useTreasureGetEffectName = v14;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.useTreasureGetEffectName, (int32_t)v14, v7, v8);
  }
  if ( v9 )
  {
    OverwriteTreasureEffectId = GiftAddEntity__GetOverwriteTreasureEffectId(v9, 0);
    if ( !OverwriteTreasureEffectId )
      OverwriteTreasureEffectId = this->fields.useTreasureGetEffectName;
    this->fields.useTreasureGetEffectName = OverwriteTreasureEffectId;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.useTreasureGetEffectName,
      (int32_t)OverwriteTreasureEffectId,
      v16,
      v17);
    v18 = GiftAddEntity__GetOverWriteTitleSprite(v9, 0);
    this->fields.overWriteTitleSpriteName = v18;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.overWriteTitleSpriteName, (int32_t)v18, v19, v20);
  }
  if ( this->fields.useTreasureGetEffectName )
    this->fields.isTreasureEffect = 1;
  if ( this->fields.overWriteTitleSpriteName )
    this->fields.isChangeTitleSprite = 1;
}


void MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
        MissionListViewManager_o *this,
        MissionListViewItem_o *listViewItem,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *challengeBoardItemList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  MissionListViewManager___c_c *v8; // x8
  CommonUI_o *v9; // x22
  System_Action_o *_9__92_0; // x23
  Il2CppObject *v11; // x24
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C461C6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__);
    sub_1C37058(&MissionListViewManager___c_TypeInfo);
    byte_4C461C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = MissionListViewManager___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
    v8 = MissionListViewManager___c_TypeInfo;
  }
  _9__92_0 = v8->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MissionListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__92_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__92_0,
      v11,
      Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__,
      0);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = _9__92_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__92_0, (int32_t)_9__92_0, v13, v14);
  }
  if ( !v9 )
    sub_1C372B4(Instance);
  CommonUI__OpenMissionNaviTransitionConfirmDialog(v9, listViewItem, this, 1, challengeBoardItemList, _9__92_0, 0);
}


void MissionListViewManager__SetupMissionCondTransitionDialog(
        MissionListViewManager_o *this,
        System_String_o *moveTo,
        System_Action_o *decideAction,
        System_String_o *confirmDialogMessage,
        const MethodInfo *method)
{
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x22
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25

  if ( (byte_4C461C5 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass91_0_TypeInfo);
    sub_1C37058(&StringLiteral_8688/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C37058(&StringLiteral_8692/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_8690/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_8691/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/);
    byte_4C461C5 = 1;
  }
  v8 = sub_1C372A4(MissionListViewManager___c__DisplayClass91_0_TypeInfo);
  MissionListViewManager___c__DisplayClass91_0___ctor((MissionListViewManager___c__DisplayClass91_0_o *)v8, 0);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = decideAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)decideAction, v10, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( System_String__IsNullOrEmpty(confirmDialogMessage, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8690/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, 0);
    confirmDialogMessage = System_String__Format(v13, (Il2CppObject *)moveTo, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8688/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, 0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8691/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__,
    0);
  if ( !Instance )
LABEL_14:
    sub_1C372B4(v9);
  CommonUI__OpenConfirmDialog_31208264((CommonUI_o *)Instance, v12, confirmDialogMessage, v15, v14, 1, v17, 0, 0, 0, 0);
}


void MissionListViewManager__SetupTreasureGetEffect(
        MissionListViewManager_o *this,
        int32_t itemIconId,
        const MethodInfo *method)
{
  AssetData_o *treasureGetAssetData; // x0
  Il2CppObject *Object_object__51154888; // x21
  UnityEngine_GameObject_o *v7; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardBoxAction_o **p_questRewardBoxAction; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *useTreasureGetEffectName; // x22
  ScrTerminalListTop_c *v13; // x0
  ScrTerminalListTop_c *v14; // x0
  System_String_o *v15; // x20
  int32_t v16; // w1

  if ( (byte_4C461C1 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    byte_4C461C1 = 1;
  }
  treasureGetAssetData = this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_21;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              treasureGetAssetData,
                              this->fields.useTreasureGetEffectName,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  treasureGetAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                          Object_object__51154888,
                                          (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  v7 = (UnityEngine_GameObject_o *)treasureGetAssetData;
  treasureGetAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)treasureGetAssetData,
                                          0);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)treasureGetAssetData, this->fields.instantiatingPOS, 0);
  GameObjectExtensions__ResetTransform(v7, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v7,
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  p_questRewardBoxAction = &this->fields.questRewardBoxAction;
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questRewardBoxAction, (int32_t)Component_object, v10, v11);
  if ( !this->fields.isTreasureEffect )
    goto LABEL_15;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v13 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v13 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v13->static_fields->PRIZE_GET_NORMAL, 0) )
  {
    v14 = ScrTerminalListTop_TypeInfo;
    v15 = this->fields.useTreasureGetEffectName;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v14 = ScrTerminalListTop_TypeInfo;
    }
    treasureGetAssetData = (AssetData_o *)System_String__op_Inequality(v15, v14->static_fields->TREASURE_GET_NORMAL, 0);
  }
  else
  {
LABEL_15:
    treasureGetAssetData = (AssetData_o *)(&dword_0 + 1);
  }
  if ( !*p_questRewardBoxAction )
LABEL_21:
    sub_1C372B4(treasureGetAssetData);
  if ( itemIconId == 3 )
    v16 = 2;
  else
    v16 = itemIconId == 2;
  QuestRewardBoxAction__Setup(*p_questRewardBoxAction, v16, (unsigned __int8)treasureGetAssetData & 1, 0);
}


void MissionListViewManager__ShowRewardDetailInfo(
        MissionListViewManager_o *this,
        MissionListViewItem_o *selectItem,
        bool ignoreSubGiftEntity,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  GiftMaster_o *Master_object; // x0
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v12; // x8
  GiftMaster_o *v13; // x21
  __int64 v14; // x20
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Func_object__bool__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  unsigned int MasterName_k__BackingField; // w9
  int v21; // w8
  GiftEntity_o *v22; // x20
  int32_t type; // w0
  Il2CppObject *Entity; // x20
  Il2CppObject *v25; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v26; // x22
  Il2CppObject *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v30; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x23
  GiftMaster_o *v32; // x22
  bool IsServantEquip; // w23
  Il2CppObject *v34; // x21
  ServantStatusDialog_EndDelegate_o *v35; // x22
  Il2CppObject *v36; // x20
  Il2CppObject *v37; // x21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  const MethodInfo *v39; // x2
  struct System_String_o *v40; // x20
  __int64 v41; // x23
  int32_t v42; // w20
  ServantStatusDialog_EndDelegate_o *v43; // x22
  const MethodInfo *v44; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4C461AC & 1) == 0 )
  {
    sub_1C37058(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C37058(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager_CloseCommandCodeDetail__);
    sub_1C37058(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1C37058(&Method_MissionListViewManager_CloseServantStatusDetail__);
    sub_1C37058(&Method_MissionListViewManager_ShowRewardDetailInfo__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass66_0_TypeInfo);
    byte_4C461AC = 1;
  }
  v7 = Method_MissionListViewManager_ShowRewardDetailInfo__;
  if ( (*((_BYTE *)Method_MissionListViewManager_ShowRewardDetailInfo__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C37070(Method_MissionListViewManager_ShowRewardDetailInfo__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  if ( !selectItem )
    goto LABEL_52;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_52;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v30 = (CommonUI_o *)Instance;
    v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C372A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0);
    if ( !v30 )
      goto LABEL_52;
    CommonUI__OpenItemDetailDialog_31287860(v30, nameTxt, rewardExtraDetailTxt, v31, 0);
  }
  else if ( rewardType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftMaster___);
    v12 = selectItem->fields.eventMissionEnt;
    if ( !v12 || !Master_object )
      goto LABEL_52;
    Master_object = (GiftMaster_o *)GiftMaster__GetGiftListById(Master_object, v12->fields.giftId, 0);
    v13 = Master_object;
    if ( ignoreSubGiftEntity )
    {
      v14 = sub_1C372A4(MissionListViewManager___c__DisplayClass66_0_TypeInfo);
      MissionListViewManager___c__DisplayClass66_0___ctor((MissionListViewManager___c__DisplayClass66_0_o *)v14, 0);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      Master_object = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity((GiftEntity_array *)v13, v15);
      if ( !v14 )
        goto LABEL_52;
      *(_QWORD *)(v14 + 16) = Master_object;
      sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)Master_object, v16, v17);
      v18 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v18,
        (Il2CppObject *)v14,
        Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__,
        0);
      v19 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v13,
              (System_Func_TSource__bool__o *)v18,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      Master_object = (GiftMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                        v19,
                                        (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v13 = Master_object;
    }
    if ( !v13 )
      goto LABEL_52;
    MasterName_k__BackingField = (unsigned int)v13->fields._MasterName_k__BackingField;
    v21 = this->fields.alphaAnimCnt % (int)MasterName_k__BackingField;
    if ( v21 >= MasterName_k__BackingField )
      sub_1C372BC(Master_object);
    v22 = (GiftEntity_o *)*((_QWORD *)&v13->fields.revision + v21);
    if ( !v22 )
      goto LABEL_52;
    type = v22->fields.type;
    if ( type == 2 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   v22->fields.objectId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v26 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C372A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v26,
          (Il2CppObject *)this,
          (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
          0);
        if ( v25 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v25, (ItemEntity_o *)Entity, v26, 50, 0);
          return;
        }
      }
LABEL_52:
      sub_1C372B4(Master_object);
    }
    if ( Gift__IsServant(type, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_52;
      Master_object = (GiftMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v22->fields.objectId,
                                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_52;
      v32 = Master_object;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_object, 0);
      v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v35 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v35,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0);
        if ( !v34 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_31222096((CommonUI_o *)v34, 7, v22, v35, 0);
      }
      else
      {
        v41 = *(_QWORD *)&v32->fields._MasterKind_k__BackingField;
        v40 = v32->fields._MasterName_k__BackingField;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v45.fields.currentCryptoKey = v41;
        *(_QWORD *)&v45.fields.fakeValue = v40;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v45, 0);
        v43 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v43,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0);
        if ( !v34 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_31221532((CommonUI_o *)v34, 7, v42, v43, 0);
      }
    }
    else if ( Gift__IsCommandCode(v22->fields.type, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_52;
      v36 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              v22->fields.objectId,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v38,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseCommandCodeDetail__,
        0);
      if ( !v37 )
        goto LABEL_52;
      CommonUI__OpenServantEquipStatusDialog_31224700((CommonUI_o *)v37, 25, (CommandCodeEntity_o *)v36, 0, v38, 0, 0);
    }
    else if ( Gift__IsCostumeRelease(v22->fields.type, 0) )
    {
      MissionListViewManager__OpenCostumeReleaseDetail(this, v22->fields.objectId, v39);
    }
    else if ( Gift__IsEquip(v22->fields.type, 0) )
    {
      MissionListViewManager__OpenEquipDetail(this, v22->fields.objectId, v44);
    }
  }
}


void MissionListViewManager__StartEventMissionClearItemAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v8; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4C461B3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass73_0_TypeInfo);
    byte_4C461B3 = 1;
  }
  v8 = sub_1C372A4(MissionListViewManager___c__DisplayClass73_0_TypeInfo);
  MissionListViewManager___c__DisplayClass73_0___ctor((MissionListViewManager___c__DisplayClass73_0_o *)v8, 0);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v8 + 24) = gifts;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 24), (int32_t)gifts, v12, v13);
  *(_QWORD *)(v8 + 32) = afterDetail;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)afterDetail, v14, v15);
  MissionListViewManager__SetTresureEffect(this, v16);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__,
    0);
  if ( !v19 )
LABEL_9:
    sub_1C372B4(touchBlockObj);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0);
}


void MissionListViewManager__StartItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x20
  AvalonSceneManager_o *Instance; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_o **v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  EventRewardRootComponent_o *targetRoot; // x21
  System_Action_o *v22; // x22
  __int64 naturalAligment; // x9
  __int64 v24; // x8
  __int64 v25; // x9
  __int64 v26; // x8
  int32_t v27; // w21
  __int64 v28; // x8
  __int64 v29; // x9
  __int64 v30; // x8
  const MethodInfo *v31; // x4
  int v32; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v36; // x3
  int32_t v37; // w23
  UnityEngine_Object_o *dicRootComponent; // x22
  int64_t userSvtId; // x22
  bool isNew; // w23
  bool Eff; // w0
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v46; // x23
  Il2CppClass *v47; // x24
  const MethodInfo *v48; // x3
  int32_t v49; // w23
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  __int64 v52; // x9
  __int64 v53; // x8
  const MethodInfo *v54; // x5
  __int64 v55; // x8
  __int64 v56; // x9
  __int64 v57; // x8
  const MethodInfo *v58; // x5
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 v64; // x8
  Il2CppObject *v65; // x0
  Il2CppObject *v66; // x21
  const MethodInfo *v67; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  System_Action_o *v69; // x21
  const MethodInfo *v70; // x3
  MasterMissionListViewManager_o *v71; // x0
  System_Action_o *v72; // x1
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // [xsp+0h] [xbp-70h]
  Il2CppObject *v75; // [xsp+8h] [xbp-68h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+10h] [xbp-60h] BYREF
  GetCommandCodes_o *v77; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v78; // [xsp+20h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_4C461B4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C37058(&EventRewardRootComponent_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass74_0_TypeInfo);
    byte_4C461B4 = 1;
  }
  entity = 0;
  v78 = 0;
  data = 0;
  resultEntity = 0;
  v77 = 0;
  v75 = 0;
  v9 = sub_1C372A4(MissionListViewManager___c__DisplayClass74_0_TypeInfo);
  MissionListViewManager___c__DisplayClass74_0___ctor((MissionListViewManager___c__DisplayClass74_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_106;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = afterDetail;
  v13 = (System_Action_o **)(v9 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)afterDetail, v14, v15);
  *(_QWORD *)(v9 + 32) = gifts;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)gifts, v16, v17);
  v19 = *(_QWORD *)(v9 + 32);
  *(_DWORD *)(v9 + 40) = idx;
  if ( !v19 )
    goto LABEL_106;
  if ( *(_DWORD *)(v19 + 24) <= idx )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    if ( AvalonSceneManager__checkNowScene(Instance, 72, 0) && this->fields.isEffect )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      targetRoot = (EventRewardRootComponent_o *)Instance->fields.targetRoot;
      v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v9,
        Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__,
        0);
      if ( !targetRoot )
        goto LABEL_106;
      naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
      if ( targetRoot->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventRewardRootComponent_c *)targetRoot->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1C37574(targetRoot);
        MasterMissionListViewManager__OpenOneResultDialog(v71, v72, v73);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(targetRoot, v22, 0);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v13, v20);
    }
    this->fields.isEffect = 0;
    return;
  }
  if ( this->fields.isTreasureEffect )
  {
    if ( idx )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( !idx && this->fields.isChangeTitleSprite )
LABEL_21:
    MissionListViewManager__CreateDisplayRewardList(this, (GiftEntity_array *)v19, v18);
LABEL_22:
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v19);
  v24 = *(_QWORD *)(v9 + 32);
  if ( !v24 )
    goto LABEL_106;
  v25 = *(int *)(v9 + 40);
  if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 24) )
    goto LABEL_107;
  v26 = *(_QWORD *)(v24 + 8 * v25 + 32);
  if ( !v26 )
    goto LABEL_106;
  v27 = *(_DWORD *)(v26 + 20);
  if ( Gift__IsServant(v27, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
    v28 = *(_QWORD *)(v9 + 32);
    if ( !v28 )
      goto LABEL_106;
    v29 = *(int *)(v9 + 40);
    if ( (unsigned int)v29 < *(_DWORD *)(v28 + 24) )
    {
      v30 = *(_QWORD *)(v28 + 8 * v29 + 32);
      if ( !v30 || !Instance )
        goto LABEL_106;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &entity,
                                           *(_DWORD *)(v30 + 24),
                                           (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_106;
        Instance = (AvalonSceneManager_o *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0);
        if ( !entity )
          goto LABEL_106;
        v32 = (int)Instance;
        Instance = (AvalonSceneManager_o *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0);
        if ( ((v32 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_106;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v81.fields.currentCryptoKey = klass;
          *(_QWORD *)&v81.fields.fakeValue = monitor;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v81, 0);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v37, v36) )
          {
            Instance = (AvalonSceneManager_o *)entity;
            if ( !entity )
              goto LABEL_106;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) )
            {
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_106;
              dicRootComponent = (UnityEngine_Object_o *)Instance[12].fields.dicRootComponent;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(dicRootComponent, 0, 0) )
              {
                Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_106;
                Instance = (AvalonSceneManager_o *)Instance[12].fields.dicRootComponent;
                if ( !Instance )
                  goto LABEL_106;
                MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)Instance, 0);
              }
            }
            this->fields.isEffect = 1;
            Instance = (AvalonSceneManager_o *)data;
            if ( data )
            {
              userSvtId = data->fields.userSvtId;
              isNew = data->fields.isNew;
              Eff = GetSvts__isDoGetEff(data, 0);
LABEL_69:
              MissionListViewManager__StartRewardGetEffect(
                this,
                userSvtId,
                isNew,
                Eff,
                v27,
                *(GiftEntity_array **)(v9 + 32),
                *(_DWORD *)(v9 + 40),
                *(System_Action_o **)(v9 + 24),
                v74);
              return;
            }
LABEL_106:
            sub_1C372B4(Instance);
          }
        }
      }
      goto LABEL_105;
    }
LABEL_107:
    sub_1C372BC(Instance);
  }
  if ( Gift__IsCommandCode(v27, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v42 = *(_QWORD *)(v9 + 32);
    if ( !v42 )
      goto LABEL_106;
    v43 = *(int *)(v9 + 40);
    if ( (unsigned int)v43 < *(_DWORD *)(v42 + 24) )
    {
      v44 = *(_QWORD *)(v42 + 8 * v43 + 32);
      if ( !v44 || !Instance )
        goto LABEL_106;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &v78,
                                           *(_DWORD *)(v44 + 24),
                                           (const MethodInfo_33A10EC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v78 )
          goto LABEL_106;
        getCommandCodeList = this->fields.getCommandCodeList;
        v47 = v78[1].klass;
        v46 = v78[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v82.fields.currentCryptoKey = v47;
        *(_QWORD *)&v82.fields.fakeValue = v46;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v82, 0);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v77, v49, v48) )
        {
          this->fields.isEffect = 1;
          Instance = (AvalonSceneManager_o *)v77;
          if ( v77 )
          {
            userSvtId = v77->fields.userCommandCodeId;
            isNew = v77->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v77, 0);
            goto LABEL_69;
          }
          goto LABEL_106;
        }
      }
      goto LABEL_105;
    }
    goto LABEL_107;
  }
  Instance = (AvalonSceneManager_o *)Gift__IsCostumeRelease(v27, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v51 = *(_QWORD *)(v9 + 32);
    if ( !v51 )
      goto LABEL_106;
    v52 = *(int *)(v9 + 40);
    if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 24) )
      goto LABEL_107;
    v53 = *(_QWORD *)(v51 + 8 * v52 + 32);
    if ( !v53 )
      goto LABEL_106;
    Instance = (AvalonSceneManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         (MissionListViewManager_o *)Instance,
                                         &resultEntity,
                                         *(_DWORD *)(v53 + 24),
                                         v50);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      this->fields.isEffect = 1;
      if ( !resultEntity )
        goto LABEL_106;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        this,
        resultEntity->fields.name,
        *(GiftEntity_array **)(v9 + 32),
        *(_DWORD *)(v9 + 40),
        *(System_Action_o **)(v9 + 24),
        v54);
      return;
    }
LABEL_105:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v9 + 32),
      *(_DWORD *)(v9 + 40) + 1,
      *(System_Action_o **)(v9 + 24),
      v31);
    return;
  }
  if ( !Gift__IsEquip(v27, 0) )
  {
    if ( Gift__IsItem(v27, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
      v62 = *(_QWORD *)(v9 + 32);
      if ( !v62 )
        goto LABEL_106;
      v63 = *(int *)(v9 + 40);
      if ( (unsigned int)v63 < *(_DWORD *)(v62 + 24) )
      {
        v64 = *(_QWORD *)(v62 + 8 * v63 + 32);
        if ( !v64 || !Instance )
          goto LABEL_106;
        v65 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_DWORD *)(v64 + 24),
                (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v65 )
        {
          v66 = v65;
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_106;
          Instance = (AvalonSceneManager_o *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v66[1].klass, 0);
          dispRewardInfoList = this->fields.dispRewardInfoList;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !dispRewardInfoList )
              goto LABEL_106;
            if ( !dispRewardInfoList->fields._size )
            {
              this->fields.isEffect = 1;
              MissionListViewManager__StartRewardItemGetEffect(
                this,
                (int32_t)v66[1].klass,
                *(GiftEntity_array **)(v9 + 32),
                *(_DWORD *)(v9 + 40),
                *(System_Action_o **)(v9 + 24),
                v67);
              return;
            }
          }
          else if ( !dispRewardInfoList )
          {
            goto LABEL_106;
          }
          if ( dispRewardInfoList->fields._size >= 1 )
          {
            v69 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v69,
              (Il2CppObject *)v9,
              Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__,
              0);
            MissionListViewManager__LoadItemGetEffects(this, 0, v69, v70);
            return;
          }
        }
        goto LABEL_105;
      }
      goto LABEL_107;
    }
    goto LABEL_105;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EquipMaster___);
  v55 = *(_QWORD *)(v9 + 32);
  if ( !v55 )
    goto LABEL_106;
  v56 = *(int *)(v9 + 40);
  if ( (unsigned int)v56 >= *(_DWORD *)(v55 + 24) )
    goto LABEL_107;
  v57 = *(_QWORD *)(v55 + 8 * v56 + 32);
  if ( !v57 || !Instance )
    goto LABEL_106;
  Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &v75,
                                       *(_DWORD *)(v57 + 24),
                                       (const MethodInfo_33A10EC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_105;
  this->fields.isEffect = 1;
  v59 = *(_QWORD *)(v9 + 32);
  if ( !v59 )
    goto LABEL_106;
  v60 = *(int *)(v9 + 40);
  if ( (unsigned int)v60 >= *(_DWORD *)(v59 + 24) )
    goto LABEL_107;
  v61 = *(_QWORD *)(v59 + 8 * v60 + 32);
  if ( !v61 )
    goto LABEL_106;
  MissionListViewManager__StartRewardEquipGetEffect(
    this,
    *(_DWORD *)(v61 + 24),
    (GiftEntity_array *)v59,
    v60,
    *v13,
    v58);
}


void MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        MissionListViewManager_o *this,
        System_String_o *name,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x21
  UnityEngine_GameObject_o *touchBlockObj; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v24; // x19
  System_Action_o *v25; // x22

  if ( (byte_4C461B7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass77_0_TypeInfo);
    byte_4C461B7 = 1;
  }
  v11 = sub_1C372A4(MissionListViewManager___c__DisplayClass77_0_TypeInfo);
  MissionListViewManager___c__DisplayClass77_0___ctor((MissionListViewManager___c__DisplayClass77_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_7;
  *(_QWORD *)(v11 + 16) = name;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)name, v13, v14);
  *(_QWORD *)(v11 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v15, v16);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)gifts, v17, v18);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 48), (int32_t)afterDetail, v19, v20);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v24 = (CommonUI_o *)Instance,
        v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0),
        !v24) )
  {
LABEL_7:
    sub_1C372B4(touchBlockObj);
  }
  CommonUI__maskFadeout(v24, FADEOUT_KIND, FADEOUT_TIME, v25, 0);
}


void MissionListViewManager__StartRewardEquipGetEffect(
        MissionListViewManager_o *this,
        int32_t equipId,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x20
  UnityEngine_GameObject_o *touchBlockObj; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  QuestRewardInfo_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _DWORD *v22; // x8
  __int64 v23; // x9
  __int64 v24; // x10
  __int64 v25; // x9
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v29; // x19
  System_Action_o *v30; // x22

  if ( (byte_4C461B6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&QuestRewardInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass76_0_TypeInfo);
    byte_4C461B6 = 1;
  }
  v11 = sub_1C372A4(MissionListViewManager___c__DisplayClass76_0_TypeInfo);
  MissionListViewManager___c__DisplayClass76_0___ctor((MissionListViewManager___c__DisplayClass76_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)gifts, v15, v16);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 48), (int32_t)afterDetail, v17, v18);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  v19 = (QuestRewardInfo_o *)sub_1C372A4(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v19, 0);
  *(_QWORD *)(v11 + 16) = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)v19, v20, v21);
  v22 = *(_DWORD **)(v11 + 16);
  if ( !v22 )
    goto LABEL_11;
  v22[4] = 5;
  v22[5] = equipId;
  v23 = *(_QWORD *)(v11 + 32);
  if ( !v23 )
    goto LABEL_11;
  v24 = *(int *)(v11 + 40);
  if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 24) )
    sub_1C372BC(touchBlockObj);
  v25 = *(_QWORD *)(v23 + 8 * v24 + 32);
  if ( !v25
    || (v22[6] = *(_DWORD *)(v25 + 28),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v29 = (CommonUI_o *)Instance,
        v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__,
          0),
        !v29) )
  {
LABEL_11:
    sub_1C372B4(touchBlockObj);
  }
  CommonUI__maskFadeout(v29, FADEOUT_KIND, FADEOUT_TIME, v30, 0);
}


void MissionListViewManager__StartRewardGetEffect(
        MissionListViewManager_o *this,
        int64_t userSvtID,
        bool isNew,
        bool isDoEffect,
        int32_t giftType,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v17; // x22
  UnityEngine_GameObject_o *touchBlockObj; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v28; // x19
  System_Action_o *v29; // x21

  if ( (byte_4C461B9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass79_0_TypeInfo);
    byte_4C461B9 = 1;
  }
  v17 = sub_1C372A4(MissionListViewManager___c__DisplayClass79_0_TypeInfo);
  MissionListViewManager___c__DisplayClass79_0___ctor((MissionListViewManager___c__DisplayClass79_0_o *)v17, 0);
  if ( !v17 )
    goto LABEL_7;
  *(_DWORD *)(v17 + 16) = giftType;
  *(_QWORD *)(v17 + 24) = userSvtID;
  *(_QWORD *)(v17 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)this, v19, v20);
  *(_BYTE *)(v17 + 40) = isDoEffect;
  *(_BYTE *)(v17 + 41) = isNew;
  *(_QWORD *)(v17 + 48) = gifts;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 48), (int32_t)gifts, v21, v22);
  *(_QWORD *)(v17 + 64) = afterDetail;
  *(_DWORD *)(v17 + 56) = idx;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 64), (int32_t)afterDetail, v23, v24);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v28 = (CommonUI_o *)Instance,
        v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v17,
          Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__,
          0),
        !v28) )
  {
LABEL_7:
    sub_1C372B4(touchBlockObj);
  }
  CommonUI__maskFadeout(v28, FADEOUT_KIND, FADEOUT_TIME, v29, 0);
}


void MissionListViewManager__StartRewardItemGetEffect(
        MissionListViewManager_o *this,
        int32_t itemId,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x20
  CommonUI_o *Instance; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  QuestRewardInfo_o *v20; // x24
  __int64 *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _DWORD *v24; // x8
  __int64 v25; // x9
  __int64 v26; // x10
  __int64 v27; // x9
  int32_t ItemEffectId; // w0
  int32_t v29; // w1
  const MethodInfo *v30; // x4
  int32_t v31; // w1
  intptr_t m_CachedPtr; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v35; // x8
  __int64 v36; // x9
  int v37; // w10
  __int64 v38; // x13
  int v39; // w11
  int v40; // w12
  __int64 v41; // x14
  __int64 v42; // x15
  Il2CppObject *v43; // x19
  AvalonSceneManager_c *v44; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v46; // x21

  if ( (byte_4C461B8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&QuestRewardInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass78_0_TypeInfo);
    byte_4C461B8 = 1;
  }
  v11 = sub_1C372A4(MissionListViewManager___c__DisplayClass78_0_TypeInfo);
  MissionListViewManager___c__DisplayClass78_0___ctor((MissionListViewManager___c__DisplayClass78_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_33;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 40) = gifts;
  v15 = (__int64 *)(v11 + 40);
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 40), (int32_t)gifts, v16, v17);
  *(_DWORD *)(v11 + 48) = idx;
  *(_QWORD *)(v11 + 56) = afterDetail;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 56), (int32_t)afterDetail, v18, v19);
  v20 = (QuestRewardInfo_o *)sub_1C372A4(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v20, 0);
  *(_QWORD *)(v11 + 32) = v20;
  v21 = (__int64 *)(v11 + 32);
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v20, v22, v23);
  v24 = *(_DWORD **)(v11 + 32);
  if ( !v24 )
    goto LABEL_33;
  v24[4] = 2;
  v24[5] = itemId;
  v25 = *(_QWORD *)(v11 + 40);
  if ( !v25 )
    goto LABEL_33;
  v26 = *(int *)(v11 + 48);
  if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 24) )
    goto LABEL_34;
  v27 = *(_QWORD *)(v25 + 8 * v26 + 32);
  if ( !v27 )
    goto LABEL_33;
  v24[6] = *(_DWORD *)(v27 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v11 + 32), 0);
  *(_DWORD *)(v11 + 16) = ItemEffectId;
  v29 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v29,
         (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v11 + 40),
      *(_DWORD *)(v11 + 48) + 1,
      *(System_Action_o **)(v11 + 56),
      v30);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  v31 = *(_DWORD *)(v11 + 16);
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v33 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_33;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      v31,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v31;
  }
  v35 = *v21;
  if ( !*v21 )
    goto LABEL_33;
  *(_DWORD *)(v35 + 24) = 0;
  v36 = *v15;
  if ( !*v15 )
    goto LABEL_33;
  v37 = *(_DWORD *)(v36 + 24);
  if ( v37 >= 1 )
  {
    v38 = *(int *)(v11 + 48);
    v39 = 0;
    v40 = 0;
    v41 = v36 + 8 * v38 + 32;
    while ( v37 != v39 && (unsigned int)v38 < v37 )
    {
      if ( !*(_QWORD *)v41 )
        goto LABEL_33;
      v42 = *(_QWORD *)(v36 + 8LL * v39 + 32);
      if ( !v42 )
        goto LABEL_33;
      if ( *(_DWORD *)(*(_QWORD *)v41 + 24LL) == *(_DWORD *)(v42 + 24) )
      {
        v40 += *(_DWORD *)(v42 + 28);
        *(_DWORD *)(v35 + 24) = v40;
      }
      if ( v37 == ++v39 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1C372BC(Instance);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v44 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v44 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v44->static_fields->DEFAULT_FADE_TIME;
  v46 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__,
    0);
  if ( !v43 )
LABEL_33:
    sub_1C372B4(Instance);
  CommonUI__maskFadeout((CommonUI_o *)v43, 1, DEFAULT_FADE_TIME, v46, 0);
}


void MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_Collections_Generic_List_object__o *dispRewardInfoList; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v18; // x2
  int32_t EffectId; // w0
  int32_t v20; // w1
  __int64 v21; // x2
  __int64 v22; // x3
  const MethodInfo *v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  int32_t v27; // w1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  ScrTerminalListTop_c *v31; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x21
  Il2CppObject *Object_object__51154888; // x21
  UnityEngine_GameObject_o *v36; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardItemAction_o **v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  QuestRewardItemAction_o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  ScrTerminalListTop_c *v44; // x0
  System_String_o *useTreasureGetEffectName; // x22
  QuestRewardItemAction_o *v46; // x21
  __int64 v47; // x8
  CGThumbnailListItem_o *p_titleSpriteName; // x0
  struct System_String_o *overWriteTitleSpriteName; // x1
  QuestRewardItemAction_o *v50; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v54; // x19
  System_Action_o *v55; // x22
  int v56; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C461BF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass85_0_TypeInfo);
    byte_4C461BF = 1;
  }
  v9 = sub_1C372A4(MissionListViewManager___c__DisplayClass85_0_TypeInfo);
  MissionListViewManager___c__DisplayClass85_0___ctor((MissionListViewManager___c__DisplayClass85_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 40) = gifts;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)gifts, v13, v14);
  *(_QWORD *)(v9 + 56) = afterDetail;
  *(_DWORD *)(v9 + 48) = idx;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 56), (int32_t)afterDetail, v15, v16);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Item = System_Collections_Generic_List_object___get_Item(
           dispRewardInfoList,
           0,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
  EffectId = MissionListViewManager__GetItemGetEffectId(this, (QuestRewardInfo_o *)Item, v18);
  *(_DWORD *)(v9 + 16) = EffectId;
  v20 = EffectId;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)dispRewardInfoList,
         v20,
         (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v9 + 40),
      *(_DWORD *)(v9 + 48) + 1,
      *(System_Action_o **)(v9 + 56),
      v23);
    return;
  }
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v27 = *(_DWORD *)(v9 + 16);
  items = dispRewardInfoList->fields._items;
  v29 = Method_System_Collections_Generic_List_int__Add__;
  ++dispRewardInfoList->fields._version;
  if ( !items )
    goto LABEL_36;
  size = dispRewardInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)dispRewardInfoList,
      v27,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    dispRewardInfoList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = v27;
  }
  v31 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v31 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v31->static_fields->ITEM_GET_EFFECT_NAME;
  v56 = *(_DWORD *)(v9 + 16);
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v21, v22, v23, v24, v25, v26);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__Format(ITEM_GET_EFFECT_NAME, v33, 0);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_36;
  v34 = (System_String_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemGetAssetDatas,
                                                                      *(_DWORD *)(v9 + 16),
                                                                      (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              (AssetData_o *)dispRewardInfoList,
                              v34,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__51154888,
                                                                      (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v36 = (UnityEngine_GameObject_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)dispRewardInfoList,
                                                                      0);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)dispRewardInfoList, this->fields.instantiatingPOS, 0);
  GameObjectExtensions__ResetTransform(v36, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v36,
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v9 + 24) = Component_object;
  v38 = (QuestRewardItemAction_o **)(v9 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)Component_object, v39, v40);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v41 = *v38;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                      dispRewardInfoList,
                                                                      (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
  if ( !v41 )
    goto LABEL_36;
  QuestRewardItemAction__Setup_36597772(v41, (QuestRewardInfo_array *)dispRewardInfoList, *(_DWORD *)(v9 + 16) == 0, 0);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(
                                                                      this->fields.overWriteTitleSpriteName,
                                                                      0);
  if ( ((unsigned __int8)dispRewardInfoList & 1) == 0 )
  {
    v50 = *v38;
    if ( !*v38 )
      goto LABEL_36;
    overWriteTitleSpriteName = this->fields.overWriteTitleSpriteName;
    p_titleSpriteName = (CGThumbnailListItem_o *)&v50->fields.titleSpriteName;
    v50->fields.titleSpriteName = overWriteTitleSpriteName;
    goto LABEL_33;
  }
  v44 = ScrTerminalListTop_TypeInfo;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v44 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Equality(useTreasureGetEffectName, v44->static_fields->PRIZE_GET_NORMAL, 0) )
  {
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)ScrTerminalListTop_TypeInfo;
    v46 = *v38;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)ScrTerminalListTop_TypeInfo;
    }
    if ( v46 )
    {
      v47 = *(_QWORD *)&dispRewardInfoList[4].fields._size;
      p_titleSpriteName = (CGThumbnailListItem_o *)&v46->fields.titleSpriteName;
      overWriteTitleSpriteName = *(struct System_String_o **)(v47 + 168);
      v46->fields.titleSpriteName = overWriteTitleSpriteName;
LABEL_33:
      sub_1C36FFC(p_titleSpriteName, (int32_t)overWriteTitleSpriteName, v42, v43);
      goto LABEL_34;
    }
LABEL_36:
    sub_1C372B4(dispRewardInfoList);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  FADEOUT_KIND = this->fields.FADEOUT_KIND;
  FADEOUT_TIME = this->fields.FADEOUT_TIME;
  v54 = (CommonUI_o *)Instance;
  v55 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v9,
    Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
    0);
  if ( !v54 )
    goto LABEL_36;
  CommonUI__maskFadeout(v54, FADEOUT_KIND, FADEOUT_TIME, v55, 0);
}


void MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v17; // x19
  System_Action_o *v18; // x22

  if ( (byte_4C461BA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass80_0_TypeInfo);
    byte_4C461BA = 1;
  }
  v7 = sub_1C372A4(MissionListViewManager___c__DisplayClass80_0_TypeInfo);
  MissionListViewManager___c__DisplayClass80_0___ctor((MissionListViewManager___c__DisplayClass80_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = callCnt;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v11, v12);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v7 + 24) < SLODWORD(getSvtList->max_length) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v17 = (CommonUI_o *)Instance;
    v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v7,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__,
      0);
    if ( v17 )
    {
      CommonUI__maskFadeout(v17, FADEOUT_KIND, FADEOUT_TIME, v18, 0);
      return;
    }
LABEL_9:
    sub_1C372B4(v8);
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
}


void MissionListViewManager__SvtEffCaller(
        MissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  AvalonSceneManager_c *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v12; // x20

  if ( (byte_4C461BB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass81_0_TypeInfo);
    byte_4C461BB = 1;
  }
  v5 = sub_1C372A4(MissionListViewManager___c__DisplayClass81_0_TypeInfo);
  MissionListViewManager___c__DisplayClass81_0___ctor((MissionListViewManager___c__DisplayClass81_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  svtRewardComp = this->fields.svtRewardComp;
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__,
    0);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtRewardComp )
LABEL_8:
    sub_1C372B4(v6);
  ServantRewardAction__Play(svtRewardComp, v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0);
}


bool MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *Master_object; // x0
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  int32_t v8; // w20
  System_String_o *v9; // x0
  int32_t v10; // w21
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  v12 = objectId;
  if ( (byte_4C461BC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C461BC = 1;
  }
  Master_object = System_Int32__ToString((int32_t)&v12, 0);
  if ( !Master_object )
    goto LABEL_8;
  v6 = Master_object;
  v7 = System_String__Substring_63607580(Master_object, 0, Master_object->fields._stringLength - 2, 0);
  v8 = System_Int32__Parse(v7, 0);
  v9 = System_String__Substring(v6, v6->fields._stringLength - 2, 0);
  v10 = System_Int32__Parse(v9, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1C372B4(Master_object);
  return ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, resultEntity, v8, v10, 0);
}


bool MissionListViewManager__TrySetupMissionCondNaviAction(
        MissionListViewManager_o *this,
        MissionListViewItem_o *item,
        System_Action_o **naviAction,
        const MethodInfo *method)
{
  __int64 v7; // x20
  MissionListViewItem_o *Master_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  MissionListViewItem_o **v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x23
  System_Collections_Generic_List_object__o **v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct EventMissionEntity_o *eventMissionEnt; // x8
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  bool v24; // w23
  System_Action_o *v25; // x21
  BalanceConfig_c *v26; // x0
  EventMissionConditionEntity_o *NotClearCondInfo; // x0
  int condType; // w8
  MissionListViewItem_o *v29; // x4
  __int64 *v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *v33; // x8
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  MissionListViewItem_o *v37; // x1
  Il2CppClass **v38; // x0
  System_Action_o *v39; // x0
  intptr_t *v40; // x8
  Il2CppObject *v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 sortIndex; // x10
  __int64 v47; // x8
  System_Action_o *v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C461C4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass90_0_TypeInfo);
    sub_1C37058(&StringLiteral_4571/*"Combine/ServantSkillCombine"*/);
    sub_1C37058(&StringLiteral_4569/*"Combine/ServantEQCombine"*/);
    sub_1C37058(&StringLiteral_4567/*"Combine/ClassBoard"*/);
    sub_1C37058(&StringLiteral_4570/*"Combine/ServantLimitCountUp"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_13166/*"Summon/FRIEND_POINT"*/);
    sub_1C37058(&StringLiteral_4568/*"Combine/ServantCombine"*/);
    byte_4C461C4 = 1;
  }
  entity = 0;
  v7 = sub_1C372A4(MissionListViewManager___c__DisplayClass90_0_TypeInfo);
  MissionListViewManager___c__DisplayClass90_0___ctor((MissionListViewManager___c__DisplayClass90_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_54;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = item;
  v11 = (MissionListViewItem_o **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)item, v12, v13);
  *naviAction = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)naviAction, 0, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *(_QWORD *)(v7 + 32) = v16;
  v17 = (System_Collections_Generic_List_object__o **)(v7 + 32);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v16, v18, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
  if ( !*v11 )
    goto LABEL_54;
  eventMissionEnt = (*v11)->fields.eventMissionEnt;
  if ( !eventMissionEnt || !Master_object )
    goto LABEL_54;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         eventMissionEnt->fields.id,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__) )
  {
    Master_object = (MissionListViewItem_o *)entity;
    if ( entity )
    {
      switch ( HIDWORD(entity[1].klass) )
      {
        case 1:
          v24 = MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v11,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
                  0);
          v25 = 0;
          if ( v24 )
          {
            v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v25,
              (Il2CppObject *)v7,
              Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__,
              0);
          }
          *naviAction = v25;
          sub_1C36FFC((CGThumbnailListItem_o *)naviAction, (int32_t)v25, v22, v23);
          return v24;
        case 2:
          if ( MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
                 (MissionNaviTransitionEntity_o *)entity,
                 *v11,
                 (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
                 0) )
          {
            goto LABEL_42;
          }
          goto LABEL_18;
        case 3:
          if ( !MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v11,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
                  0) )
            goto LABEL_18;
          goto LABEL_42;
        case 4:
          Master_object = (MissionListViewItem_o *)MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem(
                                                     (MissionNaviTransitionEntity_o *)entity,
                                                     *v11,
                                                     0);
          v33 = *v17;
          if ( !*v17 )
            goto LABEL_54;
          items = v33->fields._items;
          v35 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
          ++v33->fields._version;
          if ( !items )
            goto LABEL_54;
          size = v33->fields._size;
          v37 = Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v33->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v37;
            sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v37, v31, v32);
          }
LABEL_42:
          v39 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          v40 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__;
          break;
        default:
          goto LABEL_18;
      }
      goto LABEL_52;
    }
    goto LABEL_54;
  }
LABEL_18:
  v26 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  if ( !v26->static_fields->IsMissionNaviAutoClassify )
    return 0;
  Master_object = *v11;
  if ( !*v11 )
    goto LABEL_54;
  NotClearCondInfo = MissionListViewItem__GetNotClearCondInfo(Master_object, v21);
  if ( !NotClearCondInfo )
    return 0;
  condType = NotClearCondInfo->fields.condType;
  if ( condType > 141 )
  {
    switch ( condType )
    {
      case 187:
        v29 = *v11;
        v30 = &StringLiteral_4567/*"Combine/ClassBoard"*/;
        break;
      case 188:
        goto LABEL_40;
      case 189:
        goto LABEL_29;
      case 190:
        goto LABEL_39;
      default:
        if ( condType == 149 )
          goto LABEL_40;
        if ( condType != 174 )
          return 0;
LABEL_39:
        v29 = *v11;
        v30 = &StringLiteral_4571/*"Combine/ServantSkillCombine"*/;
        break;
    }
LABEL_44:
    v41 = (Il2CppObject *)MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_47923260(
                            (System_String_o *)*v30,
                            0,
                            (System_String_o *)StringLiteral_1/*""*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            v29,
                            0);
    if ( v41 )
    {
      Master_object = (MissionListViewItem_o *)*v17;
      if ( *v17 )
      {
        v44 = *(_QWORD *)&Master_object->fields.selectNum;
        v45 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
        ++Master_object->fields.loopIndex;
        if ( v44 )
        {
          sortIndex = Master_object->fields.sortIndex;
          if ( (unsigned int)sortIndex >= *(_DWORD *)(v44 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              v41,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = v44 + 8 * sortIndex;
            Master_object->fields.sortIndex = sortIndex + 1;
            *(_QWORD *)(v47 + 32) = v41;
            sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v41, v42, v43);
          }
          v39 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          v40 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__;
LABEL_52:
          v48 = v39;
          System_Action___ctor(v39, (Il2CppObject *)v7, *v40, 0);
          *naviAction = v48;
          sub_1C36FFC((CGThumbnailListItem_o *)naviAction, (int32_t)v48, v49, v50);
          return 1;
        }
      }
LABEL_54:
      sub_1C372B4(Master_object);
    }
    return 0;
  }
  v24 = 0;
  if ( condType > 7 )
  {
    if ( condType == 8 )
    {
      v29 = *v11;
      v30 = &StringLiteral_13166/*"Summon/FRIEND_POINT"*/;
      goto LABEL_44;
    }
    if ( condType == 141 )
    {
      v29 = *v11;
      v30 = &StringLiteral_4569/*"Combine/ServantEQCombine"*/;
      goto LABEL_44;
    }
  }
  else
  {
    if ( condType == 6 )
    {
LABEL_40:
      v29 = *v11;
      v30 = &StringLiteral_4568/*"Combine/ServantCombine"*/;
      goto LABEL_44;
    }
    if ( condType == 7 )
    {
LABEL_29:
      v29 = *v11;
      v30 = &StringLiteral_4570/*"Combine/ServantLimitCountUp"*/;
      goto LABEL_44;
    }
  }
  return v24;
}


void MissionListViewManager__Update(MissionListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0);
  MissionListViewManager__UpdateAnim(this, v3);
}


void MissionListViewManager__UpdateAnim(MissionListViewManager_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_rewardIconAlphaCalculator; // x20
  AlphaTransitionCalculator_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  float realtimeSinceStartup; // s0
  float v9; // s0
  float v10; // s0
  float alphaAnimTimeOld; // s9
  float v12; // s8
  MissionListViewManager_c *v13; // x0
  float v14; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v16; // w21
  MissionListViewManager_c *v17; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v19; // w21

  if ( (byte_4C461A5 & 1) == 0 )
  {
    sub_1C37058(&MissionListViewManager_TypeInfo);
    sub_1C37058(&Method_TransitionCalculator_float__Update__);
    byte_4C461A5 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v5 = MissionListViewManager__CreateRewardIconAlphaCalculator(0, method);
    *p_rewardIconAlphaCalculator = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rewardIconAlphaCalculator, (int32_t)v5, v6, v7);
    rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
    if ( !*p_rewardIconAlphaCalculator )
      goto LABEL_24;
    AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !rewardIconAlphaCalculator )
      goto LABEL_24;
  }
  v9 = TransitionCalculator_float___Update(
         (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
         (const MethodInfo_3A66194 *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v9;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0) )
  {
    v10 = UnityEngine_Time__get_realtimeSinceStartup(0);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v12 = v10;
    v13 = MissionListViewManager_TypeInfo;
    if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
      v13 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v12 - alphaAnimTimeOld) >= v13->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
      if ( !*p_rewardIconAlphaCalculator )
        goto LABEL_24;
      AlphaTransitionCalculator__StartFadeOut(rewardIconAlphaCalculator, 0);
    }
  }
  rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
  if ( !*p_rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(rewardIconAlphaCalculator, 0) )
    return;
  rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
  if ( !*p_rewardIconAlphaCalculator )
LABEL_24:
    sub_1C372B4(rewardIconAlphaCalculator);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0);
  v14 = UnityEngine_Time__get_realtimeSinceStartup(0);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v14;
  v16 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v17 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v17 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v17->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v16 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v19 = this->fields.alphaAnimCnt;
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v19 - ALPHA_ANIM_COUNT_RESET_VAL;
  }
  ((void (__fastcall *)(MissionListViewManager_o *, const MethodInfo *))this->klass->vtable._13_OnChangeAlphaAnim.methodPtr)(
    this,
    this->klass->vtable._13_OnChangeAlphaAnim.method);
  this->fields._IsChangeMissionNaviDialogAnim_k__BackingField = 1;
}


void MissionListViewManager__add_callbackFunc2(
        MissionListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MissionListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C461A3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C461A3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  MissionListViewManager__remove_callbackFunc2(v10, v11, v12);
}


float MissionListViewManager__get_AlphaAnimNow(MissionListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


bool MissionListViewManager__get_IsChangeMissionNaviDialogAnim(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChangeMissionNaviDialogAnim_k__BackingField;
}


bool MissionListViewManager__get_IsPlayGetEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isTreasureEffect || this->fields.isChangeTitleSprite;
}


EventMissionEntity_o *MissionListViewManager__get_ReceiveMissionReward(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.missionToRecieve;
}


UnityEngine_GameObject_o *MissionListViewManager__get_TouchBlockObj(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.touchBlockObj;
}


void MissionListViewManager__remove_callbackFunc2(
        MissionListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MissionListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C461A4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C461A4 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  MissionListViewManager__get_ReceiveMissionReward(v10, v11);
}


void MissionListViewManager__set_IsChangeMissionNaviDialogAnim(
        MissionListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChangeMissionNaviDialogAnim_k__BackingField = value;
}


void MissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C469AE & 1) == 0 )
  {
    sub_1C37058(&MissionListViewManager___c_TypeInfo);
    byte_4C469AE = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MissionListViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MissionListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MissionListViewManager___c___ctor(MissionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MissionListViewManager___c___CreateDisplayRewardList_b__84_0(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return !Gift__IsItem_40427128(x->fields.type, 0);
}


bool MissionListViewManager___c___CreateDisplayRewardList_b__84_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return Gift__IsItem_40427128(x->fields.type, 0);
}


void MissionListViewManager___c___SetupMissionCondTransitionConfirmDialog_b__92_0(
        MissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C469AF & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C469AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}


void MissionListViewManager___c__DisplayClass66_0___ctor(
        MissionListViewManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MissionListViewManager___c__DisplayClass66_0___ShowRewardDetailInfo_b__0(
        MissionListViewManager___c__DisplayClass66_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  return entity != this->fields.subGiftEntity;
}


void MissionListViewManager___c__DisplayClass73_0___ctor(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__0(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass73_0_o *v2; // x19
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *_4__this; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v2 = this;
  if ( (byte_4C469B0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1C37058(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__);
    byte_4C469B0 = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  if ( !_4__this )
    sub_1C372B4(this);
  MissionListViewManager__LoadTreasureGetEffect(_4__this, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x0
  struct MissionListViewManager_o *v4; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C469B1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__);
    byte_4C469B1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  MissionListViewManager__SetupTreasureGetEffect(_4__this, _4__this->fields.giftIconId, 0);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_9;
  questRewardBoxAction = v4->fields.questRewardBoxAction;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_1C372B4(_4__this);
  QuestRewardBoxAction__Play(questRewardBoxAction, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__2(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass73_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct MissionListViewManager_o *v5; // x8
  AssetData_o *treasureGetAssetData; // x20

  v2 = this;
  if ( (byte_4C469B2 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C469B2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass73_0_o *)_4__this->fields.questRewardBoxAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_12;
  treasureGetAssetData = v5->fields.treasureGetAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40534712(treasureGetAssetData, 0);
  this = (MissionListViewManager___c__DisplayClass73_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1C372B4(this);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v2->fields.gifts,
    0,
    v2->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass74_0___ctor(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass74_0___StartItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MissionListViewManager__EndItemGetEffectAction(_4__this, this->fields.afterDetail, 0);
}


void MissionListViewManager___c__DisplayClass74_0___StartItemGetEffectAction_b__1(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  _4__this->fields.isEffect = 1;
  MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
    _4__this,
    this->fields.gifts,
    this->fields.idx,
    this->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass75_0___ctor(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass75_0___EndItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8
  MissionListViewManager___c__DisplayClass75_0_o *v3; // x19
  struct System_Action_o *afterDetail; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MissionListViewManager___c__DisplayClass75_0_o *)_4__this->fields.touchBlockObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (afterDetail = v3->fields.afterDetail) == 0) )
  {
    sub_1C372B4(this);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))afterDetail->fields.invoke_impl)(
    afterDetail->fields.method_code,
    afterDetail->fields.method);
}


void MissionListViewManager___c__DisplayClass76_0___ctor(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__0(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__1; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C469B3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__);
    byte_4C469B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__LoadEquipGetEffect(v5, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C469B4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__);
    byte_4C469B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__OpenEquipGetEffect(v5, 0, questRewardInfo, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C469B5 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C469B5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C372B4(Instance);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass77_0___ctor(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__0(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__1; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C469B6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__);
    byte_4C469B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__LoadCostumeReleaseEffect(v5, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x21
  System_String_o *name; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C469B7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__);
    byte_4C469B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__OpenCostumeReleaseEffect(v5, 0, name, _9__2, 23, 0);
}


void MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C469B8 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C469B8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C372B4(Instance);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass78_0___ctor(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass78_0___StartRewardItemGetEffect_b__0(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  MissionInfoMaker_c *v9; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C469B9 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__);
    byte_4C469B9 = 1;
  }
  v9 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v9 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v9->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v2, v3, v4, v5, v6, v7);
  v12 = System_String__Format(ITEM_GET_ASSET_NAME, v11, 0);
  _9__1 = this->fields.__9__1;
  v14 = v12;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v15, v16);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, _9__1, 1, 0);
}


void MissionListViewManager___c__DisplayClass78_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *transform; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  MissionInfoMaker_c *v17; // x0
  AssetData_o *v18; // x21
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v20; // x0
  Il2CppObject *Object_object__51154888; // x21
  UnityEngine_GameObject_o *v22; // x21
  struct MissionListViewManager_o *_4__this; // x8
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  QuestRewardItemAction_o *v27; // x19
  System_Action_o *v28; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C469BA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass78_1_TypeInfo);
    byte_4C469BA = 1;
  }
  v5 = sub_1C372A4(MissionListViewManager___c__DisplayClass78_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = data;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)data, v9, v10);
  v17 = MissionInfoMaker_TypeInfo;
  v18 = *(AssetData_o **)(v5 + 24);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v17 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v17->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v11, v12, v13, v14, v15, v16);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v20, 0);
  if ( !v18 )
    goto LABEL_15;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              v18,
                              transform,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__51154888,
                                   (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_15;
  v22 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0);
  GameObjectExtensions__ResetTransform(v22, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v22,
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Component_object, v25, v26);
  transform = *(System_String_o **)(v5 + 16);
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0),
        v27 = *(QuestRewardItemAction_o **)(v5 + 16),
        v28 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v28,
          (Il2CppObject *)v5,
          Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__,
          0),
        !v27) )
  {
LABEL_15:
    sub_1C372B4(transform);
  }
  QuestRewardItemAction__Play(v27, 0, v28, 0.0, 0, 0);
}


void MissionListViewManager___c__DisplayClass78_1___ctor(
        MissionListViewManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass78_1___StartRewardItemGetEffect_b__2(
        MissionListViewManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mRewardItemAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass78_0_o *CS___8__locals1; // x8

  if ( (byte_4C469BB & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C469BB = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40534712(data, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0 )
LABEL_11:
    sub_1C372B4(mRewardItemAction);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass79_0___ctor(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__0(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C469BC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__);
    byte_4C469BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v5 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  SummonAssetManager__LoadSummonAssets(v5, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  Il2CppObject *v6; // x21
  struct MissionListViewManager_o *v7; // x8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MissionListViewManager_o *v10; // x8
  _BOOL4 isDoEffect; // w24
  ServantRewardAction_o *svtRewardComp; // x20
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v15; // w22
  Il2CppObject v16; // q1
  int64_t v17; // x0
  Il2CppClass *v18; // x8
  int64_t v19; // x21
  bool isNew; // w5
  int32_t v21; // w3
  bool v22; // w6
  int32_t v23; // w7
  ServantRewardAction_o *v24; // x0
  int32_t v25; // w1
  int64_t v26; // x2
  Il2CppObject *v27; // x0
  struct MissionListViewManager_o *v28; // x20
  Il2CppObject *v29; // x21
  struct MissionListViewManager_o *v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct MissionListViewManager_o *v33; // x8
  ServantRewardAction_o *v34; // x20
  Il2CppObject v35; // q1
  bool v36; // w2
  int64_t v37; // x1
  bool v38; // w3
  int32_t v39; // w4
  ServantRewardAction_o *v40; // x0
  Il2CppObject v41; // q1
  int64_t v42; // x0
  Il2CppClass *v43; // x8
  int64_t v44; // x21
  Il2CppObject v45; // q1
  System_Action_o *_9__2; // x21
  MissionListViewManager_o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4C469BD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__);
    byte_4C469BD = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 this->fields.userSvtID,
                 (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v6 = Entity;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v7 = this->fields.__4__this;
      if ( v7 )
      {
        if ( Master_object )
        {
          Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                     (SummonAssetManager_o *)Master_object,
                                     v7->fields.instantiatingPOS,
                                     0,
                                     0);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
            sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.svtRewardComp, Master_object, v8, v9);
            v10 = this->fields.__4__this;
            if ( v10 )
            {
              if ( v6 )
              {
                isDoEffect = this->fields.isDoEffect;
                svtRewardComp = v10->fields.svtRewardComp;
                klass = v6[5].klass;
                monitor = v6[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v55.fields.currentCryptoKey = klass;
                *(_QWORD *)&v55.fields.fakeValue = monitor;
                v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v55, 0);
                if ( isDoEffect )
                {
                  v16 = v6[2];
                  *(Il2CppObject *)&v54.fields.currentCryptoKey = v6[1];
                  *(Il2CppObject *)&v54.fields.fakeValue = v16;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v53 = v54;
                  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v53, 0);
                  v18 = v6[6].klass;
                  *(_QWORD *)&v56.fields.fakeValue = v6[6].monitor;
                  v19 = v17;
                  *(_QWORD *)&v56.fields.currentCryptoKey = v18;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v56, 0);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v21 = Master_object;
                    v22 = 1;
                    v23 = 14;
                    v24 = svtRewardComp;
                    v25 = v15;
                    v26 = v19;
LABEL_37:
                    ServantRewardAction__Setup(v24, v25, v26, v21, 1, isNew, v22, v23, 0);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v41 = v6[2];
                  *(Il2CppObject *)&v54.fields.currentCryptoKey = v6[1];
                  *(Il2CppObject *)&v54.fields.fakeValue = v41;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v52 = v54;
                  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v52, 0);
                  v43 = v6[6].klass;
                  *(_QWORD *)&v57.fields.fakeValue = v6[6].monitor;
                  v44 = v42;
                  *(_QWORD *)&v57.fields.currentCryptoKey = v43;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v57, 0);
                  if ( svtRewardComp )
                  {
                    v21 = Master_object;
                    v23 = 6;
                    v24 = svtRewardComp;
                    v25 = v15;
                    v26 = v44;
                    isNew = 0;
                    v22 = 0;
                    goto LABEL_37;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_1C372B4(Master_object);
  }
  Master_object = Gift__IsCommandCode(this->fields.giftType, 0);
  if ( (Master_object & 1) == 0 )
    goto LABEL_43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_47;
  v27 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          this->fields.userSvtID,
          (const MethodInfo_33A35FC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v28 = this->fields.__4__this;
  v29 = v27;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_47;
  if ( !Master_object )
    goto LABEL_47;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v30->fields.instantiatingPOS,
                             0,
                             0);
  if ( !v28 )
    goto LABEL_47;
  v28->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&v28->fields.svtRewardComp, Master_object, v31, v32);
  v33 = this->fields.__4__this;
  if ( !v33 || !v29 )
    goto LABEL_47;
  v34 = v33->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v35 = v29[2];
    *(Il2CppObject *)&v54.fields.currentCryptoKey = v29[1];
    *(Il2CppObject *)&v54.fields.fakeValue = v35;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v51 = v54;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v51, 0);
    if ( !v34 )
      goto LABEL_47;
    v36 = this->fields.isNew;
    v37 = Master_object;
    v38 = 1;
    v39 = 14;
    v40 = v34;
  }
  else
  {
    v45 = v29[2];
    *(Il2CppObject *)&v54.fields.currentCryptoKey = v29[1];
    *(Il2CppObject *)&v54.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v50 = v54;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v50, 0);
    if ( !v34 )
      goto LABEL_47;
    v37 = Master_object;
    v39 = 6;
    v40 = v34;
    v36 = 0;
    v38 = 0;
  }
  ServantRewardAction__SetupCommandCode_37190948(v40, v37, v36, v38, v39, 0);
LABEL_43:
  _9__2 = this->fields.__9__2;
  v47 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v48, v49);
  }
  if ( !v47 )
    goto LABEL_47;
  MissionListViewManager__SvtEffCaller(v47, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  struct MissionListViewManager_o *_4__this; // x8

  if ( (byte_4C469BE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4C469BE = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0) )
  {
    sub_1C372B4(Instance);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass80_0___ctor(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__0(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v7; // x8
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *v9; // x21
  Il2CppObject *v10; // x20
  struct MissionListViewManager_o *v11; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct MissionListViewManager_o *v14; // x8
  struct GetSvts_array *v15; // x8
  __int64 v16; // x9
  struct MissionListViewManager_o *v17; // x8
  char v18; // w23
  ServantRewardAction_o *svtRewardComp; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x24
  int32_t v22; // w22
  Il2CppObject v23; // q1
  int64_t v24; // x0
  Il2CppClass *v25; // x8
  int64_t v26; // x20
  struct MissionListViewManager_o *v27; // x8
  struct GetSvts_array *v28; // x8
  __int64 v29; // x9
  GetSvts_o *v30; // x8
  Il2CppObject v31; // q1
  int64_t v32; // x0
  Il2CppClass *v33; // x8
  int64_t v34; // x20
  System_Action_o *_9__1; // x21
  MissionListViewManager_o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4C469BF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__);
    byte_4C469BF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_38;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= LODWORD(getSvtList->max_length) )
    goto LABEL_39;
  v7 = getSvtList->m_Items[callCnt];
  if ( !v7 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__long___GetEntity(
             Master_object,
             v7->fields.userSvtId,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v9 = this->fields.__4__this;
  v10 = Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)Master_object,
                                                                  v11->fields.instantiatingPOS,
                                                                  0,
                                                                  0);
  if ( !v9 )
    goto LABEL_38;
  v9->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields.svtRewardComp, (int32_t)Master_object, v12, v13);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_38;
  v15 = v14->fields.getSvtList;
  if ( !v15 )
    goto LABEL_38;
  v16 = this->fields.callCnt;
  if ( (unsigned int)v16 >= LODWORD(v15->max_length) )
LABEL_39:
    sub_1C372BC(Master_object);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v15->m_Items[v16];
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_object, 0);
  v17 = this->fields.__4__this;
  if ( !v17 || !v10 )
    goto LABEL_38;
  v18 = (char)Master_object;
  svtRewardComp = v17->fields.svtRewardComp;
  klass = v10[5].klass;
  monitor = v10[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = klass;
  *(_QWORD *)&v42.fields.fakeValue = monitor;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v42, 0);
  if ( (v18 & 1) == 0 )
  {
    v31 = v10[2];
    *(Il2CppObject *)&v41.fields.currentCryptoKey = v10[1];
    *(Il2CppObject *)&v41.fields.fakeValue = v31;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v39 = v41;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v39, 0);
    v33 = v10[6].klass;
    *(_QWORD *)&v44.fields.fakeValue = v10[6].monitor;
    v34 = v32;
    *(_QWORD *)&v44.fields.currentCryptoKey = v33;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                    v44,
                                                                    0);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v22, v34, (int32_t)Master_object, 1, 0, 0, 2, 0);
      goto LABEL_34;
    }
LABEL_38:
    sub_1C372B4(Master_object);
  }
  v23 = v10[2];
  *(Il2CppObject *)&v41.fields.currentCryptoKey = v10[1];
  *(Il2CppObject *)&v41.fields.fakeValue = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v41;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v40, 0);
  v25 = v10[6].klass;
  *(_QWORD *)&v43.fields.fakeValue = v10[6].monitor;
  v26 = v24;
  *(_QWORD *)&v43.fields.currentCryptoKey = v25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                  v43,
                                                                  0);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_38;
  v28 = v27->fields.getSvtList;
  if ( !v28 )
    goto LABEL_38;
  v29 = this->fields.callCnt;
  if ( (unsigned int)v29 >= LODWORD(v28->max_length) )
    goto LABEL_39;
  v30 = v28->m_Items[v29];
  if ( !v30 || !svtRewardComp )
    goto LABEL_38;
  ServantRewardAction__Setup(svtRewardComp, v22, v26, (int32_t)Master_object, 1, v30->fields.isNew, 1, 10, 0);
LABEL_34:
  _9__1 = this->fields.__9__1;
  v36 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v37, v38);
  }
  if ( !v36 )
    goto LABEL_38;
  MissionListViewManager__SvtEffCaller(v36, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C469C0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__);
    byte_4C469C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MissionListViewManager__StartSvtListGetEffect(_4__this, this->fields.callCnt + 1, this->fields.callback, 0);
}


void MissionListViewManager___c__DisplayClass81_0___ctor(
        MissionListViewManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass81_0___SvtEffCaller_b__0(
        MissionListViewManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass81_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_4C469C1 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass81_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C469C1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass81_0_o *)_4__this->fields.svtRewardComp) == 0 )
    sub_1C372B4(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_71266940(gameObject, 0);
  ActionExtensions__Call(v2->fields.callback, 0);
}


void MissionListViewManager___c__DisplayClass85_0___ctor(
        MissionListViewManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass85_0___StartRewardItemGetEffectAfterTresureEffect_b__0(
        MissionListViewManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  ScrTerminalListTop_c *v9; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C469C2 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__);
    byte_4C469C2 = 1;
  }
  v9 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v9 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v9->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v2, v3, v4, v5, v6, v7);
  v12 = System_String__Format(ITEM_GET_ASSET_NAME, v11, 0);
  _9__1 = this->fields.__9__1;
  v14 = v12;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v15, v16);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, _9__1, 1, 0);
}


void MissionListViewManager___c__DisplayClass85_0___StartRewardItemGetEffectAfterTresureEffect_b__1(
        MissionListViewManager___c__DisplayClass85_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  QuestRewardItemAction_o *mRewardItemAction; // x19
  System_Action_o *v12; // x20

  if ( (byte_4C469C3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__);
    sub_1C37058(&MissionListViewManager___c__DisplayClass85_1_TypeInfo);
    byte_4C469C3 = 1;
  }
  v5 = sub_1C372A4(MissionListViewManager___c__DisplayClass85_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        *(_QWORD *)(v5 + 16) = data,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)data, v9, v10),
        mRewardItemAction = this->fields.mRewardItemAction,
        v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v5,
          Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0),
        !mRewardItemAction) )
  {
    sub_1C372B4(v6);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v12, 0.0, 0, 0);
}


void MissionListViewManager___c__DisplayClass85_1___ctor(
        MissionListViewManager___c__DisplayClass85_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass85_1___StartRewardItemGetEffectAfterTresureEffect_b__2(
        MissionListViewManager___c__DisplayClass85_1_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass85_1_o *v2; // x19
  struct MissionListViewManager___c__DisplayClass85_0_o *CS___8__locals1; // x8
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass85_0_o *v6; // x8

  v2 = this;
  if ( (byte_4C469C4 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass85_1_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C469C4 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass85_1_o *)CS___8__locals1->fields.mRewardItemAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
  data = v2->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40534712(data, 0);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 || (this = (MissionListViewManager___c__DisplayClass85_1_o *)v6->fields.__4__this) == 0 )
LABEL_12:
    sub_1C372B4(this);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v6->fields.gifts,
    v6->fields.idx + 1,
    v6->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass86_0___ctor(
        MissionListViewManager___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass86_0___LoadTreasureGetEffect_b__0(
        MissionListViewManager___c__DisplayClass86_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  _4__this->fields.treasureGetAssetData = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.treasureGetAssetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void MissionListViewManager___c__DisplayClass89_0___ctor(
        MissionListViewManager___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass89_0___LoadItemGetEffects_b__0(
        MissionListViewManager___c__DisplayClass89_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass89_0_o *v4; // x19
  struct MissionListViewManager_o *_4__this; // x8

  v4 = this;
  if ( (byte_4C469C5 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass89_0_o *)sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__);
    byte_4C469C5 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass89_0_o *)_4__this->fields.itemGetAssetDatas) == 0
    || (System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (Il2CppObject *)data,
          (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass89_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  MissionListViewManager__LoadItemGetEffects((MissionListViewManager_o *)this, v4->fields.idx + 1, v4->fields.endAct, 0);
}


void MissionListViewManager___c__DisplayClass90_0___ctor(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__0(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0);
}


void MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__1(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0);
}


void MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__2(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0);
}


void MissionListViewManager___c__DisplayClass91_0___ctor(
        MissionListViewManager___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass91_0___SetupMissionCondTransitionDialog_b__0(
        MissionListViewManager___c__DisplayClass91_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C469C6 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C469C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  if ( isDecide )
    ActionExtensions__Call(this->fields.decideAction, 0);
}