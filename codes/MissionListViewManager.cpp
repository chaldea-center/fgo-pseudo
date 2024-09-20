void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct MissionListViewManager_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct MissionListViewManager_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E401 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17260/*"bit_prize_get"*/);
    sub_1B885B0(&StringLiteral_19805/*"get_02"*/);
    byte_4A5E401 = 1;
  }
  static_fields = MissionListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_INTERVAL = 0xDE021F040400000LL;
  v4 = StringLiteral_17260/*"bit_prize_get"*/;
  static_fields->PRIZE_GET_NORMAL = (struct System_String_o *)StringLiteral_17260/*"bit_prize_get"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->PRIZE_GET_NORMAL, v4, v1, v2);
  v5 = StringLiteral_19805/*"get_02"*/;
  v6 = MissionListViewManager_TypeInfo->static_fields;
  v6->ITEM_GET_TITLE = (struct System_String_o *)StringLiteral_19805/*"get_02"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->ITEM_GET_TITLE, v5, v7, v8);
  MissionListViewManager_TypeInfo->static_fields->EVENT_REWARD_GET_ITEM_DISP_MAX_NUM = 4;
}


void __fastcall MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  AvalonSceneManager_c *v9; // x0

  if ( (byte_4A5E400 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    byte_4A5E400 = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardItemGetEffectPlayList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispRewardInfoList, (int32_t)v6, v7, v8);
  this->fields.FADEOUT_KIND = 1;
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  LODWORD(this->fields.FADEOUT_TIME) = LODWORD(v9->static_fields->DEFAULT_FADE_TIME);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E3EC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E3EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MissionListViewManager__CloseItemDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5E3EA & 1) == 0 )
  {
    sub_1B885B0(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E3EA = 1;
  }
  v3 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_MissionListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E3EB & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E3EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MissionListViewManager__CreateRewardIconAlphaCalculator(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_4A5E3E1 & 1) == 0 )
  {
    sub_1B885B0(&AlphaTransitionCalculator_TypeInfo);
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    byte_4A5E3E1 = 1;
  }
  v2 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v2 = MissionListViewManager_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v5 = (AlphaTransitionCalculator_o *)sub_1B887FC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0LL);
  return v5;
}


void __fastcall MissionListViewManager__EndItemGetEffectAction(
        MissionListViewManager_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_Dictionary_int__AssetData__o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x8
  int v15; // w9
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  int32_t size; // w2
  int v20; // w9
  struct System_Collections_Generic_Dictionary_int__AssetData__o *itemGetAssetDatas; // x0
  Il2CppObject *value; // x21
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v24; // x8
  CommonUI_o *v25; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4A5E3F0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass73_0__EndItemGetEffectAction_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass73_0_TypeInfo);
    byte_4A5E3F0 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v5 = sub_1B887FC(MissionListViewManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = afterDetail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)afterDetail, v10, v11);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_22;
  v15 = rewardItemGetEffectPlayList->fields._version + 1;
  rewardItemGetEffectPlayList->fields._size = 0;
  rewardItemGetEffectPlayList->fields._version = v15;
  this->fields.questRewardBoxAction = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRewardBoxAction, 0, v12, v13);
  this->fields.isTreasureEffect = 0;
  this->fields.useTreasureGetEffectName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.useTreasureGetEffectName, 0, v16, v17);
  dispRewardInfoList = this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_22;
  size = dispRewardInfoList->fields._size;
  v20 = dispRewardInfoList->fields._version + 1;
  dispRewardInfoList->fields._size = 0;
  dispRewardInfoList->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)dispRewardInfoList->fields._items, 0, size, 0LL);
  itemGetAssetDatas = this->fields.itemGetAssetDatas;
  if ( itemGetAssetDatas
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)itemGetAssetDatas,
         (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Count__) >= 1 )
  {
    v6 = this->fields.itemGetAssetDatas;
    if ( !v6 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v28,
      (System_Collections_Generic_Dictionary_int__object__o *)v6,
      (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__AssetData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v28,
              (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__MoveNext__) )
    {
      value = v28.fields._current.fields.value;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37790656((AssetData_o *)value, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v28,
      (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AssetData__Dispose__);
    v6 = this->fields.itemGetAssetDatas;
    if ( !v6 )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)v6,
      (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__AssetData__Clear__);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = AvalonSceneManager_TypeInfo;
  v25 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v24 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass73_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !v25 )
LABEL_22:
    sub_1B8880C(v6, v7);
  CommonUI__maskFadein(v25, DEFAULT_FADE_TIME, v27, 0LL);
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
  BalanceConfig_c *v5; // x0
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A5E3FD & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    this = (MissionListViewManager_o *)sub_1B885B0(&StringLiteral_18915/*"effectId"*/);
    byte_4A5E3FD = 1;
  }
  entity = 0LL;
  if ( !rewardInfo )
    goto LABEL_19;
  if ( !Gift__IsEquip(rewardInfo->fields.type, 0LL) )
  {
    this = (MissionListViewManager_o *)Gift__IsItem_37687788(rewardInfo->fields.type, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    dispRewardInfoList = v4->fields.dispRewardInfoList;
    if ( !dispRewardInfoList )
      goto LABEL_19;
    if ( dispRewardInfoList->fields._size > 1 )
      return 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !this )
      goto LABEL_19;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            rewardInfo->fields.objectId,
            (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return 0;
    this = (MissionListViewManager_o *)entity;
    if ( entity )
      return ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18915/*"effectId"*/, 0, 0LL);
LABEL_19:
    sub_1B8880C(this, rewardInfo);
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v5->static_fields->EquipGetEffectId;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList___Il2CppFullySharedGenericType_(
        MissionListViewManager_o *this,
        const MethodInfo_2EFEAEC *method)
{
  const MethodInfo_2EFEAEC_RGCTXs *rgctx_data; // x19
  __int64 native_size; // x21
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_TObject__o *v7; // x19
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x25
  _BOOL8 v11; // x0
  __int64 v12; // x1
  MethodInfo *_2_UnityEngine_GameObject_GetComponent_TObject; // x1
  void (__fastcall *methodPointer)(); // x0
  void *v15; // x0
  __int64 v16; // x1
  const MethodInfo_2EFEAEC_RGCTXs *v17; // x8
  struct System_Collections_Generic_List_T__o *v18; // x4
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x1
  Il2CppMethodPointer v20; // x0
  __int64 v22; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-20h] BYREF
  __int64 v25; // [xsp+38h] [xbp-8h]

  v25 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_3_TObject->_2.native_size;
  memset(&v24, 0, sizeof(v24));
  memset((char *)&v22 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1BDA48C(_0_System_Collections_Generic_List_TObject);
  v7 = (System_Collections_Generic_List_TObject__o *)sub_1B887FC(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v11 )
    {
      if ( !current )
        sub_1B8880C(v11, v12);
      _2_UnityEngine_GameObject_GetComponent_TObject = method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_;
      methodPointer = _2_UnityEngine_GameObject_GetComponent_TObject->methodPointer;
      v23.fields._list = (struct System_Collections_Generic_List_T__o *)((char *)&v22
                                                                       - ((native_size + 15) & 0x1FFFFFFF0LL));
      _2_UnityEngine_GameObject_GetComponent_TObject->invoker_method(
        methodPointer,
        _2_UnityEngine_GameObject_GetComponent_TObject,
        current,
        (void **)&v23.fields._list,
        v23.fields._list);
      memcpy(
        (char *)&v22 - ((native_size + 15) & 0x1FFFFFFF0LL),
        (char *)&v22 - ((native_size + 15) & 0x1FFFFFFF0LL),
        native_size);
      v15 = memcpy(
              (char *)&v22 - ((native_size + 15) & 0x1FFFFFFF0LL),
              (char *)&v22 - ((native_size + 15) & 0x1FFFFFFF0LL),
              native_size);
      if ( !v7 )
        sub_1B8880C(v15, v16);
      v17 = method->rgctx_data;
      v18 = (struct System_Collections_Generic_List_T__o *)((char *)&v22 - ((native_size + 15) & 0x1FFFFFFF0LL));
      if ( (v17->_3_TObject->_1.byval_arg.bits & 0x80000000) == 0 )
        v18 = *(struct System_Collections_Generic_List_T__o **)((char *)&v22 - ((native_size + 15) & 0x1FFFFFFF0LL));
      _4_System_Collections_Generic_List_TObject__Add = v17->_4_System_Collections_Generic_List_TObject__Add;
      v20 = _4_System_Collections_Generic_List_TObject__Add->methodPointer;
      v23.fields._list = v18;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_TObject__o *, System_Collections_Generic_List_Enumerator_object__o *))_4_System_Collections_Generic_List_TObject__Add->invoker_method)(
        v20,
        _4_System_Collections_Generic_List_TObject__Add,
        v7,
        &v23);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return v7;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_2EFE89C *method)
{
  const MethodInfo_2EFE89C_RGCTXs *rgctx_data; // x8
  __int64 _0_System_Collections_Generic_List_TObject; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x1
  struct System_Object_array *items; // x8
  MethodInfo *_4_System_Collections_Generic_List_TObject__Add; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  memset(&v22, 0, sizeof(v22));
  _0_System_Collections_Generic_List_TObject = (__int64)rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE5(rgctx_data->_0_System_Collections_Generic_List_TObject_->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_List_TObject = sub_1BDA48C(_0_System_Collections_Generic_List_TObject);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(_0_System_Collections_Generic_List_TObject);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v10 )
    {
      if ( !current )
        sub_1B8880C(v10, v11);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      v15 = Component_object;
      if ( !v6 )
        sub_1B8880C(Component_object, Component_object);
      items = v6->fields._items;
      _4_System_Collections_Generic_List_TObject__Add = method->rgctx_data->_4_System_Collections_Generic_List_TObject__Add;
      ++v6->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          Component_object,
          (const MethodInfo_34FD834 *)_4_System_Collections_Generic_List_TObject__Add->klass->rgctx_data[14].rgctxDataDummy);
      }
      else
      {
        v19 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_TObject__o *)v6;
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

  if ( (byte_4A5E3ED & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5E3ED = 1;
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
        sub_1B8880C(v4, *(_QWORD *)&targetItemId);
    }
    max_length = EventItemNotDispItemGetEffect->max_length;
    v7 = max_length < 1;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; v7 = max_length == i )
      {
        if ( max_length == i )
          sub_1B88814(v4, *(_QWORD *)&targetItemId);
        if ( EventItemNotDispItemGetEffect->m_Items[i + 1] == targetItemId )
          break;
        ++i;
      }
    }
    LOBYTE(EventItemNotDispItemGetEffect) = !v7;
  }
  return (unsigned __int8)EventItemNotDispItemGetEffect & 1;
}


void __fastcall MissionListViewManager__LoadItemGetEffects(
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w8
  System_Collections_Generic_Dictionary_int__object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Item; // x0
  const MethodInfo *v19; // x2
  unsigned int EffectId; // w0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  ScrTerminalListTop_c *v24; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x19
  Il2CppObject *v26; // x0
  System_String_o *v27; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  int v29; // [xsp+Ch] [xbp-34h] BYREF

  while ( 1 )
  {
    v4 = endAct;
    v5 = idx;
    v6 = this;
    if ( (byte_4A5E3FE & 1) == 0 )
    {
      sub_1B885B0(&AssetManager_TypeInfo);
      sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__);
      sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      sub_1B885B0(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      sub_1B885B0(&int_TypeInfo);
      sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
      sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
      sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
      sub_1B885B0(&ScrTerminalListTop_TypeInfo);
      sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass87_0__LoadItemGetEffects_b__0__);
      sub_1B885B0(&MissionListViewManager___c__DisplayClass87_0_TypeInfo);
      byte_4A5E3FE = 1;
    }
    v7 = sub_1B887FC(MissionListViewManager___c__DisplayClass87_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    if ( !v7
      || (*(_QWORD *)(v7 + 16) = v6,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v6, v10, v11),
          *(_QWORD *)(v7 + 32) = v4,
          *(_DWORD *)(v7 + 28) = v5,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v4, v12, v13),
          (dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList) == 0LL) )
    {
LABEL_17:
      sub_1B8880C(dispRewardInfoList, v9);
    }
    v14 = *(_DWORD *)(v7 + 28);
    if ( v14 >= dispRewardInfoList->fields._size )
    {
      ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
      return;
    }
    if ( !v14 )
    {
      v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v15,
        (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v6->fields.itemGetAssetDatas = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.itemGetAssetDatas, (int32_t)v15, v16, v17);
      dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.dispRewardInfoList;
      if ( !dispRewardInfoList )
        goto LABEL_17;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             dispRewardInfoList,
             *(_DWORD *)(v7 + 28),
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    EffectId = MissionListViewManager__GetItemGetEffectId(v6, (QuestRewardInfo_o *)Item, v19);
    *(_DWORD *)(v7 + 24) = EffectId;
    v9 = EffectId;
    dispRewardInfoList = (System_Collections_Generic_List_object__o *)v6->fields.itemGetAssetDatas;
    if ( !dispRewardInfoList )
      goto LABEL_17;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)dispRewardInfoList,
            v9,
            (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__AssetData__ContainsKey__) )
      break;
    endAct = *(System_Action_o **)(v7 + 32);
    this = v6;
    idx = *(_DWORD *)(v7 + 28) + 1;
  }
  v24 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v24 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v24->static_fields->ITEM_GET_ASSET_NAME;
  v29 = *(_DWORD *)(v7 + 24);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v27 = System_String__Format(ITEM_GET_ASSET_NAME, v26, 0LL);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_MissionListViewManager___c__DisplayClass87_0__LoadItemGetEffects_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v27, v28, 1, 0LL);
}


void __fastcall MissionListViewManager__LoadTreasureGetEffect(
        MissionListViewManager_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x19
  AssetLoader_LoadEndDataHandler_o *v13; // x20

  if ( (byte_4A5E3FB & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass84_0__LoadTreasureGetEffect_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass84_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5853/*"Effect/Talk/"*/);
    byte_4A5E3FB = 1;
  }
  v5 = sub_1B887FC(MissionListViewManager___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)endAct, v10, v11);
  v12 = System_String__Concat_61707032(
          (System_String_o *)StringLiteral_5853/*"Effect/Talk/"*/,
          this->fields.useTreasureGetEffectName,
          0LL);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass84_0__LoadTreasureGetEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v12, v13, 1, 0LL);
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
  int32_t v9; // w3
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A5E3E5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E3E5 = 1;
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
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1B8880C(gameObject, v7);
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
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-28h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_4A5E3E8 & 1) == 0 )
  {
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    this = (MissionListViewManager_o *)sub_1B885B0(&Method_MissionListViewManager_CloseItemDetail__);
    byte_4A5E3E8 = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v6 = resultEntity;
    v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v7, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenCostumeReleaseDetail(v6, v7, v8);
  }
}


void __fastcall MissionListViewManager__OpenEquipDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5E3E9 & 1) == 0 )
  {
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E3E9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v7 = entity;
    v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    MissionInfoMaker__OpenEquipDetail((EquipEntity_o *)v7, v8, v9);
  }
}


void __fastcall MissionListViewManager__RequestInto(MissionListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E3E4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    sub_1B885B0(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_1B885B0(&Method_MissionListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5E3E4 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_2EFE89C *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_13:
    sub_1B8880C(ObjectList_object, v4);
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
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
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_object__o *ObjectList_object; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5E3E3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_1B885B0(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_1B885B0(&Method_MissionListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5E3E3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList_object = (System_Collections_Generic_List_object__o *)MissionListViewManager__GetObjectList_object_(
                                                                     this,
                                                                     (const MethodInfo_2EFE89C *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_1B8880C(0LL, v8);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList_object,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v11, delay, 1, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_44271872(
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  MissionListViewManager__SetMode_44271512(this, mode, v6);
}


void __fastcall MissionListViewManager__SetMode_44271512(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t v9; // w1

  if ( (byte_4A5E3E2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11311/*"RequestInto"*/);
    byte_4A5E3E2 = 1;
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
        sub_1B8880C(gameObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11311/*"RequestInto"*/,
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


void __fastcall MissionListViewManager__SetMode_44271816(
        MissionListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  MissionListViewManager__SetMode_44271512(this, mode, v7);
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
  if ( (byte_4A5E3E6 & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_1B885B0(&MissionListViewObject_TypeInfo);
    byte_4A5E3E6 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MissionListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
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
  MissionListViewManager_c *v6; // x0
  System_String_o *useTreasureGetEffectName; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x19
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x20
  __int64 methodPtr_low; // x9
  int32_t i; // w21
  UnityEngine_Object_o *Child; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  System_String_o *name; // x0
  __int64 v30; // x1
  Il2CppObject *Component_object; // x22
  MissionListViewManager_c *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x19
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0

  if ( (byte_4A5E3FF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    sub_1B885B0(&StringLiteral_20887/*"item_get/title_root"*/);
    sub_1B885B0(&StringLiteral_23958/*"title01"*/);
    byte_4A5E3FF = 1;
  }
  v6 = MissionListViewManager_TypeInfo;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v6 = MissionListViewManager_TypeInfo;
  }
  transform = (UnityEngine_Transform_o *)System_String__op_Equality(
                                           useTreasureGetEffectName,
                                           v6->static_fields->PRIZE_GET_NORMAL,
                                           0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !itemObj )
      goto LABEL_54;
    transform = UnityEngine_GameObject__get_transform(itemObj, 0LL);
    if ( !transform )
      goto LABEL_54;
    v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_20887/*"item_get/title_root"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
      return;
    if ( !v10 )
LABEL_54:
      sub_1B8880C(transform, v9);
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v10, 0LL);
    if ( !Enumerator )
      sub_1B8880C(0LL, v11);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_17;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_17:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v17 = Enumerator->klass;
      v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v18;
          v19 += 2;
          if ( !v18 )
            goto LABEL_24;
        }
        v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
      }
      else
      {
LABEL_24:
        v20 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v21 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
              Enumerator,
              *(_QWORD *)(v20 + 8));
      v23 = (UnityEngine_Transform_o *)v21;
      if ( !v21 )
        goto LABEL_53;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
        || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
      {
        sub_1B88ACC(v21);
LABEL_53:
        sub_1B8880C(v21, v22);
      }
      for ( i = 0; i < UnityEngine_Transform__get_childCount(v23, 0LL); ++i )
      {
        Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(v23, i, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v27 = UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
        if ( !v27 )
        {
          if ( !Child )
            sub_1B8880C(v27, v28);
          name = UnityEngine_Object__get_name(Child, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_23958/*"title01"*/, 0LL) )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)Child,
                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
            v32 = MissionListViewManager_TypeInfo;
            if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
            if ( !Component_object )
              sub_1B8880C(v32, v30);
            UISprite__set_spriteName(
              (UISprite_o *)Component_object,
              MissionListViewManager_TypeInfo->static_fields->ITEM_GET_TITLE,
              0LL);
          }
        }
      }
    }
    v33 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
    if ( v33 )
    {
      v34 = *(_QWORD *)v33;
      v35 = v33;
      v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_46;
        }
        v38 = v34 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_46:
        v38 = sub_1BDA590(v33, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
    }
  }
}


void __fastcall MissionListViewManager__SetTresureEffect(MissionListViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_c *v3; // x0
  float DEFAULT_FADE_TIME; // s0

  if ( (byte_4A5E3F8 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    byte_4A5E3F8 = 1;
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
  AssetData_o *treasureGetAssetData; // x0
  Il2CppObject *Object_object__48635516; // x21
  UnityEngine_GameObject_o *v7; // x21
  Il2CppObject *Component_object; // x0
  QuestRewardBoxAction_o **p_questRewardBoxAction; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *useTreasureGetEffectName; // x22
  MissionListViewManager_c *v13; // x0
  System_String_o *v14; // x20
  ScrTerminalListTop_c *v15; // x0
  int32_t v16; // w1

  if ( (byte_4A5E3FC & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    byte_4A5E3FC = 1;
  }
  treasureGetAssetData = this->fields.treasureGetAssetData;
  if ( !treasureGetAssetData )
    goto LABEL_21;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              treasureGetAssetData,
                              this->fields.useTreasureGetEffectName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  treasureGetAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                          Object_object__48635516,
                                          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  v7 = (UnityEngine_GameObject_o *)treasureGetAssetData;
  treasureGetAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)treasureGetAssetData,
                                          0LL);
  if ( !treasureGetAssetData )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)treasureGetAssetData, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v7, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v7,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardBoxAction___);
  p_questRewardBoxAction = &this->fields.questRewardBoxAction;
  this->fields.questRewardBoxAction = (struct QuestRewardBoxAction_o *)Component_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRewardBoxAction,
    (int32_t)Component_object,
    v10,
    v11);
  if ( !this->fields.isTreasureEffect )
    goto LABEL_15;
  useTreasureGetEffectName = this->fields.useTreasureGetEffectName;
  v13 = MissionListViewManager_TypeInfo;
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v13 = MissionListViewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(useTreasureGetEffectName, v13->static_fields->PRIZE_GET_NORMAL, 0LL) )
  {
    v14 = this->fields.useTreasureGetEffectName;
    v15 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v15 = ScrTerminalListTop_TypeInfo;
    }
    treasureGetAssetData = (AssetData_o *)System_String__op_Inequality(
                                            v14,
                                            v15->static_fields->TREASURE_GET_NORMAL,
                                            0LL);
  }
  else
  {
LABEL_15:
    treasureGetAssetData = (AssetData_o *)(&dword_0 + 1);
  }
  if ( !*p_questRewardBoxAction )
LABEL_21:
    sub_1B8880C(treasureGetAssetData, *(_QWORD *)&itemIconId);
  if ( itemIconId == 3 )
    v16 = 2;
  else
    v16 = itemIconId == 2;
  QuestRewardBoxAction__Setup(*p_questRewardBoxAction, v16, (unsigned __int8)treasureGetAssetData & 1, 0LL);
}


void __fastcall MissionListViewManager__ShowRewardDetailInfo(
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
  GiftEntity_array *v14; // x21
  __int64 v15; // x20
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_Func_object__bool__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  il2cpp_array_size_t max_length; // w9
  int v22; // w8
  GiftEntity_o *v23; // x20
  int32_t type; // w0
  Il2CppObject *Entity; // x20
  Il2CppObject *v26; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v27; // x22
  Il2CppObject *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v31; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v32; // x23
  GiftMaster_o *v33; // x22
  bool IsServantEquip; // w23
  Il2CppObject *v35; // x21
  ServantStatusDialog_EndDelegate_o *v36; // x22
  Il2CppObject *v37; // x20
  Il2CppObject *v38; // x21
  ServantStatusDialog_EndDelegate_o *v39; // x22
  const MethodInfo *v40; // x2
  struct System_String_o *MasterName_k__BackingField; // x20
  __int64 v42; // x23
  int32_t v43; // w20
  ServantStatusDialog_EndDelegate_o *v44; // x22
  const MethodInfo *v45; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A5E3E7 & 1) == 0 )
  {
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1B885B0(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager_CloseCommandCodeDetail__);
    sub_1B885B0(&Method_MissionListViewManager_CloseItemDetail__);
    sub_1B885B0(&Method_MissionListViewManager_CloseServantStatusDetail__);
    sub_1B885B0(&Method_MissionListViewManager_ShowRewardDetailInfo__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass64_0__ShowRewardDetailInfo_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass64_0_TypeInfo);
    byte_4A5E3E7 = 1;
  }
  v7 = Method_MissionListViewManager_ShowRewardDetailInfo__;
  if ( (*((_BYTE *)Method_MissionListViewManager_ShowRewardDetailInfo__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_MissionListViewManager_ShowRewardDetailInfo__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  if ( !selectItem )
    goto LABEL_52;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_52;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v31 = (CommonUI_o *)Instance;
    v32 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v32,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v31 )
      goto LABEL_52;
    CommonUI__OpenItemDetailDialog_30558980(v31, nameTxt, rewardExtraDetailTxt, v32, 0LL);
  }
  else if ( rewardType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
    v13 = selectItem->fields.eventMissionEnt;
    if ( !v13 || !Master_object )
      goto LABEL_52;
    Master_object = (GiftMaster_o *)GiftMaster__GetGiftListById(Master_object, v13->fields.giftId, 0LL);
    v14 = (GiftEntity_array *)Master_object;
    if ( ignoreSubGiftEntity )
    {
      v15 = sub_1B887FC(MissionListViewManager___c__DisplayClass64_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      Master_object = (GiftMaster_o *)MissionInfoMaker__GetSubGiftEntity(v14, v16);
      if ( !v15 )
        goto LABEL_52;
      *(_QWORD *)(v15 + 16) = Master_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)Master_object, v17, v18);
      v19 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v15,
        Method_MissionListViewManager___c__DisplayClass64_0__ShowRewardDetailInfo_b__0__,
        0LL);
      v20 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v14,
              (System_Func_TSource__bool__o *)v19,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      Master_object = (GiftMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                        v20,
                                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
      v14 = (GiftEntity_array *)Master_object;
    }
    if ( !v14 )
      goto LABEL_52;
    max_length = v14->max_length;
    v22 = this->fields.alphaAnimCnt % (int)max_length;
    if ( v22 >= max_length )
      sub_1B88814(Master_object, v10);
    v23 = v14->m_Items[v22];
    if ( !v23 )
      goto LABEL_52;
    type = v23->fields.type;
    if ( type == 2 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( Master_object )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   v23->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v27 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v27,
          (Il2CppObject *)this,
          (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
          0LL);
        if ( v26 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v26, (ItemEntity_o *)Entity, v27, 50, 0LL);
          return;
        }
      }
LABEL_52:
      sub_1B8880C(Master_object, v10);
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_52;
      Master_object = (GiftMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v23->fields.objectId,
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_52;
      v33 = Master_object;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_object, 0LL);
      v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v36 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v36,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v35 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30507920((CommonUI_o *)v35, 7, v23, v36, 0LL);
      }
      else
      {
        v42 = *(_QWORD *)&v33->fields._MasterKind_k__BackingField;
        MasterName_k__BackingField = v33->fields._MasterName_k__BackingField;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v42;
        *(_QWORD *)&v46.fields.fakeValue = MasterName_k__BackingField;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
        v44 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v44,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v35 )
          goto LABEL_52;
        CommonUI__OpenServantStatusDialog_30507356((CommonUI_o *)v35, 7, v43, v44, 0LL);
      }
    }
    else if ( Gift__IsCommandCode(v23->fields.type, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_52;
      v37 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              v23->fields.objectId,
              (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v39,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseCommandCodeDetail__,
        0LL);
      if ( !v38 )
        goto LABEL_52;
      CommonUI__OpenServantEquipStatusDialog_30510512(
        (CommonUI_o *)v38,
        25,
        (CommandCodeEntity_o *)v37,
        0,
        v39,
        0LL,
        0LL);
    }
    else if ( Gift__IsCostumeRelease(v23->fields.type, 0LL) )
    {
      MissionListViewManager__OpenCostumeReleaseDetail(this, v23->fields.objectId, v40);
    }
    else if ( Gift__IsEquip(v23->fields.type, 0LL) )
    {
      MissionListViewManager__OpenEquipDetail(this, v23->fields.objectId, v45);
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
  __int64 v8; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4A5E3EE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass71_0_TypeInfo);
    byte_4A5E3EE = 1;
  }
  v8 = sub_1B887FC(MissionListViewManager___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = gifts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)gifts, v13, v14);
  *(_QWORD *)(v8 + 32) = afterDetail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)afterDetail, v15, v16);
  MissionListViewManager__SetTresureEffect(this, v17);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__0__,
    0LL);
  if ( !v20 )
LABEL_9:
    sub_1B8880C(touchBlockObj, v10);
  CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, v22, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o **v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  System_Action_o *v20; // x3
  const MethodInfo *v21; // x4
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  int32_t v25; // w21
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x8
  const MethodInfo *v29; // x4
  int v30; // w22
  GetSvts_array *getSvtList; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  const MethodInfo *v34; // x3
  int32_t v35; // w23
  UnityEngine_Object_o *scenestack; // x22
  int64_t userSvtId; // x22
  bool isNew; // w23
  bool Eff; // w0
  const MethodInfo *v40; // x2
  EventRewardRootComponent_o *targetRoot; // x21
  System_Action_o *v42; // x22
  __int64 methodPtr_low; // x9
  __int64 v44; // x8
  __int64 v45; // x9
  __int64 v46; // x8
  GetCommandCodes_array *getCommandCodeList; // x22
  void *v48; // x23
  Il2CppClass *v49; // x24
  const MethodInfo *v50; // x3
  int32_t v51; // w23
  const MethodInfo *v52; // x3
  __int64 v53; // x8
  __int64 v54; // x9
  __int64 v55; // x8
  const MethodInfo *v56; // x5
  __int64 v57; // x8
  __int64 v58; // x9
  __int64 v59; // x8
  const MethodInfo *v60; // x5
  GiftEntity_array *v61; // x2
  __int64 v62; // x3
  GiftEntity_o *v63; // x8
  __int64 v64; // x8
  __int64 v65; // x9
  __int64 v66; // x8
  Il2CppObject *v67; // x0
  Il2CppObject *v68; // x21
  const MethodInfo *v69; // x5
  struct System_Collections_Generic_List_QuestRewardInfo__o *dispRewardInfoList; // x8
  System_Action_o *v71; // x21
  const MethodInfo *v72; // x3
  MissionListViewManager___c__DisplayClass72_0_o *v73; // x0
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // [xsp+0h] [xbp-70h]
  Il2CppObject *v76; // [xsp+8h] [xbp-68h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+10h] [xbp-60h] BYREF
  GetCommandCodes_o *v78; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v79; // [xsp+20h] [xbp-50h] BYREF
  GetSvts_o *data; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4A5E3EF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass72_0__StartItemGetEffectAction_b__0__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass72_0__StartItemGetEffectAction_b__1__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass72_0_TypeInfo);
    byte_4A5E3EF = 1;
  }
  entity = 0LL;
  v79 = 0LL;
  data = 0LL;
  resultEntity = 0LL;
  v78 = 0LL;
  v76 = 0LL;
  v9 = sub_1B887FC(MissionListViewManager___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_104;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = afterDetail;
  v14 = (System_Action_o **)(v9 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)afterDetail, v15, v16);
  *(_QWORD *)(v9 + 32) = gifts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)gifts, v17, v18);
  v11 = *(GiftEntity_array **)(v9 + 32);
  *(_DWORD *)(v9 + 40) = idx;
  if ( !v11 )
    goto LABEL_104;
  if ( (signed int)v11->max_length <= idx )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_104;
    if ( AvalonSceneManager__checkNowScene(Instance, 72, 0LL) && this->fields.isEffect )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_104;
      targetRoot = (EventRewardRootComponent_o *)Instance->fields.targetRoot;
      v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v9,
        Method_MissionListViewManager___c__DisplayClass72_0__StartItemGetEffectAction_b__0__,
        0LL);
      if ( !targetRoot )
        goto LABEL_104;
      methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(targetRoot->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardRootComponent_c *)targetRoot->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1B88ACC(targetRoot);
        MissionListViewManager___c__DisplayClass72_0___ctor(v73, v74);
        return;
      }
      EventRewardRootComponent__StartSwitchFigure(targetRoot, v42, 0LL);
    }
    else
    {
      MissionListViewManager__EndItemGetEffectAction(this, *v14, v40);
    }
    this->fields.isEffect = 0;
    return;
  }
  if ( !idx && this->fields.isTreasureEffect )
    MissionListViewManager__StartTreasureItemGetEffectAction(this, v11, v19, v20, v21);
  MissionListViewManager__SetTresureEffect(this, (const MethodInfo *)v11);
  v22 = *(_QWORD *)(v9 + 32);
  if ( !v22 )
    goto LABEL_104;
  v23 = *(int *)(v9 + 40);
  if ( (unsigned int)v23 >= *(_DWORD *)(v22 + 24) )
    goto LABEL_105;
  v24 = *(_QWORD *)(v22 + 8 * v23 + 32);
  if ( !v24 )
    goto LABEL_104;
  v25 = *(_DWORD *)(v24 + 20);
  if ( Gift__IsServant(v25, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
    v26 = *(_QWORD *)(v9 + 32);
    if ( !v26 )
      goto LABEL_104;
    v27 = *(int *)(v9 + 40);
    if ( (unsigned int)v27 < *(_DWORD *)(v26 + 24) )
    {
      v28 = *(_QWORD *)(v26 + 8 * v27 + 32);
      if ( !v28 || !Instance )
        goto LABEL_104;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &entity,
                                           *(_DWORD *)(v28 + 24),
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_104;
        Instance = (AvalonSceneManager_o *)SvtType__IsCombineMaterial(HIDWORD(entity[5].klass), 0LL);
        if ( !entity )
          goto LABEL_104;
        v30 = (int)Instance;
        Instance = (AvalonSceneManager_o *)SvtType__IsStatusUp(HIDWORD(entity[5].klass), 0LL);
        if ( ((v30 | (unsigned int)Instance) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_104;
          getSvtList = this->fields.getSvtList;
          klass = entity[1].klass;
          monitor = entity[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v82.fields.currentCryptoKey = klass;
          *(_QWORD *)&v82.fields.fakeValue = monitor;
          v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v82, 0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v35, v34) )
          {
            Instance = (AvalonSceneManager_o *)entity;
            if ( !entity )
              goto LABEL_104;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_104;
              scenestack = (UnityEngine_Object_o *)Instance[14].fields.scenestack;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(scenestack, 0LL, 0LL) )
              {
                Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                v25,
                *(GiftEntity_array **)(v9 + 32),
                *(_DWORD *)(v9 + 40),
                *(System_Action_o **)(v9 + 24),
                v75);
              return;
            }
LABEL_104:
            sub_1B8880C(Instance, v11);
          }
        }
      }
      goto LABEL_102;
    }
LABEL_105:
    sub_1B88814(Instance, v11);
  }
  if ( Gift__IsCommandCode(v25, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    v44 = *(_QWORD *)(v9 + 32);
    if ( !v44 )
      goto LABEL_104;
    v45 = *(int *)(v9 + 40);
    if ( (unsigned int)v45 < *(_DWORD *)(v44 + 24) )
    {
      v46 = *(_QWORD *)(v44 + 8 * v45 + 32);
      if ( !v46 || !Instance )
        goto LABEL_104;
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &v79,
                                           *(_DWORD *)(v46 + 24),
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v79 )
          goto LABEL_104;
        getCommandCodeList = this->fields.getCommandCodeList;
        v49 = v79[1].klass;
        v48 = v79[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v83.fields.currentCryptoKey = v49;
        *(_QWORD *)&v83.fields.fakeValue = v48;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v83, 0LL);
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v78, v51, v50) )
        {
          this->fields.isEffect = 1;
          Instance = (AvalonSceneManager_o *)v78;
          if ( v78 )
          {
            userSvtId = v78->fields.userCommandCodeId;
            isNew = v78->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v78, 0LL);
            goto LABEL_66;
          }
          goto LABEL_104;
        }
      }
      goto LABEL_102;
    }
    goto LABEL_105;
  }
  Instance = (AvalonSceneManager_o *)Gift__IsCostumeRelease(v25, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v53 = *(_QWORD *)(v9 + 32);
    if ( !v53 )
      goto LABEL_104;
    v54 = *(int *)(v9 + 40);
    if ( (unsigned int)v54 >= *(_DWORD *)(v53 + 24) )
      goto LABEL_105;
    v55 = *(_QWORD *)(v53 + 8 * v54 + 32);
    if ( !v55 )
      goto LABEL_104;
    Instance = (AvalonSceneManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         (MissionListViewManager_o *)Instance,
                                         &resultEntity,
                                         *(_DWORD *)(v55 + 24),
                                         v52);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      this->fields.isEffect = 1;
      if ( !resultEntity )
        goto LABEL_104;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        this,
        resultEntity->fields.name,
        *(GiftEntity_array **)(v9 + 32),
        *(_DWORD *)(v9 + 40),
        *(System_Action_o **)(v9 + 24),
        v56);
      return;
    }
LABEL_102:
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v9 + 32),
      *(_DWORD *)(v9 + 40) + 1,
      *(System_Action_o **)(v9 + 24),
      v29);
    return;
  }
  if ( !Gift__IsEquip(v25, 0LL) )
  {
    if ( Gift__IsItem(v25, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
      v64 = *(_QWORD *)(v9 + 32);
      if ( !v64 )
        goto LABEL_104;
      v65 = *(int *)(v9 + 40);
      if ( (unsigned int)v65 < *(_DWORD *)(v64 + 24) )
      {
        v66 = *(_QWORD *)(v64 + 8 * v65 + 32);
        if ( !v66 || !Instance )
          goto LABEL_104;
        v67 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_DWORD *)(v66 + 24),
                (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v67 )
        {
          v68 = v67;
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_104;
          Instance = (AvalonSceneManager_o *)CommonUI__IsGetItemEffect(
                                               (CommonUI_o *)Instance,
                                               (int32_t)v68[1].klass,
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
                (int32_t)v68[1].klass,
                *(GiftEntity_array **)(v9 + 32),
                *(_DWORD *)(v9 + 40),
                *(System_Action_o **)(v9 + 24),
                v69);
              return;
            }
          }
          else if ( !dispRewardInfoList )
          {
            goto LABEL_104;
          }
          if ( dispRewardInfoList->fields._size >= 1 )
          {
            v71 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v71,
              (Il2CppObject *)v9,
              Method_MissionListViewManager___c__DisplayClass72_0__StartItemGetEffectAction_b__1__,
              0LL);
            MissionListViewManager__LoadItemGetEffects(this, 0, v71, v72);
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
  Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EquipMaster___);
  v57 = *(_QWORD *)(v9 + 32);
  if ( !v57 )
    goto LABEL_104;
  v58 = *(int *)(v9 + 40);
  if ( (unsigned int)v58 >= *(_DWORD *)(v57 + 24) )
    goto LABEL_105;
  v59 = *(_QWORD *)(v57 + 8 * v58 + 32);
  if ( !v59 || !Instance )
    goto LABEL_104;
  Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &v76,
                                       *(_DWORD *)(v59 + 24),
                                       (const MethodInfo_311D988 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_102;
  this->fields.isEffect = 1;
  v61 = *(GiftEntity_array **)(v9 + 32);
  if ( !v61 )
    goto LABEL_104;
  v62 = *(int *)(v9 + 40);
  if ( (unsigned int)v62 >= v61->max_length )
    goto LABEL_105;
  v63 = v61->m_Items[v62];
  if ( !v63 )
    goto LABEL_104;
  MissionListViewManager__StartRewardEquipGetEffect(this, v63->fields.objectId, v61, v62, *v14, v60);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v25; // x19
  System_Action_o *v26; // x22

  if ( (byte_4A5E3F2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass75_0_TypeInfo);
    byte_4A5E3F2 = 1;
  }
  v11 = sub_1B887FC(MissionListViewManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_7;
  *(_QWORD *)(v11 + 16) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)name, v14, v15);
  *(_QWORD *)(v11 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v16, v17);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)gifts, v18, v19);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 48), (int32_t)afterDetail, v20, v21);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v25 = (CommonUI_o *)Instance,
        v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__0__,
          0LL),
        !v25) )
  {
LABEL_7:
    sub_1B8880C(touchBlockObj, v13);
  }
  CommonUI__maskFadeout(v25, FADEOUT_KIND, FADEOUT_TIME, v26, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  QuestRewardInfo_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  _DWORD *v23; // x8
  __int64 v24; // x9
  __int64 v25; // x10
  __int64 v26; // x9
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w21
  float FADEOUT_TIME; // s8
  CommonUI_o *v30; // x19
  System_Action_o *v31; // x22

  if ( (byte_4A5E3F1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&QuestRewardInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass74_0_TypeInfo);
    byte_4A5E3F1 = 1;
  }
  v11 = sub_1B887FC(MissionListViewManager___c__DisplayClass74_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)gifts, v16, v17);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 48), (int32_t)afterDetail, v18, v19);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v20 = (QuestRewardInfo_o *)sub_1B887FC(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v20, 0LL);
  *(_QWORD *)(v11 + 16) = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)v20, v21, v22);
  v23 = *(_DWORD **)(v11 + 16);
  if ( !v23 )
    goto LABEL_11;
  v23[4] = 5;
  v23[5] = equipId;
  v24 = *(_QWORD *)(v11 + 32);
  if ( !v24 )
    goto LABEL_11;
  v25 = *(int *)(v11 + 40);
  if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 24) )
    sub_1B88814(touchBlockObj, v13);
  v26 = *(_QWORD *)(v24 + 8 * v25 + 32);
  if ( !v26
    || (v23[6] = *(_DWORD *)(v26 + 28),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v30 = (CommonUI_o *)Instance,
        v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v31,
          (Il2CppObject *)v11,
          Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__0__,
          0LL),
        !v30) )
  {
LABEL_11:
    sub_1B8880C(touchBlockObj, v13);
  }
  CommonUI__maskFadeout(v30, FADEOUT_KIND, FADEOUT_TIME, v31, 0LL);
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v29; // x19
  System_Action_o *v30; // x21

  if ( (byte_4A5E3F4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass77_0_TypeInfo);
    byte_4A5E3F4 = 1;
  }
  v17 = sub_1B887FC(MissionListViewManager___c__DisplayClass77_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_7;
  *(_DWORD *)(v17 + 16) = giftType;
  *(_QWORD *)(v17 + 24) = userSvtID;
  *(_QWORD *)(v17 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)this, v20, v21);
  *(_BYTE *)(v17 + 40) = isDoEffect;
  *(_BYTE *)(v17 + 41) = isNew;
  *(_QWORD *)(v17 + 48) = gifts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)gifts, v22, v23);
  *(_QWORD *)(v17 + 64) = afterDetail;
  *(_DWORD *)(v17 + 56) = idx;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 64), (int32_t)afterDetail, v24, v25);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        FADEOUT_KIND = this->fields.FADEOUT_KIND,
        FADEOUT_TIME = this->fields.FADEOUT_TIME,
        v29 = (CommonUI_o *)Instance,
        v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v17,
          Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__0__,
          0LL),
        !v29) )
  {
LABEL_7:
    sub_1B8880C(touchBlockObj, v19);
  }
  CommonUI__maskFadeout(v29, FADEOUT_KIND, FADEOUT_TIME, v30, 0LL);
}


void __fastcall MissionListViewManager__StartRewardItemGetEffect(
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
  __int64 *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  QuestRewardInfo_o *v21; // x24
  __int64 *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  _DWORD *v25; // x8
  __int64 v26; // x9
  __int64 v27; // x10
  __int64 v28; // x9
  unsigned int ItemEffectId; // w0
  const MethodInfo *v30; // x4
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v34; // x8
  __int64 v35; // x9
  int v36; // w10
  __int64 v37; // x13
  int v38; // w11
  int v39; // w12
  __int64 v40; // x14
  __int64 v41; // x15
  Il2CppObject *v42; // x19
  AvalonSceneManager_c *v43; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21

  if ( (byte_4A5E3F3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&QuestRewardInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardItemGetEffect_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass76_0_TypeInfo);
    byte_4A5E3F3 = 1;
  }
  v11 = sub_1B887FC(MissionListViewManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_33;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 40) = gifts;
  v16 = (__int64 *)(v11 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)gifts, v17, v18);
  *(_DWORD *)(v11 + 48) = idx;
  *(_QWORD *)(v11 + 56) = afterDetail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 56), (int32_t)afterDetail, v19, v20);
  v21 = (QuestRewardInfo_o *)sub_1B887FC(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v21, 0LL);
  *(_QWORD *)(v11 + 32) = v21;
  v22 = (__int64 *)(v11 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v21, v23, v24);
  v25 = *(_DWORD **)(v11 + 32);
  if ( !v25 )
    goto LABEL_33;
  v25[4] = 2;
  v25[5] = itemId;
  v26 = *(_QWORD *)(v11 + 40);
  if ( !v26 )
    goto LABEL_33;
  v27 = *(int *)(v11 + 48);
  if ( (unsigned int)v27 >= *(_DWORD *)(v26 + 24) )
    goto LABEL_34;
  v28 = *(_QWORD *)(v26 + 8 * v27 + 32);
  if ( !v28 )
    goto LABEL_33;
  v25[6] = *(_DWORD *)(v28 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v11 + 32), 0LL);
  *(_DWORD *)(v11 + 16) = ItemEffectId;
  v13 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_33;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v13,
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  v13 = *(unsigned int *)(v11 + 16);
  v31 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v32 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v31 )
    goto LABEL_33;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v31 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      v13,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v31 + 4 * m_CancellationTokenSource_low + 32) = v13;
  }
  v34 = *v22;
  if ( !*v22 )
    goto LABEL_33;
  *(_DWORD *)(v34 + 24) = 0;
  v35 = *v16;
  if ( !*v16 )
    goto LABEL_33;
  v36 = *(_DWORD *)(v35 + 24);
  if ( v36 >= 1 )
  {
    v37 = *(int *)(v11 + 48);
    v38 = 0;
    v39 = 0;
    v40 = v35 + 8 * v37 + 32;
    while ( v36 != v38 && (unsigned int)v37 < v36 )
    {
      if ( !*(_QWORD *)v40 )
        goto LABEL_33;
      v41 = *(_QWORD *)(v35 + 8LL * v38 + 32);
      if ( !v41 )
        goto LABEL_33;
      if ( *(_DWORD *)(*(_QWORD *)v40 + 24LL) == *(_DWORD *)(v41 + 24) )
      {
        v39 += *(_DWORD *)(v41 + 28);
        *(_DWORD *)(v34 + 24) = v39;
      }
      if ( v36 == ++v38 )
        goto LABEL_28;
    }
LABEL_34:
    sub_1B88814(Instance, v13);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v43 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
  v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass76_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v42 )
LABEL_33:
    sub_1B8880C(Instance, v13);
  CommonUI__maskFadeout((CommonUI_o *)v42, 1, DEFAULT_FADE_TIME, v45, 0LL);
}


void __fastcall MissionListViewManager__StartRewardItemGetEffectAfterTresureEffect(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Item; // x0
  const MethodInfo *v19; // x2
  unsigned int EffectId; // w0
  __int64 v21; // x2
  __int64 v22; // x3
  const MethodInfo *v23; // x4
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  ScrTerminalListTop_c *v27; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  Il2CppObject *Object_object__48635516; // x21
  UnityEngine_GameObject_o *v32; // x21
  Il2CppObject *Component_object; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  QuestRewardItemAction_o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v40; // x21
  int v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E3FA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass83_0__StartRewardItemGetEffectAfterTresureEffect_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass83_0_TypeInfo);
    byte_4A5E3FA = 1;
  }
  v9 = sub_1B887FC(MissionListViewManager___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_25;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = gifts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)gifts, v14, v15);
  *(_QWORD *)(v9 + 56) = afterDetail;
  *(_DWORD *)(v9 + 48) = idx;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)afterDetail, v16, v17);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList )
    goto LABEL_25;
  Item = System_Collections_Generic_List_object___get_Item(
           dispRewardInfoList,
           0,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestRewardInfo__get_Item__);
  EffectId = MissionListViewManager__GetItemGetEffectId(this, (QuestRewardInfo_o *)Item, v19);
  *(_DWORD *)(v9 + 16) = EffectId;
  v11 = EffectId;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.rewardItemGetEffectPlayList;
  if ( !dispRewardInfoList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)dispRewardInfoList,
         v11,
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    goto LABEL_25;
  v11 = *(unsigned int *)(v9 + 16);
  items = dispRewardInfoList->fields._items;
  v25 = Method_System_Collections_Generic_List_int__Add__;
  ++dispRewardInfoList->fields._version;
  if ( !items )
    goto LABEL_25;
  size = dispRewardInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)dispRewardInfoList,
      v11,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    dispRewardInfoList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = v11;
  }
  v27 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v27 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v27->static_fields->ITEM_GET_EFFECT_NAME;
  v41 = *(_DWORD *)(v9 + 16);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v21, v22, v23);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_String__Format(
                                                                      ITEM_GET_EFFECT_NAME,
                                                                      v29,
                                                                      0LL);
  if ( !this->fields.itemGetAssetDatas )
    goto LABEL_25;
  v30 = (System_String_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.itemGetAssetDatas,
                                                                      *(_DWORD *)(v9 + 16),
                                                                      (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__AssetData__get_Item__);
  if ( !dispRewardInfoList )
    goto LABEL_25;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              (AssetData_o *)dispRewardInfoList,
                              v30,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__48635516,
                                                                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !dispRewardInfoList )
    goto LABEL_25;
  v32 = (UnityEngine_GameObject_o *)dispRewardInfoList;
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)dispRewardInfoList,
                                                                      0LL);
  if ( !dispRewardInfoList )
    goto LABEL_25;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)dispRewardInfoList, this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v32, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v32,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v9 + 24) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)Component_object, v34, v35);
  dispRewardInfoList = (System_Collections_Generic_List_object__o *)this->fields.dispRewardInfoList;
  if ( !dispRewardInfoList
    || (v36 = *(QuestRewardItemAction_o **)(v9 + 24),
        dispRewardInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                            dispRewardInfoList,
                                                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__),
        !v36)
    || (QuestRewardItemAction__Setup_34089124(
          v36,
          (QuestRewardInfo_array *)dispRewardInfoList,
          *(_DWORD *)(v9 + 16) == 0,
          0LL),
        MissionListViewManager__SetRewardItemGetEffectTitleSprite(this, v32, v37, v38),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v9,
          Method_MissionListViewManager___c__DisplayClass83_0__StartRewardItemGetEffectAfterTresureEffect_b__0__,
          0LL),
        !Instance) )
  {
LABEL_25:
    sub_1B8880C(dispRewardInfoList, v11);
  }
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 1.0, v40, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *Instance; // x0
  int32_t FADEOUT_KIND; // w20
  float FADEOUT_TIME; // s8
  CommonUI_o *v18; // x19
  System_Action_o *v19; // x22

  if ( (byte_4A5E3F5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass78_0_TypeInfo);
    byte_4A5E3F5 = 1;
  }
  v7 = sub_1B887FC(MissionListViewManager___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = callCnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)callback, v12, v13);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_9;
  if ( *(_DWORD *)(v7 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FADEOUT_KIND = this->fields.FADEOUT_KIND;
    FADEOUT_TIME = this->fields.FADEOUT_TIME;
    v18 = (CommonUI_o *)Instance;
    v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v7,
      Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( v18 )
    {
      CommonUI__maskFadeout(v18, FADEOUT_KIND, FADEOUT_TIME, v19, 0LL);
      return;
    }
LABEL_9:
    sub_1B8880C(v8, v9);
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
  Il2CppObject *Master_object; // x0
  MissionListViewManager___c_c *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  System_Func_object__bool__o *_9__82_0; // x22
  Il2CppObject *v11; // x23
  struct MissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  MissionListViewManager___c_c *v15; // x0
  System_Func_object__bool__o *_9__82_1; // x22
  Il2CppObject *v17; // x23
  struct MissionListViewManager___c_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_object__o *v22; // x23
  struct System_Collections_Generic_List_QuestRewardInfo__o **p_dispRewardInfoList; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  MissionListViewManager_o *ItemEffect; // x0
  __int64 v27; // x1
  signed int max_length; // w8
  __int64 v29; // x23
  GiftEntity_o **m_Items; // x28
  GiftEntity_o *v31; // x8
  const MethodInfo *v32; // x2
  QuestRewardInfo_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  GiftEntity_o *v36; // x8
  int32_t size; // w27
  const char *v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const char *v41; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5E3F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_GiftEntity___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1B885B0(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    sub_1B885B0(&QuestRewardInfo_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__82_0__);
    sub_1B885B0(&Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__82_1__);
    sub_1B885B0(&MissionListViewManager___c_TypeInfo);
    byte_4A5E3F9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  v8 = MissionListViewManager___c_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
    v8 = MissionListViewManager___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__bool__o *)v8->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MissionListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__82_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__82_0,
      v11,
      Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__82_0__,
      0LL);
    static_fields = MissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_GiftEntity__bool__o *)_9__82_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v13, v14);
  }
  if ( BasicHelper__Any_object__48672124(
         (System_Object_array *)gifts,
         (System_Func_T__bool__o *)_9__82_0,
         (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_GiftEntity___) )
  {
    v15 = MissionListViewManager___c_TypeInfo;
    if ( !MissionListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager___c_TypeInfo);
      v15 = MissionListViewManager___c_TypeInfo;
    }
    _9__82_1 = (System_Func_object__bool__o *)v15->static_fields->__9__82_1;
    if ( !_9__82_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = MissionListViewManager___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__82_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__82_1,
        v17,
        Method_MissionListViewManager___c__StartTreasureItemGetEffectAction_b__82_1__,
        0LL);
      v18 = MissionListViewManager___c_TypeInfo->static_fields;
      v18->__9__82_1 = (struct System_Func_GiftEntity__bool__o *)_9__82_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->__9__82_1, (int32_t)_9__82_1, v19, v20);
    }
    v21 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)gifts,
            (System_Func_TSource__bool__o *)_9__82_1,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
    gifts = (GiftEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                  v21,
                                  (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestRewardInfo___ctor__);
  p_dispRewardInfoList = &this->fields.dispRewardInfoList;
  this->fields.dispRewardInfoList = (struct System_Collections_Generic_List_QuestRewardInfo__o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispRewardInfoList, (int32_t)v22, v24, v25);
  if ( !gifts )
    goto LABEL_43;
  max_length = gifts->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0LL;
    m_Items = gifts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v29 >= max_length )
LABEL_44:
        sub_1B88814(ItemEffect, v27);
      v31 = m_Items[v29];
      if ( !v31 || !v9 )
        break;
      ItemEffect = (MissionListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v9,
                                                 &entity,
                                                 v31->fields.objectId,
                                                 (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)ItemEffect & 1) != 0 )
      {
        if ( !entity )
          break;
        ItemEffect = (MissionListViewManager_o *)MissionListViewManager__IsExcludeGetItemEffect(
                                                   ItemEffect,
                                                   (int32_t)entity[1].klass,
                                                   v32);
        if ( ((unsigned __int8)ItemEffect & 1) == 0 )
        {
          v33 = (QuestRewardInfo_o *)sub_1B887FC(QuestRewardInfo_TypeInfo);
          QuestRewardInfo___ctor(v33, 0LL);
          if ( !v33 )
            break;
          v33->fields.type = 2;
          if ( !entity )
            break;
          v33->fields.objectId = (int32_t)entity[1].klass;
          if ( (unsigned int)v29 >= gifts->max_length )
            goto LABEL_44;
          v36 = m_Items[v29];
          if ( !v36 )
            break;
          v33->fields.num = v36->fields.num;
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
            v38 = *(const char **)&ItemEffect->fields.m_CachedPtr;
            v39 = Method_System_Collections_Generic_List_QuestRewardInfo__Add__;
            ++HIDWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( !v38 )
              break;
            m_CancellationTokenSource_low = SLODWORD(ItemEffect->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *((_DWORD *)v38 + 6) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)ItemEffect,
                (Il2CppObject *)v33,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &v38[8 * m_CancellationTokenSource_low];
              LODWORD(ItemEffect->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *((_QWORD *)v41 + 4) = v33;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v33, v34, v35);
            }
          }
        }
      }
      max_length = gifts->max_length;
      if ( (int)++v29 >= max_length )
        return;
    }
LABEL_43:
    sub_1B8880C(ItemEffect, v27);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v13; // x20

  if ( (byte_4A5E3F6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass79_0__SvtEffCaller_b__0__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass79_0_TypeInfo);
    byte_4A5E3F6 = 1;
  }
  v5 = sub_1B887FC(MissionListViewManager___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  svtRewardComp = this->fields.svtRewardComp;
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass79_0__SvtEffCaller_b__0__,
    0LL);
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !svtRewardComp )
LABEL_8:
    sub_1B8880C(v6, v7);
  ServantRewardAction__Play(svtRewardComp, v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
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
  if ( (byte_4A5E3F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5E3F7 = 1;
  }
  Master_object = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !Master_object )
    goto LABEL_8;
  v7 = Master_object;
  v8 = System_String__Substring_61726036(Master_object, 0, Master_object->fields._stringLength - 2, 0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  v10 = System_String__Substring(v7, v7->fields._stringLength - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1B8880C(Master_object, v6);
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
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_rewardIconAlphaCalculator; // x20
  AlphaTransitionCalculator_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
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

  if ( (byte_4A5E3E0 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    sub_1B885B0(&Method_TransitionCalculator_float__Update__);
    byte_4A5E3E0 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v5 = MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardIconAlphaCalculator, (int32_t)v5, v6, v7);
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
          (const MethodInfo_37B9DC0 *)Method_TransitionCalculator_float__Update__);
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
    sub_1B8880C(rewardIconAlphaCalculator, v8);
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

  if ( (byte_4A5E3DE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5E3DE = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5E3DF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5E3DF = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E402 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewManager___c_TypeInfo);
    byte_4A5E402 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(MissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MissionListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)MissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return !Gift__IsItem_37687788(x->fields.type, 0LL);
}


bool __fastcall MissionListViewManager___c___StartTreasureItemGetEffectAction_b__82_1(
        MissionListViewManager___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return Gift__IsItem_37687788(x->fields.type, 0LL);
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
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *_4__this; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  v3 = this;
  if ( (byte_4A5E403 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass71_0_o *)sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__1__);
    byte_4A5E403 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
  MissionListViewManager__LoadTreasureGetEffect(_4__this, _9__1, v2);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___StartEventMissionClearItemAction_b__1(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MissionListViewManager_o *_4__this; // x0
  struct MissionListViewManager_o *v5; // x8
  QuestRewardBoxAction_o *questRewardBoxAction; // x20
  System_Action_o *_9__2; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E404 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__2__);
    byte_4A5E404 = 1;
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
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass71_0__StartEventMissionClearItemAction_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !questRewardBoxAction )
LABEL_9:
    sub_1B8880C(_4__this, method);
  QuestRewardBoxAction__Play(questRewardBoxAction, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass71_0___StartEventMissionClearItemAction_b__2(
        MissionListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass71_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct MissionListViewManager_o *v5; // x8
  AssetData_o *treasureGetAssetData; // x20
  const MethodInfo *v7; // x4

  v2 = this;
  if ( (byte_4A5E405 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass71_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E405 = 1;
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
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_12;
  treasureGetAssetData = v5->fields.treasureGetAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37790656(treasureGetAssetData, 0LL);
  this = (MissionListViewManager___c__DisplayClass71_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1B8880C(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v2->fields.gifts,
    0,
    v2->fields.afterDetail,
    v7);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E406 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__1__);
    byte_4A5E406 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__LoadEquipGetEffect(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E407 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__2__);
    byte_4A5E407 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass74_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__OpenEquipGetEffect(v6, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass74_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4A5E408 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E408 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v5);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E409 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__1__);
    byte_4A5E409 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  System_String_o *name; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E40A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__2__);
    byte_4A5E40A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass75_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v6, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass75_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4A5E40B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E40B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    v5);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  MissionInfoMaker_c *v6; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E40C & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass76_0__StartRewardItemGetEffect_b__1__);
    byte_4A5E40C = 1;
  }
  v6 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v6 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v6->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v2, v3, v4);
  v9 = System_String__Format(ITEM_GET_ASSET_NAME, v8, 0LL);
  _9__1 = this->fields.__9__1;
  v11 = v9;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass76_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v12, v13);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v11, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass76_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass76_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  MissionInfoMaker_c *v15; // x0
  AssetData_o *v16; // x21
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v18; // x0
  Il2CppObject *Object_object__48635516; // x21
  UnityEngine_GameObject_o *v20; // x21
  struct MissionListViewManager_o *_4__this; // x8
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  QuestRewardItemAction_o *v25; // x19
  System_Action_o *v26; // x21
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E40D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass76_1__StartRewardItemGetEffect_b__2__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass76_1_TypeInfo);
    byte_4A5E40D = 1;
  }
  v5 = sub_1B887FC(MissionListViewManager___c__DisplayClass76_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)data, v10, v11);
  v15 = MissionInfoMaker_TypeInfo;
  v16 = *(AssetData_o **)(v5 + 24);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v15 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v15->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v12, v13, v14);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v18, 0LL);
  if ( !v16 )
    goto LABEL_15;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              v16,
                              transform,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__48635516,
                                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_15;
  v20 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v20, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v20,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)Component_object, v23, v24);
  transform = *(System_String_o **)(v5 + 16);
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        v25 = *(QuestRewardItemAction_o **)(v5 + 16),
        v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)v5,
          Method_MissionListViewManager___c__DisplayClass76_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !v25) )
  {
LABEL_15:
    sub_1B8880C(transform, v7);
  }
  QuestRewardItemAction__Play(v25, 0, v26, 0.0, 0LL);
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
  UnityEngine_Component_o *mRewardItemAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  const MethodInfo *v6; // x4
  struct MissionListViewManager___c__DisplayClass76_0_o *CS___8__locals1; // x8

  if ( (byte_4A5E40E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E40E = 1;
  }
  mRewardItemAction = (UnityEngine_Component_o *)this->fields.mRewardItemAction;
  if ( !mRewardItemAction )
    goto LABEL_11;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mRewardItemAction, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37790656(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_11:
    sub_1B8880C(mRewardItemAction, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    v6);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E40F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__1__);
    byte_4A5E40F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass77_0_o *this,
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
  struct MissionListViewManager_o *v11; // x8
  _BOOL4 isDoEffect; // w24
  ServantRewardAction_o *svtRewardComp; // x20
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v16; // w22
  Il2CppObject v17; // q1
  int64_t v18; // x0
  Il2CppClass *v19; // x8
  int64_t v20; // x21
  bool isNew; // w5
  int32_t v22; // w3
  bool v23; // w6
  int32_t v24; // w7
  ServantRewardAction_o *v25; // x0
  int32_t v26; // w1
  int64_t v27; // x2
  const MethodInfo *v28; // x2
  Il2CppObject *v29; // x0
  struct MissionListViewManager_o *v30; // x20
  Il2CppObject *v31; // x21
  struct MissionListViewManager_o *v32; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  struct MissionListViewManager_o *v35; // x8
  ServantRewardAction_o *v36; // x20
  Il2CppObject v37; // q1
  bool v38; // w2
  int64_t v39; // x1
  bool v40; // w3
  int32_t v41; // w4
  ServantRewardAction_o *v42; // x0
  Il2CppObject v43; // q1
  int64_t v44; // x0
  Il2CppClass *v45; // x8
  int64_t v46; // x21
  Il2CppObject v47; // q1
  System_Action_o *_9__2; // x22
  MissionListViewManager_o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+90h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4A5E410 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__2__);
    byte_4A5E410 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 this->fields.userSvtID,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v7 = Entity;
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v8 = this->fields.__4__this;
      if ( v8 )
      {
        if ( Master_object )
        {
          Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                     (SummonAssetManager_o *)Master_object,
                                     v8->fields.instantiatingPOS,
                                     0,
                                     0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.svtRewardComp, Master_object, v9, v10);
            v11 = this->fields.__4__this;
            if ( v11 )
            {
              if ( v7 )
              {
                isDoEffect = this->fields.isDoEffect;
                svtRewardComp = v11->fields.svtRewardComp;
                klass = v7[5].klass;
                monitor = v7[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v57.fields.currentCryptoKey = klass;
                *(_QWORD *)&v57.fields.fakeValue = monitor;
                v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v57, 0LL);
                if ( isDoEffect )
                {
                  v17 = v7[2];
                  *(Il2CppObject *)&v56.fields.currentCryptoKey = v7[1];
                  *(Il2CppObject *)&v56.fields.fakeValue = v17;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v55 = v56;
                  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v55, 0LL);
                  v19 = v7[6].klass;
                  *(_QWORD *)&v58.fields.fakeValue = v7[6].monitor;
                  v20 = v18;
                  *(_QWORD *)&v58.fields.currentCryptoKey = v19;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v58, 0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v22 = Master_object;
                    v23 = 1;
                    v24 = 14;
                    v25 = svtRewardComp;
                    v26 = v16;
                    v27 = v20;
LABEL_37:
                    ServantRewardAction__Setup(v25, v26, v27, v22, 1, isNew, v23, v24, 0LL);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v43 = v7[2];
                  *(Il2CppObject *)&v56.fields.currentCryptoKey = v7[1];
                  *(Il2CppObject *)&v56.fields.fakeValue = v43;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v54 = v56;
                  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v54, 0LL);
                  v45 = v7[6].klass;
                  *(_QWORD *)&v59.fields.fakeValue = v7[6].monitor;
                  v46 = v44;
                  *(_QWORD *)&v59.fields.currentCryptoKey = v45;
                  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v59, 0LL);
                  if ( svtRewardComp )
                  {
                    v22 = Master_object;
                    v24 = 6;
                    v25 = svtRewardComp;
                    v26 = v16;
                    v27 = v46;
                    isNew = 0;
                    v23 = 0;
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
    sub_1B8880C(Master_object, v4);
  }
  Master_object = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_object & 1) == 0 )
    goto LABEL_43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_47;
  v29 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          this->fields.userSvtID,
          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v30 = this->fields.__4__this;
  v31 = v29;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_47;
  if ( !Master_object )
    goto LABEL_47;
  Master_object = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                             (SummonAssetManager_o *)Master_object,
                             v32->fields.instantiatingPOS,
                             0,
                             0LL);
  if ( !v30 )
    goto LABEL_47;
  v30->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->fields.svtRewardComp, Master_object, v33, v34);
  v35 = this->fields.__4__this;
  if ( !v35 || !v31 )
    goto LABEL_47;
  v36 = v35->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v37 = v31[2];
    *(Il2CppObject *)&v56.fields.currentCryptoKey = v31[1];
    *(Il2CppObject *)&v56.fields.fakeValue = v37;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v53 = v56;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v53, 0LL);
    if ( !v36 )
      goto LABEL_47;
    v38 = this->fields.isNew;
    v39 = Master_object;
    v40 = 1;
    v41 = 14;
    v42 = v36;
  }
  else
  {
    v47 = v31[2];
    *(Il2CppObject *)&v56.fields.currentCryptoKey = v31[1];
    *(Il2CppObject *)&v56.fields.fakeValue = v47;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v52 = v56;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v52, 0LL);
    if ( !v36 )
      goto LABEL_47;
    v39 = Master_object;
    v41 = 6;
    v42 = v36;
    v38 = 0;
    v40 = 0;
  }
  ServantRewardAction__SetupCommandCode_34606596(v42, v39, v38, v40, v41, 0LL);
LABEL_43:
  _9__2 = this->fields.__9__2;
  v49 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass77_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v50, v51);
  }
  if ( !v49 )
    goto LABEL_47;
  MissionListViewManager__SvtEffCaller(v49, _9__2, v28);
}


void __fastcall MissionListViewManager___c__DisplayClass77_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8
  const MethodInfo *v6; // x4

  if ( (byte_4A5E411 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4A5E411 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
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


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartSvtListGetEffect_b__0(
        MissionListViewManager___c__DisplayClass78_0_o *this,
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
  struct MissionListViewManager_o *v15; // x8
  struct GetSvts_array *v16; // x8
  __int64 v17; // x9
  struct MissionListViewManager_o *v18; // x8
  char v19; // w23
  ServantRewardAction_o *svtRewardComp; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x24
  int32_t v23; // w22
  Il2CppObject v24; // q1
  int64_t v25; // x0
  Il2CppClass *v26; // x8
  int64_t v27; // x20
  struct MissionListViewManager_o *v28; // x8
  struct GetSvts_array *v29; // x8
  __int64 v30; // x9
  GetSvts_o *v31; // x8
  const MethodInfo *v32; // x2
  Il2CppObject v33; // q1
  int64_t v34; // x0
  Il2CppClass *v35; // x8
  int64_t v36; // x20
  System_Action_o *_9__1; // x22
  MissionListViewManager_o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A5E412 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__1__);
    byte_4A5E412 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_38;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_39;
  v8 = getSvtList->m_Items[callCnt];
  if ( !v8 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__long___GetEntity(
             Master_object,
             v8->fields.userSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v10 = this->fields.__4__this;
  v11 = Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SummonAssetManager__InstantiateSvtGetPrefab(
                                                                  (SummonAssetManager_o *)Master_object,
                                                                  v12->fields.instantiatingPOS,
                                                                  0,
                                                                  0LL);
  if ( !v10 )
    goto LABEL_38;
  v10->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.svtRewardComp, (int32_t)Master_object, v13, v14);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_38;
  v16 = v15->fields.getSvtList;
  if ( !v16 )
    goto LABEL_38;
  v17 = this->fields.callCnt;
  if ( (unsigned int)v17 >= v16->max_length )
LABEL_39:
    sub_1B88814(Master_object, v4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v16->m_Items[v17];
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_object, 0LL);
  v18 = this->fields.__4__this;
  if ( !v18 || !v11 )
    goto LABEL_38;
  v19 = (char)Master_object;
  svtRewardComp = v18->fields.svtRewardComp;
  klass = v11[5].klass;
  monitor = v11[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = klass;
  *(_QWORD *)&v44.fields.fakeValue = monitor;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44, 0LL);
  if ( (v19 & 1) == 0 )
  {
    v33 = v11[2];
    *(Il2CppObject *)&v43.fields.currentCryptoKey = v11[1];
    *(Il2CppObject *)&v43.fields.fakeValue = v33;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v41 = v43;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
    v35 = v11[6].klass;
    *(_QWORD *)&v46.fields.fakeValue = v11[6].monitor;
    v36 = v34;
    *(_QWORD *)&v46.fields.currentCryptoKey = v35;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                    v46,
                                                                    0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v23, v36, (int32_t)Master_object, 1, 0, 0, 2, 0LL);
      goto LABEL_34;
    }
LABEL_38:
    sub_1B8880C(Master_object, v4);
  }
  v24 = v11[2];
  *(Il2CppObject *)&v43.fields.currentCryptoKey = v11[1];
  *(Il2CppObject *)&v43.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v43;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v26 = v11[6].klass;
  *(_QWORD *)&v45.fields.fakeValue = v11[6].monitor;
  v27 = v25;
  *(_QWORD *)&v45.fields.currentCryptoKey = v26;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                  v45,
                                                                  0LL);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_38;
  v29 = v28->fields.getSvtList;
  if ( !v29 )
    goto LABEL_38;
  v30 = this->fields.callCnt;
  if ( (unsigned int)v30 >= v29->max_length )
    goto LABEL_39;
  v31 = v29->m_Items[v30];
  if ( !v31 || !svtRewardComp )
    goto LABEL_38;
  ServantRewardAction__Setup(svtRewardComp, v23, v27, (int32_t)Master_object, 1, v31->fields.isNew, 1, 10, 0LL);
LABEL_34:
  _9__1 = this->fields.__9__1;
  v38 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v39, v40);
  }
  if ( !v38 )
    goto LABEL_38;
  MissionListViewManager__SvtEffCaller(v38, _9__1, v32);
}


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass78_0_o *this,
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

  if ( (byte_4A5E413 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__2__);
    byte_4A5E413 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass78_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass78_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
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
  if ( (byte_4A5E414 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass79_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E414 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass79_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_1B8880C(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  ScrTerminalListTop_c *v6; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t effectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E415 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass83_0__StartRewardItemGetEffectAfterTresureEffect_b__1__);
    byte_4A5E415 = 1;
  }
  v6 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v6 = ScrTerminalListTop_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v6->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId, v2, v3, v4);
  v9 = System_String__Format(ITEM_GET_ASSET_NAME, v8, 0LL);
  _9__1 = this->fields.__9__1;
  v11 = v9;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass83_0__StartRewardItemGetEffectAfterTresureEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v12, v13);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v11, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass83_0___StartRewardItemGetEffectAfterTresureEffect_b__1(
        MissionListViewManager___c__DisplayClass83_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  QuestRewardItemAction_o *mRewardItemAction; // x19
  System_Action_o *v13; // x20

  if ( (byte_4A5E416 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MissionListViewManager___c__DisplayClass83_1__StartRewardItemGetEffectAfterTresureEffect_b__2__);
    sub_1B885B0(&MissionListViewManager___c__DisplayClass83_1_TypeInfo);
    byte_4A5E416 = 1;
  }
  v5 = sub_1B887FC(MissionListViewManager___c__DisplayClass83_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_QWORD *)(v5 + 16) = data,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)data, v10, v11),
        mRewardItemAction = this->fields.mRewardItemAction,
        v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_MissionListViewManager___c__DisplayClass83_1__StartRewardItemGetEffectAfterTresureEffect_b__2__,
          0LL),
        !mRewardItemAction) )
  {
    sub_1B8880C(v6, v7);
  }
  QuestRewardItemAction__Play(mRewardItemAction, 1, v13, 0.0, 0LL);
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
  struct MissionListViewManager___c__DisplayClass83_0_o *CS___8__locals1; // x8
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  const MethodInfo *v6; // x4
  struct MissionListViewManager___c__DisplayClass83_0_o *v7; // x8

  v2 = this;
  if ( (byte_4A5E417 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    this = (MissionListViewManager___c__DisplayClass83_1_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E417 = 1;
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
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  data = v2->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37790656(data, 0LL);
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 || (this = (MissionListViewManager___c__DisplayClass83_1_o *)v7->fields.__4__this) == 0LL )
LABEL_12:
    sub_1B8880C(this, method);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)this,
    v7->fields.gifts,
    v7->fields.idx + 1,
    v7->fields.afterDetail,
    v6);
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
    sub_1B8880C(this, data);
  _4__this->fields.treasureGetAssetData = data;
  sub_1B88554(
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
  if ( (byte_4A5E418 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass87_0_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__);
    byte_4A5E418 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (MissionListViewManager___c__DisplayClass87_0_o *)_4__this->fields.itemGetAssetDatas) == 0LL
    || (System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (Il2CppObject *)data,
          (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__AssetData__set_Item__),
        (this = (MissionListViewManager___c__DisplayClass87_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(this, data);
  }
  MissionListViewManager__LoadItemGetEffects(
    (MissionListViewManager_o *)this,
    v4->fields.idx + 1,
    v4->fields.endAct,
    v6);
}