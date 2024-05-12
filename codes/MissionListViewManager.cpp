void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  MissionListViewManager_c *v7; // x8
  struct MissionListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  struct MissionListViewManager_StaticFields *v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4389B49 & 1) == 0 )
  {
    sub_B775C4(&MissionListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_17122/*"bit_prize_get"*/);
    sub_B775C4(&StringLiteral_19432/*"get_02"*/);
    byte_4389B49 = 1;
  }
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM = 7;
  v7 = MissionListViewManager_TypeInfo;
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  v7->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_17122/*"bit_prize_get"*/;
  static_fields->PRIZE_GET_NORMAL = (struct System_String_o *)StringLiteral_17122/*"bit_prize_get"*/;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->PRIZE_GET_NORMAL, v9, v1, v2, v3, v4, v5, v6);
  v10 = MissionListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19432/*"get_02"*/;
  v10->ITEM_GET_TITLE = (struct System_String_o *)StringLiteral_19432/*"get_02"*/;
  sub_B77560((BattleServantConfConponent_o *)&v10->ITEM_GET_TITLE, v11, v12, v13, v14, v15, v16, v17);
  MissionListViewManager_TypeInfo->static_fields->EVENT_REWARD_GET_ITEM_DISP_MAX_NUM = 4;
}


void __fastcall MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  AvalonSceneManager_c *v17; // x0

  if ( (byte_4389B48 & 1) == 0 )
  {
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    byte_4389B48 = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.rewardItemGetEffectPlayList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rewardItemGetEffectPlayList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dispRewardInfoList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.FADEOUT_KIND = 1;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v17->static_fields->DEFAULT_FADE_TIME);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4389B34 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389B34 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall MissionListViewManager__CloseItemDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4389B32 & 1) == 0 )
  {
    sub_B775C4(&Method_MissionListViewManager_CloseItemDetail__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389B32 = 1;
  }
  v3 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC(Method_MissionListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4389B33 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389B33 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MissionListViewManager__CreateRewardIconAlphaCalculator(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_4389B29 & 1) == 0 )
  {
    sub_B775C4(&AlphaTransitionCalculator_TypeInfo);
    sub_B775C4(&MissionListViewManager_TypeInfo);
    byte_4389B29 = 1;
  }
  v2 = MissionListViewManager_TypeInfo;
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v2 = MissionListViewManager_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v5 = (AlphaTransitionCalculator_o *)sub_B77694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0LL);
  return v5;
}


void __fastcall MissionListViewManager__EndItemGetEffectAction(
        MissionListViewManager_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x0
  __int64 v7; // x1
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  Il2CppObject *value; // x21
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v35; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4389B38 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass69_0__EndItemGetEffectAction_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass69_0_TypeInfo);
    byte_4389B38 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v5 = sub_B77694(MissionListViewManager___c__DisplayClass69_0_TypeInfo);
  MissionListViewManager___c__DisplayClass69_0___ctor((MissionListViewManager___c__DisplayClass69_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = afterDetail;
  sub_B77560(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)afterDetail,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_21;
  System_Collections_Generic_List_int___Clear(
    rewardItemGetEffectPlayList,
    (const MethodInfo_30E61F4 *)Method_System_Collections_Generic_List_int__Clear__);
  this->fields.questRewardBoxAction = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.questRewardBoxAction, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.isTreasureEffect = 0;
  this->fields.useTreasureGetEffectName = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.useTreasureGetEffectName, 0LL, v26, v27, v28, v29, v30, v31);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas
    && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)itemGetAssetDatas,
         (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__) >= 1 )
  {
    rewardItemGetEffectPlayList = (System_Collections_Generic_List_int__o *)this->fields.itemGetAssetDatas;
    if ( !rewardItemGetEffectPlayList )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v38,
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)rewardItemGetEffectPlayList,
      (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v38,
              (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
    {
      value = v38.fields.current.fields.value;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_24402476((AssetData_o *)value, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v38,
      (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    rewardItemGetEffectPlayList = (System_Collections_Generic_List_int__o *)this->fields.itemGetAssetDatas;
    if ( !rewardItemGetEffectPlayList )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)rewardItemGetEffectPlayList,
      (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v35 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v35->static_fields->DEFAULT_FADE_TIME;
  v37 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass69_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_21:
    sub_B7769C(rewardItemGetEffectPlayList, v7);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v37, 0LL);
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
  BalanceConfig_c *v4; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4389B45 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    this = (MissionListViewManager_o *)sub_B775C4(&StringLiteral_18634/*"effectId"*/);
    byte_4389B45 = 1;
  }
  entity = 0LL;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0LL) )
  {
    if ( !Gift__IsItem_28103496(rewardInfo->fields.type, 0LL) )
      return 0;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18634/*"effectId"*/, 0, 0LL);
LABEL_19:
    sub_B7769C(this, rewardInfo);
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->EquipGetEffectId;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_1DF7EB0 *method)
{
  Il2CppClass *_0_System_Collections_Generic_List_TObject; // x19
  System_Collections_Generic_List_TObject__o *v5; // x19
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  const MethodInfo **v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF
  __int64 v18; // [xsp+48h] [xbp-28h]

  if ( (byte_438E69A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E69A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  HIDWORD(v18) = 0;
  _0_System_Collections_Generic_List_TObject = method->rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE2(_0_System_Collections_Generic_List_TObject->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(method->rgctx_data->_0_System_Collections_Generic_List_TObject_);
  v5 = (System_Collections_Generic_List_TObject__o *)sub_B77694(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !current )
        sub_B7769C(v9, v10);
      v11 = ((__int64 (__fastcall *)(Il2CppObject *, MethodInfo *))method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_->methodPointer)(
              current,
              method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      if ( !v5 )
        sub_B7769C(v11, v11);
      ((void (__fastcall *)(System_Collections_Generic_List_TObject__o *, __int64, MethodInfo *))method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add->methodPointer)(
        v5,
        v11,
        method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add);
    }
  }
  v18 = 0x10000004CLL;
  v16.fields.list = (struct System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Enumerator_GameObject__TypeInfo;
  if ( *(_WORD *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
        goto LABEL_19;
    }
    v14 = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->vtable._0_Equals.method + 2 * *p_offset;
  }
  else
  {
LABEL_19:
    v14 = (const MethodInfo **)sub_B0F4C0(&v16, System_IDisposable_TypeInfo, 0LL);
  }
  ((void (__fastcall *)(int32_t *, const MethodInfo *))*v14)(&v16.fields.index, v14[1]);
  if ( (_DWORD)v18 == 76 )
    v18 = 76LL;
  return v5;
}


bool __fastcall MissionListViewManager__IsExcludeGetItemEffect(
        MissionListViewManager_o *this,
        int32_t targetItemId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *EventItemNotDispItemGetEffect; // x8
  __int64 v6; // x1
  int max_length; // w9
  unsigned int v8; // w10
  __int64 v10; // x0

  if ( (byte_4389B35 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_4389B35 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  EventItemNotDispItemGetEffect = v4->static_fields->EventItemNotDispItemGetEffect;
  if ( !EventItemNotDispItemGetEffect )
    return 0;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    EventItemNotDispItemGetEffect = BalanceConfig_TypeInfo->static_fields->EventItemNotDispItemGetEffect;
    if ( !EventItemNotDispItemGetEffect )
      sub_B7769C(v4, v6);
  }
  max_length = EventItemNotDispItemGetEffect->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v10 = sub_B776C8(v4);
      sub_B77668(v10, 0LL);
    }
    if ( EventItemNotDispItemGetEffect->m_Items[v8 + 1] == targetItemId )
      break;
    if ( (int)++v8 >= max_length )
      return 0;
  }
  return 1;
}


void __fastcall MissionListViewManager__LoadItemGetEffects(
        MissionListViewManager_o *this,
        int32_t idx,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Int32_array **v4; // x21
  int32_t v5; // w22
  MissionListViewManager_o *v6; // x19
  __int64 v7; // x20
  MissionListViewManager_o *itemGetAssetDatas; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x21
  int32_t v24; // w22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  unsigned int EffectId; // w0
  __int64 v33; // x2
  ScrTerminalListTop_c *v34; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v36; // x0
  System_String_o *v37; // x19
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  int v39; // [xsp+Ch] [xbp-24h] BYREF

  while ( 1 )
  {
    v4 = (System_Int32_array **)endAct;
    v5 = idx;
    v6 = this;
    if ( (byte_4389B46 & 1) == 0 )
    {
      sub_B775C4(&AssetManager_TypeInfo);
      sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__);
      sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      sub_B775C4(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      sub_B775C4(&int_TypeInfo);
      sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
      sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
      sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
      sub_B775C4(&ScrTerminalListTop_TypeInfo);
      sub_B775C4(&Method_MissionListViewManager___c__DisplayClass83_0__LoadItemGetEffects_b__0__);
      sub_B775C4(&MissionListViewManager___c__DisplayClass83_0_TypeInfo);
      byte_4389B46 = 1;
    }
    v7 = sub_B77694(MissionListViewManager___c__DisplayClass83_0_TypeInfo);
    MissionListViewManager___c__DisplayClass83_0___ctor((MissionListViewManager___c__DisplayClass83_0_o *)v7, 0LL);
    if ( !v7
      || (*(_QWORD *)(v7 + 16) = v6,
          sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)v6, v10, v11, v12, v13, v14, v15),
          *(_QWORD *)(v7 + 32) = v4,
          *(_DWORD *)(v7 + 28) = v5,
          sub_B77560((BattleServantConfConponent_o *)(v7 + 32), v4, v16, v17, v18, v19, v20, v21),
          (dispRewardInfoList = v6->fields.dispRewardInfoList) == 0LL) )
    {
LABEL_22:
      sub_B7769C(itemGetAssetDatas, v9);
    }
    v24 = *(_DWORD *)(v7 + 28);
    if ( v24 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
      return;
    }
    if ( !v24 )
    {
      v25 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v25,
        (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v6->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v25;
      sub_B77560(
        (BattleServantConfConponent_o *)&v6->fields.itemGetAssetDatas,
        (System_Int32_array **)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      dispRewardInfoList = v6->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_22;
      v24 = *(_DWORD *)(v7 + 28);
    }
    if ( dispRewardInfoList->fields._size <= (unsigned int)v24 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    EffectId = MissionListViewManager__GetItemGetEffectId(
                 itemGetAssetDatas,
                 dispRewardInfoList->fields._items->m_Items[v24],
                 v22);
    *(_DWORD *)(v7 + 24) = EffectId;
    v9 = EffectId;
    itemGetAssetDatas = (MissionListViewManager_o *)v6->fields.itemGetAssetDatas;
    if ( !itemGetAssetDatas )
      goto LABEL_22;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)itemGetAssetDatas,
            v9,
            (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v7 + 32);
    this = v6;
    idx = *(_DWORD *)(v7 + 28) + 1;
  }
  v34 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v34 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v34->static_fields->ITEM_GET_ASSET_NAME;
  v39 = *(_DWORD *)(v7 + 24);
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v33);
  v37 = System_String__Format(ITEM_GET_ASSET_NAME, v36, 0LL);
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v7,
    Method_MissionListViewManager___c__DisplayClass83_0__LoadItemGetEffects_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v37, v38, 1, 0LL);
}


void __fastcall MissionListViewManager__LoadTreasureGetEffect(
        MissionListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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
  System_String_o *v20; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x20

  if ( (byte_4389B43 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass80_0__LoadTreasureGetEffect_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass80_0_TypeInfo);
    sub_B775C4(&StringLiteral_5998/*"Effect/Talk/"*/);
    byte_4389B43 = 1;
  }
  v5 = sub_B77694(MissionListViewManager___c__DisplayClass80_0_TypeInfo);
  MissionListViewManager___c__DisplayClass80_0___ctor((MissionListViewManager___c__DisplayClass80_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAct;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)endAct, v14, v15, v16, v17, v18, v19);
  v20 = System_String__Concat_44901936(
          (System_String_o *)StringLiteral_5998/*"Effect/Talk/"*/,
          this->fields.useTreasureGetEffectName,
          0LL);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass80_0__LoadTreasureGetEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4389B2D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389B2D = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_22;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
          gameObject,
          1LL,
          gameObject->klass[1]._1.declaringType);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_20;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
        goto LABEL_20;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_20:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B7769C(gameObject, v7);
    }
  }
}


void __fastcall MissionListViewManager__OpenCostumeReleaseDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *v5; // x19
  ServantCostumeEntity_o *v6; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x2
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-18h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_4389B30 & 1) == 0 )
  {
    sub_B775C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&MissionInfoMaker_TypeInfo);
    this = (MissionListViewManager_o *)sub_B775C4(&Method_MissionListViewManager_CloseItemDetail__);
    byte_4389B30 = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v6 = resultEntity;
    v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B77694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v7, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    MissionInfoMaker__OpenCostumeReleaseDetail(v6, v7, v8);
  }
}


void __fastcall MissionListViewManager__OpenEquipDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EquipEntity_o *v7; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4389B31 & 1) == 0 )
  {
    sub_B775C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B775C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_B775C4(&MissionInfoMaker_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager_CloseItemDetail__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389B31 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v7 = (EquipEntity_o *)entity;
    v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B77694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    MissionInfoMaker__OpenEquipDetail(v7, v8, v9);
  }
}


void __fastcall MissionListViewManager__RequestInto(MissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_TObject__o *ObjectList_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_TObject__o *v5; // x20
  signed __int64 size; // x8
  unsigned __int64 v7; // x24
  int v8; // w23
  MissionListViewObject_o *v9; // x21
  System_Action_o *v10; // x22

  if ( (byte_4389B2C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    sub_B775C4(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_B775C4(&Method_MissionListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_4389B2C = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_1DF7EB0 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_15:
    sub_B7769C(ObjectList_object, v4);
  v5 = ObjectList_object;
  this->fields.callbackCount = ObjectList_object->fields._size;
  LODWORD(size) = ObjectList_object->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v7 = 0LL;
  v8 = 0;
  do
  {
    if ( v7 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = (MissionListViewObject_o *)v5->fields._items->m_Items[v7];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v9, 0LL) )
    {
      v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !v9 )
        goto LABEL_15;
      ++v8;
      MissionListViewObject__Init(v9, 4, v10, this->fields.listInDelay, 1, 0LL);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v5->fields._size;
    ++v7;
  }
  while ( (__int64)v7 < size );
  if ( !v8 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0LL);
  }
}


void __fastcall MissionListViewManager__RequestListObject(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList_object; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4389B2B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_B775C4(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_B775C4(&Method_MissionListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_4389B2B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList_object = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewManager__GetObjectList_object_(this, (const MethodInfo_1DF7EB0 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_B7769C(0LL, v8);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      ObjectList_object,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v11, delay, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_22851208(
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_22850816(this, mode, v10);
}


void __fastcall MissionListViewManager__SetMode_22850816(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t v9; // w1

  if ( (byte_4389B2A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_11644/*"RequestInto"*/);
    byte_4389B2A = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
      {
        sub_B7769C(gameObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11644/*"RequestInto"*/,
      0.0,
      0LL);
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


void __fastcall MissionListViewManager__SetMode_22851148(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_22850816(this, mode, v11);
}


void __fastcall MissionListViewManager__SetObjectItem(
        MissionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MissionListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4389B2E & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_B775C4(&MissionListViewObject_TypeInfo);
    byte_4389B2E = 1;
  }
  if ( !obj
    || (v6 = *(&MissionListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MissionListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  MissionListViewObject__Init_23708952((MissionListViewObject_o *)obj, v7, 1, 0LL);
}


void __fastcall MissionListViewManager__SetRewardItemGetEffectTitleSprite(
        MissionListViewManager_o *this,
        UnityEngine_GameObject_o *itemObj,
        int32_t effectId,
        const MethodInfo *method)
{
  System_String_o *useTreasureGetEffectName; // x20
  MissionListViewManager_c *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x19
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v13; // x8
  unsigned __int64 v14; // x10
  System_Collections_IEnumerator_c **v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  __int64 v20; // x9
  int32_t i; // w21
  UnityEngine_Object_o *Child; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_String_o *name; // x0
  __int64 v26; // x1
  WebViewObject_o *Component_WebViewObject; // x22
  MissionListViewManager_c *v28; // x0
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x19
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0

  if ( (byte_4389B47 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&MissionListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Transform_TypeInfo);
    sub_B775C4(&StringLiteral_20428/*"item_get/title_root"*/);
    sub_B775C4(&StringLiteral_23181/*"title01"*/);
    byte_4389B47 = 1;
  }
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v7 = MissionListViewManager_TypeInfo;
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v7 = MissionListViewManager_TypeInfo;
  }
  transform = (UnityEngine_Transform_o *)System_String__op_Equality(
                                           useTreasureGetEffectName,
                                           v7->static_fields->PRIZE_GET_NORMAL,
                                           0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !itemObj )
      goto LABEL_59;
    transform = UnityEngine_GameObject__get_transform(itemObj, 0LL);
    if ( !transform )
      goto LABEL_59;
    v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_20428/*"item_get/title_root"*/, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
      return;
    if ( !v10 )
LABEL_59:
      sub_B7769C(transform, v9);
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v10, 0LL);
    if ( !Enumerator )
      sub_B7769C(0LL, v11);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v30 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v30;
          p_offset += 4;
          if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_43;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_43:
        p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v13 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v14 = 0LL;
        v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
        while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v14;
          v15 += 2;
          if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
      }
      else
      {
LABEL_20:
        v16 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v17 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
              Enumerator,
              *(_QWORD *)(v16 + 8));
      v19 = (UnityEngine_Transform_o *)v17;
      if ( !v17 )
        goto LABEL_58;
      v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v20
        || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v20 - 8) != UnityEngine_Transform_TypeInfo )
      {
        v17 = sub_B77990(v17);
LABEL_58:
        sub_B7769C(v17, v18);
      }
      for ( i = 0; i < UnityEngine_Transform__get_childCount(v19, 0LL); ++i )
      {
        Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(v19, i, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v23 = UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
        if ( !v23 )
        {
          if ( !Child )
            sub_B7769C(v23, v24);
          name = UnityEngine_Object__get_name(Child, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_23181/*"title01"*/, 0LL) )
          {
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)Child,
                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            v28 = MissionListViewManager_TypeInfo;
            if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
            }
            if ( !Component_WebViewObject )
              sub_B7769C(v28, v26);
            UISprite__set_spriteName(
              (UISprite_o *)Component_WebViewObject,
              MissionListViewManager_TypeInfo->static_fields->ITEM_GET_TITLE,
              0LL);
          }
        }
      }
    }
    v33 = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
    if ( v33 )
    {
      v34 = *(_QWORD *)v33;
      v35 = v33;
      if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
      {
        v36 = 0LL;
        v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
        {
          ++v36;
          v37 += 4;
          if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
            goto LABEL_51;
        }
        v38 = v34 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_51:
        v38 = sub_B0F4C0(v33, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
    }
  }
}


void __fastcall MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_c *v3; // x0

  if ( (byte_4389B40 & 1) == 0 )
  {
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    byte_4389B40 = 1;
  }
  if ( this->fields.isTreasureEffect && !this->fields.isEffect )
  {
    *(_QWORD *)&this->fields.FADEOUT_KIND = 0x3F80000000000002LL;
  }
  else
  {
    this->fields.FADEOUT_KIND = 1;
    v3 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v3 = AvalonSceneManager_TypeInfo;
    }
    LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v3->static_fields->DEFAULT_FADE_TIME);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetupTreasureGetEffect(
        MissionListViewManager_o *this,
        int32_t itemIconId,
        const MethodInfo *method)
{
  AssetData_o *treasureGetAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v7; // x21
  UIWidget_o *Component_UIWidget; // x0
  QuestRewardBoxAction_o **p_questRewardBoxAction; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w20
  System_String_o *useTreasureGetEffectName; // x22
  MissionListViewManager_c *v18; // x0
  System_String_o *v19; // x19
  ScrTerminalListTop_c *v20; // x0

  if ( (byte_4389B44 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
    sub_B775C4(&MissionListViewManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    byte_4389B44 = 1;
  }
  treasureGetAssetData = this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_24;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               treasureGetAssetData,
                                                                               this->fields.useTreasureGetEffectName,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  treasureGetAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          Object_WarBoardWaitTimeSetting,
                                          (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !treasureGetAssetData )
    goto LABEL_24;
  v7 = (UnityEngine_GameObject_o *)treasureGetAssetData;
  treasureGetAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)treasureGetAssetData,
                                          0LL);
  if ( !treasureGetAssetData )
    goto LABEL_24;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)treasureGetAssetData, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v7, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v7,
                         (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  p_questRewardBoxAction = &this->fields.questRewardBoxAction;
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_UIWidget;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questRewardBoxAction,
    (System_Int32_array **)Component_UIWidget,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = itemIconId == 3 ? 2 : itemIconId == 2;
  if ( !this->fields.isTreasureEffect )
    goto LABEL_21;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v18 = MissionListViewManager_TypeInfo;
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v18 = MissionListViewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v18->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    v19 = this->fields.useTreasureGetEffectName;
    v20 = ScrTerminalListTop_TypeInfo;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v20 = ScrTerminalListTop_TypeInfo;
    }
    treasureGetAssetData = (AssetData_o *)System_String__op_Inequality(
                                            v19,
                                            v20->static_fields->TREASURE_GET_NORMAL,
                                            0LL);
  }
  else
  {
LABEL_21:
    treasureGetAssetData = (AssetData_o *)(&dword_0 + 1);
  }
  if ( !*p_questRewardBoxAction )
LABEL_24:
    sub_B7769C(treasureGetAssetData, *(_QWORD *)&itemIconId);
  QuestRewardBoxAction__Setup(*p_questRewardBoxAction, v16, (unsigned __int8)treasureGetAssetData & 1, 0LL);
}


void __fastcall MissionListViewManager__ShowRewardDetailInfo(
        MissionListViewManager_o *this,
        MissionListViewItem_o *selectItem,
        bool ignoreSubGiftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v11; // x8
  GiftEntity_array *v12; // x22
  __int64 v13; // x21
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  il2cpp_array_size_t max_length; // w9
  int v24; // w8
  GiftEntity_o *v25; // x21
  ItemEntity_o *Entity; // x20
  WebViewManager_o *v27; // x0
  CommonUI_o *v28; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v29; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *nameTxt; // x21
  System_String_o *rewardExtraDetailTxt; // x20
  CommonUI_o *v33; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v34; // x23
  struct GiftEntity_array *giftEnts; // x8
  const MethodInfo *v36; // x1
  int32_t type; // w0
  GiftMaster_o *v38; // x22
  bool IsServantEquip; // w23
  WebViewManager_o *v40; // x20
  ServantStatusDialog_EndDelegate_o *v41; // x22
  CommonUI_o *v42; // x0
  GiftEntity_o *v43; // x2
  ServantStatusDialog_EndDelegate_o *v44; // x3
  int32_t v45; // w0
  bool v46; // w23
  CommonUI_o *v47; // x22
  ServantStatusDialog_EndDelegate_o *v48; // x20
  CommandCodeEntity_o *cmdEnt; // x20
  WebViewManager_o *v50; // x0
  int32_t v51; // w0
  const MethodInfo *v52; // x1
  CommonUI_o *v53; // x21
  ServantStatusDialog_EndDelegate_o *v54; // x22
  struct System_String_o *MasterName_k__BackingField; // x21
  __int64 v56; // x23
  int32_t v57; // w21
  ServantStatusDialog_EndDelegate_o *v58; // x22
  CommonUI_o *v59; // x0
  int32_t v60; // w2
  ServantStatusDialog_EndDelegate_o *v61; // x3
  struct ServantEntity_o *svtEnt; // x8
  __int64 v63; // x20
  __int64 v64; // x21
  int32_t v65; // w20
  ServantStatusDialog_EndDelegate_o *v66; // x21
  const MethodInfo *v67; // x2
  int32_t objectId; // w1
  int32_t v69; // w0
  struct GiftEntity_array *v70; // x8
  GiftEntity_o *v71; // x8
  int32_t v72; // w0
  const MethodInfo *v73; // x2
  __int64 v74; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4389B2F & 1) == 0 )
  {
    sub_B775C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_B775C4(&Method_System_Func_GiftEntity__bool___ctor__);
    sub_B775C4(&System_Func_GiftEntity__bool__TypeInfo);
    sub_B775C4(&MissionInfoMaker_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager_CloseCommandCodeDetail__);
    sub_B775C4(&Method_MissionListViewManager_CloseItemDetail__);
    sub_B775C4(&Method_MissionListViewManager_CloseServantStatusDetail__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass60_0__ShowRewardDetailInfo_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass60_0_TypeInfo);
    byte_4389B2F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    goto LABEL_87;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_87;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v33 = (CommonUI_o *)Instance;
    v34 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B77694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v34,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v33 )
      goto LABEL_87;
    CommonUI__OpenItemDetailDialog_18121640(v33, nameTxt, rewardExtraDetailTxt, v34, 0LL);
    return;
  }
  if ( rewardType != 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_GiftMaster___);
  v11 = selectItem->fields.eventMissionEnt;
  if ( !v11 || !Master_WarQuestSelectionMaster )
    goto LABEL_87;
  Master_WarQuestSelectionMaster = (GiftMaster_o *)GiftMaster__GetGiftListById(
                                                     Master_WarQuestSelectionMaster,
                                                     v11->fields.giftId,
                                                     0LL);
  v12 = (GiftEntity_array *)Master_WarQuestSelectionMaster;
  if ( ignoreSubGiftEntity )
  {
    v13 = sub_B77694(MissionListViewManager___c__DisplayClass60_0_TypeInfo);
    MissionListViewManager___c__DisplayClass60_0___ctor((MissionListViewManager___c__DisplayClass60_0_o *)v13, 0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity(v12, v14);
    if ( !v13 )
      goto LABEL_87;
    *(_QWORD *)(v13 + 16) = Master_WarQuestSelectionMaster;
    sub_B77560(
      (BattleServantConfConponent_o *)(v13 + 16),
      (System_Int32_array **)Master_WarQuestSelectionMaster,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v21,
      (Il2CppObject *)v13,
      Method_MissionListViewManager___c__DisplayClass60_0__ShowRewardDetailInfo_b__0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_GiftEntity__bool___ctor__);
    v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v12,
            (System_Func_TSource__bool__o *)v21,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                       v22,
                                                       (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    v12 = (GiftEntity_array *)Master_WarQuestSelectionMaster;
  }
  if ( !v12 )
    goto LABEL_87;
  max_length = v12->max_length;
  v24 = this->fields.alphaAnimCnt % (int)max_length;
  if ( v24 >= max_length )
    goto LABEL_88;
  v25 = v12->m_Items[v24];
  if ( !v25 )
    goto LABEL_87;
  if ( v25->fields._IsReplacedData_k__BackingField )
    goto LABEL_25;
  giftEnts = selectItem->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_87;
  if ( giftEnts->max_length != 1 )
  {
    type = v25->fields.type;
    if ( type == 2 )
    {
LABEL_25:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 v25->fields.objectId,
                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_30;
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                         v25->fields.objectId,
                                                         (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      v38 = Master_WarQuestSelectionMaster;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
      v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v41 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v41,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v40 )
          goto LABEL_87;
        v42 = (CommonUI_o *)v40;
        v43 = v25;
        v44 = v41;
LABEL_53:
        CommonUI__OpenServantStatusDialog_18030528(v42, 7, v43, v44, 0LL);
        return;
      }
      v56 = *(_QWORD *)&v38->fields._MasterKind_k__BackingField;
      MasterName_k__BackingField = v38->fields._MasterName_k__BackingField;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v75.fields.currentCryptoKey = v56;
      *(_QWORD *)&v75.fields.fakeValue = MasterName_k__BackingField;
      v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v75, 0LL);
      v58 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v58,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v40 )
        goto LABEL_87;
      v59 = (CommonUI_o *)v40;
      v60 = v57;
      v61 = v58;
      goto LABEL_75;
    }
    if ( Gift__IsCommandCode(v25->fields.type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      cmdEnt = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                        v25->fields.objectId,
                                        (const MethodInfo_21FB894 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_62;
    }
    if ( Gift__IsCostumeRelease(v25->fields.type, 0LL) )
    {
      objectId = v25->fields.objectId;
LABEL_83:
      MissionListViewManager__OpenCostumeReleaseDetail(this, objectId, v67);
      return;
    }
    goto LABEL_84;
  }
  if ( MissionListViewItem__get_Type(selectItem, v8) == 2 )
  {
    v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Entity = selectItem->fields.itemEnt;
LABEL_30:
    v28 = (CommonUI_o *)v27;
    v29 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B77694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v29,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( v28 )
    {
      CommonUI__OpenItemDetailDialog(v28, Entity, v29, 50, 0LL);
      return;
    }
LABEL_87:
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  }
  v45 = MissionListViewItem__get_Type(selectItem, v36);
  if ( Gift__IsServant(v45, 0LL) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)selectItem->fields.svtEnt;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_87;
    v46 = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v47 = (CommonUI_o *)Master_WarQuestSelectionMaster;
    if ( v46 )
    {
      v48 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v48,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v47 )
        goto LABEL_87;
      v42 = v47;
      v43 = v25;
      v44 = v48;
      goto LABEL_53;
    }
    svtEnt = selectItem->fields.svtEnt;
    if ( !svtEnt )
      goto LABEL_87;
    v64 = *(_QWORD *)&svtEnt->fields.id.fields.currentCryptoKey;
    v63 = *(_QWORD *)&svtEnt->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v76.fields.currentCryptoKey = v64;
    *(_QWORD *)&v76.fields.fakeValue = v63;
    v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v76, 0LL);
    v66 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v66,
      (Il2CppObject *)this,
      Method_MissionListViewManager_CloseServantStatusDetail__,
      0LL);
    if ( !v47 )
      goto LABEL_87;
    v59 = v47;
    v60 = v65;
    v61 = v66;
LABEL_75:
    CommonUI__OpenServantStatusDialog_18069932(v59, 7, v60, v61, 0LL);
    return;
  }
  v51 = MissionListViewItem__get_Type(selectItem, v8);
  if ( !Gift__IsCommandCode(v51, 0LL) )
  {
    v69 = MissionListViewItem__get_Type(selectItem, v52);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)Gift__IsCostumeRelease(v69, 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v70 = selectItem->fields.giftEnts;
      if ( !v70 )
        goto LABEL_87;
      if ( v70->max_length )
      {
        v71 = v70->m_Items[0];
        if ( !v71 )
          goto LABEL_87;
        objectId = v71->fields.objectId;
        goto LABEL_83;
      }
LABEL_88:
      v74 = sub_B776C8(Master_WarQuestSelectionMaster);
      sub_B77668(v74, 0LL);
    }
LABEL_84:
    v72 = MissionListViewItem__get_Type(selectItem, v8);
    if ( Gift__IsEquip(v72, 0LL) )
      MissionListViewManager__OpenEquipDetail(this, v25->fields.objectId, v73);
    return;
  }
  v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  cmdEnt = selectItem->fields.cmdEnt;
LABEL_62:
  v53 = (CommonUI_o *)v50;
  v54 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v54,
    (Il2CppObject *)this,
    Method_MissionListViewManager_CloseCommandCodeDetail__,
    0LL);
  if ( !v53 )
    goto LABEL_87;
  CommonUI__OpenServantEquipStatusDialog_18072364(v53, 25, cmdEnt, 0, v54, 0LL, 0LL);
}


void __fastcall MissionListViewManager__StartEventMissionClearItemAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v8; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v31; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x21

  if ( (byte_4389B36 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass67_0__StartEventMissionClearItemAction_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass67_0_TypeInfo);
    byte_4389B36 = 1;
  }
  v8 = sub_B77694(MissionListViewManager___c__DisplayClass67_0_TypeInfo);
  MissionListViewManager___c__DisplayClass67_0___ctor((MissionListViewManager___c__DisplayClass67_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = gifts;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)gifts, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 32) = afterDetail;
  sub_B77560(
    (BattleServantConfConponent_o *)(v8 + 32),
    (System_Int32_array **)afterDetail,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  MissionListViewManager__SetTresureEffect(this, v29);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v31 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
  v33 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass67_0__StartEventMissionClearItemAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B7769C(touchBlockObj, v10);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v33, 0LL);
}


void __fastcall MissionListViewManager__StartItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x20
  AvalonSceneManager_o *Instance; // x0
  GiftEntity_array *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o **v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w2
  System_Action_o *v32; // x3
  const MethodInfo *v33; // x4
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  int32_t v37; // w21
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // x8
  const MethodInfo *v41; // x4
  int v42; // w22
  GetSvts_array *getSvtList; // x22
  struct System_String_o *age; // x23
  __int64 v45; // x24
  const MethodInfo *v46; // x3
  int32_t v47; // w23
  UnityEngine_Object_o *monitor; // x22
  int64_t userSvtId; // x22
  bool isNew; // w23
  bool Eff; // w0
  const MethodInfo *v52; // x2
  EventRewardRootComponent_o *targetRoot; // x21
  System_Action_o *v54; // x22
  __int64 v55; // x9
  __int64 v56; // x8
  __int64 v57; // x9
  __int64 v58; // x8
  GetCommandCodes_array *getCommandCodeList; // x22
  struct System_String_o *v60; // x23
  __int64 v61; // x24
  const MethodInfo *v62; // x3
  int32_t v63; // w23
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  __int64 v66; // x9
  __int64 v67; // x8
  const MethodInfo *v68; // x5
  __int64 v69; // x8
  __int64 v70; // x9
  __int64 v71; // x8
  const MethodInfo *v72; // x5
  GiftEntity_array *v73; // x2
  __int64 v74; // x3
  GiftEntity_o *v75; // x8
  __int64 v76; // x8
  __int64 v77; // x9
  __int64 v78; // x8
  WarEntity_o *v79; // x0
  WarEntity_o *v80; // x21
  const MethodInfo *v81; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  System_Action_o *v83; // x21
  const MethodInfo *v84; // x3
  __int64 v85; // x0
  MissionListViewManager_o *v86; // x0
  System_Action_o *v87; // x1
  const MethodInfo *v88; // x2
  const MethodInfo *v89; // [xsp+0h] [xbp-70h]
  WarEntity_o *v90; // [xsp+10h] [xbp-60h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+18h] [xbp-58h] BYREF
  GetCommandCodes_o *v92; // [xsp+20h] [xbp-50h] BYREF
  WarEntity_o *v93; // [xsp+28h] [xbp-48h] BYREF
  GetSvts_o *data; // [xsp+30h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_4389B37 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EquipMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&EventRewardRootComponent_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_B775C4(&MissionInfoMaker_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass68_0__StartItemGetEffectAction_b__0__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass68_0__StartItemGetEffectAction_b__1__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass68_0_TypeInfo);
    byte_4389B37 = 1;
  }
  data = 0LL;
  entity = 0LL;
  v93 = 0LL;
  resultEntity = 0LL;
  v92 = 0LL;
  v90 = 0LL;
  v9 = sub_B77694(MissionListViewManager___c__DisplayClass68_0_TypeInfo);
  MissionListViewManager___c__DisplayClass68_0___ctor((MissionListViewManager___c__DisplayClass68_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_112;
  *(_QWORD *)(v9 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = afterDetail;
  v18 = (System_Action_o **)(v9 + 24);
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)afterDetail,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v9 + 32) = gifts;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)gifts, v25, v26, v27, v28, v29, v30);
  v11 = *(GiftEntity_array **)(v9 + 32);
  *(_DWORD *)(v9 + 40) = idx;
  if ( !v11 )
    goto LABEL_112;
  if ( (signed int)v11->max_length <= idx )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_112;
    if ( AvalonSceneManager__checkNowScene(Instance, 72, 0LL) && this->fields.isEffect )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_112;
      targetRoot = (EventRewardRootComponent_o *)Instance->fields.targetRoot;
      v54 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v9,
        Method_MissionListViewManager___c__DisplayClass68_0__StartItemGetEffectAction_b__0__,
        0LL);
      if ( !targetRoot )
        goto LABEL_112;
      v55 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&targetRoot->klass->_2.bitflags2 + 1) < (unsigned int)v55
        || (EventRewardRootComponent_c *)targetRoot->klass->_2.typeHierarchy[v55 - 1] != EventRewardRootComponent_TypeInfo )
      {
        v86 = (MissionListViewManager_o *)sub_B77990(targetRoot);
        MissionListViewManager__EndItemGetEffectAction(v86, v87, v88);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(targetRoot, v54, 0LL);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v18, v52);
    }
    this->fields.isEffect = 0;
    return;
  }
  if ( !idx && this->fields.isTreasureEffect )
    MissionListViewManager__StartTreasureItemGetEffectAction(this, v11, v31, v32, v33);
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v11);
  v34 = *(_QWORD *)(v9 + 32);
  if ( !v34 )
    goto LABEL_112;
  v35 = *(int *)(v9 + 40);
  if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 24) )
    goto LABEL_113;
  v36 = *(_QWORD *)(v34 + 8 * v35 + 32);
  if ( !v36 )
    goto LABEL_112;
  v37 = *(_DWORD *)(v36 + 20);
  if ( Gift__IsServant(v37, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
    v38 = *(_QWORD *)(v9 + 32);
    if ( !v38 )
      goto LABEL_112;
    v39 = *(int *)(v9 + 40);
    if ( (unsigned int)v39 < *(_DWORD *)(v38 + 24) )
    {
      v40 = *(_QWORD *)(v38 + 8 * v39 + 32);
      if ( !v40 || !Instance )
        goto LABEL_112;
      Instance = (AvalonSceneManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           &entity,
                                           *(_DWORD *)(v40 + 24),
                                           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_112;
        Instance = (AvalonSceneManager_o *)SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
        if ( !entity )
          goto LABEL_112;
        v42 = (int)Instance;
        Instance = (AvalonSceneManager_o *)SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL);
        if ( ((v42 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_112;
          getSvtList = this->fields.getSvtList;
          v45 = *(_QWORD *)&entity->fields.id;
          age = entity->fields.age;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v96.fields.currentCryptoKey = v45;
          *(_QWORD *)&v96.fields.fakeValue = age;
          v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v96, 0LL);
          if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          }
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v47, v46) )
          {
            Instance = (AvalonSceneManager_o *)entity;
            if ( !entity )
              goto LABEL_112;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_112;
              monitor = (UnityEngine_Object_o *)Instance[16].monitor;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
              {
                Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_112;
                Instance = (AvalonSceneManager_o *)Instance[16].monitor;
                if ( !Instance )
                  goto LABEL_112;
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
LABEL_73:
              MissionListViewManager__StartRewardGetEffect(
                this,
                userSvtId,
                isNew,
                Eff,
                v37,
                *(GiftEntity_array **)(v9 + 32),
                *(_DWORD *)(v9 + 40),
                *(System_Action_o **)(v9 + 24),
                v89);
              return;
            }
LABEL_112:
            sub_B7769C(Instance, v11);
          }
        }
      }
      goto LABEL_110;
    }
LABEL_113:
    v85 = sub_B776C8(Instance);
    sub_B77668(v85, 0LL);
  }
  if ( Gift__IsCommandCode(v37, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v56 = *(_QWORD *)(v9 + 32);
    if ( !v56 )
      goto LABEL_112;
    v57 = *(int *)(v9 + 40);
    if ( (unsigned int)v57 < *(_DWORD *)(v56 + 24) )
    {
      v58 = *(_QWORD *)(v56 + 8 * v57 + 32);
      if ( !v58 || !Instance )
        goto LABEL_112;
      Instance = (AvalonSceneManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           &v93,
                                           *(_DWORD *)(v58 + 24),
                                           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v93 )
          goto LABEL_112;
        getCommandCodeList = this->fields.getCommandCodeList;
        v61 = *(_QWORD *)&v93->fields.id;
        v60 = v93->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v97.fields.currentCryptoKey = v61;
        *(_QWORD *)&v97.fields.fakeValue = v60;
        v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v97, 0LL);
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v92, v63, v62) )
        {
          this->fields.isEffect = 1;
          Instance = (AvalonSceneManager_o *)v92;
          if ( v92 )
          {
            userSvtId = v92->fields.userCommandCodeId;
            isNew = v92->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v92, 0LL);
            goto LABEL_73;
          }
          goto LABEL_112;
        }
      }
      goto LABEL_110;
    }
    goto LABEL_113;
  }
  Instance = (AvalonSceneManager_o *)Gift__IsCostumeRelease(v37, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v65 = *(_QWORD *)(v9 + 32);
    if ( !v65 )
      goto LABEL_112;
    v66 = *(int *)(v9 + 40);
    if ( (unsigned int)v66 >= *(_DWORD *)(v65 + 24) )
      goto LABEL_113;
    v67 = *(_QWORD *)(v65 + 8 * v66 + 32);
    if ( !v67 )
      goto LABEL_112;
    Instance = (AvalonSceneManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         (MissionListViewManager_o *)Instance,
                                         &resultEntity,
                                         *(_DWORD *)(v67 + 24),
                                         v64);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      this->fields.isEffect = 1;
      if ( !resultEntity )
        goto LABEL_112;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        this,
        resultEntity->fields.name,
        *(GiftEntity_array **)(v9 + 32),
        *(_DWORD *)(v9 + 40),
        *(System_Action_o **)(v9 + 24),
        v68);
      return;
    }
LABEL_110:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v9 + 32),
      *(_DWORD *)(v9 + 40) + 1,
      *(System_Action_o **)(v9 + 24),
      v41);
    return;
  }
  if ( !Gift__IsEquip(v37, 0LL) )
  {
    if ( Gift__IsItem(v37, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (AvalonSceneManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
      v76 = *(_QWORD *)(v9 + 32);
      if ( !v76 )
        goto LABEL_112;
      v77 = *(int *)(v9 + 40);
      if ( (unsigned int)v77 < *(_DWORD *)(v76 + 24) )
      {
        v78 = *(_QWORD *)(v76 + 8 * v77 + 32);
        if ( !v78 || !Instance )
          goto LABEL_112;
        v79 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                *(_DWORD *)(v78 + 24),
                (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v79 )
        {
          v80 = v79;
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_112;
          Instance = (AvalonSceneManager_o *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v80->fields.id, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            this->fields.isEffect = 1;
            MissionListViewManager__StartRewardItemGetEffect(
              this,
              v80->fields.id,
              *(GiftEntity_array **)(v9 + 32),
              *(_DWORD *)(v9 + 40),
              *(System_Action_o **)(v9 + 24),
              v81);
            return;
          }
          if ( this->fields.isTreasureEffect )
          {
            dispRewardInfoList = this->fields.dispRewardInfoList;
            if ( !dispRewardInfoList )
              goto LABEL_112;
            if ( dispRewardInfoList->fields._size >= 1 )
            {
              v83 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(
                v83,
                (Il2CppObject *)v9,
                Method_MissionListViewManager___c__DisplayClass68_0__StartItemGetEffectAction_b__1__,
                0LL);
              MissionListViewManager__LoadItemGetEffects(this, 0, v83, v84);
              return;
            }
          }
        }
        goto LABEL_110;
      }
      goto LABEL_113;
    }
    goto LABEL_110;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (AvalonSceneManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EquipMaster___);
  v69 = *(_QWORD *)(v9 + 32);
  if ( !v69 )
    goto LABEL_112;
  v70 = *(int *)(v9 + 40);
  if ( (unsigned int)v70 >= *(_DWORD *)(v69 + 24) )
    goto LABEL_113;
  v71 = *(_QWORD *)(v69 + 8 * v70 + 32);
  if ( !v71 || !Instance )
    goto LABEL_112;
  Instance = (AvalonSceneManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       &v90,
                                       *(_DWORD *)(v71 + 24),
                                       (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_110;
  this->fields.isEffect = 1;
  v73 = *(GiftEntity_array **)(v9 + 32);
  if ( !v73 )
    goto LABEL_112;
  v74 = *(int *)(v9 + 40);
  if ( (unsigned int)v74 >= v73->max_length )
    goto LABEL_113;
  v75 = v73->m_Items[v74];
  if ( !v75 )
    goto LABEL_112;
  MissionListViewManager__StartRewardEquipGetEffect(this, v75->fields.objectId, v73, v74, *v18, v72);
}


void __fastcall MissionListViewManager__StartRewardCostumeReleaseGetEffect(
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewManager_o *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v41; // x19
  System_Action_o *v42; // x22

  if ( (byte_4389B3A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass71_0__StartRewardCostumeReleaseGetEffect_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass71_0_TypeInfo);
    byte_4389B3A = 1;
  }
  v11 = sub_B77694(MissionListViewManager___c__DisplayClass71_0_TypeInfo);
  MissionListViewManager___c__DisplayClass71_0___ctor((MissionListViewManager___c__DisplayClass71_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_7;
  *(_QWORD *)(v11 + 16) = name;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_B77560(
    (BattleServantConfConponent_o *)(v11 + 48),
    (System_Int32_array **)afterDetail,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v41 = (CommonUI_o *)Instance,
        v42 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass71_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0LL),
        !v41) )
  {
LABEL_7:
    sub_B7769C(touchBlockObj, v13);
  }
  CommonUI__maskFadeout(v41, FADEOUT_KIND, FADEOUT_TIME, v42, 0LL);
}


void __fastcall MissionListViewManager__StartRewardEquipGetEffect(
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  QuestRewardInfo_o *v32; // x23
  __int64 v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x8
  __int64 v43; // x9
  WebViewManager_o *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v47; // x19
  System_Action_o *v48; // x22
  __int64 v49; // x0

  if ( (byte_4389B39 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&QuestRewardInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass70_0__StartRewardEquipGetEffect_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass70_0_TypeInfo);
    byte_4389B39 = 1;
  }
  v11 = sub_B77694(MissionListViewManager___c__DisplayClass70_0_TypeInfo);
  MissionListViewManager___c__DisplayClass70_0___ctor((MissionListViewManager___c__DisplayClass70_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)gifts, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_B77560(
    (BattleServantConfConponent_o *)(v11 + 48),
    (System_Int32_array **)afterDetail,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v32 = (QuestRewardInfo_o *)sub_B77694(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v32, 0LL);
  *(_QWORD *)(v11 + 16) = v32;
  v33 = v11 + 16;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_13;
  *(_DWORD *)(*(_QWORD *)(v11 + 16) + 16LL) = 5;
  if ( !*(_QWORD *)v33 )
    goto LABEL_13;
  *(_DWORD *)(*(_QWORD *)v33 + 20LL) = equipId;
  v40 = *(_QWORD *)(v11 + 32);
  if ( !v40 )
    goto LABEL_13;
  v41 = *(int *)(v11 + 40);
  if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 24) )
  {
    v49 = sub_B776C8(touchBlockObj);
    sub_B77668(v49, 0LL);
  }
  v42 = *(_QWORD *)(v40 + 8 * v41 + 32);
  if ( !v42 )
    goto LABEL_13;
  v43 = *(_QWORD *)(v11 + 16);
  if ( !v43
    || (*(_DWORD *)(v43 + 24) = *(_DWORD *)(v42 + 28),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v47 = (CommonUI_o *)Instance,
        v48 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v48,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass70_0__StartRewardEquipGetEffect_b__0__,
          0LL),
        !v47) )
  {
LABEL_13:
    sub_B7769C(touchBlockObj, v13);
  }
  CommonUI__maskFadeout(v47, FADEOUT_KIND, FADEOUT_TIME, v48, 0LL);
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
  __int64 v17; // x22
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewManager_o *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v41; // x19
  System_Action_o *v42; // x21

  if ( (byte_4389B3C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass73_0__StartRewardGetEffect_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass73_0_TypeInfo);
    byte_4389B3C = 1;
  }
  v17 = sub_B77694(MissionListViewManager___c__DisplayClass73_0_TypeInfo);
  MissionListViewManager___c__DisplayClass73_0___ctor((MissionListViewManager___c__DisplayClass73_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_7;
  *(_DWORD *)(v17 + 16) = giftType;
  *(_QWORD *)(v17 + 24) = userSvtID;
  *(_QWORD *)(v17 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v17 + 40) = isDoEffect;
  *(_BYTE *)(v17 + 41) = isNew;
  *(_QWORD *)(v17 + 48) = gifts;
  sub_B77560((BattleServantConfConponent_o *)(v17 + 48), (System_Int32_array **)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 64) = afterDetail;
  *(_DWORD *)(v17 + 56) = idx;
  sub_B77560(
    (BattleServantConfConponent_o *)(v17 + 64),
    (System_Int32_array **)afterDetail,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v41 = (CommonUI_o *)Instance,
        v42 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v17,
          Method_MissionListViewManager___c__DisplayClass73_0__StartRewardGetEffect_b__0__,
          0LL),
        !v41) )
  {
LABEL_7:
    sub_B7769C(touchBlockObj, v19);
  }
  CommonUI__maskFadeout(v41, FADEOUT_KIND, FADEOUT_TIME, v42, 0LL);
}


void __fastcall MissionListViewManager__StartRewardItemGetEffect(
        MissionListViewManager_o *this,
        int32_t itemId,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x19
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  QuestRewardInfo_o *v34; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  __int64 v45; // x9
  unsigned int ItemEffectId; // w0
  const MethodInfo *v47; // x4
  __int64 v48; // x8
  __int64 v49; // x8
  int v50; // w10
  unsigned int v51; // w9
  __int64 v52; // x10
  __int64 v53; // x11
  __int64 v54; // x11
  __int64 v55; // x10
  CommonUI_o *v56; // x20
  AvalonSceneManager_c *v57; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v59; // x21
  __int64 v60; // x0

  if ( (byte_4389B3B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&QuestRewardInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass72_0__StartRewardItemGetEffect_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass72_0_TypeInfo);
    byte_4389B3B = 1;
  }
  v11 = sub_B77694(MissionListViewManager___c__DisplayClass72_0_TypeInfo);
  MissionListViewManager___c__DisplayClass72_0___ctor((MissionListViewManager___c__DisplayClass72_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_34;
  *(_QWORD *)(v11 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = gifts;
  v20 = (__int64 *)(v11 + 40);
  sub_B77560((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)gifts, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v11 + 56) = afterDetail;
  v27 = v11 + 32;
  *(_DWORD *)(v11 + 48) = idx;
  sub_B77560(
    (BattleServantConfConponent_o *)(v11 + 56),
    (System_Int32_array **)afterDetail,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (QuestRewardInfo_o *)sub_B77694(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v34, 0LL);
  *(_QWORD *)(v11 + 32) = v34;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  v41 = *(_QWORD *)(v11 + 32);
  if ( !v41 )
    goto LABEL_34;
  *(_DWORD *)(v41 + 16) = 2;
  if ( !*(_QWORD *)v27 )
    goto LABEL_34;
  *(_DWORD *)(*(_QWORD *)v27 + 20LL) = itemId;
  v42 = *(_QWORD *)(v11 + 40);
  if ( !v42 )
    goto LABEL_34;
  v43 = *(int *)(v11 + 48);
  if ( (unsigned int)v43 >= *(_DWORD *)(v42 + 24) )
    goto LABEL_35;
  v44 = *(_QWORD *)(v42 + 8 * v43 + 32);
  if ( !v44 )
    goto LABEL_34;
  v45 = *(_QWORD *)(v11 + 32);
  if ( !v45 )
    goto LABEL_34;
  *(_DWORD *)(v45 + 24) = *(_DWORD *)(v44 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v11 + 32), 0LL);
  *(_DWORD *)(v11 + 16) = ItemEffectId;
  v13 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_34;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v13,
         (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
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
    goto LABEL_34;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)Instance,
    *(_DWORD *)(v11 + 16),
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  v48 = *(_QWORD *)(v11 + 32);
  if ( !v48 )
    goto LABEL_34;
  *(_DWORD *)(v48 + 24) = 0;
  v49 = *v20;
  if ( !*v20 )
    goto LABEL_34;
  v50 = *(_DWORD *)(v49 + 24);
  if ( v50 >= 1 )
  {
    v51 = 0;
    while ( v51 < v50 )
    {
      v52 = *(_QWORD *)(v11 + 40);
      if ( !v52 )
        goto LABEL_34;
      v53 = *(int *)(v11 + 48);
      if ( (unsigned int)v53 >= *(_DWORD *)(v52 + 24) )
        break;
      v54 = *(_QWORD *)(v52 + 8 * v53 + 32);
      if ( !v54 )
        goto LABEL_34;
      v55 = *(_QWORD *)(v49 + 8LL * (int)v51 + 32);
      if ( !v55 )
        goto LABEL_34;
      if ( *(_DWORD *)(v54 + 24) == *(_DWORD *)(v55 + 24) )
      {
        if ( !*(_QWORD *)v27 )
          goto LABEL_34;
        *(_DWORD *)(*(_QWORD *)v27 + 24LL) += *(_DWORD *)(v55 + 28);
      }
      v50 = *(_DWORD *)(v49 + 24);
      if ( (int)++v51 >= v50 )
        goto LABEL_28;
    }
LABEL_35:
    v60 = sub_B776C8(Instance);
    sub_B77668(v60, 0LL);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v56 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v57 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v57 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v57->static_fields->DEFAULT_FADE_TIME;
  v59 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass72_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v56 )
LABEL_34:
    sub_B7769C(Instance, v13);
  CommonUI__maskFadeout(v56, 1, DEFAULT_FADE_TIME, v59, 0LL);
}


void __fastcall MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v9; // x20
  MissionListViewManager_o *rewardItemGetEffectPlayList; // x0
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x21
  unsigned int EffectId; // w0
  const MethodInfo *v33; // x4
  __int64 v34; // x2
  ScrTerminalListTop_c *v35; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v37; // x0
  System_String_o *v38; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v40; // x21
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  QuestRewardItemAction_o *v48; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  CommonUI_o *Instance; // x19
  System_Action_o *v52; // x21
  int v53; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4389B42 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardItemGetEffectAfterTresureEffect_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass79_0_TypeInfo);
    byte_4389B42 = 1;
  }
  v9 = sub_B77694(MissionListViewManager___c__DisplayClass79_0_TypeInfo);
  MissionListViewManager___c__DisplayClass79_0___ctor((MissionListViewManager___c__DisplayClass79_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_25;
  *(_QWORD *)(v9 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = gifts;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)gifts, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 56) = afterDetail;
  *(_DWORD *)(v9 + 48) = idx;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 56),
    (System_Int32_array **)afterDetail,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_25;
  if ( !dispRewardInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  EffectId = MissionListViewManager__GetItemGetEffectId(
               rewardItemGetEffectPlayList,
               dispRewardInfoList->fields._items->m_Items[0],
               v30);
  *(_DWORD *)(v9 + 16) = EffectId;
  v11 = EffectId;
  rewardItemGetEffectPlayList = (MissionListViewManager_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)rewardItemGetEffectPlayList,
         v11,
         (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v9 + 40),
      *(_DWORD *)(v9 + 48) + 1,
      *(System_Action_o **)(v9 + 56),
      v33);
    return;
  }
  rewardItemGetEffectPlayList = (MissionListViewManager_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_25;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)rewardItemGetEffectPlayList,
    *(_DWORD *)(v9 + 16),
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  v35 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v35 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v35->static_fields->ITEM_GET_EFFECT_NAME;
  v53 = *(_DWORD *)(v9 + 16);
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v34);
  rewardItemGetEffectPlayList = (MissionListViewManager_o *)System_String__Format(ITEM_GET_EFFECT_NAME, v37, 0LL);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_25;
  v38 = (System_String_o *)rewardItemGetEffectPlayList;
  rewardItemGetEffectPlayList = (MissionListViewManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.itemGetAssetDatas,
                                                              *(_DWORD *)(v9 + 16),
                                                              (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_25;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)rewardItemGetEffectPlayList,
                                                                               v38,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rewardItemGetEffectPlayList = (MissionListViewManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_25;
  v40 = (UnityEngine_GameObject_o *)rewardItemGetEffectPlayList;
  rewardItemGetEffectPlayList = (MissionListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)rewardItemGetEffectPlayList,
                                                              0LL);
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_25;
  UnityEngine_Transform__set_parent(
    (UnityEngine_Transform_o *)rewardItemGetEffectPlayList,
    this->fields.instantiatingPOS,
    0LL);
  GameObjectExtensions__ResetTransform(v40, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v40,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v9 + 24) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 24), Component_UIWidget, v42, v43, v44, v45, v46, v47);
  rewardItemGetEffectPlayList = (MissionListViewManager_o *)this->fields.dispRewardInfoList;
  if ( !rewardItemGetEffectPlayList
    || (v48 = *(QuestRewardItemAction_o **)(v9 + 24),
        rewardItemGetEffectPlayList = (MissionListViewManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)rewardItemGetEffectPlayList,
                                                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__),
        !v48)
    || (QuestRewardItemAction__Setup_22569904(
          v48,
          (QuestRewardInfo_array *)rewardItemGetEffectPlayList,
          *(_DWORD *)(v9 + 16) == 0,
          0LL),
        MissionListViewManager__SetRewardItemGetEffectTitleSprite(this, v40, v49, v50),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v52 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v52,
          (Il2CppObject *)v9,
          Method_MissionListViewManager___c__DisplayClass79_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
          0LL),
        !Instance) )
  {
LABEL_25:
    sub_B7769C(rewardItemGetEffectPlayList, v11);
  }
  CommonUI__maskFadeout(Instance, 2, 1.0, v52, 0LL);
}


void __fastcall MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct GetSvts_array *getSvtList; // x8
  WebViewManager_o *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v26; // x19
  System_Action_o *v27; // x22

  if ( (byte_4389B3D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass74_0__StartSvtListGetEffect_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass74_0_TypeInfo);
    byte_4389B3D = 1;
  }
  v7 = sub_B77694(MissionListViewManager___c__DisplayClass74_0_TypeInfo);
  MissionListViewManager___c__DisplayClass74_0___ctor((MissionListViewManager___c__DisplayClass74_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = callCnt;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v7 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v26 = (CommonUI_o *)Instance;
    v27 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v7,
      Method_MissionListViewManager___c__DisplayClass74_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( v26 )
    {
      CommonUI__maskFadeout(v26, FADEOUT_KIND, FADEOUT_TIME, v27, 0LL);
      return;
    }
LABEL_9:
    sub_B7769C(v8, v9);
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
}


void __fastcall MissionListViewManager__StartTreasureItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  MissionListViewManager___c_c *v8; // x8
  struct MissionListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__78_0; // x22
  Il2CppObject *v11; // x23
  struct MissionListViewManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  MissionListViewManager___c_c *v19; // x0
  struct MissionListViewManager___c_StaticFields *v20; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__78_1; // x22
  Il2CppObject *v22; // x23
  struct MissionListViewManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  struct System_Collections_Generic_List_QuestRewardInfo__o **p_dispRewardInfoList; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  MissionListViewManager_o *ItemEffect; // x0
  __int64 v40; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v42; // w23
  Il2CppClass **v43; // x28
  Il2CppClass *v44; // x8
  char *v45; // x28
  Il2CppClass *v46; // t1
  const MethodInfo *v47; // x2
  QuestRewardInfo_o *v48; // x21
  int32_t size; // w28
  __int64 v50; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4389B41 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_GiftEntity___);
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_B775C4(&Method_System_Func_GiftEntity__bool___ctor__);
    sub_B775C4(&System_Func_GiftEntity__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    sub_B775C4(&MissionListViewManager_TypeInfo);
    sub_B775C4(&QuestRewardInfo_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__78_0__);
    sub_B775C4(&Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__78_1__);
    sub_B775C4(&MissionListViewManager___c_TypeInfo);
    byte_4389B41 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
  v8 = MissionListViewManager___c_TypeInfo;
  if ( (BYTE3(MissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
    v8 = MissionListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__78_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__78_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__78_0,
      v11,
      Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__78_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_GiftEntity__bool___ctor__);
    v12 = MissionListViewManager___c_TypeInfo->static_fields;
    v12->__9__78_0 = (struct System_Func_GiftEntity__bool__o *)_9__78_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v12->__9__78_0,
      (System_Int32_array **)_9__78_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)gifts,
         (System_Func_T__bool__o *)_9__78_0,
         (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v19 = MissionListViewManager___c_TypeInfo;
    if ( (BYTE3(MissionListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
      v19 = MissionListViewManager___c_TypeInfo;
    }
    v20 = v19->static_fields;
    _9__78_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v20->__9__78_1;
    if ( !_9__78_1 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v20 = MissionListViewManager___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v20->__9;
      _9__78_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__78_1,
        v22,
        Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__78_1__,
        (const MethodInfo_29E92C4 *)Method_System_Func_GiftEntity__bool___ctor__);
      v23 = MissionListViewManager___c_TypeInfo->static_fields;
      v23->__9__78_1 = (struct System_Func_GiftEntity__bool__o *)_9__78_1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v23->__9__78_1,
        (System_Int32_array **)_9__78_1,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)gifts,
            (System_Func_TSource__bool__o *)_9__78_1,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    gifts = (GiftEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v30,
                                  (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  p_dispRewardInfoList = &this->fields.dispRewardInfoList;
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v31;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dispRewardInfoList,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !gifts )
    goto LABEL_46;
  max_length = gifts->max_length;
  if ( max_length >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= max_length )
      {
LABEL_47:
        v50 = sub_B776C8(ItemEffect);
        sub_B77668(v50, 0LL);
      }
      v43 = &gifts->obj.klass + (int)v42;
      v46 = v43[4];
      v45 = (char *)(v43 + 4);
      v44 = v46;
      if ( !v46 || !Master_WarQuestSelectionMaster )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                 Master_WarQuestSelectionMaster,
                                                 &entity,
                                                 (int32_t)v44->_1.namespaze,
                                                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   entity->fields.id,
                                                   v47);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v48 = (QuestRewardInfo_o *)sub_B77694(QuestRewardInfo_TypeInfo);
          QuestRewardInfo___ctor(v48, 0LL);
          if ( !v48 )
            break;
          v48->fields.type = 2;
          if ( !entity )
            break;
          v48->fields.objectId = entity->fields.id;
          if ( v42 >= gifts->max_length )
            goto LABEL_47;
          if ( !*(_QWORD *)v45 )
            break;
          v48->fields.num = *(_DWORD *)(*(_QWORD *)v45 + 28LL);
          if ( !*p_dispRewardInfoList )
            break;
          ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          size = (*p_dispRewardInfoList)->fields._size;
          if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
            ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          }
          if ( size < SLODWORD(ItemEffect->fields.itemList->fields._syncRoot) )
          {
            ItemEffect = (MissionListViewManager_o *)*p_dispRewardInfoList;
            if ( !*p_dispRewardInfoList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ItemEffect,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestRewardInfo__Add__);
          }
        }
      }
      max_length = gifts->max_length;
      if ( (int)++v42 >= max_length )
        return;
    }
LABEL_46:
    sub_B7769C(ItemEffect, v40);
  }
}


void __fastcall MissionListViewManager__SvtEffCaller(
        MissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  AvalonSceneManager_c *v6; // x0
  __int64 v7; // x1
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
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v21; // x20

  if ( (byte_4389B3E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass75_0__SvtEffCaller_b__0__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass75_0_TypeInfo);
    byte_4389B3E = 1;
  }
  v5 = sub_B77694(MissionListViewManager___c__DisplayClass75_0_TypeInfo);
  MissionListViewManager___c__DisplayClass75_0___ctor((MissionListViewManager___c__DisplayClass75_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  svtRewardComp = this->fields.svtRewardComp;
  v21 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass75_0__SvtEffCaller_b__0__,
    0LL);
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtRewardComp )
LABEL_9:
    sub_B7769C(v6, v7);
  ServantRewardAction__Play(svtRewardComp, v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  int32_t v9; // w20
  System_String_o *v10; // x0
  int32_t v11; // w21
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = objectId;
  if ( (byte_4389B3F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_4389B3F = 1;
  }
  Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_9;
  v7 = Master_WarQuestSelectionMaster;
  v8 = System_String__Substring_44965672(
         Master_WarQuestSelectionMaster,
         0,
         Master_WarQuestSelectionMaster->fields.m_stringLength - 2,
         0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  v10 = System_String__Substring(v7, v7->fields.m_stringLength - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  return ServantCostumeMaster__TryGetEntity(
           (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
           resultEntity,
           v9,
           v11,
           0LL);
}


void __fastcall MissionListViewManager__Update(MissionListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  MissionListViewManager__UpdateAnim(this, v3);
}


void __fastcall MissionListViewManager__UpdateAnim(MissionListViewManager_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_rewardIconAlphaCalculator; // x20
  System_Int32_array **v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
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

  if ( (byte_4389B28 & 1) == 0 )
  {
    sub_B775C4(&MissionListViewManager_TypeInfo);
    sub_B775C4(&Method_TransitionCalculator_float__Update__);
    byte_4389B28 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v5 = (System_Int32_array **)MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = (struct AlphaTransitionCalculator_o *)v5;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator, v5, v6, v7, v8, v9, v10, v11);
    rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
    if ( !*p_rewardIconAlphaCalculator )
      goto LABEL_27;
    AlphaTransitionCalculator__MakeFadeInFinished(rewardIconAlphaCalculator, 0LL);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !rewardIconAlphaCalculator )
      goto LABEL_27;
  }
  v14 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_2A1A8DC *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v14;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_27;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0LL) )
  {
    v15 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v17 = v15;
    v18 = MissionListViewManager_TypeInfo;
    if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
      v18 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v17 - alphaAnimTimeOld) >= v18->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
      if ( !*p_rewardIconAlphaCalculator )
        goto LABEL_27;
      AlphaTransitionCalculator__StartFadeOut(rewardIconAlphaCalculator, 0LL);
    }
  }
  rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
  if ( !*p_rewardIconAlphaCalculator )
    goto LABEL_27;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(rewardIconAlphaCalculator, 0LL) )
    return;
  rewardIconAlphaCalculator = *p_rewardIconAlphaCalculator;
  if ( !*p_rewardIconAlphaCalculator )
LABEL_27:
    sub_B7769C(rewardIconAlphaCalculator, v12);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0LL);
  v19 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v19;
  v21 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v22 = MissionListViewManager_TypeInfo;
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v22 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v22->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v21 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v24 = this->fields.alphaAnimCnt;
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v24 - ALPHA_ANIM_COUNT_RESET_VAL;
  }
  ((void (__fastcall *)(MissionListViewManager_o *, void *))this->klass->vtable._12_OnChangeAlphaAnim.method)(
    this,
    this->klass[1]._1.image);
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

  if ( (byte_4389B26 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4389B26 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B77990(v7);
  MissionListViewManager__remove_callbackFunc2(v10, v11, v12);
}


float __fastcall MissionListViewManager__get_AlphaAnimNow(MissionListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
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

  if ( (byte_4389B27 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4389B27 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B77990(v7);
  MissionListViewManager__get_ReceiveMissionReward(v10, v11);
}


void __fastcall MissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MissionListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_43889D5 & 1) == 0 )
  {
    sub_B775C4(&MissionListViewManager___c_TypeInfo);
    byte_43889D5 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(MissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MissionListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionListViewManager___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall MissionListViewManager___c___ctor(MissionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionListViewManager___c___StartTreasureItemGetEffectAction_b__78_0(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return !Gift__IsItem_28103496(x->fields.type, 0LL);
}


bool __fastcall MissionListViewManager___c___StartTreasureItemGetEffectAction_b__78_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return Gift__IsItem_28103496(x->fields.type, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass60_0___ctor(
        MissionListViewManager___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionListViewManager___c__DisplayClass60_0___ShowRewardDetailInfo_b__0(
        MissionListViewManager___c__DisplayClass60_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  return this->fields.subGiftEntity != entity;
}


void __fastcall MissionListViewManager___c__DisplayClass67_0___ctor(
        MissionListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass67_0___StartEventMissionClearItemAction_b__0(
        MissionListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  System_Action_o *klass; // x22
  MissionListViewManager_o *v4; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_43889D6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass67_0_o *)sub_B775C4(&Method_MissionListViewManager___c__DisplayClass67_0__StartEventMissionClearItemAction_b__1__);
    byte_43889D6 = 1;
  }
  klass = (System_Action_o *)v2[3].klass;
  v4 = (MissionListViewManager_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_MissionListViewManager___c__DisplayClass67_0__StartEventMissionClearItemAction_b__1__,
      0LL);
    v2[3].klass = (Il2CppClass *)klass;
    sub_B77560(&v2[3]);
  }
  if ( !v4 )
    sub_B7769C(this, method);
  MissionListViewManager__LoadTreasureGetEffect(v4, klass, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass67_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x0
  struct MissionListViewManager_o *v4; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22

  if ( (byte_43889D7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass67_0__StartEventMissionClearItemAction_b__2__);
    byte_43889D7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  MissionListViewManager__SetupTreasureGetEffect(_4__this, _4__this->fields.giftIconId, 0LL);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_9;
  questRewardBoxAction = v4->fields.questRewardBoxAction;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass67_0__StartEventMissionClearItemAction_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B77560(&this->fields.__9__2);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_B7769C(_4__this, method);
  QuestRewardBoxAction__Play(questRewardBoxAction, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass67_0___StartEventMissionClearItemAction_b__2(
        MissionListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass67_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct MissionListViewManager_o *v5; // x8
  AssetData_o *treasureGetAssetData; // x20

  v2 = this;
  if ( (byte_43889D8 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass67_0_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43889D8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (MissionListViewManager___c__DisplayClass67_0_o *)_4__this->fields.questRewardBoxAction;
  if ( !this )
    goto LABEL_14;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_14;
  treasureGetAssetData = v5->fields.treasureGetAssetData;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_24402476(treasureGetAssetData, 0LL);
  this = (MissionListViewManager___c__DisplayClass67_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_B7769C(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v2->fields.gifts,
    0,
    v2->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass68_0___ctor(
        MissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass68_0___StartItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  MissionListViewManager__EndItemGetEffectAction(_4__this, this->fields.afterDetail, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass68_0___StartItemGetEffectAction_b__1(
        MissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this->fields.isEffect = 1, !this->fields.__4__this) )
    sub_B7769C(this, method);
  MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
    this->fields.__4__this,
    this->fields.gifts,
    this->fields.idx,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass69_0___ctor(
        MissionListViewManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass69_0___EndItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8
  MissionListViewManager___c__DisplayClass69_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MissionListViewManager___c__DisplayClass69_0_o *)_4__this->fields.touchBlockObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (MissionListViewManager___c__DisplayClass69_0_o *)v3->fields.afterDetail) == 0LL) )
  {
    sub_B7769C(this, method);
  }
  System_Action__Invoke((System_Action_o *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass70_0___ctor(
        MissionListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass70_0___StartRewardEquipGetEffect_b__0(
        MissionListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20

  if ( (byte_43889D9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass70_0__StartRewardEquipGetEffect_b__1__);
    byte_43889D9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass70_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B77560(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B7769C(Instance, v4);
  CommonUI__LoadEquipGetEffect(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass70_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_43889DA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass70_0__StartRewardEquipGetEffect_b__2__);
    byte_43889DA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass70_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B77560(&this->fields.__9__2);
  }
  if ( !v6 )
    sub_B7769C(Instance, v4);
  CommonUI__OpenEquipGetEffect(v6, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass70_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_43889DB & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43889DB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___ctor(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___StartRewardCostumeReleaseGetEffect_b__0(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20

  if ( (byte_43889DC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass71_0__StartRewardCostumeReleaseGetEffect_b__1__);
    byte_43889DC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass71_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B77560(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B7769C(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  System_String_o *name; // x20

  if ( (byte_43889DD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass71_0__StartRewardCostumeReleaseGetEffect_b__2__);
    byte_43889DD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass71_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B77560(&this->fields.__9__2);
  }
  if ( !v6 )
    sub_B7769C(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v6, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_43889DE & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43889DE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass72_0___ctor(
        MissionListViewManager___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass72_0___StartRewardItemGetEffect_b__0(
        MissionListViewManager___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionInfoMaker_c *v4; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v9; // x20
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43889DF & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&MissionInfoMaker_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass72_0__StartRewardItemGetEffect_b__1__);
    byte_43889DF = 1;
  }
  v4 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v4 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v4->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v2);
  v7 = System_String__Format(ITEM_GET_ASSET_NAME, v6, 0LL);
  _9__1 = this->fields.__9__1;
  v9 = v7;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass72_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B77560(&this->fields.__9__1);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass72_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass72_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  System_String_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AssetData_o *monitor; // x21
  MissionInfoMaker_c *v10; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v12; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v14; // x21
  struct MissionListViewManager_o *_4__this; // x8
  QuestRewardItemAction_o *klass; // x19
  System_Action_o *v17; // x21
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43889E0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&MissionInfoMaker_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass72_1__StartRewardItemGetEffect_b__2__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass72_1_TypeInfo);
    byte_43889E0 = 1;
  }
  v5 = (Il2CppObject *)sub_B77694(MissionListViewManager___c__DisplayClass72_1_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_17;
  v5[2].klass = (Il2CppClass *)this;
  sub_B77560(&v5[2]);
  v5[1].monitor = data;
  sub_B77560(&v5[1].monitor);
  monitor = (AssetData_o *)v5[1].monitor;
  v10 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v10 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v10->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v8);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v12, 0LL);
  if ( !monitor )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               monitor,
                                                                               transform,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   Object_WarBoardWaitTimeSetting,
                                   (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_17;
  v14 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v14, 0LL);
  v5[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                 v14,
                                 (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  sub_B77560(&v5[1]);
  transform = (System_String_o *)v5[1].klass;
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        klass = (QuestRewardItemAction_o *)v5[1].klass,
        v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          v5,
          Method_MissionListViewManager___c__DisplayClass72_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !klass) )
  {
LABEL_17:
    sub_B7769C(transform, v7);
  }
  QuestRewardItemAction__Play(klass, 0, v17, 0.0, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass72_1___ctor(
        MissionListViewManager___c__DisplayClass72_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass72_1___StartRewardItemGetEffect_b__2(
        MissionListViewManager___c__DisplayClass72_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mRewardItemAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass72_0_o *CS___8__locals1; // x8

  if ( (byte_43889E1 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43889E1 = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_13;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_24402476(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_13:
    sub_B7769C(mRewardItemAction, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___ctor(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartRewardGetEffect_b__0(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v6; // x20

  if ( (byte_43889E2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass73_0__StartRewardGetEffect_b__1__);
    byte_43889E2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass73_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B77560(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B7769C(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  UserServantEntity_o *v7; // x21
  struct MissionListViewManager_o *v8; // x8
  struct MissionListViewManager_o *v9; // x8
  ServantRewardAction_o *svtRewardComp; // x20
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  __int128 v14; // q1
  int32_t v15; // w22
  int64_t v16; // x0
  __int64 v17; // x8
  int64_t v18; // x21
  bool isNew; // w5
  int32_t v20; // w3
  bool v21; // w6
  int32_t v22; // w7
  ServantRewardAction_o *v23; // x0
  int32_t v24; // w1
  int64_t v25; // x2
  UserServantEntity_o *v26; // x0
  struct MissionListViewManager_o *v27; // x20
  UserServantEntity_o *v28; // x21
  struct MissionListViewManager_o *v29; // x8
  struct MissionListViewManager_o *v30; // x8
  ServantRewardAction_o *v31; // x20
  __int128 v32; // q1
  bool v33; // w2
  int64_t v34; // x1
  bool v35; // w3
  int32_t v36; // w4
  ServantRewardAction_o *v37; // x0
  int32_t v38; // w0
  __int128 v39; // q1
  int32_t v40; // w22
  int64_t v41; // x0
  __int64 v42; // x8
  int64_t v43; // x21
  __int128 v44; // q1
  System_Action_o *_9__2; // x21
  MissionListViewManager_o *v46; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+90h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_43889E3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass73_0__StartRewardGetEffect_b__2__);
    byte_43889E3 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                 this->fields.userSvtID,
                 (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v7 = Entity;
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v8 = this->fields.__4__this;
      if ( v8 )
      {
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                                      (SummonAssetManager_o *)Master_WarQuestSelectionMaster,
                                                      v8->fields.instantiatingPOS,
                                                      0,
                                                      0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
            sub_B77560(&_4__this->fields.svtRewardComp);
            v9 = this->fields.__4__this;
            if ( v9 )
            {
              if ( v7 )
              {
                svtRewardComp = v9->fields.svtRewardComp;
                v12 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
                v11 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
                if ( this->fields.isDoEffect )
                {
                  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v52.fields.currentCryptoKey = v12;
                  *(_QWORD *)&v52.fields.fakeValue = v11;
                  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v52, 0LL);
                  v14 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
                  v15 = v13;
                  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v51.fields.fakeValue = v14;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v50 = v51;
                  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
                  v17 = *(_QWORD *)&v7->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v53.fields.fakeValue = *(_QWORD *)&v7->fields.limitCount.fields.fakeValue;
                  v18 = v16;
                  *(_QWORD *)&v53.fields.currentCryptoKey = v17;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                     v53,
                                                     0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v20 = Master_WarQuestSelectionMaster;
                    v21 = 1;
                    v22 = 14;
                    v23 = svtRewardComp;
                    v24 = v15;
                    v25 = v18;
LABEL_46:
                    ServantRewardAction__Setup(v23, v24, v25, v20, 1, isNew, v21, v22, 0LL);
                    goto LABEL_53;
                  }
                }
                else
                {
                  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v54.fields.currentCryptoKey = v12;
                  *(_QWORD *)&v54.fields.fakeValue = v11;
                  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v54, 0LL);
                  v39 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
                  v40 = v38;
                  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v51.fields.fakeValue = v39;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v49 = v51;
                  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
                  v42 = *(_QWORD *)&v7->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&v7->fields.limitCount.fields.fakeValue;
                  v43 = v41;
                  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                     v55,
                                                     0LL);
                  if ( svtRewardComp )
                  {
                    v20 = Master_WarQuestSelectionMaster;
                    v22 = 6;
                    v23 = svtRewardComp;
                    v24 = v40;
                    v25 = v43;
                    isNew = 0;
                    v21 = 0;
                    goto LABEL_46;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  Master_WarQuestSelectionMaster = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v26 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
          this->fields.userSvtID,
          (const MethodInfo_21FBABC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v27 = this->fields.__4__this;
  v28 = v26;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_57;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                              (SummonAssetManager_o *)Master_WarQuestSelectionMaster,
                                              v29->fields.instantiatingPOS,
                                              0,
                                              0LL);
  if ( !v27 )
    goto LABEL_57;
  v27->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B77560(&v27->fields.svtRewardComp);
  v30 = this->fields.__4__this;
  if ( !v30 || !v28 )
    goto LABEL_57;
  v31 = v30->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v32 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
    *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v51.fields.fakeValue = v32;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v48 = v51;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v48, 0LL);
    if ( !v31 )
      goto LABEL_57;
    v33 = this->fields.isNew;
    v34 = Master_WarQuestSelectionMaster;
    v35 = 1;
    v36 = 14;
    v37 = v31;
  }
  else
  {
    v44 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
    *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v51.fields.fakeValue = v44;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v47 = v51;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v47, 0LL);
    if ( !v31 )
      goto LABEL_57;
    v34 = Master_WarQuestSelectionMaster;
    v36 = 6;
    v37 = v31;
    v33 = 0;
    v35 = 0;
  }
  ServantRewardAction__SetupCommandCode_28930748(v37, v34, v33, v35, v36, 0LL);
LABEL_53:
  _9__2 = this->fields.__9__2;
  v46 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass73_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B77560(&this->fields.__9__2);
  }
  if ( !v46 )
    goto LABEL_57;
  MissionListViewManager__SvtEffCaller(v46, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8

  if ( (byte_43889E4 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_43889E4 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___ctor(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartSvtListGetEffect_b__0(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v8; // x8
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *v10; // x21
  UserServantEntity_o *v11; // x20
  struct MissionListViewManager_o *v12; // x8
  struct MissionListViewManager_o *v13; // x8
  struct GetSvts_array *v14; // x8
  __int64 v15; // x9
  struct MissionListViewManager_o *v16; // x9
  ServantRewardAction_o *svtRewardComp; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w0
  __int128 v21; // q1
  int32_t v22; // w22
  int64_t v23; // x0
  __int64 v24; // x8
  int64_t v25; // x20
  struct MissionListViewManager_o *v26; // x8
  struct GetSvts_array *v27; // x8
  __int64 v28; // x9
  GetSvts_o *v29; // x8
  int32_t v30; // w0
  __int128 v31; // q1
  int32_t v32; // w22
  int64_t v33; // x0
  __int64 v34; // x8
  int64_t v35; // x20
  System_Action_o *_9__1; // x21
  MissionListViewManager_o *v37; // x20
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+50h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_43889E5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass74_0__StartSvtListGetEffect_b__1__);
    byte_43889E5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_45;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_46;
  v8 = getSvtList->m_Items[callCnt];
  if ( !v8 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             Master_WarQuestSelectionMaster,
             v8->fields.userSvtId,
             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v10 = this->fields.__4__this;
  v11 = Entity;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SummonAssetManager__InstantiateSvtGetPrefab((SummonAssetManager_o *)Master_WarQuestSelectionMaster, v12->fields.instantiatingPOS, 0, 0LL);
  if ( !v10 )
    goto LABEL_45;
  v10->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B77560(&v10->fields.svtRewardComp);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_45;
  v14 = v13->fields.getSvtList;
  if ( !v14 )
    goto LABEL_45;
  v15 = this->fields.callCnt;
  if ( (unsigned int)v15 >= v14->max_length )
  {
LABEL_46:
    v38 = sub_B776C8(Master_WarQuestSelectionMaster);
    sub_B77668(v38, 0LL);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v14->m_Items[v15];
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_WarQuestSelectionMaster, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 || !v11 )
    goto LABEL_45;
  svtRewardComp = v16->fields.svtRewardComp;
  v19 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v44.fields.currentCryptoKey = v19;
    *(_QWORD *)&v44.fields.fakeValue = v18;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v44, 0LL);
    v31 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
    v32 = v30;
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v41.fields.fakeValue = v31;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v39 = v41;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v39, 0LL);
    v34 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
    v35 = v33;
    *(_QWORD *)&v45.fields.currentCryptoKey = v34;
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v45, 0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v32, v35, (int32_t)Master_WarQuestSelectionMaster, 1, 0, 0, 2, 0LL);
      goto LABEL_41;
    }
LABEL_45:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v19;
  *(_QWORD *)&v42.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v42, 0LL);
  v21 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
  v22 = v20;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v40 = v41;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v40, 0LL);
  v24 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v43.fields.fakeValue = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
  v25 = v23;
  *(_QWORD *)&v43.fields.currentCryptoKey = v24;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v43, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_45;
  v27 = v26->fields.getSvtList;
  if ( !v27 )
    goto LABEL_45;
  v28 = this->fields.callCnt;
  if ( (unsigned int)v28 >= v27->max_length )
    goto LABEL_46;
  v29 = v27->m_Items[v28];
  if ( !v29 || !svtRewardComp )
    goto LABEL_45;
  ServantRewardAction__Setup(
    svtRewardComp,
    v22,
    v25,
    (int32_t)Master_WarQuestSelectionMaster,
    1,
    v29->fields.isNew,
    1,
    10,
    0LL);
LABEL_41:
  _9__1 = this->fields.__9__1;
  v37 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass74_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B77560(&this->fields.__9__1);
  }
  if ( !v37 )
    goto LABEL_45;
  MissionListViewManager__SvtEffCaller(v37, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21

  if ( (byte_43889E6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass74_0__StartSvtListGetEffect_b__2__);
    byte_43889E6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass74_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B77560(&this->fields.__9__2);
  }
  if ( !v5 )
    sub_B7769C(Instance, v4);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, this->fields.callCnt + 1, this->fields.callback, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___ctor(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___SvtEffCaller_b__0(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass75_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_43889E7 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass75_0_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43889E7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass75_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_B7769C(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_36310192(gameObject, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___ctor(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___StartRewardItemGetEffectAfterTresureEffect_b__0(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalListTop_c *v4; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v9; // x20
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43889E8 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass79_0__StartRewardItemGetEffectAfterTresureEffect_b__1__);
    byte_43889E8 = 1;
  }
  v4 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v4 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v4->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v2);
  v7 = System_String__Format(ITEM_GET_ASSET_NAME, v6, 0LL);
  _9__1 = this->fields.__9__1;
  v9 = v7;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass79_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B77560(&this->fields.__9__1);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___StartRewardItemGetEffectAfterTresureEffect_b__1(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  QuestRewardItemAction_o *mRewardItemAction; // x19
  System_Action_o *v9; // x20

  if ( (byte_43889E9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MissionListViewManager___c__DisplayClass79_1__StartRewardItemGetEffectAfterTresureEffect_b__2__);
    sub_B775C4(&MissionListViewManager___c__DisplayClass79_1_TypeInfo);
    byte_43889E9 = 1;
  }
  v5 = (Il2CppObject *)sub_B77694(MissionListViewManager___c__DisplayClass79_1_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5
    || (v5[1].monitor = this,
        sub_B77560(&v5[1].monitor),
        v5[1].klass = (Il2CppClass *)data,
        sub_B77560(&v5[1]),
        mRewardItemAction = this->fields.mRewardItemAction,
        v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          v5,
          Method_MissionListViewManager___c__DisplayClass79_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0LL),
        !mRewardItemAction) )
  {
    sub_B7769C(v6, v7);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v9, 0.0, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_1___ctor(
        MissionListViewManager___c__DisplayClass79_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_1___StartRewardItemGetEffectAfterTresureEffect_b__2(
        MissionListViewManager___c__DisplayClass79_1_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass79_1_o *v2; // x19
  struct MissionListViewManager___c__DisplayClass79_0_o *CS___8__locals1; // x8
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass79_0_o *v6; // x8

  v2 = this;
  if ( (byte_43889EA & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass79_1_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43889EA = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  this = (MissionListViewManager___c__DisplayClass79_1_o *)CS___8__locals1->fields.mRewardItemAction;
  if ( !this )
    goto LABEL_14;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  data = v2->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_24402476(data, 0LL);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 || (this = (MissionListViewManager___c__DisplayClass79_1_o *)v6->fields.__4__this) == 0LL )
LABEL_14:
    sub_B7769C(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v6->fields.gifts,
    v6->fields.idx + 1,
    v6->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___ctor(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass80_0___LoadTreasureGetEffect_b__0(
        MissionListViewManager___c__DisplayClass80_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(this, data);
  _4__this->fields.treasureGetAssetData = data;
  sub_B77560(&_4__this->fields.treasureGetAssetData);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass83_0___ctor(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass83_0___LoadItemGetEffects_b__0(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass83_0_o *v4; // x19
  struct MissionListViewManager_o *_4__this; // x8

  v4 = this;
  if ( (byte_43889EB & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass83_0_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__);
    byte_43889EB = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass83_0_o *)_4__this->fields.itemGetAssetDatas) == 0LL
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          v4->fields.effectId,
          (WarBoardAIRoute_RouteData_o *)data,
          (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass83_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_B7769C(this, data);
  }
  MissionListViewManager__LoadItemGetEffects(
    (MissionListViewManager_o *)this,
    v4->fields.idx + 1,
    v4->fields.endAct,
    0LL);
}