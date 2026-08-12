void MissionListViewManager___cctor(const MethodInfo *method)
{
  struct MissionListViewManager_StaticFields *static_fields; // x8

  if ( (byte_5974423 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewManager_TypeInfo);
    byte_5974423 = 1;
  }
  static_fields = MissionListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x40DE021F0LL;
}


void MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__c *v3; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  AvalonSceneManager_c *v19; // x0

  if ( (byte_5974422 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    byte_5974422 = 1;
  }
  v3 = System_Collections_Generic_List_int__TypeInfo;
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardItemGetEffectPlayList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dispRewardInfoList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v19 = AvalonSceneManager_TypeInfo;
  this->fields.FADEOUT_KIND = 1;
  if ( !*(&v19->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v19, v18);
    v19 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v19->static_fields->DEFAULT_FADE_TIME);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MissionListViewManager__ApplyRewardEffectDepthOffset(
        MissionListViewManager_o *this,
        UnityEngine_GameObject_o *rewardEffectObject,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *parent; // x20
  UnityEngine_Transform_o *v8; // x19
  int32_t layer; // w1

  if ( (byte_59743FE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59743FE = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewardEffectObject);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                           (UnityEngine_Object_o *)rewardEffectObject,
                                           0,
                                           0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !rewardEffectObject )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform(rewardEffectObject, 0);
    if ( !transform )
      goto LABEL_15;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0) )
    {
      transform = UnityEngine_GameObject__get_transform(rewardEffectObject, 0);
      if ( parent )
      {
        v8 = transform;
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(parent, 0);
        if ( transform )
        {
          layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0);
          TransformHelper__ChangeChildsLayer(v8, layer, 0);
          return;
        }
      }
LABEL_15:
      sub_2213CDC(transform, v5);
    }
  }
}


void MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_597440B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597440B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void MissionListViewManager__CloseItemDetail(MissionListViewManager_o *this, bool isDecide, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5974409 & 1) == 0 )
  {
    sub_2213A60(&Method_MissionListViewManager_CloseItemDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974409 = 1;
  }
  v3 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MissionListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_597440A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597440A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void MissionListViewManager__CreateDisplayRewardList(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        const MethodInfo *method)
{
  char *v3; // x20
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  MissionListViewManager___c_c *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  struct MissionListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v12; // x23
  struct MissionListViewManager___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  MissionListViewManager___c_c *v21; // x0
  struct MissionListViewManager___c_StaticFields *v22; // x8
  System_Func_object__bool__o *_9__87_1; // x22
  Il2CppObject *v24; // x23
  struct MissionListViewManager___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  MissionListViewManager_o *ItemEffect; // x0
  __int64 v41; // x1
  int v42; // w8
  unsigned int v43; // w23
  char *v44; // x29
  __int64 v45; // x8
  char *v46; // x29
  __int64 v47; // t1
  const MethodInfo *v48; // x2
  QuestRewardInfo_o *v49; // x22
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  Il2CppObject *v56; // x8
  unsigned int v57; // w9
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w29
  intptr_t m_CachedPtr; // x8
  _QWORD *v61; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v63; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = (char *)gifts;
  if ( (byte_5974418 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_GiftEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_2213A60(&System_Func_GiftEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    sub_2213A60(&MissionListViewManager_TypeInfo);
    sub_2213A60(&QuestRewardInfo_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__87_0__);
    sub_2213A60(&Method_MissionListViewManager___c__CreateDisplayRewardList_b__87_1__);
    sub_2213A60(&MissionListViewManager___c_TypeInfo);
    byte_5974418 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gifts);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  v8 = MissionListViewManager___c_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&MissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo, v7);
    v8 = MissionListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__87_0 = (System_Func_object__bool__o *)static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v7);
      static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__87_0,
      v12,
      Method_MissionListViewManager___c__CreateDisplayRewardList_b__87_0__,
      0);
    v13 = MissionListViewManager___c_TypeInfo->static_fields;
    v13->__9__87_0 = (struct System_Func_GiftEntity__bool__o *)_9__87_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__87_0, (int32_t)_9__87_0, v14, v15, v16, v17, v18, v19);
  }
  if ( BasicHelper__Any_object__58785420(
         (System_Object_array *)v3,
         (System_Func_T__bool__o *)_9__87_0,
         (const MethodInfo_380FE8C *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v21 = MissionListViewManager___c_TypeInfo;
    if ( !*(&MissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo, v20);
      v21 = MissionListViewManager___c_TypeInfo;
    }
    v22 = v21->static_fields;
    _9__87_1 = (System_Func_object__bool__o *)v22->__9__87_1;
    if ( !_9__87_1 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v20);
        v22 = MissionListViewManager___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)v22->__9;
      _9__87_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__87_1,
        v24,
        Method_MissionListViewManager___c__CreateDisplayRewardList_b__87_1__,
        0);
      v25 = MissionListViewManager___c_TypeInfo->static_fields;
      v25->__9__87_1 = (struct System_Func_GiftEntity__bool__o *)_9__87_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__87_1, (int32_t)_9__87_1, v26, v27, v28, v29, v30, v31);
    }
    v32 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v3,
            (System_Func_TSource__bool__o *)_9__87_1,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    v3 = (char *)System_Linq_Enumerable__ToArray_object_(
                   v32,
                   (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dispRewardInfoList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( !v3 )
    goto LABEL_43;
  v42 = *((_DWORD *)v3 + 6);
  if ( v42 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= v42 )
LABEL_44:
        sub_2213CE4(ItemEffect);
      v44 = &v3[8 * v43];
      v47 = *((_QWORD *)v44 + 4);
      v46 = v44 + 32;
      v45 = v47;
      if ( !v47 || !v9 )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v9,
                                                 &entity,
                                                 *(_DWORD *)(v45 + 24),
                                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   (int32_t)entity[1].klass,
                                                   v48);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v49 = (QuestRewardInfo_o *)sub_2213CCC(QuestRewardInfo_TypeInfo);
          QuestRewardInfo___ctor(v49, 0);
          if ( !v49 )
            break;
          v56 = entity;
          v49->fields.type = 2;
          if ( !v56 )
            break;
          v57 = *((_DWORD *)v3 + 6);
          v49->fields.objectId = (int32_t)v56[1].klass;
          if ( v43 >= v57 )
            goto LABEL_44;
          if ( !*(_QWORD *)v46 )
            break;
          dispRewardInfoList = this->fields.dispRewardInfoList;
          v49->fields.num = *(_DWORD *)(*(_QWORD *)v46 + 28LL);
          if ( !dispRewardInfoList )
            break;
          ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          size = dispRewardInfoList->fields._size;
          if ( !*(&MissionListViewManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, v41);
            ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          }
          if ( size < ItemEffect->fields.sort->fields.SVT_EQUIP_EFFECT_FILTER_DISABLE )
          {
            ItemEffect = (MissionListViewManager_o *)this->fields.dispRewardInfoList;
            if ( !ItemEffect )
              break;
            m_CachedPtr = ItemEffect->fields.m_CachedPtr;
            v61 = Method_System_Collections_Generic_List_QuestRewardInfo__Add__;
            ++HIDWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ItemEffect,
                (Il2CppObject *)v49,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(ItemEffect->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v63 + 32) = v49;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 32), (int32_t)v49, v50, v51, v52, v53, v54, v55);
            }
          }
        }
      }
      v42 = *((_DWORD *)v3 + 6);
      if ( (int)++v43 >= v42 )
        return;
    }
LABEL_43:
    sub_2213CDC(ItemEffect, v41);
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

  if ( (byte_5974400 & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&MissionListViewManager_TypeInfo);
    byte_5974400 = 1;
  }
  v2 = MissionListViewManager_TypeInfo;
  if ( !*(&MissionListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, method);
    v2 = MissionListViewManager_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0);
  v5 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
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
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  int32_t version; // w9
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w2
  int v42; // w9
  __int64 v43; // x1
  Il2CppObject *value; // x22
  __int64 v45; // x8
  __int64 v46; // x1
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v48; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v50; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_597440F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass78_0__EndItemGetEffectAction_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass78_0_TypeInfo);
    byte_597440F = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v5 = sub_2213CCC(MissionListViewManager___c__DisplayClass78_0_TypeInfo);
  MissionListViewManager___c__DisplayClass78_0___ctor((MissionListViewManager___c__DisplayClass78_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = afterDetail;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)afterDetail, v14, v15, v16, v17, v18, v19);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_25;
  version = rewardItemGetEffectPlayList->fields._version;
  this->fields.questRewardBoxAction = 0;
  rewardItemGetEffectPlayList->fields._size = 0;
  rewardItemGetEffectPlayList->fields._version = version + 1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questRewardBoxAction, 0, v20, v21, v22, v23, v24, v25);
  this->fields.isTreasureEffect = 0;
  this->fields.isChangeTitleSprite = 0;
  this->fields.useTreasureGetEffectName = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.useTreasureGetEffectName,
    0,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.overWriteTitleSpriteName = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overWriteTitleSpriteName,
    0,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_25;
  size = dispRewardInfoList->fields._size;
  v42 = dispRewardInfoList->fields._version + 1;
  dispRewardInfoList->fields._size = 0;
  dispRewardInfoList->fields._version = v42;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)dispRewardInfoList->fields._items, 0, size, 0);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas )
  {
    itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                                                            (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
                                                                                            (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__);
    if ( (int)itemGetAssetDatas >= 1 )
    {
      itemGetAssetDatas = this->fields.itemGetAssetDatas;
      if ( !itemGetAssetDatas )
        goto LABEL_25;
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v51,
        (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
        (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
      while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v51,
                (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
      {
        value = v51.fields._current.fields.value;
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
        AssetManager__releaseAsset_47496972((AssetData_o *)value, 0);
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v51,
        (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
      itemGetAssetDatas = this->fields.itemGetAssetDatas;
      if ( !itemGetAssetDatas )
        goto LABEL_25;
      System_Collections_Generic_Dictionary_int__object___Clear(
        (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
        (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
    }
  }
  if ( this->fields.skipEndFadein )
  {
    v45 = *(_QWORD *)(v5 + 24);
    this->fields.skipEndFadein = 0;
    if ( v45 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(v45 + 24))(*(_QWORD *)(v45 + 64), *(_QWORD *)(v45 + 40));
      return;
    }
LABEL_25:
    sub_2213CDC(itemGetAssetDatas, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v48 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v46);
    v48 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v48->static_fields->DEFAULT_FADE_TIME;
  v50 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass78_0__EndItemGetEffectAction_b__0__,
    0);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v50, 0);
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
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_597441C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    this = (MissionListViewManager_o *)sub_2213A60(&StringLiteral_19792/*"effectId"*/);
    byte_597441C = 1;
  }
  entity = 0;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0) )
  {
    this = (MissionListViewManager_o *)Gift__IsItem_47387928(rewardInfo->fields.type, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    dispRewardInfoList = v4->fields.dispRewardInfoList;
    if ( !dispRewardInfoList )
      goto LABEL_19;
    if ( dispRewardInfoList->fields._size > 1 )
      return 0;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, rewardInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_19792/*"effectId"*/, 0, 0);
LABEL_19:
    sub_2213CDC(this, rewardInfo);
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v6 = BalanceConfig_TypeInfo;
  }
  return v6->static_fields->EquipGetEffectId;
}


System_Collections_Generic_List_TObject__o *MissionListViewManager__GetObjectList___Il2CppFullySharedGenericType_(
        MissionListViewManager_o *this,
        const MethodInfo_38EEA38 *method)
{
  long double v2; // q0
  const MethodInfo_38EEA38_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x21
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_TObject__o *v8; // x19
  __int64 v9; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x24
  _BOOL8 v13; // x0
  __int64 v14; // x1
  MethodInfo *_2_UnityEngine_GameObject_GetComponent_TObject; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  void *v18; // x0
  __int64 v19; // x1
  const MethodInfo_38EEA38_RGCTXs *v20; // x8
  char *v21; // x4
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x1
  Il2CppMethodPointer v23; // x0
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD, _QWORD); // x8
  __int64 v26; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-30h] BYREF
  _QWORD v29[2]; // [xsp+40h] [xbp-10h] BYREF

  v29[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964();
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_3_TObject->_2.actualSize;
  memset(&v28, 0, sizeof(v28));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (*((_WORD *)&rgctx_data->_0_System_Collections_Generic_List_TObject_->_2.bitflags2 + 1) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_224B908(v2);
  v8 = (System_Collections_Generic_List_TObject__o *)sub_2213CCC(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v13 )
    {
      if ( !current )
        sub_2213CDC(v13, v14);
      _2_UnityEngine_GameObject_GetComponent_TObject = method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_;
      methodPointer = _2_UnityEngine_GameObject_GetComponent_TObject->methodPointer;
      invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_2_UnityEngine_GameObject_GetComponent_TObject->invoker_method;
      v29[0] = (char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      invoker_method(methodPointer, _2_UnityEngine_GameObject_GetComponent_TObject, current, v29, v29[0]);
      v18 = memcpy(
              (char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              (char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL),
              actualSize);
      if ( !v8 )
        sub_2213CDC(v18, v19);
      v20 = method->rgctx_data;
      v21 = (char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      if ( (v20->_3_TObject->_1.byval_arg.bits & 0x80000000) == 0 )
        v21 = *(char **)((char *)&v26 - ((actualSize + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_TObject__Add = v20->_4_System_Collections_Generic_List_TObject__Add;
      v23 = _4_System_Collections_Generic_List_TObject__Add->methodPointer;
      v24 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))_4_System_Collections_Generic_List_TObject__Add->invoker_method;
      v29[0] = v21;
      v24(v23, _4_System_Collections_Generic_List_TObject__Add, v8, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return v8;
}


System_Collections_Generic_List_TObject__o *MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_38EE7FC *method)
{
  long double v2; // q0
  const MethodInfo_38EE7FC_RGCTXs *rgctx_data; // x8
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964();
      rgctx_data = method->rgctx_data;
    }
  }
  memset(&v28, 0, sizeof(v28));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (*((_WORD *)&rgctx_data->_0_System_Collections_Generic_List_TObject_->_2.bitflags2 + 1) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_224B908(v2);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(_0_System_Collections_Generic_List_TObject);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v12 )
    {
      if ( !current )
        sub_2213CDC(v12, v13);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      v21 = Component_object;
      if ( !v7
        || (items = v7->fields._items,
            _4_System_Collections_Generic_List_TObject__Add = method->rgctx_data->_4_System_Collections_Generic_List_TObject__Add,
            ++v7->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          Component_object,
          (const MethodInfo_4483C64 *)_4_System_Collections_Generic_List_TObject__Add->klass->rgctx_data[14].rgctxDataDummy);
      }
      else
      {
        v25 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v21, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_TObject__o *)v7;
}


UnityEngine_Transform_o *MissionListViewManager__GetRewardEffectParent(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.instantiatingPOS;
}


// local variable allocation has failed, the output may be wrong!
bool MissionListViewManager__IsExcludeGetItemEffect(
        MissionListViewManager_o *this,
        int32_t targetItemId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *EventItemNotDispItemGetEffect; // x8
  __int64 v6; // x1
  int max_length; // w9
  int v8; // w10
  int32_t v9; // w12

  if ( (byte_597440C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_597440C = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&targetItemId);
    v4 = BalanceConfig_TypeInfo;
  }
  EventItemNotDispItemGetEffect = v4->static_fields->EventItemNotDispItemGetEffect;
  if ( !EventItemNotDispItemGetEffect )
    goto LABEL_15;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&targetItemId);
    EventItemNotDispItemGetEffect = BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
    if ( !EventItemNotDispItemGetEffect )
      sub_2213CDC(v4, v6);
  }
  max_length = EventItemNotDispItemGetEffect->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( max_length == v8 )
        sub_2213CE4(v4);
      v9 = EventItemNotDispItemGetEffect->m_Items[v8];
      v4 = (BalanceConfig_c *)(v9 == targetItemId);
      if ( v9 == targetItemId )
        break;
    }
    while ( (max_length & ~(max_length >> 31)) - 1 != v8++ );
  }
  else
  {
LABEL_15:
    LOBYTE(v4) = 0;
  }
  return (char)v4;
}


void MissionListViewManager__LoadItemGetEffects(
        MissionListViewManager_o *this,
        int32_t idx,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x29
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w8
  System_Collections_Generic_Dictionary_int__object__o *v23; // x19
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *Item; // x0
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x8
  __int64 v33; // x1
  ScrTerminalListTop_c *v34; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v36; // x0
  System_String_o *v37; // x20
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  __int64 v39; // x1
  int v40; // [xsp+Ch] [xbp-64h] BYREF

  while ( 1 )
  {
    if ( (byte_597441D & 1) == 0 )
    {
      sub_2213A60(&AssetManager_TypeInfo);
      sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__);
      sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      sub_2213A60(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
      sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
      sub_2213A60(&ScrTerminalListTop_TypeInfo);
      sub_2213A60(&Method_MissionListViewManager___c__DisplayClass92_0__LoadItemGetEffects_b__0__);
      sub_2213A60(&MissionListViewManager___c__DisplayClass92_0_TypeInfo);
      byte_597441D = 1;
    }
    v7 = sub_2213CCC(MissionListViewManager___c__DisplayClass92_0_TypeInfo);
    MissionListViewManager___c__DisplayClass92_0___ctor((MissionListViewManager___c__DisplayClass92_0_o *)v7, 0);
    if ( !v7
      || (*(_QWORD *)(v7 + 16) = this,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15),
          *(_QWORD *)(v7 + 32) = endAct,
          *(_DWORD *)(v7 + 28) = idx,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)endAct, v16, v17, v18, v19, v20, v21),
          (dispRewardInfoList = this->fields.dispRewardInfoList) == 0) )
    {
LABEL_17:
      sub_2213CDC(dispRewardInfoList, v9);
    }
    v22 = *(_DWORD *)(v7 + 28);
    if ( v22 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
      return;
    }
    if ( !v22 )
    {
      v23 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v23,
        (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      this->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v23;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.itemGetAssetDatas,
        (int32_t)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      dispRewardInfoList = this->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_17;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)dispRewardInfoList,
             *(_DWORD *)(v7 + 28),
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)MissionListViewManager__GetItemGetEffectId(
                                                                                        this,
                                                                                        (QuestRewardInfo_o *)Item,
                                                                                        v31);
    itemGetAssetDatas = this->fields.itemGetAssetDatas;
    *(_DWORD *)(v7 + 24) = (_DWORD)dispRewardInfoList;
    if ( !itemGetAssetDatas )
      goto LABEL_17;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
            (int32_t)dispRewardInfoList,
            (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v7 + 32);
    idx = *(_DWORD *)(v7 + 28) + 1;
  }
  v34 = ScrTerminalListTop_TypeInfo;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v33);
    v34 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v34->static_fields->ITEM_GET_ASSET_NAME;
  v40 = *(_DWORD *)(v7 + 24);
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v40);
  v37 = System_String__Format(ITEM_GET_ASSET_NAME, v36, 0);
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v7,
    Method_MissionListViewManager___c__DisplayClass92_0__LoadItemGetEffects_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v39);
  AssetManager__loadAssetStorage(v37, v38, 1, 0, 0);
}


void MissionListViewManager__LoadTreasureGetEffect(
        MissionListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x20
  __int64 v22; // x1

  if ( (byte_597441A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass89_0__LoadTreasureGetEffect_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass89_0_TypeInfo);
    sub_2213A60(&StringLiteral_6144/*"Effect/Talk/"*/);
    byte_597441A = 1;
  }
  v5 = sub_2213CCC(MissionListViewManager___c__DisplayClass89_0_TypeInfo);
  MissionListViewManager___c__DisplayClass89_0___ctor((MissionListViewManager___c__DisplayClass89_0_o *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAct;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)endAct, v14, v15, v16, v17, v18, v19);
  v20 = System_String__Concat_75651716((System_String_o *)StringLiteral_6144/*"Effect/Talk/"*/, this->fields.useTreasureGetEffectName, 0);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass89_0__LoadTreasureGetEffect_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
  AssetManager__loadAssetStorage(v20, v21, 1, 0, 0);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_5974404 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974404 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
          if ( callbackFunc2 )
            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
              callbackFunc2->fields.method_code,
              callbackFunc2->fields.method);
          return;
        }
      }
LABEL_20:
      sub_2213CDC(gameObject, v7);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-28h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_5974407 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    this = (MissionListViewManager_o *)sub_2213A60(&Method_MissionListViewManager_CloseItemDetail__);
    byte_5974407 = 1;
  }
  resultEntity = 0;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v6 = resultEntity;
    v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v7, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0);
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v8);
    MissionInfoMaker__OpenCostumeReleaseDetail(v6, v7, v9);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974408 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager_CloseItemDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974408 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EquipMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v7 = entity;
    v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0);
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v9);
    MissionInfoMaker__OpenEquipDetail((EquipEntity_o *)v7, v8, v10);
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
  System_String_o *v11; // x1
  float v12; // s0

  if ( (byte_5974403 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    sub_2213A60(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_2213A60(&Method_MissionListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_5974403 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_38EE7FC *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_13:
    sub_2213CDC(ObjectList_object, v4);
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v7;
      MissionListViewObject__Init((MissionListViewObject_o *)Item, 4, v10, this->fields.listInDelay, 1, 0);
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
    v11 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    v12 = this->fields.listInDelay + 0.5;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v11, v12, 0);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5974402 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_2213A60(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_2213A60(&Method_MissionListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_5974402 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList_object = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetObjectList_object_(
                                                                     this,
                                                                     (const MethodInfo_38EE7FC *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_2213CDC(0, v8);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList_object,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v12, delay, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void MissionListViewManager__RequestListObject_55044436(
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_55044076(this, mode, v10);
}


void MissionListViewManager__SetMode_55044076(MissionListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t v10; // w1

  if ( (byte_5974401 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11840/*"RequestInto"*/);
    byte_5974401 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
      {
        sub_2213CDC(gameObject, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11840/*"RequestInto"*/,
      0.0,
      0);
  }
  else if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 3 )
      v10 = 3;
    else
      v10 = 2;
    MissionListViewManager__RequestListObject(this, v10, 0.0, v5);
  }
}


void MissionListViewManager__SetMode_55044380(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_55044076(this, mode, v11);
}


void MissionListViewManager__SetObjectItem(
        MissionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5974405 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewObject_TypeInfo);
    byte_5974405 = 1;
  }
  if ( obj
    && (naturalAligment = MissionListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 3 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  MissionListViewObject__Init_37506532((MissionListViewObject_o *)v7, v8, 1, 0);
}


void MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_c *v3; // x0
  float DEFAULT_FADE_TIME; // s0

  if ( (byte_5974417 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    byte_5974417 = 1;
  }
  if ( this->fields.isTreasureEffect && !this->fields.isEffect )
  {
    DEFAULT_FADE_TIME = 1.0;
    this->fields.FADEOUT_KIND = 2;
  }
  else
  {
    this->fields.FADEOUT_KIND = 1;
    v3 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
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
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  GiftAddEntity_o *v15; // x20
  int32_t giftId; // w8
  int giftIconId; // w8
  ScrTerminalListTop_c *v18; // x0
  int v19; // w9
  struct System_String_o **p_PRIZE_GET_NORMAL; // x8
  struct System_String_o *v21; // x1
  struct System_String_o *OverwriteTreasureEffectId; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_String_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_5974421 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GiftAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    byte_5974421 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventMissionEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftAddMaster___);
  if ( !eventMissionEntity || !Master_object )
    goto LABEL_33;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(
                         (GiftAddMaster_o *)Master_object,
                         eventMissionEntity->fields.giftId,
                         0);
  v15 = ValidPriorDataById;
  if ( ValidPriorDataById )
  {
    if ( ValidPriorDataById->fields.priority > 1 )
    {
      giftId = ValidPriorDataById->fields.giftId;
      if ( giftId == eventMissionEntity->fields.giftId && ValidPriorDataById->fields.priorGiftId != giftId )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftAddMaster___);
        if ( Master_object )
        {
          v15 = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Master_object, v15->fields.priorGiftId, 0);
          goto LABEL_15;
        }
LABEL_33:
        sub_2213CDC(Master_object, v6);
      }
    }
  }
LABEL_15:
  giftIconId = eventMissionEntity->fields.giftIconId;
  this->fields.giftIconId = giftIconId;
  if ( giftIconId >= 1 )
  {
    v18 = ScrTerminalListTop_TypeInfo;
    v19 = *(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1);
    if ( (unsigned int)giftIconId >= 4 )
    {
      if ( !v19 )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v8);
        v18 = ScrTerminalListTop_TypeInfo;
      }
      p_PRIZE_GET_NORMAL = &v18->static_fields->PRIZE_GET_NORMAL;
    }
    else
    {
      if ( !v19 )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v8);
        v18 = ScrTerminalListTop_TypeInfo;
      }
      p_PRIZE_GET_NORMAL = &v18->static_fields->TREASURE_GET_NORMAL;
    }
    v21 = *p_PRIZE_GET_NORMAL;
    this->fields.useTreasureGetEffectName = *p_PRIZE_GET_NORMAL;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.useTreasureGetEffectName,
      (int32_t)v21,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( v15 )
  {
    OverwriteTreasureEffectId = GiftAddEntity__GetOverwriteTreasureEffectId(v15, 0);
    if ( !OverwriteTreasureEffectId )
      OverwriteTreasureEffectId = this->fields.useTreasureGetEffectName;
    this->fields.useTreasureGetEffectName = OverwriteTreasureEffectId;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.useTreasureGetEffectName,
      (int32_t)OverwriteTreasureEffectId,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = GiftAddEntity__GetOverWriteTitleSprite(v15, 0);
    this->fields.overWriteTitleSpriteName = v29;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.overWriteTitleSpriteName,
      (int32_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
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
  struct MissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__95_0; // x23
  Il2CppObject *v13; // x24
  struct MissionListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5974420 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__95_0__);
    sub_2213A60(&MissionListViewManager___c_TypeInfo);
    byte_5974420 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = MissionListViewManager___c_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !*(&MissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo, v8);
    v9 = MissionListViewManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__95_0 = static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__95_0,
      v13,
      Method_MissionListViewManager___c__SetupMissionCondTransitionConfirmDialog_b__95_0__,
      0);
    v14 = MissionListViewManager___c_TypeInfo->static_fields;
    v14->__9__95_0 = _9__95_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__95_0, (int32_t)_9__95_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !v10 )
    sub_2213CDC(Instance, v8);
  CommonUI__OpenMissionNaviTransitionConfirmDialog(v10, listViewItem, this, 1, challengeBoardItemList, _9__95_0, 0);
}


void MissionListViewManager__SetupMissionCondTransitionDialog(
        MissionListViewManager_o *this,
        System_String_o *moveTo,
        System_Action_o *decideAction,
        System_String_o *confirmDialogMessage,
        const MethodInfo *method)
{
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  System_String_o *v18; // x22
  __int64 v19; // x1
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v24; // x25

  if ( (byte_597441F & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass94_0__SetupMissionCondTransitionDialog_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass94_0_TypeInfo);
    sub_2213A60(&StringLiteral_9051/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_9055/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_9053/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9054/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/);
    byte_597441F = 1;
  }
  v8 = sub_2213CCC(MissionListViewManager___c__DisplayClass94_0_TypeInfo);
  MissionListViewManager___c__DisplayClass94_0___ctor((MissionListViewManager___c__DisplayClass94_0_o *)v8, 0);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = decideAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)decideAction, v11, v12, v13, v14, v15, v16);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9055/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( System_String__IsNullOrEmpty(confirmDialogMessage, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9053/*"MISSION_NAVI_CONFIRM_DIALOG_MESSAGE"*/, 0);
    confirmDialogMessage = System_String__Format(v20, (Il2CppObject *)moveTo, 0);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9051/*"MISSION_NAVI_CONFIRM_DIALOG_CANCEL"*/, 0);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9054/*"MISSION_NAVI_CONFIRM_DIALOG_MOVE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass94_0__SetupMissionCondTransitionDialog_b__0__,
    0);
  if ( !Instance )
LABEL_14:
    sub_2213CDC(v9, v10);
  CommonUI__OpenConfirmDialog_37373532((CommonUI_o *)Instance, v18, confirmDialogMessage, v22, v21, 1, v24, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void MissionListViewManager__SetupTreasureGetEffect(
        MissionListViewManager_o *this,
        int32_t itemIconId,
        const MethodInfo *method)
{
  __int64 treasureGetAssetData; // x0
  __int64 v6; // x1
  Il2CppObject *Object_object__58532980; // x21
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_Transform_o *transform; // x22
  MissionListViewManager_o *v10; // x0
  const MethodInfo *v11; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *useTreasureGetEffectName; // x21
  ScrTerminalListTop_c *v20; // x0
  ScrTerminalListTop_c *v21; // x0
  System_String_o *v22; // x21
  QuestRewardBoxAction_o *questRewardBoxAction; // x8
  int32_t v24; // w1

  if ( (byte_597441B & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    byte_597441B = 1;
  }
  treasureGetAssetData = (__int64)this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_21;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)treasureGetAssetData,
                              this->fields.useTreasureGetEffectName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  treasureGetAssetData = (__int64)UnityEngine_Object__Instantiate_object_(
                                    Object_object__58532980,
                                    (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  v8 = (UnityEngine_GameObject_o *)treasureGetAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)treasureGetAssetData, 0);
  treasureGetAssetData = ((__int64 (__fastcall *)(MissionListViewManager_o *, const MethodInfo *))this->klass->vtable._13_GetRewardEffectParent.methodPtr)(
                           this,
                           this->klass->vtable._13_GetRewardEffectParent.method);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)treasureGetAssetData, 0);
  GameObjectExtensions__ResetTransform(v8, 0);
  MissionListViewManager__ApplyRewardEffectDepthOffset(v10, v8, v11);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v8,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRewardBoxAction,
    (int32_t)Component_object,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !this->fields.isTreasureEffect )
    goto LABEL_15;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v20 = ScrTerminalListTop_TypeInfo;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, *(_QWORD *)&itemIconId);
    v20 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v20->static_fields->PRIZE_GET_NORMAL, 0) )
  {
    v21 = ScrTerminalListTop_TypeInfo;
    v22 = this->fields.useTreasureGetEffectName;
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, *(_QWORD *)&itemIconId);
      v21 = ScrTerminalListTop_TypeInfo;
    }
    treasureGetAssetData = System_String__op_Inequality(v22, v21->static_fields->TREASURE_GET_NORMAL, 0);
  }
  else
  {
LABEL_15:
    treasureGetAssetData = 1;
  }
  questRewardBoxAction = this->fields.questRewardBoxAction;
  if ( !questRewardBoxAction )
LABEL_21:
    sub_2213CDC(treasureGetAssetData, *(_QWORD *)&itemIconId);
  if ( itemIconId == 3 )
    v24 = 2;
  else
    v24 = itemIconId == 2;
  QuestRewardBoxAction__Setup(questRewardBoxAction, v24, treasureGetAssetData & 1, 0);
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
  const MethodInfo *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Func_object__bool__o *v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  unsigned int MasterName_k__BackingField; // w9
  int v26; // w8
  GiftEntity_o *v27; // x20
  int32_t type; // w0
  Il2CppObject *Entity; // x20
  Il2CppObject *v30; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x22
  Il2CppObject *Instance; // x22
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v35; // x23
  __int64 v36; // x1
  GiftMaster_o *v37; // x22
  bool IsServantEquip; // w23
  __int64 v39; // x1
  Il2CppObject *v40; // x21
  ServantStatusDialog_EndDelegate_o *v41; // x22
  __int64 v42; // x1
  Il2CppObject *v43; // x20
  Il2CppObject *v44; // x21
  ServantStatusDialog_EndDelegate_o *v45; // x22
  const MethodInfo *v46; // x2
  __int64 v47; // x20
  struct System_String_o *v48; // x22
  int32_t v49; // w20
  ServantStatusDialog_EndDelegate_o *v50; // x22
  const MethodInfo *v51; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_5974406 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_2213A60(&System_Func_GiftEntity__bool__TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager_CloseCommandCodeDetail__);
    sub_2213A60(&Method_MissionListViewManager_CloseItemDetail__);
    sub_2213A60(&Method_MissionListViewManager_CloseServantStatusDetail__);
    sub_2213A60(&Method_MissionListViewManager_ShowRewardDetailInfo__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass69_0__ShowRewardDetailInfo_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass69_0_TypeInfo);
    byte_5974406 = 1;
  }
  v7 = Method_MissionListViewManager_ShowRewardDetailInfo__;
  if ( (*((_BYTE *)Method_MissionListViewManager_ShowRewardDetailInfo__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_MissionListViewManager_ShowRewardDetailInfo__);
  v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  if ( !selectItem )
    goto LABEL_52;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_52;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v35 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v35,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0);
    if ( !Instance )
      goto LABEL_52;
    CommonUI__OpenItemDetailDialog_37450192((CommonUI_o *)Instance, nameTxt, rewardExtraDetailTxt, v35, 0);
  }
  else if ( rewardType == 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
    v13 = selectItem->fields.eventMissionEnt;
    if ( !v13 || !Master_object )
      goto LABEL_52;
    Master_object = (GiftMaster_o *)GiftMaster__GetGiftListById(Master_object, v13->fields.giftId, 0);
    v14 = Master_object;
    if ( ignoreSubGiftEntity )
    {
      v15 = sub_2213CCC(MissionListViewManager___c__DisplayClass69_0_TypeInfo);
      MissionListViewManager___c__DisplayClass69_0___ctor((MissionListViewManager___c__DisplayClass69_0_o *)v15, 0);
      if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v16);
      Master_object = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity((GiftEntity_array *)v14, v16);
      if ( !v15 )
        goto LABEL_52;
      *(_QWORD *)(v15 + 16) = Master_object;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)Master_object, v17, v18, v19, v20, v21, v22);
      v23 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v15,
        Method_MissionListViewManager___c__DisplayClass69_0__ShowRewardDetailInfo_b__0__,
        0);
      v24 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v14,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      Master_object = (GiftMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                        v24,
                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v14 = Master_object;
    }
    if ( !v14 )
      goto LABEL_52;
    MasterName_k__BackingField = (unsigned int)v14->fields._MasterName_k__BackingField;
    v26 = this->fields.alphaAnimCnt % (int)MasterName_k__BackingField;
    if ( v26 >= MasterName_k__BackingField )
      sub_2213CE4(Master_object);
    v27 = (GiftEntity_o *)*((_QWORD *)&v14->fields.revision + v26);
    if ( !v27 )
      goto LABEL_52;
    type = v27->fields.type;
    if ( type == 2 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   v27->fields.objectId,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v31,
          (Il2CppObject *)this,
          (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
          0);
        if ( v30 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v30, (ItemEntity_o *)Entity, v31, 50, 0);
          return;
        }
      }
LABEL_52:
      sub_2213CDC(Master_object, v10);
    }
    if ( Gift__IsServant(type, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_52;
      Master_object = (GiftMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v27->fields.objectId,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_52;
      v37 = Master_object;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_object, 0);
      v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v41 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v41,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0);
        if ( !v40 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_37387092((CommonUI_o *)v40, 7, v27, v41, 0);
      }
      else
      {
        v47 = *(_QWORD *)&v37->fields._MasterKind_k__BackingField;
        v48 = v37->fields._MasterName_k__BackingField;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
        *(_QWORD *)&v52.fields.currentCryptoKey = v47;
        *(_QWORD *)&v52.fields.fakeValue = v48;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v52, 0);
        v50 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v50,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0);
        if ( !v40 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_37386528((CommonUI_o *)v40, 7, v49, v50, 0);
      }
    }
    else if ( Gift__IsCommandCode(v27->fields.type, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_52;
      v43 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              v27->fields.objectId,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v45 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v45,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseCommandCodeDetail__,
        0);
      if ( !v44 )
        goto LABEL_52;
      CommonUI__OpenServantEquipStatusDialog_37389176((CommonUI_o *)v44, 25, (CommandCodeEntity_o *)v43, 0, v45, 0, 0);
    }
    else if ( Gift__IsCostumeRelease(v27->fields.type, 0) )
    {
      MissionListViewManager__OpenCostumeReleaseDetail(this, v27->fields.objectId, v46);
    }
    else if ( Gift__IsEquip(v27->fields.type, 0) )
    {
      MissionListViewManager__OpenEquipDetail(this, v27->fields.objectId, v51);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  AvalonSceneManager_c *v32; // x8
  CommonUI_o *v33; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v35; // x21

  if ( (byte_597440D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass76_0__StartEventMissionClearItemAction_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass76_0_TypeInfo);
    byte_597440D = 1;
  }
  v8 = sub_2213CCC(MissionListViewManager___c__DisplayClass76_0_TypeInfo);
  MissionListViewManager___c__DisplayClass76_0___ctor((MissionListViewManager___c__DisplayClass76_0_o *)v8, 0);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = gifts;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)gifts, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 32) = afterDetail;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)afterDetail, v23, v24, v25, v26, v27, v28);
  MissionListViewManager__SetTresureEffect(this, v29);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = AvalonSceneManager_TypeInfo;
  v33 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v31);
    v32 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v32->static_fields->DEFAULT_FADE_TIME;
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass76_0__StartEventMissionClearItemAction_b__0__,
    0);
  if ( !v33 )
LABEL_9:
    sub_2213CDC(touchBlockObj, v10);
  CommonUI__maskFadeout(v33, 1, DEFAULT_FADE_TIME, v35, 0);
}


void MissionListViewManager__StartItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x20
  void *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Action_o **v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 *v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  EventRewardRootComponent_o *v34; // x21
  System_Action_o *v35; // x22
  __int64 v36; // x2
  __int64 naturalAligment; // x9
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // x8
  int32_t v41; // w21
  __int64 v42; // x1
  __int64 v43; // x8
  __int64 v44; // x9
  __int64 v45; // x8
  const MethodInfo *v46; // x4
  int v47; // w22
  Il2CppClass *klass; // x23
  void *monitor; // x24
  GetSvts_array *getSvtList; // x22
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  int32_t v53; // w23
  UnityEngine_Object_o *v54; // x22
  int64_t v55; // x22
  char v56; // w23
  bool Eff; // w0
  __int64 v58; // x1
  __int64 v59; // x8
  __int64 v60; // x9
  __int64 v61; // x8
  Il2CppClass *v62; // x23
  void *v63; // x24
  GetCommandCodes_array *getCommandCodeList; // x22
  __int64 v65; // x1
  const MethodInfo *v66; // x3
  int32_t v67; // w23
  const MethodInfo *v68; // x3
  __int64 v69; // x8
  __int64 v70; // x9
  __int64 v71; // x8
  const MethodInfo *v72; // x5
  ServantCostumeEntity_o *v73; // x8
  __int64 v74; // x1
  __int64 v75; // x8
  __int64 v76; // x9
  __int64 v77; // x8
  const MethodInfo *v78; // x5
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x8
  __int64 v82; // x1
  __int64 v83; // x8
  __int64 v84; // x9
  __int64 v85; // x8
  Il2CppObject *v86; // x0
  Il2CppObject *v87; // x21
  const MethodInfo *v88; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t v90; // w1
  int32_t v91; // w3
  GiftEntity_array *v92; // x2
  System_Action_o *v93; // x4
  System_Action_o *v94; // x21
  const MethodInfo *v95; // x3
  MasterMissionListViewManager_o *v96; // x0
  System_Action_o *v97; // x1
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // [xsp+0h] [xbp-70h]
  Il2CppObject *v100; // [xsp+8h] [xbp-68h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+10h] [xbp-60h] BYREF
  GetCommandCodes_o *v102; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v103; // [xsp+20h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_597440E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EquipMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass77_0__StartItemGetEffectAction_b__0__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass77_0__StartItemGetEffectAction_b__1__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass77_0_TypeInfo);
    byte_597440E = 1;
  }
  entity = 0;
  v103 = 0;
  data = 0;
  resultEntity = 0;
  v102 = 0;
  v100 = 0;
  v9 = sub_2213CCC(MissionListViewManager___c__DisplayClass77_0_TypeInfo);
  MissionListViewManager___c__DisplayClass77_0___ctor((MissionListViewManager___c__DisplayClass77_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_106;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = afterDetail;
  v18 = (System_Action_o **)(v9 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)afterDetail, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v9 + 32) = gifts;
  v25 = (__int64 *)(v9 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)gifts, v26, v27, v28, v29, v30, v31);
  v11 = *(_QWORD *)(v9 + 32);
  *(_DWORD *)(v9 + 40) = idx;
  if ( !v11 )
    goto LABEL_106;
  if ( *(_DWORD *)(v11 + 24) <= idx )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 72, 0) && this->fields.isEffect )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      v34 = (EventRewardRootComponent_o *)*((_QWORD *)Instance + 4);
      v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v9,
        Method_MissionListViewManager___c__DisplayClass77_0__StartItemGetEffectAction_b__0__,
        0);
      if ( !v34 )
        goto LABEL_106;
      naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
      if ( v34->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventRewardRootComponent_c *)v34->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_221405C(v34, EventRewardRootComponent_TypeInfo, v36);
        MasterMissionListViewManager__OpenOneResultDialog(v96, v97, v98);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(v34, v35, 0);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v18, v33);
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
    MissionListViewManager__CreateDisplayRewardList(this, (GiftEntity_array *)v11, v32);
LABEL_22:
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v11);
  v38 = *v25;
  if ( !*v25 )
    goto LABEL_106;
  v39 = *(int *)(v9 + 40);
  if ( (unsigned int)v39 >= *(_DWORD *)(v38 + 24) )
    goto LABEL_107;
  v40 = *(_QWORD *)(v38 + 8 * v39 + 32);
  if ( !v40 )
    goto LABEL_106;
  v41 = *(_DWORD *)(v40 + 20);
  if ( Gift__IsServant(v41, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
    Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    v43 = *v25;
    if ( !*v25 )
      goto LABEL_106;
    v44 = *(int *)(v9 + 40);
    if ( (unsigned int)v44 < *(_DWORD *)(v43 + 24) )
    {
      v45 = *(_QWORD *)(v43 + 8 * v44 + 32);
      if ( !v45 || !Instance )
        goto LABEL_106;
      Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &entity,
                           *(_DWORD *)(v45 + 24),
                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_106;
        Instance = (void *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0);
        if ( !entity )
          goto LABEL_106;
        v47 = (int)Instance;
        Instance = (void *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0);
        if ( ((v47 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_106;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          getSvtList = this->fields.getSvtList;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
          *(_QWORD *)&v106.fields.currentCryptoKey = klass;
          *(_QWORD *)&v106.fields.fakeValue = monitor;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v106, 0);
          if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v51);
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v53, v52) )
          {
            Instance = entity;
            if ( !entity )
              goto LABEL_106;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_106;
              v54 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 174);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
              if ( UnityEngine_Object__op_Inequality(v54, 0, 0) )
              {
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_106;
                Instance = (void *)*((_QWORD *)Instance + 174);
                if ( !Instance )
                  goto LABEL_106;
                MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)Instance, 0);
              }
            }
            Instance = data;
            this->fields.isEffect = 1;
            if ( Instance )
            {
              v55 = *((_QWORD *)Instance + 2);
              v56 = *((_BYTE *)Instance + 24);
              Eff = GetSvts__isDoGetEff((GetSvts_o *)Instance, 0);
LABEL_69:
              MissionListViewManager__StartRewardGetEffect(
                this,
                v55,
                v56,
                Eff,
                v41,
                *(GiftEntity_array **)(v9 + 32),
                *(_DWORD *)(v9 + 40),
                *(System_Action_o **)(v9 + 24),
                v99);
              return;
            }
LABEL_106:
            sub_2213CDC(Instance, v11);
          }
        }
      }
      goto LABEL_105;
    }
LABEL_107:
    sub_2213CE4(Instance);
  }
  if ( Gift__IsCommandCode(v41, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58);
    Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v59 = *v25;
    if ( !*v25 )
      goto LABEL_106;
    v60 = *(int *)(v9 + 40);
    if ( (unsigned int)v60 < *(_DWORD *)(v59 + 24) )
    {
      v61 = *(_QWORD *)(v59 + 8 * v60 + 32);
      if ( !v61 || !Instance )
        goto LABEL_106;
      Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &v103,
                           *(_DWORD *)(v61 + 24),
                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v103 )
          goto LABEL_106;
        v62 = v103[1].klass;
        v63 = v103[1].monitor;
        getCommandCodeList = this->fields.getCommandCodeList;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
        *(_QWORD *)&v107.fields.currentCryptoKey = v62;
        *(_QWORD *)&v107.fields.fakeValue = v63;
        v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v107, 0);
        if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v65);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v102, v67, v66) )
        {
          Instance = v102;
          this->fields.isEffect = 1;
          if ( Instance )
          {
            v55 = *((_QWORD *)Instance + 2);
            v56 = *((_BYTE *)Instance + 24);
            Eff = GetCommandCodes__isDoGetEff((GetCommandCodes_o *)Instance, 0);
            goto LABEL_69;
          }
          goto LABEL_106;
        }
      }
      goto LABEL_105;
    }
    goto LABEL_107;
  }
  Instance = (void *)Gift__IsCostumeRelease(v41, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v69 = *v25;
    if ( !*v25 )
      goto LABEL_106;
    v70 = *(int *)(v9 + 40);
    if ( (unsigned int)v70 >= *(_DWORD *)(v69 + 24) )
      goto LABEL_107;
    v71 = *(_QWORD *)(v69 + 8 * v70 + 32);
    if ( !v71 )
      goto LABEL_106;
    Instance = (void *)MissionListViewManager__TryGetServantCostumeEntity(
                         (MissionListViewManager_o *)Instance,
                         &resultEntity,
                         *(_DWORD *)(v71 + 24),
                         v68);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v73 = resultEntity;
      this->fields.isEffect = 1;
      if ( !v73 )
        goto LABEL_106;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        this,
        v73->fields.name,
        *(GiftEntity_array **)(v9 + 32),
        *(_DWORD *)(v9 + 40),
        *(System_Action_o **)(v9 + 24),
        v72);
      return;
    }
LABEL_105:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v9 + 32),
      *(_DWORD *)(v9 + 40) + 1,
      *(System_Action_o **)(v9 + 24),
      v46);
    return;
  }
  if ( !Gift__IsEquip(v41, 0) )
  {
    if ( Gift__IsItem(v41, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v82);
      Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
      v83 = *v25;
      if ( !*v25 )
        goto LABEL_106;
      v84 = *(int *)(v9 + 40);
      if ( (unsigned int)v84 < *(_DWORD *)(v83 + 24) )
      {
        v85 = *(_QWORD *)(v83 + 8 * v84 + 32);
        if ( !v85 || !Instance )
          goto LABEL_106;
        v86 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_DWORD *)(v85 + 24),
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v86 )
        {
          v87 = v86;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_106;
          Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v87[1].klass, 0);
          dispRewardInfoList = this->fields.dispRewardInfoList;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !dispRewardInfoList )
              goto LABEL_106;
            if ( !dispRewardInfoList->fields._size )
            {
              v90 = (int32_t)v87[1].klass;
              v91 = *(_DWORD *)(v9 + 40);
              v93 = *(System_Action_o **)(v9 + 24);
              v92 = *(GiftEntity_array **)(v9 + 32);
              this->fields.isEffect = 1;
              MissionListViewManager__StartRewardItemGetEffect(this, v90, v92, v91, v93, v88);
              return;
            }
          }
          else if ( !dispRewardInfoList )
          {
            goto LABEL_106;
          }
          if ( dispRewardInfoList->fields._size >= 1 )
          {
            v94 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v94,
              (Il2CppObject *)v9,
              Method_MissionListViewManager___c__DisplayClass77_0__StartItemGetEffectAction_b__1__,
              0);
            MissionListViewManager__LoadItemGetEffects(this, 0, v94, v95);
            return;
          }
        }
        goto LABEL_105;
      }
      goto LABEL_107;
    }
    goto LABEL_105;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v74);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EquipMaster___);
  v75 = *v25;
  if ( !*v25 )
    goto LABEL_106;
  v76 = *(int *)(v9 + 40);
  if ( (unsigned int)v76 >= *(_DWORD *)(v75 + 24) )
    goto LABEL_107;
  v77 = *(_QWORD *)(v75 + 8 * v76 + 32);
  if ( !v77 || !Instance )
    goto LABEL_106;
  Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       &v100,
                       *(_DWORD *)(v77 + 24),
                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_105;
  v79 = *(_QWORD *)(v9 + 32);
  this->fields.isEffect = 1;
  if ( !v79 )
    goto LABEL_106;
  v80 = *(int *)(v9 + 40);
  if ( (unsigned int)v80 >= *(_DWORD *)(v79 + 24) )
    goto LABEL_107;
  v81 = *(_QWORD *)(v79 + 8 * v80 + 32);
  if ( !v81 )
    goto LABEL_106;
  MissionListViewManager__StartRewardEquipGetEffect(
    this,
    *(_DWORD *)(v81 + 24),
    (GiftEntity_array *)v79,
    v80,
    *v18,
    v78);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v41; // x19
  System_Action_o *v42; // x22

  if ( (byte_5974411 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass80_0__StartRewardCostumeReleaseGetEffect_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass80_0_TypeInfo);
    byte_5974411 = 1;
  }
  v11 = sub_2213CCC(MissionListViewManager___c__DisplayClass80_0_TypeInfo);
  MissionListViewManager___c__DisplayClass80_0___ctor((MissionListViewManager___c__DisplayClass80_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_7;
  *(_QWORD *)(v11 + 16) = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)afterDetail, v32, v33, v34, v35, v36, v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v41 = (CommonUI_o *)Instance,
        v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass80_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0),
        !v41) )
  {
LABEL_7:
    sub_2213CDC(touchBlockObj, v13);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  QuestRewardInfo_o *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  _DWORD *v39; // x8
  __int64 v40; // x9
  __int64 v41; // x10
  __int64 v42; // x9
  const MethodInfo_47A29F8 *v43; // x0
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v47; // x19
  System_Action_o *v48; // x22

  if ( (byte_5974410 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&QuestRewardInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardEquipGetEffect_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass79_0_TypeInfo);
    byte_5974410 = 1;
  }
  v11 = sub_2213CCC(MissionListViewManager___c__DisplayClass79_0_TypeInfo);
  MissionListViewManager___c__DisplayClass79_0___ctor((MissionListViewManager___c__DisplayClass79_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)gifts, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)afterDetail, v26, v27, v28, v29, v30, v31);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0);
  v32 = (QuestRewardInfo_o *)sub_2213CCC(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v32, 0);
  *(_QWORD *)(v11 + 16) = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = *(_DWORD **)(v11 + 16);
  if ( !v39 )
    goto LABEL_11;
  v40 = *(_QWORD *)(v11 + 32);
  v39[4] = 5;
  v39[5] = equipId;
  if ( !v40 )
    goto LABEL_11;
  v41 = *(int *)(v11 + 40);
  if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 24) )
    sub_2213CE4(touchBlockObj);
  v42 = *(_QWORD *)(v40 + 8 * v41 + 32);
  if ( !v42 )
    goto LABEL_11;
  v43 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  v39[6] = *(_DWORD *)(v42 + 28);
  Instance = SingletonMonoBehaviour_object___get_Instance(v43);
  FADEOUT_KIND = this->fields.FADEOUT_KIND;
  FADEOUT_TIME = this->fields.FADEOUT_TIME;
  v47 = (CommonUI_o *)Instance;
  v48 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass79_0__StartRewardEquipGetEffect_b__0__,
    0);
  if ( !v47 )
LABEL_11:
    sub_2213CDC(touchBlockObj, v13);
  CommonUI__maskFadeout(v47, FADEOUT_KIND, FADEOUT_TIME, v48, 0);
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v41; // x19
  System_Action_o *v42; // x21

  if ( (byte_5974413 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass82_0__StartRewardGetEffect_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass82_0_TypeInfo);
    byte_5974413 = 1;
  }
  v17 = sub_2213CCC(MissionListViewManager___c__DisplayClass82_0_TypeInfo);
  MissionListViewManager___c__DisplayClass82_0___ctor((MissionListViewManager___c__DisplayClass82_0_o *)v17, 0);
  if ( !v17 )
    goto LABEL_7;
  *(_DWORD *)(v17 + 16) = giftType;
  *(_QWORD *)(v17 + 24) = userSvtID;
  *(_QWORD *)(v17 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 32), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v17 + 40) = isDoEffect;
  *(_BYTE *)(v17 + 41) = isNew;
  *(_QWORD *)(v17 + 48) = gifts;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 48), (int32_t)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 64) = afterDetail;
  *(_DWORD *)(v17 + 56) = idx;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 64), (int32_t)afterDetail, v32, v33, v34, v35, v36, v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v41 = (CommonUI_o *)Instance,
        v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v17,
          Method_MissionListViewManager___c__DisplayClass82_0__StartRewardGetEffect_b__0__,
          0),
        !v41) )
  {
LABEL_7:
    sub_2213CDC(touchBlockObj, v19);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  QuestRewardInfo_o *v33; // x24
  __int64 *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  _DWORD *v41; // x8
  __int64 v42; // x9
  __int64 v43; // x10
  __int64 v44; // x9
  const MethodInfo_47A29F8 *v45; // x0
  System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  const MethodInfo *v47; // x4
  intptr_t m_CachedPtr; // x8
  _QWORD *v49; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v51; // x8
  __int64 v52; // x9
  int v53; // w10
  __int64 v54; // x12
  int v55; // w11
  int v56; // w15
  __int64 v57; // x17
  __int64 v58; // x16
  __int64 v59; // x1
  Il2CppObject *v60; // x19
  AvalonSceneManager_c *v61; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v63; // x21

  if ( (byte_5974412 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&QuestRewardInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass81_0__StartRewardItemGetEffect_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass81_0_TypeInfo);
    byte_5974412 = 1;
  }
  v11 = sub_2213CCC(MissionListViewManager___c__DisplayClass81_0_TypeInfo);
  MissionListViewManager___c__DisplayClass81_0___ctor((MissionListViewManager___c__DisplayClass81_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_33;
  *(_QWORD *)(v11 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = gifts;
  v20 = (__int64 *)(v11 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)gifts, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v11 + 48) = idx;
  *(_QWORD *)(v11 + 56) = afterDetail;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), (int32_t)afterDetail, v27, v28, v29, v30, v31, v32);
  v33 = (QuestRewardInfo_o *)sub_2213CCC(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v33, 0);
  *(_QWORD *)(v11 + 32) = v33;
  v34 = (__int64 *)(v11 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v33, v35, v36, v37, v38, v39, v40);
  v41 = *(_DWORD **)(v11 + 32);
  if ( !v41 )
    goto LABEL_33;
  v42 = *v20;
  v41[4] = 2;
  v41[5] = itemId;
  if ( !v42 )
    goto LABEL_33;
  v43 = *(int *)(v11 + 48);
  if ( (unsigned int)v43 >= *(_DWORD *)(v42 + 24) )
    goto LABEL_34;
  v44 = *(_QWORD *)(v42 + 8 * v43 + 32);
  if ( !v44 )
    goto LABEL_33;
  v45 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  v41[6] = *(_DWORD *)(v44 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance(v45);
  if ( !Instance )
    goto LABEL_33;
  Instance = (CommonUI_o *)CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v11 + 32), 0);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  *(_DWORD *)(v11 + 16) = (_DWORD)Instance;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_33;
  if ( System_Collections_Generic_List_int___Contains(
         rewardItemGetEffectPlayList,
         (int32_t)Instance,
         (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v11 + 40),
      *(_DWORD *)(v11 + 48) + 1,
      *(System_Action_o **)(v11 + 56),
      v47);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v13 = *(unsigned int *)(v11 + 16);
  v49 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_33;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      v13,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v13;
  }
  v51 = *v34;
  if ( !*v34 )
    goto LABEL_33;
  v52 = *v20;
  *(_DWORD *)(v51 + 24) = 0;
  if ( !v52 )
    goto LABEL_33;
  v53 = *(_DWORD *)(v52 + 24);
  if ( v53 >= 1 )
  {
    v54 = *(int *)(v11 + 48);
    v55 = 0;
    v56 = 0;
    while ( v53 != v55 && (unsigned int)v54 < v53 )
    {
      v57 = *(_QWORD *)(v52 + 8 * v54 + 32);
      if ( !v57 )
        goto LABEL_33;
      v58 = *(_QWORD *)(v52 + 8LL * v55 + 32);
      if ( !v58 )
        goto LABEL_33;
      Instance = (CommonUI_o *)*(unsigned int *)(v58 + 24);
      if ( *(_DWORD *)(v57 + 24) == (_DWORD)Instance )
      {
        v56 += *(_DWORD *)(v58 + 28);
        *(_DWORD *)(v51 + 24) = v56;
      }
      if ( (v53 & ~(v53 >> 31)) == ++v55 )
        goto LABEL_28;
    }
LABEL_34:
    sub_2213CE4(Instance);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v61 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v59);
    v61 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v61->static_fields->DEFAULT_FADE_TIME;
  v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass81_0__StartRewardItemGetEffect_b__0__,
    0);
  if ( !v60 )
LABEL_33:
    sub_2213CDC(Instance, v13);
  CommonUI__maskFadeout((CommonUI_o *)v60, 1, DEFAULT_FADE_TIME, v63, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *Item; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  const MethodInfo *v33; // x4
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  ScrTerminalListTop_c *v37; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v39; // x0
  System_String_o *v40; // x21
  __int64 v41; // x1
  Il2CppObject *Object_object__58532980; // x21
  UnityEngine_GameObject_o *v43; // x21
  UnityEngine_Transform_o *transform; // x22
  MissionListViewManager_o *v45; // x0
  const MethodInfo *v46; // x2
  Il2CppObject *Component_object; // x0
  QuestRewardItemAction_o **v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  QuestRewardItemAction_o *v55; // x22
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  ScrTerminalListTop_c *v62; // x0
  System_String_o *useTreasureGetEffectName; // x22
  QuestRewardItemAction_o *v64; // x21
  MissionNaviTransitionBoardItem_o *p_titleSpriteName; // x0
  struct System_String_o *overWriteTitleSpriteName; // x1
  QuestRewardItemAction_o *v67; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v71; // x19
  System_Action_o *v72; // x22
  int v73; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5974419 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass88_0__StartRewardItemGetEffectAfterTresureEffect_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass88_0_TypeInfo);
    byte_5974419 = 1;
  }
  v9 = sub_2213CCC(MissionListViewManager___c__DisplayClass88_0_TypeInfo);
  MissionListViewManager___c__DisplayClass88_0___ctor((MissionListViewManager___c__DisplayClass88_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = gifts;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)gifts, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 56) = afterDetail;
  *(_DWORD *)(v9 + 48) = idx;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), (int32_t)afterDetail, v24, v25, v26, v27, v28, v29);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Item = System_Collections_Generic_List_object___get_Item(
           dispRewardInfoList,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetItemGetEffectId(
                                                                      this,
                                                                      (QuestRewardInfo_o *)Item,
                                                                      v31);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  *(_DWORD *)(v9 + 16) = (_DWORD)dispRewardInfoList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_36;
  if ( System_Collections_Generic_List_int___Contains(
         rewardItemGetEffectPlayList,
         (int32_t)dispRewardInfoList,
         (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  items = dispRewardInfoList->fields._items;
  v11 = *(unsigned int *)(v9 + 16);
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
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    dispRewardInfoList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = v11;
  }
  v37 = ScrTerminalListTop_TypeInfo;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v11);
    v37 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v37->static_fields->ITEM_GET_EFFECT_NAME;
  v73 = *(_DWORD *)(v9 + 16);
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v73);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__Format(ITEM_GET_EFFECT_NAME, v39, 0);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_36;
  v40 = (System_String_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemGetAssetDatas,
                                                                      *(_DWORD *)(v9 + 16),
                                                                      (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)dispRewardInfoList,
                              v40,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__58532980,
                                                                      (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v43 = (UnityEngine_GameObject_o *)dispRewardInfoList;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dispRewardInfoList, 0);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(MissionListViewManager_o *, const MethodInfo *))this->klass->vtable._13_GetRewardEffectParent.methodPtr)(
                                                                      this,
                                                                      this->klass->vtable._13_GetRewardEffectParent.method);
  if ( !transform )
    goto LABEL_36;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)dispRewardInfoList, 0);
  GameObjectExtensions__ResetTransform(v43, 0);
  MissionListViewManager__ApplyRewardEffectDepthOffset(v45, v43, v46);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v43,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v9 + 24) = Component_object;
  v48 = (QuestRewardItemAction_o **)(v9 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)Component_object, v49, v50, v51, v52, v53, v54);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_36;
  v55 = *v48;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                      dispRewardInfoList,
                                                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
  if ( !v55 )
    goto LABEL_36;
  QuestRewardItemAction__Setup_43403752(v55, (QuestRewardInfo_array *)dispRewardInfoList, *(_DWORD *)(v9 + 16) == 0, 0);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(
                                                                      this->fields.overWriteTitleSpriteName,
                                                                      0);
  if ( ((unsigned __int8)dispRewardInfoList & 1) == 0 )
  {
    v67 = *v48;
    if ( !*v48 )
      goto LABEL_36;
    overWriteTitleSpriteName = this->fields.overWriteTitleSpriteName;
    p_titleSpriteName = (MissionNaviTransitionBoardItem_o *)&v67->fields.titleSpriteName;
    v67->fields.titleSpriteName = overWriteTitleSpriteName;
    goto LABEL_33;
  }
  v62 = ScrTerminalListTop_TypeInfo;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v11);
    v62 = ScrTerminalListTop_TypeInfo;
  }
  if ( System_String__op_Equality(useTreasureGetEffectName, v62->static_fields->PRIZE_GET_NORMAL, 0) )
  {
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)ScrTerminalListTop_TypeInfo;
    v64 = *v48;
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v11);
    if ( v64 )
    {
      p_titleSpriteName = (MissionNaviTransitionBoardItem_o *)&v64->fields.titleSpriteName;
      overWriteTitleSpriteName = ScrTerminalListTop_TypeInfo->static_fields->PRIZE_ITEM_GET_TITLE;
      v64->fields.titleSpriteName = overWriteTitleSpriteName;
LABEL_33:
      sub_2213A04(p_titleSpriteName, (int32_t)overWriteTitleSpriteName, v56, v57, v58, v59, v60, v61);
      goto LABEL_34;
    }
LABEL_36:
    sub_2213CDC(dispRewardInfoList, v11);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  FADEOUT_KIND = this->fields.FADEOUT_KIND;
  FADEOUT_TIME = this->fields.FADEOUT_TIME;
  v71 = (CommonUI_o *)Instance;
  v72 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v72,
    (Il2CppObject *)v9,
    Method_MissionListViewManager___c__DisplayClass88_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
    0);
  if ( !v71 )
    goto LABEL_36;
  CommonUI__maskFadeout(v71, FADEOUT_KIND, FADEOUT_TIME, v72, 0);
}


void MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v26; // x19
  System_Action_o *v27; // x22

  if ( (byte_5974414 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass83_0__StartSvtListGetEffect_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass83_0_TypeInfo);
    byte_5974414 = 1;
  }
  v7 = sub_2213CCC(MissionListViewManager___c__DisplayClass83_0_TypeInfo);
  MissionListViewManager___c__DisplayClass83_0___ctor((MissionListViewManager___c__DisplayClass83_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = callCnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v7 + 24) < SLODWORD(getSvtList->max_length) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v26 = (CommonUI_o *)Instance;
    v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v7,
      Method_MissionListViewManager___c__DisplayClass83_0__StartSvtListGetEffect_b__0__,
      0);
    if ( v26 )
    {
      CommonUI__maskFadeout(v26, FADEOUT_KIND, FADEOUT_TIME, v27, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(v8, v9);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v21; // x20

  if ( (byte_5974415 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass84_0__SvtEffCaller_b__0__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass84_0_TypeInfo);
    byte_5974415 = 1;
  }
  v5 = sub_2213CCC(MissionListViewManager___c__DisplayClass84_0_TypeInfo);
  MissionListViewManager___c__DisplayClass84_0___ctor((MissionListViewManager___c__DisplayClass84_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  svtRewardComp = this->fields.svtRewardComp;
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass84_0__SvtEffCaller_b__0__,
    0);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
  if ( !svtRewardComp )
LABEL_8:
    sub_2213CDC(v6, v7);
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
  __int64 v11; // x1
  int32_t v12; // w21
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = objectId;
  if ( (byte_5974416 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974416 = 1;
  }
  Master_object = System_Int32__ToString((int32_t)&v14, 0);
  if ( !Master_object )
    goto LABEL_8;
  v7 = Master_object;
  v8 = System_String__Substring_75702848(Master_object, 0, Master_object->fields._stringLength - 2, 0);
  v9 = System_Int32__Parse(v8, 0);
  v10 = System_String__Substring(v7, v7->fields._stringLength - 2, 0);
  v12 = System_Int32__Parse(v10, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_object )
LABEL_8:
    sub_2213CDC(Master_object, v6);
  return ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, resultEntity, v9, v12, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  MissionListViewItem_o **v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *v29; // x23
  System_Collections_Generic_List_object__o **v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int klass_high; // w8
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_List_object__o *v46; // x8
  struct System_Object_array *items; // x9
  _QWORD *v48; // x10
  __int64 size; // x11
  MissionListViewItem_o *v50; // x1
  Il2CppClass **v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  bool v58; // w23
  intptr_t *v59; // x21
  BalanceConfig_c *v60; // x0
  EventMissionConditionEntity_o *NotClearCondInfo; // x0
  int condType; // w8
  __int64 *v63; // x8
  System_Action_o *v64; // x21
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 sortIndex; // x10
  __int64 v74; // x8
  System_Action_o *v75; // x0
  intptr_t v76; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_597441E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass93_0__TrySetupMissionCondNaviAction_b__0__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass93_0__TrySetupMissionCondNaviAction_b__1__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass93_0__TrySetupMissionCondNaviAction_b__2__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass93_0_TypeInfo);
    sub_2213A60(&StringLiteral_4745/*"Combine/ServantSkillCombine"*/);
    sub_2213A60(&StringLiteral_4743/*"Combine/ServantEQCombine"*/);
    sub_2213A60(&StringLiteral_4741/*"Combine/ClassBoard"*/);
    sub_2213A60(&StringLiteral_4744/*"Combine/ServantLimitCountUp"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13720/*"Summon/FRIEND_POINT"*/);
    sub_2213A60(&StringLiteral_4742/*"Combine/ServantCombine"*/);
    byte_597441E = 1;
  }
  entity = 0;
  v7 = sub_2213CCC(MissionListViewManager___c__DisplayClass93_0_TypeInfo);
  MissionListViewManager___c__DisplayClass93_0___ctor((MissionListViewManager___c__DisplayClass93_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_65;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = (MissionListViewItem_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)item, v17, v18, v19, v20, v21, v22);
  *naviAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)naviAction, 0, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *(_QWORD *)(v7 + 32) = v29;
  v30 = (System_Collections_Generic_List_object__o **)(v7 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v29, v31, v32, v33, v34, v35, v36);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37);
  Master_object = (MissionListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MissionNaviTransitionMaster___);
  if ( !*v16 )
    goto LABEL_65;
  eventMissionEnt = (*v16)->fields.eventMissionEnt;
  if ( !eventMissionEnt || !Master_object )
    goto LABEL_65;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         eventMissionEnt->fields.id,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int__TryGetEntity__) )
  {
    Master_object = (MissionListViewItem_o *)entity;
    if ( !entity )
      goto LABEL_65;
    klass_high = HIDWORD(entity[1].klass);
    if ( klass_high <= 2 )
    {
      if ( klass_high == 1 )
      {
        v58 = MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
                (MissionNaviTransitionEntity_o *)entity,
                *v16,
                (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
                0);
        if ( !v58 )
        {
          v64 = 0;
LABEL_63:
          *naviAction = v64;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)naviAction, (int32_t)v64, v52, v53, v54, v55, v56, v57);
          return v58;
        }
        v59 = &Method_MissionListViewManager___c__DisplayClass93_0__TrySetupMissionCondNaviAction_b__2__;
LABEL_62:
        v75 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        v76 = *v59;
        v64 = v75;
        System_Action___ctor(v75, (Il2CppObject *)v7, v76, 0);
        goto LABEL_63;
      }
      if ( klass_high == 2
        && MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
             (MissionNaviTransitionEntity_o *)entity,
             *v16,
             (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
             0) )
      {
        goto LABEL_50;
      }
      goto LABEL_25;
    }
    if ( klass_high == 3 )
    {
      if ( MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
             (MissionNaviTransitionEntity_o *)entity,
             *v16,
             (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **)(v7 + 32),
             0) )
      {
        goto LABEL_50;
      }
    }
    else if ( klass_high == 4 )
    {
      Master_object = (MissionListViewItem_o *)MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem(
                                                 (MissionNaviTransitionEntity_o *)entity,
                                                 *v16,
                                                 0);
      v46 = *v30;
      if ( !*v30 )
        goto LABEL_65;
      items = v46->fields._items;
      v48 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
      ++v46->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v46->fields._size;
      v50 = Master_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v46,
          (Il2CppObject *)Master_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v46->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v50;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)v50, v40, v41, v42, v43, v44, v45);
      }
LABEL_50:
      v59 = &Method_MissionListViewManager___c__DisplayClass93_0__TrySetupMissionCondNaviAction_b__1__;
LABEL_61:
      v58 = 1;
      goto LABEL_62;
    }
  }
LABEL_25:
  v60 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
    v60 = BalanceConfig_TypeInfo;
  }
  if ( !v60->static_fields->IsMissionNaviAutoClassify )
    return 0;
  Master_object = *v16;
  if ( !*v16 )
    goto LABEL_65;
  NotClearCondInfo = MissionListViewItem__GetNotClearCondInfo(Master_object, (const MethodInfo *)v9);
  if ( !NotClearCondInfo )
    return 0;
  condType = NotClearCondInfo->fields.condType;
  if ( condType <= 141 )
  {
    v58 = 0;
    if ( condType > 7 )
    {
      if ( condType == 8 )
      {
        v63 = &StringLiteral_13720/*"Summon/FRIEND_POINT"*/;
      }
      else
      {
        if ( condType != 141 )
          return v58;
        v63 = &StringLiteral_4743/*"Combine/ServantEQCombine"*/;
      }
LABEL_53:
      v9 = MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_37515768(
             (System_String_o *)*v63,
             0,
             (System_String_o *)StringLiteral_1/*""*/,
             (System_String_o *)StringLiteral_1/*""*/,
             *v16,
             0);
      if ( v9 )
      {
        Master_object = (MissionListViewItem_o *)*v30;
        if ( *v30 )
        {
          v71 = *(_QWORD *)&Master_object->fields.selectNum;
          v72 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
          ++Master_object->fields.loopIndex;
          if ( v71 )
          {
            sortIndex = Master_object->fields.sortIndex;
            if ( (unsigned int)sortIndex >= *(_DWORD *)(v71 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v9,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v74 = v71 + 8 * sortIndex;
              Master_object->fields.sortIndex = sortIndex + 1;
              *(_QWORD *)(v74 + 32) = v9;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 32), (int32_t)v9, v65, v66, v67, v68, v69, v70);
            }
            v59 = &Method_MissionListViewManager___c__DisplayClass93_0__TrySetupMissionCondNaviAction_b__0__;
            goto LABEL_61;
          }
        }
LABEL_65:
        sub_2213CDC(Master_object, v9);
      }
      return 0;
    }
    if ( condType == 6 )
      goto LABEL_47;
    if ( condType != 7 )
      return v58;
LABEL_51:
    v63 = &StringLiteral_4744/*"Combine/ServantLimitCountUp"*/;
    goto LABEL_53;
  }
  v58 = 0;
  if ( condType > 187 )
  {
    if ( condType == 188 )
      goto LABEL_47;
    if ( condType != 189 )
    {
      if ( condType != 190 )
        return v58;
      goto LABEL_43;
    }
    goto LABEL_51;
  }
  switch ( condType )
  {
    case 149:
LABEL_47:
      v63 = &StringLiteral_4742/*"Combine/ServantCombine"*/;
      goto LABEL_53;
    case 174:
LABEL_43:
      v63 = &StringLiteral_4745/*"Combine/ServantSkillCombine"*/;
      goto LABEL_53;
    case 187:
      v63 = &StringLiteral_4741/*"Combine/ClassBoard"*/;
      goto LABEL_53;
  }
  return v58;
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
  struct AlphaTransitionCalculator_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  float realtimeSinceStartup; // s0
  float v13; // s0
  float v14; // s8
  float alphaAnimTimeOld; // s9
  MissionListViewManager_c *v16; // x0
  __int64 v17; // x1
  float v18; // s0
  int32_t alphaAnimCnt; // w8
  MissionListViewManager_c *v20; // x0
  int32_t v21; // w21
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v23; // w21

  if ( (byte_59743FF & 1) == 0 )
  {
    sub_2213A60(&MissionListViewManager_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    byte_59743FF = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v4 = MissionListViewManager__CreateRewardIconAlphaCalculator(0, method);
    this->fields.rewardIconAlphaCalculator = v4;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rewardIconAlphaCalculator,
      (int32_t)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
    if ( !rewardIconAlphaCalculator )
      goto LABEL_24;
    AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !rewardIconAlphaCalculator )
      goto LABEL_24;
  }
  v13 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v13;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0) )
  {
    v14 = UnityEngine_Time__get_realtimeSinceStartup(0);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v16 = MissionListViewManager_TypeInfo;
    if ( !*(&MissionListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, v11);
      v16 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v14 - alphaAnimTimeOld) >= v16->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
      if ( !rewardIconAlphaCalculator )
        goto LABEL_24;
      AlphaTransitionCalculator__StartFadeOut(rewardIconAlphaCalculator, 0);
    }
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(rewardIconAlphaCalculator, 0) )
    return;
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
LABEL_24:
    sub_2213CDC(rewardIconAlphaCalculator, v11);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0);
  v18 = UnityEngine_Time__get_realtimeSinceStartup(0);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v18;
  v20 = MissionListViewManager_TypeInfo;
  v21 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, v17);
    v20 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v20->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v21 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v23 = this->fields.alphaAnimCnt;
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v17);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v23 - ALPHA_ANIM_COUNT_RESET_VAL;
  }
  ((void (__fastcall *)(MissionListViewManager_o *, const MethodInfo *))this->klass->vtable._14_OnChangeAlphaAnim.methodPtr)(
    this,
    this->klass->vtable._14_OnChangeAlphaAnim.method);
  this->fields._IsChangeMissionNaviDialogAnim_k__BackingField = 1;
}


void MissionListViewManager__add_callbackFunc2(
        MissionListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  MissionListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_59743FC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_59743FC = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v9 = v8 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  MissionListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_59743FD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_59743FD = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v9 = v8 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7);
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

  if ( (byte_596A095 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewManager___c_TypeInfo);
    byte_596A095 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MissionListViewManager___c_o *)v1;
  sub_2213A04(MissionListViewManager___c_TypeInfo->static_fields, v1);
}


void MissionListViewManager___c___ctor(MissionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MissionListViewManager___c___CreateDisplayRewardList_b__87_0(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return !Gift__IsItem_47387928(x->fields.type, 0);
}


bool MissionListViewManager___c___CreateDisplayRewardList_b__87_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return Gift__IsItem_47387928(x->fields.type, 0);
}


void MissionListViewManager___c___SetupMissionCondTransitionConfirmDialog_b__95_0(
        MissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A096 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_596A096 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}


void MissionListViewManager___c__DisplayClass69_0___ctor(
        MissionListViewManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MissionListViewManager___c__DisplayClass69_0___ShowRewardDetailInfo_b__0(
        MissionListViewManager___c__DisplayClass69_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  return this->fields.subGiftEntity != entity;
}


void MissionListViewManager___c__DisplayClass76_0___ctor(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass76_0___StartEventMissionClearItemAction_b__0(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  System_Action_o *klass; // x22
  MissionListViewManager_o *v4; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_596A097 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass76_0_o *)sub_2213A60(&Method_MissionListViewManager___c__DisplayClass76_0__StartEventMissionClearItemAction_b__1__);
    byte_596A097 = 1;
  }
  klass = (System_Action_o *)v2[3].klass;
  v4 = (MissionListViewManager_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_MissionListViewManager___c__DisplayClass76_0__StartEventMissionClearItemAction_b__1__,
      0);
    v2[3].klass = (Il2CppClass *)klass;
    this = (MissionListViewManager___c__DisplayClass76_0_o *)sub_2213A04(&v2[3], klass);
  }
  if ( !v4 )
    sub_2213CDC(this, method);
  MissionListViewManager__LoadTreasureGetEffect(v4, klass, 0);
}


void MissionListViewManager___c__DisplayClass76_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x0
  struct MissionListViewManager_o *v4; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22

  if ( (byte_596A098 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass76_0__StartEventMissionClearItemAction_b__2__);
    byte_596A098 = 1;
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
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartEventMissionClearItemAction_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    _4__this = (struct MissionListViewManager_o *)sub_2213A04(&this->fields.__9__2, _9__2);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_2213CDC(_4__this, method);
  QuestRewardBoxAction__Play(questRewardBoxAction, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass76_0___StartEventMissionClearItemAction_b__2(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass76_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v7; // x2
  struct MissionListViewManager_o *v8; // x8
  AssetData_o *treasureGetAssetData; // x20

  v2 = this;
  if ( (byte_596A099 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass76_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A099 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass76_0_o *)_4__this->fields.questRewardBoxAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_12;
  treasureGetAssetData = v8->fields.treasureGetAssetData;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v7);
  AssetManager__releaseAsset_47496972(treasureGetAssetData, 0);
  this = (MissionListViewManager___c__DisplayClass76_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_2213CDC(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v2->fields.gifts,
    0,
    v2->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass77_0___ctor(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass77_0___StartItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  MissionListViewManager__EndItemGetEffectAction(_4__this, this->fields.afterDetail, 0);
}


void MissionListViewManager___c__DisplayClass77_0___StartItemGetEffectAction_b__1(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x0
  GiftEntity_array *gifts; // x1
  System_Action_o *afterDetail; // x3
  int32_t idx; // w2

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  afterDetail = this->fields.afterDetail;
  gifts = this->fields.gifts;
  idx = this->fields.idx;
  _4__this->fields.isEffect = 1;
  MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(_4__this, gifts, idx, afterDetail, 0);
}


void MissionListViewManager___c__DisplayClass78_0___ctor(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass78_0___EndItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8
  MissionListViewManager___c__DisplayClass78_0_o *v3; // x19
  struct System_Action_o *afterDetail; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MissionListViewManager___c__DisplayClass78_0_o *)_4__this->fields.touchBlockObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (afterDetail = v3->fields.afterDetail) == 0) )
  {
    sub_2213CDC(this, method);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))afterDetail->fields.invoke_impl)(
    afterDetail->fields.method_code,
    afterDetail->fields.method);
}


void MissionListViewManager___c__DisplayClass79_0___ctor(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass79_0___StartRewardEquipGetEffect_b__0(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_596A09A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardEquipGetEffect_b__1__);
    byte_596A09A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardEquipGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    Instance = (Il2CppObject *)sub_2213A04(&this->fields.__9__1, _9__1);
  }
  if ( !v5 )
    sub_2213CDC(Instance, v4);
  CommonUI__LoadEquipGetEffect(v5, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass79_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x21
  System_Action_o *_9__2; // x22
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_596A09B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardEquipGetEffect_b__2__);
    byte_596A09B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardEquipGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    Instance = (Il2CppObject *)sub_2213A04(&this->fields.__9__2, _9__2);
  }
  if ( !v5 )
    sub_2213CDC(Instance, v4);
  CommonUI__OpenEquipGetEffect(v5, 0, questRewardInfo, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass79_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596A09C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A09C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(Instance, v4);
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


void MissionListViewManager___c__DisplayClass80_0___StartRewardCostumeReleaseGetEffect_b__0(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_596A09D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass80_0__StartRewardCostumeReleaseGetEffect_b__1__);
    byte_596A09D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    Instance = (Il2CppObject *)sub_2213A04(&this->fields.__9__1, _9__1);
  }
  if ( !v5 )
    sub_2213CDC(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v5, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass80_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x21
  System_Action_o *_9__2; // x22
  System_String_o *name; // x20

  if ( (byte_596A09E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass80_0__StartRewardCostumeReleaseGetEffect_b__2__);
    byte_596A09E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass80_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    Instance = (Il2CppObject *)sub_2213A04(&this->fields.__9__2, _9__2);
  }
  if ( !v5 )
    sub_2213CDC(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v5, 0, name, _9__2, 23, 0);
}


void MissionListViewManager___c__DisplayClass80_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596A09F & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A09F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass81_0___ctor(
        MissionListViewManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass81_0___StartRewardItemGetEffect_b__0(
        MissionListViewManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionInfoMaker_c *v4; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x20
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A0A0 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass81_0__StartRewardItemGetEffect_b__1__);
    byte_596A0A0 = 1;
  }
  v4 = MissionInfoMaker_TypeInfo;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method, v2);
    v4 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v4->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &effectId);
  v9 = System_String__Format(ITEM_GET_ASSET_NAME, v6, 0);
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass81_0__StartRewardItemGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04(&this->fields.__9__1, _9__1);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__loadAssetStorage(v9, _9__1, 1, 0, 0);
}


void MissionListViewManager___c__DisplayClass81_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass81_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  System_String_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  MissionInfoMaker_c *v10; // x0
  AssetData_o *monitor; // x21
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Object_object__58532980; // x21
  UnityEngine_GameObject_o *v17; // x21
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Transform_o *v19; // x22
  Il2CppObject *Component_object; // x0
  QuestRewardItemAction_o *klass; // x19
  System_Action_o *v22; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A0A1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass81_1__StartRewardItemGetEffect_b__2__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass81_1_TypeInfo);
    byte_596A0A1 = 1;
  }
  v5 = (Il2CppObject *)sub_2213CCC(MissionListViewManager___c__DisplayClass81_1_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_16;
  v5[2].klass = (Il2CppClass *)this;
  sub_2213A04(&v5[2], this);
  v5[1].monitor = data;
  sub_2213A04(&v5[1].monitor, data);
  v10 = MissionInfoMaker_TypeInfo;
  monitor = (AssetData_o *)v5[1].monitor;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v8, v9);
    v10 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v10->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &effectId);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v13, 0);
  if ( !monitor )
    goto LABEL_16;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              monitor,
                              transform,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  transform = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__58532980,
                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_16;
  v17 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  v19 = (UnityEngine_Transform_o *)transform;
  transform = (System_String_o *)((System_String_o *(__fastcall *)(struct MissionListViewManager_o *__return_ptr, struct MissionListViewManager_o *, const MethodInfo *))_4__this->klass->vtable._13_GetRewardEffectParent.methodPtr)(
                                   _4__this,
                                   this->fields.__4__this,
                                   _4__this->klass->vtable._13_GetRewardEffectParent.method);
  if ( !v19 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)transform, 0);
  GameObjectExtensions__ResetTransform(v17, 0);
  transform = (System_String_o *)this->fields.__4__this;
  if ( !transform )
    goto LABEL_16;
  MissionListViewManager__ApplyRewardEffectDepthOffset((MissionListViewManager_o *)transform, v17, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v17,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  v5[1].klass = (Il2CppClass *)Component_object;
  sub_2213A04(&v5[1], Component_object);
  transform = (System_String_o *)v5[1].klass;
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0),
        klass = (QuestRewardItemAction_o *)v5[1].klass,
        v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          v5,
          Method_MissionListViewManager___c__DisplayClass81_1__StartRewardItemGetEffect_b__2__,
          0),
        !klass) )
  {
LABEL_16:
    sub_2213CDC(transform, v7);
  }
  QuestRewardItemAction__Play(klass, 0, v22, 0.0, 0, 0);
}


void MissionListViewManager___c__DisplayClass81_1___ctor(
        MissionListViewManager___c__DisplayClass81_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass81_1___StartRewardItemGetEffect_b__2(
        MissionListViewManager___c__DisplayClass81_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mRewardItemAction; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass81_0_o *CS___8__locals1; // x8

  if ( (byte_596A0A2 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0A2 = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  data = this->fields.data;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__releaseAsset_47496972(data, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0 )
LABEL_11:
    sub_2213CDC(mRewardItemAction, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass82_0___ctor(
        MissionListViewManager___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass82_0___StartRewardGetEffect_b__0(
        MissionListViewManager___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  SummonAssetManager_o *v5; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_596A0A3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass82_0__StartRewardGetEffect_b__1__);
    byte_596A0A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v5 = (SummonAssetManager_o *)Instance;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass82_0__StartRewardGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    Instance = (Il2CppObject *)sub_2213A04(&this->fields.__9__1, _9__1);
  }
  if ( !v5 )
    sub_2213CDC(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v5, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass82_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  struct MissionListViewManager_o *_4__this; // x22
  struct MissionListViewManager_o *v9; // x8
  SummonAssetManager_o *v10; // x21
  struct MissionListViewManager_o *v11; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x2
  struct MissionListViewManager_o *v14; // x8
  Il2CppClass *klass; // x22
  void *monitor; // x23
  ServantRewardAction_o *svtRewardComp; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w22
  Il2CppObject v21; // q1
  int64_t v22; // x0
  Il2CppClass *v23; // x8
  int64_t v24; // x20
  bool isNew; // w5
  int32_t v26; // w3
  ServantRewardAction_o *v27; // x0
  int32_t v28; // w1
  int64_t v29; // x2
  bool v30; // w6
  int32_t v31; // w7
  __int64 v32; // x2
  Il2CppObject *v33; // x20
  struct MissionListViewManager_o *v34; // x22
  struct MissionListViewManager_o *v35; // x8
  SummonAssetManager_o *v36; // x21
  struct MissionListViewManager_o *v37; // x21
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x2
  struct MissionListViewManager_o *v40; // x8
  Il2CppObject v41; // q0
  Il2CppObject v42; // q1
  ServantRewardAction_o *v43; // x20
  bool v44; // w2
  int64_t v45; // x1
  ServantRewardAction_o *v46; // x0
  bool v47; // w3
  int32_t v48; // w4
  Il2CppClass *v49; // x22
  void *v50; // x23
  ServantRewardAction_o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  int32_t v54; // w22
  Il2CppObject v55; // q1
  int64_t v56; // x0
  Il2CppClass *v57; // x8
  int64_t v58; // x20
  Il2CppObject v59; // q0
  Il2CppObject v60; // q1
  ServantRewardAction_o *v61; // x20
  System_Action_o *_9__2; // x22
  MissionListViewManager_o *v63; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+90h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_596A0A4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass82_0__StartRewardGetEffect_b__2__);
    byte_596A0A4 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 this->fields.userSvtID,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v9 = this->fields.__4__this;
      if ( v9 )
      {
        v10 = (SummonAssetManager_o *)Master_object;
        Master_object = (__int64)((__int64 (__fastcall *)(struct MissionListViewManager_o *__return_ptr, struct MissionListViewManager_o *, const MethodInfo *))v9->klass->vtable._13_GetRewardEffectParent.methodPtr)(
                                   v9,
                                   this->fields.__4__this,
                                   v9->klass->vtable._13_GetRewardEffectParent.method);
        if ( v10 )
        {
          Master_object = (__int64)SummonAssetManager__InstantiateSvtGetPrefab(
                                     v10,
                                     (UnityEngine_Transform_o *)Master_object,
                                     0,
                                     0);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
            Master_object = sub_2213A04(&_4__this->fields.svtRewardComp, Master_object);
            v11 = this->fields.__4__this;
            if ( v11 )
            {
              Master_object = (__int64)v11->fields.svtRewardComp;
              if ( Master_object )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                MissionListViewManager__ApplyRewardEffectDepthOffset(v11, gameObject, 0);
                v14 = this->fields.__4__this;
                if ( this->fields.isDoEffect )
                {
                  if ( v14 && Entity )
                  {
                    klass = Entity[5].klass;
                    monitor = Entity[5].monitor;
                    svtRewardComp = v14->fields.svtRewardComp;
                    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v13);
                    *(_QWORD *)&v69.fields.currentCryptoKey = klass;
                    *(_QWORD *)&v69.fields.fakeValue = monitor;
                    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v69, 0);
                    v21 = Entity[2];
                    *(Il2CppObject *)&v68.fields.currentCryptoKey = Entity[1];
                    *(Il2CppObject *)&v68.fields.fakeValue = v21;
                    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19);
                    v67 = v68;
                    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v67, 0);
                    v23 = Entity[6].klass;
                    *(_QWORD *)&v70.fields.fakeValue = Entity[6].monitor;
                    v24 = v22;
                    *(_QWORD *)&v70.fields.currentCryptoKey = v23;
                    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v70, 0);
                    if ( svtRewardComp )
                    {
                      isNew = this->fields.isNew;
                      v26 = Master_object;
                      v27 = svtRewardComp;
                      v28 = v20;
                      v29 = v24;
                      v30 = 1;
                      v31 = 14;
LABEL_45:
                      ServantRewardAction__Setup(v27, v28, v29, v26, 1, isNew, v30, v31, 0);
                      goto LABEL_53;
                    }
                  }
                }
                else if ( v14 && Entity )
                {
                  v49 = Entity[5].klass;
                  v50 = Entity[5].monitor;
                  v51 = v14->fields.svtRewardComp;
                  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v13);
                  *(_QWORD *)&v71.fields.currentCryptoKey = v49;
                  *(_QWORD *)&v71.fields.fakeValue = v50;
                  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v71, 0);
                  v55 = Entity[2];
                  *(Il2CppObject *)&v68.fields.currentCryptoKey = Entity[1];
                  *(Il2CppObject *)&v68.fields.fakeValue = v55;
                  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52, v53);
                  v66 = v68;
                  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v66, 0);
                  v57 = Entity[6].klass;
                  *(_QWORD *)&v72.fields.fakeValue = Entity[6].monitor;
                  v58 = v56;
                  *(_QWORD *)&v72.fields.currentCryptoKey = v57;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v72, 0);
                  if ( v51 )
                  {
                    v26 = Master_object;
                    v27 = v51;
                    v28 = v54;
                    v29 = v58;
                    isNew = 0;
                    v30 = 0;
                    v31 = 6;
                    goto LABEL_45;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_2213CDC(Master_object, v6);
  }
  Master_object = Gift__IsCommandCode(this->fields.giftType, 0);
  if ( (Master_object & 1) == 0 )
    goto LABEL_53;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v32);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_57;
  v33 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          this->fields.userSvtID,
          (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v34 = this->fields.__4__this;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v35 = this->fields.__4__this;
  if ( !v35 )
    goto LABEL_57;
  v36 = (SummonAssetManager_o *)Master_object;
  Master_object = (__int64)((__int64 (__fastcall *)(struct MissionListViewManager_o *__return_ptr, struct MissionListViewManager_o *, const MethodInfo *))v35->klass->vtable._13_GetRewardEffectParent.methodPtr)(
                             v35,
                             this->fields.__4__this,
                             v35->klass->vtable._13_GetRewardEffectParent.method);
  if ( !v36 )
    goto LABEL_57;
  Master_object = (__int64)SummonAssetManager__InstantiateSvtGetPrefab(
                             v36,
                             (UnityEngine_Transform_o *)Master_object,
                             0,
                             0);
  if ( !v34 )
    goto LABEL_57;
  v34->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  Master_object = sub_2213A04(&v34->fields.svtRewardComp, Master_object);
  v37 = this->fields.__4__this;
  if ( !v37 )
    goto LABEL_57;
  Master_object = (__int64)v37->fields.svtRewardComp;
  if ( !Master_object )
    goto LABEL_57;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  MissionListViewManager__ApplyRewardEffectDepthOffset(v37, v38, 0);
  v40 = this->fields.__4__this;
  if ( this->fields.isDoEffect )
  {
    if ( !v40 || !v33 )
      goto LABEL_57;
    v41 = v33[1];
    v42 = v33[2];
    v43 = v40->fields.svtRewardComp;
    *(Il2CppObject *)&v68.fields.currentCryptoKey = v41;
    *(Il2CppObject *)&v68.fields.fakeValue = v42;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v39);
    v65 = v68;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v65, 0);
    if ( !v43 )
      goto LABEL_57;
    v44 = this->fields.isNew;
    v45 = Master_object;
    v46 = v43;
    v47 = 1;
    v48 = 14;
  }
  else
  {
    if ( !v40 || !v33 )
      goto LABEL_57;
    v59 = v33[1];
    v60 = v33[2];
    v61 = v40->fields.svtRewardComp;
    *(Il2CppObject *)&v68.fields.currentCryptoKey = v59;
    *(Il2CppObject *)&v68.fields.fakeValue = v60;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v39);
    v64 = v68;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v64, 0);
    if ( !v61 )
      goto LABEL_57;
    v45 = Master_object;
    v46 = v61;
    v44 = 0;
    v47 = 0;
    v48 = 6;
  }
  ServantRewardAction__SetupCommandCode_44071696(v46, v45, v44, v47, v48, 0);
LABEL_53:
  _9__2 = this->fields.__9__2;
  v63 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass82_0__StartRewardGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    Master_object = sub_2213A04(&this->fields.__9__2, _9__2);
  }
  if ( !v63 )
    goto LABEL_57;
  MissionListViewManager__SvtEffCaller(v63, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass82_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8

  if ( (byte_596A0A5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_596A0A5 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass83_0___ctor(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass83_0___StartSvtListGetEffect_b__0(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 Master_object; // x0
  __int64 v5; // x1
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v9; // x8
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *v11; // x22
  Il2CppObject *v12; // x20
  struct MissionListViewManager_o *v13; // x8
  SummonAssetManager_o *v14; // x21
  struct MissionListViewManager_o *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct MissionListViewManager_o *v17; // x8
  struct GetSvts_array *v18; // x8
  __int64 v19; // x9
  __int64 v20; // x2
  struct MissionListViewManager_o *v21; // x8
  Il2CppClass *v22; // x22
  void *v23; // x23
  ServantRewardAction_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t v27; // w22
  Il2CppObject v28; // q1
  int64_t v29; // x0
  Il2CppClass *v30; // x8
  int64_t v31; // x20
  struct MissionListViewManager_o *v32; // x8
  struct GetSvts_array *v33; // x8
  __int64 v34; // x9
  GetSvts_o *v35; // x8
  bool isNew; // w5
  int32_t v37; // w3
  ServantRewardAction_o *v38; // x0
  int32_t v39; // w1
  int64_t v40; // x2
  bool v41; // w6
  int32_t v42; // w7
  Il2CppClass *klass; // x22
  void *monitor; // x23
  ServantRewardAction_o *svtRewardComp; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  int32_t v48; // w22
  Il2CppObject v49; // q1
  int64_t v50; // x0
  Il2CppClass *v51; // x8
  int64_t v52; // x20
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *v54; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+50h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_596A0A6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass83_0__StartSvtListGetEffect_b__1__);
    byte_596A0A6 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_44;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= LODWORD(getSvtList->max_length) )
    goto LABEL_45;
  v9 = getSvtList->m_Items[callCnt];
  if ( !v9 )
    goto LABEL_44;
  if ( !Master_object )
    goto LABEL_44;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v9->fields.userSvtId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v11 = this->fields.__4__this;
  v12 = Entity;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_44;
  v14 = (SummonAssetManager_o *)Master_object;
  Master_object = (__int64)((__int64 (__fastcall *)(struct MissionListViewManager_o *__return_ptr, struct MissionListViewManager_o *, const MethodInfo *))v13->klass->vtable._13_GetRewardEffectParent.methodPtr)(
                             v13,
                             this->fields.__4__this,
                             v13->klass->vtable._13_GetRewardEffectParent.method);
  if ( !v14 )
    goto LABEL_44;
  Master_object = (__int64)SummonAssetManager__InstantiateSvtGetPrefab(
                             v14,
                             (UnityEngine_Transform_o *)Master_object,
                             0,
                             0);
  if ( !v11 )
    goto LABEL_44;
  v11->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  Master_object = sub_2213A04(&v11->fields.svtRewardComp, Master_object);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_44;
  Master_object = (__int64)v15->fields.svtRewardComp;
  if ( !Master_object )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  MissionListViewManager__ApplyRewardEffectDepthOffset(v15, gameObject, 0);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_44;
  v18 = v17->fields.getSvtList;
  if ( !v18 )
    goto LABEL_44;
  v19 = this->fields.callCnt;
  if ( (unsigned int)v19 >= LODWORD(v18->max_length) )
LABEL_45:
    sub_2213CE4(Master_object);
  Master_object = (__int64)v18->m_Items[v19];
  if ( !Master_object )
    goto LABEL_44;
  Master_object = GetSvts__isDoGetEff((GetSvts_o *)Master_object, 0);
  v21 = this->fields.__4__this;
  if ( (Master_object & 1) == 0 )
  {
    if ( v21 && v12 )
    {
      klass = v12[5].klass;
      monitor = v12[5].monitor;
      svtRewardComp = v21->fields.svtRewardComp;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v20);
      *(_QWORD *)&v60.fields.currentCryptoKey = klass;
      *(_QWORD *)&v60.fields.fakeValue = monitor;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v60, 0);
      v49 = v12[2];
      *(Il2CppObject *)&v57.fields.currentCryptoKey = v12[1];
      *(Il2CppObject *)&v57.fields.fakeValue = v49;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46, v47);
      v55 = v57;
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v55, 0);
      v51 = v12[6].klass;
      *(_QWORD *)&v61.fields.fakeValue = v12[6].monitor;
      v52 = v50;
      *(_QWORD *)&v61.fields.currentCryptoKey = v51;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v61, 0);
      if ( svtRewardComp )
      {
        v37 = Master_object;
        v38 = svtRewardComp;
        v39 = v48;
        v40 = v52;
        isNew = 0;
        v41 = 0;
        v42 = 2;
        goto LABEL_40;
      }
    }
LABEL_44:
    sub_2213CDC(Master_object, v5);
  }
  if ( !v21 || !v12 )
    goto LABEL_44;
  v22 = v12[5].klass;
  v23 = v12[5].monitor;
  v24 = v21->fields.svtRewardComp;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v20);
  *(_QWORD *)&v58.fields.currentCryptoKey = v22;
  *(_QWORD *)&v58.fields.fakeValue = v23;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v58, 0);
  v28 = v12[2];
  *(Il2CppObject *)&v57.fields.currentCryptoKey = v12[1];
  *(Il2CppObject *)&v57.fields.fakeValue = v28;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25, v26);
  v56 = v57;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v56, 0);
  v30 = v12[6].klass;
  *(_QWORD *)&v59.fields.fakeValue = v12[6].monitor;
  v31 = v29;
  *(_QWORD *)&v59.fields.currentCryptoKey = v30;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v59, 0);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_44;
  v33 = v32->fields.getSvtList;
  if ( !v33 )
    goto LABEL_44;
  v34 = this->fields.callCnt;
  if ( (unsigned int)v34 >= LODWORD(v33->max_length) )
    goto LABEL_45;
  v35 = v33->m_Items[v34];
  if ( !v35 || !v24 )
    goto LABEL_44;
  isNew = v35->fields.isNew;
  v37 = Master_object;
  v38 = v24;
  v39 = v27;
  v40 = v31;
  v41 = 1;
  v42 = 10;
LABEL_40:
  ServantRewardAction__Setup(v38, v39, v40, v37, 1, isNew, v41, v42, 0);
  _9__1 = this->fields.__9__1;
  v54 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass83_0__StartSvtListGetEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    Master_object = sub_2213A04(&this->fields.__9__1, _9__1);
  }
  if ( !v54 )
    goto LABEL_44;
  MissionListViewManager__SvtEffCaller(v54, _9__1, 0);
}


void MissionListViewManager___c__DisplayClass83_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  System_Action_o *_9__2; // x22
  float DEFAULT_FADE_TIME; // s8

  if ( (byte_596A0A7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass83_0__StartSvtListGetEffect_b__2__);
    byte_596A0A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  _9__2 = this->fields.__9__2;
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass83_0__StartSvtListGetEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    Instance = (Il2CppObject *)sub_2213A04(&this->fields.__9__2, _9__2);
  }
  if ( !v7 )
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, _9__2, 0);
}


void MissionListViewManager___c__DisplayClass83_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, this->fields.callCnt + 1, this->fields.callback, 0);
}


void MissionListViewManager___c__DisplayClass84_0___ctor(
        MissionListViewManager___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass84_0___SvtEffCaller_b__0(
        MissionListViewManager___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass84_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_596A0A8 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass84_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0A8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass84_0_o *)_4__this->fields.svtRewardComp) == 0 )
    sub_2213CDC(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
  ActionExtensions__Call(v2->fields.callback, 0);
}


void MissionListViewManager___c__DisplayClass88_0___ctor(
        MissionListViewManager___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass88_0___StartRewardItemGetEffectAfterTresureEffect_b__0(
        MissionListViewManager___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalListTop_c *v4; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x20
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A0A9 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass88_0__StartRewardItemGetEffectAfterTresureEffect_b__1__);
    byte_596A0A9 = 1;
  }
  v4 = ScrTerminalListTop_TypeInfo;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, method, v2);
    v4 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v4->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &effectId);
  v9 = System_String__Format(ITEM_GET_ASSET_NAME, v6, 0);
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass88_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04(&this->fields.__9__1, _9__1);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__loadAssetStorage(v9, _9__1, 1, 0, 0);
}


void MissionListViewManager___c__DisplayClass88_0___StartRewardItemGetEffectAfterTresureEffect_b__1(
        MissionListViewManager___c__DisplayClass88_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  QuestRewardItemAction_o *mRewardItemAction; // x19
  System_Action_o *v9; // x20

  if ( (byte_596A0AA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionListViewManager___c__DisplayClass88_1__StartRewardItemGetEffectAfterTresureEffect_b__2__);
    sub_2213A60(&MissionListViewManager___c__DisplayClass88_1_TypeInfo);
    byte_596A0AA = 1;
  }
  v5 = (Il2CppObject *)sub_2213CCC(MissionListViewManager___c__DisplayClass88_1_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5
    || (v5[1].monitor = this,
        sub_2213A04(&v5[1].monitor, this),
        v5[1].klass = (Il2CppClass *)data,
        sub_2213A04(&v5[1], data),
        mRewardItemAction = this->fields.mRewardItemAction,
        v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          v5,
          Method_MissionListViewManager___c__DisplayClass88_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0),
        !mRewardItemAction) )
  {
    sub_2213CDC(v6, v7);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v9, 0.0, 0, 0);
}


void MissionListViewManager___c__DisplayClass88_1___ctor(
        MissionListViewManager___c__DisplayClass88_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass88_1___StartRewardItemGetEffectAfterTresureEffect_b__2(
        MissionListViewManager___c__DisplayClass88_1_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass88_1_o *v2; // x19
  struct MissionListViewManager___c__DisplayClass88_0_o *CS___8__locals1; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass88_0_o *v10; // x8

  v2 = this;
  if ( (byte_596A0AB & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass88_1_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0AB = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass88_1_o *)CS___8__locals1->fields.mRewardItemAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  data = v2->fields.data;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__releaseAsset_47496972(data, 0);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 || (this = (MissionListViewManager___c__DisplayClass88_1_o *)v10->fields.__4__this) == 0 )
LABEL_12:
    sub_2213CDC(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v10->fields.gifts,
    v10->fields.idx + 1,
    v10->fields.afterDetail,
    0);
}


void MissionListViewManager___c__DisplayClass89_0___ctor(
        MissionListViewManager___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass89_0___LoadTreasureGetEffect_b__0(
        MissionListViewManager___c__DisplayClass89_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, data);
  _4__this->fields.treasureGetAssetData = data;
  sub_2213A04(&_4__this->fields.treasureGetAssetData, data);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void MissionListViewManager___c__DisplayClass92_0___ctor(
        MissionListViewManager___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass92_0___LoadItemGetEffects_b__0(
        MissionListViewManager___c__DisplayClass92_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass92_0_o *v4; // x19
  struct MissionListViewManager_o *_4__this; // x8

  v4 = this;
  if ( (byte_596A0AC & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass92_0_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__);
    byte_596A0AC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass92_0_o *)_4__this->fields.itemGetAssetDatas) == 0
    || (System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (Il2CppObject *)data,
          (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass92_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, data);
  }
  MissionListViewManager__LoadItemGetEffects((MissionListViewManager_o *)this, v4->fields.idx + 1, v4->fields.endAct, 0);
}


void MissionListViewManager___c__DisplayClass93_0___ctor(
        MissionListViewManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass93_0___TrySetupMissionCondNaviAction_b__0(
        MissionListViewManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0);
}


void MissionListViewManager___c__DisplayClass93_0___TrySetupMissionCondNaviAction_b__1(
        MissionListViewManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0);
}


void MissionListViewManager___c__DisplayClass93_0___TrySetupMissionCondNaviAction_b__2(
        MissionListViewManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  MissionListViewManager__SetupMissionCondTransitionConfirmDialog(
    _4__this,
    this->fields.item,
    this->fields.challengeBoardList,
    0);
}


void MissionListViewManager___c__DisplayClass94_0___ctor(
        MissionListViewManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListViewManager___c__DisplayClass94_0___SetupMissionCondTransitionDialog_b__0(
        MissionListViewManager___c__DisplayClass94_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596A0AD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A0AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  if ( isDecide )
    ActionExtensions__Call(this->fields.decideAction, 0);
}