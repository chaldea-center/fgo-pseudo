void MissionListViewManager___cctor(const MethodInfo *method)
{
  struct MissionListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4D34448 & 1) == 0 )
  {
    sub_1C93AD4(&MissionListViewManager_TypeInfo);
    byte_4D34448 = 1;
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  AvalonSceneManager_c *v17; // x0

  if ( (byte_4D34447 & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    byte_4D34447 = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.rewardItemGetEffectPlayList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dispRewardInfoList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.FADEOUT_KIND = 1;
  v17 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v17->static_fields->DEFAULT_FADE_TIME);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D34430 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34430 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void MissionListViewManager__CloseItemDetail(MissionListViewManager_o *this, bool isDecide, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D3442E & 1) == 0 )
  {
    sub_1C93AD4(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3442E = 1;
  }
  v3 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_MissionListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D3442F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3442F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  MissionListViewManager___c_c *v17; // x0
  System_Func_object__bool__o *_9__84_1; // x22
  Il2CppObject *v19; // x23
  struct MissionListViewManager___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_object__o *v28; // x23
  struct System_Collections_Generic_List_QuestRewardInfo__o **p_dispRewardInfoList; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  MissionListViewManager_o *ItemEffect; // x0
  __int64 v37; // x1
  int max_length; // w8
  __int64 v39; // x23
  GiftEntity_o **m_Items; // x28
  GiftEntity_o *v41; // x8
  const MethodInfo *v42; // x2
  QuestRewardInfo_o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  GiftEntity_o *v50; // x8
  int32_t size; // w27
  const char *m_CachedPtr; // x8
  _QWORD *v53; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const char *v55; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D3443D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_GiftEntity___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C93AD4(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    sub_1C93AD4(&MissionListViewManager_TypeInfo);
    sub_1C93AD4(&QuestRewardInfo_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__);
    sub_1C93AD4(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__);
    sub_1C93AD4(&MissionListViewManager___c_TypeInfo);
    byte_4D3443D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
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
    _9__84_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__84_0,
      v9,
      Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__,
      0);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__84_0 = (struct System_Func_GiftEntity__bool__o *)_9__84_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__84_0,
      (int32_t)_9__84_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( BasicHelper__Any_object__51960868(
         (System_Object_array *)gifts,
         (System_Func_T__bool__o *)_9__84_0,
         (const MethodInfo_318DC24 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v17 = MissionListViewManager___c_TypeInfo;
    if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
      v17 = MissionListViewManager___c_TypeInfo;
    }
    _9__84_1 = (System_Func_object__bool__o *)v17->static_fields->__9__84_1;
    if ( !_9__84_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = MissionListViewManager___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__84_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__84_1,
        v19,
        Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__,
        0);
      v20 = MissionListViewManager___c_TypeInfo->static_fields;
      v20->__9__84_1 = (struct System_Func_GiftEntity__bool__o *)_9__84_1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v20->__9__84_1, (int32_t)_9__84_1, v21, v22, v23, v24, v25, v26);
    }
    v27 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)gifts,
            (System_Func_TSource__bool__o *)_9__84_1,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    gifts = (GiftEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                  v27,
                                  (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  p_dispRewardInfoList = &this->fields.dispRewardInfoList;
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v28;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dispRewardInfoList,
    (int32_t)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( !gifts )
    goto LABEL_43;
  max_length = gifts->max_length;
  if ( max_length >= 1 )
  {
    v39 = 0;
    m_Items = gifts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v39 >= max_length )
LABEL_44:
        sub_1C93D34(ItemEffect);
      v41 = m_Items[v39];
      if ( !v41 || !v7 )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v7,
                                                 &entity,
                                                 v41->fields.objectId,
                                                 (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   (int32_t)entity[1].klass,
                                                   v42);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v43 = (QuestRewardInfo_o *)sub_1C93D20(QuestRewardInfo_TypeInfo);
          QuestRewardInfo___ctor(v43, 0);
          if ( !v43 )
            break;
          v43->fields.type = 2;
          if ( !entity )
            break;
          v43->fields.objectId = (int32_t)entity[1].klass;
          if ( (unsigned int)v39 >= LODWORD(gifts->max_length) )
            goto LABEL_44;
          v50 = m_Items[v39];
          if ( !v50 )
            break;
          v43->fields.num = v50->fields.num;
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
            v53 = Method_System_Collections_Generic_List_QuestRewardInfo__Add__;
            ++HIDWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *((_DWORD *)m_CachedPtr + 6) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ItemEffect,
                (Il2CppObject *)v43,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v55 = &m_CachedPtr[8 * m_CancellationTokenSource_low];
              LODWORD(ItemEffect->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *((_QWORD *)v55 + 4) = v43;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v55 + 32), (int32_t)v43, v44, v45, v46, v47, v48, v49);
            }
          }
        }
      }
      max_length = gifts->max_length;
      if ( (int)++v39 >= max_length )
        return;
    }
LABEL_43:
    sub_1C93D2C(ItemEffect, v37);
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

  if ( (byte_4D34425 & 1) == 0 )
  {
    sub_1C93AD4(&AlphaTransitionCalculator_TypeInfo);
    sub_1C93AD4(&MissionListViewManager_TypeInfo);
    byte_4D34425 = 1;
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
  v5 = (AlphaTransitionCalculator_o *)sub_1C93D20(AlphaTransitionCalculator_TypeInfo);
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  int v27; // w9
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w2
  int v42; // w9
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  Il2CppObject *value; // x21
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v46; // x8
  CommonUI_o *v47; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v49; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4D34434 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass75_0_TypeInfo);
    byte_4D34434 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v5 = sub_1C93D20(MissionListViewManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = afterDetail;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)afterDetail, v14, v15, v16, v17, v18, v19);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_22;
  v27 = rewardItemGetEffectPlayList->fields._version + 1;
  rewardItemGetEffectPlayList->fields._size = 0;
  rewardItemGetEffectPlayList->fields._version = v27;
  this->fields.questRewardBoxAction = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.questRewardBoxAction, 0, v20, v21, v22, v23, v24, v25);
  this->fields.isTreasureEffect = 0;
  this->fields.isChangeTitleSprite = 0;
  this->fields.useTreasureGetEffectName = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.useTreasureGetEffectName, 0, v28, v29, v30, v31, v32, v33);
  this->fields.overWriteTitleSpriteName = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.overWriteTitleSpriteName, 0, v34, v35, v36, v37, v38, v39);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_22;
  size = dispRewardInfoList->fields._size;
  v42 = dispRewardInfoList->fields._version + 1;
  dispRewardInfoList->fields._size = 0;
  dispRewardInfoList->fields._version = v42;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)dispRewardInfoList->fields._items, 0, size, 0);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
         (const MethodInfo_34BCA34 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__) >= 1 )
  {
    v6 = this->fields.itemGetAssetDatas;
    if ( !v6 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v50,
      (System_Collections_Generic_Dictionary_int__object__o *)v6,
      (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v50,
              (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
    {
      value = v50.fields._current.fields.value;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_41247948((AssetData_o *)value, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v50,
      (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    v6 = this->fields.itemGetAssetDatas;
    if ( !v6 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)v6,
      (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v46 = AvalonSceneManager_TypeInfo;
  v47 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v46 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v46->static_fields->DEFAULT_FADE_TIME;
  v49 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__,
    0);
  if ( !v47 )
LABEL_22:
    sub_1C93D2C(v6, v7);
  CommonUI__maskFadein(v47, DEFAULT_FADE_TIME, v49, 0);
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
  if ( (byte_4D34441 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    this = (MissionListViewManager_o *)sub_1C93AD4(&StringLiteral_19100/*"effectId"*/);
    byte_4D34441 = 1;
  }
  entity = 0;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0) )
  {
    this = (MissionListViewManager_o *)Gift__IsItem_41140044(rewardInfo->fields.type, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    dispRewardInfoList = v4->fields.dispRewardInfoList;
    if ( !dispRewardInfoList )
      goto LABEL_19;
    if ( dispRewardInfoList->fields._size > 1 )
      return 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_19100/*"effectId"*/, 0, 0);
LABEL_19:
    sub_1C93D2C(this, rewardInfo);
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
        const MethodInfo_322CCB0 *method)
{
  const MethodInfo_322CCB0_RGCTXs *rgctx_data; // x19
  size_t actualSize; // x21
  long double v6; // q0
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_TObject__o *v8; // x19
  __int64 v9; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x25
  _BOOL8 v12; // x0
  __int64 v13; // x1
  MethodInfo *_2_UnityEngine_GameObject_GetComponent_TObject; // x1
  void (*methodPointer)(); // x0
  void *v16; // x0
  __int64 v17; // x1
  const MethodInfo_322CCB0_RGCTXs *v18; // x8
  struct System_Collections_Generic_List_T__o *v19; // x4
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x1
  Il2CppMethodPointer v21; // x0
  __int64 v23; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-20h] BYREF
  __int64 v26; // [xsp+38h] [xbp-8h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C69BC4();
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_3_TObject->_2.actualSize;
  memset(&v25, 0, sizeof(v25));
  memset((char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (*(&rgctx_data->_0_System_Collections_Generic_List_TObject_->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C69B68(v6);
  v8 = (System_Collections_Generic_List_TObject__o *)sub_1C93D20(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v12 )
    {
      if ( !current )
        sub_1C93D2C(v12, v13);
      _2_UnityEngine_GameObject_GetComponent_TObject = method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_;
      methodPointer = _2_UnityEngine_GameObject_GetComponent_TObject->methodPointer;
      v24.fields._list = (struct System_Collections_Generic_List_T__o *)((char *)&v23
                                                                       - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _2_UnityEngine_GameObject_GetComponent_TObject->invoker_method(
        methodPointer,
        _2_UnityEngine_GameObject_GetComponent_TObject,
        current,
        (void **)&v24.fields._list,
        v24.fields._list);
      memcpy(
        (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL),
        actualSize);
      v16 = memcpy(
              (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              (char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              actualSize);
      if ( !v8 )
        sub_1C93D2C(v16, v17);
      v18 = method->rgctx_data;
      v19 = (struct System_Collections_Generic_List_T__o *)((char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      if ( (v18->_3_TObject->_1.byval_arg.bits & 0x80000000) == 0 )
        v19 = *(struct System_Collections_Generic_List_T__o **)((char *)&v23 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_TObject__Add = v18->_4_System_Collections_Generic_List_TObject__Add;
      v21 = _4_System_Collections_Generic_List_TObject__Add->methodPointer;
      v24.fields._list = v19;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_TObject__o *, System_Collections_Generic_List_Enumerator_object__o *))_4_System_Collections_Generic_List_TObject__Add->invoker_method)(
        v21,
        _4_System_Collections_Generic_List_TObject__Add,
        v8,
        &v24);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return v8;
}


System_Collections_Generic_List_TObject__o *MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_322CA60 *method)
{
  long double v2; // q0
  const MethodInfo_322CA60_RGCTXs *rgctx_data; // x8
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C69BC4();
      rgctx_data = method->rgctx_data;
    }
  }
  memset(&v27, 0, sizeof(v27));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (*(&rgctx_data->_0_System_Collections_Generic_List_TObject_->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C69B68(v2);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(_0_System_Collections_Generic_List_TObject);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v11 )
    {
      if ( !current )
        sub_1C93D2C(v11, v12);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      v20 = Component_object;
      if ( !v7 )
        sub_1C93D2C(Component_object, Component_object);
      items = v7->fields._items;
      _4_System_Collections_Generic_List_TObject__Add = method->rgctx_data->_4_System_Collections_Generic_List_TObject__Add;
      ++v7->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          Component_object,
          (const MethodInfo_387999C *)_4_System_Collections_Generic_List_TObject__Add->klass->rgctx_data[14].rgctxDataDummy);
      }
      else
      {
        v24 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v20, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_TObject__o *)v7;
}


bool MissionListViewManager__IsExcludeGetItemEffect(
        MissionListViewManager_o *this,
        int32_t targetItemId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *EventItemNotDispItemGetEffect; // x8
  __int64 v6; // x1
  int max_length; // w9
  bool v8; // w10
  int i; // w11

  if ( (byte_4D34431 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D34431 = 1;
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
        sub_1C93D2C(v4, v6);
    }
    max_length = EventItemNotDispItemGetEffect->max_length;
    v8 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v8 = max_length == i )
      {
        if ( max_length == i )
          sub_1C93D34(v4);
        if ( EventItemNotDispItemGetEffect->m_Items[i] == targetItemId )
          break;
        ++i;
      }
    }
    LOBYTE(EventItemNotDispItemGetEffect) = !v8;
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
  __int64 v9; // x1
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
  int32_t v22; // w8
  System_Collections_Generic_Dictionary_int__object__o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v31; // x2
  unsigned int EffectId; // w0
  ScrTerminalListTop_c *v33; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v35; // x0
  System_String_o *v36; // x19
  AssetLoader_LoadEndDataHandler_o *v37; // x21
  int v38; // [xsp+Ch] [xbp-34h] BYREF

  while ( 1 )
  {
    v4 = endAct;
    v5 = idx;
    v6 = this;
    if ( (byte_4D34442 & 1) == 0 )
    {
      sub_1C93AD4(&AssetManager_TypeInfo);
      sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__);
      sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      sub_1C93AD4(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      sub_1C93AD4(&int_TypeInfo);
      sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
      sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
      sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
      sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
      sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__);
      sub_1C93AD4(&MissionListViewManager___c__DisplayClass89_0_TypeInfo);
      byte_4D34442 = 1;
    }
    v7 = sub_1C93D20(MissionListViewManager___c__DisplayClass89_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !v7
      || (*(_QWORD *)(v7 + 16) = v6,
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)v6, v10, v11, v12, v13, v14, v15),
          *(_QWORD *)(v7 + 32) = v4,
          *(_DWORD *)(v7 + 28) = v5,
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v4, v16, v17, v18, v19, v20, v21),
          (dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList) == 0) )
    {
LABEL_17:
      sub_1C93D2C(dispRewardInfoList, v9);
    }
    v22 = *(_DWORD *)(v7 + 28);
    if ( v22 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
      return;
    }
    if ( !v22 )
    {
      v23 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v23,
        (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v6->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v23;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v6->fields.itemGetAssetDatas,
        (int32_t)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_17;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             dispRewardInfoList,
             *(_DWORD *)(v7 + 28),
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    EffectId = MissionListViewManager__GetItemGetEffectId(v6, (QuestRewardInfo_o *)Item, v31);
    *(_DWORD *)(v7 + 24) = EffectId;
    v9 = EffectId;
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.itemGetAssetDatas;
    if ( !dispRewardInfoList )
      goto LABEL_17;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)dispRewardInfoList,
            v9,
            (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v7 + 32);
    this = v6;
    idx = *(_DWORD *)(v7 + 28) + 1;
  }
  v33 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v33 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v33->static_fields->ITEM_GET_ASSET_NAME;
  v38 = *(_DWORD *)(v7 + 24);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v36 = System_String__Format(ITEM_GET_ASSET_NAME, v35, 0);
  v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v36, v37, 1, 0);
}


void MissionListViewManager__LoadTreasureGetEffect(
        MissionListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_String_o *v20; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x20

  if ( (byte_4D3443F & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass86_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_5921/*"Effect/Talk/"*/);
    byte_4D3443F = 1;
  }
  v5 = sub_1C93D20(MissionListViewManager___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAct;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)endAct, v14, v15, v16, v17, v18, v19);
  v20 = System_String__Concat_64425724((System_String_o *)StringLiteral_5921/*"Effect/Talk/"*/, this->fields.useTreasureGetEffectName, 0);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v20, v21, 1, 0);
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D34429 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34429 = 1;
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
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
          if ( callbackFunc2 )
            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
              callbackFunc2->fields.method_code,
              callbackFunc2->fields.method);
          return;
        }
      }
LABEL_20:
      sub_1C93D2C(gameObject, v7);
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
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-28h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_4D3442C & 1) == 0 )
  {
    sub_1C93AD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&MissionInfoMaker_TypeInfo);
    this = (MissionListViewManager_o *)sub_1C93AD4(&Method_MissionListViewManager_CloseItemDetail__);
    byte_4D3442C = 1;
  }
  resultEntity = 0;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v6 = resultEntity;
    v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C93D20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v7, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenCostumeReleaseDetail(v6, v7, 0);
  }
}


void MissionListViewManager__OpenEquipDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3442D & 1) == 0 )
  {
    sub_1C93AD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C93AD4(&MissionInfoMaker_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3442D = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EquipMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v6);
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v7 = entity;
    v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C93D20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenEquipDetail((EquipEntity_o *)v7, v8, 0);
  }
}


void MissionListViewManager__RequestInto(MissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_TObject__o *ObjectList_object; // x0
  __int64 v4; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v6; // x20
  int v7; // w24
  int32_t v8; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v10; // x23
  const MethodInfo *v11; // x4

  if ( (byte_4D34428 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    sub_1C93AD4(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_1C93AD4(&Method_MissionListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D34428 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_322CA60 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_13:
    sub_1C93D2C(ObjectList_object, v4);
  size = ObjectList_object->fields._size;
  v6 = (System_Collections_Generic_List_object__o *)ObjectList_object;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v7 = 0;
  v8 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v6,
             v8,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v7;
      MissionListViewObject__Init((MissionListViewObject_o *)Item, 4, v10, this->fields.listInDelay, 1, v11);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v8;
  }
  while ( v8 < v6->fields._size );
  if ( !v7 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
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
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D34427 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_1C93AD4(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_1C93AD4(&Method_MissionListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D34427 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList_object = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetObjectList_object_(
                                                                     this,
                                                                     (const MethodInfo_322CA60 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_1C93D2C(0, v8);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList_object,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v11, delay, 1, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void MissionListViewManager__RequestListObject_48620156(
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_48619796(this, mode, v10);
}


void MissionListViewManager__SetMode_48619796(MissionListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t v9; // w1

  if ( (byte_4D34426 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_11432/*"RequestInto"*/);
    byte_4D34426 = 1;
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
        sub_1C93D2C(gameObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11432/*"RequestInto"*/,
      0.0,
      0);
  }
  else if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 3 )
      v9 = 3;
    else
      v9 = 2;
    MissionListViewManager__RequestListObject(this, v9, 0.0, v5);
  }
}


void MissionListViewManager__SetMode_48620100(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_48619796(this, mode, v11);
}


void MissionListViewManager__SetObjectItem(
        MissionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  MissionListViewManager_o *v6; // x20
  __int64 naturalAligment; // x10
  int32_t v8; // w1

  v6 = this;
  if ( (byte_4D3442A & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_1C93AD4(&MissionListViewObject_TypeInfo);
    byte_4D3442A = 1;
  }
  if ( !obj
    || (naturalAligment = MissionListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MissionListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v6->fields.initMode == 3 )
    v8 = 3;
  else
    v8 = 2;
  MissionListViewObject__Init((MissionListViewObject_o *)obj, v8, 0, 0.0, 1, v4);
}


void MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_c *v3; // x0
  float DEFAULT_FADE_TIME; // s0

  if ( (byte_4D3443C & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    byte_4D3443C = 1;
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
  __int64 v6; // x1
  GiftAddEntity_o *ValidPriorDataById; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  GiftAddEntity_o *v14; // x21
  int32_t giftId; // w8
  int giftIconId; // w20
  ScrTerminalListTop_c *v17; // x0
  __int64 v18; // x9
  struct System_String_o *v19; // x1
  struct System_String_o *OverwriteTreasureEffectId; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4D34446 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GiftAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    byte_4D34446 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GiftAddMaster___);
  if ( !eventMissionEntity || !Master_object )
    goto LABEL_30;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(
                         (GiftAddMaster_o *)Master_object,
                         eventMissionEntity->fields.giftId,
                         0);
  v14 = ValidPriorDataById;
  if ( ValidPriorDataById )
  {
    if ( ValidPriorDataById->fields.priority > 1 )
    {
      giftId = ValidPriorDataById->fields.giftId;
      if ( giftId == eventMissionEntity->fields.giftId && ValidPriorDataById->fields.priorGiftId != giftId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GiftAddMaster___);
        if ( Master_object )
        {
          v14 = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Master_object, v14->fields.priorGiftId, 0);
          goto LABEL_15;
        }
LABEL_30:
        sub_1C93D2C(Master_object, v6);
      }
    }
  }
LABEL_15:
  giftIconId = eventMissionEntity->fields.giftIconId;
  this->fields.giftIconId = giftIconId;
  if ( giftIconId >= 1 )
  {
    v17 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v17 = ScrTerminalListTop_TypeInfo;
    }
    v18 = 160;
    if ( giftIconId < 4 )
      v18 = 152;
    v19 = *(struct System_String_o **)((char *)&v17->static_fields->WAR_CLEAR_TITLE_SIZE + v18);
    this->fields.useTreasureGetEffectName = v19;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.useTreasureGetEffectName,
      (int32_t)v19,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( v14 )
  {
    OverwriteTreasureEffectId = GiftAddEntity__GetOverwriteTreasureEffectId(v14, 0);
    if ( !OverwriteTreasureEffectId )
      OverwriteTreasureEffectId = this->fields.useTreasureGetEffectName;
    this->fields.useTreasureGetEffectName = OverwriteTreasureEffectId;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.useTreasureGetEffectName,
      (int32_t)OverwriteTreasureEffectId,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = GiftAddEntity__GetOverWriteTitleSprite(v14, 0);
    this->fields.overWriteTitleSpriteName = v27;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.overWriteTitleSpriteName,
      (int32_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
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
  __int64 v8; // x1
  MissionListViewManager___c_c *v9; // x8
  CommonUI_o *v10; // x22
  System_Action_o *_9__92_0; // x23
  Il2CppObject *v12; // x24
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D34445 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__);
    sub_1C93AD4(&MissionListViewManager___c_TypeInfo);
    byte_4D34445 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = MissionListViewManager___c_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
    v9 = MissionListViewManager___c_TypeInfo;
  }
  _9__92_0 = v9->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = MissionListViewManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__92_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__92_0,
      v12,
      Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__,
      0);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = _9__92_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__92_0,
      (int32_t)_9__92_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v10 )
    sub_1C93D2C(Instance, v8);
  CommonUI__OpenMissionNaviTransitionConfirmDialog(v10, listViewItem, this, 1, challengeBoardItemList, _9__92_0, 0);
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_String_o *v17; // x22
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  System_String_o *v20; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v22; // x25

  if ( (byte_4D34444 & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass91_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_8739/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_8743/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_8741/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8742/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/);
    byte_4D34444 = 1;
  }
  v8 = sub_1C93D20(MissionListViewManager___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = decideAction;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)decideAction, v11, v12, v13, v14, v15, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8743/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( System_String__IsNullOrEmpty(confirmDialogMessage, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8741/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, 0);
    confirmDialogMessage = System_String__Format(v18, (Il2CppObject *)moveTo, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8739/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, 0);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8742/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__,
    0);
  if ( !Instance )
LABEL_14:
    sub_1C93D2C(v9, v10);
  CommonUI__OpenConfirmDialog_31580988((CommonUI_o *)Instance, v17, confirmDialogMessage, v20, v19, 1, v22, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void MissionListViewManager__SetupTreasureGetEffect(
        MissionListViewManager_o *this,
        int32_t itemIconId,
        const MethodInfo *method)
{
  AssetData_o *treasureGetAssetData; // x0
  Il2CppObject *Object_object__51927708; // x21
  UnityEngine_GameObject_o *v7; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardBoxAction_o **p_questRewardBoxAction; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *useTreasureGetEffectName; // x22
  ScrTerminalListTop_c *v17; // x0
  ScrTerminalListTop_c *v18; // x0
  System_String_o *v19; // x20
  int32_t v20; // w1

  if ( (byte_4D34440 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    byte_4D34440 = 1;
  }
  treasureGetAssetData = this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_21;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              treasureGetAssetData,
                              this->fields.useTreasureGetEffectName,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  treasureGetAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                          Object_object__51927708,
                                          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  p_questRewardBoxAction = &this->fields.questRewardBoxAction;
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRewardBoxAction,
    (int32_t)Component_object,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !this->fields.isTreasureEffect )
    goto LABEL_15;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v17 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v17 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v17->static_fields->PRIZE_GET_NORMAL, 0) )
  {
    v18 = ScrTerminalListTop_TypeInfo;
    v19 = this->fields.useTreasureGetEffectName;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v18 = ScrTerminalListTop_TypeInfo;
    }
    treasureGetAssetData = (AssetData_o *)System_String__op_Inequality(v19, v18->static_fields->TREASURE_GET_NORMAL, 0);
  }
  else
  {
LABEL_15:
    treasureGetAssetData = (AssetData_o *)(&dword_0 + 1);
  }
  if ( !*p_questRewardBoxAction )
LABEL_21:
    sub_1C93D2C(treasureGetAssetData, *(_QWORD *)&itemIconId);
  if ( itemIconId == 3 )
    v20 = 2;
  else
    v20 = itemIconId == 2;
  QuestRewardBoxAction__Setup(*p_questRewardBoxAction, v20, (unsigned __int8)treasureGetAssetData & 1, 0);
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
  __int64 v10; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v13; // x8
  GiftMaster_o *v14; // x21
  __int64 v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Func_object__bool__o *v22; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  unsigned int MasterName_k__BackingField; // w9
  int v25; // w8
  GiftEntity_o *v26; // x20
  int32_t type; // w0
  Il2CppObject *Entity; // x20
  Il2CppObject *v29; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v30; // x22
  Il2CppObject *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v34; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v35; // x23
  GiftMaster_o *v36; // x22
  bool IsServantEquip; // w23
  Il2CppObject *v38; // x21
  ServantStatusDialog_EndDelegate_o *v39; // x22
  Il2CppObject *v40; // x20
  Il2CppObject *v41; // x21
  ServantStatusDialog_EndDelegate_o *v42; // x22
  const MethodInfo *v43; // x2
  struct System_String_o *v44; // x20
  __int64 v45; // x23
  int32_t v46; // w20
  ServantStatusDialog_EndDelegate_o *v47; // x22
  const MethodInfo *v48; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4D3442B & 1) == 0 )
  {
    sub_1C93AD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C93AD4(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C93AD4(&MissionInfoMaker_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager_CloseCommandCodeDetail__);
    sub_1C93AD4(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1C93AD4(&Method_MissionListViewManager_CloseServantStatusDetail__);
    sub_1C93AD4(&Method_MissionListViewManager_ShowRewardDetailInfo__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass66_0_TypeInfo);
    byte_4D3442B = 1;
  }
  v7 = Method_MissionListViewManager_ShowRewardDetailInfo__;
  if ( (*((_BYTE *)Method_MissionListViewManager_ShowRewardDetailInfo__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C93AEC(Method_MissionListViewManager_ShowRewardDetailInfo__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  if ( !selectItem )
    goto LABEL_52;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_52;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v34 = (CommonUI_o *)Instance;
    v35 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C93D20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v35,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0);
    if ( !v34 )
      goto LABEL_52;
    CommonUI__OpenItemDetailDialog_31657344(v34, nameTxt, rewardExtraDetailTxt, v35, 0);
  }
  else if ( rewardType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GiftMaster___);
    v13 = selectItem->fields.eventMissionEnt;
    if ( !v13 || !Master_object )
      goto LABEL_52;
    Master_object = (GiftMaster_o *)GiftMaster__GetGiftListById(Master_object, v13->fields.giftId, 0);
    v14 = Master_object;
    if ( ignoreSubGiftEntity )
    {
      v15 = sub_1C93D20(MissionListViewManager___c__DisplayClass66_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      Master_object = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity((GiftEntity_array *)v14, 0);
      if ( !v15 )
        goto LABEL_52;
      *(_QWORD *)(v15 + 16) = Master_object;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)Master_object, v16, v17, v18, v19, v20, v21);
      v22 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v22,
        (Il2CppObject *)v15,
        Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__,
        0);
      v23 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v14,
              (System_Func_TSource__bool__o *)v22,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      Master_object = (GiftMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                        v23,
                                        (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v14 = Master_object;
    }
    if ( !v14 )
      goto LABEL_52;
    MasterName_k__BackingField = (unsigned int)v14->fields._MasterName_k__BackingField;
    v25 = this->fields.alphaAnimCnt % (int)MasterName_k__BackingField;
    if ( v25 >= MasterName_k__BackingField )
      sub_1C93D34(Master_object);
    v26 = (GiftEntity_o *)*((_QWORD *)&v14->fields.revision + v25);
    if ( !v26 )
      goto LABEL_52;
    type = v26->fields.type;
    if ( type == 2 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   v26->fields.objectId,
                   (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v30 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C93D20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v30,
          (Il2CppObject *)this,
          (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
          0);
        if ( v29 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v29, (ItemEntity_o *)Entity, v30, 50, 0);
          return;
        }
      }
LABEL_52:
      sub_1C93D2C(Master_object, v10);
    }
    if ( Gift__IsServant(type, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_52;
      Master_object = (GiftMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v26->fields.objectId,
                                        (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_52;
      v36 = Master_object;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_object, 0);
      v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v39 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v39,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0);
        if ( !v38 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_31594436((CommonUI_o *)v38, 7, v26, v39, 0);
      }
      else
      {
        v45 = *(_QWORD *)&v36->fields._MasterKind_k__BackingField;
        v44 = v36->fields._MasterName_k__BackingField;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v45;
        *(_QWORD *)&v49.fields.fakeValue = v44;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v49, 0);
        v47 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v47,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0);
        if ( !v38 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_31593872((CommonUI_o *)v38, 7, v46, v47, 0);
      }
    }
    else if ( Gift__IsCommandCode(v26->fields.type, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_52;
      v40 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              v26->fields.objectId,
              (const MethodInfo_3463274 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v42 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v42,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseCommandCodeDetail__,
        0);
      if ( !v41 )
        goto LABEL_52;
      CommonUI__OpenServantEquipStatusDialog_31596520((CommonUI_o *)v41, 25, (CommandCodeEntity_o *)v40, 0, v42, 0, 0);
    }
    else if ( Gift__IsCostumeRelease(v26->fields.type, 0) )
    {
      MissionListViewManager__OpenCostumeReleaseDetail(this, v26->fields.objectId, v43);
    }
    else if ( Gift__IsEquip(v26->fields.type, 0) )
    {
      MissionListViewManager__OpenEquipDetail(this, v26->fields.objectId, v48);
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v31; // x8
  CommonUI_o *v32; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v34; // x21

  if ( (byte_4D34432 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass73_0_TypeInfo);
    byte_4D34432 = 1;
  }
  v8 = sub_1C93D20(MissionListViewManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = gifts;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)gifts, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 32) = afterDetail;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 32), (int32_t)afterDetail, v23, v24, v25, v26, v27, v28);
  MissionListViewManager__SetTresureEffect(this, v29);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = AvalonSceneManager_TypeInfo;
  v32 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v31 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
  v34 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__,
    0);
  if ( !v32 )
LABEL_9:
    sub_1C93D2C(touchBlockObj, v10);
  CommonUI__maskFadeout(v32, 1, DEFAULT_FADE_TIME, v34, 0);
}


void MissionListViewManager__StartItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x20
  intptr_t Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Action_o **v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  EventRewardRootComponent_o *v33; // x21
  System_Action_o *v34; // x22
  __int64 naturalAligment; // x9
  __int64 v36; // x8
  __int64 v37; // x9
  __int64 v38; // x8
  int32_t v39; // w21
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x8
  const MethodInfo *v43; // x4
  int v44; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v48; // w23
  UnityEngine_Object_o *v49; // x22
  int64_t userSvtId; // x22
  bool isNew; // w23
  bool Eff; // w0
  __int64 v53; // x8
  __int64 v54; // x9
  __int64 v55; // x8
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v57; // x23
  Il2CppClass *v58; // x24
  int32_t v59; // w23
  const MethodInfo *v60; // x3
  __int64 v61; // x8
  __int64 v62; // x9
  __int64 v63; // x8
  const MethodInfo *v64; // x5
  __int64 v65; // x8
  __int64 v66; // x9
  __int64 v67; // x8
  const MethodInfo *v68; // x5
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x8
  __int64 v72; // x8
  __int64 v73; // x9
  __int64 v74; // x8
  Il2CppObject *v75; // x0
  Il2CppObject *v76; // x21
  const MethodInfo *v77; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  System_Action_o *v79; // x21
  const MethodInfo *v80; // x3
  MissionListViewManager___c__DisplayClass74_0_o *v81; // x0
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // [xsp+0h] [xbp-70h]
  Il2CppObject *v84; // [xsp+8h] [xbp-68h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+10h] [xbp-60h] BYREF
  GetCommandCodes_o *v86; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v87; // [xsp+20h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4D34433 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C93AD4(&EventRewardRootComponent_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1C93AD4(&MissionInfoMaker_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass74_0_TypeInfo);
    byte_4D34433 = 1;
  }
  entity = 0;
  v87 = 0;
  data = 0;
  resultEntity = 0;
  v86 = 0;
  v84 = 0;
  v9 = sub_1C93D20(MissionListViewManager___c__DisplayClass74_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_106;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = afterDetail;
  v18 = (System_Action_o **)(v9 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)afterDetail, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v9 + 32) = gifts;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)gifts, v25, v26, v27, v28, v29, v30);
  v11 = *(_QWORD *)(v9 + 32);
  *(_DWORD *)(v9 + 40) = idx;
  if ( !v11 )
    goto LABEL_106;
  if ( *(_DWORD *)(v11 + 24) <= idx )
  {
    Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 72, 0) && this->fields.isEffect )
    {
      Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      v33 = *(EventRewardRootComponent_o **)(Instance + 32);
      v34 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v9,
        Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__,
        0);
      if ( !v33 )
        goto LABEL_106;
      naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
      if ( v33->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventRewardRootComponent_c *)v33->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1C940C8(v33);
        MissionListViewManager___c__DisplayClass74_0___ctor(v81, v82);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(v33, v34, 0);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v18, v32);
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
    MissionListViewManager__CreateDisplayRewardList(this, (GiftEntity_array *)v11, v31);
LABEL_22:
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v11);
  v36 = *(_QWORD *)(v9 + 32);
  if ( !v36 )
    goto LABEL_106;
  v37 = *(int *)(v9 + 40);
  if ( (unsigned int)v37 >= *(_DWORD *)(v36 + 24) )
    goto LABEL_107;
  v38 = *(_QWORD *)(v36 + 8 * v37 + 32);
  if ( !v38 )
    goto LABEL_106;
  v39 = *(_DWORD *)(v38 + 20);
  if ( Gift__IsServant(v39, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (intptr_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
    v40 = *(_QWORD *)(v9 + 32);
    if ( !v40 )
      goto LABEL_106;
    v41 = *(int *)(v9 + 40);
    if ( (unsigned int)v41 < *(_DWORD *)(v40 + 24) )
    {
      v42 = *(_QWORD *)(v40 + 8 * v41 + 32);
      if ( !v42 || !Instance )
        goto LABEL_106;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   &entity,
                   *(_DWORD *)(v42 + 24),
                   (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_106;
        Instance = SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0);
        if ( !entity )
          goto LABEL_106;
        v44 = Instance;
        Instance = SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0);
        if ( ((v44 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_106;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v90.fields.currentCryptoKey = klass;
          *(_QWORD *)&v90.fields.fakeValue = monitor;
          v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v90, 0);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v48, 0) )
          {
            Instance = (intptr_t)entity;
            if ( !entity )
              goto LABEL_106;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) )
            {
              Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_106;
              v49 = *(UnityEngine_Object_o **)(Instance + 1360);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v49, 0, 0) )
              {
                Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_106;
                Instance = *(_QWORD *)(Instance + 1360);
                if ( !Instance )
                  goto LABEL_106;
                MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)Instance, 0);
              }
            }
            this->fields.isEffect = 1;
            Instance = (intptr_t)data;
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
                v39,
                *(GiftEntity_array **)(v9 + 32),
                *(_DWORD *)(v9 + 40),
                *(System_Action_o **)(v9 + 24),
                v83);
              return;
            }
LABEL_106:
            sub_1C93D2C(Instance, v11);
          }
        }
      }
      goto LABEL_105;
    }
LABEL_107:
    sub_1C93D34(Instance);
  }
  if ( Gift__IsCommandCode(v39, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (intptr_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v53 = *(_QWORD *)(v9 + 32);
    if ( !v53 )
      goto LABEL_106;
    v54 = *(int *)(v9 + 40);
    if ( (unsigned int)v54 < *(_DWORD *)(v53 + 24) )
    {
      v55 = *(_QWORD *)(v53 + 8 * v54 + 32);
      if ( !v55 || !Instance )
        goto LABEL_106;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   &v87,
                   *(_DWORD *)(v55 + 24),
                   (const MethodInfo_34632C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        if ( !v87 )
          goto LABEL_106;
        getCommandCodeList = this->fields.getCommandCodeList;
        v58 = v87[1].klass;
        v57 = v87[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v91.fields.currentCryptoKey = v58;
        *(_QWORD *)&v91.fields.fakeValue = v57;
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v91, 0);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v86, v59, 0) )
        {
          this->fields.isEffect = 1;
          Instance = (intptr_t)v86;
          if ( v86 )
          {
            userSvtId = v86->fields.userCommandCodeId;
            isNew = v86->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v86, 0);
            goto LABEL_69;
          }
          goto LABEL_106;
        }
      }
      goto LABEL_105;
    }
    goto LABEL_107;
  }
  Instance = Gift__IsCostumeRelease(v39, 0);
  if ( (Instance & 1) != 0 )
  {
    v61 = *(_QWORD *)(v9 + 32);
    if ( !v61 )
      goto LABEL_106;
    v62 = *(int *)(v9 + 40);
    if ( (unsigned int)v62 >= *(_DWORD *)(v61 + 24) )
      goto LABEL_107;
    v63 = *(_QWORD *)(v61 + 8 * v62 + 32);
    if ( !v63 )
      goto LABEL_106;
    Instance = MissionListViewManager__TryGetServantCostumeEntity(
                 (MissionListViewManager_o *)Instance,
                 &resultEntity,
                 *(_DWORD *)(v63 + 24),
                 v60);
    if ( (Instance & 1) != 0 )
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
        v64);
      return;
    }
LABEL_105:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v9 + 32),
      *(_DWORD *)(v9 + 40) + 1,
      *(System_Action_o **)(v9 + 24),
      v43);
    return;
  }
  if ( !Gift__IsEquip(v39, 0) )
  {
    if ( Gift__IsItem(v39, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (intptr_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
      v72 = *(_QWORD *)(v9 + 32);
      if ( !v72 )
        goto LABEL_106;
      v73 = *(int *)(v9 + 40);
      if ( (unsigned int)v73 < *(_DWORD *)(v72 + 24) )
      {
        v74 = *(_QWORD *)(v72 + 8 * v73 + 32);
        if ( !v74 || !Instance )
          goto LABEL_106;
        v75 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_DWORD *)(v74 + 24),
                (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v75 )
        {
          v76 = v75;
          Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_106;
          Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v76[1].klass, 0);
          dispRewardInfoList = this->fields.dispRewardInfoList;
          if ( (Instance & 1) != 0 )
          {
            if ( !dispRewardInfoList )
              goto LABEL_106;
            if ( !dispRewardInfoList->fields._size )
            {
              this->fields.isEffect = 1;
              MissionListViewManager__StartRewardItemGetEffect(
                this,
                (int32_t)v76[1].klass,
                *(GiftEntity_array **)(v9 + 32),
                *(_DWORD *)(v9 + 40),
                *(System_Action_o **)(v9 + 24),
                v77);
              return;
            }
          }
          else if ( !dispRewardInfoList )
          {
            goto LABEL_106;
          }
          if ( dispRewardInfoList->fields._size >= 1 )
          {
            v79 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v79,
              (Il2CppObject *)v9,
              Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__,
              0);
            MissionListViewManager__LoadItemGetEffects(this, 0, v79, v80);
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
  Instance = (intptr_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EquipMaster___);
  v65 = *(_QWORD *)(v9 + 32);
  if ( !v65 )
    goto LABEL_106;
  v66 = *(int *)(v9 + 40);
  if ( (unsigned int)v66 >= *(_DWORD *)(v65 + 24) )
    goto LABEL_107;
  v67 = *(_QWORD *)(v65 + 8 * v66 + 32);
  if ( !v67 || !Instance )
    goto LABEL_106;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v84,
               *(_DWORD *)(v67 + 24),
               (const MethodInfo_34632C0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( (Instance & 1) == 0 )
    goto LABEL_105;
  this->fields.isEffect = 1;
  v69 = *(_QWORD *)(v9 + 32);
  if ( !v69 )
    goto LABEL_106;
  v70 = *(int *)(v9 + 40);
  if ( (unsigned int)v70 >= *(_DWORD *)(v69 + 24) )
    goto LABEL_107;
  v71 = *(_QWORD *)(v69 + 8 * v70 + 32);
  if ( !v71 )
    goto LABEL_106;
  MissionListViewManager__StartRewardEquipGetEffect(
    this,
    *(_DWORD *)(v71 + 24),
    (GiftEntity_array *)v69,
    v70,
    *v18,
    v68);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v41; // x19
  System_Action_o *v42; // x22

  if ( (byte_4D34436 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass77_0_TypeInfo);
    byte_4D34436 = 1;
  }
  v11 = sub_1C93D20(MissionListViewManager___c__DisplayClass77_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_7;
  *(_QWORD *)(v11 + 16) = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)afterDetail, v32, v33, v34, v35, v36, v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v41 = (CommonUI_o *)Instance,
        v42 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0),
        !v41) )
  {
LABEL_7:
    sub_1C93D2C(touchBlockObj, v13);
  }
  CommonUI__maskFadeout(v41, FADEOUT_KIND, FADEOUT_TIME, v42, 0);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  QuestRewardInfo_o *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  _DWORD *v39; // x8
  __int64 v40; // x9
  __int64 v41; // x10
  __int64 v42; // x9
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v46; // x19
  System_Action_o *v47; // x22

  if ( (byte_4D34435 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&QuestRewardInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass76_0_TypeInfo);
    byte_4D34435 = 1;
  }
  v11 = sub_1C93D20(MissionListViewManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)gifts, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)afterDetail, v26, v27, v28, v29, v30, v31);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  v32 = (QuestRewardInfo_o *)sub_1C93D20(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v32, 0);
  *(_QWORD *)(v11 + 16) = v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = *(_DWORD **)(v11 + 16);
  if ( !v39 )
    goto LABEL_11;
  v39[4] = 5;
  v39[5] = equipId;
  v40 = *(_QWORD *)(v11 + 32);
  if ( !v40 )
    goto LABEL_11;
  v41 = *(int *)(v11 + 40);
  if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 24) )
    sub_1C93D34(touchBlockObj);
  v42 = *(_QWORD *)(v40 + 8 * v41 + 32);
  if ( !v42
    || (v39[6] = *(_DWORD *)(v42 + 28),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v46 = (CommonUI_o *)Instance,
        v47 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v47,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__,
          0),
        !v46) )
  {
LABEL_11:
    sub_1C93D2C(touchBlockObj, v13);
  }
  CommonUI__maskFadeout(v46, FADEOUT_KIND, FADEOUT_TIME, v47, 0);
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
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v41; // x19
  System_Action_o *v42; // x21

  if ( (byte_4D34438 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass79_0_TypeInfo);
    byte_4D34438 = 1;
  }
  v17 = sub_1C93D20(MissionListViewManager___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_7;
  *(_DWORD *)(v17 + 16) = giftType;
  *(_QWORD *)(v17 + 24) = userSvtID;
  *(_QWORD *)(v17 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v17 + 40) = isDoEffect;
  *(_BYTE *)(v17 + 41) = isNew;
  *(_QWORD *)(v17 + 48) = gifts;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 48), (int32_t)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 64) = afterDetail;
  *(_DWORD *)(v17 + 56) = idx;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 64), (int32_t)afterDetail, v32, v33, v34, v35, v36, v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v41 = (CommonUI_o *)Instance,
        v42 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v17,
          Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__,
          0),
        !v41) )
  {
LABEL_7:
    sub_1C93D2C(touchBlockObj, v19);
  }
  CommonUI__maskFadeout(v41, FADEOUT_KIND, FADEOUT_TIME, v42, 0);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  QuestRewardInfo_o *v33; // x24
  __int64 *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  _DWORD *v41; // x8
  __int64 v42; // x9
  __int64 v43; // x10
  __int64 v44; // x9
  unsigned int ItemEffectId; // w0
  const MethodInfo *v46; // x4
  intptr_t m_CachedPtr; // x8
  _QWORD *v48; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v50; // x8
  __int64 v51; // x9
  int v52; // w10
  __int64 v53; // x13
  int v54; // w11
  int v55; // w12
  __int64 v56; // x14
  __int64 v57; // x15
  Il2CppObject *v58; // x19
  AvalonSceneManager_c *v59; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v61; // x21

  if ( (byte_4D34437 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&QuestRewardInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass78_0_TypeInfo);
    byte_4D34437 = 1;
  }
  v11 = sub_1C93D20(MissionListViewManager___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_33;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = gifts;
  v20 = (__int64 *)(v11 + 40);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)gifts, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v11 + 48) = idx;
  *(_QWORD *)(v11 + 56) = afterDetail;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), (int32_t)afterDetail, v27, v28, v29, v30, v31, v32);
  v33 = (QuestRewardInfo_o *)sub_1C93D20(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v33, 0);
  *(_QWORD *)(v11 + 32) = v33;
  v34 = (__int64 *)(v11 + 32);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v33, v35, v36, v37, v38, v39, v40);
  v41 = *(_DWORD **)(v11 + 32);
  if ( !v41 )
    goto LABEL_33;
  v41[4] = 2;
  v41[5] = itemId;
  v42 = *(_QWORD *)(v11 + 40);
  if ( !v42 )
    goto LABEL_33;
  v43 = *(int *)(v11 + 48);
  if ( (unsigned int)v43 >= *(_DWORD *)(v42 + 24) )
    goto LABEL_34;
  v44 = *(_QWORD *)(v42 + 8 * v43 + 32);
  if ( !v44 )
    goto LABEL_33;
  v41[6] = *(_DWORD *)(v44 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v11 + 32), 0);
  *(_DWORD *)(v11 + 16) = ItemEffectId;
  v13 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v13,
         (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v11 + 40),
      *(_DWORD *)(v11 + 48) + 1,
      *(System_Action_o **)(v11 + 56),
      v46);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  v13 = *(unsigned int *)(v11 + 16);
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v48 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_33;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      v13,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v13;
  }
  v50 = *v34;
  if ( !*v34 )
    goto LABEL_33;
  *(_DWORD *)(v50 + 24) = 0;
  v51 = *v20;
  if ( !*v20 )
    goto LABEL_33;
  v52 = *(_DWORD *)(v51 + 24);
  if ( v52 >= 1 )
  {
    v53 = *(int *)(v11 + 48);
    v54 = 0;
    v55 = 0;
    v56 = v51 + 8 * v53 + 32;
    while ( v52 != v54 && (unsigned int)v53 < v52 )
    {
      if ( !*(_QWORD *)v56 )
        goto LABEL_33;
      v57 = *(_QWORD *)(v51 + 8LL * v54 + 32);
      if ( !v57 )
        goto LABEL_33;
      if ( *(_DWORD *)(*(_QWORD *)v56 + 24LL) == *(_DWORD *)(v57 + 24) )
      {
        v55 += *(_DWORD *)(v57 + 28);
        *(_DWORD *)(v50 + 24) = v55;
      }
      if ( v52 == ++v54 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1C93D34(Instance);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v58 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v59 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v59 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v59->static_fields->DEFAULT_FADE_TIME;
  v61 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__,
    0);
  if ( !v58 )
LABEL_33:
    sub_1C93D2C(Instance, v13);
  CommonUI__maskFadeout((CommonUI_o *)v58, 1, DEFAULT_FADE_TIME, v61, 0);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v31; // x2
  unsigned int EffectId; // w0
  const MethodInfo *v33; // x4
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  ScrTerminalListTop_c *v37; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v39; // x0
  System_String_o *v40; // x21
  Il2CppObject *Object_object__51927708; // x21
  UnityEngine_GameObject_o *v42; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardItemAction_o **v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  QuestRewardItemAction_o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  ScrTerminalListTop_c *v58; // x0
  System_String_o *useTreasureGetEffectName; // x22
  QuestRewardItemAction_o *v60; // x21
  __int64 v61; // x8
  GrandQuestFolderBoardItem_o *p_titleSpriteName; // x0
  struct System_String_o *overWriteTitleSpriteName; // x1
  QuestRewardItemAction_o *v64; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v68; // x19
  System_Action_o *v69; // x22
  int v70; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D3443E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass85_0_TypeInfo);
    byte_4D3443E = 1;
  }
  v9 = sub_1C93D20(MissionListViewManager___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = gifts;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)gifts, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 56) = afterDetail;
  *(_DWORD *)(v9 + 48) = idx;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 56), (int32_t)afterDetail, v24, v25, v26, v27, v28, v29);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Item = System_Collections_Generic_List_object___get_Item(
           dispRewardInfoList,
           0,
           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
  EffectId = MissionListViewManager__GetItemGetEffectId(this, (QuestRewardInfo_o *)Item, v31);
  *(_DWORD *)(v9 + 16) = EffectId;
  v11 = EffectId;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)dispRewardInfoList,
         v11,
         (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v9 + 40),
      *(_DWORD *)(v9 + 48) + 1,
      *(System_Action_o **)(v9 + 56),
      v33);
    return;
  }
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v11 = *(unsigned int *)(v9 + 16);
  items = dispRewardInfoList->fields._items;
  v35 = Method_System_Collections_Generic_List_int__Add__;
  ++dispRewardInfoList->fields._version;
  if ( !items )
    goto LABEL_36;
  size = dispRewardInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)dispRewardInfoList,
      v11,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    dispRewardInfoList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = v11;
  }
  v37 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v37 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v37->static_fields->ITEM_GET_EFFECT_NAME;
  v70 = *(_DWORD *)(v9 + 16);
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__Format(ITEM_GET_EFFECT_NAME, v39, 0);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_36;
  v40 = (System_String_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemGetAssetDatas,
                                                                      *(_DWORD *)(v9 + 16),
                                                                      (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              (AssetData_o *)dispRewardInfoList,
                              v40,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__51927708,
                                                                      (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v42 = (UnityEngine_GameObject_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)dispRewardInfoList,
                                                                      0);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)dispRewardInfoList, this->fields.instantiatingPOS, 0);
  GameObjectExtensions__ResetTransform(v42, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v42,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v9 + 24) = Component_object;
  v44 = (QuestRewardItemAction_o **)(v9 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)Component_object, v45, v46, v47, v48, v49, v50);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v51 = *v44;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                      dispRewardInfoList,
                                                                      (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
  if ( !v51 )
    goto LABEL_36;
  QuestRewardItemAction__Setup_37169024(v51, (QuestRewardInfo_array *)dispRewardInfoList, *(_DWORD *)(v9 + 16) == 0, 0);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(
                                                                      this->fields.overWriteTitleSpriteName,
                                                                      0);
  if ( ((unsigned __int8)dispRewardInfoList & 1) == 0 )
  {
    v64 = *v44;
    if ( !*v44 )
      goto LABEL_36;
    overWriteTitleSpriteName = this->fields.overWriteTitleSpriteName;
    p_titleSpriteName = (GrandQuestFolderBoardItem_o *)&v64->fields.titleSpriteName;
    v64->fields.titleSpriteName = overWriteTitleSpriteName;
    goto LABEL_33;
  }
  v58 = ScrTerminalListTop_TypeInfo;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v58 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Equality(useTreasureGetEffectName, v58->static_fields->PRIZE_GET_NORMAL, 0) )
  {
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)ScrTerminalListTop_TypeInfo;
    v60 = *v44;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)ScrTerminalListTop_TypeInfo;
    }
    if ( v60 )
    {
      v61 = *(_QWORD *)&dispRewardInfoList[4].fields._size;
      p_titleSpriteName = (GrandQuestFolderBoardItem_o *)&v60->fields.titleSpriteName;
      overWriteTitleSpriteName = *(struct System_String_o **)(v61 + 168);
      v60->fields.titleSpriteName = overWriteTitleSpriteName;
LABEL_33:
      sub_1C93A78(p_titleSpriteName, (int32_t)overWriteTitleSpriteName, v52, v53, v54, v55, v56, v57);
      goto LABEL_34;
    }
LABEL_36:
    sub_1C93D2C(dispRewardInfoList, v11);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  FADEOUT_KIND = this->fields.FADEOUT_KIND;
  FADEOUT_TIME = this->fields.FADEOUT_TIME;
  v68 = (CommonUI_o *)Instance;
  v69 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v69,
    (Il2CppObject *)v9,
    Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
    0);
  if ( !v68 )
    goto LABEL_36;
  CommonUI__maskFadeout(v68, FADEOUT_KIND, FADEOUT_TIME, v69, 0);
}


void MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
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
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v26; // x19
  System_Action_o *v27; // x22

  if ( (byte_4D34439 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass80_0_TypeInfo);
    byte_4D34439 = 1;
  }
  v7 = sub_1C93D20(MissionListViewManager___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = callCnt;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v7 + 24) < SLODWORD(getSvtList->max_length) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v26 = (CommonUI_o *)Instance;
    v27 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v7,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__,
      0);
    if ( v26 )
    {
      CommonUI__maskFadeout(v26, FADEOUT_KIND, FADEOUT_TIME, v27, 0);
      return;
    }
LABEL_9:
    sub_1C93D2C(v8, v9);
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v21; // x20

  if ( (byte_4D3443A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass81_0_TypeInfo);
    byte_4D3443A = 1;
  }
  v5 = sub_1C93D20(MissionListViewManager___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  svtRewardComp = this->fields.svtRewardComp;
  v21 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__,
    0);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtRewardComp )
LABEL_8:
    sub_1C93D2C(v6, v7);
  ServantRewardAction__Play(svtRewardComp, v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0);
}


bool MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  int32_t v9; // w20
  System_String_o *v10; // x0
  int32_t v11; // w21
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = objectId;
  if ( (byte_4D3443B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D3443B = 1;
  }
  Master_object = System_Int32__ToString((int32_t)&v13, 0);
  if ( !Master_object )
    goto LABEL_8;
  v7 = Master_object;
  v8 = System_String__Substring_64471664(Master_object, 0, Master_object->fields._stringLength - 2, 0);
  v9 = System_Int32__Parse(v8, 0);
  v10 = System_String__Substring(v7, v7->fields._stringLength - 2, 0);
  v11 = System_Int32__Parse(v10, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1C93D2C(Master_object, v6);
  return ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, resultEntity, v9, v11, 0);
}


bool MissionListViewManager__TrySetupMissionCondNaviAction(
        MissionListViewManager_o *this,
        MissionListViewItem_o *item,
        System_Action_o **naviAction,
        const MethodInfo *method)
{
  __int64 v7; // x20
  MissionListViewItem_o *Master_object; // x0
  MissionNaviTransitionBoardItem_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  MissionListViewItem_o **v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x23
  System_Collections_Generic_List_object__o **v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct EventMissionEntity_o *eventMissionEnt; // x8
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  bool v46; // w23
  System_Action_o *v47; // x21
  BalanceConfig_c *v48; // x0
  EventMissionConditionEntity_o *NotClearCondInfo; // x0
  const MethodInfo *v50; // x5
  int condType; // w8
  MissionListViewItem_o *v52; // x4
  __int64 *v53; // x8
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Collections_Generic_List_object__o *v60; // x8
  struct System_Object_array *items; // x9
  _QWORD *v62; // x10
  __int64 size; // x11
  MissionListViewItem_o *v64; // x1
  Il2CppClass **v65; // x0
  System_Action_o *v66; // x0
  intptr_t *v67; // x8
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 sortIndex; // x10
  __int64 v77; // x8
  System_Action_o *v78; // x21
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D34443 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass90_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_4591/*"Combine/ServantSkillCombine"*/);
    sub_1C93AD4(&StringLiteral_4589/*"Combine/ServantEQCombine"*/);
    sub_1C93AD4(&StringLiteral_4587/*"Combine/ClassBoard"*/);
    sub_1C93AD4(&StringLiteral_4590/*"Combine/ServantLimitCountUp"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_13261/*"Summon/FRIEND_POINT"*/);
    sub_1C93AD4(&StringLiteral_4588/*"Combine/ServantCombine"*/);
    byte_4D34443 = 1;
  }
  entity = 0;
  v7 = sub_1C93D20(MissionListViewManager___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_55;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = (MissionListViewItem_o **)(v7 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)item, v17, v18, v19, v20, v21, v22);
  *naviAction = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)naviAction, 0, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *(_QWORD *)(v7 + 32) = v29;
  v30 = (System_Collections_Generic_List_object__o **)(v7 + 32);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v29, v31, v32, v33, v34, v35, v36);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
  if ( !*v16 )
    goto LABEL_55;
  eventMissionEnt = (*v16)->fields.eventMissionEnt;
  if ( !eventMissionEnt || !Master_object )
    goto LABEL_55;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         eventMissionEnt->fields.id,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__) )
  {
    Master_object = (MissionListViewItem_o *)entity;
    if ( entity )
    {
      switch ( HIDWORD(entity[1].klass) )
      {
        case 1:
          v46 = MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v16,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
                  v39);
          if ( v46 )
          {
            v47 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v47,
              (Il2CppObject *)v7,
              Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__,
              0);
          }
          else
          {
            v47 = 0;
          }
          *naviAction = v47;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)naviAction, (int32_t)v47, v40, v41, v42, v43, v44, v45);
          return v46;
        case 2:
          if ( MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
                 (MissionNaviTransitionEntity_o *)entity,
                 *v16,
                 (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
                 v39) )
          {
            goto LABEL_43;
          }
          goto LABEL_17;
        case 3:
          if ( !MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v16,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
                  v39) )
            goto LABEL_17;
          goto LABEL_43;
        case 4:
          Master_object = (MissionListViewItem_o *)MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem(
                                                     (MissionNaviTransitionEntity_o *)entity,
                                                     *v16,
                                                     v38);
          v60 = *v30;
          if ( !*v30 )
            goto LABEL_55;
          items = v60->fields._items;
          v62 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
          ++v60->fields._version;
          if ( !items )
            goto LABEL_55;
          size = v60->fields._size;
          v64 = Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &items->obj.klass + size;
            v60->fields._size = size + 1;
            v65[4] = (Il2CppClass *)v64;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)v64, v54, v55, v56, v57, v58, v59);
          }
LABEL_43:
          v66 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          v67 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__;
          break;
        default:
          goto LABEL_17;
      }
      goto LABEL_53;
    }
    goto LABEL_55;
  }
LABEL_17:
  v48 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v48 = BalanceConfig_TypeInfo;
  }
  if ( !v48->static_fields->IsMissionNaviAutoClassify )
    return 0;
  Master_object = *v16;
  if ( !*v16 )
    goto LABEL_55;
  NotClearCondInfo = MissionListViewItem__GetNotClearCondInfo(Master_object, (const MethodInfo *)v9);
  if ( !NotClearCondInfo )
    return 0;
  condType = NotClearCondInfo->fields.condType;
  if ( condType > 141 )
  {
    switch ( condType )
    {
      case 187:
        v52 = *v16;
        v53 = &StringLiteral_4587/*"Combine/ClassBoard"*/;
        break;
      case 188:
        goto LABEL_39;
      case 189:
        goto LABEL_28;
      case 190:
        goto LABEL_38;
      default:
        if ( condType == 149 )
          goto LABEL_39;
        if ( condType != 174 )
          return 0;
LABEL_38:
        v52 = *v16;
        v53 = &StringLiteral_4591/*"Combine/ServantSkillCombine"*/;
        break;
    }
LABEL_45:
    v9 = MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_48637856(
           (System_String_o *)*v53,
           0,
           (System_String_o *)StringLiteral_1/*""*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v52,
           v50);
    if ( v9 )
    {
      Master_object = (MissionListViewItem_o *)*v30;
      if ( *v30 )
      {
        v74 = *(_QWORD *)&Master_object->fields.selectNum;
        v75 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
        ++Master_object->fields.loopIndex;
        if ( v74 )
        {
          sortIndex = Master_object->fields.sortIndex;
          if ( (unsigned int)sortIndex >= *(_DWORD *)(v74 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v9,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = v74 + 8 * sortIndex;
            Master_object->fields.sortIndex = sortIndex + 1;
            *(_QWORD *)(v77 + 32) = v9;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v77 + 32), (int32_t)v9, v68, v69, v70, v71, v72, v73);
          }
          v66 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          v67 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__;
LABEL_53:
          v78 = v66;
          System_Action___ctor(v66, (Il2CppObject *)v7, *v67, 0);
          *naviAction = v78;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)naviAction, (int32_t)v78, v79, v80, v81, v82, v83, v84);
          return 1;
        }
      }
LABEL_55:
      sub_1C93D2C(Master_object, v9);
    }
    return 0;
  }
  v46 = 0;
  if ( condType > 7 )
  {
    if ( condType == 8 )
    {
      v52 = *v16;
      v53 = &StringLiteral_13261/*"Summon/FRIEND_POINT"*/;
      goto LABEL_45;
    }
    if ( condType == 141 )
    {
      v52 = *v16;
      v53 = &StringLiteral_4589/*"Combine/ServantEQCombine"*/;
      goto LABEL_45;
    }
  }
  else
  {
    if ( condType == 6 )
    {
LABEL_39:
      v52 = *v16;
      v53 = &StringLiteral_4588/*"Combine/ServantCombine"*/;
      goto LABEL_45;
    }
    if ( condType == 7 )
    {
LABEL_28:
      v52 = *v16;
      v53 = &StringLiteral_4590/*"Combine/ServantLimitCountUp"*/;
      goto LABEL_45;
    }
  }
  return v46;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  float realtimeSinceStartup; // s0
  float v14; // s0
  float v15; // s0
  float alphaAnimTimeOld; // s9
  float v17; // s8
  MissionListViewManager_c *v18; // x0
  float v19; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v21; // w21
  MissionListViewManager_c *v22; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v24; // w21

  if ( (byte_4D34424 & 1) == 0 )
  {
    sub_1C93AD4(&MissionListViewManager_TypeInfo);
    sub_1C93AD4(&Method_TransitionCalculator_float__Update__);
    byte_4D34424 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v5 = MissionListViewManager__CreateRewardIconAlphaCalculator(0, method);
    *p_rewardIconAlphaCalculator = v5;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.rewardIconAlphaCalculator,
      (int32_t)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
  v14 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_3B67808 *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v14;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0) )
  {
    v15 = UnityEngine_Time__get_realtimeSinceStartup(0);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v17 = v15;
    v18 = MissionListViewManager_TypeInfo;
    if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
      v18 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v17 - alphaAnimTimeOld) >= v18->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    sub_1C93D2C(rewardIconAlphaCalculator, v12);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0);
  v19 = UnityEngine_Time__get_realtimeSinceStartup(0);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v19;
  v21 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v22 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v22 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v22->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v21 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v24 = this->fields.alphaAnimCnt;
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v24 - ALPHA_ANIM_COUNT_RESET_VAL;
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

  if ( (byte_4D34422 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D34422 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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

  if ( (byte_4D34423 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D34423 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D34449 & 1) == 0 )
  {
    sub_1C93AD4(&MissionListViewManager___c_TypeInfo);
    byte_4D34449 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(MissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MissionListViewManager___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
  return !Gift__IsItem_41140044(x->fields.type, 0);
}


bool MissionListViewManager___c___CreateDisplayRewardList_b__84_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return Gift__IsItem_41140044(x->fields.type, 0);
}


void MissionListViewManager___c___SetupMissionCondTransitionConfirmDialog_b__92_0(
        MissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D3444A & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4D3444A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
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
  const MethodInfo *v2; // x2
  MissionListViewManager___c__DisplayClass73_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *_4__this; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4D3444B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__);
    byte_4D3444B = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  MissionListViewManager__LoadTreasureGetEffect(_4__this, _9__1, v2);
}


void MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MissionListViewManager_o *_4__this; // x0
  struct MissionListViewManager_o *v5; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D3444C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__);
    byte_4D3444C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  MissionListViewManager__SetupTreasureGetEffect(_4__this, _4__this->fields.giftIconId, v2);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_9;
  questRewardBoxAction = v5->fields.questRewardBoxAction;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_1C93D2C(_4__this, method);
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
  const MethodInfo *v7; // x4

  v2 = this;
  if ( (byte_4D3444D & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3444D = 1;
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
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_12;
  treasureGetAssetData = v5->fields.treasureGetAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_41247948(treasureGetAssetData, 0);
  this = (MissionListViewManager___c__DisplayClass73_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1C93D2C(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v2->fields.gifts,
    0,
    v2->fields.afterDetail,
    v7);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  MissionListViewManager__EndItemGetEffectAction(this->fields.__4__this, this->fields.afterDetail, v2);
}


void MissionListViewManager___c__DisplayClass74_0___StartItemGetEffectAction_b__1(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  _4__this->fields.isEffect = 1;
  MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
    _4__this,
    this->fields.gifts,
    this->fields.idx,
    this->fields.afterDetail,
    v2);
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
    sub_1C93D2C(this, method);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D3444E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__);
    byte_4D3444E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C93D2C(Instance, v4);
  CommonUI__LoadEquipGetEffect(v6, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D3444F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__);
    byte_4D3444F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C93D2C(Instance, v4);
  CommonUI__OpenEquipGetEffect(v6, 0, questRewardInfo, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4D34450 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34450 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v5);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D34451 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__);
    byte_4D34451 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C93D2C(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v6, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  System_String_o *name; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D34452 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__);
    byte_4D34452 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C93D2C(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v6, 0, name, _9__2, 23, 0);
}


void MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4D34453 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34453 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v5);
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
  MissionInfoMaker_c *v3; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D34454 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&MissionInfoMaker_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__);
    byte_4D34454 = 1;
  }
  v3 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v3 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v3->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v6 = System_String__Format(ITEM_GET_ASSET_NAME, v5, 0);
  _9__1 = this->fields.__9__1;
  v8 = v6;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v8, _9__1, 1, 0);
}


void MissionListViewManager___c__DisplayClass78_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  MissionInfoMaker_c *v20; // x0
  AssetData_o *v21; // x21
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v23; // x0
  Il2CppObject *Object_object__51927708; // x21
  UnityEngine_GameObject_o *v25; // x21
  struct MissionListViewManager_o *_4__this; // x8
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  QuestRewardItemAction_o *v34; // x19
  System_Action_o *v35; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D34455 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&MissionInfoMaker_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass78_1_TypeInfo);
    byte_4D34455 = 1;
  }
  v5 = sub_1C93D20(MissionListViewManager___c__DisplayClass78_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = data;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)data, v14, v15, v16, v17, v18, v19);
  v20 = MissionInfoMaker_TypeInfo;
  v21 = *(AssetData_o **)(v5 + 24);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v20 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v20->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v23, 0);
  if ( !v21 )
    goto LABEL_15;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              v21,
                              transform,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__51927708,
                                   (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_15;
  v25 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0);
  GameObjectExtensions__ResetTransform(v25, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v25,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Component_object, v28, v29, v30, v31, v32, v33);
  transform = *(System_String_o **)(v5 + 16);
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0),
        v34 = *(QuestRewardItemAction_o **)(v5 + 16),
        v35 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v5,
          Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__,
          0),
        !v34) )
  {
LABEL_15:
    sub_1C93D2C(transform, v7);
  }
  QuestRewardItemAction__Play(v34, 0, v35, 0.0, 0, 0);
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
  const MethodInfo *v6; // x4
  struct MissionListViewManager___c__DisplayClass78_0_o *CS___8__locals1; // x8

  if ( (byte_4D34456 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34456 = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_41247948(data, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0 )
LABEL_11:
    sub_1C93D2C(mRewardItemAction, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    v6);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D34457 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__);
    byte_4D34457 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C93D2C(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v6, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  Il2CppObject *v7; // x21
  struct MissionListViewManager_o *v8; // x8
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct MissionListViewManager_o *v15; // x8
  _BOOL4 isDoEffect; // w24
  ServantRewardAction_o *svtRewardComp; // x20
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v20; // w22
  Il2CppObject v21; // q1
  int64_t v22; // x0
  Il2CppClass *v23; // x8
  int64_t v24; // x21
  bool isNew; // w5
  int32_t v26; // w3
  bool v27; // w6
  int32_t v28; // w7
  ServantRewardAction_o *v29; // x0
  int32_t v30; // w1
  int64_t v31; // x2
  const MethodInfo *v32; // x2
  Il2CppObject *v33; // x0
  struct MissionListViewManager_o *v34; // x20
  Il2CppObject *v35; // x21
  struct MissionListViewManager_o *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct MissionListViewManager_o *v43; // x8
  ServantRewardAction_o *v44; // x20
  Il2CppObject v45; // q1
  bool v46; // w2
  int64_t v47; // x1
  bool v48; // w3
  int32_t v49; // w4
  ServantRewardAction_o *v50; // x0
  Il2CppObject v51; // q1
  int64_t v52; // x0
  Il2CppClass *v53; // x8
  int64_t v54; // x21
  Il2CppObject v55; // q1
  System_Action_o *_9__2; // x22
  MissionListViewManager_o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4D34458 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__);
    byte_4D34458 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 this->fields.userSvtID,
                 (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v7 = Entity;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v8 = this->fields.__4__this;
      if ( v8 )
      {
        if ( Master_object )
        {
          Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                     (SummonAssetManager_o *)Master_object,
                                     v8->fields.instantiatingPOS,
                                     0,
                                     0);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&_4__this->fields.svtRewardComp,
              Master_object,
              v9,
              v10,
              v11,
              v12,
              v13,
              v14);
            v15 = this->fields.__4__this;
            if ( v15 )
            {
              if ( v7 )
              {
                isDoEffect = this->fields.isDoEffect;
                svtRewardComp = v15->fields.svtRewardComp;
                klass = v7[5].klass;
                monitor = v7[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v69.fields.currentCryptoKey = klass;
                *(_QWORD *)&v69.fields.fakeValue = monitor;
                v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v69, 0);
                if ( isDoEffect )
                {
                  v21 = v7[2];
                  *(Il2CppObject *)&v68.fields.currentCryptoKey = v7[1];
                  *(Il2CppObject *)&v68.fields.fakeValue = v21;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v67 = v68;
                  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v67, 0);
                  v23 = v7[6].klass;
                  *(_QWORD *)&v70.fields.fakeValue = v7[6].monitor;
                  v24 = v22;
                  *(_QWORD *)&v70.fields.currentCryptoKey = v23;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v70, 0);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v26 = Master_object;
                    v27 = 1;
                    v28 = 14;
                    v29 = svtRewardComp;
                    v30 = v20;
                    v31 = v24;
LABEL_37:
                    ServantRewardAction__Setup(v29, v30, v31, v26, 1, isNew, v27, v28, 0);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v51 = v7[2];
                  *(Il2CppObject *)&v68.fields.currentCryptoKey = v7[1];
                  *(Il2CppObject *)&v68.fields.fakeValue = v51;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v66 = v68;
                  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v66, 0);
                  v53 = v7[6].klass;
                  *(_QWORD *)&v71.fields.fakeValue = v7[6].monitor;
                  v54 = v52;
                  *(_QWORD *)&v71.fields.currentCryptoKey = v53;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v71, 0);
                  if ( svtRewardComp )
                  {
                    v26 = Master_object;
                    v28 = 6;
                    v29 = svtRewardComp;
                    v30 = v20;
                    v31 = v54;
                    isNew = 0;
                    v27 = 0;
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
    sub_1C93D2C(Master_object, v4);
  }
  Master_object = Gift__IsCommandCode(this->fields.giftType, 0);
  if ( (Master_object & 1) == 0 )
    goto LABEL_43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_47;
  v33 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          this->fields.userSvtID,
          (const MethodInfo_3465A24 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v34 = this->fields.__4__this;
  v35 = v33;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_47;
  if ( !Master_object )
    goto LABEL_47;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v36->fields.instantiatingPOS,
                             0,
                             0);
  if ( !v34 )
    goto LABEL_47;
  v34->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v34->fields.svtRewardComp, Master_object, v37, v38, v39, v40, v41, v42);
  v43 = this->fields.__4__this;
  if ( !v43 || !v35 )
    goto LABEL_47;
  v44 = v43->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v45 = v35[2];
    *(Il2CppObject *)&v68.fields.currentCryptoKey = v35[1];
    *(Il2CppObject *)&v68.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v65 = v68;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v65, 0);
    if ( !v44 )
      goto LABEL_47;
    v46 = this->fields.isNew;
    v47 = Master_object;
    v48 = 1;
    v49 = 14;
    v50 = v44;
  }
  else
  {
    v55 = v35[2];
    *(Il2CppObject *)&v68.fields.currentCryptoKey = v35[1];
    *(Il2CppObject *)&v68.fields.fakeValue = v55;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v64 = v68;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v64, 0);
    if ( !v44 )
      goto LABEL_47;
    v47 = Master_object;
    v49 = 6;
    v50 = v44;
    v46 = 0;
    v48 = 0;
  }
  ServantRewardAction__SetupCommandCode_37870592(v50, v47, v46, v48, v49, 0);
LABEL_43:
  _9__2 = this->fields.__9__2;
  v57 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v58, v59, v60, v61, v62, v63);
  }
  if ( !v57 )
    goto LABEL_47;
  MissionListViewManager__SvtEffCaller(v57, _9__2, v32);
}


void MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8
  const MethodInfo *v6; // x4

  if ( (byte_4D34459 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4D34459 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v6);
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
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v8; // x8
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *v10; // x21
  Il2CppObject *v11; // x20
  struct MissionListViewManager_o *v12; // x8
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct MissionListViewManager_o *v19; // x8
  struct GetSvts_array *v20; // x8
  __int64 v21; // x9
  struct MissionListViewManager_o *v22; // x8
  char v23; // w23
  ServantRewardAction_o *svtRewardComp; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x24
  int32_t v27; // w22
  Il2CppObject v28; // q1
  int64_t v29; // x0
  Il2CppClass *v30; // x8
  int64_t v31; // x20
  struct MissionListViewManager_o *v32; // x8
  struct GetSvts_array *v33; // x8
  __int64 v34; // x9
  GetSvts_o *v35; // x8
  const MethodInfo *v36; // x2
  Il2CppObject v37; // q1
  int64_t v38; // x0
  Il2CppClass *v39; // x8
  int64_t v40; // x20
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4D3445A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__);
    byte_4D3445A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_38;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= LODWORD(getSvtList->max_length) )
    goto LABEL_39;
  v8 = getSvtList->m_Items[callCnt];
  if ( !v8 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__long___GetEntity(
             Master_object,
             v8->fields.userSvtId,
             (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v10 = this->fields.__4__this;
  v11 = Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)Master_object,
                                                                  v12->fields.instantiatingPOS,
                                                                  0,
                                                                  0);
  if ( !v10 )
    goto LABEL_38;
  v10->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v10->fields.svtRewardComp,
    (int32_t)Master_object,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_38;
  v20 = v19->fields.getSvtList;
  if ( !v20 )
    goto LABEL_38;
  v21 = this->fields.callCnt;
  if ( (unsigned int)v21 >= LODWORD(v20->max_length) )
LABEL_39:
    sub_1C93D34(Master_object);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v20->m_Items[v21];
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_object, 0);
  v22 = this->fields.__4__this;
  if ( !v22 || !v11 )
    goto LABEL_38;
  v23 = (char)Master_object;
  svtRewardComp = v22->fields.svtRewardComp;
  klass = v11[5].klass;
  monitor = v11[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = klass;
  *(_QWORD *)&v52.fields.fakeValue = monitor;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v52, 0);
  if ( (v23 & 1) == 0 )
  {
    v37 = v11[2];
    *(Il2CppObject *)&v51.fields.currentCryptoKey = v11[1];
    *(Il2CppObject *)&v51.fields.fakeValue = v37;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v49 = v51;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v49, 0);
    v39 = v11[6].klass;
    *(_QWORD *)&v54.fields.fakeValue = v11[6].monitor;
    v40 = v38;
    *(_QWORD *)&v54.fields.currentCryptoKey = v39;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                    v54,
                                                                    0);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v27, v40, (int32_t)Master_object, 1, 0, 0, 2, 0);
      goto LABEL_34;
    }
LABEL_38:
    sub_1C93D2C(Master_object, v4);
  }
  v28 = v11[2];
  *(Il2CppObject *)&v51.fields.currentCryptoKey = v11[1];
  *(Il2CppObject *)&v51.fields.fakeValue = v28;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v50 = v51;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v50, 0);
  v30 = v11[6].klass;
  *(_QWORD *)&v53.fields.fakeValue = v11[6].monitor;
  v31 = v29;
  *(_QWORD *)&v53.fields.currentCryptoKey = v30;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                  v53,
                                                                  0);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_38;
  v33 = v32->fields.getSvtList;
  if ( !v33 )
    goto LABEL_38;
  v34 = this->fields.callCnt;
  if ( (unsigned int)v34 >= LODWORD(v33->max_length) )
    goto LABEL_39;
  v35 = v33->m_Items[v34];
  if ( !v35 || !svtRewardComp )
    goto LABEL_38;
  ServantRewardAction__Setup(svtRewardComp, v27, v31, (int32_t)Master_object, 1, v35->fields.isNew, 1, 10, 0);
LABEL_34:
  _9__1 = this->fields.__9__1;
  v42 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v43, v44, v45, v46, v47, v48);
  }
  if ( !v42 )
    goto LABEL_38;
  MissionListViewManager__SvtEffCaller(v42, _9__1, v36);
}


void MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D3445B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__);
    byte_4D3445B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
    sub_1C93D2C(Instance, v4);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, this->fields.callCnt + 1, this->fields.callback, v2);
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
  if ( (byte_4D3445C & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass81_0_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3445C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass81_0_o *)_4__this->fields.svtRewardComp) == 0 )
    sub_1C93D2C(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
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
  ScrTerminalListTop_c *v3; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D3445D & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__);
    byte_4D3445D = 1;
  }
  v3 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v3 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v3->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v6 = System_String__Format(ITEM_GET_ASSET_NAME, v5, 0);
  _9__1 = this->fields.__9__1;
  v8 = v6;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v8, _9__1, 1, 0);
}


void MissionListViewManager___c__DisplayClass85_0___StartRewardItemGetEffectAfterTresureEffect_b__1(
        MissionListViewManager___c__DisplayClass85_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  QuestRewardItemAction_o *mRewardItemAction; // x19
  System_Action_o *v21; // x20

  if ( (byte_4D3445E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__);
    sub_1C93AD4(&MissionListViewManager___c__DisplayClass85_1_TypeInfo);
    byte_4D3445E = 1;
  }
  v5 = sub_1C93D20(MissionListViewManager___c__DisplayClass85_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 16) = data,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)data, v14, v15, v16, v17, v18, v19),
        mRewardItemAction = this->fields.mRewardItemAction,
        v21 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0),
        !mRewardItemAction) )
  {
    sub_1C93D2C(v6, v7);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v21, 0.0, 0, 0);
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
  const MethodInfo *v6; // x4
  struct MissionListViewManager___c__DisplayClass85_0_o *v7; // x8

  v2 = this;
  if ( (byte_4D3445F & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass85_1_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3445F = 1;
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
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
  data = v2->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_41247948(data, 0);
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 || (this = (MissionListViewManager___c__DisplayClass85_1_o *)v7->fields.__4__this) == 0 )
LABEL_12:
    sub_1C93D2C(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v7->fields.gifts,
    v7->fields.idx + 1,
    v7->fields.afterDetail,
    v6);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, data);
  _4__this->fields.treasureGetAssetData = data;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.treasureGetAssetData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  const MethodInfo *v6; // x3

  v4 = this;
  if ( (byte_4D34460 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass89_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__);
    byte_4D34460 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass89_0_o *)_4__this->fields.itemGetAssetDatas) == 0
    || (System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (Il2CppObject *)data,
          (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass89_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1C93D2C(this, data);
  }
  MissionListViewManager__LoadItemGetEffects(
    (MissionListViewManager_o *)this,
    v4->fields.idx + 1,
    v4->fields.endAct,
    v6);
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
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    this->fields.__4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    v2);
}


void MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__1(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    this->fields.__4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    v2);
}


void MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__2(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    this->fields.__4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    v2);
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
  __int64 v6; // x1

  if ( (byte_4D34461 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34461 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  if ( isDecide )
    ActionExtensions__Call(this->fields.decideAction, 0);
}