void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MissionListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4B193F4 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, v1, v2);
    byte_4B193F4 = 1;
  }
  static_fields = MissionListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x40DE021F0LL;
}


void __fastcall MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  AvalonSceneManager_c *v31; // x0

  if ( (byte_4B193F3 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo, v11, v12);
    byte_4B193F3 = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v13;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rewardItemGetEffectPlayList,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestRewardInfo__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v23;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dispRewardInfoList,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.FADEOUT_KIND = 1;
  v31 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v30);
    v31 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v31->static_fields->DEFAULT_FADE_TIME);
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

  if ( (byte_4B193DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B193DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseItemDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B193DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MissionListViewManager_CloseItemDetail__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B193DB = 1;
  }
  v5 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_MissionListViewManager_CloseItemDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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

  if ( (byte_4B193DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B193DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MissionListViewManager__CreateDisplayRewardList(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        const MethodInfo *method)
{
  char *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *Master_object; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  MissionListViewManager___c_c *v39; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  System_Func_object__bool__o *_9__84_0; // x22
  Il2CppObject *v42; // x23
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  MissionListViewManager___c_c *v53; // x0
  System_Func_object__bool__o *_9__84_1; // x22
  Il2CppObject *v55; // x23
  struct MissionListViewManager___c_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_Collections_Generic_List_object__o *v64; // x23
  struct System_Collections_Generic_List_QuestRewardInfo__o **p_dispRewardInfoList; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  MissionListViewManager_o *ItemEffect; // x0
  __int64 v73; // x1
  int v74; // w8
  __int64 v75; // x23
  char *v76; // x28
  __int64 v77; // x8
  const MethodInfo *v78; // x2
  __int64 v79; // x2
  __int64 v80; // x3
  QuestRewardInfo_o *v81; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x8
  int32_t size; // w27
  const char *v90; // x8
  _QWORD *v91; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const char *v93; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = (char *)gifts;
  if ( (byte_4B193EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_GiftEntity___, gifts, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GiftEntity___, v13, v14);
    sub_1BCA7E0(&System_Func_GiftEntity__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo, v23, v24);
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&QuestRewardInfo_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__, v29, v30);
    sub_1BCA7E0(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__, v31, v32);
    sub_1BCA7E0(&MissionListViewManager___c_TypeInfo, v33, v34);
    byte_4B193EA = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gifts);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  v39 = MissionListViewManager___c_TypeInfo;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo, v36);
    v39 = MissionListViewManager___c_TypeInfo;
  }
  _9__84_0 = (System_Func_object__bool__o *)v39->static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39, v36);
      v39 = MissionListViewManager___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__84_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GiftEntity__bool__TypeInfo, v36, v37, v38);
    System_Func_object__bool____ctor(
      _9__84_0,
      v42,
      Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_0__,
      0LL);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__84_0 = (struct System_Func_GiftEntity__bool__o *)_9__84_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__84_0,
      (int64_t)_9__84_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( BasicHelper__Any_object__49274176(
         (System_Object_array *)v3,
         (System_Func_T__bool__o *)_9__84_0,
         (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v53 = MissionListViewManager___c_TypeInfo;
    if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo, v50);
      v53 = MissionListViewManager___c_TypeInfo;
    }
    _9__84_1 = (System_Func_object__bool__o *)v53->static_fields->__9__84_1;
    if ( !_9__84_1 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53, v50);
        v53 = MissionListViewManager___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__84_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GiftEntity__bool__TypeInfo, v50, v51, v52);
      System_Func_object__bool____ctor(
        _9__84_1,
        v55,
        Method_MissionListViewManager___c__CreateDisplayRewardList_b__84_1__,
        0LL);
      v56 = MissionListViewManager___c_TypeInfo->static_fields;
      v56->__9__84_1 = (struct System_Func_GiftEntity__bool__o *)_9__84_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v56->__9__84_1, (int64_t)_9__84_1, v57, v58, v59, v60, v61, v62);
    }
    v63 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v3,
            (System_Func_TSource__bool__o *)_9__84_1,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    v3 = (char *)System_Linq_Enumerable__ToArray_object_(
                   v63,
                   (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v64 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestRewardInfo__TypeInfo,
                                                       v50,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  p_dispRewardInfoList = &this->fields.dispRewardInfoList;
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v64;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dispRewardInfoList,
    (int64_t)v64,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  if ( !v3 )
    goto LABEL_43;
  v74 = *((_DWORD *)v3 + 6);
  if ( v74 >= 1 )
  {
    v75 = 0LL;
    v76 = v3 + 32;
    while ( 1 )
    {
      if ( (unsigned int)v75 >= v74 )
LABEL_44:
        sub_1BCAA44(ItemEffect, v73);
      v77 = *(_QWORD *)&v76[8 * v75];
      if ( !v77 || !v40 )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v40,
                                                 &entity,
                                                 *(_DWORD *)(v77 + 24),
                                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   (int32_t)entity[1].klass,
                                                   v78);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v81 = (QuestRewardInfo_o *)sub_1BCAA2C(QuestRewardInfo_TypeInfo, v73, v79, v80);
          QuestRewardInfo___ctor(v81, 0LL);
          if ( !v81 )
            break;
          v81->fields.type = 2;
          if ( !entity )
            break;
          v81->fields.objectId = (int32_t)entity[1].klass;
          if ( (unsigned int)v75 >= *((_DWORD *)v3 + 6) )
            goto LABEL_44;
          v88 = *(_QWORD *)&v76[8 * v75];
          if ( !v88 )
            break;
          v81->fields.num = *(_DWORD *)(v88 + 28);
          if ( !*p_dispRewardInfoList )
            break;
          ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          size = (*p_dispRewardInfoList)->fields._size;
          if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, v73);
            ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          }
          if ( size < ItemEffect->fields.sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE )
          {
            ItemEffect = (MissionListViewManager_o *)*p_dispRewardInfoList;
            if ( !*p_dispRewardInfoList )
              break;
            v90 = *(const char **)&ItemEffect->fields.m_CachedPtr;
            v91 = Method_System_Collections_Generic_List_QuestRewardInfo__Add__;
            ++HIDWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( !v90 )
              break;
            m_CancellationTokenSource_low = SLODWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *((_DWORD *)v90 + 6) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ItemEffect,
                (Il2CppObject *)v81,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
            }
            else
            {
              v93 = &v90[8 * m_CancellationTokenSource_low];
              LODWORD(ItemEffect->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *((_QWORD *)v93 + 4) = v81;
              sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 32), (int64_t)v81, v82, v83, v84, v85, v86, v87);
            }
          }
        }
      }
      v74 = *((_DWORD *)v3 + 6);
      if ( (int)++v75 >= v74 )
        return;
    }
LABEL_43:
    sub_1BCAA3C(ItemEffect, v73);
  }
}


AlphaTransitionCalculator_o *__fastcall MissionListViewManager__CreateRewardIconAlphaCalculator(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  MissionListViewManager_c *v5; // x0
  float v6; // s8
  System_Func_float__float__float__float__o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  AlphaTransitionCalculator_o *v11; // x20

  if ( (byte_4B193D2 & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, v3, v4);
    byte_4B193D2 = 1;
  }
  v5 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, method);
    v5 = MissionListViewManager_TypeInfo;
  }
  v6 = ChangedFPSUtil__CovertFrameNumToSecond(v5->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v7 = ExtraEasing__AsymptoticSeriesFloat(
         MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v11 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v8, v9, v10);
  AlphaTransitionCalculator___ctor(v11, v6, v7, 0LL);
  return v11;
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x20
  struct System_Collections_Generic_Dictionary_int__AssetData__o *v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  int v56; // w9
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w2
  int v71; // w9
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  __int64 v73; // x1
  Il2CppObject *value; // x21
  Il2CppObject *Instance; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  AvalonSceneManager_c *v79; // x8
  CommonUI_o *v80; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v82; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v83; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4B193E1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, afterDetail, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__Clear__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__, v30, v31);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass75_0_TypeInfo, v32, v33);
    byte_4B193E1 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v34 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass75_0_TypeInfo, afterDetail, method, v3);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_22;
  *(_QWORD *)(v34 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)this, v37, v38, v39, v40, v41, v42);
  *(_QWORD *)(v34 + 24) = afterDetail;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 24), (int64_t)afterDetail, v43, v44, v45, v46, v47, v48);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_22;
  v56 = rewardItemGetEffectPlayList->fields._version + 1;
  rewardItemGetEffectPlayList->fields._size = 0;
  rewardItemGetEffectPlayList->fields._version = v56;
  this->fields.questRewardBoxAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRewardBoxAction, 0LL, v49, v50, v51, v52, v53, v54);
  this->fields.isTreasureEffect = 0;
  this->fields.isChangeTitleSprite = 0;
  this->fields.useTreasureGetEffectName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.useTreasureGetEffectName, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.overWriteTitleSpriteName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overWriteTitleSpriteName, 0LL, v63, v64, v65, v66, v67, v68);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_22;
  size = dispRewardInfoList->fields._size;
  v71 = dispRewardInfoList->fields._version + 1;
  dispRewardInfoList->fields._size = 0;
  dispRewardInfoList->fields._version = v71;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)dispRewardInfoList->fields._items, 0, size, 0LL);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
         (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__) >= 1 )
  {
    v35 = this->fields.itemGetAssetDatas;
    if ( !v35 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v83,
      (System_Collections_Generic_Dictionary_int__object__o *)v35,
      (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v83,
              (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
    {
      value = v83.fields._current.fields.value;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v73);
      AssetManager__releaseAsset_38505704((AssetData_o *)value, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v83,
      (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    v35 = this->fields.itemGetAssetDatas;
    if ( !v35 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)v35,
      (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v79 = AvalonSceneManager_TypeInfo;
  v80 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v76);
    v79 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v79->static_fields->DEFAULT_FADE_TIME;
  v82 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v76, v77, v78);
  System_Action___ctor(
    v82,
    (Il2CppObject *)v34,
    Method_MissionListViewManager___c__DisplayClass75_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !v80 )
LABEL_22:
    sub_1BCAA3C(v35, v36);
  CommonUI__maskFadein(v80, DEFAULT_FADE_TIME, v82, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  BalanceConfig_c *v16; // x0
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B193EE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, rewardInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v11, v12);
    this = (MissionListViewManager_o *)sub_1BCA7E0(&StringLiteral_19110/*"effectId"*/, v13, v14);
    byte_4B193EE = 1;
  }
  entity = 0LL;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0LL) )
  {
    this = (MissionListViewManager_o *)Gift__IsItem_38401476(rewardInfo->fields.type, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    dispRewardInfoList = v4->fields.dispRewardInfoList;
    if ( !dispRewardInfoList )
      goto LABEL_19;
    if ( dispRewardInfoList->fields._size > 1 )
      return 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, rewardInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_19110/*"effectId"*/, 0, 0LL);
LABEL_19:
    sub_1BCAA3C(this, rewardInfo);
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
    v16 = BalanceConfig_TypeInfo;
  }
  return v16->static_fields->EquipGetEffectId;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList___Il2CppFullySharedGenericType_(
        MissionListViewManager_o *this,
        const MethodInfo_2F92A2C *method)
{
  __int64 v2; // x2
  const MethodInfo_2F92A2C_RGCTXs *rgctx_data; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 native_size; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  long double v18; // q0
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_TObject__o *v20; // x19
  __int64 v21; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x25
  _BOOL8 v25; // x0
  __int64 v26; // x1
  MethodInfo *_2_UnityEngine_GameObject_GetComponent_TObject; // x1
  void (__fastcall *methodPointer)(); // x0
  void *v29; // x0
  __int64 v30; // x1
  const MethodInfo_2F92A2C_RGCTXs *v31; // x8
  struct System_Collections_Generic_List_T__o *v32; // x4
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x1
  Il2CppMethodPointer v34; // x0
  __int64 v36; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-20h] BYREF
  __int64 v39; // [xsp+38h] [xbp-8h]

  v39 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_3_TObject->_2.native_size;
  memset(&v38, 0, sizeof(v38));
  memset((char *)&v36 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C1C6BC(v18);
  v20 = (System_Collections_Generic_List_TObject__o *)sub_1BCAA2C(
                                                        _0_System_Collections_Generic_List_TObject,
                                                        v15,
                                                        v16,
                                                        v17);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v21);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    v25 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v25 )
    {
      if ( !current )
        sub_1BCAA3C(v25, v26);
      _2_UnityEngine_GameObject_GetComponent_TObject = method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_;
      methodPointer = _2_UnityEngine_GameObject_GetComponent_TObject->methodPointer;
      v37.fields._list = (struct System_Collections_Generic_List_T__o *)((char *)&v36
                                                                       - ((native_size + 15) & 0x1FFFFFFF0LL));
      _2_UnityEngine_GameObject_GetComponent_TObject->invoker_method(
        methodPointer,
        _2_UnityEngine_GameObject_GetComponent_TObject,
        current,
        (void **)&v37.fields._list,
        v37.fields._list);
      memcpy(
        (char *)&v36 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)&v36 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v29 = memcpy(
              (char *)&v36 - ((native_size + 15) & 0x1FFFFFFF0LL),
              (char *)&v36 - ((native_size + 15) & 0x1FFFFFFF0LL),
              native_size);
      if ( !v20 )
        sub_1BCAA3C(v29, v30);
      v31 = method->rgctx_data;
      v32 = (struct System_Collections_Generic_List_T__o *)((char *)&v36 - ((native_size + 15) & 0x1FFFFFFF0LL));
      if ( (v31->_3_TObject->_1.byval_arg.bits & 0x80000000) == 0 )
        v32 = *(struct System_Collections_Generic_List_T__o **)((char *)&v36 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_TObject__Add = v31->_4_System_Collections_Generic_List_TObject__Add;
      v34 = _4_System_Collections_Generic_List_TObject__Add->methodPointer;
      v37.fields._list = v32;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_TObject__o *, System_Collections_Generic_List_Enumerator_object__o *))_4_System_Collections_Generic_List_TObject__Add->invoker_method)(
        v34,
        _4_System_Collections_Generic_List_TObject__Add,
        v20,
        &v37);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return v20;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_2F927DC *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_2F927DC_RGCTXs *rgctx_data; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_object__o *v17; // x19
  __int64 v18; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *Component_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct System_Object_array *items; // x8
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-50h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  memset(&v38, 0, sizeof(v38));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1C1C6BC(v4);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       _0_System_Collections_Generic_List_TObject,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v22 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v22 )
    {
      if ( !current )
        sub_1BCAA3C(v22, v23);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      v31 = (int64_t)Component_object;
      if ( !v17 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v17->fields._items;
      _4_System_Collections_Generic_List_TObject__Add = method->rgctx_data->_4_System_Collections_Generic_List_TObject__Add;
      ++v17->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          Component_object,
          (const MethodInfo_35A1C5C *)_4_System_Collections_Generic_List_TObject__Add->klass->rgctx_data[14].rgctxDataDummy);
      }
      else
      {
        v35 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), v31, v25, v26, v27, v28, v29, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_TObject__o *)v17;
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

  if ( (byte_4B193DE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&targetItemId, method);
    byte_4B193DE = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&targetItemId);
    v4 = BalanceConfig_TypeInfo;
  }
  EventItemNotDispItemGetEffect = v4->static_fields->EventItemNotDispItemGetEffect;
  if ( EventItemNotDispItemGetEffect )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&targetItemId);
      EventItemNotDispItemGetEffect = BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
      if ( !EventItemNotDispItemGetEffect )
        sub_1BCAA3C(v4, *(_QWORD *)&targetItemId);
    }
    max_length = EventItemNotDispItemGetEffect->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1BCAA44(v4, *(_QWORD *)&targetItemId);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  System_Collections_Generic_List_object__o *dispRewardInfoList; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x2
  __int64 v43; // x3
  int32_t v44; // w8
  System_Collections_Generic_Dictionary_int__object__o *v45; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v53; // x2
  unsigned int EffectId; // w0
  __int64 v55; // x1
  ScrTerminalListTop_c *v56; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v58; // x0
  System_String_o *v59; // x19
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  AssetLoader_LoadEndDataHandler_o *v63; // x21
  __int64 v64; // x1
  int v65; // [xsp+Ch] [xbp-34h] BYREF

  while ( 1 )
  {
    v4 = endAct;
    v5 = idx;
    v6 = this;
    if ( (byte_4B193EF & 1) == 0 )
    {
      sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&idx, endAct);
      sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__, v7, v8);
      sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__, v9, v10);
      sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo, v11, v12);
      sub_1BCA7E0(&int_TypeInfo, v13, v14);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v15, v16);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__, v17, v18);
      sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
      sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v21, v22);
      sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__, v23, v24);
      sub_1BCA7E0(&MissionListViewManager___c__DisplayClass89_0_TypeInfo, v25, v26);
      byte_4B193EF = 1;
    }
    v27 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass89_0_TypeInfo, *(_QWORD *)&idx, endAct, method);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( !v27
      || (*(_QWORD *)(v27 + 16) = v6,
          sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)v6, v30, v31, v32, v33, v34, v35),
          *(_QWORD *)(v27 + 32) = v4,
          *(_DWORD *)(v27 + 28) = v5,
          sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v4, v36, v37, v38, v39, v40, v41),
          (dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList) == 0LL) )
    {
LABEL_17:
      sub_1BCAA3C(dispRewardInfoList, v29);
    }
    v44 = *(_DWORD *)(v27 + 28);
    if ( v44 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v27 + 32), 0LL);
      return;
    }
    if ( !v44 )
    {
      v45 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_int__AssetData__TypeInfo,
                                                                      v29,
                                                                      v42,
                                                                      v43);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v45,
        (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v6->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v45;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v6->fields.itemGetAssetDatas,
        (int64_t)v45,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_17;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             dispRewardInfoList,
             *(_DWORD *)(v27 + 28),
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    EffectId = MissionListViewManager__GetItemGetEffectId(v6, (QuestRewardInfo_o *)Item, v53);
    *(_DWORD *)(v27 + 24) = EffectId;
    v29 = EffectId;
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.itemGetAssetDatas;
    if ( !dispRewardInfoList )
      goto LABEL_17;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)dispRewardInfoList,
            v29,
            (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v27 + 32);
    this = v6;
    *(_QWORD *)&idx = (unsigned int)(*(_DWORD *)(v27 + 28) + 1);
  }
  v56 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v55);
    v56 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v56->static_fields->ITEM_GET_ASSET_NAME;
  v65 = *(_DWORD *)(v27 + 24);
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
  v59 = System_String__Format(ITEM_GET_ASSET_NAME, v58, 0LL);
  v63 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v60, v61, v62);
  AssetLoader_LoadEndDataHandler___ctor(
    v63,
    (Il2CppObject *)v27,
    Method_MissionListViewManager___c__DisplayClass89_0__LoadItemGetEffects_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v64);
  AssetManager__loadAssetStorage(v59, v63, 1, 0LL);
}


void __fastcall MissionListViewManager__LoadTreasureGetEffect(
        MissionListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
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
  System_String_o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  AssetLoader_LoadEndDataHandler_o *v33; // x20
  __int64 v34; // x1

  if ( (byte_4B193EC & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, endAct, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__, v8, v9);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass86_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_5966/*"Effect/Talk/"*/, v12, v13);
    byte_4B193EC = 1;
  }
  v14 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass86_0_TypeInfo, endAct, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = endAct;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)endAct, v23, v24, v25, v26, v27, v28);
  v29 = System_String__Concat_62401220(
          (System_String_o *)StringLiteral_5966/*"Effect/Talk/"*/,
          this->fields.useTreasureGetEffectName,
          0LL);
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31, v32);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v14,
    Method_MissionListViewManager___c__DisplayClass86_0__LoadTreasureGetEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v34);
  AssetManager__loadAssetStorage(v29, v33, 1, 0LL);
}


void __fastcall MissionListViewManager__OnChangeAlphaAnim(MissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MissionListViewManager__OnMoveEnd(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B193D6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B193D6 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1BCAA3C(gameObject, v8);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  ServantCostumeEntity_o *v13; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x21
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-28h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_4B193D9 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId, method);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v6, v7);
    this = (MissionListViewManager_o *)sub_1BCA7E0(&Method_MissionListViewManager_CloseItemDetail__, v8, v9);
    byte_4B193D9 = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v13 = resultEntity;
    v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v10,
                                                      v11,
                                                      v12);
    ItemDetailInfoComponent_CallbackFunc___ctor(v14, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v15);
    MissionInfoMaker__OpenCostumeReleaseDetail(v13, v14, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__OpenEquipDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  Il2CppObject *v20; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v21; // x21
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B193DA & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_MissionListViewManager_CloseItemDetail__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B193DA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v16);
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v20 = entity;
    v21 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v17,
                                                      v18,
                                                      v19);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v22);
    MissionInfoMaker__OpenEquipDetail((EquipEntity_o *)v20, v21, v23);
  }
}


void __fastcall MissionListViewManager__RequestInto(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_TObject__o *ObjectList_object; // x0
  __int64 v15; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v17; // x20
  int v18; // w24
  int32_t v19; // w21
  Il2CppObject *Item; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x4

  if ( (byte_4B193D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v8, v9);
    sub_1BCA7E0(&Method_MissionListViewManager_OnMoveEnd__, v10, v11);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v12, v13);
    byte_4B193D5 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_2F927DC *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_13:
    sub_1BCAA3C(ObjectList_object, v15);
  size = ObjectList_object->fields._size;
  v17 = (System_Collections_Generic_List_object__o *)ObjectList_object;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v18 = 0;
  v19 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v17,
             v19,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v18;
      MissionListViewObject__Init((MissionListViewObject_o *)Item, 4, v24, this->fields.listInDelay, 1, v25);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v19;
  }
  while ( v19 < v17->fields._size );
  if ( !v18 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *ObjectList_object; // x0
  __int64 v24; // x1
  int32_t size; // w8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *current; // x21
  System_Action_o *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x4
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B193D4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v17, v18);
    sub_1BCA7E0(&Method_MissionListViewManager_OnMoveEnd__, v19, v20);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v21, v22);
    byte_4B193D4 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ObjectList_object = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetObjectList_object_(
                                                                     this,
                                                                     (const MethodInfo_2F927DC *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_1BCAA3C(0LL, v24);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      ObjectList_object,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v34.fields._current;
      v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v31, v32);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v30, delay, 1, v33);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_44915524(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_44915164(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetMode_44915164(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t v12; // w1

  if ( (byte_4B193D3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&StringLiteral_11448/*"RequestInto"*/, v5, v6);
    byte_4B193D3 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
      {
        sub_1BCAA3C(gameObject, v10);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11448/*"RequestInto"*/,
      0.0,
      0LL);
  }
  else if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 3 )
      v12 = 3;
    else
      v12 = 2;
    MissionListViewManager__RequestListObject(this, v12, 0.0, v7);
  }
}


void __fastcall MissionListViewManager__SetMode_44915468(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_44915164(this, mode, v11);
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
  if ( (byte_4B193D7 & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_1BCA7E0(&MissionListViewObject_TypeInfo, obj, item);
    byte_4B193D7 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MissionListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v6->fields.initMode == 3 )
    v8 = 3;
  else
    v8 = 2;
  MissionListViewObject__Init((MissionListViewObject_o *)obj, v8, 0LL, 0.0, 1, v4);
}


void __fastcall MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AvalonSceneManager_c *v4; // x0
  float DEFAULT_FADE_TIME; // s0

  if ( (byte_4B193E9 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    byte_4B193E9 = 1;
  }
  if ( this->fields.isTreasureEffect && !this->fields.isEffect )
  {
    this->fields.FADEOUT_KIND = 2;
    DEFAULT_FADE_TIME = 1.0;
  }
  else
  {
    this->fields.FADEOUT_KIND = 1;
    v4 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      v4 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  MissionListViewManager___c_c *v17; // x8
  CommonUI_o *v18; // x22
  System_Action_o *_9__92_0; // x23
  Il2CppObject *v20; // x24
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B193F2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, listViewItem, challengeBoardItemList);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__, v9, v10);
    sub_1BCA7E0(&MissionListViewManager___c_TypeInfo, v11, v12);
    byte_4B193F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = MissionListViewManager___c_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo, v14);
    v17 = MissionListViewManager___c_TypeInfo;
  }
  _9__92_0 = v17->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v14);
      v17 = MissionListViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__92_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
    System_Action___ctor(
      _9__92_0,
      v20,
      Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__92_0__,
      0LL);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = _9__92_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__92_0,
      (int64_t)_9__92_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v18 )
    sub_1BCAA3C(Instance, v14);
  CommonUI__OpenMissionNaviTransitionConfirmDialog(v18, listViewItem, this, 1, challengeBoardItemList, _9__92_0, 0LL);
}


void __fastcall MissionListViewManager__SetupMissionCondTransitionDialog(
        MissionListViewManager_o *this,
        System_String_o *moveTo,
        System_Action_o *decideAction,
        System_String_o *confirmDialogMessage,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  System_String_o *v34; // x22
  __int64 v35; // x1
  System_String_o *v36; // x0
  System_String_o *v37; // x20
  System_String_o *v38; // x23
  Il2CppObject *Instance; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  CommonConfirmDialog_ClickDelegate_o *v43; // x25

  v5 = confirmDialogMessage;
  if ( (byte_4B193F1 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, moveTo, decideAction);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__, v12, v13);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass91_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_8783/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_8787/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_8785/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_8786/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, v22, v23);
    byte_4B193F1 = 1;
  }
  v24 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass91_0_TypeInfo, moveTo, decideAction, confirmDialogMessage);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_14;
  *(_QWORD *)(v24 + 16) = decideAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)decideAction, v27, v28, v29, v30, v31, v32);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8787/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( System_String__IsNullOrEmpty(v5, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8785/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v5 = System_String__Format(v36, (Il2CppObject *)moveTo, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8783/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8786/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v40, v41, v42);
  CommonConfirmDialog_ClickDelegate___ctor(
    v43,
    (Il2CppObject *)v24,
    Method_MissionListViewManager___c__DisplayClass91_0__SetupMissionCondTransitionDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_14:
    sub_1BCAA3C(v25, v26);
  CommonUI__OpenConfirmDialog_30766616((CommonUI_o *)Instance, v34, v5, v38, v37, 1, v43, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetupTreasureGetEffect(
        MissionListViewManager_o *this,
        int32_t itemIconId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  AssetData_o *treasureGetAssetData; // x0
  __int64 v14; // x1
  Il2CppObject *Object_object__49237568; // x21
  UnityEngine_GameObject_o *v16; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardBoxAction_o **p_questRewardBoxAction; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *useTreasureGetEffectName; // x22
  ScrTerminalListTop_c *v26; // x0
  ScrTerminalListTop_c *v27; // x0
  System_String_o *v28; // x20
  int32_t v29; // w1

  if ( (byte_4B193ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&itemIconId, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v11, v12);
    byte_4B193ED = 1;
  }
  treasureGetAssetData = this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_21;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              treasureGetAssetData,
                              this->fields.useTreasureGetEffectName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  treasureGetAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                          Object_object__49237568,
                                          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  v16 = (UnityEngine_GameObject_o *)treasureGetAssetData;
  treasureGetAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)treasureGetAssetData,
                                          0LL);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)treasureGetAssetData, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v16, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v16,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  p_questRewardBoxAction = &this->fields.questRewardBoxAction;
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRewardBoxAction,
    (int64_t)Component_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !this->fields.isTreasureEffect )
    goto LABEL_15;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v26 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, *(_QWORD *)&itemIconId);
    v26 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v26->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    v27 = ScrTerminalListTop_TypeInfo;
    v28 = this->fields.useTreasureGetEffectName;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, *(_QWORD *)&itemIconId);
      v27 = ScrTerminalListTop_TypeInfo;
    }
    treasureGetAssetData = (AssetData_o *)System_String__op_Inequality(
                                            v28,
                                            v27->static_fields->TREASURE_GET_NORMAL,
                                            0LL);
  }
  else
  {
LABEL_15:
    treasureGetAssetData = (AssetData_o *)(&dword_0 + 1);
  }
  if ( !*p_questRewardBoxAction )
LABEL_21:
    sub_1BCAA3C(treasureGetAssetData, *(_QWORD *)&itemIconId);
  if ( itemIconId == 3 )
    v29 = 2;
  else
    v29 = itemIconId == 2;
  QuestRewardBoxAction__Setup(*p_questRewardBoxAction, v29, (unsigned __int8)treasureGetAssetData & 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__ShowRewardDetailInfo(
        MissionListViewManager_o *this,
        MissionListViewItem_o *selectItem,
        bool ignoreSubGiftEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  GiftMaster_o *Master_object; // x0
  __int64 v52; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v55; // x8
  __int64 v56; // x2
  __int64 v57; // x3
  GiftEntity_array *v58; // x21
  __int64 v59; // x20
  const MethodInfo *v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Func_object__bool__o *v70; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  il2cpp_array_size_t max_length; // w9
  int v73; // w8
  GiftEntity_o *v74; // x20
  int32_t type; // w0
  Il2CppObject *Entity; // x20
  Il2CppObject *v77; // x21
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v81; // x22
  Il2CppObject *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v85; // x22
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v89; // x23
  __int64 v90; // x1
  GiftMaster_o *v91; // x22
  bool IsServantEquip; // w23
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  Il2CppObject *v96; // x21
  ServantStatusDialog_EndDelegate_o *v97; // x22
  __int64 v98; // x1
  Il2CppObject *v99; // x20
  Il2CppObject *v100; // x21
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  ServantStatusDialog_EndDelegate_o *v104; // x22
  const MethodInfo *v105; // x2
  struct System_String_o *MasterName_k__BackingField; // x20
  __int64 v107; // x23
  int32_t v108; // w20
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  ServantStatusDialog_EndDelegate_o *v112; // x22
  const MethodInfo *v113; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4B193D8 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, selectItem, ignoreSubGiftEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommandCodeMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v25, v26);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GiftEntity___, v27, v28);
    sub_1BCA7E0(&System_Func_GiftEntity__bool__TypeInfo, v29, v30);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_MissionListViewManager_CloseCommandCodeDetail__, v33, v34);
    sub_1BCA7E0(&Method_MissionListViewManager_CloseItemDetail__, v35, v36);
    sub_1BCA7E0(&Method_MissionListViewManager_CloseServantStatusDetail__, v37, v38);
    sub_1BCA7E0(&Method_MissionListViewManager_ShowRewardDetailInfo__, v39, v40);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v43, v44);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__, v45, v46);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass66_0_TypeInfo, v47, v48);
    byte_4B193D8 = 1;
  }
  v49 = Method_MissionListViewManager_ShowRewardDetailInfo__;
  if ( (*((_BYTE *)Method_MissionListViewManager_ShowRewardDetailInfo__ + 83) & 2) != 0 )
    v49 = (_QWORD *)sub_1BCA7F8(Method_MissionListViewManager_ShowRewardDetailInfo__);
  v50 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v49, v49[4]);
  OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0LL);
  if ( !selectItem )
    goto LABEL_52;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_52;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v85 = (CommonUI_o *)Instance;
    v89 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v86,
                                                      v87,
                                                      v88);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v89,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v85 )
      goto LABEL_52;
    CommonUI__OpenItemDetailDialog_30842472(v85, nameTxt, rewardExtraDetailTxt, v89, 0LL);
  }
  else if ( rewardType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
    Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
    v55 = selectItem->fields.eventMissionEnt;
    if ( !v55 || !Master_object )
      goto LABEL_52;
    Master_object = (GiftMaster_o *)GiftMaster__GetGiftListById(Master_object, v55->fields.giftId, 0LL);
    v58 = (GiftEntity_array *)Master_object;
    if ( ignoreSubGiftEntity )
    {
      v59 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass66_0_TypeInfo, v52, v56, v57);
      System_Object___ctor((Il2CppObject *)v59, 0LL);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v60);
      Master_object = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity(v58, v60);
      if ( !v59 )
        goto LABEL_52;
      *(_QWORD *)(v59 + 16) = Master_object;
      sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)Master_object, v61, v62, v63, v64, v65, v66);
      v70 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GiftEntity__bool__TypeInfo, v67, v68, v69);
      System_Func_object__bool____ctor(
        v70,
        (Il2CppObject *)v59,
        Method_MissionListViewManager___c__DisplayClass66_0__ShowRewardDetailInfo_b__0__,
        0LL);
      v71 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v58,
              (System_Func_TSource__bool__o *)v70,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      Master_object = (GiftMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                        v71,
                                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v58 = (GiftEntity_array *)Master_object;
    }
    if ( !v58 )
      goto LABEL_52;
    max_length = v58->max_length;
    v73 = this->fields.alphaAnimCnt % (int)max_length;
    if ( v73 >= max_length )
      sub_1BCAA44(Master_object, v52);
    v74 = v58->m_Items[v73];
    if ( !v74 )
      goto LABEL_52;
    type = v74->fields.type;
    if ( type == 2 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   v74->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v81 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v78,
                                                          v79,
                                                          v80);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v81,
          (Il2CppObject *)this,
          (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
          0LL);
        if ( v77 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v77, (ItemEntity_o *)Entity, v81, 50, 0LL);
          return;
        }
      }
LABEL_52:
      sub_1BCAA3C(Master_object, v52);
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v90);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_52;
      Master_object = (GiftMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v74->fields.objectId,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_52;
      v91 = Master_object;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_object, 0LL);
      v96 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v97 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v93, v94, v95);
        ServantStatusDialog_EndDelegate___ctor(
          v97,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v96 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30780220((CommonUI_o *)v96, 7, v74, v97, 0LL);
      }
      else
      {
        v107 = *(_QWORD *)&v91->fields._MasterKind_k__BackingField;
        MasterName_k__BackingField = v91->fields._MasterName_k__BackingField;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
        *(_QWORD *)&v114.fields.currentCryptoKey = v107;
        *(_QWORD *)&v114.fields.fakeValue = MasterName_k__BackingField;
        v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v114, 0LL);
        v112 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_EndDelegate_TypeInfo,
                                                      v109,
                                                      v110,
                                                      v111);
        ServantStatusDialog_EndDelegate___ctor(
          v112,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v96 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30779656((CommonUI_o *)v96, 7, v108, v112, 0LL);
      }
    }
    else if ( Gift__IsCommandCode(v74->fields.type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v98);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_52;
      v99 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              v74->fields.objectId,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v100 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v104 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                    ServantStatusDialog_EndDelegate_TypeInfo,
                                                    v101,
                                                    v102,
                                                    v103);
      ServantStatusDialog_EndDelegate___ctor(
        v104,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseCommandCodeDetail__,
        0LL);
      if ( !v100 )
        goto LABEL_52;
      CommonUI__OpenServantEquipStatusDialog_30782812(
        (CommonUI_o *)v100,
        25,
        (CommandCodeEntity_o *)v99,
        0,
        v104,
        0LL,
        0LL);
    }
    else if ( Gift__IsCostumeRelease(v74->fields.type, 0LL) )
    {
      MissionListViewManager__OpenCostumeReleaseDetail(this, v74->fields.objectId, v105);
    }
    else if ( Gift__IsEquip(v74->fields.type, 0LL) )
    {
      MissionListViewManager__OpenEquipDetail(this, v74->fields.objectId, v113);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartEventMissionClearItemAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x1
  Il2CppObject *Instance; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  AvalonSceneManager_c *v42; // x8
  CommonUI_o *v43; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21

  if ( (byte_4B193DF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, gifts, *(_QWORD *)&idx);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__, v12, v13);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass73_0_TypeInfo, v14, v15);
    byte_4B193DF = 1;
  }
  v16 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass73_0_TypeInfo, gifts, *(_QWORD *)&idx, afterDetail);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = gifts;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)gifts, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v16 + 32) = afterDetail;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)afterDetail, v31, v32, v33, v34, v35, v36);
  MissionListViewManager__SetTresureEffect(this, v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42 = AvalonSceneManager_TypeInfo;
  v43 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v39);
    v42 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v42->static_fields->DEFAULT_FADE_TIME;
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v16,
    Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__0__,
    0LL);
  if ( !v43 )
LABEL_9:
    sub_1BCAA3C(touchBlockObj, v18);
  CommonUI__maskFadeout(v43, 1, DEFAULT_FADE_TIME, v45, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x20
  void *Instance; // x0
  GiftEntity_array *v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Action_o **v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x2
  __int64 v71; // x2
  __int64 v72; // x3
  EventRewardRootComponent_o *v73; // x21
  System_Action_o *v74; // x22
  __int64 methodPtr_low; // x9
  __int64 v76; // x8
  __int64 v77; // x9
  __int64 v78; // x8
  int32_t v79; // w21
  __int64 v80; // x1
  __int64 v81; // x8
  __int64 v82; // x9
  __int64 v83; // x8
  const MethodInfo *v84; // x4
  int v85; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v89; // x1
  const MethodInfo *v90; // x3
  int32_t v91; // w23
  UnityEngine_Object_o *v92; // x22
  int64_t userSvtId; // x22
  bool isNew; // w23
  bool Eff; // w0
  __int64 v96; // x1
  __int64 v97; // x8
  __int64 v98; // x9
  __int64 v99; // x8
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v101; // x23
  Il2CppClass *v102; // x24
  __int64 v103; // x1
  const MethodInfo *v104; // x3
  int32_t v105; // w23
  const MethodInfo *v106; // x3
  __int64 v107; // x8
  __int64 v108; // x9
  __int64 v109; // x8
  const MethodInfo *v110; // x5
  __int64 v111; // x1
  __int64 v112; // x8
  __int64 v113; // x9
  __int64 v114; // x8
  const MethodInfo *v115; // x5
  GiftEntity_array *v116; // x2
  __int64 v117; // x3
  GiftEntity_o *v118; // x8
  __int64 v119; // x1
  __int64 v120; // x8
  __int64 v121; // x9
  __int64 v122; // x8
  Il2CppObject *v123; // x0
  Il2CppObject *v124; // x21
  __int64 v125; // x2
  __int64 v126; // x3
  const MethodInfo *v127; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  System_Action_o *v129; // x21
  const MethodInfo *v130; // x3
  MissionListViewManager___c__DisplayClass74_0_o *v131; // x0
  const MethodInfo *v132; // x1
  const MethodInfo *v133; // [xsp+0h] [xbp-70h]
  Il2CppObject *v134; // [xsp+8h] [xbp-68h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+10h] [xbp-60h] BYREF
  GetCommandCodes_o *v136; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v137; // [xsp+20h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_4B193E0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, gifts, *(_QWORD *)&idx);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommandCodeMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EquipMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v25, v26);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v29, v30);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v39, v40);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__, v41, v42);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__, v43, v44);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass74_0_TypeInfo, v45, v46);
    byte_4B193E0 = 1;
  }
  entity = 0LL;
  v137 = 0LL;
  data = 0LL;
  resultEntity = 0LL;
  v136 = 0LL;
  v134 = 0LL;
  v47 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass74_0_TypeInfo, gifts, *(_QWORD *)&idx, afterDetail);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !v47 )
    goto LABEL_106;
  *(_QWORD *)(v47 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 16), (int64_t)this, v50, v51, v52, v53, v54, v55);
  *(_QWORD *)(v47 + 24) = afterDetail;
  v56 = (System_Action_o **)(v47 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 24), (int64_t)afterDetail, v57, v58, v59, v60, v61, v62);
  *(_QWORD *)(v47 + 32) = gifts;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 32), (int64_t)gifts, v63, v64, v65, v66, v67, v68);
  v49 = *(GiftEntity_array **)(v47 + 32);
  *(_DWORD *)(v47 + 40) = idx;
  if ( !v49 )
    goto LABEL_106;
  if ( (signed int)v49->max_length <= idx )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 72, 0LL) && this->fields.isEffect )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      v73 = (EventRewardRootComponent_o *)*((_QWORD *)Instance + 4);
      v74 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v49, v71, v72);
      System_Action___ctor(
        v74,
        (Il2CppObject *)v47,
        Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__0__,
        0LL);
      if ( !v73 )
        goto LABEL_106;
      methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v73->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardRootComponent_c *)v73->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1BCACFC(v73);
        MissionListViewManager___c__DisplayClass74_0___ctor(v131, v132);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(v73, v74, 0LL);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v56, v70);
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
    MissionListViewManager__CreateDisplayRewardList(this, v49, v69);
LABEL_22:
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v49);
  v76 = *(_QWORD *)(v47 + 32);
  if ( !v76 )
    goto LABEL_106;
  v77 = *(int *)(v47 + 40);
  if ( (unsigned int)v77 >= *(_DWORD *)(v76 + 24) )
    goto LABEL_107;
  v78 = *(_QWORD *)(v76 + 8 * v77 + 32);
  if ( !v78 )
    goto LABEL_106;
  v79 = *(_DWORD *)(v78 + 20);
  if ( Gift__IsServant(v79, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v80);
    Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
    v81 = *(_QWORD *)(v47 + 32);
    if ( !v81 )
      goto LABEL_106;
    v82 = *(int *)(v47 + 40);
    if ( (unsigned int)v82 < *(_DWORD *)(v81 + 24) )
    {
      v83 = *(_QWORD *)(v81 + 8 * v82 + 32);
      if ( !v83 || !Instance )
        goto LABEL_106;
      Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &entity,
                           *(_DWORD *)(v83 + 24),
                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_106;
        Instance = (void *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_106;
        v85 = (int)Instance;
        Instance = (void *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
        if ( ((v85 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_106;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49);
          *(_QWORD *)&v140.fields.currentCryptoKey = klass;
          *(_QWORD *)&v140.fields.fakeValue = monitor;
          v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v140, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v89);
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v91, v90) )
          {
            Instance = entity;
            if ( !entity )
              goto LABEL_106;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_106;
              v92 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 170);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
              if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
              {
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_106;
                Instance = (void *)*((_QWORD *)Instance + 170);
                if ( !Instance )
                  goto LABEL_106;
                MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)Instance, 0LL);
              }
            }
            this->fields.isEffect = 1;
            Instance = data;
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
                v79,
                *(GiftEntity_array **)(v47 + 32),
                *(_DWORD *)(v47 + 40),
                *(System_Action_o **)(v47 + 24),
                v133);
              return;
            }
LABEL_106:
            sub_1BCAA3C(Instance, v49);
          }
        }
      }
      goto LABEL_105;
    }
LABEL_107:
    sub_1BCAA44(Instance, v49);
  }
  if ( Gift__IsCommandCode(v79, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v96);
    Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v97 = *(_QWORD *)(v47 + 32);
    if ( !v97 )
      goto LABEL_106;
    v98 = *(int *)(v47 + 40);
    if ( (unsigned int)v98 < *(_DWORD *)(v97 + 24) )
    {
      v99 = *(_QWORD *)(v97 + 8 * v98 + 32);
      if ( !v99 || !Instance )
        goto LABEL_106;
      Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &v137,
                           *(_DWORD *)(v99 + 24),
                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v137 )
          goto LABEL_106;
        getCommandCodeList = this->fields.getCommandCodeList;
        v102 = v137[1].klass;
        v101 = v137[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49);
        *(_QWORD *)&v141.fields.currentCryptoKey = v102;
        *(_QWORD *)&v141.fields.fakeValue = v101;
        v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v141, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v103);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v136, v105, v104) )
        {
          this->fields.isEffect = 1;
          Instance = v136;
          if ( v136 )
          {
            userSvtId = v136->fields.userCommandCodeId;
            isNew = v136->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v136, 0LL);
            goto LABEL_69;
          }
          goto LABEL_106;
        }
      }
      goto LABEL_105;
    }
    goto LABEL_107;
  }
  Instance = (void *)Gift__IsCostumeRelease(v79, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v107 = *(_QWORD *)(v47 + 32);
    if ( !v107 )
      goto LABEL_106;
    v108 = *(int *)(v47 + 40);
    if ( (unsigned int)v108 >= *(_DWORD *)(v107 + 24) )
      goto LABEL_107;
    v109 = *(_QWORD *)(v107 + 8 * v108 + 32);
    if ( !v109 )
      goto LABEL_106;
    Instance = (void *)MissionListViewManager__TryGetServantCostumeEntity(
                         (MissionListViewManager_o *)Instance,
                         &resultEntity,
                         *(_DWORD *)(v109 + 24),
                         v106);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      this->fields.isEffect = 1;
      if ( !resultEntity )
        goto LABEL_106;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        this,
        resultEntity->fields.name,
        *(GiftEntity_array **)(v47 + 32),
        *(_DWORD *)(v47 + 40),
        *(System_Action_o **)(v47 + 24),
        v110);
      return;
    }
LABEL_105:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v47 + 32),
      *(_DWORD *)(v47 + 40) + 1,
      *(System_Action_o **)(v47 + 24),
      v84);
    return;
  }
  if ( !Gift__IsEquip(v79, 0LL) )
  {
    if ( Gift__IsItem(v79, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v119);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      v120 = *(_QWORD *)(v47 + 32);
      if ( !v120 )
        goto LABEL_106;
      v121 = *(int *)(v47 + 40);
      if ( (unsigned int)v121 < *(_DWORD *)(v120 + 24) )
      {
        v122 = *(_QWORD *)(v120 + 8 * v121 + 32);
        if ( !v122 || !Instance )
          goto LABEL_106;
        v123 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 *(_DWORD *)(v122 + 24),
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v123 )
        {
          v124 = v123;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_106;
          Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v124[1].klass, 0LL);
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
                (int32_t)v124[1].klass,
                *(GiftEntity_array **)(v47 + 32),
                *(_DWORD *)(v47 + 40),
                *(System_Action_o **)(v47 + 24),
                v127);
              return;
            }
          }
          else if ( !dispRewardInfoList )
          {
            goto LABEL_106;
          }
          if ( dispRewardInfoList->fields._size >= 1 )
          {
            v129 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v49, v125, v126);
            System_Action___ctor(
              v129,
              (Il2CppObject *)v47,
              Method_MissionListViewManager___c__DisplayClass74_0__StartItemGetEffectAction_b__1__,
              0LL);
            MissionListViewManager__LoadItemGetEffects(this, 0, v129, v130);
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v111);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EquipMaster___);
  v112 = *(_QWORD *)(v47 + 32);
  if ( !v112 )
    goto LABEL_106;
  v113 = *(int *)(v47 + 40);
  if ( (unsigned int)v113 >= *(_DWORD *)(v112 + 24) )
    goto LABEL_107;
  v114 = *(_QWORD *)(v112 + 8 * v113 + 32);
  if ( !v114 || !Instance )
    goto LABEL_106;
  Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       &v134,
                       *(_DWORD *)(v114 + 24),
                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_105;
  this->fields.isEffect = 1;
  v116 = *(GiftEntity_array **)(v47 + 32);
  if ( !v116 )
    goto LABEL_106;
  v117 = *(int *)(v47 + 40);
  if ( (unsigned int)v117 >= v116->max_length )
    goto LABEL_107;
  v118 = v116->m_Items[v117];
  if ( !v118 )
    goto LABEL_106;
  MissionListViewManager__StartRewardEquipGetEffect(this, v118->fields.objectId, v116, v117, *v56, v115);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        MissionListViewManager_o *this,
        System_String_o *name,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  UnityEngine_GameObject_o *touchBlockObj; // x0
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
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v47; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x22

  if ( (byte_4B193E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, name, gifts);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(
      &Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__,
      v13,
      v14);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass77_0_TypeInfo, v15, v16);
    byte_4B193E3 = 1;
  }
  v17 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass77_0_TypeInfo, name, gifts, *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_7;
  *(_QWORD *)(v17 + 16) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)name, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 32) = gifts;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)gifts, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v17 + 48) = afterDetail;
  *(_DWORD *)(v17 + 40) = idx;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)afterDetail, v38, v39, v40, v41, v42, v43);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v47 = (CommonUI_o *)Instance,
        v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50),
        System_Action___ctor(
          v51,
          (Il2CppObject *)v17,
          Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0LL),
        !v47) )
  {
LABEL_7:
    sub_1BCAA3C(touchBlockObj, v19);
  }
  CommonUI__maskFadeout(v47, FADEOUT_KIND, FADEOUT_TIME, v51, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  UnityEngine_GameObject_o *touchBlockObj; // x0
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
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  QuestRewardInfo_o *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  _DWORD *v50; // x8
  __int64 v51; // x9
  __int64 v52; // x10
  __int64 v53; // x9
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v57; // x19
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x22

  if ( (byte_4B193E2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&equipId, gifts);
    sub_1BCA7E0(&QuestRewardInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__, v15, v16);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass76_0_TypeInfo, v17, v18);
    byte_4B193E2 = 1;
  }
  v19 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass76_0_TypeInfo, *(_QWORD *)&equipId, gifts, *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_11;
  *(_QWORD *)(v19 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 32) = gifts;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)gifts, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v19 + 48) = afterDetail;
  *(_DWORD *)(v19 + 40) = idx;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 48), (int64_t)afterDetail, v34, v35, v36, v37, v38, v39);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v43 = (QuestRewardInfo_o *)sub_1BCAA2C(QuestRewardInfo_TypeInfo, v40, v41, v42);
  QuestRewardInfo___ctor(v43, 0LL);
  *(_QWORD *)(v19 + 16) = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = *(_DWORD **)(v19 + 16);
  if ( !v50 )
    goto LABEL_11;
  v50[4] = 5;
  v50[5] = equipId;
  v51 = *(_QWORD *)(v19 + 32);
  if ( !v51 )
    goto LABEL_11;
  v52 = *(int *)(v19 + 40);
  if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 24) )
    sub_1BCAA44(touchBlockObj, v21);
  v53 = *(_QWORD *)(v51 + 8 * v52 + 32);
  if ( !v53
    || (v50[6] = *(_DWORD *)(v53 + 28),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v57 = (CommonUI_o *)Instance,
        v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60),
        System_Action___ctor(
          v61,
          (Il2CppObject *)v19,
          Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__0__,
          0LL),
        !v57) )
  {
LABEL_11:
    sub_1BCAA3C(touchBlockObj, v21);
  }
  CommonUI__maskFadeout(v57, FADEOUT_KIND, FADEOUT_TIME, v61, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x22
  UnityEngine_GameObject_o *touchBlockObj; // x0
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
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v47; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x21

  if ( (byte_4B193E5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userSvtID, isNew);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__, v19, v20);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass79_0_TypeInfo, v21, v22);
    byte_4B193E5 = 1;
  }
  v23 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass79_0_TypeInfo, userSvtID, isNew, isDoEffect);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_7;
  *(_DWORD *)(v23 + 16) = giftType;
  *(_QWORD *)(v23 + 24) = userSvtID;
  *(_QWORD *)(v23 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_BYTE *)(v23 + 40) = isDoEffect;
  *(_BYTE *)(v23 + 41) = isNew;
  *(_QWORD *)(v23 + 48) = gifts;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 48), (int64_t)gifts, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v23 + 64) = afterDetail;
  *(_DWORD *)(v23 + 56) = idx;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 64), (int64_t)afterDetail, v38, v39, v40, v41, v42, v43);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v47 = (CommonUI_o *)Instance,
        v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50),
        System_Action___ctor(
          v51,
          (Il2CppObject *)v23,
          Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__0__,
          0LL),
        !v47) )
  {
LABEL_7:
    sub_1BCAA3C(touchBlockObj, v25);
  }
  CommonUI__maskFadeout(v47, FADEOUT_KIND, FADEOUT_TIME, v51, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x20
  CommonUI_o *Instance; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 *v34; // x21
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
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  QuestRewardInfo_o *v50; // x24
  __int64 *v51; // x22
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  _DWORD *v58; // x8
  __int64 v59; // x9
  __int64 v60; // x10
  __int64 v61; // x9
  unsigned int ItemEffectId; // w0
  const MethodInfo *v63; // x4
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v67; // x8
  __int64 v68; // x9
  int v69; // w10
  __int64 v70; // x13
  int v71; // w11
  int v72; // w12
  __int64 v73; // x14
  __int64 v74; // x15
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  Il2CppObject *v78; // x19
  AvalonSceneManager_c *v79; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v81; // x21

  if ( (byte_4B193E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&itemId, gifts);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v15, v16);
    sub_1BCA7E0(&QuestRewardInfo_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__, v21, v22);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass78_0_TypeInfo, v23, v24);
    byte_4B193E4 = 1;
  }
  v25 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass78_0_TypeInfo, *(_QWORD *)&itemId, gifts, *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_33;
  *(_QWORD *)(v25 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 40) = gifts;
  v34 = (__int64 *)(v25 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 40), (int64_t)gifts, v35, v36, v37, v38, v39, v40);
  *(_DWORD *)(v25 + 48) = idx;
  *(_QWORD *)(v25 + 56) = afterDetail;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 56), (int64_t)afterDetail, v41, v42, v43, v44, v45, v46);
  v50 = (QuestRewardInfo_o *)sub_1BCAA2C(QuestRewardInfo_TypeInfo, v47, v48, v49);
  QuestRewardInfo___ctor(v50, 0LL);
  *(_QWORD *)(v25 + 32) = v50;
  v51 = (__int64 *)(v25 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)v50, v52, v53, v54, v55, v56, v57);
  v58 = *(_DWORD **)(v25 + 32);
  if ( !v58 )
    goto LABEL_33;
  v58[4] = 2;
  v58[5] = itemId;
  v59 = *(_QWORD *)(v25 + 40);
  if ( !v59 )
    goto LABEL_33;
  v60 = *(int *)(v25 + 48);
  if ( (unsigned int)v60 >= *(_DWORD *)(v59 + 24) )
    goto LABEL_34;
  v61 = *(_QWORD *)(v59 + 8 * v60 + 32);
  if ( !v61 )
    goto LABEL_33;
  v58[6] = *(_DWORD *)(v61 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v25 + 32), 0LL);
  *(_DWORD *)(v25 + 16) = ItemEffectId;
  v27 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v27,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v25 + 40),
      *(_DWORD *)(v25 + 48) + 1,
      *(System_Action_o **)(v25 + 56),
      v63);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  v27 = *(unsigned int *)(v25 + 16);
  v64 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v65 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v64 )
    goto LABEL_33;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v64 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      v27,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v64 + 4 * m_CancellationTokenSource_low + 32) = v27;
  }
  v67 = *v51;
  if ( !*v51 )
    goto LABEL_33;
  *(_DWORD *)(v67 + 24) = 0;
  v68 = *v34;
  if ( !*v34 )
    goto LABEL_33;
  v69 = *(_DWORD *)(v68 + 24);
  if ( v69 >= 1 )
  {
    v70 = *(int *)(v25 + 48);
    v71 = 0;
    v72 = 0;
    v73 = v68 + 8 * v70 + 32;
    while ( v69 != v71 && (unsigned int)v70 < v69 )
    {
      if ( !*(_QWORD *)v73 )
        goto LABEL_33;
      v74 = *(_QWORD *)(v68 + 8LL * v71 + 32);
      if ( !v74 )
        goto LABEL_33;
      if ( *(_DWORD *)(*(_QWORD *)v73 + 24LL) == *(_DWORD *)(v74 + 24) )
      {
        v72 += *(_DWORD *)(v74 + 28);
        *(_DWORD *)(v67 + 24) = v72;
      }
      if ( v69 == ++v71 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1BCAA44(Instance, v27);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v78 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v79 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v75);
    v79 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v79->static_fields->DEFAULT_FADE_TIME;
  v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v75, v76, v77);
  System_Action___ctor(
    v81,
    (Il2CppObject *)v25,
    Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v78 )
LABEL_33:
    sub_1BCAA3C(Instance, v27);
  CommonUI__maskFadeout((CommonUI_o *)v78, 1, DEFAULT_FADE_TIME, v81, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x20
  System_Collections_Generic_List_object__o *dispRewardInfoList; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v59; // x2
  unsigned int EffectId; // w0
  const MethodInfo *v61; // x4
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  ScrTerminalListTop_c *v65; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v67; // x0
  System_String_o *v68; // x21
  __int64 v69; // x1
  Il2CppObject *Object_object__49237568; // x21
  UnityEngine_GameObject_o *v71; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardItemAction_o **v73; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  QuestRewardItemAction_o *v80; // x22
  ScrTerminalListTop_c *v81; // x0
  System_String_o *useTreasureGetEffectName; // x22
  QuestRewardItemAction_o *v83; // x21
  System_String_o **p_overWriteTitleSpriteName; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v88; // x19
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Action_o *v92; // x22
  int v93; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B193EB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, gifts, *(_QWORD *)&idx);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31, v32);
    sub_1BCA7E0(
      &Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
      v33,
      v34);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass85_0_TypeInfo, v35, v36);
    byte_4B193EB = 1;
  }
  v37 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass85_0_TypeInfo, gifts, *(_QWORD *)&idx, afterDetail);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_36;
  *(_QWORD *)(v37 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)this, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v37 + 40) = gifts;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 40), (int64_t)gifts, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v37 + 56) = afterDetail;
  *(_DWORD *)(v37 + 48) = idx;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 56), (int64_t)afterDetail, v52, v53, v54, v55, v56, v57);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Item = System_Collections_Generic_List_object___get_Item(
           dispRewardInfoList,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
  EffectId = MissionListViewManager__GetItemGetEffectId(this, (QuestRewardInfo_o *)Item, v59);
  *(_DWORD *)(v37 + 16) = EffectId;
  v39 = EffectId;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)dispRewardInfoList,
         v39,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v37 + 40),
      *(_DWORD *)(v37 + 48) + 1,
      *(System_Action_o **)(v37 + 56),
      v61);
    return;
  }
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v39 = *(unsigned int *)(v37 + 16);
  items = dispRewardInfoList->fields._items;
  v63 = Method_System_Collections_Generic_List_int__Add__;
  ++dispRewardInfoList->fields._version;
  if ( !items )
    goto LABEL_36;
  size = dispRewardInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)dispRewardInfoList,
      v39,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    dispRewardInfoList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = v39;
  }
  v65 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v39);
    v65 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v65->static_fields->ITEM_GET_EFFECT_NAME;
  v93 = *(_DWORD *)(v37 + 16);
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__Format(
                                                                      ITEM_GET_EFFECT_NAME,
                                                                      v67,
                                                                      0LL);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_36;
  v68 = (System_String_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemGetAssetDatas,
                                                                      *(_DWORD *)(v37 + 16),
                                                                      (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)dispRewardInfoList,
                              v68,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__49237568,
                                                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v71 = (UnityEngine_GameObject_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)dispRewardInfoList,
                                                                      0LL);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)dispRewardInfoList, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v71, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v71,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v37 + 24) = Component_object;
  v73 = (QuestRewardItemAction_o **)(v37 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)Component_object, v74, v75, v76, v77, v78, v79);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v80 = *v73;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                      dispRewardInfoList,
                                                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
  if ( !v80 )
    goto LABEL_36;
  QuestRewardItemAction__Setup_34701004(
    v80,
    (QuestRewardInfo_array *)dispRewardInfoList,
    *(_DWORD *)(v37 + 16) == 0,
    0LL);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(
                                                                      this->fields.overWriteTitleSpriteName,
                                                                      0LL);
  if ( ((unsigned __int8)dispRewardInfoList & 1) == 0 )
  {
    v83 = *v73;
    if ( !v83 )
      goto LABEL_36;
    p_overWriteTitleSpriteName = &this->fields.overWriteTitleSpriteName;
    goto LABEL_33;
  }
  v81 = ScrTerminalListTop_TypeInfo;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v39);
    v81 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Equality(useTreasureGetEffectName, v81->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)ScrTerminalListTop_TypeInfo;
    v83 = *v73;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v39);
    if ( v83 )
    {
      p_overWriteTitleSpriteName = &ScrTerminalListTop_TypeInfo->static_fields->PRIZE_ITEM_GET_TITLE;
LABEL_33:
      QuestRewardItemAction__SetTitleSprite(v83, *p_overWriteTitleSpriteName, 0LL);
      goto LABEL_34;
    }
LABEL_36:
    sub_1BCAA3C(dispRewardInfoList, v39);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  FADEOUT_KIND = this->fields.FADEOUT_KIND;
  FADEOUT_TIME = this->fields.FADEOUT_TIME;
  v88 = (CommonUI_o *)Instance;
  v92 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v89, v90, v91);
  System_Action___ctor(
    v92,
    (Il2CppObject *)v37,
    Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
    0LL);
  if ( !v88 )
    goto LABEL_36;
  CommonUI__maskFadeout(v88, FADEOUT_KIND, FADEOUT_TIME, v92, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  __int64 v14; // x0
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
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x22

  if ( (byte_4B193E6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&callCnt, callback);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__, v9, v10);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass80_0_TypeInfo, v11, v12);
    byte_4B193E6 = 1;
  }
  v13 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass80_0_TypeInfo, *(_QWORD *)&callCnt, callback, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  *(_DWORD *)(v13 + 24) = callCnt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v13 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v32 = (CommonUI_o *)Instance;
    v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v13,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( v32 )
    {
      CommonUI__maskFadeout(v32, FADEOUT_KIND, FADEOUT_TIME, v36, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(v14, v15);
  }
  ActionExtensions__Call(*(System_Action_o **)(v13 + 32), 0LL);
}


void __fastcall MissionListViewManager__SvtEffCaller(
        MissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  AvalonSceneManager_c *v13; // x0
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
  ServantRewardAction_o *svtRewardComp; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x20

  if ( (byte_4B193E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__, v8, v9);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass81_0_TypeInfo, v10, v11);
    byte_4B193E7 = 1;
  }
  v12 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass81_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)callback, v21, v22, v23, v24, v25, v26);
  svtRewardComp = this->fields.svtRewardComp;
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v12,
    Method_MissionListViewManager___c__DisplayClass81_0__SvtEffCaller_b__0__,
    0LL);
  v13 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14);
  if ( !svtRewardComp )
LABEL_8:
    sub_1BCAA3C(v13, v14);
  ServantRewardAction__Play(svtRewardComp, v31, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *Master_object; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  int32_t v11; // w20
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = objectId;
  if ( (byte_4B193E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCostumeMaster___, resultEntity, *(_QWORD *)&objectId);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B193E8 = 1;
  }
  Master_object = System_Int32__ToString((int32_t)&v16, 0LL);
  if ( !Master_object )
    goto LABEL_8;
  v9 = Master_object;
  v10 = System_String__Substring_62420224(Master_object, 0, Master_object->fields._stringLength - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  v12 = System_String__Substring(v9, v9->fields._stringLength - 2, 0LL);
  v14 = System_Int32__Parse(v12, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1BCAA3C(Master_object, v8);
  return ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, resultEntity, v11, v14, 0LL);
}


bool __fastcall MissionListViewManager__TrySetupMissionCondNaviAction(
        MissionListViewManager_o *this,
        MissionListViewItem_o *item,
        System_Action_o **naviAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x20
  MissionListViewItem_o *Master_object; // x0
  MissionNaviTransitionBoardItem_o *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  MissionListViewItem_o **v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Collections_Generic_List_object__o *v68; // x23
  System_Collections_Generic_List_object__o **v69; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x3
  __int64 v80; // x1
  int64_t v81; // x2
  __int64 v82; // x3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  bool v87; // w23
  System_Action_o *v88; // x21
  __int64 v89; // x2
  __int64 v90; // x3
  BalanceConfig_c *v91; // x0
  EventMissionConditionEntity_o *NotClearCondInfo; // x0
  const MethodInfo *v93; // x5
  int condType; // w8
  MissionListViewItem_o *v95; // x4
  __int64 *v96; // x8
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_Collections_Generic_List_object__o *v103; // x8
  struct System_Object_array *items; // x9
  _QWORD *v105; // x10
  __int64 size; // x11
  int64_t v107; // x1
  Il2CppClass **v108; // x0
  System_Action_o *v109; // x0
  __int64 *v110; // x8
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x8
  _QWORD *v118; // x9
  __int64 sortIndex; // x10
  __int64 v120; // x8
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  System_Action_o *v124; // x21
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B193F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, naviAction);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_MissionNaviTransitionMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(
      &Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__, v21, v22);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__, v23, v24);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__, v25, v26);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass90_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_4669/*"Combine/ServantSkillCombine"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_4667/*"Combine/ServantEQCombine"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4665/*"Combine/ClassBoard"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_4668/*"Combine/ServantLimitCountUp"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_13232/*"Summon/FRIEND_POINT"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_4666/*"Combine/ServantCombine"*/, v41, v42);
    byte_4B193F0 = 1;
  }
  entity = 0LL;
  v43 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass90_0_TypeInfo, item, naviAction, method);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43 )
    goto LABEL_55;
  *(_QWORD *)(v43 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 16), (int64_t)this, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v43 + 24) = item;
  v52 = (MissionListViewItem_o **)(v43 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 24), (int64_t)item, v53, v54, v55, v56, v57, v58);
  *naviAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)naviAction, 0LL, v59, v60, v61, v62, v63, v64);
  v68 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo,
                                                       v65,
                                                       v66,
                                                       v67);
  System_Collections_Generic_List_object____ctor(
    v68,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *(_QWORD *)(v43 + 32) = v68;
  v69 = (System_Collections_Generic_List_object__o **)(v43 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)v68, v70, v71, v72, v73, v74, v75);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v76);
  Master_object = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
  if ( !*v52 )
    goto LABEL_55;
  eventMissionEnt = (*v52)->fields.eventMissionEnt;
  if ( !eventMissionEnt || !Master_object )
    goto LABEL_55;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         eventMissionEnt->fields.id,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__) )
  {
    Master_object = (MissionListViewItem_o *)entity;
    if ( entity )
    {
      switch ( HIDWORD(entity[1].klass) )
      {
        case 1:
          v87 = MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v52,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v43 + 32),
                  v79);
          if ( v87 )
          {
            v88 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v80, v81, v82);
            System_Action___ctor(
              v88,
              (Il2CppObject *)v43,
              Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__2__,
              0LL);
          }
          else
          {
            v88 = 0LL;
          }
          *naviAction = v88;
          sub_1BCA784((PartyOrganizationUtility_o *)naviAction, (int64_t)v88, v81, v82, v83, v84, v85, v86);
          return v87;
        case 2:
          if ( MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
                 (MissionNaviTransitionEntity_o *)entity,
                 *v52,
                 (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v43 + 32),
                 v79) )
          {
            goto LABEL_43;
          }
          goto LABEL_17;
        case 3:
          if ( !MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
                  (MissionNaviTransitionEntity_o *)entity,
                  *v52,
                  (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v43 + 32),
                  v79) )
            goto LABEL_17;
          goto LABEL_43;
        case 4:
          Master_object = (MissionListViewItem_o *)MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem(
                                                     (MissionNaviTransitionEntity_o *)entity,
                                                     *v52,
                                                     v78);
          v103 = *v69;
          if ( !*v69 )
            goto LABEL_55;
          items = v103->fields._items;
          v105 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
          ++v103->fields._version;
          if ( !items )
            goto LABEL_55;
          size = v103->fields._size;
          v107 = (int64_t)Master_object;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v103,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
          }
          else
          {
            v108 = &items->obj.klass + size;
            v103->fields._size = size + 1;
            v108[4] = (Il2CppClass *)v107;
            sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 4), v107, v97, v98, v99, v100, v101, v102);
          }
LABEL_43:
          v109 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v45, v89, v90);
          v110 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__1__;
          break;
        default:
          goto LABEL_17;
      }
      goto LABEL_53;
    }
    goto LABEL_55;
  }
LABEL_17:
  v91 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v45);
    v91 = BalanceConfig_TypeInfo;
  }
  if ( !v91->static_fields->IsMissionNaviAutoClassify )
    return 0;
  Master_object = *v52;
  if ( !*v52 )
    goto LABEL_55;
  NotClearCondInfo = MissionListViewItem__GetNotClearCondInfo(Master_object, (const MethodInfo *)v45);
  if ( !NotClearCondInfo )
    return 0;
  condType = NotClearCondInfo->fields.condType;
  if ( condType > 141 )
  {
    switch ( condType )
    {
      case 187:
        v95 = *v52;
        v96 = &StringLiteral_4665/*"Combine/ClassBoard"*/;
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
        v95 = *v52;
        v96 = &StringLiteral_4669/*"Combine/ServantSkillCombine"*/;
        break;
    }
LABEL_45:
    v45 = MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_44932976(
            (System_String_o *)*v96,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            (System_String_o *)StringLiteral_1/*""*/,
            v95,
            v93);
    if ( v45 )
    {
      Master_object = (MissionListViewItem_o *)*v69;
      if ( *v69 )
      {
        v117 = *(_QWORD *)&Master_object->fields.selectNum;
        v118 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
        ++Master_object->fields.loopIndex;
        if ( v117 )
        {
          sortIndex = Master_object->fields.sortIndex;
          if ( (unsigned int)sortIndex >= *(_DWORD *)(v117 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v45,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
          }
          else
          {
            v120 = v117 + 8 * sortIndex;
            Master_object->fields.sortIndex = sortIndex + 1;
            *(_QWORD *)(v120 + 32) = v45;
            sub_1BCA784((PartyOrganizationUtility_o *)(v120 + 32), (int64_t)v45, v111, v112, v113, v114, v115, v116);
          }
          v109 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v121, v122, v123);
          v110 = &Method_MissionListViewManager___c__DisplayClass90_0__TrySetupMissionCondNaviAction_b__0__;
LABEL_53:
          v124 = v109;
          System_Action___ctor(v109, (Il2CppObject *)v43, *v110, 0LL);
          *naviAction = v124;
          sub_1BCA784((PartyOrganizationUtility_o *)naviAction, (int64_t)v124, v125, v126, v127, v128, v129, v130);
          return 1;
        }
      }
LABEL_55:
      sub_1BCAA3C(Master_object, v45);
    }
    return 0;
  }
  v87 = 0;
  if ( condType > 7 )
  {
    if ( condType == 8 )
    {
      v95 = *v52;
      v96 = &StringLiteral_13232/*"Summon/FRIEND_POINT"*/;
      goto LABEL_45;
    }
    if ( condType == 141 )
    {
      v95 = *v52;
      v96 = &StringLiteral_4667/*"Combine/ServantEQCombine"*/;
      goto LABEL_45;
    }
  }
  else
  {
    if ( condType == 6 )
    {
LABEL_39:
      v95 = *v52;
      v96 = &StringLiteral_4666/*"Combine/ServantCombine"*/;
      goto LABEL_45;
    }
    if ( condType == 7 )
    {
LABEL_28:
      v95 = *v52;
      v96 = &StringLiteral_4668/*"Combine/ServantLimitCountUp"*/;
      goto LABEL_45;
    }
  }
  return v87;
}


void __fastcall MissionListViewManager__Update(MissionListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  MissionListViewManager__UpdateAnim(this, v3);
}


void __fastcall MissionListViewManager__UpdateAnim(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_rewardIconAlphaCalculator; // x20
  AlphaTransitionCalculator_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  float realtimeSinceStartup; // s0
  float v17; // s0
  float v18; // s0
  float alphaAnimTimeOld; // s9
  float v20; // s8
  MissionListViewManager_c *v21; // x0
  __int64 v22; // x1
  float v23; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v25; // w21
  MissionListViewManager_c *v26; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v28; // w21

  if ( (byte_4B193D1 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v4, v5);
    byte_4B193D1 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v8 = MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = v8;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.rewardIconAlphaCalculator,
      (int64_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
  v17 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v17;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0LL) )
  {
    v18 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v20 = v18;
    v21 = MissionListViewManager_TypeInfo;
    if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, v15);
      v21 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v20 - alphaAnimTimeOld) >= v21->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    sub_1BCAA3C(rewardIconAlphaCalculator, v15);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0LL);
  v23 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v23;
  v25 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v26 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, v22);
    v26 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v26->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v25 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v28 = this->fields.alphaAnimCnt;
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v22);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v28 - ALPHA_ANIM_COUNT_RESET_VAL;
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

  if ( (byte_4B193CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B193CF = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B193D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B193D0 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B193F5 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewManager___c_TypeInfo, v1, v2);
    byte_4B193F5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MissionListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MissionListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MissionListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return !Gift__IsItem_38401476(x->fields.type, 0LL);
}


bool __fastcall MissionListViewManager___c___CreateDisplayRewardList_b__84_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return Gift__IsItem_38401476(x->fields.type, 0LL);
}


void __fastcall MissionListViewManager___c___SetupMissionCondTransitionConfirmDialog_b__92_0(
        MissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method, v2);
    byte_4B193F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v3; // x3
  MissionListViewManager___c__DisplayClass73_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *_4__this; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B193F7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1BCA7E0(
                                                               &Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__,
                                                               v5,
                                                               v6);
    byte_4B193F7 = 1;
  }
  _9__1 = v4->fields.__9__1;
  _4__this = v4->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  MissionListViewManager__LoadTreasureGetEffect(_4__this, _9__1, v2);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct MissionListViewManager_o *_4__this; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  struct MissionListViewManager_o *v9; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B193F8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__, v4, v5);
    byte_4B193F8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  MissionListViewManager__SetupTreasureGetEffect(_4__this, _4__this->fields.giftIconId, v2);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_9;
  questRewardBoxAction = v9->fields.questRewardBoxAction;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v7, v8);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass73_0__StartEventMissionClearItemAction_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_1BCAA3C(_4__this, method);
  QuestRewardBoxAction__Play(questRewardBoxAction, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartEventMissionClearItemAction_b__2(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionListViewManager___c__DisplayClass73_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MissionListViewManager_o *_4__this; // x8
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct MissionListViewManager_o *v9; // x8
  AssetData_o *treasureGetAssetData; // x20
  const MethodInfo *v11; // x4

  v3 = this;
  if ( (byte_4B193F9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    this = (MissionListViewManager___c__DisplayClass73_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B193F9 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass73_0_o *)_4__this->fields.questRewardBoxAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  v9 = v3->fields.__4__this;
  if ( !v9 )
    goto LABEL_12;
  treasureGetAssetData = v9->fields.treasureGetAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetManager__releaseAsset_38505704(treasureGetAssetData, 0LL);
  this = (MissionListViewManager___c__DisplayClass73_0_o *)v3->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1BCAA3C(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v3->fields.gifts,
    0,
    v3->fields.afterDetail,
    v11);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B193FA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__, v6, v7);
    byte_4B193FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__LoadEquipGetEffect(v13, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B193FB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__, v6, v7);
    byte_4B193FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__OpenEquipGetEffect(v13, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4

  if ( (byte_4B193FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B193FC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B193FD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__, v6, v7);
    byte_4B193FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__LoadCostumeReleaseEffect(v13, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x21
  System_String_o *name; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B193FE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__, v6, v7);
    byte_4B193FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__OpenCostumeReleaseEffect(v13, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4

  if ( (byte_4B193FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B193FF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v6);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  MissionInfoMaker_c *v12; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19400 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__, v10, v11);
    byte_4B19400 = 1;
  }
  v12 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
    v12 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v12->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v15 = System_String__Format(ITEM_GET_ASSET_NAME, v14, 0LL);
  _9__1 = this->fields.__9__1;
  v20 = v15;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17, v18);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v21, v22, v23, v24, v25, v26);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
  AssetManager__loadAssetStorage(v20, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  System_String_o *transform; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  MissionInfoMaker_c *v38; // x0
  AssetData_o *v39; // x21
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  Il2CppObject *Object_object__49237568; // x21
  UnityEngine_GameObject_o *v44; // x21
  struct MissionListViewManager_o *_4__this; // x8
  Il2CppObject *Component_object; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  QuestRewardItemAction_o *v53; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19401 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v6, v7);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__, v18, v19);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass78_1_TypeInfo, v20, v21);
    byte_4B19401 = 1;
  }
  v22 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass78_1_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_15;
  *(_QWORD *)(v22 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)data, v31, v32, v33, v34, v35, v36);
  v38 = MissionInfoMaker_TypeInfo;
  v39 = *(AssetData_o **)(v22 + 24);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v37);
    v38 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v38->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v41, 0LL);
  if ( !v39 )
    goto LABEL_15;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              v39,
                              transform,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
  transform = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__49237568,
                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_15;
  v44 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v44, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v44,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v22 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)Component_object, v47, v48, v49, v50, v51, v52);
  transform = *(System_String_o **)(v22 + 16);
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        v53 = *(QuestRewardItemAction_o **)(v22 + 16),
        v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56),
        System_Action___ctor(
          v57,
          (Il2CppObject *)v22,
          Method_MissionListViewManager___c__DisplayClass78_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !v53) )
  {
LABEL_15:
    sub_1BCAA3C(transform, v24);
  }
  QuestRewardItemAction__Play(v53, 0, v57, 0.0, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *mRewardItemAction; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x1
  AssetData_o *data; // x20
  const MethodInfo *v11; // x4
  struct MissionListViewManager___c__DisplayClass78_0_o *CS___8__locals1; // x8

  if ( (byte_4B19402 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19402 = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
  AssetManager__releaseAsset_38505704(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_11:
    sub_1BCAA3C(mRewardItemAction, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    v11);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B19403 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__, v6, v7);
    byte_4B19403 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v13 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  SummonAssetManager__LoadSummonAssets(v13, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  int64_t Master_object; // x0
  __int64 v24; // x1
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  Il2CppObject *v27; // x21
  struct MissionListViewManager_o *v28; // x8
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct MissionListViewManager_o *v35; // x8
  _BOOL4 isDoEffect; // w24
  ServantRewardAction_o *svtRewardComp; // x20
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v40; // x1
  int32_t v41; // w22
  Il2CppObject v42; // q1
  int64_t v43; // x0
  Il2CppClass *v44; // x8
  int64_t v45; // x21
  bool isNew; // w5
  int32_t v47; // w3
  bool v48; // w6
  int32_t v49; // w7
  ServantRewardAction_o *v50; // x0
  int32_t v51; // w1
  int64_t v52; // x2
  const MethodInfo *v53; // x2
  __int64 v54; // x3
  Il2CppObject *v55; // x0
  struct MissionListViewManager_o *v56; // x20
  Il2CppObject *v57; // x21
  struct MissionListViewManager_o *v58; // x8
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct MissionListViewManager_o *v65; // x8
  ServantRewardAction_o *v66; // x20
  Il2CppObject v67; // q1
  bool v68; // w2
  int64_t v69; // x1
  bool v70; // w3
  int32_t v71; // w4
  ServantRewardAction_o *v72; // x0
  Il2CppObject v73; // q1
  int64_t v74; // x0
  Il2CppClass *v75; // x8
  int64_t v76; // x21
  Il2CppObject v77; // q1
  System_Action_o *_9__2; // x22
  MissionListViewManager_o *v79; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4B19404 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__, v20, v21);
    byte_4B19404 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 this->fields.userSvtID,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v27 = Entity;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v28 = this->fields.__4__this;
      if ( v28 )
      {
        if ( Master_object )
        {
          Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                     (SummonAssetManager_o *)Master_object,
                                     v28->fields.instantiatingPOS,
                                     0,
                                     0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&_4__this->fields.svtRewardComp,
              Master_object,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            v35 = this->fields.__4__this;
            if ( v35 )
            {
              if ( v27 )
              {
                isDoEffect = this->fields.isDoEffect;
                svtRewardComp = v35->fields.svtRewardComp;
                klass = v27[5].klass;
                monitor = v27[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
                *(_QWORD *)&v91.fields.currentCryptoKey = klass;
                *(_QWORD *)&v91.fields.fakeValue = monitor;
                v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v91, 0LL);
                if ( isDoEffect )
                {
                  v42 = v27[2];
                  *(Il2CppObject *)&v90.fields.currentCryptoKey = v27[1];
                  *(Il2CppObject *)&v90.fields.fakeValue = v42;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
                  v89 = v90;
                  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v89, 0LL);
                  v44 = v27[6].klass;
                  *(_QWORD *)&v92.fields.fakeValue = v27[6].monitor;
                  v45 = v43;
                  *(_QWORD *)&v92.fields.currentCryptoKey = v44;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v92, 0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v47 = Master_object;
                    v48 = 1;
                    v49 = 14;
                    v50 = svtRewardComp;
                    v51 = v41;
                    v52 = v45;
LABEL_37:
                    ServantRewardAction__Setup(v50, v51, v52, v47, 1, isNew, v48, v49, 0LL);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v73 = v27[2];
                  *(Il2CppObject *)&v90.fields.currentCryptoKey = v27[1];
                  *(Il2CppObject *)&v90.fields.fakeValue = v73;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
                  v88 = v90;
                  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v88, 0LL);
                  v75 = v27[6].klass;
                  *(_QWORD *)&v93.fields.fakeValue = v27[6].monitor;
                  v76 = v74;
                  *(_QWORD *)&v93.fields.currentCryptoKey = v75;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v93, 0LL);
                  if ( svtRewardComp )
                  {
                    v47 = Master_object;
                    v49 = 6;
                    v50 = svtRewardComp;
                    v51 = v41;
                    v52 = v76;
                    isNew = 0;
                    v48 = 0;
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
    sub_1BCAA3C(Master_object, v24);
  }
  Master_object = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_object & 1) == 0 )
    goto LABEL_43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_47;
  v55 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          this->fields.userSvtID,
          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v56 = this->fields.__4__this;
  v57 = v55;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v58 = this->fields.__4__this;
  if ( !v58 )
    goto LABEL_47;
  if ( !Master_object )
    goto LABEL_47;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v58->fields.instantiatingPOS,
                             0,
                             0LL);
  if ( !v56 )
    goto LABEL_47;
  v56->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)&v56->fields.svtRewardComp, Master_object, v59, v60, v61, v62, v63, v64);
  v65 = this->fields.__4__this;
  if ( !v65 || !v57 )
    goto LABEL_47;
  v66 = v65->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v67 = v57[2];
    *(Il2CppObject *)&v90.fields.currentCryptoKey = v57[1];
    *(Il2CppObject *)&v90.fields.fakeValue = v67;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    v87 = v90;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v87, 0LL);
    if ( !v66 )
      goto LABEL_47;
    v68 = this->fields.isNew;
    v69 = Master_object;
    v70 = 1;
    v71 = 14;
    v72 = v66;
  }
  else
  {
    v77 = v57[2];
    *(Il2CppObject *)&v90.fields.currentCryptoKey = v57[1];
    *(Il2CppObject *)&v90.fields.fakeValue = v77;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    v86 = v90;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v86, 0LL);
    if ( !v66 )
      goto LABEL_47;
    v69 = Master_object;
    v71 = 6;
    v72 = v66;
    v68 = 0;
    v70 = 0;
  }
  ServantRewardAction__SetupCommandCode_35299020(v72, v69, v68, v70, v71, 0LL);
LABEL_43:
  _9__2 = this->fields.__9__2;
  v79 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v53, v54);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v80, v81, v82, v83, v84, v85);
  }
  if ( !v79 )
    goto LABEL_47;
  MissionListViewManager__SvtEffCaller(v79, _9__2, v53);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SummonAssetManager_o *Instance; // x0
  __int64 v5; // x1
  struct MissionListViewManager_o *_4__this; // x8
  const MethodInfo *v7; // x4

  if ( (byte_4B19405 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, method, v2);
    byte_4B19405 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t Master_object; // x0
  __int64 v19; // x1
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v23; // x8
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *v25; // x21
  Il2CppObject *v26; // x20
  struct MissionListViewManager_o *v27; // x8
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct MissionListViewManager_o *v34; // x8
  struct GetSvts_array *v35; // x8
  __int64 v36; // x9
  struct MissionListViewManager_o *v37; // x8
  char v38; // w23
  ServantRewardAction_o *svtRewardComp; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x24
  __int64 v42; // x1
  int32_t v43; // w22
  Il2CppObject v44; // q1
  int64_t v45; // x0
  Il2CppClass *v46; // x8
  int64_t v47; // x20
  struct MissionListViewManager_o *v48; // x8
  struct GetSvts_array *v49; // x8
  __int64 v50; // x9
  GetSvts_o *v51; // x8
  const MethodInfo *v52; // x2
  __int64 v53; // x3
  Il2CppObject v54; // q1
  int64_t v55; // x0
  Il2CppClass *v56; // x8
  int64_t v57; // x20
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4B19406 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__, v16, v17);
    byte_4B19406 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_38;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_39;
  v23 = getSvtList->m_Items[callCnt];
  if ( !v23 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v23->fields.userSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v25 = this->fields.__4__this;
  v26 = Entity;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v27->fields.instantiatingPOS,
                             0,
                             0LL);
  if ( !v25 )
    goto LABEL_38;
  v25->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->fields.svtRewardComp, Master_object, v28, v29, v30, v31, v32, v33);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_38;
  v35 = v34->fields.getSvtList;
  if ( !v35 )
    goto LABEL_38;
  v36 = this->fields.callCnt;
  if ( (unsigned int)v36 >= v35->max_length )
LABEL_39:
    sub_1BCAA44(Master_object, v19);
  Master_object = (int64_t)v35->m_Items[v36];
  if ( !Master_object )
    goto LABEL_38;
  Master_object = GetSvts__isDoGetEff((GetSvts_o *)Master_object, 0LL);
  v37 = this->fields.__4__this;
  if ( !v37 || !v26 )
    goto LABEL_38;
  v38 = Master_object;
  svtRewardComp = v37->fields.svtRewardComp;
  klass = v26[5].klass;
  monitor = v26[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v69.fields.currentCryptoKey = klass;
  *(_QWORD *)&v69.fields.fakeValue = monitor;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v69, 0LL);
  if ( (v38 & 1) == 0 )
  {
    v54 = v26[2];
    *(Il2CppObject *)&v68.fields.currentCryptoKey = v26[1];
    *(Il2CppObject *)&v68.fields.fakeValue = v54;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
    v66 = v68;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v66, 0LL);
    v56 = v26[6].klass;
    *(_QWORD *)&v71.fields.fakeValue = v26[6].monitor;
    v57 = v55;
    *(_QWORD *)&v71.fields.currentCryptoKey = v56;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v71, 0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v43, v57, Master_object, 1, 0, 0, 2, 0LL);
      goto LABEL_34;
    }
LABEL_38:
    sub_1BCAA3C(Master_object, v19);
  }
  v44 = v26[2];
  *(Il2CppObject *)&v68.fields.currentCryptoKey = v26[1];
  *(Il2CppObject *)&v68.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
  v67 = v68;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v67, 0LL);
  v46 = v26[6].klass;
  *(_QWORD *)&v70.fields.fakeValue = v26[6].monitor;
  v47 = v45;
  *(_QWORD *)&v70.fields.currentCryptoKey = v46;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL);
  v48 = this->fields.__4__this;
  if ( !v48 )
    goto LABEL_38;
  v49 = v48->fields.getSvtList;
  if ( !v49 )
    goto LABEL_38;
  v50 = this->fields.callCnt;
  if ( (unsigned int)v50 >= v49->max_length )
    goto LABEL_39;
  v51 = v49->m_Items[v50];
  if ( !v51 || !svtRewardComp )
    goto LABEL_38;
  ServantRewardAction__Setup(svtRewardComp, v43, v47, Master_object, 1, v51->fields.isNew, 1, 10, 0LL);
LABEL_34:
  _9__1 = this->fields.__9__1;
  v59 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v52, v53);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v60, v61, v62, v63, v64, v65);
  }
  if ( !v59 )
    goto LABEL_38;
  MissionListViewManager__SvtEffCaller(v59, _9__1, v52);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B19407 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__, v8, v9);
    byte_4B19407 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v18, v19, v20, v21, v22, v23);
  }
  if ( !v15 )
    sub_1BCAA3C(Instance, v11);
  CommonUI__maskFadein(v15, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  MissionListViewManager___c__DisplayClass81_0_o *v3; // x19
  struct MissionListViewManager_o *_4__this; // x8
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20

  v3 = this;
  if ( (byte_4B19408 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass81_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19408 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass81_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_1BCAA3C(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ScrTerminalListTop_c *v12; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19409 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      v10,
      v11);
    byte_4B19409 = 1;
  }
  v12 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, method);
    v12 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v12->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v15 = System_String__Format(ITEM_GET_ASSET_NAME, v14, 0LL);
  _9__1 = this->fields.__9__1;
  v20 = v15;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17, v18);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass85_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v21, v22, v23, v24, v25, v26);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
  AssetManager__loadAssetStorage(v20, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass85_0___StartRewardItemGetEffectAfterTresureEffect_b__1(
        MissionListViewManager___c__DisplayClass85_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
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
  QuestRewardItemAction_o *mRewardItemAction; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x20

  if ( (byte_4B1940A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(
      &Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
      v6,
      v7);
    sub_1BCA7E0(&MissionListViewManager___c__DisplayClass85_1_TypeInfo, v8, v9);
    byte_4B1940A = 1;
  }
  v10 = sub_1BCAA2C(MissionListViewManager___c__DisplayClass85_1_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_QWORD *)(v10 + 16) = data,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)data, v19, v20, v21, v22, v23, v24),
        mRewardItemAction = this->fields.mRewardItemAction,
        v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v10,
          Method_MissionListViewManager___c__DisplayClass85_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0LL),
        !mRewardItemAction) )
  {
    sub_1BCAA3C(v11, v12);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v29, 0.0, 0LL);
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
  __int64 v2; // x2
  MissionListViewManager___c__DisplayClass85_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MissionListViewManager___c__DisplayClass85_0_o *CS___8__locals1; // x8
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x1
  AssetData_o *data; // x20
  const MethodInfo *v11; // x4
  struct MissionListViewManager___c__DisplayClass85_0_o *v12; // x8

  v3 = this;
  if ( (byte_4B1940B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    this = (MissionListViewManager___c__DisplayClass85_1_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1940B = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass85_1_o *)CS___8__locals1->fields.mRewardItemAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  data = v3->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
  AssetManager__releaseAsset_38505704(data, 0LL);
  v12 = v3->fields.CS___8__locals1;
  if ( !v12 || (this = (MissionListViewManager___c__DisplayClass85_1_o *)v12->fields.__4__this) == 0LL )
LABEL_12:
    sub_1BCAA3C(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v12->fields.gifts,
    v12->fields.idx + 1,
    v12->fields.afterDetail,
    v11);
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
    sub_1BCAA3C(this, data);
  _4__this->fields.treasureGetAssetData = data;
  sub_1BCA784(
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
  if ( (byte_4B1940C & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass89_0_o *)sub_1BCA7E0(
                                                               &Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__,
                                                               data,
                                                               method);
    byte_4B1940C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass89_0_o *)_4__this->fields.itemGetAssetDatas) == 0LL
    || (System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (Il2CppObject *)data,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass89_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, data);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B1940D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1940D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
    ActionExtensions__Call(this->fields.decideAction, 0LL);
}