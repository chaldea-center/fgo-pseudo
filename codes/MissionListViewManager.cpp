void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  struct MissionListViewManager_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct MissionListViewManager_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FF718 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_17191/*"bit_prize_get"*/, v4);
    sub_1B640C8(&StringLiteral_19726/*"get_02"*/, v5);
    byte_49FF718 = 1;
  }
  static_fields = MissionListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_INTERVAL = 0xDE021F040400000LL;
  v7 = StringLiteral_17191/*"bit_prize_get"*/;
  static_fields->PRIZE_GET_NORMAL = (struct System_String_o *)StringLiteral_17191/*"bit_prize_get"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->PRIZE_GET_NORMAL, v7, v2, v3);
  v8 = StringLiteral_19726/*"get_02"*/;
  v9 = MissionListViewManager_TypeInfo->static_fields;
  v9->ITEM_GET_TITLE = (struct System_String_o *)StringLiteral_19726/*"get_02"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->ITEM_GET_TITLE, v8, v10, v11);
  MissionListViewManager_TypeInfo->static_fields->EVENT_REWARD_GET_ITEM_DISP_MAX_NUM = 4;
}


void __fastcall MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  AvalonSceneManager_c *v16; // x0

  if ( (byte_49FF717 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo, v7);
    byte_49FF717 = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rewardItemGetEffectPlayList, (int32_t)v8, v9, v10);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestRewardInfo__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dispRewardInfoList, (int32_t)v13, v14, v15);
  this->fields.FADEOUT_KIND = 1;
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v16->static_fields->DEFAULT_FADE_TIME);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FF703 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FF703 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49FF701 & 1) == 0 )
  {
    sub_1B640C8(&Method_MissionListViewManager_CloseItemDetail__, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49FF701 = 1;
  }
  v4 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_MissionListViewManager_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FF702 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FF702 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MissionListViewManager__CreateRewardIconAlphaCalculator(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  MissionListViewManager_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  AlphaTransitionCalculator_o *v8; // x20

  if ( (byte_49FF6F8 & 1) == 0 )
  {
    sub_1B640C8(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1B640C8(&MissionListViewManager_TypeInfo, v2);
    byte_49FF6F8 = 1;
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
  v8 = (AlphaTransitionCalculator_o *)sub_1B64314(AlphaTransitionCalculator_TypeInfo, v6, v7);
  AlphaTransitionCalculator___ctor(v8, v4, v5, 0LL);
  return v8;
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
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  int v28; // w9
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w2
  int v33; // w9
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  Il2CppObject *value; // x21
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  AvalonSceneManager_c *v39; // x8
  CommonUI_o *v40; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v42; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_49FF707 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, afterDetail);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__Clear__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass73_0__EndItemGetEffectAction_b__0__, v17);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass73_0_TypeInfo, v18);
    byte_49FF707 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v19 = sub_1B64314(MissionListViewManager___c__DisplayClass73_0_TypeInfo, afterDetail, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(v19 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v19 + 24) = afterDetail;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)afterDetail, v23, v24);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_22;
  v28 = rewardItemGetEffectPlayList->fields._version + 1;
  rewardItemGetEffectPlayList->fields._size = 0;
  rewardItemGetEffectPlayList->fields._version = v28;
  this->fields.questRewardBoxAction = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questRewardBoxAction, 0, v25, v26);
  this->fields.isTreasureEffect = 0;
  this->fields.useTreasureGetEffectName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.useTreasureGetEffectName, 0, v29, v30);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_22;
  size = dispRewardInfoList->fields._size;
  v33 = dispRewardInfoList->fields._version + 1;
  dispRewardInfoList->fields._size = 0;
  dispRewardInfoList->fields._version = v33;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)dispRewardInfoList->fields._items, 0, size, 0LL);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
         (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__) >= 1 )
  {
    v20 = this->fields.itemGetAssetDatas;
    if ( !v20 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v43,
      (System_Collections_Generic_Dictionary_int__object__o *)v20,
      (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v43,
              (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
    {
      value = v43.fields._current.fields.value;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37477464((AssetData_o *)value, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v43,
      (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    v20 = this->fields.itemGetAssetDatas;
    if ( !v20 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)v20,
      (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = AvalonSceneManager_TypeInfo;
  v40 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v39 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
  v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v19,
    Method_MissionListViewManager___c__DisplayClass73_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !v40 )
LABEL_22:
    sub_1B64324(v20);
  CommonUI__maskFadein(v40, DEFAULT_FADE_TIME, v42, 0LL);
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
  if ( (byte_49FF714 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, rewardInfo);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v8);
    this = (MissionListViewManager_o *)sub_1B640C8(&StringLiteral_18842/*"effectId"*/, v9);
    byte_49FF714 = 1;
  }
  entity = 0LL;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0LL) )
  {
    this = (MissionListViewManager_o *)Gift__IsItem_37376280(rewardInfo->fields.type, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    dispRewardInfoList = v4->fields.dispRewardInfoList;
    if ( !dispRewardInfoList )
      goto LABEL_19;
    if ( dispRewardInfoList->fields._size > 1 )
      return 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18842/*"effectId"*/, 0, 0LL);
LABEL_19:
    sub_1B64324(this);
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
        const MethodInfo_2EB7AE4 *method)
{
  const MethodInfo_2EB7AE4_RGCTXs *rgctx_data; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 native_size; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_TObject__o *v13; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x25
  _BOOL8 v16; // x0
  MethodInfo *_2_UnityEngine_GameObject_GetComponent_TObject; // x1
  void (__fastcall *methodPointer)(); // x0
  void *v19; // x0
  const MethodInfo_2EB7AE4_RGCTXs *v20; // x8
  struct System_Collections_Generic_List_T__o *v21; // x4
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x1
  Il2CppMethodPointer v23; // x0
  __int64 v25; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-20h] BYREF
  __int64 v28; // [xsp+38h] [xbp-8h]

  v28 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_3_TObject->_2.native_size;
  memset(&v27, 0, sizeof(v27));
  memset((char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1BB5FA4(_0_System_Collections_Generic_List_TObject);
  v13 = (System_Collections_Generic_List_TObject__o *)sub_1B64314(_0_System_Collections_Generic_List_TObject, v10, v11);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v16 )
    {
      if ( !current )
        sub_1B64324(v16);
      _2_UnityEngine_GameObject_GetComponent_TObject = method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_;
      methodPointer = _2_UnityEngine_GameObject_GetComponent_TObject->methodPointer;
      v26.fields._list = (struct System_Collections_Generic_List_T__o *)((char *)&v25
                                                                       - ((native_size + 15) & 0x1FFFFFFF0LL));
      _2_UnityEngine_GameObject_GetComponent_TObject->invoker_method(
        methodPointer,
        _2_UnityEngine_GameObject_GetComponent_TObject,
        current,
        (void **)&v26.fields._list,
        v26.fields._list);
      memcpy(
        (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v19 = memcpy(
              (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL),
              (char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL),
              native_size);
      if ( !v13 )
        sub_1B64324(v19);
      v20 = method->rgctx_data;
      v21 = (struct System_Collections_Generic_List_T__o *)((char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL));
      if ( (v20->_3_TObject->_1.byval_arg.bits & 0x80000000) == 0 )
        v21 = *(struct System_Collections_Generic_List_T__o **)((char *)&v25 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_TObject__Add = v20->_4_System_Collections_Generic_List_TObject__Add;
      v23 = _4_System_Collections_Generic_List_TObject__Add->methodPointer;
      v26.fields._list = v21;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_TObject__o *, System_Collections_Generic_List_Enumerator_object__o *))_4_System_Collections_Generic_List_TObject__Add->invoker_method)(
        v23,
        _4_System_Collections_Generic_List_TObject__Add,
        v13,
        &v26);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return v13;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_2EB7894 *method)
{
  __int64 v2; // x2
  const MethodInfo_2EB7894_RGCTXs *rgctx_data; // x8
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v14; // x0
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = method->rgctx_data;
    }
  }
  memset(&v25, 0, sizeof(v25));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1BB5FA4(_0_System_Collections_Generic_List_TObject);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(_0_System_Collections_Generic_List_TObject, method, v2);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v14 )
    {
      if ( !current )
        sub_1B64324(v14);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      v18 = Component_object;
      if ( !v11 )
        sub_1B64324(Component_object);
      items = v11->fields._items;
      _4_System_Collections_Generic_List_TObject__Add = method->rgctx_data->_4_System_Collections_Generic_List_TObject__Add;
      ++v11->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          (const MethodInfo_34AD6D4 *)_4_System_Collections_Generic_List_TObject__Add->klass->rgctx_data[14].rgctxDataDummy);
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v18, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_49FF704 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&targetItemId);
    byte_49FF704 = 1;
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
        sub_1B64324(v4);
    }
    max_length = EventItemNotDispItemGetEffect->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1B6432C(v4, *(_QWORD *)&targetItemId);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t v25; // w8
  System_Collections_Generic_Dictionary_int__object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Item; // x0
  const MethodInfo *v30; // x2
  int32_t EffectId; // w0
  int32_t v32; // w1
  ScrTerminalListTop_c *v33; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v35; // x0
  System_String_o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  AssetLoader_LoadEndDataHandler_o *v39; // x21
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  while ( 1 )
  {
    v4 = endAct;
    v5 = idx;
    v6 = this;
    if ( (byte_49FF715 & 1) == 0 )
    {
      sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&idx);
      sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__, v7);
      sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__, v8);
      sub_1B640C8(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo, v9);
      sub_1B640C8(&int_TypeInfo, v10);
      sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v11);
      sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__, v12);
      sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
      sub_1B640C8(&ScrTerminalListTop_TypeInfo, v14);
      sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass87_0__LoadItemGetEffects_b__0__, v15);
      sub_1B640C8(&MissionListViewManager___c__DisplayClass87_0_TypeInfo, v16);
      byte_49FF715 = 1;
    }
    v17 = sub_1B64314(MissionListViewManager___c__DisplayClass87_0_TypeInfo, *(_QWORD *)&idx, endAct);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17
      || (*(_QWORD *)(v17 + 16) = v6,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v6, v19, v20),
          *(_QWORD *)(v17 + 32) = v4,
          *(_DWORD *)(v17 + 28) = v5,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v4, v21, v22),
          (dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList) == 0LL) )
    {
LABEL_17:
      sub_1B64324(dispRewardInfoList);
    }
    v25 = *(_DWORD *)(v17 + 28);
    if ( v25 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
      return;
    }
    if ( !v25 )
    {
      v26 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                      System_Collections_Generic_Dictionary_int__AssetData__TypeInfo,
                                                                      v23,
                                                                      v24);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v26,
        (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v6->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v26;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.itemGetAssetDatas, (int32_t)v26, v27, v28);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_17;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             dispRewardInfoList,
             *(_DWORD *)(v17 + 28),
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    EffectId = MissionListViewManager__GetItemGetEffectId(v6, (QuestRewardInfo_o *)Item, v30);
    *(_DWORD *)(v17 + 24) = EffectId;
    v32 = EffectId;
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.itemGetAssetDatas;
    if ( !dispRewardInfoList )
      goto LABEL_17;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)dispRewardInfoList,
            v32,
            (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v17 + 32);
    this = v6;
    *(_QWORD *)&idx = (unsigned int)(*(_DWORD *)(v17 + 28) + 1);
  }
  v33 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v33 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v33->static_fields->ITEM_GET_ASSET_NAME;
  v40 = *(_DWORD *)(v17 + 24);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v36 = System_String__Format(ITEM_GET_ASSET_NAME, v35, 0LL);
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v37, v38);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)v17,
    Method_MissionListViewManager___c__DisplayClass87_0__LoadItemGetEffects_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v36, v39, 1, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  AssetLoader_LoadEndDataHandler_o *v18; // x20

  if ( (byte_49FF712 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, endAct);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass84_0__LoadTreasureGetEffect_b__0__, v6);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass84_0_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5827/*"Effect/Talk/"*/, v8);
    byte_49FF712 = 1;
  }
  v9 = sub_1B64314(MissionListViewManager___c__DisplayClass84_0_TypeInfo, endAct, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = endAct;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)endAct, v13, v14);
  v15 = System_String__Concat_61375396(
          (System_String_o *)StringLiteral_5827/*"Effect/Talk/"*/,
          this->fields.useTreasureGetEffectName,
          0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_MissionListViewManager___c__DisplayClass84_0__LoadTreasureGetEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, v18, 1, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49FF6FC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF6FC = 1;
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
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1B64324(gameObject);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantCostumeEntity_o *v10; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-28h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_49FF6FF & 1) == 0 )
  {
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v6);
    this = (MissionListViewManager_o *)sub_1B640C8(&Method_MissionListViewManager_CloseItemDetail__, v7);
    byte_49FF6FF = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v10 = resultEntity;
    v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v8, v9);
    ItemDetailInfoComponent_CallbackFunc___ctor(v11, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenCostumeReleaseDetail(v10, v11, v12);
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
  __int64 v12; // x2
  Il2CppObject *v13; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF700 & 1) == 0 )
  {
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EquipMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v7);
    sub_1B640C8(&Method_MissionListViewManager_CloseItemDetail__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FF700 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v13 = entity;
    v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v11, v12);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenEquipDetail((EquipEntity_o *)v13, v14, v15);
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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v10; // x20
  int v11; // w24
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x4

  if ( (byte_49FF6FB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__, v4);
    sub_1B640C8(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v5);
    sub_1B640C8(&Method_MissionListViewManager_OnMoveEnd__, v6);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v7);
    byte_49FF6FB = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_2EB7894 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_13:
    sub_1B64324(ObjectList_object);
  size = ObjectList_object->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList_object;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v11 = 0;
  v12 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v12,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v11;
      MissionListViewObject__Init((MissionListViewObject_o *)Item, 4, v16, this->fields.listInDelay, 1, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v12;
  }
  while ( v12 < v10->fields._size );
  if ( !v11 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
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
  int32_t size; // w8
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *current; // x21
  System_Action_o *v20; // x22
  __int64 v21; // x0
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FF6FA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v12);
    sub_1B640C8(&Method_MissionListViewManager_OnMoveEnd__, v13);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v14);
    byte_49FF6FA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList_object = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetObjectList_object_(
                                                                     this,
                                                                     (const MethodInfo_2EB7894 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_1B64324(0LL);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      ObjectList_object,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v23.fields._current;
      v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v21);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v20, delay, 1, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_44011148(
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  MissionListViewManager__SetMode_44010788(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetMode_44010788(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *gameObject; // x0
  int32_t v9; // w1

  if ( (byte_49FF6F9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&StringLiteral_11257/*"RequestInto"*/, v5);
    byte_49FF6F9 = 1;
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
        sub_1B64324(gameObject);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11257/*"RequestInto"*/,
      0.0,
      0LL);
  }
  else if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 3 )
      v9 = 3;
    else
      v9 = 2;
    MissionListViewManager__RequestListObject(this, v9, 0.0, v6);
  }
}


void __fastcall MissionListViewManager__SetMode_44011092(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  MissionListViewManager__SetMode_44010788(this, mode, v7);
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
  if ( (byte_49FF6FD & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_1B640C8(&MissionListViewObject_TypeInfo, obj);
    byte_49FF6FD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MissionListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v6->fields.initMode == 3 )
    v8 = 3;
  else
    v8 = 2;
  MissionListViewObject__Init((MissionListViewObject_o *)obj, v8, 0LL, 0.0, 1, v4);
}


void __fastcall MissionListViewManager__SetRewardItemGetEffectTitleSprite(
        MissionListViewManager_o *this,
        UnityEngine_GameObject_o *itemObj,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  MissionListViewManager_c *v13; // x0
  System_String_o *useTreasureGetEffectName; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v16; // x19
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v22; // x8
  __int64 v23; // x9
  System_Collections_IEnumerator_c **v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  UnityEngine_Transform_o *v27; // x20
  __int64 methodPtr_low; // x9
  int32_t i; // w21
  UnityEngine_Object_o *Child; // x22
  _BOOL8 v31; // x0
  System_String_o *name; // x0
  Il2CppObject *Component_object; // x22
  MissionListViewManager_c *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x19
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( (byte_49FF716 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, itemObj);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&MissionListViewManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_20805/*"item_get/title_root"*/, v11);
    sub_1B640C8(&StringLiteral_23859/*"title01"*/, v12);
    byte_49FF716 = 1;
  }
  v13 = MissionListViewManager_TypeInfo;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v13 = MissionListViewManager_TypeInfo;
  }
  transform = (UnityEngine_Transform_o *)System_String__op_Equality(
                                           useTreasureGetEffectName,
                                           v13->static_fields->PRIZE_GET_NORMAL,
                                           0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !itemObj )
      goto LABEL_54;
    transform = UnityEngine_GameObject__get_transform(itemObj, 0LL);
    if ( !transform )
      goto LABEL_54;
    v16 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_20805/*"item_get/title_root"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
      return;
    if ( !v16 )
LABEL_54:
      sub_1B64324(transform);
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v16, 0LL);
    if ( !Enumerator )
      sub_1B64324(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_17;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_17:
        p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v22 = Enumerator->klass;
      v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v24 = (System_Collections_IEnumerator_c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v24 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          v24 += 2;
          if ( !v23 )
            goto LABEL_24;
        }
        v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1].method;
      }
      else
      {
LABEL_24:
        v25 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v26 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
              Enumerator,
              *(_QWORD *)(v25 + 8));
      v27 = (UnityEngine_Transform_o *)v26;
      if ( !v26 )
        goto LABEL_53;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low
        || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
      {
        sub_1B645E4(v26);
LABEL_53:
        sub_1B64324(v26);
      }
      for ( i = 0; i < UnityEngine_Transform__get_childCount(v27, 0LL); ++i )
      {
        Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(v27, i, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v31 = UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
        if ( !v31 )
        {
          if ( !Child )
            sub_1B64324(v31);
          name = UnityEngine_Object__get_name(Child, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_23859/*"title01"*/, 0LL) )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)Child,
                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            v34 = MissionListViewManager_TypeInfo;
            if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
            if ( !Component_object )
              sub_1B64324(v34);
            UISprite__set_spriteName(
              (UISprite_o *)Component_object,
              MissionListViewManager_TypeInfo->static_fields->ITEM_GET_TITLE,
              0LL);
          }
        }
      }
    }
    v35 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
    if ( v35 )
    {
      v36 = *(_QWORD *)v35;
      v37 = v35;
      v38 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_46;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_46:
        v40 = sub_1BB60A8(v35, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
    }
  }
}


void __fastcall MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_c *v3; // x0
  float DEFAULT_FADE_TIME; // s0

  if ( (byte_49FF70F & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    byte_49FF70F = 1;
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
  __int64 v9; // x1
  AssetData_o *treasureGetAssetData; // x0
  Il2CppObject *Object_object__48347676; // x21
  UnityEngine_GameObject_o *v12; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardBoxAction_o **p_questRewardBoxAction; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *useTreasureGetEffectName; // x22
  MissionListViewManager_c *v18; // x0
  System_String_o *v19; // x20
  ScrTerminalListTop_c *v20; // x0
  int32_t v21; // w1

  if ( (byte_49FF713 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, *(_QWORD *)&itemIconId);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___, v5);
    sub_1B640C8(&MissionListViewManager_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v9);
    byte_49FF713 = 1;
  }
  treasureGetAssetData = this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_21;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              treasureGetAssetData,
                              this->fields.useTreasureGetEffectName,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  treasureGetAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                          Object_object__48347676,
                                          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  v12 = (UnityEngine_GameObject_o *)treasureGetAssetData;
  treasureGetAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)treasureGetAssetData,
                                          0LL);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)treasureGetAssetData, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v12, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v12,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  p_questRewardBoxAction = &this->fields.questRewardBoxAction;
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRewardBoxAction,
    (int32_t)Component_object,
    v15,
    v16);
  if ( !this->fields.isTreasureEffect )
    goto LABEL_15;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v18 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v18 = MissionListViewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v18->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    v19 = this->fields.useTreasureGetEffectName;
    v20 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
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
LABEL_15:
    treasureGetAssetData = (AssetData_o *)(&dword_0 + 1);
  }
  if ( !*p_questRewardBoxAction )
LABEL_21:
    sub_1B64324(treasureGetAssetData);
  if ( itemIconId == 3 )
    v21 = 2;
  else
    v21 = itemIconId == 2;
  QuestRewardBoxAction__Setup(*p_questRewardBoxAction, v21, (unsigned __int8)treasureGetAssetData & 1, 0LL);
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
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v33; // x8
  __int64 v34; // x1
  __int64 v35; // x2
  GiftEntity_array *v36; // x21
  __int64 v37; // x20
  const MethodInfo *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x1
  __int64 v42; // x2
  System_Func_object__bool__o *v43; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  il2cpp_array_size_t max_length; // w9
  int v46; // w8
  GiftEntity_o *v47; // x20
  int32_t type; // w0
  Il2CppObject *Entity; // x20
  Il2CppObject *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v53; // x22
  Il2CppObject *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v57; // x22
  __int64 v58; // x1
  __int64 v59; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v60; // x23
  GiftMaster_o *v61; // x22
  bool IsServantEquip; // w23
  __int64 v63; // x1
  __int64 v64; // x2
  Il2CppObject *v65; // x21
  ServantStatusDialog_EndDelegate_o *v66; // x22
  Il2CppObject *v67; // x20
  Il2CppObject *v68; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  ServantStatusDialog_EndDelegate_o *v71; // x22
  const MethodInfo *v72; // x2
  struct System_String_o *MasterName_k__BackingField; // x20
  __int64 v74; // x23
  int32_t v75; // w20
  __int64 v76; // x1
  __int64 v77; // x2
  ServantStatusDialog_EndDelegate_o *v78; // x22
  const MethodInfo *v79; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_49FF6FE & 1) == 0 )
  {
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, selectItem);
    sub_1B640C8(&Method_DataManager_GetMaster_CommandCodeMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v14);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v16);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GiftEntity___, v17);
    sub_1B640C8(&System_Func_GiftEntity__bool__TypeInfo, v18);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v19);
    sub_1B640C8(&Method_MissionListViewManager_CloseCommandCodeDetail__, v20);
    sub_1B640C8(&Method_MissionListViewManager_CloseItemDetail__, v21);
    sub_1B640C8(&Method_MissionListViewManager_CloseServantStatusDetail__, v22);
    sub_1B640C8(&Method_MissionListViewManager_ShowRewardDetailInfo__, v23);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass64_0__ShowRewardDetailInfo_b__0__, v26);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass64_0_TypeInfo, v27);
    byte_49FF6FE = 1;
  }
  v28 = Method_MissionListViewManager_ShowRewardDetailInfo__;
  if ( (*((_BYTE *)Method_MissionListViewManager_ShowRewardDetailInfo__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1B640E0(Method_MissionListViewManager_ShowRewardDetailInfo__);
  v29 = (System_Reflection_MethodBase_o *)sub_1B640AC(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
  if ( !selectItem )
    goto LABEL_52;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_52;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v57 = (CommonUI_o *)Instance;
    v60 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v58, v59);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v60,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v57 )
      goto LABEL_52;
    CommonUI__OpenItemDetailDialog_30410016(v57, nameTxt, rewardExtraDetailTxt, v60, 0LL);
  }
  else if ( rewardType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
    v33 = selectItem->fields.eventMissionEnt;
    if ( !v33 || !Master_object )
      goto LABEL_52;
    Master_object = (GiftMaster_o *)GiftMaster__GetGiftListById(Master_object, v33->fields.giftId, 0LL);
    v36 = (GiftEntity_array *)Master_object;
    if ( ignoreSubGiftEntity )
    {
      v37 = sub_1B64314(MissionListViewManager___c__DisplayClass64_0_TypeInfo, v34, v35);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      Master_object = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity(v36, v38);
      if ( !v37 )
        goto LABEL_52;
      *(_QWORD *)(v37 + 16) = Master_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 16), (int32_t)Master_object, v39, v40);
      v43 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GiftEntity__bool__TypeInfo, v41, v42);
      System_Func_object__bool____ctor(
        v43,
        (Il2CppObject *)v37,
        Method_MissionListViewManager___c__DisplayClass64_0__ShowRewardDetailInfo_b__0__,
        0LL);
      v44 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v36,
              (System_Func_TSource__bool__o *)v43,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      Master_object = (GiftMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                        v44,
                                        (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v36 = (GiftEntity_array *)Master_object;
    }
    if ( !v36 )
      goto LABEL_52;
    max_length = v36->max_length;
    v46 = this->fields.alphaAnimCnt % (int)max_length;
    if ( v46 >= max_length )
      sub_1B6432C(Master_object, v34);
    v47 = v36->m_Items[v46];
    if ( !v47 )
      goto LABEL_52;
    type = v47->fields.type;
    if ( type == 2 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   v47->fields.objectId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v53 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v51,
                                                          v52);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v53,
          (Il2CppObject *)this,
          (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
          0LL);
        if ( v50 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v50, (ItemEntity_o *)Entity, v53, 50, 0LL);
          return;
        }
      }
LABEL_52:
      sub_1B64324(Master_object);
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_52;
      Master_object = (GiftMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v47->fields.objectId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_52;
      v61 = Master_object;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_object, 0LL);
      v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v66 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v63, v64);
        ServantStatusDialog_EndDelegate___ctor(
          v66,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v65 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30358956((CommonUI_o *)v65, 7, v47, v66, 0LL);
      }
      else
      {
        v74 = *(_QWORD *)&v61->fields._MasterKind_k__BackingField;
        MasterName_k__BackingField = v61->fields._MasterName_k__BackingField;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v80.fields.currentCryptoKey = v74;
        *(_QWORD *)&v80.fields.fakeValue = MasterName_k__BackingField;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v80, 0LL);
        v78 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v76, v77);
        ServantStatusDialog_EndDelegate___ctor(
          v78,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v65 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30358392((CommonUI_o *)v65, 7, v75, v78, 0LL);
      }
    }
    else if ( Gift__IsCommandCode(v47->fields.type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_52;
      v67 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              v47->fields.objectId,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v71 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v69, v70);
      ServantStatusDialog_EndDelegate___ctor(
        v71,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseCommandCodeDetail__,
        0LL);
      if ( !v68 )
        goto LABEL_52;
      CommonUI__OpenServantEquipStatusDialog_30361548(
        (CommonUI_o *)v68,
        25,
        (CommandCodeEntity_o *)v67,
        0,
        v71,
        0LL,
        0LL);
    }
    else if ( Gift__IsCostumeRelease(v47->fields.type, 0LL) )
    {
      MissionListViewManager__OpenCostumeReleaseDetail(this, v47->fields.objectId, v72);
    }
    else if ( Gift__IsEquip(v47->fields.type, 0LL) )
    {
      MissionListViewManager__OpenEquipDetail(this, v47->fields.objectId, v79);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  AvalonSceneManager_c *v24; // x8
  CommonUI_o *v25; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_49FF705 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, gifts);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__0__, v10);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass71_0_TypeInfo, v11);
    byte_49FF705 = 1;
  }
  v12 = sub_1B64314(MissionListViewManager___c__DisplayClass71_0_TypeInfo, gifts, *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = gifts;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)gifts, v16, v17);
  *(_QWORD *)(v12 + 32) = afterDetail;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)afterDetail, v18, v19);
  MissionListViewManager__SetTresureEffect(this, v20);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = AvalonSceneManager_TypeInfo;
  v25 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v24 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__0__,
    0LL);
  if ( !v25 )
LABEL_9:
    sub_1B64324(touchBlockObj);
  CommonUI__maskFadeout(v25, 1, DEFAULT_FADE_TIME, v27, 0LL);
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
  int32_t v30; // w2
  int32_t v31; // w3
  System_Action_o **v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  System_Action_o *v38; // x3
  const MethodInfo *v39; // x4
  GiftEntity_array *v40; // x1
  __int64 v41; // x1
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  int32_t v45; // w21
  __int64 v46; // x8
  __int64 v47; // x9
  __int64 v48; // x8
  const MethodInfo *v49; // x4
  int v50; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v54; // x3
  int32_t v55; // w23
  UnityEngine_Object_o *scenestack; // x22
  int64_t userSvtId; // x22
  bool isNew; // w23
  bool Eff; // w0
  const MethodInfo *v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  EventRewardRootComponent_o *targetRoot; // x21
  System_Action_o *v64; // x22
  __int64 methodPtr_low; // x9
  __int64 v66; // x8
  __int64 v67; // x9
  __int64 v68; // x8
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v70; // x23
  Il2CppClass *v71; // x24
  const MethodInfo *v72; // x3
  int32_t v73; // w23
  const MethodInfo *v74; // x3
  __int64 v75; // x8
  __int64 v76; // x9
  __int64 v77; // x8
  const MethodInfo *v78; // x5
  __int64 v79; // x8
  __int64 v80; // x9
  __int64 v81; // x8
  const MethodInfo *v82; // x5
  GiftEntity_array *v83; // x2
  __int64 v84; // x3
  GiftEntity_o *v85; // x8
  __int64 v86; // x8
  __int64 v87; // x9
  __int64 v88; // x8
  Il2CppObject *v89; // x0
  Il2CppObject *v90; // x21
  __int64 v91; // x1
  __int64 v92; // x2
  const MethodInfo *v93; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  System_Action_o *v95; // x21
  const MethodInfo *v96; // x3
  MissionListViewManager___c__DisplayClass72_0_o *v97; // x0
  const MethodInfo *v98; // x1
  const MethodInfo *v99; // [xsp+0h] [xbp-70h]
  Il2CppObject *v100; // [xsp+8h] [xbp-68h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+10h] [xbp-60h] BYREF
  GetCommandCodes_o *v102; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v103; // [xsp+20h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_49FF706 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, gifts);
    sub_1B640C8(&Method_DataManager_GetMaster_CommandCodeMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_EquipMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1B640C8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v16);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v17);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v19);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v24);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass72_0__StartItemGetEffectAction_b__0__, v25);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass72_0__StartItemGetEffectAction_b__1__, v26);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass72_0_TypeInfo, v27);
    byte_49FF706 = 1;
  }
  entity = 0LL;
  v103 = 0LL;
  data = 0LL;
  resultEntity = 0LL;
  v102 = 0LL;
  v100 = 0LL;
  v28 = sub_1B64314(MissionListViewManager___c__DisplayClass72_0_TypeInfo, gifts, *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_104;
  *(_QWORD *)(v28 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v30, v31);
  *(_QWORD *)(v28 + 24) = afterDetail;
  v32 = (System_Action_o **)(v28 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)afterDetail, v33, v34);
  *(_QWORD *)(v28 + 32) = gifts;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)gifts, v35, v36);
  v40 = *(GiftEntity_array **)(v28 + 32);
  *(_DWORD *)(v28 + 40) = idx;
  if ( !v40 )
    goto LABEL_104;
  if ( (signed int)v40->max_length <= idx )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_104;
    if ( AvalonSceneManager__checkNowScene(Instance, 72, 0LL) && this->fields.isEffect )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_104;
      targetRoot = (EventRewardRootComponent_o *)Instance->fields.targetRoot;
      v64 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v61, v62);
      System_Action___ctor(
        v64,
        (Il2CppObject *)v28,
        Method_MissionListViewManager___c__DisplayClass72_0__StartItemGetEffectAction_b__0__,
        0LL);
      if ( !targetRoot )
        goto LABEL_104;
      methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(targetRoot->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardRootComponent_c *)targetRoot->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1B645E4(targetRoot);
        MissionListViewManager___c__DisplayClass72_0___ctor(v97, v98);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(targetRoot, v64, 0LL);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v32, v60);
    }
    this->fields.isEffect = 0;
    return;
  }
  if ( !idx && this->fields.isTreasureEffect )
    MissionListViewManager__StartTreasureItemGetEffectAction(this, v40, v37, v38, v39);
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v40);
  v42 = *(_QWORD *)(v28 + 32);
  if ( !v42 )
    goto LABEL_104;
  v43 = *(int *)(v28 + 40);
  if ( (unsigned int)v43 >= *(_DWORD *)(v42 + 24) )
    goto LABEL_105;
  v44 = *(_QWORD *)(v42 + 8 * v43 + 32);
  if ( !v44 )
    goto LABEL_104;
  v45 = *(_DWORD *)(v44 + 20);
  if ( Gift__IsServant(v45, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
    v46 = *(_QWORD *)(v28 + 32);
    if ( !v46 )
      goto LABEL_104;
    v47 = *(int *)(v28 + 40);
    if ( (unsigned int)v47 < *(_DWORD *)(v46 + 24) )
    {
      v48 = *(_QWORD *)(v46 + 8 * v47 + 32);
      if ( !v48 || !Instance )
        goto LABEL_104;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &entity,
                                           *(_DWORD *)(v48 + 24),
                                           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_104;
        Instance = (AvalonSceneManager_o *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_104;
        v50 = (int)Instance;
        Instance = (AvalonSceneManager_o *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
        if ( ((v50 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_104;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v106.fields.currentCryptoKey = klass;
          *(_QWORD *)&v106.fields.fakeValue = monitor;
          v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v106, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v55, v54) )
          {
            Instance = (AvalonSceneManager_o *)entity;
            if ( !entity )
              goto LABEL_104;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_104;
              scenestack = (UnityEngine_Object_o *)Instance[14].fields.scenestack;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(scenestack, 0LL, 0LL) )
              {
                Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_104;
                Instance = (AvalonSceneManager_o *)Instance[14].fields.scenestack;
                if ( !Instance )
                  goto LABEL_104;
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
LABEL_66:
              MissionListViewManager__StartRewardGetEffect(
                this,
                userSvtId,
                isNew,
                Eff,
                v45,
                *(GiftEntity_array **)(v28 + 32),
                *(_DWORD *)(v28 + 40),
                *(System_Action_o **)(v28 + 24),
                v99);
              return;
            }
LABEL_104:
            sub_1B64324(Instance);
          }
        }
      }
      goto LABEL_102;
    }
LABEL_105:
    sub_1B6432C(Instance, v41);
  }
  if ( Gift__IsCommandCode(v45, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v66 = *(_QWORD *)(v28 + 32);
    if ( !v66 )
      goto LABEL_104;
    v67 = *(int *)(v28 + 40);
    if ( (unsigned int)v67 < *(_DWORD *)(v66 + 24) )
    {
      v68 = *(_QWORD *)(v66 + 8 * v67 + 32);
      if ( !v68 || !Instance )
        goto LABEL_104;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &v103,
                                           *(_DWORD *)(v68 + 24),
                                           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v103 )
          goto LABEL_104;
        getCommandCodeList = this->fields.getCommandCodeList;
        v71 = v103[1].klass;
        v70 = v103[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v107.fields.currentCryptoKey = v71;
        *(_QWORD *)&v107.fields.fakeValue = v70;
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v107, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v102, v73, v72) )
        {
          this->fields.isEffect = 1;
          Instance = (AvalonSceneManager_o *)v102;
          if ( v102 )
          {
            userSvtId = v102->fields.userCommandCodeId;
            isNew = v102->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v102, 0LL);
            goto LABEL_66;
          }
          goto LABEL_104;
        }
      }
      goto LABEL_102;
    }
    goto LABEL_105;
  }
  Instance = (AvalonSceneManager_o *)Gift__IsCostumeRelease(v45, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v75 = *(_QWORD *)(v28 + 32);
    if ( !v75 )
      goto LABEL_104;
    v76 = *(int *)(v28 + 40);
    if ( (unsigned int)v76 >= *(_DWORD *)(v75 + 24) )
      goto LABEL_105;
    v77 = *(_QWORD *)(v75 + 8 * v76 + 32);
    if ( !v77 )
      goto LABEL_104;
    Instance = (AvalonSceneManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         (MissionListViewManager_o *)Instance,
                                         &resultEntity,
                                         *(_DWORD *)(v77 + 24),
                                         v74);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      this->fields.isEffect = 1;
      if ( !resultEntity )
        goto LABEL_104;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        this,
        resultEntity->fields.name,
        *(GiftEntity_array **)(v28 + 32),
        *(_DWORD *)(v28 + 40),
        *(System_Action_o **)(v28 + 24),
        v78);
      return;
    }
LABEL_102:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v28 + 32),
      *(_DWORD *)(v28 + 40) + 1,
      *(System_Action_o **)(v28 + 24),
      v49);
    return;
  }
  if ( !Gift__IsEquip(v45, 0LL) )
  {
    if ( Gift__IsItem(v45, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
      v86 = *(_QWORD *)(v28 + 32);
      if ( !v86 )
        goto LABEL_104;
      v87 = *(int *)(v28 + 40);
      if ( (unsigned int)v87 < *(_DWORD *)(v86 + 24) )
      {
        v88 = *(_QWORD *)(v86 + 8 * v87 + 32);
        if ( !v88 || !Instance )
          goto LABEL_104;
        v89 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_DWORD *)(v88 + 24),
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v89 )
        {
          v90 = v89;
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_104;
          Instance = (AvalonSceneManager_o *)CommonUI__IsGetItemEffect(
                                               (CommonUI_o *)Instance,
                                               (int32_t)v90[1].klass,
                                               0LL);
          dispRewardInfoList = this->fields.dispRewardInfoList;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !dispRewardInfoList )
              goto LABEL_104;
            if ( !dispRewardInfoList->fields._size )
            {
              this->fields.isEffect = 1;
              MissionListViewManager__StartRewardItemGetEffect(
                this,
                (int32_t)v90[1].klass,
                *(GiftEntity_array **)(v28 + 32),
                *(_DWORD *)(v28 + 40),
                *(System_Action_o **)(v28 + 24),
                v93);
              return;
            }
          }
          else if ( !dispRewardInfoList )
          {
            goto LABEL_104;
          }
          if ( dispRewardInfoList->fields._size >= 1 )
          {
            v95 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v91, v92);
            System_Action___ctor(
              v95,
              (Il2CppObject *)v28,
              Method_MissionListViewManager___c__DisplayClass72_0__StartItemGetEffectAction_b__1__,
              0LL);
            MissionListViewManager__LoadItemGetEffects(this, 0, v95, v96);
            return;
          }
        }
        goto LABEL_102;
      }
      goto LABEL_105;
    }
    goto LABEL_102;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EquipMaster___);
  v79 = *(_QWORD *)(v28 + 32);
  if ( !v79 )
    goto LABEL_104;
  v80 = *(int *)(v28 + 40);
  if ( (unsigned int)v80 >= *(_DWORD *)(v79 + 24) )
    goto LABEL_105;
  v81 = *(_QWORD *)(v79 + 8 * v80 + 32);
  if ( !v81 || !Instance )
    goto LABEL_104;
  Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &v100,
                                       *(_DWORD *)(v81 + 24),
                                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_102;
  this->fields.isEffect = 1;
  v83 = *(GiftEntity_array **)(v28 + 32);
  if ( !v83 )
    goto LABEL_104;
  v84 = *(int *)(v28 + 40);
  if ( (unsigned int)v84 >= v83->max_length )
    goto LABEL_105;
  v85 = v83->m_Items[v84];
  if ( !v85 )
    goto LABEL_104;
  MissionListViewManager__StartRewardEquipGetEffect(this, v85->fields.objectId, v83, v84, *v32, v82);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x22

  if ( (byte_49FF709 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, name);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__0__, v12);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass75_0_TypeInfo, v13);
    byte_49FF709 = 1;
  }
  v14 = sub_1B64314(MissionListViewManager___c__DisplayClass75_0_TypeInfo, name, gifts);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_7;
  *(_QWORD *)(v14 + 16) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)name, v16, v17);
  *(_QWORD *)(v14 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v18, v19);
  *(_QWORD *)(v14 + 32) = gifts;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)gifts, v20, v21);
  *(_QWORD *)(v14 + 48) = afterDetail;
  *(_DWORD *)(v14 + 40) = idx;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 48), (int32_t)afterDetail, v22, v23);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v27 = (CommonUI_o *)Instance,
        v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v28, v29),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v14,
          Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0LL),
        !v27) )
  {
LABEL_7:
    sub_1B64324(touchBlockObj);
  }
  CommonUI__maskFadeout(v27, FADEOUT_KIND, FADEOUT_TIME, v30, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  QuestRewardInfo_o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  _DWORD *v29; // x8
  __int64 v30; // x9
  __int64 v31; // x10
  __int64 v32; // x9
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x22

  if ( (byte_49FF708 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_1B640C8(&QuestRewardInfo_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__0__, v13);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass74_0_TypeInfo, v14);
    byte_49FF708 = 1;
  }
  v15 = sub_1B64314(MissionListViewManager___c__DisplayClass74_0_TypeInfo, *(_QWORD *)&equipId, gifts);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)this, v17, v18);
  *(_QWORD *)(v15 + 32) = gifts;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)gifts, v19, v20);
  *(_QWORD *)(v15 + 48) = afterDetail;
  *(_DWORD *)(v15 + 40) = idx;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 48), (int32_t)afterDetail, v21, v22);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v25 = (QuestRewardInfo_o *)sub_1B64314(QuestRewardInfo_TypeInfo, v23, v24);
  QuestRewardInfo___ctor(v25, 0LL);
  *(_QWORD *)(v15 + 16) = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)v25, v26, v27);
  v29 = *(_DWORD **)(v15 + 16);
  if ( !v29 )
    goto LABEL_11;
  v29[4] = 5;
  v29[5] = equipId;
  v30 = *(_QWORD *)(v15 + 32);
  if ( !v30 )
    goto LABEL_11;
  v31 = *(int *)(v15 + 40);
  if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 24) )
    sub_1B6432C(touchBlockObj, v28);
  v32 = *(_QWORD *)(v30 + 8 * v31 + 32);
  if ( !v32
    || (v29[6] = *(_DWORD *)(v32 + 28),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v36 = (CommonUI_o *)Instance,
        v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38),
        System_Action___ctor(
          v39,
          (Il2CppObject *)v15,
          Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__0__,
          0LL),
        !v36) )
  {
LABEL_11:
    sub_1B64324(touchBlockObj);
  }
  CommonUI__maskFadeout(v36, FADEOUT_KIND, FADEOUT_TIME, v39, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x22
  UnityEngine_GameObject_o *touchBlockObj; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x21

  if ( (byte_49FF70B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, userSvtID);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__0__, v18);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass77_0_TypeInfo, v19);
    byte_49FF70B = 1;
  }
  v20 = sub_1B64314(MissionListViewManager___c__DisplayClass77_0_TypeInfo, userSvtID, isNew);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_7;
  *(_DWORD *)(v20 + 16) = giftType;
  *(_QWORD *)(v20 + 24) = userSvtID;
  *(_QWORD *)(v20 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)this, v22, v23);
  *(_BYTE *)(v20 + 40) = isDoEffect;
  *(_BYTE *)(v20 + 41) = isNew;
  *(_QWORD *)(v20 + 48) = gifts;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 48), (int32_t)gifts, v24, v25);
  *(_QWORD *)(v20 + 64) = afterDetail;
  *(_DWORD *)(v20 + 56) = idx;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 64), (int32_t)afterDetail, v26, v27);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v31 = (CommonUI_o *)Instance,
        v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v20,
          Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__0__,
          0LL),
        !v31) )
  {
LABEL_7:
    sub_1B64324(touchBlockObj);
  }
  CommonUI__maskFadeout(v31, FADEOUT_KIND, FADEOUT_TIME, v34, 0LL);
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
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  QuestRewardInfo_o *v29; // x24
  __int64 *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  _DWORD *v34; // x8
  __int64 v35; // x9
  __int64 v36; // x10
  __int64 v37; // x9
  int32_t ItemEffectId; // w0
  int32_t v39; // w1
  const MethodInfo *v40; // x4
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v44; // x8
  __int64 v45; // x9
  int v46; // w10
  __int64 v47; // x13
  int v48; // w11
  int v49; // w12
  __int64 v50; // x14
  __int64 v51; // x15
  __int64 v52; // x1
  __int64 v53; // x2
  Il2CppObject *v54; // x19
  AvalonSceneManager_c *v55; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v57; // x21

  if ( (byte_49FF70A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&itemId);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_1B640C8(&QuestRewardInfo_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardItemGetEffect_b__0__, v16);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass76_0_TypeInfo, v17);
    byte_49FF70A = 1;
  }
  v18 = sub_1B64314(MissionListViewManager___c__DisplayClass76_0_TypeInfo, *(_QWORD *)&itemId, gifts);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_33;
  *(_QWORD *)(v18 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)this, v20, v21);
  *(_QWORD *)(v18 + 40) = gifts;
  v22 = (__int64 *)(v18 + 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 40), (int32_t)gifts, v23, v24);
  *(_DWORD *)(v18 + 48) = idx;
  *(_QWORD *)(v18 + 56) = afterDetail;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 56), (int32_t)afterDetail, v25, v26);
  v29 = (QuestRewardInfo_o *)sub_1B64314(QuestRewardInfo_TypeInfo, v27, v28);
  QuestRewardInfo___ctor(v29, 0LL);
  *(_QWORD *)(v18 + 32) = v29;
  v30 = (__int64 *)(v18 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)v29, v31, v32);
  v34 = *(_DWORD **)(v18 + 32);
  if ( !v34 )
    goto LABEL_33;
  v34[4] = 2;
  v34[5] = itemId;
  v35 = *(_QWORD *)(v18 + 40);
  if ( !v35 )
    goto LABEL_33;
  v36 = *(int *)(v18 + 48);
  if ( (unsigned int)v36 >= *(_DWORD *)(v35 + 24) )
    goto LABEL_34;
  v37 = *(_QWORD *)(v35 + 8 * v36 + 32);
  if ( !v37 )
    goto LABEL_33;
  v34[6] = *(_DWORD *)(v37 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v18 + 32), 0LL);
  *(_DWORD *)(v18 + 16) = ItemEffectId;
  v39 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v39,
         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v18 + 40),
      *(_DWORD *)(v18 + 48) + 1,
      *(System_Action_o **)(v18 + 56),
      v40);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  v33 = *(unsigned int *)(v18 + 16);
  v41 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v42 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v41 )
    goto LABEL_33;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v41 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      v33,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v41 + 4 * m_CancellationTokenSource_low + 32) = v33;
  }
  v44 = *v30;
  if ( !*v30 )
    goto LABEL_33;
  *(_DWORD *)(v44 + 24) = 0;
  v45 = *v22;
  if ( !*v22 )
    goto LABEL_33;
  v46 = *(_DWORD *)(v45 + 24);
  if ( v46 >= 1 )
  {
    v47 = *(int *)(v18 + 48);
    v48 = 0;
    v49 = 0;
    v50 = v45 + 8 * v47 + 32;
    while ( v46 != v48 && (unsigned int)v47 < v46 )
    {
      if ( !*(_QWORD *)v50 )
        goto LABEL_33;
      v51 = *(_QWORD *)(v45 + 8LL * v48 + 32);
      if ( !v51 )
        goto LABEL_33;
      if ( *(_DWORD *)(*(_QWORD *)v50 + 24LL) == *(_DWORD *)(v51 + 24) )
      {
        v49 += *(_DWORD *)(v51 + 28);
        *(_DWORD *)(v44 + 24) = v49;
      }
      if ( v46 == ++v48 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1B6432C(Instance, v33);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v55 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v55->static_fields->DEFAULT_FADE_TIME;
  v57 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v52, v53);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v18,
    Method_MissionListViewManager___c__DisplayClass76_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v54 )
LABEL_33:
    sub_1B64324(Instance);
  CommonUI__maskFadeout((CommonUI_o *)v54, 1, DEFAULT_FADE_TIME, v57, 0LL);
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
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *Item; // x0
  const MethodInfo *v32; // x2
  int32_t EffectId; // w0
  int32_t v34; // w1
  const MethodInfo *v35; // x4
  int32_t v36; // w1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  ScrTerminalListTop_c *v40; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v42; // x0
  System_String_o *v43; // x21
  Il2CppObject *Object_object__48347676; // x21
  UnityEngine_GameObject_o *v45; // x21
  Il2CppObject *Component_object; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  QuestRewardItemAction_o *v49; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *Instance; // x19
  __int64 v53; // x1
  __int64 v54; // x2
  System_Action_o *v55; // x21
  int v56; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF711 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, gifts);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__, v10);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__, v16);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B640C8(
      &Method_MissionListViewManager___c__DisplayClass83_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
      v21);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass83_0_TypeInfo, v22);
    byte_49FF711 = 1;
  }
  v23 = sub_1B64314(MissionListViewManager___c__DisplayClass83_0_TypeInfo, gifts, *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_25;
  *(_QWORD *)(v23 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)this, v25, v26);
  *(_QWORD *)(v23 + 40) = gifts;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 40), (int32_t)gifts, v27, v28);
  *(_QWORD *)(v23 + 56) = afterDetail;
  *(_DWORD *)(v23 + 48) = idx;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 56), (int32_t)afterDetail, v29, v30);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_25;
  Item = System_Collections_Generic_List_object___get_Item(
           dispRewardInfoList,
           0,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
  EffectId = MissionListViewManager__GetItemGetEffectId(this, (QuestRewardInfo_o *)Item, v32);
  *(_DWORD *)(v23 + 16) = EffectId;
  v34 = EffectId;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)dispRewardInfoList,
         v34,
         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v23 + 40),
      *(_DWORD *)(v23 + 48) + 1,
      *(System_Action_o **)(v23 + 56),
      v35);
    return;
  }
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_25;
  v36 = *(_DWORD *)(v23 + 16);
  items = dispRewardInfoList->fields._items;
  v38 = Method_System_Collections_Generic_List_int__Add__;
  ++dispRewardInfoList->fields._version;
  if ( !items )
    goto LABEL_25;
  size = dispRewardInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)dispRewardInfoList,
      v36,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    dispRewardInfoList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = v36;
  }
  v40 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v40 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v40->static_fields->ITEM_GET_EFFECT_NAME;
  v56 = *(_DWORD *)(v23 + 16);
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__Format(
                                                                      ITEM_GET_EFFECT_NAME,
                                                                      v42,
                                                                      0LL);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_25;
  v43 = (System_String_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemGetAssetDatas,
                                                                      *(_DWORD *)(v23 + 16),
                                                                      (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !dispRewardInfoList )
    goto LABEL_25;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              (AssetData_o *)dispRewardInfoList,
                              v43,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__48347676,
                                                                      (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !dispRewardInfoList )
    goto LABEL_25;
  v45 = (UnityEngine_GameObject_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)dispRewardInfoList,
                                                                      0LL);
  if ( !dispRewardInfoList )
    goto LABEL_25;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)dispRewardInfoList, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v45, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v45,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v23 + 24) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)Component_object, v47, v48);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList
    || (v49 = *(QuestRewardItemAction_o **)(v23 + 24),
        dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                            dispRewardInfoList,
                                                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__),
        !v49)
    || (QuestRewardItemAction__Setup_33799352(
          v49,
          (QuestRewardInfo_array *)dispRewardInfoList,
          *(_DWORD *)(v23 + 16) == 0,
          0LL),
        MissionListViewManager__SetRewardItemGetEffectTitleSprite(this, v45, v50, v51),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v55 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v53, v54),
        System_Action___ctor(
          v55,
          (Il2CppObject *)v23,
          Method_MissionListViewManager___c__DisplayClass83_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
          0LL),
        !Instance) )
  {
LABEL_25:
    sub_1B64324(dispRewardInfoList);
  }
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 1.0, v55, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x22

  if ( (byte_49FF70C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&callCnt);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__0__, v8);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass78_0_TypeInfo, v9);
    byte_49FF70C = 1;
  }
  v10 = sub_1B64314(MissionListViewManager___c__DisplayClass78_0_TypeInfo, *(_QWORD *)&callCnt, callback);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 32) = callback;
  *(_DWORD *)(v10 + 24) = callCnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)callback, v14, v15);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v10 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v20 = (CommonUI_o *)Instance;
    v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v10,
      Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( v20 )
    {
      CommonUI__maskFadeout(v20, FADEOUT_KIND, FADEOUT_TIME, v23, 0LL);
      return;
    }
LABEL_9:
    sub_1B64324(v11);
  }
  ActionExtensions__Call(*(System_Action_o **)(v10 + 32), 0LL);
}


void __fastcall MissionListViewManager__StartTreasureItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  char *v5; // x19
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
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  MissionListViewManager___c_c *v25; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x20
  System_Func_object__bool__o *_9__82_0; // x22
  Il2CppObject *v28; // x23
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  MissionListViewManager___c_c *v34; // x0
  System_Func_object__bool__o *_9__82_1; // x22
  Il2CppObject *v36; // x23
  struct MissionListViewManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_object__o *v41; // x23
  struct System_Collections_Generic_List_QuestRewardInfo__o **p_dispRewardInfoList; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  MissionListViewManager_o *ItemEffect; // x0
  __int64 v46; // x1
  int v47; // w8
  __int64 v48; // x23
  char *v49; // x28
  __int64 v50; // x8
  const MethodInfo *v51; // x2
  __int64 v52; // x2
  QuestRewardInfo_o *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x8
  int32_t size; // w27
  const char *v58; // x8
  _QWORD *v59; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const char *v61; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v5 = (char *)gifts;
  if ( (byte_49FF710 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_GiftEntity___, gifts);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GiftEntity___, v11);
    sub_1B640C8(&System_Func_GiftEntity__bool__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo, v16);
    sub_1B640C8(&MissionListViewManager_TypeInfo, v17);
    sub_1B640C8(&QuestRewardInfo_TypeInfo, v18);
    sub_1B640C8(&Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__82_0__, v19);
    sub_1B640C8(&Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__82_1__, v20);
    sub_1B640C8(&MissionListViewManager___c_TypeInfo, v21);
    byte_49FF710 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  v25 = MissionListViewManager___c_TypeInfo;
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
    v25 = MissionListViewManager___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__bool__o *)v25->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = MissionListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__82_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GiftEntity__bool__TypeInfo, v23, v24);
    System_Func_object__bool____ctor(
      _9__82_0,
      v28,
      Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__82_0__,
      0LL);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_GiftEntity__bool__o *)_9__82_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v30, v31);
  }
  if ( BasicHelper__Any_object__48384284(
         (System_Object_array *)v5,
         (System_Func_T__bool__o *)_9__82_0,
         (const MethodInfo_2E2491C *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v34 = MissionListViewManager___c_TypeInfo;
    if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
      v34 = MissionListViewManager___c_TypeInfo;
    }
    _9__82_1 = (System_Func_object__bool__o *)v34->static_fields->__9__82_1;
    if ( !_9__82_1 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = MissionListViewManager___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__82_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GiftEntity__bool__TypeInfo, v32, v33);
      System_Func_object__bool____ctor(
        _9__82_1,
        v36,
        Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__82_1__,
        0LL);
      v37 = MissionListViewManager___c_TypeInfo->static_fields;
      v37->__9__82_1 = (struct System_Func_GiftEntity__bool__o *)_9__82_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->__9__82_1, (int32_t)_9__82_1, v38, v39);
    }
    v40 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v5,
            (System_Func_TSource__bool__o *)_9__82_1,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    v5 = (char *)System_Linq_Enumerable__ToArray_object_(
                   v40,
                   (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v41 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestRewardInfo__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  p_dispRewardInfoList = &this->fields.dispRewardInfoList;
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dispRewardInfoList, (int32_t)v41, v43, v44);
  if ( !v5 )
    goto LABEL_43;
  v47 = *((_DWORD *)v5 + 6);
  if ( v47 >= 1 )
  {
    v48 = 0LL;
    v49 = v5 + 32;
    while ( 1 )
    {
      if ( (unsigned int)v48 >= v47 )
LABEL_44:
        sub_1B6432C(ItemEffect, v46);
      v50 = *(_QWORD *)&v49[8 * v48];
      if ( !v50 || !v26 )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v26,
                                                 &entity,
                                                 *(_DWORD *)(v50 + 24),
                                                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   (int32_t)entity[1].klass,
                                                   v51);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v53 = (QuestRewardInfo_o *)sub_1B64314(QuestRewardInfo_TypeInfo, v46, v52);
          QuestRewardInfo___ctor(v53, 0LL);
          if ( !v53 )
            break;
          v53->fields.type = 2;
          if ( !entity )
            break;
          v53->fields.objectId = (int32_t)entity[1].klass;
          if ( (unsigned int)v48 >= *((_DWORD *)v5 + 6) )
            goto LABEL_44;
          v56 = *(_QWORD *)&v49[8 * v48];
          if ( !v56 )
            break;
          v53->fields.num = *(_DWORD *)(v56 + 28);
          if ( !*p_dispRewardInfoList )
            break;
          ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          size = (*p_dispRewardInfoList)->fields._size;
          if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
            ItemEffect = (MissionListViewManager_o *)MissionListViewManager_TypeInfo;
          }
          if ( size < SLODWORD(ItemEffect->fields.sort->fields.manager) )
          {
            ItemEffect = (MissionListViewManager_o *)*p_dispRewardInfoList;
            if ( !*p_dispRewardInfoList )
              break;
            v58 = *(const char **)&ItemEffect->fields.m_CachedPtr;
            v59 = Method_System_Collections_Generic_List_QuestRewardInfo__Add__;
            ++HIDWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( !v58 )
              break;
            m_CancellationTokenSource_low = SLODWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *((_DWORD *)v58 + 6) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ItemEffect,
                (Il2CppObject *)v53,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
            }
            else
            {
              v61 = &v58[8 * m_CancellationTokenSource_low];
              LODWORD(ItemEffect->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *((_QWORD *)v61 + 4) = v53;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 32), (int32_t)v53, v54, v55);
            }
          }
        }
      }
      v47 = *((_DWORD *)v5 + 6);
      if ( (int)++v48 >= v47 )
        return;
    }
LABEL_43:
    sub_1B64324(ItemEffect);
  }
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  ServantRewardAction_o *svtRewardComp; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20

  if ( (byte_49FF70D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass79_0__SvtEffCaller_b__0__, v6);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass79_0_TypeInfo, v7);
    byte_49FF70D = 1;
  }
  v8 = sub_1B64314(MissionListViewManager___c__DisplayClass79_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v8 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)callback, v12, v13);
  svtRewardComp = this->fields.svtRewardComp;
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass79_0__SvtEffCaller_b__0__,
    0LL);
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtRewardComp )
LABEL_8:
    sub_1B64324(v9);
  ServantRewardAction__Play(svtRewardComp, v17, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *Master_object; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  int32_t v9; // w20
  System_String_o *v10; // x0
  int32_t v11; // w21
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = objectId;
  if ( (byte_49FF70E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCostumeMaster___, resultEntity);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    byte_49FF70E = 1;
  }
  Master_object = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !Master_object )
    goto LABEL_8;
  v7 = Master_object;
  v8 = System_String__Substring_61394392(Master_object, 0, Master_object->fields._stringLength - 2, 0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  v10 = System_String__Substring(v7, v7->fields._stringLength - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1B64324(Master_object);
  return ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Master_object, resultEntity, v9, v11, 0LL);
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
  int32_t v8; // w3
  float realtimeSinceStartup; // s0
  float v10; // s0
  float v11; // s0
  float alphaAnimTimeOld; // s9
  float v13; // s8
  MissionListViewManager_c *v14; // x0
  float v15; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v17; // w21
  MissionListViewManager_c *v18; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v20; // w21

  if ( (byte_49FF6F7 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewManager_TypeInfo, method);
    sub_1B640C8(&Method_TransitionCalculator_float__Update__, v3);
    byte_49FF6F7 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v6 = MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rewardIconAlphaCalculator, (int32_t)v6, v7, v8);
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
  v10 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_376C0A0 *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v10;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_24;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0LL) )
  {
    v11 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v13 = v11;
    v14 = MissionListViewManager_TypeInfo;
    if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
      v14 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v13 - alphaAnimTimeOld) >= v14->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    sub_1B64324(rewardIconAlphaCalculator);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0LL);
  v15 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v15;
  v17 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v18 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v18 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v18->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v17 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v20 = this->fields.alphaAnimCnt;
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v20 - ALPHA_ANIM_COUNT_RESET_VAL;
  }
  ((void (__fastcall *)(MissionListViewManager_o *, void *))this->klass->vtable._12_OnChangeAlphaAnim.method)(
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

  if ( (byte_49FF6F5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FF6F5 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FF6F6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49FF6F6 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF719 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewManager___c_TypeInfo, v1);
    byte_49FF719 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MissionListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MissionListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)MissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall MissionListViewManager___c___ctor(MissionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionListViewManager___c___StartTreasureItemGetEffectAction_b__82_0(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return !Gift__IsItem_37376280(x->fields.type, 0LL);
}


bool __fastcall MissionListViewManager___c___StartTreasureItemGetEffectAction_b__82_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return Gift__IsItem_37376280(x->fields.type, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass64_0___ctor(
        MissionListViewManager___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionListViewManager___c__DisplayClass64_0___ShowRewardDetailInfo_b__0(
        MissionListViewManager___c__DisplayClass64_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  return entity != this->fields.subGiftEntity;
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___ctor(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___StartEventMissionClearItemAction_b__0(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MissionListViewManager___c__DisplayClass71_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *_4__this; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_49FF71A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass71_0_o *)sub_1B640C8(
                                                               &Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__1__,
                                                               v4);
    byte_49FF71A = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !_4__this )
    sub_1B64324(this);
  MissionListViewManager__LoadTreasureGetEffect(_4__this, _9__1, v2);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct MissionListViewManager_o *v8; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF71B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__2__, v4);
    byte_49FF71B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  MissionListViewManager__SetupTreasureGetEffect(_4__this, _4__this->fields.giftIconId, v2);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_9;
  questRewardBoxAction = v8->fields.questRewardBoxAction;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_1B64324(_4__this);
  QuestRewardBoxAction__Play(questRewardBoxAction, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___StartEventMissionClearItemAction_b__2(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass71_0_o *v2; // x19
  __int64 v3; // x1
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct MissionListViewManager_o *v6; // x8
  AssetData_o *treasureGetAssetData; // x20
  const MethodInfo *v8; // x4

  v2 = this;
  if ( (byte_49FF71C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass71_0_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF71C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass71_0_o *)_4__this->fields.questRewardBoxAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_12;
  treasureGetAssetData = v6->fields.treasureGetAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37477464(treasureGetAssetData, 0LL);
  this = (MissionListViewManager___c__DisplayClass71_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1B64324(this);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v2->fields.gifts,
    0,
    v2->fields.afterDetail,
    v8);
}


void __fastcall MissionListViewManager___c__DisplayClass72_0___ctor(
        MissionListViewManager___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass72_0___StartItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  MissionListViewManager__EndItemGetEffectAction(this->fields.__4__this, this->fields.afterDetail, v2);
}


void __fastcall MissionListViewManager___c__DisplayClass72_0___StartItemGetEffectAction_b__1(
        MissionListViewManager___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  _4__this->fields.isEffect = 1;
  MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
    _4__this,
    this->fields.gifts,
    this->fields.idx,
    this->fields.afterDetail,
    v2);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___ctor(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass73_0___EndItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8
  MissionListViewManager___c__DisplayClass73_0_o *v3; // x19
  struct System_Action_o *afterDetail; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MissionListViewManager___c__DisplayClass73_0_o *)_4__this->fields.touchBlockObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (afterDetail = v3->fields.afterDetail) == 0LL) )
  {
    sub_1B64324(this);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))afterDetail->fields.m_target)(
    afterDetail->fields.original_method_info,
    *(_QWORD *)&afterDetail->fields.extra_arg);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___ctor(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartRewardEquipGetEffect_b__0(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  CommonUI_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FF71D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__1__, v4);
    byte_49FF71D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__LoadEquipGetEffect(v9, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__2; // x22
  CommonUI_o *v9; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF71E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__2__, v4);
    byte_49FF71E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__OpenEquipGetEffect(v9, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x4

  if ( (byte_49FF71F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF71F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v4);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___ctor(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___StartRewardCostumeReleaseGetEffect_b__0(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  CommonUI_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FF720 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_49FF720 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__LoadCostumeReleaseEffect(v9, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__2; // x22
  CommonUI_o *v9; // x21
  System_String_o *name; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF721 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_49FF721 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__OpenCostumeReleaseEffect(v9, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x4

  if ( (byte_49FF722 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF722 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v4);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___ctor(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardItemGetEffect_b__0(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MissionInfoMaker_c *v7; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF723 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v5);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardItemGetEffect_b__1__, v6);
    byte_49FF723 = 1;
  }
  v7 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v7 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v7->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v10 = System_String__Format(ITEM_GET_ASSET_NAME, v9, 0LL);
  _9__1 = this->fields.__9__1;
  v14 = v10;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v15, v16);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass76_0_o *this,
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  MissionInfoMaker_c *v19; // x0
  AssetData_o *v20; // x21
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v22; // x0
  Il2CppObject *Object_object__48347676; // x21
  UnityEngine_GameObject_o *v24; // x21
  struct MissionListViewManager_o *_4__this; // x8
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  QuestRewardItemAction_o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF724 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v5);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass76_1__StartRewardItemGetEffect_b__2__, v11);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass76_1_TypeInfo, v12);
    byte_49FF724 = 1;
  }
  v13 = sub_1B64314(MissionListViewManager___c__DisplayClass76_1_TypeInfo, data, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 24) = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)data, v17, v18);
  v19 = MissionInfoMaker_TypeInfo;
  v20 = *(AssetData_o **)(v13 + 24);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v19 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v19->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v22, 0LL);
  if ( !v20 )
    goto LABEL_15;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              v20,
                              transform,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__48347676,
                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_15;
  v24 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v24, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v24,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)Component_object, v27, v28);
  transform = *(System_String_o **)(v13 + 16);
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        v29 = *(QuestRewardItemAction_o **)(v13 + 16),
        v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v13,
          Method_MissionListViewManager___c__DisplayClass76_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !v29) )
  {
LABEL_15:
    sub_1B64324(transform);
  }
  QuestRewardItemAction__Play(v29, 0, v32, 0.0, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_1___ctor(
        MissionListViewManager___c__DisplayClass76_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_1___StartRewardItemGetEffect_b__2(
        MissionListViewManager___c__DisplayClass76_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *mRewardItemAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  const MethodInfo *v7; // x4
  struct MissionListViewManager___c__DisplayClass76_0_o *CS___8__locals1; // x8

  if ( (byte_49FF725 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF725 = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37477464(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_11:
    sub_1B64324(mRewardItemAction);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    v7);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___ctor(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardGetEffect_b__0(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FF726 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__1__, v4);
    byte_49FF726 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  SummonAssetManager__LoadSummonAssets(v9, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass77_0_o *this,
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
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  Il2CppObject *v15; // x21
  struct MissionListViewManager_o *v16; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  struct MissionListViewManager_o *v19; // x8
  _BOOL4 isDoEffect; // w24
  ServantRewardAction_o *svtRewardComp; // x20
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v24; // w22
  Il2CppObject v25; // q1
  int64_t v26; // x0
  Il2CppClass *v27; // x8
  int64_t v28; // x21
  bool isNew; // w5
  int32_t v30; // w3
  bool v31; // w6
  int32_t v32; // w7
  ServantRewardAction_o *v33; // x0
  int32_t v34; // w1
  int64_t v35; // x2
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  Il2CppObject *v38; // x0
  struct MissionListViewManager_o *v39; // x20
  Il2CppObject *v40; // x21
  struct MissionListViewManager_o *v41; // x8
  int32_t v42; // w2
  int32_t v43; // w3
  struct MissionListViewManager_o *v44; // x8
  ServantRewardAction_o *v45; // x20
  Il2CppObject v46; // q1
  bool v47; // w2
  int64_t v48; // x1
  bool v49; // w3
  int32_t v50; // w4
  ServantRewardAction_o *v51; // x0
  Il2CppObject v52; // q1
  int64_t v53; // x0
  Il2CppClass *v54; // x8
  int64_t v55; // x21
  Il2CppObject v56; // q1
  System_Action_o *_9__2; // x22
  MissionListViewManager_o *v58; // x20
  int32_t v59; // w2
  int32_t v60; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_49FF727 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__2__, v11);
    byte_49FF727 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 this->fields.userSvtID,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v15 = Entity;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v16 = this->fields.__4__this;
      if ( v16 )
      {
        if ( Master_object )
        {
          Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                     (SummonAssetManager_o *)Master_object,
                                     v16->fields.instantiatingPOS,
                                     0,
                                     0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.svtRewardComp, Master_object, v17, v18);
            v19 = this->fields.__4__this;
            if ( v19 )
            {
              if ( v15 )
              {
                isDoEffect = this->fields.isDoEffect;
                svtRewardComp = v19->fields.svtRewardComp;
                klass = v15[5].klass;
                monitor = v15[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v66.fields.currentCryptoKey = klass;
                *(_QWORD *)&v66.fields.fakeValue = monitor;
                v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v66, 0LL);
                if ( isDoEffect )
                {
                  v25 = v15[2];
                  *(Il2CppObject *)&v65.fields.currentCryptoKey = v15[1];
                  *(Il2CppObject *)&v65.fields.fakeValue = v25;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v64 = v65;
                  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v64, 0LL);
                  v27 = v15[6].klass;
                  *(_QWORD *)&v67.fields.fakeValue = v15[6].monitor;
                  v28 = v26;
                  *(_QWORD *)&v67.fields.currentCryptoKey = v27;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v67, 0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v30 = Master_object;
                    v31 = 1;
                    v32 = 14;
                    v33 = svtRewardComp;
                    v34 = v24;
                    v35 = v28;
LABEL_37:
                    ServantRewardAction__Setup(v33, v34, v35, v30, 1, isNew, v31, v32, 0LL);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v52 = v15[2];
                  *(Il2CppObject *)&v65.fields.currentCryptoKey = v15[1];
                  *(Il2CppObject *)&v65.fields.fakeValue = v52;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v63 = v65;
                  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v63, 0LL);
                  v54 = v15[6].klass;
                  *(_QWORD *)&v68.fields.fakeValue = v15[6].monitor;
                  v55 = v53;
                  *(_QWORD *)&v68.fields.currentCryptoKey = v54;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v68, 0LL);
                  if ( svtRewardComp )
                  {
                    v30 = Master_object;
                    v32 = 6;
                    v33 = svtRewardComp;
                    v34 = v24;
                    v35 = v55;
                    isNew = 0;
                    v31 = 0;
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
    sub_1B64324(Master_object);
  }
  Master_object = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_object & 1) == 0 )
    goto LABEL_43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_47;
  v38 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          this->fields.userSvtID,
          (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v39 = this->fields.__4__this;
  v40 = v38;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v41 = this->fields.__4__this;
  if ( !v41 )
    goto LABEL_47;
  if ( !Master_object )
    goto LABEL_47;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v41->fields.instantiatingPOS,
                             0,
                             0LL);
  if ( !v39 )
    goto LABEL_47;
  v39->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.svtRewardComp, Master_object, v42, v43);
  v44 = this->fields.__4__this;
  if ( !v44 || !v40 )
    goto LABEL_47;
  v45 = v44->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v46 = v40[2];
    *(Il2CppObject *)&v65.fields.currentCryptoKey = v40[1];
    *(Il2CppObject *)&v65.fields.fakeValue = v46;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v62 = v65;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v62, 0LL);
    if ( !v45 )
      goto LABEL_47;
    v47 = this->fields.isNew;
    v48 = Master_object;
    v49 = 1;
    v50 = 14;
    v51 = v45;
  }
  else
  {
    v56 = v40[2];
    *(Il2CppObject *)&v65.fields.currentCryptoKey = v40[1];
    *(Il2CppObject *)&v65.fields.fakeValue = v56;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v61 = v65;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v61, 0LL);
    if ( !v45 )
      goto LABEL_47;
    v48 = Master_object;
    v50 = 6;
    v51 = v45;
    v47 = 0;
    v49 = 0;
  }
  ServantRewardAction__SetupCommandCode_34310396(v51, v48, v47, v49, v50, 0LL);
LABEL_43:
  _9__2 = this->fields.__9__2;
  v58 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v59, v60);
  }
  if ( !v58 )
    goto LABEL_47;
  MissionListViewManager__SvtEffCaller(v58, _9__2, v37);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  struct MissionListViewManager_o *_4__this; // x8
  const MethodInfo *v5; // x4

  if ( (byte_49FF728 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, method);
    byte_49FF728 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
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


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartSvtListGetEffect_b__0(
        MissionListViewManager___c__DisplayClass78_0_o *this,
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
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v15; // x8
  Il2CppObject *Entity; // x0
  struct MissionListViewManager_o *v17; // x21
  Il2CppObject *v18; // x20
  struct MissionListViewManager_o *v19; // x8
  int32_t v20; // w2
  int32_t v21; // w3
  struct MissionListViewManager_o *v22; // x8
  struct GetSvts_array *v23; // x8
  __int64 v24; // x9
  struct MissionListViewManager_o *v25; // x8
  char v26; // w23
  ServantRewardAction_o *svtRewardComp; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x24
  int32_t v30; // w22
  Il2CppObject v31; // q1
  int64_t v32; // x0
  Il2CppClass *v33; // x8
  int64_t v34; // x20
  struct MissionListViewManager_o *v35; // x8
  struct GetSvts_array *v36; // x8
  __int64 v37; // x9
  GetSvts_o *v38; // x8
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  Il2CppObject v41; // q1
  int64_t v42; // x0
  Il2CppClass *v43; // x8
  int64_t v44; // x20
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *v46; // x20
  int32_t v47; // w2
  int32_t v48; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49FF729 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__1__, v9);
    byte_49FF729 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
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
             Master_object,
             v15->fields.userSvtId,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v17 = this->fields.__4__this;
  v18 = Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)Master_object,
                                                                  v19->fields.instantiatingPOS,
                                                                  0,
                                                                  0LL);
  if ( !v17 )
    goto LABEL_38;
  v17->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.svtRewardComp, (int32_t)Master_object, v20, v21);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_38;
  v23 = v22->fields.getSvtList;
  if ( !v23 )
    goto LABEL_38;
  v24 = this->fields.callCnt;
  if ( (unsigned int)v24 >= v23->max_length )
LABEL_39:
    sub_1B6432C(Master_object, v11);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v23->m_Items[v24];
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_object, 0LL);
  v25 = this->fields.__4__this;
  if ( !v25 || !v18 )
    goto LABEL_38;
  v26 = (char)Master_object;
  svtRewardComp = v25->fields.svtRewardComp;
  klass = v18[5].klass;
  monitor = v18[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = klass;
  *(_QWORD *)&v52.fields.fakeValue = monitor;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v52, 0LL);
  if ( (v26 & 1) == 0 )
  {
    v41 = v18[2];
    *(Il2CppObject *)&v51.fields.currentCryptoKey = v18[1];
    *(Il2CppObject *)&v51.fields.fakeValue = v41;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v49 = v51;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
    v43 = v18[6].klass;
    *(_QWORD *)&v54.fields.fakeValue = v18[6].monitor;
    v44 = v42;
    *(_QWORD *)&v54.fields.currentCryptoKey = v43;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                    v54,
                                                                    0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v30, v44, (int32_t)Master_object, 1, 0, 0, 2, 0LL);
      goto LABEL_34;
    }
LABEL_38:
    sub_1B64324(Master_object);
  }
  v31 = v18[2];
  *(Il2CppObject *)&v51.fields.currentCryptoKey = v18[1];
  *(Il2CppObject *)&v51.fields.fakeValue = v31;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v50 = v51;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  v33 = v18[6].klass;
  *(_QWORD *)&v53.fields.fakeValue = v18[6].monitor;
  v34 = v32;
  *(_QWORD *)&v53.fields.currentCryptoKey = v33;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                  v53,
                                                                  0LL);
  v35 = this->fields.__4__this;
  if ( !v35 )
    goto LABEL_38;
  v36 = v35->fields.getSvtList;
  if ( !v36 )
    goto LABEL_38;
  v37 = this->fields.callCnt;
  if ( (unsigned int)v37 >= v36->max_length )
    goto LABEL_39;
  v38 = v36->m_Items[v37];
  if ( !v38 || !svtRewardComp )
    goto LABEL_38;
  ServantRewardAction__Setup(svtRewardComp, v30, v34, (int32_t)Master_object, 1, v38->fields.isNew, 1, 10, 0LL);
LABEL_34:
  _9__1 = this->fields.__9__1;
  v46 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v39, v40);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v47, v48);
  }
  if ( !v46 )
    goto LABEL_38;
  MissionListViewManager__SvtEffCaller(v46, _9__1, v40);
}


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FF72A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__2__, v5);
    byte_49FF72A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v13, v14);
  }
  if ( !v10 )
    sub_1B64324(Instance);
  CommonUI__maskFadein(v10, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  MissionListViewManager__StartSvtListGetEffect(_4__this, this->fields.callCnt + 1, this->fields.callback, v2);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___ctor(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass79_0___SvtEffCaller_b__0(
        MissionListViewManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass79_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_49FF72B & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass79_0_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF72B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass79_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_1B64324(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass83_0___ctor(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass83_0___StartRewardItemGetEffectAfterTresureEffect_b__0(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ScrTerminalListTop_c *v7; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF72C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v5);
    sub_1B640C8(
      &Method_MissionListViewManager___c__DisplayClass83_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      v6);
    byte_49FF72C = 1;
  }
  v7 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v7 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v7->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v10 = System_String__Format(ITEM_GET_ASSET_NAME, v9, 0LL);
  _9__1 = this->fields.__9__1;
  v14 = v10;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass83_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v15, v16);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass83_0___StartRewardItemGetEffectAfterTresureEffect_b__1(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  QuestRewardItemAction_o *mRewardItemAction; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_49FF72D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    sub_1B640C8(
      &Method_MissionListViewManager___c__DisplayClass83_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
      v5);
    sub_1B640C8(&MissionListViewManager___c__DisplayClass83_1_TypeInfo, v6);
    byte_49FF72D = 1;
  }
  v7 = sub_1B64314(MissionListViewManager___c__DisplayClass83_1_TypeInfo, data, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v9, v10),
        *(_QWORD *)(v7 + 16) = data,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)data, v11, v12),
        mRewardItemAction = this->fields.mRewardItemAction,
        v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v7,
          Method_MissionListViewManager___c__DisplayClass83_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0LL),
        !mRewardItemAction) )
  {
    sub_1B64324(v8);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v16, 0.0, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass83_1___ctor(
        MissionListViewManager___c__DisplayClass83_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass83_1___StartRewardItemGetEffectAfterTresureEffect_b__2(
        MissionListViewManager___c__DisplayClass83_1_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass83_1_o *v2; // x19
  __int64 v3; // x1
  struct MissionListViewManager___c__DisplayClass83_0_o *CS___8__locals1; // x8
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  const MethodInfo *v7; // x4
  struct MissionListViewManager___c__DisplayClass83_0_o *v8; // x8

  v2 = this;
  if ( (byte_49FF72E & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    this = (MissionListViewManager___c__DisplayClass83_1_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF72E = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  this = (MissionListViewManager___c__DisplayClass83_1_o *)CS___8__locals1->fields.mRewardItemAction;
  if ( !this )
    goto LABEL_12;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  data = v2->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37477464(data, 0LL);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 || (this = (MissionListViewManager___c__DisplayClass83_1_o *)v8->fields.__4__this) == 0LL )
LABEL_12:
    sub_1B64324(this);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v8->fields.gifts,
    v8->fields.idx + 1,
    v8->fields.afterDetail,
    v7);
}


void __fastcall MissionListViewManager___c__DisplayClass84_0___ctor(
        MissionListViewManager___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass84_0___LoadTreasureGetEffect_b__0(
        MissionListViewManager___c__DisplayClass84_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct MissionListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  _4__this->fields.treasureGetAssetData = data;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.treasureGetAssetData,
    (int32_t)data,
    (int32_t)method,
    v3);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass87_0___ctor(
        MissionListViewManager___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass87_0___LoadItemGetEffects_b__0(
        MissionListViewManager___c__DisplayClass87_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass87_0_o *v4; // x19
  struct MissionListViewManager_o *_4__this; // x8
  const MethodInfo *v6; // x3

  v4 = this;
  if ( (byte_49FF72F & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass87_0_o *)sub_1B640C8(
                                                               &Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__,
                                                               data);
    byte_49FF72F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass87_0_o *)_4__this->fields.itemGetAssetDatas) == 0LL
    || (System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (Il2CppObject *)data,
          (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass87_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1B64324(this);
  }
  MissionListViewManager__LoadItemGetEffects(
    (MissionListViewManager_o *)this,
    v4->fields.idx + 1,
    v4->fields.endAct,
    v6);
}