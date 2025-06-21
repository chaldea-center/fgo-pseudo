void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MissionListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4B1F7BC & 1) == 0 )
  {
    sub_1BCAFF8(&MissionListViewManager_TypeInfo, v1);
    byte_4B1F7BC = 1;
  }
  static_fields = MissionListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x40DE021F0LL;
}


void __fastcall MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  AvalonSceneManager_c *v13; // x0

  if ( (byte_4B1F7BB & 1) == 0 )
  {
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo, v6);
    byte_4B1F7BB = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.rewardItemGetEffectPlayList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.dispRewardInfoList, (int32_t)v10, v11, v12);
  this->fields.FADEOUT_KIND = 1;
  v13 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v13->static_fields->DEFAULT_FADE_TIME);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1F7A5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B1F7A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseItemDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1F7A3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_MissionListViewManager_CloseItemDetail__, isDecide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B1F7A3 = 1;
  }
  v4 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCB010(Method_MissionListViewManager_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1F7A4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B1F7A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MissionListViewManager__CreateDisplayRewardList(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        const MethodInfo *method)
{
  char *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *Master_object; // x0
  MissionListViewManager___c_c *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  System_Func_object__bool__o *_9__84_0; // x22
  Il2CppObject *v24; // x23
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  MissionListViewManager___c_c *v28; // x0
  System_Func_object__bool__o *_9__84_1; // x22
  Il2CppObject *v30; // x23
  struct MissionListViewManager___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x23
  struct System_Collections_Generic_List_QuestRewardInfo__o **p_dispRewardInfoList; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  MissionListViewManager_o *ItemEffect; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  int v42; // w8
  __int64 v43; // x23
  char *v44; // x28
  __int64 v45; // x8
  QuestRewardInfo_o *v46; // x21
  const MethodInfo *v47; // x3
  __int64 v48; // x8
  int32_t size; // w27
  const char *v50; // x8
  _QWORD *v51; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const char *v53; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = (char *)gifts;
  if ( (byte_4B1F7B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_GiftEntity___, gifts);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_GiftEntity___, v9);
    sub_1BCAFF8(&System_Func_GiftEntity__bool__TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo, v14);
    sub_1BCAFF8(&MissionListViewManager_TypeInfo, v15);
    sub_1BCAFF8(&QuestRewardInfo_TypeInfo, v16);
    sub_1BCAFF8(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__, v17);
    sub_1BCAFF8(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__, v18);
    sub_1BCAFF8(&MissionListViewManager___c_TypeInfo, v19);
    byte_4B1F7B2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
  v21 = MissionListViewManager___c_TypeInfo;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
    v21 = MissionListViewManager___c_TypeInfo;
  }
  _9__84_0 = (System_Func_object__bool__o *)v21->static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = MissionListViewManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__84_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__84_0,
      v24,
      Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__,
      0LL);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__84_0 = (struct System_Func_GiftEntity__bool__o *)_9__84_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__84_0, (int32_t)_9__84_0, v26, v27);
  }
  if ( BasicHelper__Any_object__50347976(
         (System_Object_array *)v3,
         (System_Func_T__bool__o *)_9__84_0,
         (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v28 = MissionListViewManager___c_TypeInfo;
    if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
      v28 = MissionListViewManager___c_TypeInfo;
    }
    _9__84_1 = (System_Func_object__bool__o *)v28->static_fields->__9__84_1;
    if ( !_9__84_1 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = MissionListViewManager___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__84_1 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__84_1,
        v30,
        Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__,
        0LL);
      v31 = MissionListViewManager___c_TypeInfo->static_fields;
      v31->__9__84_1 = (struct System_Func_GiftEntity__bool__o *)_9__84_1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v31->__9__84_1, (int32_t)_9__84_1, v32, v33);
    }
    v34 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v3,
            (System_Func_TSource__bool__o *)_9__84_1,
            (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    v3 = (char *)System_Linq_Enumerable__ToArray_object_(
                   v34,
                   (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  p_dispRewardInfoList = &this->fields.dispRewardInfoList;
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v35;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.dispRewardInfoList, (int32_t)v35, v37, v38);
  if ( !v3 )
    goto LABEL_43;
  v42 = *((_DWORD *)v3 + 6);
  if ( v42 >= 1 )
  {
    v43 = 0LL;
    v44 = v3 + 32;
    while ( 1 )
    {
      if ( (unsigned int)v43 >= v42 )
LABEL_44:
        sub_1BCB25C(ItemEffect, v40, v41);
      v45 = *(_QWORD *)&v44[8 * v43];
      if ( !v45 || !v22 )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v22,
                                                 &entity,
                                                 *(_DWORD *)(v45 + 24),
                                                 (const MethodInfo_32C7E4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   (int32_t)entity[1].klass,
                                                   v41);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v46 = (QuestRewardInfo_o *)sub_1BCB244(QuestRewardInfo_TypeInfo);
          QuestRewardInfo___ctor(v46, 0LL);
          if ( !v46 )
            break;
          v46->fields.type = 2;
          if ( !entity )
            break;
          v46->fields.objectId = (int32_t)entity[1].klass;
          if ( (unsigned int)v43 >= *((_DWORD *)v3 + 6) )
            goto LABEL_44;
          v48 = *(_QWORD *)&v44[8 * v43];
          if ( !v48 )
            break;
          v46->fields.num = *(_DWORD *)(v48 + 28);
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
            v50 = *(const char **)&ItemEffect->fields.m_CachedPtr;
            v51 = Method_System_Collections_Generic_List_QuestRewardInfo__Add__;
            ++HIDWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( !v50 )
              break;
            m_CancellationTokenSource_low = SLODWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *((_DWORD *)v50 + 6) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ItemEffect,
                (Il2CppObject *)v46,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &v50[8 * m_CancellationTokenSource_low];
              LODWORD(ItemEffect->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *((_QWORD *)v53 + 4) = v46;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v53 + 32), (int32_t)v46, (int32_t)v41, v47);
            }
          }
        }
      }
      v42 = *((_DWORD *)v3 + 6);
      if ( (int)++v43 >= v42 )
        return;
    }
LABEL_43:
    sub_1BCB254(ItemEffect, v40);
  }
}


AlphaTransitionCalculator_o *__fastcall MissionListViewManager__CreateRewardIconAlphaCalculator(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  MissionListViewManager_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  AlphaTransitionCalculator_o *v6; // x20

  if ( (byte_4B1F79A & 1) == 0 )
  {
    sub_1BCAFF8(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1BCAFF8(&MissionListViewManager_TypeInfo, v2);
    byte_4B1F79A = 1;
  }
  v3 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v3 = MissionListViewManager_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v6 = (AlphaTransitionCalculator_o *)sub_1BCB244(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0LL);
  return v6;
}


void __fastcall MissionListViewManager__DisplayAfterMissionAchieveTutorial(
        MissionListViewManager_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 94, callbackAfter, 0, 0, 0, 0, 0LL);
}


void __fastcall MissionListViewManager__EndItemGetEffectAction(
        MissionListViewManager_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x20
  struct System_Collections_Generic_Dictionary_int__AssetData__o *v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  int v29; // w9
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w2
  int v36; // w9
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  Il2CppObject *value; // x21
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v40; // x8
  CommonUI_o *v41; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v43; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4B1F7A9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, afterDetail);
    sub_1BCAFF8(&AssetManager_TypeInfo, v5);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__Clear__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__, v17);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass75_0_TypeInfo, v18);
    byte_4B1F7A9 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v19 = sub_1BCB244(MissionListViewManager___c__DisplayClass75_0_TypeInfo);
  MissionListViewManager___c__DisplayClass75_0___ctor((MissionListViewManager___c__DisplayClass75_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v19 + 24) = afterDetail;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 24), (int32_t)afterDetail, v24, v25);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_22;
  v29 = rewardItemGetEffectPlayList->fields._version + 1;
  rewardItemGetEffectPlayList->fields._size = 0;
  rewardItemGetEffectPlayList->fields._version = v29;
  this->fields.questRewardBoxAction = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.questRewardBoxAction, 0, v26, v27);
  this->fields.isTreasureEffect = 0;
  this->fields.isChangeTitleSprite = 0;
  this->fields.useTreasureGetEffectName = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.useTreasureGetEffectName, 0, v30, v31);
  this->fields.overWriteTitleSpriteName = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.overWriteTitleSpriteName, 0, v32, v33);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_22;
  size = dispRewardInfoList->fields._size;
  v36 = dispRewardInfoList->fields._version + 1;
  dispRewardInfoList->fields._size = 0;
  dispRewardInfoList->fields._version = v36;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)dispRewardInfoList->fields._items, 0, size, 0LL);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
         (const MethodInfo_3320F94 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__) >= 1 )
  {
    v20 = this->fields.itemGetAssetDatas;
    if ( !v20 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v44,
      (System_Collections_Generic_Dictionary_int__object__o *)v20,
      (const MethodInfo_332171C *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v44,
              (const MethodInfo_3472D10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
    {
      value = v44.fields._current.fields.value;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_39722652((AssetData_o *)value, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v44,
      (const MethodInfo_3472E34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    v20 = this->fields.itemGetAssetDatas;
    if ( !v20 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)v20,
      (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = AvalonSceneManager_TypeInfo;
  v41 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v40 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v40->static_fields->DEFAULT_FADE_TIME;
  v43 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v19,
    Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !v41 )
LABEL_22:
    sub_1BCB254(v20, v21);
  CommonUI__maskFadein(v41, DEFAULT_FADE_TIME, v43, 0LL);
}


int32_t __fastcall MissionListViewManager__GetAlphaAnimCnt(
        MissionListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


int32_t __fastcall MissionListViewManager__GetItemGetEffectId(
        MissionListViewManager_o *this,
        QuestRewardInfo_o *rewardInfo,
        const MethodInfo *method)
{
  MissionListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B1F7B6 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, rewardInfo);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v8);
    this = (MissionListViewManager_o *)sub_1BCAFF8(&StringLiteral_18758/*"effectId"*/, v9);
    byte_4B1F7B6 = 1;
  }
  entity = 0LL;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0LL) )
  {
    this = (MissionListViewManager_o *)Gift__IsItem_39617068(rewardInfo->fields.type, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    dispRewardInfoList = v4->fields.dispRewardInfoList;
    if ( !dispRewardInfoList )
      goto LABEL_19;
    if ( dispRewardInfoList->fields._size > 1 )
      return 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_32C7E4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18758/*"effectId"*/, 0, 0LL);
LABEL_19:
    sub_1BCB254(this, rewardInfo);
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return v10->static_fields->EquipGetEffectId;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList___Il2CppFullySharedGenericType_(
        MissionListViewManager_o *this,
        const MethodInfo_309F9F8 *method)
{
  const MethodInfo_309F9F8_RGCTXs *rgctx_data; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 native_size; // x21
  long double v10; // q0
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_TObject__o *v12; // x19
  __int64 v13; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x25
  _BOOL8 v16; // x0
  __int64 v17; // x1
  MethodInfo *_2_UnityEngine_GameObject_GetComponent_TObject; // x1
  void (__fastcall *methodPointer)(); // x0
  void *v20; // x0
  __int64 v21; // x1
  const MethodInfo_309F9F8_RGCTXs *v22; // x8
  struct System_Collections_Generic_List_T__o *v23; // x4
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x1
  Il2CppMethodPointer v25; // x0
  __int64 v27; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-20h] BYREF
  __int64 v30; // [xsp+38h] [xbp-8h]

  v30 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1B4B8();
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_3_TObject->_2.native_size;
  memset(&v29, 0, sizeof(v29));
  memset((char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C1B45C(v10);
  v12 = (System_Collections_Generic_List_TObject__o *)sub_1BCB244(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v16 )
    {
      if ( !current )
        sub_1BCB254(v16, v17);
      _2_UnityEngine_GameObject_GetComponent_TObject = method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_;
      methodPointer = _2_UnityEngine_GameObject_GetComponent_TObject->methodPointer;
      v28.fields._list = (struct System_Collections_Generic_List_T__o *)((char *)&v27
                                                                       - ((native_size + 15) & 0x1FFFFFFF0LL));
      _2_UnityEngine_GameObject_GetComponent_TObject->invoker_method(
        methodPointer,
        _2_UnityEngine_GameObject_GetComponent_TObject,
        current,
        (void **)&v28.fields._list,
        v28.fields._list);
      memcpy(
        (char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v20 = memcpy(
              (char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL),
              (char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL),
              native_size);
      if ( !v12 )
        sub_1BCB254(v20, v21);
      v22 = method->rgctx_data;
      v23 = (struct System_Collections_Generic_List_T__o *)((char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL));
      if ( (v22->_3_TObject->_1.byval_arg.bits & 0x80000000) == 0 )
        v23 = *(struct System_Collections_Generic_List_T__o **)((char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_TObject__Add = v22->_4_System_Collections_Generic_List_TObject__Add;
      v25 = _4_System_Collections_Generic_List_TObject__Add->methodPointer;
      v28.fields._list = v23;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_TObject__o *, System_Collections_Generic_List_Enumerator_object__o *))_4_System_Collections_Generic_List_TObject__Add->invoker_method)(
        v25,
        _4_System_Collections_Generic_List_TObject__Add,
        v12,
        &v28);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return v12;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_309F7A8 *method)
{
  long double v2; // q0
  const MethodInfo_309F7A8_RGCTXs *rgctx_data; // x8
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
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
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1B4B8();
      rgctx_data = method->rgctx_data;
    }
  }
  memset(&v27, 0, sizeof(v27));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C1B45C(v2);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(_0_System_Collections_Generic_List_TObject);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      v20 = Component_object;
      if ( !v11 )
        sub_1BCB254(Component_object, Component_object);
      items = v11->fields._items;
      _4_System_Collections_Generic_List_TObject__Add = method->rgctx_data->_4_System_Collections_Generic_List_TObject__Add;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          (const MethodInfo_36B9BD0 *)_4_System_Collections_Generic_List_TObject__Add->klass->rgctx_data[14].rgctxDataDummy);
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_TObject__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionListViewManager__IsExcludeGetItemEffect(
        MissionListViewManager_o *this,
        int32_t targetItemId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *EventItemNotDispItemGetEffect; // x8
  int max_length; // w9
  bool v7; // w10
  int i; // w11

  if ( (byte_4B1F7A6 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&targetItemId);
    byte_4B1F7A6 = 1;
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
        sub_1BCB254(v4, *(_QWORD *)&targetItemId);
    }
    max_length = EventItemNotDispItemGetEffect->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1BCB25C(v4, *(_QWORD *)&targetItemId, method);
        if ( EventItemNotDispItemGetEffect->m_Items[i + 1] == targetItemId )
          break;
        ++i;
      }
    }
    LOBYTE(EventItemNotDispItemGetEffect) = !v7;
  }
  return (unsigned __int8)EventItemNotDispItemGetEffect & 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__LoadItemGetEffects(
        MissionListViewManager_o *this,
        int32_t idx,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Action_o *v4; // x21
  int32_t v5; // w22
  MissionListViewManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  System_Collections_Generic_List_object__o *dispRewardInfoList; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w8
  System_Collections_Generic_Dictionary_int__object__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v29; // x2
  unsigned int EffectId; // w0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ScrTerminalListTop_c *v34; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v36; // x0
  System_String_o *v37; // x19
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  int v39; // [xsp+Ch] [xbp-34h] BYREF

  while ( 1 )
  {
    v4 = endAct;
    v5 = idx;
    v6 = this;
    if ( (byte_4B1F7B7 & 1) == 0 )
    {
      sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&idx);
      sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__, v7);
      sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__, v8);
      sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo, v9);
      sub_1BCAFF8(&int_TypeInfo, v10);
      sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v11);
      sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__, v12);
      sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
      sub_1BCAFF8(&ScrTerminalListTop_TypeInfo, v14);
      sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__, v15);
      sub_1BCAFF8(&MissionListViewManager___c__DisplayClass89_0_TypeInfo, v16);
      byte_4B1F7B7 = 1;
    }
    v17 = sub_1BCB244(MissionListViewManager___c__DisplayClass89_0_TypeInfo);
    MissionListViewManager___c__DisplayClass89_0___ctor((MissionListViewManager___c__DisplayClass89_0_o *)v17, 0LL);
    if ( !v17
      || (*(_QWORD *)(v17 + 16) = v6,
          sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v6, v20, v21),
          *(_QWORD *)(v17 + 32) = v4,
          *(_DWORD *)(v17 + 28) = v5,
          sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v4, v22, v23),
          (dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList) == 0LL) )
    {
LABEL_17:
      sub_1BCB254(dispRewardInfoList, v19);
    }
    v24 = *(_DWORD *)(v17 + 28);
    if ( v24 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
      return;
    }
    if ( !v24 )
    {
      v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v25,
        (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v6->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v25;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.itemGetAssetDatas, (int32_t)v25, v26, v27);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_17;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             dispRewardInfoList,
             *(_DWORD *)(v17 + 28),
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    EffectId = MissionListViewManager__GetItemGetEffectId(v6, (QuestRewardInfo_o *)Item, v29);
    *(_DWORD *)(v17 + 24) = EffectId;
    v19 = EffectId;
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.itemGetAssetDatas;
    if ( !dispRewardInfoList )
      goto LABEL_17;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)dispRewardInfoList,
            v19,
            (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v17 + 32);
    this = v6;
    *(_QWORD *)&idx = (unsigned int)(*(_DWORD *)(v17 + 28) + 1);
  }
  v34 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v34 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v34->static_fields->ITEM_GET_ASSET_NAME;
  v39 = *(_DWORD *)(v17 + 24);
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v31, v32, v33);
  v37 = System_String__Format(ITEM_GET_ASSET_NAME, v36, 0LL);
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v17,
    Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v37, v38, 1, 0LL);
}


void __fastcall MissionListViewManager__LoadTreasureGetEffect(
        MissionListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x19
  AssetLoader_LoadEndDataHandler_o *v17; // x20

  if ( (byte_4B1F7B4 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, endAct);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__, v6);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass86_0_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_5844/*"Effect/Talk/"*/, v8);
    byte_4B1F7B4 = 1;
  }
  v9 = sub_1BCB244(MissionListViewManager___c__DisplayClass86_0_TypeInfo);
  MissionListViewManager___c__DisplayClass86_0___ctor((MissionListViewManager___c__DisplayClass86_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = endAct;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)endAct, v14, v15);
  v16 = System_String__Concat_62450424(
          (System_String_o *)StringLiteral_5844/*"Effect/Talk/"*/,
          this->fields.useTreasureGetEffectName,
          0LL);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, v17, 1, 0LL);
}


void __fastcall MissionListViewManager__OnChangeAlphaAnim(MissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MissionListViewManager__OnMoveEnd(MissionListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B1F79E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F79E = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_20;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
          gameObject,
          1LL,
          gameObject->klass[1]._1.declaringType);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_18;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_18:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1BCB254(gameObject, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__OpenCostumeReleaseDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  ServantCostumeEntity_o *v8; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-28h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_4B1F7A1 & 1) == 0 )
  {
    sub_1BCAFF8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_1BCAFF8(&MissionInfoMaker_TypeInfo, v6);
    this = (MissionListViewManager_o *)sub_1BCAFF8(&Method_MissionListViewManager_CloseItemDetail__, v7);
    byte_4B1F7A1 = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v8 = resultEntity;
    v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCB244(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v9, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenCostumeReleaseDetail(v8, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__OpenEquipDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1F7A2 & 1) == 0 )
  {
    sub_1BCAFF8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EquipMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&MissionInfoMaker_TypeInfo, v7);
    sub_1BCAFF8(&Method_MissionListViewManager_CloseItemDetail__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1F7A2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v11);
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v12 = entity;
    v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCB244(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenEquipDetail((EquipEntity_o *)v12, v13, v14);
  }
}


void __fastcall MissionListViewManager__RequestInto(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_TObject__o *ObjectList_object; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23

  if ( (byte_4B1F79D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__, v4);
    sub_1BCAFF8(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v5);
    sub_1BCAFF8(&Method_MissionListViewManager_OnMoveEnd__, v6);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v7);
    byte_4B1F79D = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_309F7A8 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_13:
    sub_1BCB254(ObjectList_object, v9);
  size = ObjectList_object->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList_object;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  v13 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v13,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      MissionListViewObject__Init((MissionListViewObject_o *)Item, 4, v15, this->fields.listInDelay, 1, 0LL);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v13;
  }
  while ( v13 < v11->fields._size );
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__RequestListObject(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *ObjectList_object; // x0
  __int64 v16; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1F79C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v11);
    sub_1BCAFF8(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v12);
    sub_1BCAFF8(&Method_MissionListViewManager_OnMoveEnd__, v13);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v14);
    byte_4B1F79C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList_object = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetObjectList_object_(
                                                                     this,
                                                                     (const MethodInfo_309F7A8 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_1BCB254(0LL, v16);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList_object,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v20, v21);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v19, delay, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_46223788(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  MissionListViewManager__RequestListObject(this, mode, 0.0, method);
}


void __fastcall MissionListViewManager__ResetAlphaAnimTime(MissionListViewManager_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0

  this->fields.alphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimTimeOld = realtimeSinceStartup;
  if ( rewardIconAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0LL);
}


void __fastcall MissionListViewManager__SetMode(
        MissionListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  MissionListViewManager__SetMode_46223428(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetMode_46223428(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t v10; // w1

  if ( (byte_4B1F79B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&StringLiteral_11242/*"RequestInto"*/, v5);
    byte_4B1F79B = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
      {
        sub_1BCB254(gameObject, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11242/*"RequestInto"*/,
      0.0,
      0LL);
  }
  else if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 3 )
      v10 = 3;
    else
      v10 = 2;
    MissionListViewManager__RequestListObject(this, v10, 0.0, v6);
  }
}


void __fastcall MissionListViewManager__SetMode_46223732(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  MissionListViewManager__SetMode_46223428(this, mode, v7);
}


void __fastcall MissionListViewManager__SetObjectItem(
        MissionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MissionListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B1F79F & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_1BCAFF8(&MissionListViewObject_TypeInfo, obj);
    byte_4B1F79F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MissionListViewObject_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  MissionListViewObject__Init_47192200((MissionListViewObject_o *)obj, v7, 1, 0LL);
}


void __fastcall MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_c *v3; // x0
  float DEFAULT_FADE_TIME; // s0

  if ( (byte_4B1F7B1 & 1) == 0 )
  {
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, method);
    byte_4B1F7B1 = 1;
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


void __fastcall MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
        MissionListViewManager_o *this,
        MissionListViewItem_o *listViewItem,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *challengeBoardItemList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  MissionListViewManager___c_c *v12; // x8
  CommonUI_o *v13; // x22
  System_Action_o *_9__92_0; // x23
  Il2CppObject *v15; // x24
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B1F7BA & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, listViewItem);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__, v8);
    sub_1BCAFF8(&MissionListViewManager___c_TypeInfo, v9);
    byte_4B1F7BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = MissionListViewManager___c_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
    v12 = MissionListViewManager___c_TypeInfo;
  }
  _9__92_0 = v12->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MissionListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__92_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__92_0,
      v15,
      Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__,
      0LL);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = _9__92_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__92_0, (int32_t)_9__92_0, v17, v18);
  }
  if ( !v13 )
    sub_1BCB254(Instance, v11);
  CommonUI__OpenMissionNaviTransitionConfirmDialog(v13, listViewItem, this, 1, challengeBoardItemList, _9__92_0, 0LL);
}


void __fastcall MissionListViewManager__SetupMissionCondTransitionDialog(
        MissionListViewManager_o *this,
        System_String_o *moveTo,
        System_Action_o *decideAction,
        System_String_o *confirmDialogMessage,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x20
  System_String_o *v24; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v26; // x25

  if ( (byte_4B1F7B9 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, moveTo);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__, v10);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass91_0_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_8617/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, v12);
    sub_1BCAFF8(&StringLiteral_8621/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, v13);
    sub_1BCAFF8(&StringLiteral_8619/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, v14);
    sub_1BCAFF8(&StringLiteral_8620/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, v15);
    byte_4B1F7B9 = 1;
  }
  v16 = sub_1BCB244(MissionListViewManager___c__DisplayClass91_0_TypeInfo);
  MissionListViewManager___c__DisplayClass91_0___ctor((MissionListViewManager___c__DisplayClass91_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_QWORD *)(v16 + 16) = decideAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)decideAction, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8621/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( System_String__IsNullOrEmpty(confirmDialogMessage, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8619/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    confirmDialogMessage = System_String__Format(v22, (Il2CppObject *)moveTo, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8617/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8620/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v26,
    (Il2CppObject *)v16,
    Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_14:
    sub_1BCB254(v17, v18);
  CommonUI__OpenConfirmDialog_30763800(
    (CommonUI_o *)Instance,
    v21,
    confirmDialogMessage,
    v24,
    v23,
    1,
    v26,
    0,
    0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetupTreasureGetEffect(
        MissionListViewManager_o *this,
        int32_t itemIconId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssetData_o *treasureGetAssetData; // x0
  Il2CppObject *Object_object__50315216; // x21
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardBoxAction_o **p_questRewardBoxAction; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *useTreasureGetEffectName; // x22
  ScrTerminalListTop_c *v17; // x0
  ScrTerminalListTop_c *v18; // x0
  System_String_o *v19; // x20
  int32_t v20; // w1

  if ( (byte_4B1F7B5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, *(_QWORD *)&itemIconId);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___, v5);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&ScrTerminalListTop_TypeInfo, v8);
    byte_4B1F7B5 = 1;
  }
  treasureGetAssetData = this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_21;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              treasureGetAssetData,
                              this->fields.useTreasureGetEffectName,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  treasureGetAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                          Object_object__50315216,
                                          (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  v11 = (UnityEngine_GameObject_o *)treasureGetAssetData;
  treasureGetAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)treasureGetAssetData,
                                          0LL);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)treasureGetAssetData, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v11, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v11,
                       (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  p_questRewardBoxAction = &this->fields.questRewardBoxAction;
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.questRewardBoxAction, (int32_t)Component_object, v14, v15);
  if ( !this->fields.isTreasureEffect )
    goto LABEL_15;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v17 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v17 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v17->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    v18 = ScrTerminalListTop_TypeInfo;
    v19 = this->fields.useTreasureGetEffectName;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v18 = ScrTerminalListTop_TypeInfo;
    }
    treasureGetAssetData = (AssetData_o *)System_String__op_Inequality(
                                            v19,
                                            v18->static_fields->TREASURE_GET_NORMAL,
                                            0LL);
  }
  else
  {
LABEL_15:
    treasureGetAssetData = (AssetData_o *)(&dword_0 + 1);
  }
  if ( !*p_questRewardBoxAction )
LABEL_21:
    sub_1BCB254(treasureGetAssetData, *(_QWORD *)&itemIconId);
  if ( itemIconId == 3 )
    v20 = 2;
  else
    v20 = itemIconId == 2;
  QuestRewardBoxAction__Setup(*p_questRewardBoxAction, v20, (unsigned __int8)treasureGetAssetData & 1, 0LL);
}


void __fastcall MissionListViewManager__ShowRewardDetailInfo(
        MissionListViewManager_o *this,
        MissionListViewItem_o *selectItem,
        bool ignoreSubGiftEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  GiftMaster_o *Master_object; // x0
  __int64 v31; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v34; // x8
  __int64 v35; // x2
  GiftEntity_array *v36; // x21
  __int64 v37; // x20
  const MethodInfo *v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Func_object__bool__o *v41; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  il2cpp_array_size_t max_length; // w9
  int v44; // w8
  GiftEntity_o *v45; // x20
  int32_t type; // w0
  Il2CppObject *Entity; // x20
  Il2CppObject *v48; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v49; // x22
  Il2CppObject *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v53; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v54; // x23
  GiftMaster_o *v55; // x22
  bool IsServantEquip; // w23
  Il2CppObject *v57; // x21
  ServantStatusDialog_EndDelegate_o *v58; // x22
  Il2CppObject *v59; // x20
  Il2CppObject *v60; // x21
  ServantStatusDialog_EndDelegate_o *v61; // x22
  const MethodInfo *v62; // x2
  struct System_String_o *MasterName_k__BackingField; // x20
  __int64 v64; // x23
  int32_t v65; // w20
  ServantStatusDialog_EndDelegate_o *v66; // x22
  const MethodInfo *v67; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4B1F7A0 & 1) == 0 )
  {
    sub_1BCAFF8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, selectItem);
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommandCodeMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GiftMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v14);
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, v15);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v16);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_GiftEntity___, v17);
    sub_1BCAFF8(&System_Func_GiftEntity__bool__TypeInfo, v18);
    sub_1BCAFF8(&MissionInfoMaker_TypeInfo, v19);
    sub_1BCAFF8(&Method_MissionListViewManager_CloseCommandCodeDetail__, v20);
    sub_1BCAFF8(&Method_MissionListViewManager_CloseItemDetail__, v21);
    sub_1BCAFF8(&Method_MissionListViewManager_CloseServantStatusDetail__, v22);
    sub_1BCAFF8(&Method_MissionListViewManager_ShowRewardDetailInfo__, v23);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__, v26);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass66_0_TypeInfo, v27);
    byte_4B1F7A0 = 1;
  }
  v28 = Method_MissionListViewManager_ShowRewardDetailInfo__;
  if ( (*((_BYTE *)Method_MissionListViewManager_ShowRewardDetailInfo__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1BCB010(Method_MissionListViewManager_ShowRewardDetailInfo__);
  v29 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0LL);
  if ( !selectItem )
    goto LABEL_52;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_52;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v53 = (CommonUI_o *)Instance;
    v54 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCB244(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v54,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v53 )
      goto LABEL_52;
    CommonUI__OpenItemDetailDialog_30842392(v53, nameTxt, rewardExtraDetailTxt, v54, 0LL);
  }
  else if ( rewardType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GiftMaster___);
    v34 = selectItem->fields.eventMissionEnt;
    if ( !v34 || !Master_object )
      goto LABEL_52;
    Master_object = (GiftMaster_o *)GiftMaster__GetGiftListById(Master_object, v34->fields.giftId, 0LL);
    v36 = (GiftEntity_array *)Master_object;
    if ( ignoreSubGiftEntity )
    {
      v37 = sub_1BCB244(MissionListViewManager___c__DisplayClass66_0_TypeInfo);
      MissionListViewManager___c__DisplayClass66_0___ctor((MissionListViewManager___c__DisplayClass66_0_o *)v37, 0LL);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      Master_object = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity(v36, v38);
      if ( !v37 )
        goto LABEL_52;
      *(_QWORD *)(v37 + 16) = Master_object;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v37 + 16), (int32_t)Master_object, v39, v40);
      v41 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v41,
        (Il2CppObject *)v37,
        Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__,
        0LL);
      v42 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v36,
              (System_Func_TSource__bool__o *)v41,
              (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      Master_object = (GiftMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                        v42,
                                        (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v36 = (GiftEntity_array *)Master_object;
    }
    if ( !v36 )
      goto LABEL_52;
    max_length = v36->max_length;
    v44 = this->fields.alphaAnimCnt % (int)max_length;
    if ( v44 >= max_length )
      sub_1BCB25C(Master_object, v31, v35);
    v45 = v36->m_Items[v44];
    if ( !v45 )
      goto LABEL_52;
    type = v45->fields.type;
    if ( type == 2 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   v45->fields.objectId,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v49 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCB244(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v49,
          (Il2CppObject *)this,
          (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
          0LL);
        if ( v48 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v48, (ItemEntity_o *)Entity, v49, 50, 0LL);
          return;
        }
      }
LABEL_52:
      sub_1BCB254(Master_object, v31);
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_52;
      Master_object = (GiftMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v45->fields.objectId,
                                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_52;
      v55 = Master_object;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_object, 0LL);
      v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v58 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v58,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v57 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30777632((CommonUI_o *)v57, 7, v45, v58, 0LL);
      }
      else
      {
        v64 = *(_QWORD *)&v55->fields._MasterKind_k__BackingField;
        MasterName_k__BackingField = v55->fields._MasterName_k__BackingField;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = v64;
        *(_QWORD *)&v68.fields.fakeValue = MasterName_k__BackingField;
        v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v68, 0LL);
        v66 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v66,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v57 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30777068((CommonUI_o *)v57, 7, v65, v66, 0LL);
      }
    }
    else if ( Gift__IsCommandCode(v45->fields.type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_52;
      v59 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              v45->fields.objectId,
              (const MethodInfo_32C7E00 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v61 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v61,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseCommandCodeDetail__,
        0LL);
      if ( !v60 )
        goto LABEL_52;
      CommonUI__OpenServantEquipStatusDialog_30780236(
        (CommonUI_o *)v60,
        25,
        (CommandCodeEntity_o *)v59,
        0,
        v61,
        0LL,
        0LL);
    }
    else if ( Gift__IsCostumeRelease(v45->fields.type, 0LL) )
    {
      MissionListViewManager__OpenCostumeReleaseDetail(this, v45->fields.objectId, v62);
    }
    else if ( Gift__IsEquip(v45->fields.type, 0LL) )
    {
      MissionListViewManager__OpenEquipDetail(this, v45->fields.objectId, v67);
    }
  }
}


void __fastcall MissionListViewManager__StartEventMissionClearItemAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v23; // x8
  CommonUI_o *v24; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_4B1F7A7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, gifts);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__, v10);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass73_0_TypeInfo, v11);
    byte_4B1F7A7 = 1;
  }
  v12 = sub_1BCB244(MissionListViewManager___c__DisplayClass73_0_TypeInfo);
  MissionListViewManager___c__DisplayClass73_0___ctor((MissionListViewManager___c__DisplayClass73_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = gifts;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)gifts, v17, v18);
  *(_QWORD *)(v12 + 32) = afterDetail;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 32), (int32_t)afterDetail, v19, v20);
  MissionListViewManager__SetTresureEffect(this, v21);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  v24 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v12,
    Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__,
    0LL);
  if ( !v24 )
LABEL_9:
    sub_1BCB254(touchBlockObj, v14);
  CommonUI__maskFadeout(v24, 1, DEFAULT_FADE_TIME, v26, 0LL);
}


void __fastcall MissionListViewManager__StartItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x20
  AvalonSceneManager_o *Instance; // x0
  GiftEntity_array *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Action_o **v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  EventRewardRootComponent_o *targetRoot; // x21
  System_Action_o *v41; // x22
  __int64 methodPtr_low; // x9
  GiftEntity_array *v43; // x2
  __int64 v44; // x8
  __int64 v45; // x9
  __int64 v46; // x8
  int32_t v47; // w21
  __int64 v48; // x8
  __int64 v49; // x9
  __int64 v50; // x8
  const MethodInfo *v51; // x4
  int v52; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v56; // x3
  int32_t v57; // w23
  UnityEngine_Object_o *m_CancellationTokenSource; // x22
  int64_t userSvtId; // x22
  bool isNew; // w23
  bool Eff; // w0
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 v64; // x8
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v66; // x23
  Il2CppClass *v67; // x24
  const MethodInfo *v68; // x3
  int32_t v69; // w23
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  __int64 v72; // x9
  __int64 v73; // x8
  const MethodInfo *v74; // x5
  __int64 v75; // x8
  __int64 v76; // x9
  __int64 v77; // x8
  const MethodInfo *v78; // x5
  __int64 v79; // x3
  GiftEntity_o *v80; // x8
  __int64 v81; // x8
  __int64 v82; // x9
  __int64 v83; // x8
  Il2CppObject *v84; // x0
  Il2CppObject *v85; // x21
  const MethodInfo *v86; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  System_Action_o *v88; // x21
  const MethodInfo *v89; // x3
  MasterMissionListViewManager_o *v90; // x0
  System_Action_o *v91; // x1
  const MethodInfo *v92; // x2
  const MethodInfo *v93; // [xsp+0h] [xbp-70h]
  Il2CppObject *v94; // [xsp+8h] [xbp-68h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+10h] [xbp-60h] BYREF
  GetCommandCodes_o *v96; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v97; // [xsp+20h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_4B1F7A8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, gifts);
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommandCodeMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EquipMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1BCAFF8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v16);
    sub_1BCAFF8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v17);
    sub_1BCAFF8(&EventRewardRootComponent_TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v19);
    sub_1BCAFF8(&MissionInfoMaker_TypeInfo, v20);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v21);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__, v25);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__, v26);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass74_0_TypeInfo, v27);
    byte_4B1F7A8 = 1;
  }
  entity = 0LL;
  v97 = 0LL;
  data = 0LL;
  resultEntity = 0LL;
  v96 = 0LL;
  v94 = 0LL;
  v28 = sub_1BCB244(MissionListViewManager___c__DisplayClass74_0_TypeInfo);
  MissionListViewManager___c__DisplayClass74_0___ctor((MissionListViewManager___c__DisplayClass74_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_106;
  *(_QWORD *)(v28 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 16), (int32_t)this, v31, v32);
  *(_QWORD *)(v28 + 24) = afterDetail;
  v33 = (System_Action_o **)(v28 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 24), (int32_t)afterDetail, v34, v35);
  *(_QWORD *)(v28 + 32) = gifts;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 32), (int32_t)gifts, v36, v37);
  v30 = *(GiftEntity_array **)(v28 + 32);
  *(_DWORD *)(v28 + 40) = idx;
  if ( !v30 )
    goto LABEL_106;
  if ( (signed int)v30->max_length <= idx )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    if ( AvalonSceneManager__checkNowScene(Instance, 72, 0LL) && this->fields.isEffect )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      targetRoot = (EventRewardRootComponent_o *)Instance->fields.targetRoot;
      v41 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v28,
        Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__,
        0LL);
      if ( !targetRoot )
        goto LABEL_106;
      methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(targetRoot->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardRootComponent_c *)targetRoot->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1BCB514(targetRoot);
        MasterMissionListViewManager__OpenOneResultDialog(v90, v91, v92);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(targetRoot, v41, 0LL);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v33, v39);
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
    MissionListViewManager__CreateDisplayRewardList(this, v30, v38);
LABEL_22:
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v30);
  v44 = *(_QWORD *)(v28 + 32);
  if ( !v44 )
    goto LABEL_106;
  v45 = *(int *)(v28 + 40);
  if ( (unsigned int)v45 >= *(_DWORD *)(v44 + 24) )
    goto LABEL_107;
  v46 = *(_QWORD *)(v44 + 8 * v45 + 32);
  if ( !v46 )
    goto LABEL_106;
  v47 = *(_DWORD *)(v46 + 20);
  if ( Gift__IsServant(v47, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
    v48 = *(_QWORD *)(v28 + 32);
    if ( !v48 )
      goto LABEL_106;
    v49 = *(int *)(v28 + 40);
    if ( (unsigned int)v49 < *(_DWORD *)(v48 + 24) )
    {
      v50 = *(_QWORD *)(v48 + 8 * v49 + 32);
      if ( !v50 || !Instance )
        goto LABEL_106;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &entity,
                                           *(_DWORD *)(v50 + 24),
                                           (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_106;
        Instance = (AvalonSceneManager_o *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_106;
        v52 = (int)Instance;
        Instance = (AvalonSceneManager_o *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
        if ( ((v52 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_106;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v100.fields.currentCryptoKey = klass;
          *(_QWORD *)&v100.fields.fakeValue = monitor;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v100, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v57, v56) )
          {
            Instance = (AvalonSceneManager_o *)entity;
            if ( !entity )
              goto LABEL_106;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_106;
              m_CancellationTokenSource = (UnityEngine_Object_o *)Instance[12].fields.m_CancellationTokenSource;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(m_CancellationTokenSource, 0LL, 0LL) )
              {
                Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_106;
                Instance = (AvalonSceneManager_o *)Instance[12].fields.m_CancellationTokenSource;
                if ( !Instance )
                  goto LABEL_106;
                MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)Instance, 0LL);
              }
            }
            this->fields.isEffect = 1;
            Instance = (AvalonSceneManager_o *)data;
            if ( data )
            {
              userSvtId = data->fields.userSvtId;
              isNew = data->fields.isNew;
              Eff = GetSvts__isDoGetEff(data, 0LL);
LABEL_69:
              MissionListViewManager__StartRewardGetEffect(
                this,
                userSvtId,
                isNew,
                Eff,
                v47,
                *(GiftEntity_array **)(v28 + 32),
                *(_DWORD *)(v28 + 40),
                *(System_Action_o **)(v28 + 24),
                v93);
              return;
            }
LABEL_106:
            sub_1BCB254(Instance, v30);
          }
        }
      }
      goto LABEL_105;
    }
LABEL_107:
    sub_1BCB25C(Instance, v30, v43);
  }
  if ( Gift__IsCommandCode(v47, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v62 = *(_QWORD *)(v28 + 32);
    if ( !v62 )
      goto LABEL_106;
    v63 = *(int *)(v28 + 40);
    if ( (unsigned int)v63 < *(_DWORD *)(v62 + 24) )
    {
      v64 = *(_QWORD *)(v62 + 8 * v63 + 32);
      if ( !v64 || !Instance )
        goto LABEL_106;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &v97,
                                           *(_DWORD *)(v64 + 24),
                                           (const MethodInfo_32C7E4C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v97 )
          goto LABEL_106;
        getCommandCodeList = this->fields.getCommandCodeList;
        v67 = v97[1].klass;
        v66 = v97[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v101.fields.currentCryptoKey = v67;
        *(_QWORD *)&v101.fields.fakeValue = v66;
        v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v101, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v96, v69, v68) )
        {
          this->fields.isEffect = 1;
          Instance = (AvalonSceneManager_o *)v96;
          if ( v96 )
          {
            userSvtId = v96->fields.userCommandCodeId;
            isNew = v96->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v96, 0LL);
            goto LABEL_69;
          }
          goto LABEL_106;
        }
      }
      goto LABEL_105;
    }
    goto LABEL_107;
  }
  Instance = (AvalonSceneManager_o *)Gift__IsCostumeRelease(v47, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v71 = *(_QWORD *)(v28 + 32);
    if ( !v71 )
      goto LABEL_106;
    v72 = *(int *)(v28 + 40);
    if ( (unsigned int)v72 >= *(_DWORD *)(v71 + 24) )
      goto LABEL_107;
    v73 = *(_QWORD *)(v71 + 8 * v72 + 32);
    if ( !v73 )
      goto LABEL_106;
    Instance = (AvalonSceneManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         (MissionListViewManager_o *)Instance,
                                         &resultEntity,
                                         *(_DWORD *)(v73 + 24),
                                         v70);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      this->fields.isEffect = 1;
      if ( !resultEntity )
        goto LABEL_106;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        this,
        resultEntity->fields.name,
        *(GiftEntity_array **)(v28 + 32),
        *(_DWORD *)(v28 + 40),
        *(System_Action_o **)(v28 + 24),
        v74);
      return;
    }
LABEL_105:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v28 + 32),
      *(_DWORD *)(v28 + 40) + 1,
      *(System_Action_o **)(v28 + 24),
      v51);
    return;
  }
  if ( !Gift__IsEquip(v47, 0LL) )
  {
    if ( Gift__IsItem(v47, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
      v81 = *(_QWORD *)(v28 + 32);
      if ( !v81 )
        goto LABEL_106;
      v82 = *(int *)(v28 + 40);
      if ( (unsigned int)v82 < *(_DWORD *)(v81 + 24) )
      {
        v83 = *(_QWORD *)(v81 + 8 * v82 + 32);
        if ( !v83 || !Instance )
          goto LABEL_106;
        v84 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_DWORD *)(v83 + 24),
                (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v84 )
        {
          v85 = v84;
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_106;
          Instance = (AvalonSceneManager_o *)CommonUI__IsGetItemEffect(
                                               (CommonUI_o *)Instance,
                                               (int32_t)v85[1].klass,
                                               0LL);
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
                (int32_t)v85[1].klass,
                *(GiftEntity_array **)(v28 + 32),
                *(_DWORD *)(v28 + 40),
                *(System_Action_o **)(v28 + 24),
                v86);
              return;
            }
          }
          else if ( !dispRewardInfoList )
          {
            goto LABEL_106;
          }
          if ( dispRewardInfoList->fields._size >= 1 )
          {
            v88 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(
              v88,
              (Il2CppObject *)v28,
              Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__,
              0LL);
            MissionListViewManager__LoadItemGetEffects(this, 0, v88, v89);
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
  Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EquipMaster___);
  v75 = *(_QWORD *)(v28 + 32);
  if ( !v75 )
    goto LABEL_106;
  v76 = *(int *)(v28 + 40);
  if ( (unsigned int)v76 >= *(_DWORD *)(v75 + 24) )
    goto LABEL_107;
  v77 = *(_QWORD *)(v75 + 8 * v76 + 32);
  if ( !v77 || !Instance )
    goto LABEL_106;
  Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &v94,
                                       *(_DWORD *)(v77 + 24),
                                       (const MethodInfo_32C7E4C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_105;
  this->fields.isEffect = 1;
  v43 = *(GiftEntity_array **)(v28 + 32);
  if ( !v43 )
    goto LABEL_106;
  v79 = *(int *)(v28 + 40);
  if ( (unsigned int)v79 >= v43->max_length )
    goto LABEL_107;
  v80 = v43->m_Items[v79];
  if ( !v80 )
    goto LABEL_106;
  MissionListViewManager__StartRewardEquipGetEffect(this, v80->fields.objectId, v43, v79, *v33, v78);
}


void __fastcall MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        MissionListViewManager_o *this,
        System_String_o *name,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
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
  System_Action_o *v29; // x22

  if ( (byte_4B1F7AB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, name);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__, v12);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass77_0_TypeInfo, v13);
    byte_4B1F7AB = 1;
  }
  v14 = sub_1BCB244(MissionListViewManager___c__DisplayClass77_0_TypeInfo);
  MissionListViewManager___c__DisplayClass77_0___ctor((MissionListViewManager___c__DisplayClass77_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_7;
  *(_QWORD *)(v14 + 16) = name;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)name, v17, v18);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v19, v20);
  *(_QWORD *)(v14 + 32) = gifts;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 32), (int32_t)gifts, v21, v22);
  *(_QWORD *)(v14 + 48) = afterDetail;
  *(_DWORD *)(v14 + 40) = idx;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 48), (int32_t)afterDetail, v23, v24);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v28 = (CommonUI_o *)Instance,
        v29 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v14,
          Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0LL),
        !v28) )
  {
LABEL_7:
    sub_1BCB254(touchBlockObj, v16);
  }
  CommonUI__maskFadeout(v28, FADEOUT_KIND, FADEOUT_TIME, v29, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartRewardEquipGetEffect(
        MissionListViewManager_o *this,
        int32_t equipId,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  QuestRewardInfo_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  _DWORD *v28; // x8
  __int64 v29; // x9
  __int64 v30; // x10
  __int64 v31; // x9
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v35; // x19
  System_Action_o *v36; // x22

  if ( (byte_4B1F7AA & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_1BCAFF8(&QuestRewardInfo_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__, v13);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass76_0_TypeInfo, v14);
    byte_4B1F7AA = 1;
  }
  v15 = sub_1BCB244(MissionListViewManager___c__DisplayClass76_0_TypeInfo);
  MissionListViewManager___c__DisplayClass76_0___ctor((MissionListViewManager___c__DisplayClass76_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 24), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 32) = gifts;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)gifts, v20, v21);
  *(_QWORD *)(v15 + 48) = afterDetail;
  *(_DWORD *)(v15 + 40) = idx;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 48), (int32_t)afterDetail, v22, v23);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v24 = (QuestRewardInfo_o *)sub_1BCB244(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v24, 0LL);
  *(_QWORD *)(v15 + 16) = v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)v24, v25, v26);
  v28 = *(_DWORD **)(v15 + 16);
  if ( !v28 )
    goto LABEL_11;
  v28[4] = 5;
  v28[5] = equipId;
  v29 = *(_QWORD *)(v15 + 32);
  if ( !v29 )
    goto LABEL_11;
  v30 = *(int *)(v15 + 40);
  if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 24) )
    sub_1BCB25C(touchBlockObj, v17, v27);
  v31 = *(_QWORD *)(v29 + 8 * v30 + 32);
  if ( !v31
    || (v28[6] = *(_DWORD *)(v31 + 28),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v35 = (CommonUI_o *)Instance,
        v36 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v15,
          Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__,
          0LL),
        !v35) )
  {
LABEL_11:
    sub_1BCB254(touchBlockObj, v17);
  }
  CommonUI__maskFadeout(v35, FADEOUT_KIND, FADEOUT_TIME, v36, 0LL);
}


void __fastcall MissionListViewManager__StartRewardGetEffect(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x22
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v32; // x19
  System_Action_o *v33; // x21

  if ( (byte_4B1F7AD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, userSvtID);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__, v18);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass79_0_TypeInfo, v19);
    byte_4B1F7AD = 1;
  }
  v20 = sub_1BCB244(MissionListViewManager___c__DisplayClass79_0_TypeInfo);
  MissionListViewManager___c__DisplayClass79_0___ctor((MissionListViewManager___c__DisplayClass79_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_7;
  *(_DWORD *)(v20 + 16) = giftType;
  *(_QWORD *)(v20 + 24) = userSvtID;
  *(_QWORD *)(v20 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)this, v23, v24);
  *(_BYTE *)(v20 + 40) = isDoEffect;
  *(_BYTE *)(v20 + 41) = isNew;
  *(_QWORD *)(v20 + 48) = gifts;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 48), (int32_t)gifts, v25, v26);
  *(_QWORD *)(v20 + 64) = afterDetail;
  *(_DWORD *)(v20 + 56) = idx;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 64), (int32_t)afterDetail, v27, v28);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v32 = (CommonUI_o *)Instance,
        v33 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v33,
          (Il2CppObject *)v20,
          Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__,
          0LL),
        !v32) )
  {
LABEL_7:
    sub_1BCB254(touchBlockObj, v22);
  }
  CommonUI__maskFadeout(v32, FADEOUT_KIND, FADEOUT_TIME, v33, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartRewardItemGetEffect(
        MissionListViewManager_o *this,
        int32_t itemId,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  QuestRewardInfo_o *v28; // x24
  __int64 *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x2
  _DWORD *v33; // x8
  __int64 v34; // x9
  __int64 v35; // x10
  __int64 v36; // x9
  unsigned int ItemEffectId; // w0
  const MethodInfo *v38; // x4
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v42; // x8
  __int64 v43; // x9
  int v44; // w10
  __int64 v45; // x13
  int v46; // w11
  int v47; // w12
  __int64 v48; // x14
  __int64 v49; // x15
  Il2CppObject *v50; // x19
  AvalonSceneManager_c *v51; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v53; // x21

  if ( (byte_4B1F7AC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&itemId);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_1BCAFF8(&QuestRewardInfo_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__, v16);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass78_0_TypeInfo, v17);
    byte_4B1F7AC = 1;
  }
  v18 = sub_1BCB244(MissionListViewManager___c__DisplayClass78_0_TypeInfo);
  MissionListViewManager___c__DisplayClass78_0___ctor((MissionListViewManager___c__DisplayClass78_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_33;
  *(_QWORD *)(v18 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 24), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 40) = gifts;
  v23 = (__int64 *)(v18 + 40);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 40), (int32_t)gifts, v24, v25);
  *(_DWORD *)(v18 + 48) = idx;
  *(_QWORD *)(v18 + 56) = afterDetail;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 56), (int32_t)afterDetail, v26, v27);
  v28 = (QuestRewardInfo_o *)sub_1BCB244(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v28, 0LL);
  *(_QWORD *)(v18 + 32) = v28;
  v29 = (__int64 *)(v18 + 32);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v28, v30, v31);
  v33 = *(_DWORD **)(v18 + 32);
  if ( !v33 )
    goto LABEL_33;
  v33[4] = 2;
  v33[5] = itemId;
  v34 = *(_QWORD *)(v18 + 40);
  if ( !v34 )
    goto LABEL_33;
  v35 = *(int *)(v18 + 48);
  if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 24) )
    goto LABEL_34;
  v36 = *(_QWORD *)(v34 + 8 * v35 + 32);
  if ( !v36 )
    goto LABEL_33;
  v33[6] = *(_DWORD *)(v36 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v18 + 32), 0LL);
  *(_DWORD *)(v18 + 16) = ItemEffectId;
  v20 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v20,
         (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v18 + 40),
      *(_DWORD *)(v18 + 48) + 1,
      *(System_Action_o **)(v18 + 56),
      v38);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  v20 = *(unsigned int *)(v18 + 16);
  v39 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v40 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v39 )
    goto LABEL_33;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      v20,
      *(const MethodInfo_369CBAC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v39 + 4 * m_CancellationTokenSource_low + 32) = v20;
  }
  v42 = *v29;
  if ( !*v29 )
    goto LABEL_33;
  *(_DWORD *)(v42 + 24) = 0;
  v43 = *v23;
  if ( !*v23 )
    goto LABEL_33;
  v44 = *(_DWORD *)(v43 + 24);
  if ( v44 >= 1 )
  {
    v45 = *(int *)(v18 + 48);
    v46 = 0;
    v47 = 0;
    v48 = v43 + 8 * v45 + 32;
    while ( v44 != v46 && (unsigned int)v45 < v44 )
    {
      if ( !*(_QWORD *)v48 )
        goto LABEL_33;
      v49 = *(_QWORD *)(v43 + 8LL * v46 + 32);
      if ( !v49 )
        goto LABEL_33;
      if ( *(_DWORD *)(*(_QWORD *)v48 + 24LL) == *(_DWORD *)(v49 + 24) )
      {
        v47 += *(_DWORD *)(v49 + 28);
        *(_DWORD *)(v42 + 24) = v47;
      }
      if ( v44 == ++v46 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1BCB25C(Instance, v20, v32);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v51 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v51 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v51->static_fields->DEFAULT_FADE_TIME;
  v53 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v18,
    Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v50 )
LABEL_33:
    sub_1BCB254(Instance, v20);
  CommonUI__maskFadeout((CommonUI_o *)v50, 1, DEFAULT_FADE_TIME, v53, 0LL);
}


void __fastcall MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x20
  System_Collections_Generic_List_object__o *dispRewardInfoList; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v33; // x2
  unsigned int EffectId; // w0
  __int64 v35; // x2
  __int64 v36; // x3
  const MethodInfo *v37; // x4
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  ScrTerminalListTop_c *v41; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x21
  Il2CppObject *Object_object__50315216; // x21
  UnityEngine_GameObject_o *v46; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardItemAction_o **v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  QuestRewardItemAction_o *v51; // x22
  ScrTerminalListTop_c *v52; // x0
  System_String_o *useTreasureGetEffectName; // x22
  QuestRewardItemAction_o *v54; // x21
  System_String_o **p_overWriteTitleSpriteName; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v59; // x19
  System_Action_o *v60; // x22
  int v61; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1F7B3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, gifts);
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__, v10);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v11);
    sub_1BCAFF8(&int_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__, v16);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v18);
    sub_1BCAFF8(&ScrTerminalListTop_TypeInfo, v19);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1BCAFF8(
      &Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
      v21);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass85_0_TypeInfo, v22);
    byte_4B1F7B3 = 1;
  }
  v23 = sub_1BCB244(MissionListViewManager___c__DisplayClass85_0_TypeInfo);
  MissionListViewManager___c__DisplayClass85_0___ctor((MissionListViewManager___c__DisplayClass85_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_36;
  *(_QWORD *)(v23 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 32), (int32_t)this, v26, v27);
  *(_QWORD *)(v23 + 40) = gifts;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 40), (int32_t)gifts, v28, v29);
  *(_QWORD *)(v23 + 56) = afterDetail;
  *(_DWORD *)(v23 + 48) = idx;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 56), (int32_t)afterDetail, v30, v31);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Item = System_Collections_Generic_List_object___get_Item(
           dispRewardInfoList,
           0,
           (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
  EffectId = MissionListViewManager__GetItemGetEffectId(this, (QuestRewardInfo_o *)Item, v33);
  *(_DWORD *)(v23 + 16) = EffectId;
  v25 = EffectId;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)dispRewardInfoList,
         v25,
         (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v23 + 40),
      *(_DWORD *)(v23 + 48) + 1,
      *(System_Action_o **)(v23 + 56),
      v37);
    return;
  }
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v25 = *(unsigned int *)(v23 + 16);
  items = dispRewardInfoList->fields._items;
  v39 = Method_System_Collections_Generic_List_int__Add__;
  ++dispRewardInfoList->fields._version;
  if ( !items )
    goto LABEL_36;
  size = dispRewardInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)dispRewardInfoList,
      v25,
      *(const MethodInfo_369CBAC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    dispRewardInfoList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = v25;
  }
  v41 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v41 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v41->static_fields->ITEM_GET_EFFECT_NAME;
  v61 = *(_DWORD *)(v23 + 16);
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v35, v36, v37);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__Format(
                                                                      ITEM_GET_EFFECT_NAME,
                                                                      v43,
                                                                      0LL);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_36;
  v44 = (System_String_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemGetAssetDatas,
                                                                      *(_DWORD *)(v23 + 16),
                                                                      (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              (AssetData_o *)dispRewardInfoList,
                              v44,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__50315216,
                                                                      (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v46 = (UnityEngine_GameObject_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)dispRewardInfoList,
                                                                      0LL);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)dispRewardInfoList, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v46, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v46,
                       (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v23 + 24) = Component_object;
  v48 = (QuestRewardItemAction_o **)(v23 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 24), (int32_t)Component_object, v49, v50);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v51 = *v48;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                      dispRewardInfoList,
                                                                      (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
  if ( !v51 )
    goto LABEL_36;
  QuestRewardItemAction__Setup_35754776(
    v51,
    (QuestRewardInfo_array *)dispRewardInfoList,
    *(_DWORD *)(v23 + 16) == 0,
    0LL);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(
                                                                      this->fields.overWriteTitleSpriteName,
                                                                      0LL);
  if ( ((unsigned __int8)dispRewardInfoList & 1) == 0 )
  {
    v54 = *v48;
    if ( !v54 )
      goto LABEL_36;
    p_overWriteTitleSpriteName = &this->fields.overWriteTitleSpriteName;
    goto LABEL_33;
  }
  v52 = ScrTerminalListTop_TypeInfo;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v52 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Equality(useTreasureGetEffectName, v52->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)ScrTerminalListTop_TypeInfo;
    v54 = *v48;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( v54 )
    {
      p_overWriteTitleSpriteName = &ScrTerminalListTop_TypeInfo->static_fields->PRIZE_ITEM_GET_TITLE;
LABEL_33:
      QuestRewardItemAction__SetTitleSprite(v54, *p_overWriteTitleSpriteName, 0LL);
      goto LABEL_34;
    }
LABEL_36:
    sub_1BCB254(dispRewardInfoList, v25);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  FADEOUT_KIND = this->fields.FADEOUT_KIND;
  FADEOUT_TIME = this->fields.FADEOUT_TIME;
  v59 = (CommonUI_o *)Instance;
  v60 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v23,
    Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
    0LL);
  if ( !v59 )
    goto LABEL_36;
  CommonUI__maskFadeout(v59, FADEOUT_KIND, FADEOUT_TIME, v60, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v21; // x19
  System_Action_o *v22; // x22

  if ( (byte_4B1F7AE & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&callCnt);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__, v8);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass80_0_TypeInfo, v9);
    byte_4B1F7AE = 1;
  }
  v10 = sub_1BCB244(MissionListViewManager___c__DisplayClass80_0_TypeInfo);
  MissionListViewManager___c__DisplayClass80_0___ctor((MissionListViewManager___c__DisplayClass80_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 32) = callback;
  *(_DWORD *)(v10 + 24) = callCnt;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)callback, v15, v16);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v10 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v21 = (CommonUI_o *)Instance;
    v22 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v10,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( v21 )
    {
      CommonUI__maskFadeout(v21, FADEOUT_KIND, FADEOUT_TIME, v22, 0LL);
      return;
    }
LABEL_9:
    sub_1BCB254(v11, v12);
  }
  ActionExtensions__Call(*(System_Action_o **)(v10 + 32), 0LL);
}


void __fastcall MissionListViewManager__SvtEffCaller(
        MissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  AvalonSceneManager_c *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v16; // x20

  if ( (byte_4B1F7AF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__, v6);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass81_0_TypeInfo, v7);
    byte_4B1F7AF = 1;
  }
  v8 = sub_1BCB244(MissionListViewManager___c__DisplayClass81_0_TypeInfo);
  MissionListViewManager___c__DisplayClass81_0___ctor((MissionListViewManager___c__DisplayClass81_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)callback, v13, v14);
  svtRewardComp = this->fields.svtRewardComp;
  v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__,
    0LL);
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtRewardComp )
LABEL_8:
    sub_1BCB254(v9, v10);
  ServantRewardAction__Play(svtRewardComp, v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *Master_object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  int32_t v10; // w20
  System_String_o *v11; // x0
  int32_t v12; // w21
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = objectId;
  if ( (byte_4B1F7B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantCostumeMaster___, resultEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    byte_4B1F7B0 = 1;
  }
  Master_object = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !Master_object )
    goto LABEL_8;
  v8 = Master_object;
  v9 = System_String__Substring_62496348(Master_object, 0, Master_object->fields._stringLength - 2, 0LL);
  v10 = System_Int32__Parse(v9, 0LL);
  v11 = System_String__Substring(v8, v8->fields._stringLength - 2, 0LL);
  v12 = System_Int32__Parse(v11, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1BCB254(Master_object, v7);
  return ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, resultEntity, v10, v12, 0LL);
}


bool __fastcall MissionListViewManager__TrySetupMissionCondNaviAction(
        MissionListViewManager_o *this,
        MissionListViewItem_o *item,
        System_Action_o **naviAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  MissionListViewItem_o *Master_object; // x0
  MissionNaviTransitionBoardItem_o *v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  MissionListViewItem_o **v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_object__o *v35; // x23
  System_Collections_Generic_List_object__o **v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  bool v42; // w23
  System_Action_o *v43; // x21
  BalanceConfig_c *v44; // x0
  EventMissionConditionEntity_o *NotClearCondInfo; // x0
  int condType; // w8
  MissionListViewItem_o *v47; // x4
  __int64 *v48; // x8
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_List_object__o *v51; // x8
  struct System_Object_array *items; // x9
  _QWORD *v53; // x10
  __int64 size; // x11
  MissionListViewItem_o *v55; // x1
  Il2CppClass **v56; // x0
  System_Action_o *v57; // x0
  __int64 *v58; // x8
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 sortIndex; // x10
  __int64 v64; // x8
  System_Action_o *v65; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1F7B8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, item);
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_MissionNaviTransitionMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(
      &Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__,
      v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v13);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__, v14);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__, v15);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__, v16);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass90_0_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_4533/*"Combine/ServantSkillCombine"*/, v18);
    sub_1BCAFF8(&StringLiteral_4531/*"Combine/ServantEQCombine"*/, v19);
    sub_1BCAFF8(&StringLiteral_4529/*"Combine/ClassBoard"*/, v20);
    sub_1BCAFF8(&StringLiteral_4532/*"Combine/ServantLimitCountUp"*/, v21);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v22);
    sub_1BCAFF8(&StringLiteral_13050/*"Summon/FRIEND_POINT"*/, v23);
    sub_1BCAFF8(&StringLiteral_4530/*"Combine/ServantCombine"*/, v24);
    byte_4B1F7B8 = 1;
  }
  entity = 0LL;
  v25 = sub_1BCB244(MissionListViewManager___c__DisplayClass90_0_TypeInfo);
  MissionListViewManager___c__DisplayClass90_0___ctor((MissionListViewManager___c__DisplayClass90_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_54;
  *(_QWORD *)(v25 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 16), (int32_t)this, v28, v29);
  *(_QWORD *)(v25 + 24) = item;
  v30 = (MissionListViewItem_o **)(v25 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 24), (int32_t)item, v31, v32);
  *naviAction = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)naviAction, 0, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *(_QWORD *)(v25 + 32) = v35;
  v36 = (System_Collections_Generic_List_object__o **)(v25 + 32);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v35, v37, v38);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
  if ( !*v30 )
    goto LABEL_54;
  eventMissionEnt = (*v30)->fields.eventMissionEnt;
  if ( !eventMissionEnt || !Master_object )
    goto LABEL_54;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         eventMissionEnt->fields.id,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__) )
  {
    Master_object = (MissionListViewItem_o *)entity;
    if ( entity )
    {
      switch ( HIDWORD(entity[1].klass) )
      {
        case 1:
          v42 = MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v30,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v25 + 32),
                  0LL);
          v43 = 0LL;
          if ( v42 )
          {
            v43 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(
              v43,
              (Il2CppObject *)v25,
              Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__,
              0LL);
          }
          *naviAction = v43;
          sub_1BCAF9C((CGThumbnailListItem_o *)naviAction, (int32_t)v43, v40, v41);
          return v42;
        case 2:
          if ( MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
                 (MissionNaviTransitionEntity_o *)entity,
                 *v30,
                 (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v25 + 32),
                 0LL) )
          {
            goto LABEL_42;
          }
          goto LABEL_18;
        case 3:
          if ( !MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v30,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v25 + 32),
                  0LL) )
            goto LABEL_18;
          goto LABEL_42;
        case 4:
          Master_object = (MissionListViewItem_o *)MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem(
                                                     (MissionNaviTransitionEntity_o *)entity,
                                                     *v30,
                                                     0LL);
          v51 = *v36;
          if ( !*v36 )
            goto LABEL_54;
          items = v51->fields._items;
          v53 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
          ++v51->fields._version;
          if ( !items )
            goto LABEL_54;
          size = v51->fields._size;
          v55 = Master_object;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &items->obj.klass + size;
            v51->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v55;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v55, v49, v50);
          }
LABEL_42:
          v57 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          v58 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__;
          break;
        default:
          goto LABEL_18;
      }
      goto LABEL_52;
    }
    goto LABEL_54;
  }
LABEL_18:
  v44 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  if ( !v44->static_fields->IsMissionNaviAutoClassify )
    return 0;
  Master_object = *v30;
  if ( !*v30 )
    goto LABEL_54;
  NotClearCondInfo = MissionListViewItem__GetNotClearCondInfo(Master_object, (const MethodInfo *)v27);
  if ( !NotClearCondInfo )
    return 0;
  condType = NotClearCondInfo->fields.condType;
  if ( condType > 141 )
  {
    switch ( condType )
    {
      case 187:
        v47 = *v30;
        v48 = &StringLiteral_4529/*"Combine/ClassBoard"*/;
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
        v47 = *v30;
        v48 = &StringLiteral_4533/*"Combine/ServantSkillCombine"*/;
        break;
    }
LABEL_44:
    v27 = MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_47201268(
            (System_String_o *)*v48,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            (System_String_o *)StringLiteral_1/*""*/,
            v47,
            0LL);
    if ( v27 )
    {
      Master_object = (MissionListViewItem_o *)*v36;
      if ( *v36 )
      {
        v61 = *(_QWORD *)&Master_object->fields.selectNum;
        v62 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
        ++Master_object->fields.loopIndex;
        if ( v61 )
        {
          sortIndex = Master_object->fields.sortIndex;
          if ( (unsigned int)sortIndex >= *(_DWORD *)(v61 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v27,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v64 = v61 + 8 * sortIndex;
            Master_object->fields.sortIndex = sortIndex + 1;
            *(_QWORD *)(v64 + 32) = v27;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v64 + 32), (int32_t)v27, v59, v60);
          }
          v57 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          v58 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__;
LABEL_52:
          v65 = v57;
          System_Action___ctor(v57, (Il2CppObject *)v25, *v58, 0LL);
          *naviAction = v65;
          sub_1BCAF9C((CGThumbnailListItem_o *)naviAction, (int32_t)v65, v66, v67);
          return 1;
        }
      }
LABEL_54:
      sub_1BCB254(Master_object, v27);
    }
    return 0;
  }
  v42 = 0;
  if ( condType > 7 )
  {
    if ( condType == 8 )
    {
      v47 = *v30;
      v48 = &StringLiteral_13050/*"Summon/FRIEND_POINT"*/;
      goto LABEL_44;
    }
    if ( condType == 141 )
    {
      v47 = *v30;
      v48 = &StringLiteral_4531/*"Combine/ServantEQCombine"*/;
      goto LABEL_44;
    }
  }
  else
  {
    if ( condType == 6 )
    {
LABEL_40:
      v47 = *v30;
      v48 = &StringLiteral_4530/*"Combine/ServantCombine"*/;
      goto LABEL_44;
    }
    if ( condType == 7 )
    {
LABEL_29:
      v47 = *v30;
      v48 = &StringLiteral_4532/*"Combine/ServantLimitCountUp"*/;
      goto LABEL_44;
    }
  }
  return v42;
}


void __fastcall MissionListViewManager__Update(MissionListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  MissionListViewManager__UpdateAnim(this, v3);
}


void __fastcall MissionListViewManager__UpdateAnim(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_rewardIconAlphaCalculator; // x20
  AlphaTransitionCalculator_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  float realtimeSinceStartup; // s0
  float v11; // s0
  float v12; // s0
  float alphaAnimTimeOld; // s9
  float v14; // s8
  MissionListViewManager_c *v15; // x0
  float v16; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v18; // w21
  MissionListViewManager_c *v19; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v21; // w21

  if ( (byte_4B1F799 & 1) == 0 )
  {
    sub_1BCAFF8(&MissionListViewManager_TypeInfo, method);
    sub_1BCAFF8(&Method_TransitionCalculator_float__Update__, v3);
    byte_4B1F799 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v6 = MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = v6;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.rewardIconAlphaCalculator, (int32_t)v6, v7, v8);
    rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
    if ( !*p_rewardIconAlphaCalculator )
      goto LABEL_24;
    AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0LL);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !rewardIconAlphaCalculator )
      goto LABEL_24;
  }
  v11 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_39719C4 *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v11;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0LL) )
  {
    v12 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v14 = v12;
    v15 = MissionListViewManager_TypeInfo;
    if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
      v15 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v14 - alphaAnimTimeOld) >= v15->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
      if ( !*p_rewardIconAlphaCalculator )
        goto LABEL_24;
      AlphaTransitionCalculator__StartFadeOut(rewardIconAlphaCalculator, 0LL);
    }
  }
  rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
  if ( !*p_rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(rewardIconAlphaCalculator, 0LL) )
    return;
  rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
  if ( !*p_rewardIconAlphaCalculator )
LABEL_24:
    sub_1BCB254(rewardIconAlphaCalculator, v9);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0LL);
  v16 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v16;
  v18 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v19 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v19 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v19->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v18 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v21 = this->fields.alphaAnimCnt;
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v21 - ALPHA_ANIM_COUNT_RESET_VAL;
  }
  ((void (__fastcall *)(MissionListViewManager_o *, void *))this->klass->vtable._13_OnChangeAlphaAnim.method)(
    this,
    this->klass[1]._1.image);
  this->fields._IsChangeMissionNaviDialogAnim_k__BackingField = 1;
}


void __fastcall MissionListViewManager__add_callbackFunc2(
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

  if ( (byte_4B1F797 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1F797 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
  MissionListViewManager__remove_callbackFunc2(v10, v11, v12);
}


float __fastcall MissionListViewManager__get_AlphaAnimNow(MissionListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


bool __fastcall MissionListViewManager__get_IsChangeMissionNaviDialogAnim(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChangeMissionNaviDialogAnim_k__BackingField;
}


bool __fastcall MissionListViewManager__get_IsPlayGetEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isTreasureEffect || this->fields.isChangeTitleSprite;
}


EventMissionEntity_o *__fastcall MissionListViewManager__get_ReceiveMissionReward(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.missionToRecieve;
}


UnityEngine_GameObject_o *__fastcall MissionListViewManager__get_TouchBlockObj(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.touchBlockObj;
}


void __fastcall MissionListViewManager__remove_callbackFunc2(
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

  if ( (byte_4B1F798 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, value);
    byte_4B1F798 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05088(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCB514(v7);
  MissionListViewManager__get_ReceiveMissionReward(v10, v11);
}


void __fastcall MissionListViewManager__set_IsChangeMissionNaviDialogAnim(
        MissionListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChangeMissionNaviDialogAnim_k__BackingField = value;
}


void __fastcall MissionListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B2004C & 1) == 0 )
  {
    sub_1BCAFF8(&MissionListViewManager___c_TypeInfo, v1);
    byte_4B2004C = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(MissionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MissionListViewManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)MissionListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall MissionListViewManager___c___ctor(MissionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionListViewManager___c___CreateDisplayRewardList_b__84_0(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return !Gift__IsItem_39617068(x->fields.type, 0LL);
}


bool __fastcall MissionListViewManager___c___CreateDisplayRewardList_b__84_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return Gift__IsItem_39617068(x->fields.type, 0LL);
}


void __fastcall MissionListViewManager___c___SetupMissionCondTransitionConfirmDialog_b__92_0(
        MissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B2004D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4B2004D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass66_0___ctor(
        MissionListViewManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionListViewManager___c__DisplayClass66_0___ShowRewardDetailInfo_b__0(
        MissionListViewManager___c__DisplayClass66_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  return entity != this->fields.subGiftEntity;
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___ctor(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__0(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass73_0_o *v2; // x19
  __int64 v3; // x1
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *_4__this; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4B2004E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1BCAFF8(
                                                               &Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__,
                                                               v3);
    byte_4B2004E = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !_4__this )
    sub_1BCB254(this, method);
  MissionListViewManager__LoadTreasureGetEffect(_4__this, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MissionListViewManager_o *_4__this; // x0
  struct MissionListViewManager_o *v5; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B2004F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__, v3);
    byte_4B2004F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  MissionListViewManager__SetupTreasureGetEffect(_4__this, _4__this->fields.giftIconId, 0LL);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_9;
  questRewardBoxAction = v5->fields.questRewardBoxAction;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_1BCB254(_4__this, method);
  QuestRewardBoxAction__Play(questRewardBoxAction, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__2(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass73_0_o *v2; // x19
  __int64 v3; // x1
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct MissionListViewManager_o *v6; // x8
  AssetData_o *treasureGetAssetData; // x20

  v2 = this;
  if ( (byte_4B20050 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B20050 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass73_0_o *)_4__this->fields.questRewardBoxAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_12;
  treasureGetAssetData = v6->fields.treasureGetAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39722652(treasureGetAssetData, 0LL);
  this = (MissionListViewManager___c__DisplayClass73_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1BCB254(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v2->fields.gifts,
    0,
    v2->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___ctor(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  MissionListViewManager__EndItemGetEffectAction(_4__this, this->fields.afterDetail, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartItemGetEffectAction_b__1(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  _4__this->fields.isEffect = 1;
  MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
    _4__this,
    this->fields.gifts,
    this->fields.idx,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___ctor(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___EndItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8
  MissionListViewManager___c__DisplayClass75_0_o *v3; // x19
  struct System_Action_o *afterDetail; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MissionListViewManager___c__DisplayClass75_0_o *)_4__this->fields.touchBlockObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (afterDetail = v3->fields.afterDetail) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))afterDetail->fields.m_target)(
    afterDetail->fields.original_method_info,
    *(_QWORD *)&afterDetail->fields.extra_arg);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___ctor(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__0(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B20051 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__, v4);
    byte_4B20051 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v8 )
    sub_1BCB254(Instance, v6);
  CommonUI__LoadEquipGetEffect(v8, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B20052 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__, v4);
    byte_4B20052 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v8 )
    sub_1BCB254(Instance, v6);
  CommonUI__OpenEquipGetEffect(v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B20053 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B20053 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___ctor(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__0(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B20054 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_4B20054 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v8 )
    sub_1BCB254(Instance, v6);
  CommonUI__LoadCostumeReleaseEffect(v8, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x21
  System_String_o *name; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B20055 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_4B20055 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v8 )
    sub_1BCB254(Instance, v6);
  CommonUI__OpenCostumeReleaseEffect(v8, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B20056 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B20056 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass78_0___ctor(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartRewardItemGetEffect_b__0(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MissionInfoMaker_c *v10; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B20057 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&int_TypeInfo, v6);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BCAFF8(&MissionInfoMaker_TypeInfo, v8);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__, v9);
    byte_4B20057 = 1;
  }
  v10 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v10 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v10->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v2, v3, v4);
  v13 = System_String__Format(ITEM_GET_ASSET_NAME, v12, 0LL);
  _9__1 = this->fields.__9__1;
  v15 = v13;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v16, v17);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_o *transform; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  MissionInfoMaker_c *v23; // x0
  AssetData_o *v24; // x21
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v26; // x0
  Il2CppObject *Object_object__50315216; // x21
  UnityEngine_GameObject_o *v28; // x21
  struct MissionListViewManager_o *_4__this; // x8
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  QuestRewardItemAction_o *v33; // x19
  System_Action_o *v34; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B20058 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, data);
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, v5);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v6);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&MissionInfoMaker_TypeInfo, v8);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__, v11);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass78_1_TypeInfo, v12);
    byte_4B20058 = 1;
  }
  v13 = sub_1BCB244(MissionListViewManager___c__DisplayClass78_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)data, v18, v19);
  v23 = MissionInfoMaker_TypeInfo;
  v24 = *(AssetData_o **)(v13 + 24);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v23 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v23->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v20, v21, v22);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v26, 0LL);
  if ( !v24 )
    goto LABEL_15;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              v24,
                              transform,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__50315216,
                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_15;
  v28 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v28, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v28,
                       (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Component_object, v31, v32);
  transform = *(System_String_o **)(v13 + 16);
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        v33 = *(QuestRewardItemAction_o **)(v13 + 16),
        v34 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v13,
          Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !v33) )
  {
LABEL_15:
    sub_1BCB254(transform, v15);
  }
  QuestRewardItemAction__Play(v33, 0, v34, 0.0, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass78_1___ctor(
        MissionListViewManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass78_1___StartRewardItemGetEffect_b__2(
        MissionListViewManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *mRewardItemAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass78_0_o *CS___8__locals1; // x8

  if ( (byte_4B20059 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B20059 = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39722652(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_11:
    sub_1BCB254(mRewardItemAction, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___ctor(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__0(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B2005A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__, v4);
    byte_4B2005A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v8 )
    sub_1BCB254(Instance, v6);
  SummonAssetManager__LoadSummonAssets(v8, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass79_0_o *this,
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
  int64_t Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  Il2CppObject *v16; // x21
  struct MissionListViewManager_o *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct MissionListViewManager_o *v20; // x8
  _BOOL4 isDoEffect; // w24
  ServantRewardAction_o *svtRewardComp; // x20
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v25; // w22
  Il2CppObject v26; // q1
  int64_t v27; // x0
  Il2CppClass *v28; // x8
  int64_t v29; // x21
  bool isNew; // w5
  int32_t v31; // w3
  bool v32; // w6
  int32_t v33; // w7
  ServantRewardAction_o *v34; // x0
  int32_t v35; // w1
  int64_t v36; // x2
  Il2CppObject *v37; // x0
  struct MissionListViewManager_o *v38; // x20
  Il2CppObject *v39; // x21
  struct MissionListViewManager_o *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
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
  System_Action_o *_9__2; // x21
  MissionListViewManager_o *v57; // x20
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B2005B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__, v11);
    byte_4B2005B = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 this->fields.userSvtID,
                 (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v16 = Entity;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v17 = this->fields.__4__this;
      if ( v17 )
      {
        if ( Master_object )
        {
          Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                     (SummonAssetManager_o *)Master_object,
                                     v17->fields.instantiatingPOS,
                                     0,
                                     0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
            sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.svtRewardComp, Master_object, v18, v19);
            v20 = this->fields.__4__this;
            if ( v20 )
            {
              if ( v16 )
              {
                isDoEffect = this->fields.isDoEffect;
                svtRewardComp = v20->fields.svtRewardComp;
                klass = v16[5].klass;
                monitor = v16[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v65.fields.currentCryptoKey = klass;
                *(_QWORD *)&v65.fields.fakeValue = monitor;
                v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v65, 0LL);
                if ( isDoEffect )
                {
                  v26 = v16[2];
                  *(Il2CppObject *)&v64.fields.currentCryptoKey = v16[1];
                  *(Il2CppObject *)&v64.fields.fakeValue = v26;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v63 = v64;
                  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v63, 0LL);
                  v28 = v16[6].klass;
                  *(_QWORD *)&v66.fields.fakeValue = v16[6].monitor;
                  v29 = v27;
                  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v66, 0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v31 = Master_object;
                    v32 = 1;
                    v33 = 14;
                    v34 = svtRewardComp;
                    v35 = v25;
                    v36 = v29;
LABEL_37:
                    ServantRewardAction__Setup(v34, v35, v36, v31, 1, isNew, v32, v33, 0LL);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v51 = v16[2];
                  *(Il2CppObject *)&v64.fields.currentCryptoKey = v16[1];
                  *(Il2CppObject *)&v64.fields.fakeValue = v51;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v62 = v64;
                  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v62, 0LL);
                  v53 = v16[6].klass;
                  *(_QWORD *)&v67.fields.fakeValue = v16[6].monitor;
                  v54 = v52;
                  *(_QWORD *)&v67.fields.currentCryptoKey = v53;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v67, 0LL);
                  if ( svtRewardComp )
                  {
                    v31 = Master_object;
                    v33 = 6;
                    v34 = svtRewardComp;
                    v35 = v25;
                    v36 = v54;
                    isNew = 0;
                    v32 = 0;
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
    sub_1BCB254(Master_object, v13);
  }
  Master_object = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_object & 1) == 0 )
    goto LABEL_43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_47;
  v37 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          this->fields.userSvtID,
          (const MethodInfo_32CA35C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v38 = this->fields.__4__this;
  v39 = v37;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_47;
  if ( !Master_object )
    goto LABEL_47;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v40->fields.instantiatingPOS,
                             0,
                             0LL);
  if ( !v38 )
    goto LABEL_47;
  v38->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v38->fields.svtRewardComp, Master_object, v41, v42);
  v43 = this->fields.__4__this;
  if ( !v43 || !v39 )
    goto LABEL_47;
  v44 = v43->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v45 = v39[2];
    *(Il2CppObject *)&v64.fields.currentCryptoKey = v39[1];
    *(Il2CppObject *)&v64.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v61 = v64;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v61, 0LL);
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
    v55 = v39[2];
    *(Il2CppObject *)&v64.fields.currentCryptoKey = v39[1];
    *(Il2CppObject *)&v64.fields.fakeValue = v55;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v60 = v64;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v60, 0LL);
    if ( !v44 )
      goto LABEL_47;
    v47 = Master_object;
    v49 = 6;
    v50 = v44;
    v46 = 0;
    v48 = 0;
  }
  ServantRewardAction__SetupCommandCode_36397072(v50, v47, v46, v48, v49, 0LL);
LABEL_43:
  _9__2 = this->fields.__9__2;
  v57 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v58, v59);
  }
  if ( !v57 )
    goto LABEL_47;
  MissionListViewManager__SvtEffCaller(v57, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8

  if ( (byte_4B2005C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, method);
    byte_4B2005C = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___ctor(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__0(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v16; // x8
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *v18; // x21
  Il2CppObject *v19; // x20
  struct MissionListViewManager_o *v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct MissionListViewManager_o *v23; // x8
  struct GetSvts_array *v24; // x8
  __int64 v25; // x9
  struct MissionListViewManager_o *v26; // x8
  char v27; // w23
  ServantRewardAction_o *svtRewardComp; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x24
  int32_t v31; // w22
  Il2CppObject v32; // q1
  int64_t v33; // x0
  Il2CppClass *v34; // x8
  int64_t v35; // x20
  struct MissionListViewManager_o *v36; // x8
  struct GetSvts_array *v37; // x8
  __int64 v38; // x9
  GetSvts_o *v39; // x8
  Il2CppObject v40; // q1
  int64_t v41; // x0
  Il2CppClass *v42; // x8
  int64_t v43; // x20
  System_Action_o *_9__1; // x21
  MissionListViewManager_o *v45; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B2005D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__, v9);
    byte_4B2005D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_38;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_39;
  v16 = getSvtList->m_Items[callCnt];
  if ( !v16 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__long___GetEntity(
             Master_object,
             v16->fields.userSvtId,
             (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v18 = this->fields.__4__this;
  v19 = Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)Master_object,
                                                                  v20->fields.instantiatingPOS,
                                                                  0,
                                                                  0LL);
  if ( !v18 )
    goto LABEL_38;
  v18->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v18->fields.svtRewardComp, (int32_t)Master_object, v21, v22);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_38;
  v24 = v23->fields.getSvtList;
  if ( !v24 )
    goto LABEL_38;
  v25 = this->fields.callCnt;
  if ( (unsigned int)v25 >= v24->max_length )
LABEL_39:
    sub_1BCB25C(Master_object, v11, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->m_Items[v25];
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_object, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 || !v19 )
    goto LABEL_38;
  v27 = (char)Master_object;
  svtRewardComp = v26->fields.svtRewardComp;
  klass = v19[5].klass;
  monitor = v19[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = klass;
  *(_QWORD *)&v51.fields.fakeValue = monitor;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v51, 0LL);
  if ( (v27 & 1) == 0 )
  {
    v40 = v19[2];
    *(Il2CppObject *)&v50.fields.currentCryptoKey = v19[1];
    *(Il2CppObject *)&v50.fields.fakeValue = v40;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v48 = v50;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v48, 0LL);
    v42 = v19[6].klass;
    *(_QWORD *)&v53.fields.fakeValue = v19[6].monitor;
    v43 = v41;
    *(_QWORD *)&v53.fields.currentCryptoKey = v42;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                    v53,
                                                                    0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v31, v43, (int32_t)Master_object, 1, 0, 0, 2, 0LL);
      goto LABEL_34;
    }
LABEL_38:
    sub_1BCB254(Master_object, v11);
  }
  v32 = v19[2];
  *(Il2CppObject *)&v50.fields.currentCryptoKey = v19[1];
  *(Il2CppObject *)&v50.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v49 = v50;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v49, 0LL);
  v34 = v19[6].klass;
  *(_QWORD *)&v52.fields.fakeValue = v19[6].monitor;
  v35 = v33;
  *(_QWORD *)&v52.fields.currentCryptoKey = v34;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                  v52,
                                                                  0LL);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_38;
  v37 = v36->fields.getSvtList;
  if ( !v37 )
    goto LABEL_38;
  v38 = this->fields.callCnt;
  if ( (unsigned int)v38 >= v37->max_length )
    goto LABEL_39;
  v39 = v37->m_Items[v38];
  if ( !v39 || !svtRewardComp )
    goto LABEL_38;
  ServantRewardAction__Setup(svtRewardComp, v31, v35, (int32_t)Master_object, 1, v39->fields.isNew, 1, 10, 0LL);
LABEL_34:
  _9__1 = this->fields.__9__1;
  v45 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v46, v47);
  }
  if ( !v45 )
    goto LABEL_38;
  MissionListViewManager__SvtEffCaller(v45, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B2005E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__, v5);
    byte_4B2005E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  if ( !v9 )
    sub_1BCB254(Instance, v7);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, this->fields.callCnt + 1, this->fields.callback, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass81_0___ctor(
        MissionListViewManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass81_0___SvtEffCaller_b__0(
        MissionListViewManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass81_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_4B2005F & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass81_0_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B2005F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass81_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_1BCB254(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70136264(gameObject, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass85_0___ctor(
        MissionListViewManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass85_0___StartRewardItemGetEffectAfterTresureEffect_b__0(
        MissionListViewManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ScrTerminalListTop_c *v10; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B20060 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&int_TypeInfo, v6);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BCAFF8(&ScrTerminalListTop_TypeInfo, v8);
    sub_1BCAFF8(
      &Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      v9);
    byte_4B20060 = 1;
  }
  v10 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v10 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v10->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v2, v3, v4);
  v13 = System_String__Format(ITEM_GET_ASSET_NAME, v12, 0LL);
  _9__1 = this->fields.__9__1;
  v15 = v13;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v16, v17);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass85_0___StartRewardItemGetEffectAfterTresureEffect_b__1(
        MissionListViewManager___c__DisplayClass85_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  QuestRewardItemAction_o *mRewardItemAction; // x19
  System_Action_o *v15; // x20

  if ( (byte_4B20061 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, data);
    sub_1BCAFF8(
      &Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
      v5);
    sub_1BCAFF8(&MissionListViewManager___c__DisplayClass85_1_TypeInfo, v6);
    byte_4B20061 = 1;
  }
  v7 = sub_1BCB244(MissionListViewManager___c__DisplayClass85_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 16) = data,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)data, v12, v13),
        mRewardItemAction = this->fields.mRewardItemAction,
        v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v7,
          Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0LL),
        !mRewardItemAction) )
  {
    sub_1BCB254(v8, v9);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v15, 0.0, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass85_1___ctor(
        MissionListViewManager___c__DisplayClass85_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass85_1___StartRewardItemGetEffectAfterTresureEffect_b__2(
        MissionListViewManager___c__DisplayClass85_1_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass85_1_o *v2; // x19
  __int64 v3; // x1
  struct MissionListViewManager___c__DisplayClass85_0_o *CS___8__locals1; // x8
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass85_0_o *v7; // x8

  v2 = this;
  if ( (byte_4B20062 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass85_1_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B20062 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass85_1_o *)CS___8__locals1->fields.mRewardItemAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  data = v2->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39722652(data, 0LL);
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 || (this = (MissionListViewManager___c__DisplayClass85_1_o *)v7->fields.__4__this) == 0LL )
LABEL_12:
    sub_1BCB254(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v7->fields.gifts,
    v7->fields.idx + 1,
    v7->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass86_0___ctor(
        MissionListViewManager___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass86_0___LoadTreasureGetEffect_b__0(
        MissionListViewManager___c__DisplayClass86_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, data);
  _4__this->fields.treasureGetAssetData = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.treasureGetAssetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass89_0___ctor(
        MissionListViewManager___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass89_0___LoadItemGetEffects_b__0(
        MissionListViewManager___c__DisplayClass89_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass89_0_o *v4; // x19
  struct MissionListViewManager_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B20063 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass89_0_o *)sub_1BCAFF8(
                                                               &Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__,
                                                               data);
    byte_4B20063 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass89_0_o *)_4__this->fields.itemGetAssetDatas) == 0LL
    || (System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (Il2CppObject *)data,
          (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass89_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(this, data);
  }
  MissionListViewManager__LoadItemGetEffects(
    (MissionListViewManager_o *)this,
    v4->fields.idx + 1,
    v4->fields.endAct,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass90_0___ctor(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__0(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__1(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__2(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass91_0___ctor(
        MissionListViewManager___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager___c__DisplayClass91_0___SetupMissionCondTransitionDialog_b__0(
        MissionListViewManager___c__DisplayClass91_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B20064 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B20064 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
    ActionExtensions__Call(this->fields.decideAction, 0LL);
}