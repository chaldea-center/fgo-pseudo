void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MissionListViewManager_c *v2; // x8

  if ( (byte_42145C8 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewManager_TypeInfo, v1);
    byte_42145C8 = 1;
  }
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM = 7;
  v2 = MissionListViewManager_TypeInfo;
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  v2->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42145C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_42145C7 = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v5 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rewardItemGetEffectPlayList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_42145BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_42145BD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
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
  CommonUI_o *Instance; // x0

  if ( (byte_42145BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_MissionListViewManager_CloseItemDetail__, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_42145BB = 1;
  }
  v4 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B0D8AC(Method_MissionListViewManager_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_42145BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_42145BC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
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

  if ( (byte_42145B2 & 1) == 0 )
  {
    sub_B0D8A4(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B0D8A4(&MissionListViewManager_TypeInfo, v2);
    byte_42145B2 = 1;
  }
  v3 = MissionListViewManager_TypeInfo;
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v3 = MissionListViewManager_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v8 = (AlphaTransitionCalculator_o *)sub_B0D974(AlphaTransitionCalculator_TypeInfo, v6, v7);
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
  __int64 v10; // x19
  System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x0
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
  __int64 v24; // x1
  __int64 v25; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_42145BF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, afterDetail);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__, v8);
    sub_B0D8A4(&MissionListViewManager___c__DisplayClass54_0_TypeInfo, v9);
    byte_42145BF = 1;
  }
  v10 = sub_B0D974(MissionListViewManager___c__DisplayClass54_0_TypeInfo, afterDetail, method);
  MissionListViewManager___c__DisplayClass54_0___ctor((MissionListViewManager___c__DisplayClass54_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 24) = afterDetail;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)afterDetail,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_10;
  System_Collections_Generic_List_int___Clear(
    rewardItemGetEffectPlayList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v10,
    Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B0D97C(rewardItemGetEffectPlayList);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v29, 0LL);
}


int32_t __fastcall MissionListViewManager__GetAlphaAnimCnt(
        MissionListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


System_Collections_Generic_List_TObject__o *__fastcall MissionListViewManager__GetObjectList_object_(
        MissionListViewManager_o *this,
        const MethodInfo_2049060 *method)
{
  __int64 v2; // x2
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppClass *_0_System_Collections_Generic_List_TObject; // x19
  System_Collections_Generic_List_TObject__o *v11; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x0
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  const MethodInfo **v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF
  __int64 v22; // [xsp+48h] [xbp-28h]

  if ( (byte_4219F0E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4219F0E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  HIDWORD(v22) = 0;
  _0_System_Collections_Generic_List_TObject = method->rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE2(_0_System_Collections_Generic_List_TObject->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_System_Collections_Generic_List_TObject_);
  v11 = (System_Collections_Generic_List_TObject__o *)sub_B0D974(_0_System_Collections_Generic_List_TObject, method, v2);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v21.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v14 )
    {
      if ( !current )
        sub_B0D97C(v14);
      v15 = ((__int64 (__fastcall *)(Il2CppObject *, MethodInfo *))method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_->methodPointer)(
              current,
              method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      if ( !v11 )
        sub_B0D97C(v15);
      ((void (__fastcall *)(System_Collections_Generic_List_TObject__o *, __int64, MethodInfo *))method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add->methodPointer)(
        v11,
        v15,
        method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add);
    }
  }
  v22 = 0x10000004CLL;
  v20.fields.list = (struct System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Enumerator_GameObject__TypeInfo;
  if ( *(_WORD *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
        goto LABEL_19;
    }
    v18 = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->vtable._0_Equals.method + 2 * *p_offset;
  }
  else
  {
LABEL_19:
    v18 = (const MethodInfo **)sub_AA67A0(&v20, System_IDisposable_TypeInfo, 0LL);
  }
  ((void (__fastcall *)(int32_t *, const MethodInfo *))*v18)(&v20.fields.index, v18[1]);
  if ( (_DWORD)v22 == 76 )
    v22 = 76LL;
  return v11;
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42145B6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42145B6 = 1;
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
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B0D97C(gameObject);
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
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-18h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_42145B9 & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v6);
    this = (MissionListViewManager_o *)sub_B0D8A4(&Method_MissionListViewManager_CloseItemDetail__, v7);
    byte_42145B9 = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v10 = resultEntity;
    v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v8, v9);
    ItemDetailInfoComponent_CallbackFunc___ctor(v11, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  EquipEntity_o *v13; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42145BA & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v7);
    sub_B0D8A4(&Method_MissionListViewManager_CloseItemDetail__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42145BA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v13 = (EquipEntity_o *)entity;
    v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v11, v12);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    MissionInfoMaker__OpenEquipDetail(v13, v14, v15);
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
  System_Collections_Generic_List_TObject__o *v9; // x20
  signed __int64 size; // x8
  unsigned __int64 v11; // x24
  int v12; // w23
  MissionListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_42145B5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__, v4);
    sub_B0D8A4(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v5);
    sub_B0D8A4(&Method_MissionListViewManager_OnMoveEnd__, v6);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v7);
    byte_42145B5 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_2049060 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_15:
    sub_B0D97C(ObjectList_object);
  v9 = ObjectList_object;
  this->fields.callbackCount = ObjectList_object->fields._size;
  LODWORD(size) = ObjectList_object->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = (MissionListViewObject_o *)v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      MissionListViewObject__Init(v13, 4, v16, this->fields.listInDelay, 1, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v9->fields._size;
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList_object; // x0
  int32_t size; // w8
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *current; // x21
  System_Action_o *v20; // x22
  __int64 v21; // x0
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42145B4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v12);
    sub_B0D8A4(&Method_MissionListViewManager_OnMoveEnd__, v13);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v14);
    byte_42145B4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList_object = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewManager__GetObjectList_object_(this, (const MethodInfo_2049060 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_B0D97C(0LL);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList_object,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v21);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v20, delay, 1, v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_24483900(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_24483508(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetMode_24483508(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *gameObject; // x0
  int32_t v9; // w1

  if ( (byte_42145B3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&StringLiteral_11456/*"RequestInto"*/, v5);
    byte_42145B3 = 1;
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
        sub_B0D97C(gameObject);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11456/*"RequestInto"*/,
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


void __fastcall MissionListViewManager__SetMode_24483840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_24483508(this, mode, v11);
}


void __fastcall MissionListViewManager__SetObjectItem(
        MissionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  MissionListViewManager_o *v6; // x20
  __int64 v7; // x10
  int32_t v8; // w1

  v6 = this;
  if ( (byte_42145B7 & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_B0D8A4(&MissionListViewObject_TypeInfo, obj);
    byte_42145B7 = 1;
  }
  if ( !obj
    || (v7 = *(&MissionListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != MissionListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  if ( v6->fields.initMode == 3 )
    v8 = 3;
  else
    v8 = 2;
  MissionListViewObject__Init((MissionListViewObject_o *)obj, v8, 0LL, 0.0, 1, v4);
}


void __fastcall MissionListViewManager__ShowRewardDetailInfo(
        MissionListViewManager_o *this,
        MissionListViewItem_o *selectItem,
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
  __int64 v19; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v23; // x8
  const MethodInfo *v24; // x1
  unsigned int MasterName_k__BackingField; // w9
  int v26; // w8
  GiftEntity_o *v27; // x20
  ItemEntity_o *Entity; // x20
  WebViewManager_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  CommonUI_o *v32; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v33; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v40; // x23
  struct GiftEntity_array *giftEnts; // x8
  const MethodInfo *v42; // x1
  int32_t type; // w0
  GiftMaster_o *v44; // x22
  bool IsServantEquip; // w23
  __int64 v46; // x1
  __int64 v47; // x2
  WebViewManager_o *v48; // x21
  ServantStatusDialog_EndDelegate_o *v49; // x22
  CommonUI_o *v50; // x0
  GiftEntity_o *v51; // x2
  ServantStatusDialog_EndDelegate_o *v52; // x3
  int32_t v53; // w0
  const MethodInfo *v54; // x1
  bool v55; // w23
  __int64 v56; // x1
  __int64 v57; // x2
  CommonUI_o *v58; // x22
  ServantStatusDialog_EndDelegate_o *v59; // x21
  CommandCodeEntity_o *cmdEnt; // x20
  WebViewManager_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  int32_t v64; // w0
  const MethodInfo *v65; // x1
  CommonUI_o *v66; // x21
  ServantStatusDialog_EndDelegate_o *v67; // x22
  struct System_String_o *v68; // x20
  __int64 v69; // x23
  int32_t v70; // w20
  __int64 v71; // x1
  __int64 v72; // x2
  ServantStatusDialog_EndDelegate_o *v73; // x22
  CommonUI_o *v74; // x0
  int32_t v75; // w2
  ServantStatusDialog_EndDelegate_o *v76; // x3
  struct ServantEntity_o *svtEnt; // x8
  __int64 v78; // x20
  __int64 v79; // x21
  int32_t v80; // w20
  __int64 v81; // x1
  __int64 v82; // x2
  ServantStatusDialog_EndDelegate_o *v83; // x21
  const MethodInfo *v84; // x1
  const MethodInfo *v85; // x2
  int32_t objectId; // w1
  int32_t v87; // w0
  struct GiftEntity_array *v88; // x8
  GiftEntity_o *v89; // x8
  int32_t v90; // w0
  const MethodInfo *v91; // x2
  __int64 v92; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_42145B8 & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, selectItem);
    sub_B0D8A4(&Method_DataManager_GetMaster_CommandCodeMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_B0D8A4(&Method_MissionListViewManager_CloseCommandCodeDetail__, v14);
    sub_B0D8A4(&Method_MissionListViewManager_CloseItemDetail__, v15);
    sub_B0D8A4(&Method_MissionListViewManager_CloseServantStatusDetail__, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B0D8A4(&SoundManager_TypeInfo, v19);
    byte_42145B8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    goto LABEL_81;
  eventMissionEnt = selectItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_81;
  rewardType = eventMissionEnt->fields.rewardType;
  if ( rewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v37 = (CommonUI_o *)Instance;
    v40 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v38, v39);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v40,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v37 )
      goto LABEL_81;
    CommonUI__OpenItemDetailDialog_17082384(v37, nameTxt, rewardExtraDetailTxt, v40, 0LL);
    return;
  }
  if ( rewardType != 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
  v23 = selectItem->fields.eventMissionEnt;
  if ( !v23 )
    goto LABEL_81;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_81;
  Master_WarQuestSelectionMaster = (GiftMaster_o *)GiftMaster__GetGiftListById(
                                                     Master_WarQuestSelectionMaster,
                                                     v23->fields.giftId,
                                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterName_k__BackingField = (unsigned int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v26 = this->fields.alphaAnimCnt % (int)MasterName_k__BackingField;
  if ( v26 >= MasterName_k__BackingField )
    goto LABEL_82;
  v27 = (GiftEntity_o *)*((_QWORD *)&Master_WarQuestSelectionMaster->fields.list + v26);
  if ( !v27 )
    goto LABEL_81;
  if ( v27->fields._IsReplacedData_k__BackingField )
    goto LABEL_19;
  giftEnts = selectItem->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_81;
  if ( giftEnts->max_length != 1 )
  {
    type = v27->fields.type;
    if ( type == 2 )
    {
LABEL_19:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 v27->fields.objectId,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_24;
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                         v27->fields.objectId,
                                                         (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      v44 = Master_WarQuestSelectionMaster;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
      v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v49 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v46, v47);
        ServantStatusDialog_EndDelegate___ctor(
          v49,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v48 )
          goto LABEL_81;
        v50 = (CommonUI_o *)v48;
        v51 = v27;
        v52 = v49;
LABEL_47:
        CommonUI__OpenServantStatusDialog_16991516(v50, 7, v51, v52, 0LL);
        return;
      }
      v69 = *(_QWORD *)&v44->fields._MasterKind_k__BackingField;
      v68 = v44->fields._MasterName_k__BackingField;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v93.fields.currentCryptoKey = v69;
      *(_QWORD *)&v93.fields.fakeValue = v68;
      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v93, 0LL);
      v73 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v71, v72);
      ServantStatusDialog_EndDelegate___ctor(
        v73,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v48 )
        goto LABEL_81;
      v74 = (CommonUI_o *)v48;
      v75 = v70;
      v76 = v73;
      goto LABEL_69;
    }
    if ( Gift__IsCommandCode(v27->fields.type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      cmdEnt = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                        v27->fields.objectId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_56;
    }
    if ( Gift__IsCostumeRelease(v27->fields.type, 0LL) )
    {
      objectId = v27->fields.objectId;
LABEL_77:
      MissionListViewManager__OpenCostumeReleaseDetail(this, objectId, v85);
      return;
    }
    goto LABEL_78;
  }
  if ( MissionListViewItem__get_Type(selectItem, v24) == 2 )
  {
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Entity = selectItem->fields.itemEnt;
LABEL_24:
    v32 = (CommonUI_o *)v29;
    v33 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v30, v31);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v33,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( v32 )
    {
      CommonUI__OpenItemDetailDialog(v32, Entity, v33, 50, 0LL);
      return;
    }
LABEL_81:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v53 = MissionListViewItem__get_Type(selectItem, v42);
  if ( Gift__IsServant(v53, 0LL) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)selectItem->fields.svtEnt;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_81;
    v55 = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v58 = (CommonUI_o *)Master_WarQuestSelectionMaster;
    if ( v55 )
    {
      v59 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v56, v57);
      ServantStatusDialog_EndDelegate___ctor(
        v59,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v58 )
        goto LABEL_81;
      v50 = v58;
      v51 = v27;
      v52 = v59;
      goto LABEL_47;
    }
    svtEnt = selectItem->fields.svtEnt;
    if ( !svtEnt )
      goto LABEL_81;
    v79 = *(_QWORD *)&svtEnt->fields.id.fields.currentCryptoKey;
    v78 = *(_QWORD *)&svtEnt->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v94.fields.currentCryptoKey = v79;
    *(_QWORD *)&v94.fields.fakeValue = v78;
    v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v94, 0LL);
    v83 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v81, v82);
    ServantStatusDialog_EndDelegate___ctor(
      v83,
      (Il2CppObject *)this,
      Method_MissionListViewManager_CloseServantStatusDetail__,
      0LL);
    if ( !v58 )
      goto LABEL_81;
    v74 = v58;
    v75 = v80;
    v76 = v83;
LABEL_69:
    CommonUI__OpenServantStatusDialog_17030764(v74, 7, v75, v76, 0LL);
    return;
  }
  v64 = MissionListViewItem__get_Type(selectItem, v54);
  if ( !Gift__IsCommandCode(v64, 0LL) )
  {
    v87 = MissionListViewItem__get_Type(selectItem, v65);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)Gift__IsCostumeRelease(v87, 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v88 = selectItem->fields.giftEnts;
      if ( !v88 )
        goto LABEL_81;
      if ( v88->max_length )
      {
        v89 = v88->m_Items[0];
        if ( !v89 )
          goto LABEL_81;
        objectId = v89->fields.objectId;
        goto LABEL_77;
      }
LABEL_82:
      v92 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v92, 0LL);
    }
LABEL_78:
    v90 = MissionListViewItem__get_Type(selectItem, v84);
    if ( Gift__IsEquip(v90, 0LL) )
      MissionListViewManager__OpenEquipDetail(this, v27->fields.objectId, v91);
    return;
  }
  v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  cmdEnt = selectItem->fields.cmdEnt;
LABEL_56:
  v66 = (CommonUI_o *)v61;
  v67 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v62, v63);
  ServantStatusDialog_EndDelegate___ctor(
    v67,
    (Il2CppObject *)this,
    Method_MissionListViewManager_CloseCommandCodeDetail__,
    0LL);
  if ( !v66 )
    goto LABEL_81;
  CommonUI__OpenServantEquipStatusDialog_17033196(v66, 25, cmdEnt, 0, v67, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartItemGetEffectAction(
        MissionListViewManager_o *this,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  MissionListViewManager_o *v8; // x22
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
  int32_t max_length; // w8
  Il2CppClass **v22; // x24
  Il2CppClass *v23; // x8
  char *v24; // x24
  Il2CppClass *v25; // t1
  int32_t name_high; // w23
  const MethodInfo *v27; // x4
  int v28; // w24
  GetSvts_array *getSvtList; // x24
  struct System_String_o *age; // x25
  __int64 v31; // x26
  const MethodInfo *v32; // x3
  int32_t v33; // w25
  UnityEngine_Object_o *getCommandCodeList; // x24
  int64_t userSvtId; // x24
  bool isNew; // w25
  bool Eff; // w0
  GetCommandCodes_array *v38; // x24
  struct System_String_o *v39; // x25
  __int64 v40; // x26
  const MethodInfo *v41; // x3
  int32_t v42; // w25
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x5
  const MethodInfo *v45; // x5
  WarEntity_o *v46; // x0
  WarEntity_o *v47; // x23
  const MethodInfo *v48; // x5
  __int64 v49; // x0
  const MethodInfo *v50; // [xsp+0h] [xbp-80h]
  WarEntity_o *v51; // [xsp+10h] [xbp-70h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+18h] [xbp-68h] BYREF
  GetCommandCodes_o *v53; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v54; // [xsp+28h] [xbp-58h] BYREF
  GetSvts_o *data; // [xsp+30h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  v8 = this;
  if ( (byte_42145BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_CommandCodeMaster___, gifts);
    sub_B0D8A4(&Method_DataManager_GetMaster_EquipMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v14);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v15);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    this = (MissionListViewManager_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    byte_42145BE = 1;
  }
  data = 0LL;
  entity = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v51 = 0LL;
  resultEntity = 0LL;
  if ( !gifts )
    goto LABEL_87;
  max_length = gifts->max_length;
  if ( max_length <= idx )
  {
    MissionListViewManager__EndItemGetEffectAction(v8, afterDetail, *(const MethodInfo **)&idx);
    return;
  }
  if ( max_length <= (unsigned int)idx )
    goto LABEL_88;
  v22 = &gifts->obj.klass + idx;
  v25 = v22[4];
  v24 = (char *)(v22 + 4);
  v23 = v25;
  if ( !v25 )
    goto LABEL_87;
  name_high = HIDWORD(v23->_1.name);
  if ( Gift__IsServant(name_high, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v24 || !this )
        goto LABEL_87;
      this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                                           (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_87;
        this = (MissionListViewManager_o *)SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
        if ( !entity )
          goto LABEL_87;
        v28 = (int)this;
        this = (MissionListViewManager_o *)SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL);
        if ( ((v28 | (unsigned int)this) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_87;
          getSvtList = v8->fields.getSvtList;
          v31 = *(_QWORD *)&entity->fields.id;
          age = entity->fields.age;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v57.fields.currentCryptoKey = v31;
          *(_QWORD *)&v57.fields.fakeValue = age;
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v57, 0LL);
          if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          }
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v33, v32) )
          {
            this = (MissionListViewManager_o *)entity;
            if ( !entity )
              goto LABEL_87;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_87;
              getCommandCodeList = (UnityEngine_Object_o *)this[2].fields.getCommandCodeList;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(getCommandCodeList, 0LL, 0LL) )
              {
                this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !this )
                  goto LABEL_87;
                this = (MissionListViewManager_o *)this[2].fields.getCommandCodeList;
                if ( !this )
                  goto LABEL_87;
                MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)this, 0LL);
              }
            }
            this = (MissionListViewManager_o *)data;
            if ( data )
            {
              userSvtId = data->fields.userSvtId;
              isNew = data->fields.isNew;
              Eff = GetSvts__isDoGetEff(data, 0LL);
LABEL_57:
              MissionListViewManager__StartRewardGetEffect(
                v8,
                userSvtId,
                isNew,
                Eff,
                name_high,
                gifts,
                idx,
                afterDetail,
                v50);
              return;
            }
LABEL_87:
            sub_B0D97C(this);
          }
        }
      }
      goto LABEL_86;
    }
LABEL_88:
    v49 = sub_B0D9A8(this);
    sub_B0D948(v49, 0LL);
  }
  if ( Gift__IsCommandCode(name_high, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v24 || !this )
        goto LABEL_87;
      this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &v54,
                                           *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                                           (const MethodInfo_2669C30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v54 )
          goto LABEL_87;
        v38 = v8->fields.getCommandCodeList;
        v40 = *(_QWORD *)&v54->fields.id;
        v39 = v54->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v40;
        *(_QWORD *)&v58.fields.fakeValue = v39;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v58, 0LL);
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetCommandCodeData(v38, &v53, v42, v41) )
        {
          this = (MissionListViewManager_o *)v53;
          if ( v53 )
          {
            userSvtId = v53->fields.userCommandCodeId;
            isNew = v53->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v53, 0LL);
            goto LABEL_57;
          }
          goto LABEL_87;
        }
      }
      goto LABEL_86;
    }
    goto LABEL_88;
  }
  this = (MissionListViewManager_o *)Gift__IsCostumeRelease(name_high, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( gifts->max_length <= idx )
      goto LABEL_88;
    if ( !*(_QWORD *)v24 )
      goto LABEL_87;
    this = (MissionListViewManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         this,
                                         &resultEntity,
                                         *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                                         v43);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !resultEntity )
        goto LABEL_87;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        v8,
        resultEntity->fields.name,
        gifts,
        idx,
        afterDetail,
        v44);
      return;
    }
LABEL_86:
    MissionListViewManager__StartItemGetEffectAction(v8, gifts, idx + 1, afterDetail, v27);
    return;
  }
  if ( !Gift__IsEquip(name_high, 0LL) )
  {
    if ( Gift__IsItem(name_high, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( gifts->max_length > idx )
      {
        if ( !*(_QWORD *)v24 || !this )
          goto LABEL_87;
        v46 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v46 )
        {
          v47 = v46;
          this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_87;
          if ( CommonUI__IsGetItemEffect((CommonUI_o *)this, v47->fields.id, 0LL) )
          {
            MissionListViewManager__StartRewardItemGetEffect(v8, v47->fields.id, gifts, idx, afterDetail, v48);
            return;
          }
        }
        goto LABEL_86;
      }
      goto LABEL_88;
    }
    goto LABEL_86;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EquipMaster___);
  if ( gifts->max_length <= idx )
    goto LABEL_88;
  if ( !*(_QWORD *)v24 || !this )
    goto LABEL_87;
  this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                       &v51,
                                       *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_86;
  if ( gifts->max_length <= idx )
    goto LABEL_88;
  if ( !*(_QWORD *)v24 )
    goto LABEL_87;
  MissionListViewManager__StartRewardEquipGetEffect(
    v8,
    *(_DWORD *)(*(_QWORD *)v24 + 24LL),
    gifts,
    idx,
    afterDetail,
    v45);
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
  __int64 v14; // x1
  __int64 v15; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v44; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v46; // x21

  if ( (byte_42145C1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, name);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__, v13);
    sub_B0D8A4(&MissionListViewManager___c__DisplayClass56_0_TypeInfo, v14);
    byte_42145C1 = 1;
  }
  v15 = sub_B0D974(MissionListViewManager___c__DisplayClass56_0_TypeInfo, name, gifts);
  MissionListViewManager___c__DisplayClass56_0___ctor((MissionListViewManager___c__DisplayClass56_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  *(_QWORD *)(v15 + 16) = name;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)name, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v15 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v15 + 32) = gifts;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)gifts, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v15 + 48) = afterDetail;
  *(_DWORD *)(v15 + 40) = idx;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v15 + 48),
    (System_Int32_array **)afterDetail,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v44 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v44 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v44->static_fields->DEFAULT_FADE_TIME;
  v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v15,
    Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B0D97C(touchBlockObj);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v46, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  QuestRewardInfo_o *v38; // x22
  __int64 v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x8
  __int64 v47; // x9
  __int64 v48; // x8
  __int64 v49; // x9
  __int64 v50; // x1
  __int64 v51; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v53; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v55; // x21
  __int64 v56; // x0

  if ( (byte_42145C0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v11);
    sub_B0D8A4(&QuestRewardInfo_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__, v14);
    sub_B0D8A4(&MissionListViewManager___c__DisplayClass55_0_TypeInfo, v15);
    byte_42145C0 = 1;
  }
  v16 = sub_B0D974(MissionListViewManager___c__DisplayClass55_0_TypeInfo, *(_QWORD *)&equipId, gifts);
  MissionListViewManager___c__DisplayClass55_0___ctor((MissionListViewManager___c__DisplayClass55_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v16 + 32) = gifts;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)gifts, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v16 + 48) = afterDetail;
  *(_DWORD *)(v16 + 40) = idx;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v16 + 48),
    (System_Int32_array **)afterDetail,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v38 = (QuestRewardInfo_o *)sub_B0D974(QuestRewardInfo_TypeInfo, v36, v37);
  QuestRewardInfo___ctor(v38, 0LL);
  *(_QWORD *)(v16 + 16) = v38;
  v39 = v16 + 16;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)v38, v40, v41, v42, v43, v44, v45);
  if ( !*(_QWORD *)(v16 + 16) )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)(v16 + 16) + 16LL) = 5;
  if ( !*(_QWORD *)v39 )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)v39 + 20LL) = equipId;
  v46 = *(_QWORD *)(v16 + 32);
  if ( !v46 )
    goto LABEL_16;
  v47 = *(int *)(v16 + 40);
  if ( (unsigned int)v47 >= *(_DWORD *)(v46 + 24) )
  {
    v56 = sub_B0D9A8(touchBlockObj);
    sub_B0D948(v56, 0LL);
  }
  v48 = *(_QWORD *)(v46 + 8 * v47 + 32);
  if ( !v48 )
    goto LABEL_16;
  v49 = *(_QWORD *)(v16 + 16);
  if ( !v49 )
    goto LABEL_16;
  *(_DWORD *)(v49 + 24) = *(_DWORD *)(v48 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v53 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v53 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v53->static_fields->DEFAULT_FADE_TIME;
  v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v50, v51);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v16,
    Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_16:
    sub_B0D97C(touchBlockObj);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v55, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v44; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v46; // x21

  if ( (byte_42145C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, userSvtID);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__, v19);
    sub_B0D8A4(&MissionListViewManager___c__DisplayClass58_0_TypeInfo, v20);
    byte_42145C3 = 1;
  }
  v21 = sub_B0D974(MissionListViewManager___c__DisplayClass58_0_TypeInfo, userSvtID, isNew);
  MissionListViewManager___c__DisplayClass58_0___ctor((MissionListViewManager___c__DisplayClass58_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_10;
  *(_DWORD *)(v21 + 16) = giftType;
  *(_QWORD *)(v21 + 24) = userSvtID;
  *(_QWORD *)(v21 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_BYTE *)(v21 + 40) = isDoEffect;
  *(_BYTE *)(v21 + 41) = isNew;
  *(_QWORD *)(v21 + 48) = gifts;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 48), (System_Int32_array **)gifts, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v21 + 64) = afterDetail;
  *(_DWORD *)(v21 + 56) = idx;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v21 + 64),
    (System_Int32_array **)afterDetail,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v44 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v44 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v44->static_fields->DEFAULT_FADE_TIME;
  v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v21,
    Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B0D97C(touchBlockObj);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v46, 0LL);
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
  __int64 v18; // x19
  CommonUI_o *Instance; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  QuestRewardInfo_o *v42; // x24
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x9
  __int64 v52; // x8
  __int64 v53; // x9
  int32_t ItemEffectId; // w0
  int32_t v55; // w1
  const MethodInfo *v56; // x4
  __int64 v57; // x8
  __int64 v58; // x8
  int v59; // w10
  unsigned int v60; // w9
  __int64 v61; // x10
  __int64 v62; // x11
  __int64 v63; // x11
  __int64 v64; // x10
  __int64 v65; // x1
  __int64 v66; // x2
  CommonUI_o *v67; // x20
  AvalonSceneManager_c *v68; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v70; // x21
  __int64 v71; // x0

  if ( (byte_42145C2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&itemId);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_B0D8A4(&QuestRewardInfo_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__, v16);
    sub_B0D8A4(&MissionListViewManager___c__DisplayClass57_0_TypeInfo, v17);
    byte_42145C2 = 1;
  }
  v18 = sub_B0D974(MissionListViewManager___c__DisplayClass57_0_TypeInfo, *(_QWORD *)&itemId, gifts);
  MissionListViewManager___c__DisplayClass57_0___ctor((MissionListViewManager___c__DisplayClass57_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_34;
  *(_QWORD *)(v18 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v18 + 40) = gifts;
  v26 = (__int64 *)(v18 + 40);
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)gifts, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v18 + 56) = afterDetail;
  v33 = v18 + 32;
  *(_DWORD *)(v18 + 48) = idx;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v18 + 56),
    (System_Int32_array **)afterDetail,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v42 = (QuestRewardInfo_o *)sub_B0D974(QuestRewardInfo_TypeInfo, v40, v41);
  QuestRewardInfo___ctor(v42, 0LL);
  *(_QWORD *)(v18 + 32) = v42;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
  v49 = *(_QWORD *)(v18 + 32);
  if ( !v49 )
    goto LABEL_34;
  *(_DWORD *)(v49 + 16) = 2;
  if ( !*(_QWORD *)v33 )
    goto LABEL_34;
  *(_DWORD *)(*(_QWORD *)v33 + 20LL) = itemId;
  v50 = *(_QWORD *)(v18 + 40);
  if ( !v50 )
    goto LABEL_34;
  v51 = *(int *)(v18 + 48);
  if ( (unsigned int)v51 >= *(_DWORD *)(v50 + 24) )
    goto LABEL_35;
  v52 = *(_QWORD *)(v50 + 8 * v51 + 32);
  if ( !v52 )
    goto LABEL_34;
  v53 = *(_QWORD *)(v18 + 32);
  if ( !v53 )
    goto LABEL_34;
  *(_DWORD *)(v53 + 24) = *(_DWORD *)(v52 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v18 + 32), 0LL);
  *(_DWORD *)(v18 + 16) = ItemEffectId;
  v55 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_34;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v55,
         (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v18 + 40),
      *(_DWORD *)(v18 + 48) + 1,
      *(System_Action_o **)(v18 + 56),
      v56);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_34;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)Instance,
    *(_DWORD *)(v18 + 16),
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  v57 = *(_QWORD *)(v18 + 32);
  if ( !v57 )
    goto LABEL_34;
  *(_DWORD *)(v57 + 24) = 0;
  v58 = *v26;
  if ( !*v26 )
    goto LABEL_34;
  v59 = *(_DWORD *)(v58 + 24);
  if ( v59 >= 1 )
  {
    v60 = 0;
    while ( v60 < v59 )
    {
      v61 = *(_QWORD *)(v18 + 40);
      if ( !v61 )
        goto LABEL_34;
      v62 = *(int *)(v18 + 48);
      if ( (unsigned int)v62 >= *(_DWORD *)(v61 + 24) )
        break;
      v63 = *(_QWORD *)(v61 + 8 * v62 + 32);
      if ( !v63 )
        goto LABEL_34;
      v64 = *(_QWORD *)(v58 + 8LL * (int)v60 + 32);
      if ( !v64 )
        goto LABEL_34;
      if ( *(_DWORD *)(v63 + 24) == *(_DWORD *)(v64 + 24) )
      {
        if ( !*(_QWORD *)v33 )
          goto LABEL_34;
        *(_DWORD *)(*(_QWORD *)v33 + 24LL) += *(_DWORD *)(v64 + 28);
      }
      v59 = *(_DWORD *)(v58 + 24);
      if ( (int)++v60 >= v59 )
        goto LABEL_28;
    }
LABEL_35:
    v71 = sub_B0D9A8(Instance);
    sub_B0D948(v71, 0LL);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v67 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v68 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v68 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v68->static_fields->DEFAULT_FADE_TIME;
  v70 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v65, v66);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v18,
    Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v67 )
LABEL_34:
    sub_B0D97C(Instance);
  CommonUI__maskFadeout(v67, 1, DEFAULT_FADE_TIME, v70, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct GetSvts_array *getSvtList; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_42145C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&callCnt);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__, v9);
    sub_B0D8A4(&MissionListViewManager___c__DisplayClass59_0_TypeInfo, v10);
    byte_42145C4 = 1;
  }
  v11 = sub_B0D974(MissionListViewManager___c__DisplayClass59_0_TypeInfo, *(_QWORD *)&callCnt, callback);
  MissionListViewManager___c__DisplayClass59_0___ctor((MissionListViewManager___c__DisplayClass59_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 32) = callback;
  *(_DWORD *)(v11 + 24) = callCnt;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_12;
  if ( *(_DWORD *)(v11 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v29 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
    v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(v12);
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 32), 0LL);
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
  ServantRewardAction_o *svtRewardComp; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x20

  if ( (byte_42145C5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__, v6);
    sub_B0D8A4(&MissionListViewManager___c__DisplayClass60_0_TypeInfo, v7);
    byte_42145C5 = 1;
  }
  v8 = sub_B0D974(MissionListViewManager___c__DisplayClass60_0_TypeInfo, callback, method);
  MissionListViewManager___c__DisplayClass60_0___ctor((MissionListViewManager___c__DisplayClass60_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  svtRewardComp = this->fields.svtRewardComp;
  v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v8,
    Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__,
    0LL);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtRewardComp )
LABEL_9:
    sub_B0D97C(v9);
  ServantRewardAction__Play(svtRewardComp, v25, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *Master_WarQuestSelectionMaster; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  int32_t v9; // w20
  System_String_o *v10; // x0
  int32_t v11; // w21
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = objectId;
  if ( (byte_42145C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCostumeMaster___, resultEntity);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    byte_42145C6 = 1;
  }
  Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_9;
  v7 = Master_WarQuestSelectionMaster;
  v8 = System_String__Substring_43913640(
         Master_WarQuestSelectionMaster,
         0,
         Master_WarQuestSelectionMaster->fields.m_stringLength - 2,
         0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  v10 = System_String__Substring(v7, v7->fields.m_stringLength - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  __int64 v3; // x1
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_rewardIconAlphaCalculator; // x20
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
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

  if ( (byte_42145B1 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewManager_TypeInfo, method);
    sub_B0D8A4(&Method_TransitionCalculator_float__Update__, v3);
    byte_42145B1 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v6 = (System_Int32_array **)MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = (struct AlphaTransitionCalculator_o *)v6;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator, v6, v7, v8, v9, v10, v11, v12);
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
          (const MethodInfo_2686910 *)Method_TransitionCalculator_float__Update__);
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
    sub_B0D97C(rewardIconAlphaCalculator);
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

  if ( (byte_42145AF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_42145AF = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_42145B0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_42145B0 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B0DC70(v7);
  MissionListViewManager__get_ReceiveMissionReward(v10, v11);
}


void __fastcall MissionListViewManager___c__DisplayClass54_0___ctor(
        MissionListViewManager___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass54_0___EndItemGetEffectAction_b__0(
        MissionListViewManager___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  struct MissionListViewManager_o *_4__this; // x8
  MissionListViewManager___c__DisplayClass54_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MissionListViewManager___c__DisplayClass54_0_o *)_4__this->fields.touchBlockObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (MissionListViewManager___c__DisplayClass54_0_o *)v3->fields.afterDetail) == 0LL) )
  {
    sub_B0D97C(this);
  }
  System_Action__Invoke((System_Action_o *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___ctor(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__0(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  CommonUI_o *v9; // x20

  if ( (byte_421272C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__, v4);
    byte_421272C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__LoadEquipGetEffect(v9, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__2; // x22
  CommonUI_o *v9; // x21
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_421272D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__, v4);
    byte_421272D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__OpenEquipGetEffect(v9, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421272E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421272E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___ctor(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__0(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  CommonUI_o *v9; // x20

  if ( (byte_421272F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_421272F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__LoadCostumeReleaseEffect(v9, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__2; // x22
  CommonUI_o *v9; // x21
  System_String_o *name; // x20

  if ( (byte_4212730 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_4212730 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__OpenCostumeReleaseEffect(v9, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212731 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212731 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass57_0___ctor(
        MissionListViewManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass57_0___StartRewardItemGetEffect_b__0(
        MissionListViewManager___c__DisplayClass57_0_o *this,
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
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4212732 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v5);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__, v6);
    byte_4212732 = 1;
  }
  v7 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
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
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass57_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass57_0_o *this,
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
  Il2CppObject *v13; // x20
  System_String_o *transform; // x0
  AssetData_o *monitor; // x21
  MissionInfoMaker_c *v16; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v18; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v20; // x21
  struct MissionListViewManager_o *_4__this; // x8
  UIWidget_o *Component_UIWidget; // x0
  QuestRewardItemAction_o *klass; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x21
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4212733 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v5);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&MissionInfoMaker_TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__, v11);
    sub_B0D8A4(&MissionListViewManager___c__DisplayClass57_1_TypeInfo, v12);
    byte_4212733 = 1;
  }
  v13 = (Il2CppObject *)sub_B0D974(MissionListViewManager___c__DisplayClass57_1_TypeInfo, data, method);
  System_Object___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  v13[2].klass = (Il2CppClass *)this;
  sub_B0D840(&v13[2], this);
  v13[1].monitor = data;
  sub_B0D840(&v13[1].monitor, data);
  monitor = (AssetData_o *)v13[1].monitor;
  v16 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v16 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v16->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v18, 0LL);
  if ( !monitor )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               monitor,
                                                                               transform,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   Object_WarBoardWaitTimeSetting,
                                   (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_17;
  v20 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v20, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         v20,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  v13[1].klass = (Il2CppClass *)Component_UIWidget;
  sub_B0D840(&v13[1], Component_UIWidget);
  transform = (System_String_o *)v13[1].klass;
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        klass = (QuestRewardItemAction_o *)v13[1].klass,
        v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25),
        System_Action___ctor(
          v26,
          v13,
          Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !klass) )
  {
LABEL_17:
    sub_B0D97C(transform);
  }
  QuestRewardItemAction__Play(klass, 0, v26, 0.0, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass57_1___ctor(
        MissionListViewManager___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass57_1___StartRewardItemGetEffect_b__2(
        MissionListViewManager___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *mRewardItemAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass57_0_o *CS___8__locals1; // x8

  if ( (byte_4212734 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4212734 = 1;
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
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_29516400(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_13:
    sub_B0D97C(mRewardItemAction);
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)mRewardItemAction,
    CS___8__locals1->fields.gifts,
    CS___8__locals1->fields.idx + 1,
    CS___8__locals1->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___ctor(
        MissionListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__0(
        MissionListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v9; // x20

  if ( (byte_4212735 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__, v4);
    byte_4212735 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v9 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  SummonAssetManager__LoadSummonAssets(v9, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass58_0_o *this,
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
  int64_t Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  UserServantEntity_o *v15; // x21
  struct MissionListViewManager_o *v16; // x8
  struct MissionListViewManager_o *v17; // x8
  ServantRewardAction_o *svtRewardComp; // x20
  __int64 v19; // x22
  __int64 v20; // x23
  int32_t v21; // w0
  __int128 v22; // q1
  int32_t v23; // w22
  int64_t v24; // x0
  __int64 v25; // x8
  int64_t v26; // x21
  bool isNew; // w5
  int32_t v28; // w3
  bool v29; // w6
  int32_t v30; // w7
  ServantRewardAction_o *v31; // x0
  int32_t v32; // w1
  int64_t v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  UserServantEntity_o *v36; // x0
  struct MissionListViewManager_o *v37; // x20
  UserServantEntity_o *v38; // x21
  struct MissionListViewManager_o *v39; // x8
  struct MissionListViewManager_o *v40; // x8
  ServantRewardAction_o *v41; // x20
  __int128 v42; // q1
  bool v43; // w2
  int64_t v44; // x1
  bool v45; // w3
  int32_t v46; // w4
  ServantRewardAction_o *v47; // x0
  int32_t v48; // w0
  __int128 v49; // q1
  int32_t v50; // w22
  int64_t v51; // x0
  __int64 v52; // x8
  int64_t v53; // x21
  __int128 v54; // q1
  System_Action_o *_9__2; // x21
  MissionListViewManager_o *v56; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+90h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4212736 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__, v11);
    byte_4212736 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                 this->fields.userSvtID,
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v15 = Entity;
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v16 = this->fields.__4__this;
      if ( v16 )
      {
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                                      (SummonAssetManager_o *)Master_WarQuestSelectionMaster,
                                                      v16->fields.instantiatingPOS,
                                                      0,
                                                      0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
            sub_B0D840(&_4__this->fields.svtRewardComp, Master_WarQuestSelectionMaster);
            v17 = this->fields.__4__this;
            if ( v17 )
            {
              if ( v15 )
              {
                svtRewardComp = v17->fields.svtRewardComp;
                v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
                v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
                if ( this->fields.isDoEffect )
                {
                  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v62.fields.currentCryptoKey = v20;
                  *(_QWORD *)&v62.fields.fakeValue = v19;
                  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v62, 0LL);
                  v22 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
                  v23 = v21;
                  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v61.fields.fakeValue = v22;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v60 = v61;
                  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v60, 0LL);
                  v25 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
                  v26 = v24;
                  *(_QWORD *)&v63.fields.currentCryptoKey = v25;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                     v63,
                                                     0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v28 = Master_WarQuestSelectionMaster;
                    v29 = 1;
                    v30 = 14;
                    v31 = svtRewardComp;
                    v32 = v23;
                    v33 = v26;
LABEL_46:
                    ServantRewardAction__Setup(v31, v32, v33, v28, 1, isNew, v29, v30, 0LL);
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
                  *(_QWORD *)&v64.fields.currentCryptoKey = v20;
                  *(_QWORD *)&v64.fields.fakeValue = v19;
                  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v64, 0LL);
                  v49 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
                  v50 = v48;
                  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v61.fields.fakeValue = v49;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v59 = v61;
                  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v59, 0LL);
                  v52 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
                  v53 = v51;
                  *(_QWORD *)&v65.fields.currentCryptoKey = v52;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                     v65,
                                                     0LL);
                  if ( svtRewardComp )
                  {
                    v28 = Master_WarQuestSelectionMaster;
                    v30 = 6;
                    v31 = svtRewardComp;
                    v32 = v50;
                    v33 = v53;
                    isNew = 0;
                    v29 = 0;
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  Master_WarQuestSelectionMaster = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v36 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
          this->fields.userSvtID,
          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v37 = this->fields.__4__this;
  v38 = v36;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_57;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                              (SummonAssetManager_o *)Master_WarQuestSelectionMaster,
                                              v39->fields.instantiatingPOS,
                                              0,
                                              0LL);
  if ( !v37 )
    goto LABEL_57;
  v37->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B0D840(&v37->fields.svtRewardComp, Master_WarQuestSelectionMaster);
  v40 = this->fields.__4__this;
  if ( !v40 || !v38 )
    goto LABEL_57;
  v41 = v40->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v42 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
    *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v61.fields.fakeValue = v42;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v58 = v61;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
    if ( !v41 )
      goto LABEL_57;
    v43 = this->fields.isNew;
    v44 = Master_WarQuestSelectionMaster;
    v45 = 1;
    v46 = 14;
    v47 = v41;
  }
  else
  {
    v54 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
    *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v61.fields.fakeValue = v54;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v57 = v61;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v57, 0LL);
    if ( !v41 )
      goto LABEL_57;
    v44 = Master_WarQuestSelectionMaster;
    v46 = 6;
    v47 = v41;
    v43 = 0;
    v45 = 0;
  }
  ServantRewardAction__SetupCommandCode_28240452(v47, v44, v43, v45, v46, 0LL);
LABEL_53:
  _9__2 = this->fields.__9__2;
  v56 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v34, v35);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !v56 )
    goto LABEL_57;
  MissionListViewManager__SvtEffCaller(v56, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  struct MissionListViewManager_o *_4__this; // x8

  if ( (byte_4212737 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, method);
    byte_4212737 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  MissionListViewManager__StartItemGetEffectAction(
    (MissionListViewManager_o *)Instance,
    this->fields.gifts,
    this->fields.idx + 1,
    this->fields.afterDetail,
    0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___ctor(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__0(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v14; // x8
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *v16; // x21
  UserServantEntity_o *v17; // x20
  struct MissionListViewManager_o *v18; // x8
  struct MissionListViewManager_o *v19; // x8
  struct GetSvts_array *v20; // x8
  __int64 v21; // x9
  struct MissionListViewManager_o *v22; // x9
  ServantRewardAction_o *svtRewardComp; // x21
  __int64 v24; // x22
  __int64 v25; // x23
  int32_t v26; // w0
  __int128 v27; // q1
  int32_t v28; // w22
  int64_t v29; // x0
  __int64 v30; // x8
  int64_t v31; // x20
  struct MissionListViewManager_o *v32; // x8
  struct GetSvts_array *v33; // x8
  __int64 v34; // x9
  GetSvts_o *v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t v38; // w0
  __int128 v39; // q1
  int32_t v40; // w22
  int64_t v41; // x0
  __int64 v42; // x8
  int64_t v43; // x20
  System_Action_o *_9__1; // x21
  MissionListViewManager_o *v45; // x20
  __int64 v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+50h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4212738 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__, v9);
    byte_4212738 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_45;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_46;
  v14 = getSvtList->m_Items[callCnt];
  if ( !v14 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             Master_WarQuestSelectionMaster,
             v14->fields.userSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v16 = this->fields.__4__this;
  v17 = Entity;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SummonAssetManager__InstantiateSvtGetPrefab((SummonAssetManager_o *)Master_WarQuestSelectionMaster, v18->fields.instantiatingPOS, 0, 0LL);
  if ( !v16 )
    goto LABEL_45;
  v16->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B0D840(&v16->fields.svtRewardComp, Master_WarQuestSelectionMaster);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_45;
  v20 = v19->fields.getSvtList;
  if ( !v20 )
    goto LABEL_45;
  v21 = this->fields.callCnt;
  if ( (unsigned int)v21 >= v20->max_length )
  {
LABEL_46:
    v46 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v46, 0LL);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v20->m_Items[v21];
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_WarQuestSelectionMaster, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 || !v17 )
    goto LABEL_45;
  svtRewardComp = v22->fields.svtRewardComp;
  v25 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v52.fields.currentCryptoKey = v25;
    *(_QWORD *)&v52.fields.fakeValue = v24;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v52, 0LL);
    v39 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
    v40 = v38;
    *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v49.fields.fakeValue = v39;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v47 = v49;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v47, 0LL);
    v42 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v53.fields.fakeValue = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
    v43 = v41;
    *(_QWORD *)&v53.fields.currentCryptoKey = v42;
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v53, 0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v40, v43, (int32_t)Master_WarQuestSelectionMaster, 1, 0, 0, 2, 0LL);
      goto LABEL_41;
    }
LABEL_45:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v25;
  *(_QWORD *)&v50.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v50, 0LL);
  v27 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
  v28 = v26;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v48 = v49;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v48, 0LL);
  v30 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v51.fields.fakeValue = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
  v31 = v29;
  *(_QWORD *)&v51.fields.currentCryptoKey = v30;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v51, 0LL);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_45;
  v33 = v32->fields.getSvtList;
  if ( !v33 )
    goto LABEL_45;
  v34 = this->fields.callCnt;
  if ( (unsigned int)v34 >= v33->max_length )
    goto LABEL_46;
  v35 = v33->m_Items[v34];
  if ( !v35 || !svtRewardComp )
    goto LABEL_45;
  ServantRewardAction__Setup(
    svtRewardComp,
    v28,
    v31,
    (int32_t)Master_WarQuestSelectionMaster,
    1,
    v35->fields.isNew,
    1,
    10,
    0LL);
LABEL_41:
  _9__1 = this->fields.__9__1;
  v45 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v45 )
    goto LABEL_45;
  MissionListViewManager__SvtEffCaller(v45, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *v9; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21

  if ( (byte_4212739 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__, v5);
    byte_4212739 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  MissionListViewManager__StartSvtListGetEffect(_4__this, this->fields.callCnt + 1, this->fields.callback, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass60_0___ctor(
        MissionListViewManager___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass60_0___SvtEffCaller_b__0(
        MissionListViewManager___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager___c__DisplayClass60_0_o *v2; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_421273A & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass60_0_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421273A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass60_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_B0D97C(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}