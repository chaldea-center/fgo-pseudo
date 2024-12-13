void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MissionListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4B3A3D8 & 1) == 0 )
  {
    sub_1BD3458(&MissionListViewManager_TypeInfo, v1);
    byte_4B3A3D8 = 1;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  AvalonSceneManager_c *v21; // x0

  if ( (byte_4B3A3D7 & 1) == 0 )
  {
    sub_1BD3458(&AvalonSceneManager_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__, v4);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1BD3458(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo, v6);
    byte_4B3A3D7 = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v7;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.rewardItemGetEffectPlayList,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v14;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.dispRewardInfoList,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.FADEOUT_KIND = 1;
  v21 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v21->static_fields->DEFAULT_FADE_TIME);
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

  if ( (byte_4B3A3C1 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B3A3C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
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

  if ( (byte_4B3A3BF & 1) == 0 )
  {
    sub_1BD3458(&Method_MissionListViewManager_CloseItemDetail__, isDecide);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B3A3BF = 1;
  }
  v4 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_MissionListViewManager_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v7);
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

  if ( (byte_4B3A3C0 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B3A3C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  MissionListViewManager___c_c *v32; // x0
  System_Func_object__bool__o *_9__84_1; // x22
  Il2CppObject *v34; // x23
  struct MissionListViewManager___c_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_List_object__o *v43; // x23
  struct System_Collections_Generic_List_QuestRewardInfo__o **p_dispRewardInfoList; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  MissionListViewManager_o *ItemEffect; // x0
  __int64 v52; // x1
  int v53; // w8
  __int64 v54; // x23
  char *v55; // x28
  __int64 v56; // x8
  const MethodInfo *v57; // x2
  QuestRewardInfo_o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x8
  int32_t size; // w27
  const char *v67; // x8
  _QWORD *v68; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const char *v70; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = (char *)gifts;
  if ( (byte_4B3A3CE & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_Any_GiftEntity___, gifts);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v8);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_GiftEntity___, v9);
    sub_1BD3458(&System_Func_GiftEntity__bool__TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v13);
    sub_1BD3458(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo, v14);
    sub_1BD3458(&MissionListViewManager_TypeInfo, v15);
    sub_1BD3458(&QuestRewardInfo_TypeInfo, v16);
    sub_1BD3458(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__, v17);
    sub_1BD3458(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__, v18);
    sub_1BD3458(&MissionListViewManager___c_TypeInfo, v19);
    byte_4B3A3CE = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
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
    _9__84_0 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__84_0,
      v24,
      Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__,
      0LL);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__84_0 = (struct System_Func_GiftEntity__bool__o *)_9__84_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__84_0,
      (int64_t)_9__84_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( BasicHelper__Any_object__49399452(
         (System_Object_array *)v3,
         (System_Func_T__bool__o *)_9__84_0,
         (const MethodInfo_2F1C69C *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v32 = MissionListViewManager___c_TypeInfo;
    if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
      v32 = MissionListViewManager___c_TypeInfo;
    }
    _9__84_1 = (System_Func_object__bool__o *)v32->static_fields->__9__84_1;
    if ( !_9__84_1 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = MissionListViewManager___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__84_1 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__84_1,
        v34,
        Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__,
        0LL);
      v35 = MissionListViewManager___c_TypeInfo->static_fields;
      v35->__9__84_1 = (struct System_Func_GiftEntity__bool__o *)_9__84_1;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v35->__9__84_1, (int64_t)_9__84_1, v36, v37, v38, v39, v40, v41);
    }
    v42 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v3,
            (System_Func_TSource__bool__o *)_9__84_1,
            (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    v3 = (char *)System_Linq_Enumerable__ToArray_object_(
                   v42,
                   (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v43 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  p_dispRewardInfoList = &this->fields.dispRewardInfoList;
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v43;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.dispRewardInfoList,
    (int64_t)v43,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  if ( !v3 )
    goto LABEL_43;
  v53 = *((_DWORD *)v3 + 6);
  if ( v53 >= 1 )
  {
    v54 = 0LL;
    v55 = v3 + 32;
    while ( 1 )
    {
      if ( (unsigned int)v54 >= v53 )
LABEL_44:
        sub_1BD36BC(ItemEffect, v52);
      v56 = *(_QWORD *)&v55[8 * v54];
      if ( !v56 || !v22 )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v22,
                                                 &entity,
                                                 *(_DWORD *)(v56 + 24),
                                                 (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   (int32_t)entity[1].klass,
                                                   v57);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v58 = (QuestRewardInfo_o *)sub_1BD36A4(QuestRewardInfo_TypeInfo);
          QuestRewardInfo___ctor(v58, 0LL);
          if ( !v58 )
            break;
          v58->fields.type = 2;
          if ( !entity )
            break;
          v58->fields.objectId = (int32_t)entity[1].klass;
          if ( (unsigned int)v54 >= *((_DWORD *)v3 + 6) )
            goto LABEL_44;
          v65 = *(_QWORD *)&v55[8 * v54];
          if ( !v65 )
            break;
          v58->fields.num = *(_DWORD *)(v65 + 28);
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
            v67 = *(const char **)&ItemEffect->fields.m_CachedPtr;
            v68 = Method_System_Collections_Generic_List_QuestRewardInfo__Add__;
            ++HIDWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( !v67 )
              break;
            m_CancellationTokenSource_low = SLODWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *((_DWORD *)v67 + 6) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ItemEffect,
                (Il2CppObject *)v58,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
            }
            else
            {
              v70 = &v67[8 * m_CancellationTokenSource_low];
              LODWORD(ItemEffect->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *((_QWORD *)v70 + 4) = v58;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v70 + 32), (int64_t)v58, v59, v60, v61, v62, v63, v64);
            }
          }
        }
      }
      v53 = *((_DWORD *)v3 + 6);
      if ( (int)++v54 >= v53 )
        return;
    }
LABEL_43:
    sub_1BD36B4(ItemEffect, v52);
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

  if ( (byte_4B3A3B6 & 1) == 0 )
  {
    sub_1BD3458(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1BD3458(&MissionListViewManager_TypeInfo, v2);
    byte_4B3A3B6 = 1;
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
  v6 = (AlphaTransitionCalculator_o *)sub_1BD36A4(AlphaTransitionCalculator_TypeInfo);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  int v41; // w9
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w2
  int v56; // w9
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  Il2CppObject *value; // x21
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v60; // x8
  CommonUI_o *v61; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v63; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4B3A3C5 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, afterDetail);
    sub_1BD3458(&AssetManager_TypeInfo, v5);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__Clear__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__, v17);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass75_0_TypeInfo, v18);
    byte_4B3A3C5 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v19 = sub_1BD36A4(MissionListViewManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = afterDetail;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)afterDetail, v28, v29, v30, v31, v32, v33);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_22;
  v41 = rewardItemGetEffectPlayList->fields._version + 1;
  rewardItemGetEffectPlayList->fields._size = 0;
  rewardItemGetEffectPlayList->fields._version = v41;
  this->fields.questRewardBoxAction = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.questRewardBoxAction, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.isTreasureEffect = 0;
  this->fields.isChangeTitleSprite = 0;
  this->fields.useTreasureGetEffectName = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.useTreasureGetEffectName, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.overWriteTitleSpriteName = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.overWriteTitleSpriteName, 0LL, v48, v49, v50, v51, v52, v53);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_22;
  size = dispRewardInfoList->fields._size;
  v56 = dispRewardInfoList->fields._version + 1;
  dispRewardInfoList->fields._size = 0;
  dispRewardInfoList->fields._version = v56;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)dispRewardInfoList->fields._items, 0, size, 0LL);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
         (const MethodInfo_3224C44 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__) >= 1 )
  {
    v20 = this->fields.itemGetAssetDatas;
    if ( !v20 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v64,
      (System_Collections_Generic_Dictionary_int__object__o *)v20,
      (const MethodInfo_32253CC *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v64,
              (const MethodInfo_3375850 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
    {
      value = v64.fields._current.fields.value;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_38574016((AssetData_o *)value, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v64,
      (const MethodInfo_3375974 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    v20 = this->fields.itemGetAssetDatas;
    if ( !v20 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)v20,
      (const MethodInfo_322511C *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = AvalonSceneManager_TypeInfo;
  v61 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v60 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
  v63 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v19,
    Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !v61 )
LABEL_22:
    sub_1BD36B4(v20, v21);
  CommonUI__maskFadein(v61, DEFAULT_FADE_TIME, v63, 0LL);
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
  if ( (byte_4B3A3D2 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, rewardInfo);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v8);
    this = (MissionListViewManager_o *)sub_1BD3458(&StringLiteral_19139/*"effectId"*/, v9);
    byte_4B3A3D2 = 1;
  }
  entity = 0LL;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0LL) )
  {
    this = (MissionListViewManager_o *)Gift__IsItem_38469552(rewardInfo->fields.type, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    dispRewardInfoList = v4->fields.dispRewardInfoList;
    if ( !dispRewardInfoList )
      goto LABEL_19;
    if ( dispRewardInfoList->fields._size > 1 )
      return 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_19139/*"effectId"*/, 0, 0LL);
LABEL_19:
    sub_1BD36B4(this, rewardInfo);
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
        const MethodInfo_2FB2A68 *method)
{
  const MethodInfo_2FB2A68_RGCTXs *rgctx_data; // x19
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
  const MethodInfo_2FB2A68_RGCTXs *v22; // x8
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
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C25390();
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_3_TObject->_2.native_size;
  memset(&v29, 0, sizeof(v29));
  memset((char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C25334(v10);
  v12 = (System_Collections_Generic_List_TObject__o *)sub_1BD36A4(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BD36B4(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v16 )
    {
      if ( !current )
        sub_1BD36B4(v16, v17);
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
        sub_1BD36B4(v20, v21);
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
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return v12;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_2FB2818 *method)
{
  long double v2; // q0
  const MethodInfo_2FB2818_RGCTXs *rgctx_data; // x8
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C25390();
      rgctx_data = method->rgctx_data;
    }
  }
  memset(&v31, 0, sizeof(v31));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C25334(v2);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(_0_System_Collections_Generic_List_TObject);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35C055C *)method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BD36B4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1BD36B4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F81A7C *)method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1BD36B4(Component_object, Component_object);
      items = v11->fields._items;
      _4_System_Collections_Generic_List_TObject__Add = method->rgctx_data->_4_System_Collections_Generic_List_TObject__Add;
      ++v11->fields._version;
      if ( !items )
        sub_1BD36B4(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          (const MethodInfo_35C0D90 *)_4_System_Collections_Generic_List_TObject__Add->klass->rgctx_data[14].rgctxDataDummy);
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B3A3C2 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, *(_QWORD *)&targetItemId);
    byte_4B3A3C2 = 1;
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
        sub_1BD36B4(v4, *(_QWORD *)&targetItemId);
    }
    max_length = EventItemNotDispItemGetEffect->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1BD36BC(v4, *(_QWORD *)&targetItemId);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t v32; // w8
  System_Collections_Generic_Dictionary_int__object__o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v41; // x2
  unsigned int EffectId; // w0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  ScrTerminalListTop_c *v46; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v48; // x0
  System_String_o *v49; // x19
  AssetLoader_LoadEndDataHandler_o *v50; // x21
  int v51; // [xsp+Ch] [xbp-34h] BYREF

  while ( 1 )
  {
    v4 = endAct;
    v5 = idx;
    v6 = this;
    if ( (byte_4B3A3D3 & 1) == 0 )
    {
      sub_1BD3458(&AssetManager_TypeInfo, *(_QWORD *)&idx);
      sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__, v7);
      sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__, v8);
      sub_1BD3458(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo, v9);
      sub_1BD3458(&int_TypeInfo, v10);
      sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v11);
      sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__, v12);
      sub_1BD3458(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
      sub_1BD3458(&ScrTerminalListTop_TypeInfo, v14);
      sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__, v15);
      sub_1BD3458(&MissionListViewManager___c__DisplayClass89_0_TypeInfo, v16);
      byte_4B3A3D3 = 1;
    }
    v17 = sub_1BD36A4(MissionListViewManager___c__DisplayClass89_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17
      || (*(_QWORD *)(v17 + 16) = v6,
          sub_1BD33FC((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v6, v20, v21, v22, v23, v24, v25),
          *(_QWORD *)(v17 + 32) = v4,
          *(_DWORD *)(v17 + 28) = v5,
          sub_1BD33FC((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)v4, v26, v27, v28, v29, v30, v31),
          (dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList) == 0LL) )
    {
LABEL_17:
      sub_1BD36B4(dispRewardInfoList, v19);
    }
    v32 = *(_DWORD *)(v17 + 28);
    if ( v32 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
      return;
    }
    if ( !v32 )
    {
      v33 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v33,
        (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v6->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v33;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v6->fields.itemGetAssetDatas,
        (int64_t)v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_17;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             dispRewardInfoList,
             *(_DWORD *)(v17 + 28),
             (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    EffectId = MissionListViewManager__GetItemGetEffectId(v6, (QuestRewardInfo_o *)Item, v41);
    *(_DWORD *)(v17 + 24) = EffectId;
    v19 = EffectId;
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.itemGetAssetDatas;
    if ( !dispRewardInfoList )
      goto LABEL_17;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)dispRewardInfoList,
            v19,
            (const MethodInfo_3225188 *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v17 + 32);
    this = v6;
    *(_QWORD *)&idx = (unsigned int)(*(_DWORD *)(v17 + 28) + 1);
  }
  v46 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v46 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v46->static_fields->ITEM_GET_ASSET_NAME;
  v51 = *(_DWORD *)(v17 + 24);
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v43, v44, v45);
  v49 = System_String__Format(ITEM_GET_ASSET_NAME, v48, 0LL);
  v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1BD36A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v50,
    (Il2CppObject *)v17,
    Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v49, v50, 1, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *v24; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x20

  if ( (byte_4B3A3D0 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, endAct);
    sub_1BD3458(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__, v6);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass86_0_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_5976/*"Effect/Talk/"*/, v8);
    byte_4B3A3D0 = 1;
  }
  v9 = sub_1BD36A4(MissionListViewManager___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BD36B4(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = endAct;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)endAct, v18, v19, v20, v21, v22, v23);
  v24 = System_String__Concat_62525248(
          (System_String_o *)StringLiteral_5976/*"Effect/Talk/"*/,
          this->fields.useTreasureGetEffectName,
          0LL);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1BD36A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v24, v25, 1, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B3A3BA & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3A3BA = 1;
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
          sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1BD36B4(gameObject, v7);
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
  if ( (byte_4B3A3BD & 1) == 0 )
  {
    sub_1BD3458(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_1BD3458(&MissionInfoMaker_TypeInfo, v6);
    this = (MissionListViewManager_o *)sub_1BD3458(&Method_MissionListViewManager_CloseItemDetail__, v7);
    byte_4B3A3BD = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v8 = resultEntity;
    v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BD36A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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

  if ( (byte_4B3A3BE & 1) == 0 )
  {
    sub_1BD3458(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_1BD3458(&Method_DataManager_GetMasterData_EquipMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v6);
    sub_1BD3458(&MissionInfoMaker_TypeInfo, v7);
    sub_1BD3458(&Method_MissionListViewManager_CloseItemDetail__, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B3A3BE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_1BD36B4(Instance, v11);
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_31D1F44 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v12 = entity;
    v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BD36A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
  const MethodInfo *v16; // x4

  if ( (byte_4B3A3B9 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__, v4);
    sub_1BD3458(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v5);
    sub_1BD3458(&Method_MissionListViewManager_OnMoveEnd__, v6);
    sub_1BD3458(&StringLiteral_10083/*"OnMoveEnd"*/, v7);
    byte_4B3A3B9 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_2FB2818 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_13:
    sub_1BD36B4(ObjectList_object, v9);
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
             (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      MissionListViewObject__Init((MissionListViewObject_o *)Item, 4, v15, this->fields.listInDelay, 1, v16);
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
      (System_String_o *)StringLiteral_10083/*"OnMoveEnd"*/,
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
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B3A3B8 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v11);
    sub_1BD3458(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v12);
    sub_1BD3458(&Method_MissionListViewManager_OnMoveEnd__, v13);
    sub_1BD3458(&StringLiteral_10083/*"OnMoveEnd"*/, v14);
    byte_4B3A3B8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList_object = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetObjectList_object_(
                                                                     this,
                                                                     (const MethodInfo_2FB2818 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_1BD36B4(0LL, v16);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10083/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      ObjectList_object,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v23.fields._current;
      v19 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BD36B4(v20, v21);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v19, delay, 1, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_45028104(
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_45027744(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetMode_45027744(
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

  if ( (byte_4B3A3B7 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_1BD3458(&StringLiteral_11466/*"RequestInto"*/, v5);
    byte_4B3A3B7 = 1;
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
        sub_1BD36B4(gameObject, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11466/*"RequestInto"*/,
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


void __fastcall MissionListViewManager__SetMode_45028048(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_45027744(this, mode, v11);
}


void __fastcall MissionListViewManager__SetObjectItem(
        MissionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  MissionListViewManager_o *v6; // x20
  __int64 methodPtr_low; // x10
  int32_t v8; // w1

  v6 = this;
  if ( (byte_4B3A3BB & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_1BD3458(&MissionListViewObject_TypeInfo, obj);
    byte_4B3A3BB = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MissionListViewObject_TypeInfo )
  {
    sub_1BD36B4(this, obj);
  }
  if ( v6->fields.initMode == 3 )
    v8 = 3;
  else
    v8 = 2;
  MissionListViewObject__Init((MissionListViewObject_o *)obj, v8, 0LL, 0.0, 1, v4);
}


void __fastcall MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_c *v3; // x0
  float DEFAULT_FADE_TIME; // s0

  if ( (byte_4B3A3CD & 1) == 0 )
  {
    sub_1BD3458(&AvalonSceneManager_TypeInfo, method);
    byte_4B3A3CD = 1;
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B3A3D6 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, listViewItem);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BD3458(&Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__, v8);
    sub_1BD3458(&MissionListViewManager___c_TypeInfo, v9);
    byte_4B3A3D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__92_0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__92_0,
      v15,
      Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__,
      0LL);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = _9__92_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__92_0,
      (int64_t)_9__92_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v13 )
    sub_1BD36B4(Instance, v11);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *v25; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  System_String_o *v28; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v30; // x25

  if ( (byte_4B3A3D5 & 1) == 0 )
  {
    sub_1BD3458(&CommonConfirmDialog_ClickDelegate_TypeInfo, moveTo);
    sub_1BD3458(&LocalizationManager_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__, v10);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass91_0_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_8797/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, v12);
    sub_1BD3458(&StringLiteral_8801/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, v13);
    sub_1BD3458(&StringLiteral_8799/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, v14);
    sub_1BD3458(&StringLiteral_8800/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, v15);
    byte_4B3A3D5 = 1;
  }
  v16 = sub_1BD36A4(MissionListViewManager___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_QWORD *)(v16 + 16) = decideAction;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)decideAction, v19, v20, v21, v22, v23, v24);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8801/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( System_String__IsNullOrEmpty(confirmDialogMessage, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8799/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    confirmDialogMessage = System_String__Format(v26, (Il2CppObject *)moveTo, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8797/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8800/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BD36A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)v16,
    Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_14:
    sub_1BD36B4(v17, v18);
  CommonUI__OpenConfirmDialog_30802724(
    (CommonUI_o *)Instance,
    v25,
    confirmDialogMessage,
    v28,
    v27,
    1,
    v30,
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
  Il2CppObject *Object_object__49362760; // x21
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardBoxAction_o **p_questRewardBoxAction; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *useTreasureGetEffectName; // x22
  ScrTerminalListTop_c *v21; // x0
  ScrTerminalListTop_c *v22; // x0
  System_String_o *v23; // x20
  int32_t v24; // w1

  if ( (byte_4B3A3D1 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, *(_QWORD *)&itemIconId);
    sub_1BD3458(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___, v5);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&ScrTerminalListTop_TypeInfo, v8);
    byte_4B3A3D1 = 1;
  }
  treasureGetAssetData = this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_21;
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              treasureGetAssetData,
                              this->fields.useTreasureGetEffectName,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  treasureGetAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                          Object_object__49362760,
                                          (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                       (const MethodInfo_2F83564 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  p_questRewardBoxAction = &this->fields.questRewardBoxAction;
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.questRewardBoxAction,
    (int64_t)Component_object,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !this->fields.isTreasureEffect )
    goto LABEL_15;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v21 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v21 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v21->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    v22 = ScrTerminalListTop_TypeInfo;
    v23 = this->fields.useTreasureGetEffectName;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v22 = ScrTerminalListTop_TypeInfo;
    }
    treasureGetAssetData = (AssetData_o *)System_String__op_Inequality(
                                            v23,
                                            v22->static_fields->TREASURE_GET_NORMAL,
                                            0LL);
  }
  else
  {
LABEL_15:
    treasureGetAssetData = (AssetData_o *)(&dword_0 + 1);
  }
  if ( !*p_questRewardBoxAction )
LABEL_21:
    sub_1BD36B4(treasureGetAssetData, *(_QWORD *)&itemIconId);
  if ( itemIconId == 3 )
    v24 = 2;
  else
    v24 = itemIconId == 2;
  QuestRewardBoxAction__Setup(*p_questRewardBoxAction, v24, (unsigned __int8)treasureGetAssetData & 1, 0LL);
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
  GiftEntity_array *v35; // x21
  __int64 v36; // x20
  const MethodInfo *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Func_object__bool__o *v44; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  il2cpp_array_size_t max_length; // w9
  int v47; // w8
  GiftEntity_o *v48; // x20
  int32_t type; // w0
  Il2CppObject *Entity; // x20
  Il2CppObject *v51; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v52; // x22
  Il2CppObject *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v56; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v57; // x23
  GiftMaster_o *v58; // x22
  bool IsServantEquip; // w23
  Il2CppObject *v60; // x21
  ServantStatusDialog_EndDelegate_o *v61; // x22
  Il2CppObject *v62; // x20
  Il2CppObject *v63; // x21
  ServantStatusDialog_EndDelegate_o *v64; // x22
  const MethodInfo *v65; // x2
  struct System_String_o *MasterName_k__BackingField; // x20
  __int64 v67; // x23
  int32_t v68; // w20
  ServantStatusDialog_EndDelegate_o *v69; // x22
  const MethodInfo *v70; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4B3A3BC & 1) == 0 )
  {
    sub_1BD3458(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, selectItem);
    sub_1BD3458(&Method_DataManager_GetMaster_CommandCodeMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMaster_GiftMaster___, v8);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1BD3458(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1BD3458(&DataManager_TypeInfo, v11);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BD3458(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v14);
    sub_1BD3458(&ServantStatusDialog_EndDelegate_TypeInfo, v15);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v16);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_GiftEntity___, v17);
    sub_1BD3458(&System_Func_GiftEntity__bool__TypeInfo, v18);
    sub_1BD3458(&MissionInfoMaker_TypeInfo, v19);
    sub_1BD3458(&Method_MissionListViewManager_CloseCommandCodeDetail__, v20);
    sub_1BD3458(&Method_MissionListViewManager_CloseItemDetail__, v21);
    sub_1BD3458(&Method_MissionListViewManager_CloseServantStatusDetail__, v22);
    sub_1BD3458(&Method_MissionListViewManager_ShowRewardDetailInfo__, v23);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__, v26);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass66_0_TypeInfo, v27);
    byte_4B3A3BC = 1;
  }
  v28 = Method_MissionListViewManager_ShowRewardDetailInfo__;
  if ( (*((_BYTE *)Method_MissionListViewManager_ShowRewardDetailInfo__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1BD3470(Method_MissionListViewManager_ShowRewardDetailInfo__);
  v29 = (System_Reflection_MethodBase_o *)sub_1BD343C(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
  if ( !selectItem )
    goto LABEL_52;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_52;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v56 = (CommonUI_o *)Instance;
    v57 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BD36A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v57,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v56 )
      goto LABEL_52;
    CommonUI__OpenItemDetailDialog_30879328(v56, nameTxt, rewardExtraDetailTxt, v57, 0LL);
  }
  else if ( rewardType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_GiftMaster___);
    v34 = selectItem->fields.eventMissionEnt;
    if ( !v34 || !Master_object )
      goto LABEL_52;
    Master_object = (GiftMaster_o *)GiftMaster__GetGiftListById(Master_object, v34->fields.giftId, 0LL);
    v35 = (GiftEntity_array *)Master_object;
    if ( ignoreSubGiftEntity )
    {
      v36 = sub_1BD36A4(MissionListViewManager___c__DisplayClass66_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v36, 0LL);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      Master_object = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity(v35, v37);
      if ( !v36 )
        goto LABEL_52;
      *(_QWORD *)(v36 + 16) = Master_object;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)Master_object, v38, v39, v40, v41, v42, v43);
      v44 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v44,
        (Il2CppObject *)v36,
        Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__,
        0LL);
      v45 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v35,
              (System_Func_TSource__bool__o *)v44,
              (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      Master_object = (GiftMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                        v45,
                                        (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v35 = (GiftEntity_array *)Master_object;
    }
    if ( !v35 )
      goto LABEL_52;
    max_length = v35->max_length;
    v47 = this->fields.alphaAnimCnt % (int)max_length;
    if ( v47 >= max_length )
      sub_1BD36BC(Master_object, v31);
    v48 = v35->m_Items[v47];
    if ( !v48 )
      goto LABEL_52;
    type = v48->fields.type;
    if ( type == 2 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   v48->fields.objectId,
                   (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v52 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BD36A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v52,
          (Il2CppObject *)this,
          (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
          0LL);
        if ( v51 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v51, (ItemEntity_o *)Entity, v52, 50, 0LL);
          return;
        }
      }
LABEL_52:
      sub_1BD36B4(Master_object, v31);
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_52;
      Master_object = (GiftMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v48->fields.objectId,
                                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_52;
      v58 = Master_object;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_object, 0LL);
      v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v61 = (ServantStatusDialog_EndDelegate_o *)sub_1BD36A4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v61,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v60 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30816328((CommonUI_o *)v60, 7, v48, v61, 0LL);
      }
      else
      {
        v67 = *(_QWORD *)&v58->fields._MasterKind_k__BackingField;
        MasterName_k__BackingField = v58->fields._MasterName_k__BackingField;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v71.fields.currentCryptoKey = v67;
        *(_QWORD *)&v71.fields.fakeValue = MasterName_k__BackingField;
        v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v71, 0LL);
        v69 = (ServantStatusDialog_EndDelegate_o *)sub_1BD36A4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v69,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v60 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30815764((CommonUI_o *)v60, 7, v68, v69, 0LL);
      }
    }
    else if ( Gift__IsCommandCode(v48->fields.type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_52;
      v62 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              v48->fields.objectId,
              (const MethodInfo_31D1EF0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v64 = (ServantStatusDialog_EndDelegate_o *)sub_1BD36A4(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v64,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseCommandCodeDetail__,
        0LL);
      if ( !v63 )
        goto LABEL_52;
      CommonUI__OpenServantEquipStatusDialog_30818920(
        (CommonUI_o *)v63,
        25,
        (CommandCodeEntity_o *)v62,
        0,
        v64,
        0LL,
        0LL);
    }
    else if ( Gift__IsCostumeRelease(v48->fields.type, 0LL) )
    {
      MissionListViewManager__OpenCostumeReleaseDetail(this, v48->fields.objectId, v65);
    }
    else if ( Gift__IsEquip(v48->fields.type, 0LL) )
    {
      MissionListViewManager__OpenEquipDetail(this, v48->fields.objectId, v70);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v35; // x8
  CommonUI_o *v36; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21

  if ( (byte_4B3A3C3 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, gifts);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__, v10);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass73_0_TypeInfo, v11);
    byte_4B3A3C3 = 1;
  }
  v12 = sub_1BD36A4(MissionListViewManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = gifts;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)gifts, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v12 + 32) = afterDetail;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)afterDetail, v27, v28, v29, v30, v31, v32);
  MissionListViewManager__SetTresureEffect(this, v33);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = AvalonSceneManager_TypeInfo;
  v36 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v35 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v35->static_fields->DEFAULT_FADE_TIME;
  v38 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v12,
    Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__,
    0LL);
  if ( !v36 )
LABEL_9:
    sub_1BD36B4(touchBlockObj, v14);
  CommonUI__maskFadeout(v36, 1, DEFAULT_FADE_TIME, v38, 0LL);
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Action_o **v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  EventRewardRootComponent_o *targetRoot; // x21
  System_Action_o *v53; // x22
  __int64 methodPtr_low; // x9
  __int64 v55; // x8
  __int64 v56; // x9
  __int64 v57; // x8
  int32_t v58; // w21
  __int64 v59; // x8
  __int64 v60; // x9
  __int64 v61; // x8
  const MethodInfo *v62; // x4
  int v63; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v67; // x3
  int32_t v68; // w23
  UnityEngine_Object_o *v69; // x22
  int64_t userSvtId; // x22
  bool isNew; // w23
  bool Eff; // w0
  __int64 v73; // x8
  __int64 v74; // x9
  __int64 v75; // x8
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v77; // x23
  Il2CppClass *v78; // x24
  const MethodInfo *v79; // x3
  int32_t v80; // w23
  const MethodInfo *v81; // x3
  __int64 v82; // x8
  __int64 v83; // x9
  __int64 v84; // x8
  const MethodInfo *v85; // x5
  __int64 v86; // x8
  __int64 v87; // x9
  __int64 v88; // x8
  const MethodInfo *v89; // x5
  GiftEntity_array *v90; // x2
  __int64 v91; // x3
  GiftEntity_o *v92; // x8
  __int64 v93; // x8
  __int64 v94; // x9
  __int64 v95; // x8
  Il2CppObject *v96; // x0
  Il2CppObject *v97; // x21
  const MethodInfo *v98; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  System_Action_o *v100; // x21
  const MethodInfo *v101; // x3
  MissionListViewManager___c__DisplayClass74_0_o *v102; // x0
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // [xsp+0h] [xbp-70h]
  Il2CppObject *v105; // [xsp+8h] [xbp-68h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+10h] [xbp-60h] BYREF
  GetCommandCodes_o *v107; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v108; // [xsp+20h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_4B3A3C4 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, gifts);
    sub_1BD3458(&Method_DataManager_GetMaster_CommandCodeMaster___, v9);
    sub_1BD3458(&Method_DataManager_GetMaster_EquipMaster___, v10);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v11);
    sub_1BD3458(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_1BD3458(&DataManager_TypeInfo, v13);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1BD3458(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v16);
    sub_1BD3458(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v17);
    sub_1BD3458(&EventRewardRootComponent_TypeInfo, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v19);
    sub_1BD3458(&MissionInfoMaker_TypeInfo, v20);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v21);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v24);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__, v25);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__, v26);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass74_0_TypeInfo, v27);
    byte_4B3A3C4 = 1;
  }
  entity = 0LL;
  v108 = 0LL;
  data = 0LL;
  resultEntity = 0LL;
  v107 = 0LL;
  v105 = 0LL;
  v28 = sub_1BD36A4(MissionListViewManager___c__DisplayClass74_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_106;
  *(_QWORD *)(v28 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v28 + 24) = afterDetail;
  v37 = (System_Action_o **)(v28 + 24);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)afterDetail, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v28 + 32) = gifts;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)gifts, v44, v45, v46, v47, v48, v49);
  v30 = *(GiftEntity_array **)(v28 + 32);
  *(_DWORD *)(v28 + 40) = idx;
  if ( !v30 )
    goto LABEL_106;
  if ( (signed int)v30->max_length <= idx )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    if ( AvalonSceneManager__checkNowScene(Instance, 72, 0LL) && this->fields.isEffect )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      targetRoot = (EventRewardRootComponent_o *)Instance->fields.targetRoot;
      v53 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(
        v53,
        (Il2CppObject *)v28,
        Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__,
        0LL);
      if ( !targetRoot )
        goto LABEL_106;
      methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(targetRoot->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardRootComponent_c *)targetRoot->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1BD3974(targetRoot);
        MissionListViewManager___c__DisplayClass74_0___ctor(v102, v103);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(targetRoot, v53, 0LL);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v37, v51);
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
    MissionListViewManager__CreateDisplayRewardList(this, v30, v50);
LABEL_22:
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v30);
  v55 = *(_QWORD *)(v28 + 32);
  if ( !v55 )
    goto LABEL_106;
  v56 = *(int *)(v28 + 40);
  if ( (unsigned int)v56 >= *(_DWORD *)(v55 + 24) )
    goto LABEL_107;
  v57 = *(_QWORD *)(v55 + 8 * v56 + 32);
  if ( !v57 )
    goto LABEL_106;
  v58 = *(_DWORD *)(v57 + 20);
  if ( Gift__IsServant(v58, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantMaster___);
    v59 = *(_QWORD *)(v28 + 32);
    if ( !v59 )
      goto LABEL_106;
    v60 = *(int *)(v28 + 40);
    if ( (unsigned int)v60 < *(_DWORD *)(v59 + 24) )
    {
      v61 = *(_QWORD *)(v59 + 8 * v60 + 32);
      if ( !v61 || !Instance )
        goto LABEL_106;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &entity,
                                           *(_DWORD *)(v61 + 24),
                                           (const MethodInfo_31D1F44 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_106;
        Instance = (AvalonSceneManager_o *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_106;
        v63 = (int)Instance;
        Instance = (AvalonSceneManager_o *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
        if ( ((v63 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_106;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v111.fields.currentCryptoKey = klass;
          *(_QWORD *)&v111.fields.fakeValue = monitor;
          v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v111, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v68, v67) )
          {
            Instance = (AvalonSceneManager_o *)entity;
            if ( !entity )
              goto LABEL_106;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_106;
              v69 = (UnityEngine_Object_o *)Instance[13].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
              {
                Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_106;
                Instance = (AvalonSceneManager_o *)Instance[13].monitor;
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
                v58,
                *(GiftEntity_array **)(v28 + 32),
                *(_DWORD *)(v28 + 40),
                *(System_Action_o **)(v28 + 24),
                v104);
              return;
            }
LABEL_106:
            sub_1BD36B4(Instance, v30);
          }
        }
      }
      goto LABEL_105;
    }
LABEL_107:
    sub_1BD36BC(Instance, v30);
  }
  if ( Gift__IsCommandCode(v58, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v73 = *(_QWORD *)(v28 + 32);
    if ( !v73 )
      goto LABEL_106;
    v74 = *(int *)(v28 + 40);
    if ( (unsigned int)v74 < *(_DWORD *)(v73 + 24) )
    {
      v75 = *(_QWORD *)(v73 + 8 * v74 + 32);
      if ( !v75 || !Instance )
        goto LABEL_106;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &v108,
                                           *(_DWORD *)(v75 + 24),
                                           (const MethodInfo_31D1F44 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v108 )
          goto LABEL_106;
        getCommandCodeList = this->fields.getCommandCodeList;
        v78 = v108[1].klass;
        v77 = v108[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v112.fields.currentCryptoKey = v78;
        *(_QWORD *)&v112.fields.fakeValue = v77;
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v112, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v107, v80, v79) )
        {
          this->fields.isEffect = 1;
          Instance = (AvalonSceneManager_o *)v107;
          if ( v107 )
          {
            userSvtId = v107->fields.userCommandCodeId;
            isNew = v107->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v107, 0LL);
            goto LABEL_69;
          }
          goto LABEL_106;
        }
      }
      goto LABEL_105;
    }
    goto LABEL_107;
  }
  Instance = (AvalonSceneManager_o *)Gift__IsCostumeRelease(v58, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v82 = *(_QWORD *)(v28 + 32);
    if ( !v82 )
      goto LABEL_106;
    v83 = *(int *)(v28 + 40);
    if ( (unsigned int)v83 >= *(_DWORD *)(v82 + 24) )
      goto LABEL_107;
    v84 = *(_QWORD *)(v82 + 8 * v83 + 32);
    if ( !v84 )
      goto LABEL_106;
    Instance = (AvalonSceneManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         (MissionListViewManager_o *)Instance,
                                         &resultEntity,
                                         *(_DWORD *)(v84 + 24),
                                         v81);
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
        v85);
      return;
    }
LABEL_105:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v28 + 32),
      *(_DWORD *)(v28 + 40) + 1,
      *(System_Action_o **)(v28 + 24),
      v62);
    return;
  }
  if ( !Gift__IsEquip(v58, 0LL) )
  {
    if ( Gift__IsItem(v58, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
      v93 = *(_QWORD *)(v28 + 32);
      if ( !v93 )
        goto LABEL_106;
      v94 = *(int *)(v28 + 40);
      if ( (unsigned int)v94 < *(_DWORD *)(v93 + 24) )
      {
        v95 = *(_QWORD *)(v93 + 8 * v94 + 32);
        if ( !v95 || !Instance )
          goto LABEL_106;
        v96 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_DWORD *)(v95 + 24),
                (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v96 )
        {
          v97 = v96;
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_106;
          Instance = (AvalonSceneManager_o *)CommonUI__IsGetItemEffect(
                                               (CommonUI_o *)Instance,
                                               (int32_t)v97[1].klass,
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
                (int32_t)v97[1].klass,
                *(GiftEntity_array **)(v28 + 32),
                *(_DWORD *)(v28 + 40),
                *(System_Action_o **)(v28 + 24),
                v98);
              return;
            }
          }
          else if ( !dispRewardInfoList )
          {
            goto LABEL_106;
          }
          if ( dispRewardInfoList->fields._size >= 1 )
          {
            v100 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
            System_Action___ctor(
              v100,
              (Il2CppObject *)v28,
              Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__,
              0LL);
            MissionListViewManager__LoadItemGetEffects(this, 0, v100, v101);
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
  Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EquipMaster___);
  v86 = *(_QWORD *)(v28 + 32);
  if ( !v86 )
    goto LABEL_106;
  v87 = *(int *)(v28 + 40);
  if ( (unsigned int)v87 >= *(_DWORD *)(v86 + 24) )
    goto LABEL_107;
  v88 = *(_QWORD *)(v86 + 8 * v87 + 32);
  if ( !v88 || !Instance )
    goto LABEL_106;
  Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &v105,
                                       *(_DWORD *)(v88 + 24),
                                       (const MethodInfo_31D1F44 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_105;
  this->fields.isEffect = 1;
  v90 = *(GiftEntity_array **)(v28 + 32);
  if ( !v90 )
    goto LABEL_106;
  v91 = *(int *)(v28 + 40);
  if ( (unsigned int)v91 >= v90->max_length )
    goto LABEL_107;
  v92 = v90->m_Items[v91];
  if ( !v92 )
    goto LABEL_106;
  MissionListViewManager__StartRewardEquipGetEffect(this, v92->fields.objectId, v90, v91, *v37, v89);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v44; // x19
  System_Action_o *v45; // x22

  if ( (byte_4B3A3C7 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, name);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__, v12);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass77_0_TypeInfo, v13);
    byte_4B3A3C7 = 1;
  }
  v14 = sub_1BD36A4(MissionListViewManager___c__DisplayClass77_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_7;
  *(_QWORD *)(v14 + 16) = name;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)name, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v14 + 32) = gifts;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)gifts, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v14 + 48) = afterDetail;
  *(_DWORD *)(v14 + 40) = idx;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 48), (int64_t)afterDetail, v35, v36, v37, v38, v39, v40);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v44 = (CommonUI_o *)Instance,
        v45 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v45,
          (Il2CppObject *)v14,
          Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0LL),
        !v44) )
  {
LABEL_7:
    sub_1BD36B4(touchBlockObj, v16);
  }
  CommonUI__maskFadeout(v44, FADEOUT_KIND, FADEOUT_TIME, v45, 0LL);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  QuestRewardInfo_o *v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  _DWORD *v43; // x8
  __int64 v44; // x9
  __int64 v45; // x10
  __int64 v46; // x9
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v50; // x19
  System_Action_o *v51; // x22

  if ( (byte_4B3A3C6 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_1BD3458(&QuestRewardInfo_TypeInfo, v11);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__, v13);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass76_0_TypeInfo, v14);
    byte_4B3A3C6 = 1;
  }
  v15 = sub_1BD36A4(MissionListViewManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 24) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 32) = gifts;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)gifts, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 48) = afterDetail;
  *(_DWORD *)(v15 + 40) = idx;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v15 + 48), (int64_t)afterDetail, v30, v31, v32, v33, v34, v35);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v36 = (QuestRewardInfo_o *)sub_1BD36A4(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v36, 0LL);
  *(_QWORD *)(v15 + 16) = v36;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = *(_DWORD **)(v15 + 16);
  if ( !v43 )
    goto LABEL_11;
  v43[4] = 5;
  v43[5] = equipId;
  v44 = *(_QWORD *)(v15 + 32);
  if ( !v44 )
    goto LABEL_11;
  v45 = *(int *)(v15 + 40);
  if ( (unsigned int)v45 >= *(_DWORD *)(v44 + 24) )
    sub_1BD36BC(touchBlockObj, v17);
  v46 = *(_QWORD *)(v44 + 8 * v45 + 32);
  if ( !v46
    || (v43[6] = *(_DWORD *)(v46 + 28),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v50 = (CommonUI_o *)Instance,
        v51 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v51,
          (Il2CppObject *)v15,
          Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__,
          0LL),
        !v50) )
  {
LABEL_11:
    sub_1BD36B4(touchBlockObj, v17);
  }
  CommonUI__maskFadeout(v50, FADEOUT_KIND, FADEOUT_TIME, v51, 0LL);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v44; // x19
  System_Action_o *v45; // x21

  if ( (byte_4B3A3C9 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, userSvtID);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__, v18);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass79_0_TypeInfo, v19);
    byte_4B3A3C9 = 1;
  }
  v20 = sub_1BD36A4(MissionListViewManager___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_7;
  *(_DWORD *)(v20 + 16) = giftType;
  *(_QWORD *)(v20 + 24) = userSvtID;
  *(_QWORD *)(v20 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_BYTE *)(v20 + 40) = isDoEffect;
  *(_BYTE *)(v20 + 41) = isNew;
  *(_QWORD *)(v20 + 48) = gifts;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v20 + 48), (int64_t)gifts, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v20 + 64) = afterDetail;
  *(_DWORD *)(v20 + 56) = idx;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v20 + 64), (int64_t)afterDetail, v35, v36, v37, v38, v39, v40);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v44 = (CommonUI_o *)Instance,
        v45 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v45,
          (Il2CppObject *)v20,
          Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__,
          0LL),
        !v44) )
  {
LABEL_7:
    sub_1BD36B4(touchBlockObj, v22);
  }
  CommonUI__maskFadeout(v44, FADEOUT_KIND, FADEOUT_TIME, v45, 0LL);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  QuestRewardInfo_o *v40; // x24
  __int64 *v41; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  _DWORD *v48; // x8
  __int64 v49; // x9
  __int64 v50; // x10
  __int64 v51; // x9
  unsigned int ItemEffectId; // w0
  const MethodInfo *v53; // x4
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v57; // x8
  __int64 v58; // x9
  int v59; // w10
  __int64 v60; // x13
  int v61; // w11
  int v62; // w12
  __int64 v63; // x14
  __int64 v64; // x15
  Il2CppObject *v65; // x19
  AvalonSceneManager_c *v66; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v68; // x21

  if ( (byte_4B3A3C8 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&itemId);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_1BD3458(&QuestRewardInfo_TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__, v16);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass78_0_TypeInfo, v17);
    byte_4B3A3C8 = 1;
  }
  v18 = sub_1BD36A4(MissionListViewManager___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_33;
  *(_QWORD *)(v18 + 24) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 40) = gifts;
  v27 = (__int64 *)(v18 + 40);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 40), (int64_t)gifts, v28, v29, v30, v31, v32, v33);
  *(_DWORD *)(v18 + 48) = idx;
  *(_QWORD *)(v18 + 56) = afterDetail;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 56), (int64_t)afterDetail, v34, v35, v36, v37, v38, v39);
  v40 = (QuestRewardInfo_o *)sub_1BD36A4(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v40, 0LL);
  *(_QWORD *)(v18 + 32) = v40;
  v41 = (__int64 *)(v18 + 32);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)v40, v42, v43, v44, v45, v46, v47);
  v48 = *(_DWORD **)(v18 + 32);
  if ( !v48 )
    goto LABEL_33;
  v48[4] = 2;
  v48[5] = itemId;
  v49 = *(_QWORD *)(v18 + 40);
  if ( !v49 )
    goto LABEL_33;
  v50 = *(int *)(v18 + 48);
  if ( (unsigned int)v50 >= *(_DWORD *)(v49 + 24) )
    goto LABEL_34;
  v51 = *(_QWORD *)(v49 + 8 * v50 + 32);
  if ( !v51 )
    goto LABEL_33;
  v48[6] = *(_DWORD *)(v51 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
         (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v18 + 40),
      *(_DWORD *)(v18 + 48) + 1,
      *(System_Action_o **)(v18 + 56),
      v53);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  v20 = *(unsigned int *)(v18 + 16);
  v54 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v55 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v54 )
    goto LABEL_33;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v54 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      v20,
      *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v54 + 4 * m_CancellationTokenSource_low + 32) = v20;
  }
  v57 = *v41;
  if ( !*v41 )
    goto LABEL_33;
  *(_DWORD *)(v57 + 24) = 0;
  v58 = *v27;
  if ( !*v27 )
    goto LABEL_33;
  v59 = *(_DWORD *)(v58 + 24);
  if ( v59 >= 1 )
  {
    v60 = *(int *)(v18 + 48);
    v61 = 0;
    v62 = 0;
    v63 = v58 + 8 * v60 + 32;
    while ( v59 != v61 && (unsigned int)v60 < v59 )
    {
      if ( !*(_QWORD *)v63 )
        goto LABEL_33;
      v64 = *(_QWORD *)(v58 + 8LL * v61 + 32);
      if ( !v64 )
        goto LABEL_33;
      if ( *(_DWORD *)(*(_QWORD *)v63 + 24LL) == *(_DWORD *)(v64 + 24) )
      {
        v62 += *(_DWORD *)(v64 + 28);
        *(_DWORD *)(v57 + 24) = v62;
      }
      if ( v59 == ++v61 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1BD36BC(Instance, v20);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v66 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v66 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v66->static_fields->DEFAULT_FADE_TIME;
  v68 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v18,
    Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v65 )
LABEL_33:
    sub_1BD36B4(Instance, v20);
  CommonUI__maskFadeout((CommonUI_o *)v65, 1, DEFAULT_FADE_TIME, v68, 0LL);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v45; // x2
  unsigned int EffectId; // w0
  __int64 v47; // x2
  __int64 v48; // x3
  const MethodInfo *v49; // x4
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  ScrTerminalListTop_c *v53; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v55; // x0
  System_String_o *v56; // x21
  Il2CppObject *Object_object__49362760; // x21
  UnityEngine_GameObject_o *v58; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardItemAction_o **v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  QuestRewardItemAction_o *v67; // x22
  ScrTerminalListTop_c *v68; // x0
  System_String_o *useTreasureGetEffectName; // x22
  QuestRewardItemAction_o *v70; // x21
  System_String_o **p_overWriteTitleSpriteName; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v75; // x19
  System_Action_o *v76; // x22
  int v77; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B3A3CF & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, gifts);
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, v9);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__, v10);
    sub_1BD3458(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v11);
    sub_1BD3458(&int_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__, v16);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v18);
    sub_1BD3458(&ScrTerminalListTop_TypeInfo, v19);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1BD3458(
      &Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
      v21);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass85_0_TypeInfo, v22);
    byte_4B3A3CF = 1;
  }
  v23 = sub_1BD36A4(MissionListViewManager___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_36;
  *(_QWORD *)(v23 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 40) = gifts;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 40), (int64_t)gifts, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v23 + 56) = afterDetail;
  *(_DWORD *)(v23 + 48) = idx;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 56), (int64_t)afterDetail, v38, v39, v40, v41, v42, v43);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Item = System_Collections_Generic_List_object___get_Item(
           dispRewardInfoList,
           0,
           (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
  EffectId = MissionListViewManager__GetItemGetEffectId(this, (QuestRewardInfo_o *)Item, v45);
  *(_DWORD *)(v23 + 16) = EffectId;
  v25 = EffectId;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)dispRewardInfoList,
         v25,
         (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v23 + 40),
      *(_DWORD *)(v23 + 48) + 1,
      *(System_Action_o **)(v23 + 56),
      v49);
    return;
  }
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v25 = *(unsigned int *)(v23 + 16);
  items = dispRewardInfoList->fields._items;
  v51 = Method_System_Collections_Generic_List_int__Add__;
  ++dispRewardInfoList->fields._version;
  if ( !items )
    goto LABEL_36;
  size = dispRewardInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)dispRewardInfoList,
      v25,
      *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    dispRewardInfoList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = v25;
  }
  v53 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v53 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v53->static_fields->ITEM_GET_EFFECT_NAME;
  v77 = *(_DWORD *)(v23 + 16);
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v47, v48, v49);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__Format(
                                                                      ITEM_GET_EFFECT_NAME,
                                                                      v55,
                                                                      0LL);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_36;
  v56 = (System_String_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemGetAssetDatas,
                                                                      *(_DWORD *)(v23 + 16),
                                                                      (const MethodInfo_3224EF4 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              (AssetData_o *)dispRewardInfoList,
                              v56,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__49362760,
                                                                      (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v58 = (UnityEngine_GameObject_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)dispRewardInfoList,
                                                                      0LL);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)dispRewardInfoList, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v58, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v58,
                       (const MethodInfo_2F83564 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v23 + 24) = Component_object;
  v60 = (QuestRewardItemAction_o **)(v23 + 24);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)Component_object, v61, v62, v63, v64, v65, v66);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v67 = *v60;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                      dispRewardInfoList,
                                                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
  if ( !v67 )
    goto LABEL_36;
  QuestRewardItemAction__Setup_34753760(
    v67,
    (QuestRewardInfo_array *)dispRewardInfoList,
    *(_DWORD *)(v23 + 16) == 0,
    0LL);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(
                                                                      this->fields.overWriteTitleSpriteName,
                                                                      0LL);
  if ( ((unsigned __int8)dispRewardInfoList & 1) == 0 )
  {
    v70 = *v60;
    if ( !v70 )
      goto LABEL_36;
    p_overWriteTitleSpriteName = &this->fields.overWriteTitleSpriteName;
    goto LABEL_33;
  }
  v68 = ScrTerminalListTop_TypeInfo;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v68 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Equality(useTreasureGetEffectName, v68->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)ScrTerminalListTop_TypeInfo;
    v70 = *v60;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    if ( v70 )
    {
      p_overWriteTitleSpriteName = &ScrTerminalListTop_TypeInfo->static_fields->PRIZE_ITEM_GET_TITLE;
LABEL_33:
      QuestRewardItemAction__SetTitleSprite(v70, *p_overWriteTitleSpriteName, 0LL);
      goto LABEL_34;
    }
LABEL_36:
    sub_1BD36B4(dispRewardInfoList, v25);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  FADEOUT_KIND = this->fields.FADEOUT_KIND;
  FADEOUT_TIME = this->fields.FADEOUT_TIME;
  v75 = (CommonUI_o *)Instance;
  v76 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v76,
    (Il2CppObject *)v23,
    Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
    0LL);
  if ( !v75 )
    goto LABEL_36;
  CommonUI__maskFadeout(v75, FADEOUT_KIND, FADEOUT_TIME, v76, 0LL);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v29; // x19
  System_Action_o *v30; // x22

  if ( (byte_4B3A3CA & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&callCnt);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__, v8);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass80_0_TypeInfo, v9);
    byte_4B3A3CA = 1;
  }
  v10 = sub_1BD36A4(MissionListViewManager___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 32) = callback;
  *(_DWORD *)(v10 + 24) = callCnt;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)callback, v19, v20, v21, v22, v23, v24);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v10 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v29 = (CommonUI_o *)Instance;
    v30 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v10,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( v29 )
    {
      CommonUI__maskFadeout(v29, FADEOUT_KIND, FADEOUT_TIME, v30, 0LL);
      return;
    }
LABEL_9:
    sub_1BD36B4(v11, v12);
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
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v24; // x20

  if ( (byte_4B3A3CB & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, callback);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v5);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__, v6);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass81_0_TypeInfo, v7);
    byte_4B3A3CB = 1;
  }
  v8 = sub_1BD36A4(MissionListViewManager___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = callback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)callback, v17, v18, v19, v20, v21, v22);
  svtRewardComp = this->fields.svtRewardComp;
  v24 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__,
    0LL);
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtRewardComp )
LABEL_8:
    sub_1BD36B4(v9, v10);
  ServantRewardAction__Play(svtRewardComp, v24, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
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
  if ( (byte_4B3A3CC & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_ServantCostumeMaster___, resultEntity);
    sub_1BD3458(&DataManager_TypeInfo, v5);
    byte_4B3A3CC = 1;
  }
  Master_object = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !Master_object )
    goto LABEL_8;
  v8 = Master_object;
  v9 = System_String__Substring_62544252(Master_object, 0, Master_object->fields._stringLength - 2, 0LL);
  v10 = System_Int32__Parse(v9, 0LL);
  v11 = System_String__Substring(v8, v8->fields._stringLength - 2, 0LL);
  v12 = System_Int32__Parse(v11, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1BD36B4(Master_object, v7);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  MissionListViewItem_o **v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_List_object__o *v47; // x23
  System_Collections_Generic_List_object__o **v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct EventMissionEntity_o *eventMissionEnt; // x8
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x3
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  bool v64; // w23
  System_Action_o *v65; // x21
  BalanceConfig_c *v66; // x0
  EventMissionConditionEntity_o *NotClearCondInfo; // x0
  const MethodInfo *v68; // x5
  int condType; // w8
  MissionListViewItem_o *v70; // x4
  __int64 *v71; // x8
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_List_object__o *v78; // x8
  struct System_Object_array *items; // x9
  _QWORD *v80; // x10
  __int64 size; // x11
  int64_t v82; // x1
  Il2CppClass **v83; // x0
  System_Action_o *v84; // x0
  __int64 *v85; // x8
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 sortIndex; // x10
  __int64 v95; // x8
  System_Action_o *v96; // x21
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3A3D4 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, item);
    sub_1BD3458(&BalanceConfig_TypeInfo, v7);
    sub_1BD3458(&Method_DataManager_GetMaster_MissionNaviTransitionMaster___, v8);
    sub_1BD3458(&DataManager_TypeInfo, v9);
    sub_1BD3458(
      &Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__,
      v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v13);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__, v14);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__, v15);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__, v16);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass90_0_TypeInfo, v17);
    sub_1BD3458(&StringLiteral_4677/*"Combine/ServantSkillCombine"*/, v18);
    sub_1BD3458(&StringLiteral_4675/*"Combine/ServantEQCombine"*/, v19);
    sub_1BD3458(&StringLiteral_4673/*"Combine/ClassBoard"*/, v20);
    sub_1BD3458(&StringLiteral_4676/*"Combine/ServantLimitCountUp"*/, v21);
    sub_1BD3458(&StringLiteral_1/*""*/, v22);
    sub_1BD3458(&StringLiteral_13251/*"Summon/FRIEND_POINT"*/, v23);
    sub_1BD3458(&StringLiteral_4674/*"Combine/ServantCombine"*/, v24);
    byte_4B3A3D4 = 1;
  }
  entity = 0LL;
  v25 = sub_1BD36A4(MissionListViewManager___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_55;
  *(_QWORD *)(v25 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 24) = item;
  v34 = (MissionListViewItem_o **)(v25 + 24);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)item, v35, v36, v37, v38, v39, v40);
  *naviAction = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)naviAction, 0LL, v41, v42, v43, v44, v45, v46);
  v47 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *(_QWORD *)(v25 + 32) = v47;
  v48 = (System_Collections_Generic_List_object__o **)(v25 + 32);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)v47, v49, v50, v51, v52, v53, v54);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
  if ( !*v34 )
    goto LABEL_55;
  eventMissionEnt = (*v34)->fields.eventMissionEnt;
  if ( !eventMissionEnt || !Master_object )
    goto LABEL_55;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         eventMissionEnt->fields.id,
         (const MethodInfo_31D1F44 *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__) )
  {
    Master_object = (MissionListViewItem_o *)entity;
    if ( entity )
    {
      switch ( HIDWORD(entity[1].klass) )
      {
        case 1:
          v64 = MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v34,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v25 + 32),
                  v57);
          if ( v64 )
          {
            v65 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
            System_Action___ctor(
              v65,
              (Il2CppObject *)v25,
              Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__,
              0LL);
          }
          else
          {
            v65 = 0LL;
          }
          *naviAction = v65;
          sub_1BD33FC((PartyOrganizationUtility_o *)naviAction, (int64_t)v65, v58, v59, v60, v61, v62, v63);
          return v64;
        case 2:
          if ( MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
                 (MissionNaviTransitionEntity_o *)entity,
                 *v34,
                 (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v25 + 32),
                 v57) )
          {
            goto LABEL_43;
          }
          goto LABEL_17;
        case 3:
          if ( !MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v34,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v25 + 32),
                  v57) )
            goto LABEL_17;
          goto LABEL_43;
        case 4:
          Master_object = (MissionListViewItem_o *)MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem(
                                                     (MissionNaviTransitionEntity_o *)entity,
                                                     *v34,
                                                     v56);
          v78 = *v48;
          if ( !*v48 )
            goto LABEL_55;
          items = v78->fields._items;
          v80 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
          ++v78->fields._version;
          if ( !items )
            goto LABEL_55;
          size = v78->fields._size;
          v82 = (int64_t)Master_object;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v78,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            v83 = &items->obj.klass + size;
            v78->fields._size = size + 1;
            v83[4] = (Il2CppClass *)v82;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v83 + 4), v82, v72, v73, v74, v75, v76, v77);
          }
LABEL_43:
          v84 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
          v85 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__;
          break;
        default:
          goto LABEL_17;
      }
      goto LABEL_53;
    }
    goto LABEL_55;
  }
LABEL_17:
  v66 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  if ( !v66->static_fields->IsMissionNaviAutoClassify )
    return 0;
  Master_object = *v34;
  if ( !*v34 )
    goto LABEL_55;
  NotClearCondInfo = MissionListViewItem__GetNotClearCondInfo(Master_object, (const MethodInfo *)v27);
  if ( !NotClearCondInfo )
    return 0;
  condType = NotClearCondInfo->fields.condType;
  if ( condType > 141 )
  {
    switch ( condType )
    {
      case 187:
        v70 = *v34;
        v71 = &StringLiteral_4673/*"Combine/ClassBoard"*/;
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
        v70 = *v34;
        v71 = &StringLiteral_4677/*"Combine/ServantSkillCombine"*/;
        break;
    }
LABEL_45:
    v27 = MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_45045556(
            (System_String_o *)*v71,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            (System_String_o *)StringLiteral_1/*""*/,
            v70,
            v68);
    if ( v27 )
    {
      Master_object = (MissionListViewItem_o *)*v48;
      if ( *v48 )
      {
        v92 = *(_QWORD *)&Master_object->fields.selectNum;
        v93 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
        ++Master_object->fields.loopIndex;
        if ( v92 )
        {
          sortIndex = Master_object->fields.sortIndex;
          if ( (unsigned int)sortIndex >= *(_DWORD *)(v92 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v27,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = v92 + 8 * sortIndex;
            Master_object->fields.sortIndex = sortIndex + 1;
            *(_QWORD *)(v95 + 32) = v27;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v95 + 32), (int64_t)v27, v86, v87, v88, v89, v90, v91);
          }
          v84 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
          v85 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__;
LABEL_53:
          v96 = v84;
          System_Action___ctor(v84, (Il2CppObject *)v25, *v85, 0LL);
          *naviAction = v96;
          sub_1BD33FC((PartyOrganizationUtility_o *)naviAction, (int64_t)v96, v97, v98, v99, v100, v101, v102);
          return 1;
        }
      }
LABEL_55:
      sub_1BD36B4(Master_object, v27);
    }
    return 0;
  }
  v64 = 0;
  if ( condType > 7 )
  {
    if ( condType == 8 )
    {
      v70 = *v34;
      v71 = &StringLiteral_13251/*"Summon/FRIEND_POINT"*/;
      goto LABEL_45;
    }
    if ( condType == 141 )
    {
      v70 = *v34;
      v71 = &StringLiteral_4675/*"Combine/ServantEQCombine"*/;
      goto LABEL_45;
    }
  }
  else
  {
    if ( condType == 6 )
    {
LABEL_39:
      v70 = *v34;
      v71 = &StringLiteral_4674/*"Combine/ServantCombine"*/;
      goto LABEL_45;
    }
    if ( condType == 7 )
    {
LABEL_28:
      v70 = *v34;
      v71 = &StringLiteral_4676/*"Combine/ServantLimitCountUp"*/;
      goto LABEL_45;
    }
  }
  return v64;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  float realtimeSinceStartup; // s0
  float v15; // s0
  float v16; // s0
  float alphaAnimTimeOld; // s9
  float v18; // s8
  MissionListViewManager_c *v19; // x0
  float v20; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v22; // w21
  MissionListViewManager_c *v23; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v25; // w21

  if ( (byte_4B3A3B5 & 1) == 0 )
  {
    sub_1BD3458(&MissionListViewManager_TypeInfo, method);
    sub_1BD3458(&Method_TransitionCalculator_float__Update__, v3);
    byte_4B3A3B5 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v6 = MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = v6;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.rewardIconAlphaCalculator,
      (int64_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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
  v15 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_387F4C4 *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v15;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0LL) )
  {
    v16 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v18 = v16;
    v19 = MissionListViewManager_TypeInfo;
    if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
      v19 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v18 - alphaAnimTimeOld) >= v19->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    sub_1BD36B4(rewardIconAlphaCalculator, v13);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0LL);
  v20 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v20;
  v22 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v23 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v23 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v23->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v22 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v25 = this->fields.alphaAnimCnt;
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v25 - ALPHA_ANIM_COUNT_RESET_VAL;
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

  if ( (byte_4B3A3B3 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, value);
    byte_4B3A3B3 = 1;
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
    v8 = sub_1C0E948(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BD3974(v7);
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

  if ( (byte_4B3A3B4 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, value);
    byte_4B3A3B4 = 1;
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
    v8 = sub_1C0E948(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BD3974(v7);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3A3D9 & 1) == 0 )
  {
    sub_1BD3458(&MissionListViewManager___c_TypeInfo, v1);
    byte_4B3A3D9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(MissionListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MissionListViewManager___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)MissionListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return !Gift__IsItem_38469552(x->fields.type, 0LL);
}


bool __fastcall MissionListViewManager___c___CreateDisplayRewardList_b__84_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return Gift__IsItem_38469552(x->fields.type, 0LL);
}


void __fastcall MissionListViewManager___c___SetupMissionCondTransitionConfirmDialog_b__92_0(
        MissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A3DA & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4B3A3DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
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
  const MethodInfo *v2; // x2
  MissionListViewManager___c__DisplayClass73_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *_4__this; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4B3A3DB & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1BD3458(
                                                               &Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__,
                                                               v4);
    byte_4B3A3DB = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1BD36B4(this, method);
  MissionListViewManager__LoadTreasureGetEffect(_4__this, _9__1, v2);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x0
  struct MissionListViewManager_o *v6; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B3A3DC & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__, v4);
    byte_4B3A3DC = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  MissionListViewManager__SetupTreasureGetEffect(_4__this, _4__this->fields.giftIconId, v2);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  questRewardBoxAction = v6->fields.questRewardBoxAction;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_1BD36B4(_4__this, method);
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
  const MethodInfo *v8; // x4

  v2 = this;
  if ( (byte_4B3A3DD & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B3A3DD = 1;
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
  UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_12;
  treasureGetAssetData = v6->fields.treasureGetAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38574016(treasureGetAssetData, 0LL);
  this = (MissionListViewManager___c__DisplayClass73_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1BD36B4(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v2->fields.gifts,
    0,
    v2->fields.afterDetail,
    v8);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BD36B4(this, method);
  MissionListViewManager__EndItemGetEffectAction(this->fields.__4__this, this->fields.afterDetail, v2);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartItemGetEffectAction_b__1(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BD36B4(this, method);
  _4__this->fields.isEffect = 1;
  MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
    _4__this,
    this->fields.gifts,
    this->fields.idx,
    this->fields.afterDetail,
    v2);
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
    sub_1BD36B4(this, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B3A3DE & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__, v4);
    byte_4B3A3DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1BD36B4(Instance, v6);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B3A3DF & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__, v4);
    byte_4B3A3DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
    sub_1BD36B4(Instance, v6);
  CommonUI__OpenEquipGetEffect(v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4B3A3E0 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3A3E0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BD36B4(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v5);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B3A3E1 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_4B3A3E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1BD36B4(Instance, v6);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B3A3E2 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_4B3A3E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
    sub_1BD36B4(Instance, v6);
  CommonUI__OpenCostumeReleaseEffect(v8, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4B3A3E3 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3A3E3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BD36B4(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v5);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B3A3E4 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&int_TypeInfo, v6);
    sub_1BD3458(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BD3458(&MissionInfoMaker_TypeInfo, v8);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__, v9);
    byte_4B3A3E4 = 1;
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
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1BD36A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v16, v17, v18, v19, v20, v21);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  MissionInfoMaker_c *v31; // x0
  AssetData_o *v32; // x21
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v34; // x0
  Il2CppObject *Object_object__49362760; // x21
  UnityEngine_GameObject_o *v36; // x21
  struct MissionListViewManager_o *_4__this; // x8
  Il2CppObject *Component_object; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  QuestRewardItemAction_o *v45; // x19
  System_Action_o *v46; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B3A3E5 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, data);
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, v5);
    sub_1BD3458(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v6);
    sub_1BD3458(&int_TypeInfo, v7);
    sub_1BD3458(&MissionInfoMaker_TypeInfo, v8);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__, v11);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass78_1_TypeInfo, v12);
    byte_4B3A3E5 = 1;
  }
  v13 = sub_1BD36A4(MissionListViewManager___c__DisplayClass78_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = data;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)data, v22, v23, v24, v25, v26, v27);
  v31 = MissionInfoMaker_TypeInfo;
  v32 = *(AssetData_o **)(v13 + 24);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v31 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v31->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v28, v29, v30);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v34, 0LL);
  if ( !v32 )
    goto LABEL_15;
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              v32,
                              transform,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__49362760,
                                   (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_15;
  v36 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v36, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v36,
                       (const MethodInfo_2F83564 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)Component_object, v39, v40, v41, v42, v43, v44);
  transform = *(System_String_o **)(v13 + 16);
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        v45 = *(QuestRewardItemAction_o **)(v13 + 16),
        v46 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v46,
          (Il2CppObject *)v13,
          Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !v45) )
  {
LABEL_15:
    sub_1BD36B4(transform, v15);
  }
  QuestRewardItemAction__Play(v45, 0, v46, 0.0, 0LL);
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
  const MethodInfo *v7; // x4
  struct MissionListViewManager___c__DisplayClass78_0_o *CS___8__locals1; // x8

  if ( (byte_4B3A3E6 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B3A3E6 = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38574016(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_11:
    sub_1BD36B4(mRewardItemAction, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    v7);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B3A3E7 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__, v4);
    byte_4B3A3E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1BD36B4(Instance, v6);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct MissionListViewManager_o *v24; // x8
  _BOOL4 isDoEffect; // w24
  ServantRewardAction_o *svtRewardComp; // x20
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v29; // w22
  Il2CppObject v30; // q1
  int64_t v31; // x0
  Il2CppClass *v32; // x8
  int64_t v33; // x21
  bool isNew; // w5
  int32_t v35; // w3
  bool v36; // w6
  int32_t v37; // w7
  ServantRewardAction_o *v38; // x0
  int32_t v39; // w1
  int64_t v40; // x2
  const MethodInfo *v41; // x2
  Il2CppObject *v42; // x0
  struct MissionListViewManager_o *v43; // x20
  Il2CppObject *v44; // x21
  struct MissionListViewManager_o *v45; // x8
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct MissionListViewManager_o *v52; // x8
  ServantRewardAction_o *v53; // x20
  Il2CppObject v54; // q1
  bool v55; // w2
  int64_t v56; // x1
  bool v57; // w3
  int32_t v58; // w4
  ServantRewardAction_o *v59; // x0
  Il2CppObject v60; // q1
  int64_t v61; // x0
  Il2CppClass *v62; // x8
  int64_t v63; // x21
  Il2CppObject v64; // q1
  System_Action_o *_9__2; // x22
  MissionListViewManager_o *v66; // x20
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4B3A3E8 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1BD3458(&DataManager_TypeInfo, v5);
    sub_1BD3458(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__, v11);
    byte_4B3A3E8 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 this->fields.userSvtID,
                 (const MethodInfo_31D209C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v16 = Entity;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&_4__this->fields.svtRewardComp,
              Master_object,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
            v24 = this->fields.__4__this;
            if ( v24 )
            {
              if ( v16 )
              {
                isDoEffect = this->fields.isDoEffect;
                svtRewardComp = v24->fields.svtRewardComp;
                klass = v16[5].klass;
                monitor = v16[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v78.fields.currentCryptoKey = klass;
                *(_QWORD *)&v78.fields.fakeValue = monitor;
                v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v78, 0LL);
                if ( isDoEffect )
                {
                  v30 = v16[2];
                  *(Il2CppObject *)&v77.fields.currentCryptoKey = v16[1];
                  *(Il2CppObject *)&v77.fields.fakeValue = v30;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v76 = v77;
                  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v76, 0LL);
                  v32 = v16[6].klass;
                  *(_QWORD *)&v79.fields.fakeValue = v16[6].monitor;
                  v33 = v31;
                  *(_QWORD *)&v79.fields.currentCryptoKey = v32;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v79, 0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v35 = Master_object;
                    v36 = 1;
                    v37 = 14;
                    v38 = svtRewardComp;
                    v39 = v29;
                    v40 = v33;
LABEL_37:
                    ServantRewardAction__Setup(v38, v39, v40, v35, 1, isNew, v36, v37, 0LL);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v60 = v16[2];
                  *(Il2CppObject *)&v77.fields.currentCryptoKey = v16[1];
                  *(Il2CppObject *)&v77.fields.fakeValue = v60;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v75 = v77;
                  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v75, 0LL);
                  v62 = v16[6].klass;
                  *(_QWORD *)&v80.fields.fakeValue = v16[6].monitor;
                  v63 = v61;
                  *(_QWORD *)&v80.fields.currentCryptoKey = v62;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v80, 0LL);
                  if ( svtRewardComp )
                  {
                    v35 = Master_object;
                    v37 = 6;
                    v38 = svtRewardComp;
                    v39 = v29;
                    v40 = v63;
                    isNew = 0;
                    v36 = 0;
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
    sub_1BD36B4(Master_object, v13);
  }
  Master_object = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_object & 1) == 0 )
    goto LABEL_43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_47;
  v42 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          this->fields.userSvtID,
          (const MethodInfo_31D209C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v43 = this->fields.__4__this;
  v44 = v42;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v45 = this->fields.__4__this;
  if ( !v45 )
    goto LABEL_47;
  if ( !Master_object )
    goto LABEL_47;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v45->fields.instantiatingPOS,
                             0,
                             0LL);
  if ( !v43 )
    goto LABEL_47;
  v43->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v43->fields.svtRewardComp, Master_object, v46, v47, v48, v49, v50, v51);
  v52 = this->fields.__4__this;
  if ( !v52 || !v44 )
    goto LABEL_47;
  v53 = v52->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v54 = v44[2];
    *(Il2CppObject *)&v77.fields.currentCryptoKey = v44[1];
    *(Il2CppObject *)&v77.fields.fakeValue = v54;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v74 = v77;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v74, 0LL);
    if ( !v53 )
      goto LABEL_47;
    v55 = this->fields.isNew;
    v56 = Master_object;
    v57 = 1;
    v58 = 14;
    v59 = v53;
  }
  else
  {
    v64 = v44[2];
    *(Il2CppObject *)&v77.fields.currentCryptoKey = v44[1];
    *(Il2CppObject *)&v77.fields.fakeValue = v64;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v73 = v77;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v73, 0LL);
    if ( !v53 )
      goto LABEL_47;
    v56 = Master_object;
    v58 = 6;
    v59 = v53;
    v55 = 0;
    v57 = 0;
  }
  ServantRewardAction__SetupCommandCode_35358592(v59, v56, v55, v57, v58, 0LL);
LABEL_43:
  _9__2 = this->fields.__9__2;
  v66 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v67, v68, v69, v70, v71, v72);
  }
  if ( !v66 )
    goto LABEL_47;
  MissionListViewManager__SvtEffCaller(v66, _9__2, v41);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8
  const MethodInfo *v6; // x4

  if ( (byte_4B3A3E9 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, method);
    byte_4B3A3E9 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BD36B4(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v6);
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
  int64_t Master_object; // x0
  __int64 v11; // x1
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v15; // x8
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *v17; // x21
  Il2CppObject *v18; // x20
  struct MissionListViewManager_o *v19; // x8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct MissionListViewManager_o *v26; // x8
  struct GetSvts_array *v27; // x8
  __int64 v28; // x9
  struct MissionListViewManager_o *v29; // x8
  char v30; // w23
  ServantRewardAction_o *svtRewardComp; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x24
  int32_t v34; // w22
  Il2CppObject v35; // q1
  int64_t v36; // x0
  Il2CppClass *v37; // x8
  int64_t v38; // x20
  struct MissionListViewManager_o *v39; // x8
  struct GetSvts_array *v40; // x8
  __int64 v41; // x9
  GetSvts_o *v42; // x8
  const MethodInfo *v43; // x2
  Il2CppObject v44; // q1
  int64_t v45; // x0
  Il2CppClass *v46; // x8
  int64_t v47; // x20
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B3A3EA & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__, v9);
    byte_4B3A3EA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_38;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_39;
  v15 = getSvtList->m_Items[callCnt];
  if ( !v15 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v15->fields.userSvtId,
             (const MethodInfo_31D209C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v17 = this->fields.__4__this;
  v18 = Entity;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v19->fields.instantiatingPOS,
                             0,
                             0LL);
  if ( !v17 )
    goto LABEL_38;
  v17->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v17->fields.svtRewardComp, Master_object, v20, v21, v22, v23, v24, v25);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_38;
  v27 = v26->fields.getSvtList;
  if ( !v27 )
    goto LABEL_38;
  v28 = this->fields.callCnt;
  if ( (unsigned int)v28 >= v27->max_length )
LABEL_39:
    sub_1BD36BC(Master_object, v11);
  Master_object = (int64_t)v27->m_Items[v28];
  if ( !Master_object )
    goto LABEL_38;
  Master_object = GetSvts__isDoGetEff((GetSvts_o *)Master_object, 0LL);
  v29 = this->fields.__4__this;
  if ( !v29 || !v18 )
    goto LABEL_38;
  v30 = Master_object;
  svtRewardComp = v29->fields.svtRewardComp;
  klass = v18[5].klass;
  monitor = v18[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = klass;
  *(_QWORD *)&v59.fields.fakeValue = monitor;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v59, 0LL);
  if ( (v30 & 1) == 0 )
  {
    v44 = v18[2];
    *(Il2CppObject *)&v58.fields.currentCryptoKey = v18[1];
    *(Il2CppObject *)&v58.fields.fakeValue = v44;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v56 = v58;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v56, 0LL);
    v46 = v18[6].klass;
    *(_QWORD *)&v61.fields.fakeValue = v18[6].monitor;
    v47 = v45;
    *(_QWORD *)&v61.fields.currentCryptoKey = v46;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v61, 0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v34, v47, Master_object, 1, 0, 0, 2, 0LL);
      goto LABEL_34;
    }
LABEL_38:
    sub_1BD36B4(Master_object, v11);
  }
  v35 = v18[2];
  *(Il2CppObject *)&v58.fields.currentCryptoKey = v18[1];
  *(Il2CppObject *)&v58.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v57 = v58;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v57, 0LL);
  v37 = v18[6].klass;
  *(_QWORD *)&v60.fields.fakeValue = v18[6].monitor;
  v38 = v36;
  *(_QWORD *)&v60.fields.currentCryptoKey = v37;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v60, 0LL);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_38;
  v40 = v39->fields.getSvtList;
  if ( !v40 )
    goto LABEL_38;
  v41 = this->fields.callCnt;
  if ( (unsigned int)v41 >= v40->max_length )
    goto LABEL_39;
  v42 = v40->m_Items[v41];
  if ( !v42 || !svtRewardComp )
    goto LABEL_38;
  ServantRewardAction__Setup(svtRewardComp, v34, v38, Master_object, 1, v42->fields.isNew, 1, 10, 0LL);
LABEL_34:
  _9__1 = this->fields.__9__1;
  v49 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v50, v51, v52, v53, v54, v55);
  }
  if ( !v49 )
    goto LABEL_38;
  MissionListViewManager__SvtEffCaller(v49, _9__1, v43);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B3A3EB & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BD3458(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__, v5);
    byte_4B3A3EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  if ( !v9 )
    sub_1BD36B4(Instance, v7);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BD36B4(0LL, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, this->fields.callCnt + 1, this->fields.callback, v2);
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
  if ( (byte_4B3A3EC & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass81_0_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3A3EC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass81_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_1BD36B4(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70278460(gameObject, 0LL);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B3A3ED & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&int_TypeInfo, v6);
    sub_1BD3458(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BD3458(&ScrTerminalListTop_TypeInfo, v8);
    sub_1BD3458(
      &Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      v9);
    byte_4B3A3ED = 1;
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
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1BD36A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v16, v17, v18, v19, v20, v21);
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
  QuestRewardItemAction_o *mRewardItemAction; // x19
  System_Action_o *v23; // x20

  if ( (byte_4B3A3EE & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, data);
    sub_1BD3458(
      &Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
      v5);
    sub_1BD3458(&MissionListViewManager___c__DisplayClass85_1_TypeInfo, v6);
    byte_4B3A3EE = 1;
  }
  v7 = sub_1BD36A4(MissionListViewManager___c__DisplayClass85_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 16) = data,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)data, v16, v17, v18, v19, v20, v21),
        mRewardItemAction = this->fields.mRewardItemAction,
        v23 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v7,
          Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0LL),
        !mRewardItemAction) )
  {
    sub_1BD36B4(v8, v9);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v23, 0.0, 0LL);
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
  const MethodInfo *v7; // x4
  struct MissionListViewManager___c__DisplayClass85_0_o *v8; // x8

  v2 = this;
  if ( (byte_4B3A3EF & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass85_1_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B3A3EF = 1;
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
  UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
  data = v2->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38574016(data, 0LL);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 || (this = (MissionListViewManager___c__DisplayClass85_1_o *)v8->fields.__4__this) == 0LL )
LABEL_12:
    sub_1BD36B4(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v8->fields.gifts,
    v8->fields.idx + 1,
    v8->fields.afterDetail,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BD36B4(this, data);
  _4__this->fields.treasureGetAssetData = data;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&_4__this->fields.treasureGetAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  const MethodInfo *v6; // x3

  v4 = this;
  if ( (byte_4B3A3F0 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass89_0_o *)sub_1BD3458(
                                                               &Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__,
                                                               data);
    byte_4B3A3F0 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass89_0_o *)_4__this->fields.itemGetAssetDatas) == 0LL
    || (System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (Il2CppObject *)data,
          (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass89_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1BD36B4(this, data);
  }
  MissionListViewManager__LoadItemGetEffects(
    (MissionListViewManager_o *)this,
    v4->fields.idx + 1,
    v4->fields.endAct,
    v6);
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
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BD36B4(this, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    this->fields.__4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    v2);
}


void __fastcall MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__1(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BD36B4(this, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    this->fields.__4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    v2);
}


void __fastcall MissionListViewManager___c__DisplayClass90_0___TrySetupMissionCondNaviAction_b__2(
        MissionListViewManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BD36B4(this, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    this->fields.__4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    v2);
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

  if ( (byte_4B3A3F1 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B3A3F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
    ActionExtensions__Call(this->fields.decideAction, 0LL);
}