void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MissionListViewManager_c *v2; // x8

  if ( (byte_40F7D20 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewManager_TypeInfo, v1);
    byte_40F7D20 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F7D1F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_40F7D1F = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rewardItemGetEffectPlayList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7D15 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F7D15 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F7D13 & 1) == 0 )
  {
    sub_B16FFC(&Method_MissionListViewManager_CloseItemDetail__, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F7D13 = 1;
  }
  v4 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B17004(Method_MissionListViewManager_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7D14 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F7D14 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v8; // x3
  __int64 v9; // x4
  AlphaTransitionCalculator_o *v10; // x20

  if ( (byte_40F7D0A & 1) == 0 )
  {
    sub_B16FFC(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B16FFC(&MissionListViewManager_TypeInfo, v2);
    byte_40F7D0A = 1;
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
  v10 = (AlphaTransitionCalculator_o *)sub_B170CC(AlphaTransitionCalculator_TypeInfo, v6, v7, v8, v9);
  AlphaTransitionCalculator___ctor(v10, v4, v5, 0LL);
  return v10;
}


void __fastcall MissionListViewManager__EndItemGetEffectAction(
        MissionListViewManager_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
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
  System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v31; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x21

  if ( (byte_40F7D17 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, afterDetail);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__, v10);
    sub_B16FFC(&MissionListViewManager___c__DisplayClass54_0_TypeInfo, v11);
    byte_40F7D17 = 1;
  }
  v12 = sub_B170CC(MissionListViewManager___c__DisplayClass54_0_TypeInfo, afterDetail, method, v3, v4);
  MissionListViewManager___c__DisplayClass54_0___ctor((MissionListViewManager___c__DisplayClass54_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = afterDetail;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)afterDetail,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_10;
  System_Collections_Generic_List_int___Clear(
    rewardItemGetEffectPlayList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v31 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
  v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v12,
    Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v33, 0LL);
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
        const MethodInfo_19DCC28 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppClass *_0_System_Collections_Generic_List_TObject; // x19
  System_Collections_Generic_List_TObject__o *v13; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  __int64 v16; // x1
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  const MethodInfo **v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-50h] BYREF
  __int64 v23; // [xsp+48h] [xbp-28h]

  if ( (byte_40FB057 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FB057 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  HIDWORD(v23) = 0;
  _0_System_Collections_Generic_List_TObject = method->rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE2(_0_System_Collections_Generic_List_TObject->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_System_Collections_Generic_List_TObject_);
  v13 = (System_Collections_Generic_List_TObject__o *)sub_B170CC(
                                                        _0_System_Collections_Generic_List_TObject,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      v16 = ((__int64 (__fastcall *)(Il2CppObject *, MethodInfo *))method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_->methodPointer)(
              current,
              method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      if ( !v13 )
        sub_B170D4();
      ((void (__fastcall *)(System_Collections_Generic_List_TObject__o *, __int64, MethodInfo *))method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add->methodPointer)(
        v13,
        v16,
        method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add);
    }
  }
  v23 = 0x10000004CLL;
  v21.fields.list = (struct System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Enumerator_GameObject__TypeInfo;
  if ( *(_WORD *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
        goto LABEL_19;
    }
    v19 = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->vtable._0_Equals.method + 2 * *p_offset;
  }
  else
  {
LABEL_19:
    v19 = (const MethodInfo **)sub_AAFEF8(&v21, System_IDisposable_TypeInfo, 0LL);
  }
  ((void (__fastcall *)(int32_t *, const MethodInfo *))*v19)(&v21.fields.index, v19[1]);
  if ( (_DWORD)v23 == 76 )
    v23 = 76LL;
  return v13;
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
  struct UIScrollView_o *v13; // x0
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40F7D0E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7D0E = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13 )
          goto LABEL_22;
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
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
      v15 = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( v15 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_20:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B170D4();
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
  __int64 v10; // x3
  __int64 v11; // x4
  ServantCostumeEntity_o *v12; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x21
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-18h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_40F7D11 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v6);
    this = (MissionListViewManager_o *)sub_B16FFC(&Method_MissionListViewManager_CloseItemDetail__, v7);
    byte_40F7D11 = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v12 = resultEntity;
    v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v8,
                                                      v9,
                                                      v10,
                                                      v11);
    ItemDetailInfoComponent_CallbackFunc___ctor(v13, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    MissionInfoMaker__OpenCostumeReleaseDetail(v12, v13, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  EquipEntity_o *v16; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7D12 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v7);
    sub_B16FFC(&Method_MissionListViewManager_CloseItemDetail__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F7D12 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         objectId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v16 = (EquipEntity_o *)entity;
    v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v12,
                                                      v13,
                                                      v14,
                                                      v15);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    MissionInfoMaker__OpenEquipDetail(v16, v17, 0LL);
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x4

  if ( (byte_40F7D0D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__, v4);
    sub_B16FFC(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v5);
    sub_B16FFC(&Method_MissionListViewManager_OnMoveEnd__, v6);
    sub_B16FFC(&StringLiteral_10004, v7);
    byte_40F7D0D = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_19DCC28 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_15:
    sub_B170D4();
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = (MissionListViewObject_o *)v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      MissionListViewObject__Init(v13, 4, v18, this->fields.listInDelay, 1, v19);
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
      (System_String_o *)StringLiteral_10004,
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
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *current; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F7D0C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v12);
    sub_B16FFC(&Method_MissionListViewManager_OnMoveEnd__, v13);
    sub_B16FFC(&StringLiteral_10004, v14);
    byte_40F7D0C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  ObjectList_object = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewManager__GetObjectList_object_(this, (const MethodInfo_19DCC28 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_B170D4();
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      ObjectList_object,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v24.fields.current;
      v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v22, delay, 1, v23);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_21011420(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_21011028(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetMode_21011028(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v10; // w1

  if ( (byte_40F7D0B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&StringLiteral_11393, v5);
    byte_40F7D0B = 1;
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
      v8 = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !v8 || (gameObject = UnityEngine_Component__get_gameObject(v8, 0LL)) == 0LL )
        sub_B170D4();
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11393,
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


void __fastcall MissionListViewManager__SetMode_21011360(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_21011028(this, mode, v11);
}


void __fastcall MissionListViewManager__SetObjectItem(
        MissionListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v7; // x10
  int32_t v8; // w1

  if ( (byte_40F7D0F & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewObject_TypeInfo, obj);
    byte_40F7D0F = 1;
  }
  if ( !obj
    || (v7 = *(&MissionListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != MissionListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 3 )
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
  int32_t EventRewardType; // w0
  GiftMaster_o *Master_WarQuestSelectionMaster; // x21
  EventMissionEntity_o *EventMissionEntity; // x0
  GiftEntity_array *GiftListById; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  il2cpp_array_size_t max_length; // w9
  int v27; // w8
  GiftEntity_o *v28; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x0
  ItemEntity_o *Entity; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  CommonUI_o *v35; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v36; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *nameTxt; // x21
  System_String_o *rewardExtraDetailTxt; // x20
  CommonUI_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v45; // x23
  struct GiftEntity_array *giftEnts; // x8
  int32_t type; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x0
  ServantEntity_o *v49; // x0
  ServantEntity_o *v50; // x22
  bool IsServantEquip; // w23
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  WebViewManager_o *v56; // x20
  ServantStatusDialog_EndDelegate_o *v57; // x22
  CommonUI_o *v58; // x0
  GiftEntity_o *v59; // x2
  ServantStatusDialog_EndDelegate_o *v60; // x3
  int32_t v61; // w0
  ServantEntity_o *SvtEntity; // x0
  bool v63; // w23
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  WebViewManager_o *v68; // x22
  ServantStatusDialog_EndDelegate_o *v69; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x0
  CommandCodeEntity_o *CmdEntity; // x20
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  CommonUI_o *v76; // x21
  int32_t v77; // w0
  ServantStatusDialog_EndDelegate_o *v78; // x22
  __int64 v79; // x21
  __int64 v80; // x23
  int32_t v81; // w21
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  ServantStatusDialog_EndDelegate_o *v86; // x22
  CommonUI_o *v87; // x0
  int32_t v88; // w2
  ServantStatusDialog_EndDelegate_o *v89; // x3
  ServantEntity_o *v90; // x0
  __int64 v91; // x20
  __int64 v92; // x21
  int32_t v93; // w20
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  ServantStatusDialog_EndDelegate_o *v98; // x21
  int32_t objectId; // w1
  int32_t v100; // w0
  struct GiftEntity_array *v101; // x8
  GiftEntity_o *v102; // x8
  int32_t v103; // w0
  const MethodInfo *v104; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_40F7D10 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, selectItem);
    sub_B16FFC(&Method_DataManager_GetMaster_CommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_B16FFC(&Method_MissionListViewManager_CloseCommandCodeDetail__, v14);
    sub_B16FFC(&Method_MissionListViewManager_CloseItemDetail__, v15);
    sub_B16FFC(&Method_MissionListViewManager_CloseServantStatusDetail__, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B16FFC(&SoundManager_TypeInfo, v19);
    byte_40F7D10 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !selectItem )
    goto LABEL_80;
  EventRewardType = MissionListViewItem__get_EventRewardType(selectItem, 0LL);
  if ( EventRewardType == 3 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v40 = (CommonUI_o *)Instance;
    v45 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v41,
                                                      v42,
                                                      v43,
                                                      v44);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v45,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v40 )
      goto LABEL_80;
    CommonUI__OpenItemDetailDialog_18297320(v40, nameTxt, rewardExtraDetailTxt, v45, 0LL);
    return;
  }
  if ( EventRewardType != 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  EventMissionEntity = MissionListViewItem__get_EventMissionEntity(selectItem, 0LL);
  if ( !EventMissionEntity )
    goto LABEL_80;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_80;
  GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, EventMissionEntity->fields.giftId, 0LL);
  if ( !GiftListById )
    goto LABEL_80;
  max_length = GiftListById->max_length;
  v27 = this->fields.alphaAnimCnt % (int)max_length;
  if ( v27 >= max_length )
    goto LABEL_81;
  v28 = GiftListById->m_Items[v27];
  if ( !v28 )
    goto LABEL_80;
  if ( v28->fields._IsReplacedData_k__BackingField )
    goto LABEL_18;
  giftEnts = selectItem->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_80;
  if ( giftEnts->max_length != 1 )
  {
    type = v28->fields.type;
    if ( type == 2 )
    {
LABEL_18:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v29 )
        goto LABEL_80;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v29,
                                 v28->fields.objectId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v35 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_23;
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !v48 )
        goto LABEL_80;
      v49 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v48,
                                 v28->fields.objectId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !v49 )
        goto LABEL_80;
      v50 = v49;
      IsServantEquip = ServantEntity__get_IsServantEquip(v49, 0LL);
      v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v57 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v52,
                                                     v53,
                                                     v54,
                                                     v55);
        ServantStatusDialog_EndDelegate___ctor(
          v57,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v56 )
          goto LABEL_80;
        v58 = (CommonUI_o *)v56;
        v59 = v28;
        v60 = v57;
LABEL_46:
        CommonUI__OpenServantStatusDialog_18212288(v58, 7, v59, v60, 0LL);
        return;
      }
      v80 = *(_QWORD *)&v50->fields.id.fields.currentCryptoKey;
      v79 = *(_QWORD *)&v50->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v105.fields.currentCryptoKey = v80;
      *(_QWORD *)&v105.fields.fakeValue = v79;
      v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v105, 0LL);
      v86 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                   ServantStatusDialog_EndDelegate_TypeInfo,
                                                   v82,
                                                   v83,
                                                   v84,
                                                   v85);
      ServantStatusDialog_EndDelegate___ctor(
        v86,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v56 )
        goto LABEL_80;
      v87 = (CommonUI_o *)v56;
      v88 = v81;
      v89 = v86;
      goto LABEL_68;
    }
    if ( Gift__IsCommandCode(v28->fields.type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !v70 )
        goto LABEL_80;
      CmdEntity = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v70,
                                           v28->fields.objectId,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v76 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_55;
    }
    if ( Gift__IsCostumeRelease(v28->fields.type, 0LL) )
    {
      objectId = v28->fields.objectId;
LABEL_76:
      MissionListViewManager__OpenCostumeReleaseDetail(this, objectId, v25);
      return;
    }
    goto LABEL_77;
  }
  if ( MissionListViewItem__get_Type(selectItem, 0LL) == 2 )
  {
    v35 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Entity = MissionListViewItem__get_ItemEntity(selectItem, 0LL);
LABEL_23:
    v36 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v31,
                                                      v32,
                                                      v33,
                                                      v34);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v36,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( v35 )
    {
      CommonUI__OpenItemDetailDialog(v35, Entity, v36, 50, 0LL);
      return;
    }
LABEL_80:
    sub_B170D4();
  }
  v61 = MissionListViewItem__get_Type(selectItem, 0LL);
  if ( Gift__IsServant(v61, 0LL) )
  {
    SvtEntity = MissionListViewItem__get_SvtEntity(selectItem, 0LL);
    if ( !SvtEntity )
      goto LABEL_80;
    v63 = ServantEntity__get_IsServantEquip(SvtEntity, 0LL);
    v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v63 )
    {
      v69 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                   ServantStatusDialog_EndDelegate_TypeInfo,
                                                   v64,
                                                   v65,
                                                   v66,
                                                   v67);
      ServantStatusDialog_EndDelegate___ctor(
        v69,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v68 )
        goto LABEL_80;
      v58 = (CommonUI_o *)v68;
      v59 = v28;
      v60 = v69;
      goto LABEL_46;
    }
    v90 = MissionListViewItem__get_SvtEntity(selectItem, 0LL);
    if ( !v90 )
      goto LABEL_80;
    v92 = *(_QWORD *)&v90->fields.id.fields.currentCryptoKey;
    v91 = *(_QWORD *)&v90->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v106.fields.currentCryptoKey = v92;
    *(_QWORD *)&v106.fields.fakeValue = v91;
    v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v106, 0LL);
    v98 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v94, v95, v96, v97);
    ServantStatusDialog_EndDelegate___ctor(
      v98,
      (Il2CppObject *)this,
      Method_MissionListViewManager_CloseServantStatusDetail__,
      0LL);
    if ( !v68 )
      goto LABEL_80;
    v87 = (CommonUI_o *)v68;
    v88 = v93;
    v89 = v98;
LABEL_68:
    CommonUI__OpenServantStatusDialog_18251308(v87, 7, v88, v89, 0LL);
    return;
  }
  v77 = MissionListViewItem__get_Type(selectItem, 0LL);
  if ( !Gift__IsCommandCode(v77, 0LL) )
  {
    v100 = MissionListViewItem__get_Type(selectItem, 0LL);
    GiftListById = (GiftEntity_array *)Gift__IsCostumeRelease(v100, 0LL);
    if ( ((unsigned __int8)GiftListById & 1) != 0 )
    {
      v101 = selectItem->fields.giftEnts;
      if ( !v101 )
        goto LABEL_80;
      if ( v101->max_length )
      {
        v102 = v101->m_Items[0];
        if ( !v102 )
          goto LABEL_80;
        objectId = v102->fields.objectId;
        goto LABEL_76;
      }
LABEL_81:
      sub_B17100(GiftListById, v24, v25);
      sub_B170A0();
    }
LABEL_77:
    v103 = MissionListViewItem__get_Type(selectItem, 0LL);
    if ( Gift__IsEquip(v103, 0LL) )
      MissionListViewManager__OpenEquipDetail(this, v28->fields.objectId, v104);
    return;
  }
  v76 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CmdEntity = MissionListViewItem__get_CmdEntity(selectItem, 0LL);
LABEL_55:
  v78 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v72, v73, v74, v75);
  ServantStatusDialog_EndDelegate___ctor(
    v78,
    (Il2CppObject *)this,
    Method_MissionListViewManager_CloseCommandCodeDetail__,
    0LL);
  if ( !v76 )
    goto LABEL_80;
  CommonUI__OpenServantEquipStatusDialog_18253740(v76, 25, CmdEntity, 0, v78, 0LL, 0LL);
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
  _BOOL4 IsCombineMaterial; // w0
  GetSvts_array *getSvtList; // x24
  struct System_String_o *age; // x25
  __int64 v31; // x26
  int32_t v32; // w25
  WebViewManager_o *Instance; // x0
  UnityEngine_Object_o *v34; // x24
  WebViewManager_o *v35; // x0
  MasterMissionComponent_o *v36; // x0
  int64_t userSvtId; // x24
  bool isNew; // w25
  bool Eff; // w0
  GetCommandCodes_array *getCommandCodeList; // x24
  struct System_String_o *v41; // x25
  __int64 v42; // x26
  int32_t v43; // w25
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x5
  const MethodInfo *v46; // x5
  WarEntity_o *v47; // x0
  WarEntity_o *v48; // x23
  CommonUI_o *v49; // x0
  const MethodInfo *v50; // x5
  const MethodInfo *v51; // [xsp+0h] [xbp-80h]
  WarEntity_o *v52; // [xsp+10h] [xbp-70h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+18h] [xbp-68h] BYREF
  GetCommandCodes_o *v54; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v55; // [xsp+28h] [xbp-58h] BYREF
  GetSvts_o *data; // [xsp+30h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v8 = this;
  if ( (byte_40F7D16 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CommandCodeMaster___, gifts);
    sub_B16FFC(&Method_DataManager_GetMaster_EquipMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    this = (MissionListViewManager_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    byte_40F7D16 = 1;
  }
  data = 0LL;
  entity = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
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
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v24 || !this )
        goto LABEL_87;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             &entity,
             *(_DWORD *)(*(_QWORD *)v24 + 24LL),
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          goto LABEL_87;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
        if ( !entity )
          goto LABEL_87;
        if ( ((IsCombineMaterial | SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL)) & 1) == 0 )
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
          *(_QWORD *)&v58.fields.currentCryptoKey = v31;
          *(_QWORD *)&v58.fields.fakeValue = age;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL);
          if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          }
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v32, 0LL) )
          {
            if ( !entity )
              goto LABEL_87;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !Instance )
                goto LABEL_87;
              v34 = *(UnityEngine_Object_o **)&Instance[11].fields.isButtonEnable;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
              {
                v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !v35 )
                  goto LABEL_87;
                v36 = *(MasterMissionComponent_o **)&v35[11].fields.isButtonEnable;
                if ( !v36 )
                  goto LABEL_87;
                MasterMissionComponent__stopSvtVoice(v36, 0LL);
              }
            }
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
                v51);
              return;
            }
LABEL_87:
            sub_B170D4();
          }
        }
      }
      goto LABEL_86;
    }
LABEL_88:
    sub_B17100(this, gifts, *(_QWORD *)&idx);
    sub_B170A0();
  }
  if ( Gift__IsCommandCode(name_high, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v24 || !this )
        goto LABEL_87;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             &v55,
             *(_DWORD *)(*(_QWORD *)v24 + 24LL),
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
      {
        if ( !v55 )
          goto LABEL_87;
        getCommandCodeList = v8->fields.getCommandCodeList;
        v42 = *(_QWORD *)&v55->fields.id;
        v41 = v55->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v59.fields.currentCryptoKey = v42;
        *(_QWORD *)&v59.fields.fakeValue = v41;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetCommandCodeData(getCommandCodeList, &v54, v43, 0LL) )
        {
          if ( v54 )
          {
            userSvtId = v54->fields.userCommandCodeId;
            isNew = v54->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v54, 0LL);
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
    if ( MissionListViewManager__TryGetServantCostumeEntity(
           this,
           &resultEntity,
           *(_DWORD *)(*(_QWORD *)v24 + 24LL),
           v44) )
    {
      if ( !resultEntity )
        goto LABEL_87;
      MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        v8,
        resultEntity->fields.name,
        gifts,
        idx,
        afterDetail,
        v45);
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
      this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( gifts->max_length > idx )
      {
        if ( !*(_QWORD *)v24 || !this )
          goto LABEL_87;
        v47 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v47 )
        {
          v48 = v47;
          v49 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !v49 )
            goto LABEL_87;
          if ( CommonUI__IsGetItemEffect(v49, v48->fields.id, 0LL) )
          {
            MissionListViewManager__StartRewardItemGetEffect(v8, v48->fields.id, gifts, idx, afterDetail, v50);
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
  this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EquipMaster___);
  if ( gifts->max_length <= idx )
    goto LABEL_88;
  if ( !*(_QWORD *)v24 || !this )
    goto LABEL_87;
  this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                       &v52,
                                       *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                                       (const MethodInfo_266F3E4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
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
    v46);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v46; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v48; // x21

  if ( (byte_40F7D19 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, name);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__, v13);
    sub_B16FFC(&MissionListViewManager___c__DisplayClass56_0_TypeInfo, v14);
    byte_40F7D19 = 1;
  }
  v15 = sub_B170CC(MissionListViewManager___c__DisplayClass56_0_TypeInfo, name, gifts, *(_QWORD *)&idx, afterDetail);
  MissionListViewManager___c__DisplayClass56_0___ctor((MissionListViewManager___c__DisplayClass56_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  *(_QWORD *)(v15 + 16) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v15 + 32) = gifts;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)gifts, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v15 + 48) = afterDetail;
  *(_DWORD *)(v15 + 40) = idx;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 48),
    (System_Int32_array **)afterDetail,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v46 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v46 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v46->static_fields->DEFAULT_FADE_TIME;
  v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v15,
    Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v48, 0LL);
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
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  QuestRewardInfo_o *v40; // x22
  __int64 v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x8
  __int64 v52; // x9
  __int64 v53; // x8
  __int64 v54; // x9
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v60; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v62; // x21

  if ( (byte_40F7D18 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v11);
    sub_B16FFC(&QuestRewardInfo_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__, v14);
    sub_B16FFC(&MissionListViewManager___c__DisplayClass55_0_TypeInfo, v15);
    byte_40F7D18 = 1;
  }
  v16 = sub_B170CC(
          MissionListViewManager___c__DisplayClass55_0_TypeInfo,
          *(_QWORD *)&equipId,
          gifts,
          *(_QWORD *)&idx,
          afterDetail);
  MissionListViewManager___c__DisplayClass55_0___ctor((MissionListViewManager___c__DisplayClass55_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 32) = gifts;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)gifts, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v16 + 48) = afterDetail;
  *(_DWORD *)(v16 + 40) = idx;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 48),
    (System_Int32_array **)afterDetail,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v40 = (QuestRewardInfo_o *)sub_B170CC(QuestRewardInfo_TypeInfo, v36, v37, v38, v39);
  QuestRewardInfo___ctor(v40, 0LL);
  *(_QWORD *)(v16 + 16) = v40;
  v41 = v16 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)v40, v42, v43, v44, v45, v46, v47);
  if ( !*(_QWORD *)(v16 + 16) )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)(v16 + 16) + 16LL) = 5;
  if ( !*(_QWORD *)v41 )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)v41 + 20LL) = equipId;
  v51 = *(_QWORD *)(v16 + 32);
  if ( !v51 )
    goto LABEL_16;
  v52 = *(int *)(v16 + 40);
  if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 24) )
  {
    sub_B17100(v48, v49, v50);
    sub_B170A0();
  }
  v53 = *(_QWORD *)(v51 + 8 * v52 + 32);
  if ( !v53 )
    goto LABEL_16;
  v54 = *(_QWORD *)(v16 + 16);
  if ( !v54 )
    goto LABEL_16;
  *(_DWORD *)(v54 + 24) = *(_DWORD *)(v53 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v60 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
  v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
  System_Action___ctor(
    v62,
    (Il2CppObject *)v16,
    Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_16:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v62, 0LL);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v46; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v48; // x21

  if ( (byte_40F7D1B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, userSvtID);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__, v19);
    sub_B16FFC(&MissionListViewManager___c__DisplayClass58_0_TypeInfo, v20);
    byte_40F7D1B = 1;
  }
  v21 = sub_B170CC(
          MissionListViewManager___c__DisplayClass58_0_TypeInfo,
          userSvtID,
          isNew,
          isDoEffect,
          *(_QWORD *)&giftType);
  MissionListViewManager___c__DisplayClass58_0___ctor((MissionListViewManager___c__DisplayClass58_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_10;
  *(_DWORD *)(v21 + 16) = giftType;
  *(_QWORD *)(v21 + 24) = userSvtID;
  *(_QWORD *)(v21 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_BYTE *)(v21 + 40) = isDoEffect;
  *(_BYTE *)(v21 + 41) = isNew;
  *(_QWORD *)(v21 + 48) = gifts;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 48), (System_Int32_array **)gifts, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v21 + 64) = afterDetail;
  *(_DWORD *)(v21 + 56) = idx;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v21 + 64),
    (System_Int32_array **)afterDetail,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v46 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v46 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v46->static_fields->DEFAULT_FADE_TIME;
  v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v21,
    Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v48, 0LL);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  QuestRewardInfo_o *v43; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x9
  __int64 v56; // x8
  __int64 v57; // x9
  CommonUI_o *Instance; // x0
  int32_t ItemEffectId; // w0
  int32_t v60; // w1
  System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x0
  const MethodInfo *v62; // x4
  System_Collections_Generic_List_int__o *v63; // x0
  __int64 v64; // x8
  __int64 v65; // x8
  int v66; // w10
  unsigned int v67; // w9
  __int64 v68; // x10
  __int64 v69; // x11
  __int64 v70; // x11
  __int64 v71; // x10
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  CommonUI_o *v77; // x20
  AvalonSceneManager_c *v78; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v80; // x21

  if ( (byte_40F7D1A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&itemId);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_B16FFC(&QuestRewardInfo_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__, v16);
    sub_B16FFC(&MissionListViewManager___c__DisplayClass57_0_TypeInfo, v17);
    byte_40F7D1A = 1;
  }
  v18 = sub_B170CC(
          MissionListViewManager___c__DisplayClass57_0_TypeInfo,
          *(_QWORD *)&itemId,
          gifts,
          *(_QWORD *)&idx,
          afterDetail);
  MissionListViewManager___c__DisplayClass57_0___ctor((MissionListViewManager___c__DisplayClass57_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_34;
  *(_QWORD *)(v18 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 40) = gifts;
  v25 = (__int64 *)(v18 + 40);
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v18 + 56) = afterDetail;
  v32 = v18 + 32;
  *(_DWORD *)(v18 + 48) = idx;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 56),
    (System_Int32_array **)afterDetail,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v43 = (QuestRewardInfo_o *)sub_B170CC(QuestRewardInfo_TypeInfo, v39, v40, v41, v42);
  QuestRewardInfo___ctor(v43, 0LL);
  *(_QWORD *)(v18 + 32) = v43;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
  v53 = *(_QWORD *)(v18 + 32);
  if ( !v53 )
    goto LABEL_34;
  *(_DWORD *)(v53 + 16) = 2;
  if ( !*(_QWORD *)v32 )
    goto LABEL_34;
  *(_DWORD *)(*(_QWORD *)v32 + 20LL) = itemId;
  v54 = *(_QWORD *)(v18 + 40);
  if ( !v54 )
    goto LABEL_34;
  v55 = *(int *)(v18 + 48);
  if ( (unsigned int)v55 >= *(_DWORD *)(v54 + 24) )
    goto LABEL_35;
  v56 = *(_QWORD *)(v54 + 8 * v55 + 32);
  if ( !v56 )
    goto LABEL_34;
  v57 = *(_QWORD *)(v18 + 32);
  if ( !v57 )
    goto LABEL_34;
  *(_DWORD *)(v57 + 24) = *(_DWORD *)(v56 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v18 + 32), 0LL);
  *(_DWORD *)(v18 + 16) = ItemEffectId;
  v60 = ItemEffectId;
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_34;
  if ( System_Collections_Generic_List_int___Contains(
         rewardItemGetEffectPlayList,
         v60,
         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v18 + 40),
      *(_DWORD *)(v18 + 48) + 1,
      *(System_Action_o **)(v18 + 56),
      v62);
    return;
  }
  v63 = this->fields.rewardItemGetEffectPlayList;
  if ( !v63 )
    goto LABEL_34;
  System_Collections_Generic_List_int___Add(
    v63,
    *(_DWORD *)(v18 + 16),
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  v64 = *(_QWORD *)(v18 + 32);
  if ( !v64 )
    goto LABEL_34;
  *(_DWORD *)(v64 + 24) = 0;
  v65 = *v25;
  if ( !*v25 )
    goto LABEL_34;
  v66 = *(_DWORD *)(v65 + 24);
  if ( v66 >= 1 )
  {
    v67 = 0;
    while ( v67 < v66 )
    {
      v68 = *(_QWORD *)(v18 + 40);
      if ( !v68 )
        goto LABEL_34;
      v69 = *(int *)(v18 + 48);
      if ( (unsigned int)v69 >= *(_DWORD *)(v68 + 24) )
        break;
      v70 = *(_QWORD *)(v68 + 8 * v69 + 32);
      if ( !v70 )
        goto LABEL_34;
      v71 = *(_QWORD *)(v65 + 8LL * (int)v67 + 32);
      if ( !v71 )
        goto LABEL_34;
      if ( *(_DWORD *)(v70 + 24) == *(_DWORD *)(v71 + 24) )
      {
        if ( !*(_QWORD *)v32 )
          goto LABEL_34;
        *(_DWORD *)(*(_QWORD *)v32 + 24LL) += *(_DWORD *)(v71 + 28);
      }
      v66 = *(_DWORD *)(v65 + 24);
      if ( (int)++v67 >= v66 )
        goto LABEL_28;
    }
LABEL_35:
    sub_B17100(v50, v51, v52);
    sub_B170A0();
  }
LABEL_28:
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v77 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v78 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v78 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v78->static_fields->DEFAULT_FADE_TIME;
  v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
  System_Action___ctor(
    v80,
    (Il2CppObject *)v18,
    Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v77 )
LABEL_34:
    sub_B170D4();
  CommonUI__maskFadeout(v77, 1, DEFAULT_FADE_TIME, v80, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
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
  __int64 v28; // x3
  __int64 v29; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v31; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x21

  if ( (byte_40F7D1C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&callCnt);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__, v10);
    sub_B16FFC(&MissionListViewManager___c__DisplayClass59_0_TypeInfo, v11);
    byte_40F7D1C = 1;
  }
  v12 = sub_B170CC(MissionListViewManager___c__DisplayClass59_0_TypeInfo, *(_QWORD *)&callCnt, callback, method, v4);
  MissionListViewManager___c__DisplayClass59_0___ctor((MissionListViewManager___c__DisplayClass59_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_12;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 32) = callback;
  *(_DWORD *)(v12 + 24) = callCnt;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_12;
  if ( *(_DWORD *)(v12 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v31 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
    v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v12,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v33, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  ActionExtensions__Call(*(System_Action_o **)(v12 + 32), 0LL);
}


void __fastcall MissionListViewManager__SvtEffCaller(
        MissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
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
  ServantRewardAction_o *svtRewardComp; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x20

  if ( (byte_40F7D1D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__, v8);
    sub_B16FFC(&MissionListViewManager___c__DisplayClass60_0_TypeInfo, v9);
    byte_40F7D1D = 1;
  }
  v10 = sub_B170CC(MissionListViewManager___c__DisplayClass60_0_TypeInfo, callback, method, v3, v4);
  MissionListViewManager___c__DisplayClass60_0___ctor((MissionListViewManager___c__DisplayClass60_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  svtRewardComp = this->fields.svtRewardComp;
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__,
    0LL);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtRewardComp )
LABEL_9:
    sub_B170D4();
  ServantRewardAction__Play(svtRewardComp, v28, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  int32_t v9; // w20
  System_String_o *v10; // x0
  int32_t v11; // w21
  ServantCostumeMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = objectId;
  if ( (byte_40F7D1E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCostumeMaster___, resultEntity);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40F7D1E = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !v6 )
    goto LABEL_9;
  v7 = v6;
  v8 = System_String__Substring_43807468(v6, 0, v6->fields.m_stringLength - 2, 0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  v10 = System_String__Substring(v7, v7->fields.m_stringLength - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B170D4();
  return ServantCostumeMaster__TryGetEntity(Master_WarQuestSelectionMaster, resultEntity, v9, v11, 0LL);
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
  TransitionCalculator_float__o *rewardIconAlphaCalculator; // x0
  AlphaTransitionCalculator_o **p_rewardIconAlphaCalculator; // x20
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  float realtimeSinceStartup; // s0
  float v14; // s0
  AlphaTransitionCalculator_o *v15; // x0
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

  if ( (byte_40F7D09 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewManager_TypeInfo, method);
    sub_B16FFC(&Method_TransitionCalculator_float__Update__, v3);
    byte_40F7D09 = 1;
  }
  rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v6 = (System_Int32_array **)MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = (AlphaTransitionCalculator_o *)v6;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator, v6, v7, v8, v9, v10, v11, v12);
    if ( !*p_rewardIconAlphaCalculator )
      goto LABEL_27;
    AlphaTransitionCalculator__MakeFadeInFinished(*p_rewardIconAlphaCalculator, 0LL);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    rewardIconAlphaCalculator = (TransitionCalculator_float__o *)this->fields.rewardIconAlphaCalculator;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    if ( !rewardIconAlphaCalculator )
      goto LABEL_27;
  }
  v14 = TransitionCalculator_float___Update(
          rewardIconAlphaCalculator,
          (const MethodInfo_2532FA0 *)Method_TransitionCalculator_float__Update__);
  v15 = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v14;
  if ( !v15 )
    goto LABEL_27;
  if ( AlphaTransitionCalculator__IsFadeInFinished(v15, 0LL) )
  {
    v16 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v18 = v16;
    v19 = MissionListViewManager_TypeInfo;
    if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
      v19 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v18 - alphaAnimTimeOld) >= v19->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      if ( !*p_rewardIconAlphaCalculator )
        goto LABEL_27;
      AlphaTransitionCalculator__StartFadeOut(*p_rewardIconAlphaCalculator, 0LL);
    }
  }
  if ( !*p_rewardIconAlphaCalculator )
    goto LABEL_27;
  if ( !AlphaTransitionCalculator__IsFadeOutFinished(*p_rewardIconAlphaCalculator, 0LL) )
    return;
  if ( !*p_rewardIconAlphaCalculator )
LABEL_27:
    sub_B170D4();
  AlphaTransitionCalculator__StartFadeIn(*p_rewardIconAlphaCalculator, 0LL);
  v20 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v20;
  v22 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v23 = MissionListViewManager_TypeInfo;
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v23 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v23->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v22 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v25 = this->fields.alphaAnimCnt;
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v25 - ALPHA_ANIM_COUNT_RESET_VAL;
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

  if ( (byte_40F7D07 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F7D07 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F7D08 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F7D08 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B173C8(v7);
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
  UnityEngine_GameObject_o *touchBlockObj; // x0
  System_Action_o *afterDetail; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (touchBlockObj = _4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL), (afterDetail = this->fields.afterDetail) == 0LL) )
  {
    sub_B170D4();
  }
  System_Action__Invoke(afterDetail, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__1; // x22
  CommonUI_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F8621 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__, v4);
    byte_40F8621 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__LoadEquipGetEffect(v11, _9__1, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__2; // x22
  CommonUI_o *v11; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8622 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__, v4);
    byte_40F8622 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v11 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__OpenEquipGetEffect(v11, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  MissionListViewManager_o *_4__this; // x0

  if ( (byte_40F8623 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F8623 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  MissionListViewManager__StartItemGetEffectAction(
    _4__this,
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__1; // x22
  CommonUI_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F8624 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_40F8624 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__LoadCostumeReleaseEffect(v11, _9__1, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__2; // x22
  CommonUI_o *v11; // x21
  System_String_o *name; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8625 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_40F8625 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v11 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__OpenCostumeReleaseEffect(v11, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  MissionListViewManager_o *_4__this; // x0

  if ( (byte_40F8626 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F8626 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  MissionListViewManager__StartItemGetEffectAction(
    _4__this,
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
  __int64 v13; // x3
  __int64 v14; // x4
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8627 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v5);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__, v6);
    byte_40F8627 = 1;
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
  v16 = v10;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12, v13, v14);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass57_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass57_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  AssetData_o *v28; // x21
  MissionInfoMaker_c *v29; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Transform_o *transform; // x0
  struct MissionListViewManager_o *_4__this; // x8
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  QuestRewardItemAction_o *v45; // x0
  QuestRewardItemAction_o *v46; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Action_o *v51; // x21
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8628 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v7);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&MissionInfoMaker_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__, v13);
    sub_B16FFC(&MissionListViewManager___c__DisplayClass57_1_TypeInfo, v14);
    byte_40F8628 = 1;
  }
  v15 = sub_B170CC(MissionListViewManager___c__DisplayClass57_1_TypeInfo, data, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  *(_QWORD *)(v15 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = data;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)data, v22, v23, v24, v25, v26, v27);
  v28 = *(AssetData_o **)(v15 + 24);
  v29 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v29 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v29->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v32 = System_String__Format(ITEM_GET_EFFECT_NAME, v31, 0LL);
  if ( !v28 )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               v28,
                                                                               v32,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v34 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v34 )
    goto LABEL_17;
  v35 = v34;
  transform = UnityEngine_GameObject__get_transform(v34, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v35, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v35,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v15 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), Component_UIWidget, v39, v40, v41, v42, v43, v44);
  v45 = *(QuestRewardItemAction_o **)(v15 + 16);
  if ( !v45
    || (QuestRewardItemAction__Setup(v45, this->fields.questRewardInfo, 0LL),
        v46 = *(QuestRewardItemAction_o **)(v15 + 16),
        v51 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50),
        System_Action___ctor(
          v51,
          (Il2CppObject *)v15,
          Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !v46) )
  {
LABEL_17:
    sub_B170D4();
  }
  QuestRewardItemAction__Play(v46, 0, v51, 0.0, 0LL);
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
  MissionListViewManager_o *_4__this; // x0

  if ( (byte_40F8629 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F8629 = 1;
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
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_29947376(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0LL )
LABEL_13:
    sub_B170D4();
  MissionListViewManager__StartItemGetEffectAction(
    _4__this,
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F862A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__, v4);
    byte_40F862A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v11 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v11 )
    sub_B170D4();
  SummonAssetManager__LoadSummonAssets(v11, _9__1, 0LL);
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  UserServantEntity_o *v15; // x21
  SummonAssetManager_o *Instance; // x0
  struct MissionListViewManager_o *v17; // x8
  System_Int32_array **Prefab; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct MissionListViewManager_o *v25; // x8
  ServantRewardAction_o *svtRewardComp; // x20
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w0
  __int128 v30; // q1
  int32_t v31; // w22
  int64_t v32; // x0
  __int64 v33; // x8
  int64_t v34; // x21
  int32_t v35; // w0
  bool isNew; // w5
  int32_t v37; // w3
  bool v38; // w6
  int32_t v39; // w7
  ServantRewardAction_o *v40; // x0
  int32_t v41; // w1
  int64_t v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v47; // x0
  UserServantEntity_o *v48; // x0
  struct MissionListViewManager_o *v49; // x20
  UserServantEntity_o *v50; // x21
  SummonAssetManager_o *v51; // x0
  struct MissionListViewManager_o *v52; // x8
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct MissionListViewManager_o *v60; // x8
  ServantRewardAction_o *v61; // x20
  __int128 v62; // q1
  int64_t v63; // x0
  bool v64; // w2
  int64_t v65; // x1
  bool v66; // w3
  int32_t v67; // w4
  ServantRewardAction_o *v68; // x0
  int32_t v69; // w0
  __int128 v70; // q1
  int32_t v71; // w22
  int64_t v72; // x0
  __int64 v73; // x8
  int64_t v74; // x21
  int32_t v75; // w0
  __int128 v76; // q1
  int64_t v77; // x0
  System_Action_o *_9__2; // x21
  MissionListViewManager_o *v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+90h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_40F862B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__, v11);
    byte_40F862B = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 Master_WarQuestSelectionMaster,
                 this->fields.userSvtID,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v15 = Entity;
      Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v17 = this->fields.__4__this;
      if ( v17 )
      {
        if ( Instance )
        {
          Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(
                                            Instance,
                                            v17->fields.instantiatingPOS,
                                            0,
                                            0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Prefab;
            sub_B16F98(
              (BattleServantConfConponent_o *)&_4__this->fields.svtRewardComp,
              Prefab,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            v25 = this->fields.__4__this;
            if ( v25 )
            {
              if ( v15 )
              {
                svtRewardComp = v25->fields.svtRewardComp;
                v28 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
                v27 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
                if ( this->fields.isDoEffect )
                {
                  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v91.fields.currentCryptoKey = v28;
                  *(_QWORD *)&v91.fields.fakeValue = v27;
                  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v91, 0LL);
                  v30 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
                  v31 = v29;
                  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v90.fields.fakeValue = v30;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v89 = v90;
                  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v89, 0LL);
                  v33 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v92.fields.fakeValue = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
                  v34 = v32;
                  *(_QWORD *)&v92.fields.currentCryptoKey = v33;
                  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v92, 0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v37 = v35;
                    v38 = 1;
                    v39 = 14;
                    v40 = svtRewardComp;
                    v41 = v31;
                    v42 = v34;
LABEL_46:
                    ServantRewardAction__Setup(v40, v41, v42, v37, 1, isNew, v38, v39, 0LL);
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
                  *(_QWORD *)&v93.fields.currentCryptoKey = v28;
                  *(_QWORD *)&v93.fields.fakeValue = v27;
                  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v93, 0LL);
                  v70 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
                  v71 = v69;
                  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v90.fields.fakeValue = v70;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v88 = v90;
                  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v88, 0LL);
                  v73 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v94.fields.fakeValue = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
                  v74 = v72;
                  *(_QWORD *)&v94.fields.currentCryptoKey = v73;
                  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v94, 0LL);
                  if ( svtRewardComp )
                  {
                    v37 = v75;
                    v39 = 6;
                    v40 = svtRewardComp;
                    v41 = v71;
                    v42 = v74;
                    isNew = 0;
                    v38 = 0;
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
    sub_B170D4();
  }
  if ( !Gift__IsCommandCode(this->fields.giftType, 0LL) )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v47 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !v47 )
    goto LABEL_57;
  v48 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v47,
          this->fields.userSvtID,
          (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v49 = this->fields.__4__this;
  v50 = v48;
  v51 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v52 = this->fields.__4__this;
  if ( !v52 )
    goto LABEL_57;
  if ( !v51 )
    goto LABEL_57;
  v53 = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(v51, v52->fields.instantiatingPOS, 0, 0LL);
  if ( !v49 )
    goto LABEL_57;
  v49->fields.svtRewardComp = (struct ServantRewardAction_o *)v53;
  sub_B16F98((BattleServantConfConponent_o *)&v49->fields.svtRewardComp, v53, v54, v55, v56, v57, v58, v59);
  v60 = this->fields.__4__this;
  if ( !v60 || !v50 )
    goto LABEL_57;
  v61 = v60->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v62 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
    *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v90.fields.fakeValue = v62;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v87 = v90;
    v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v87, 0LL);
    if ( !v61 )
      goto LABEL_57;
    v64 = this->fields.isNew;
    v65 = v63;
    v66 = 1;
    v67 = 14;
    v68 = v61;
  }
  else
  {
    v76 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
    *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v90.fields.fakeValue = v76;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v86 = v90;
    v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v86, 0LL);
    if ( !v61 )
      goto LABEL_57;
    v65 = v77;
    v67 = 6;
    v68 = v61;
    v64 = 0;
    v66 = 0;
  }
  ServantRewardAction__SetupCommandCode_28281192(v68, v65, v64, v66, v67, 0LL);
LABEL_53:
  _9__2 = this->fields.__9__2;
  v79 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  if ( !v79 )
    goto LABEL_57;
  MissionListViewManager__SvtEffCaller(v79, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_GameObject_o *touchBlockObj; // x0
  MissionListViewManager_o *v6; // x0

  if ( (byte_40F862C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, method);
    byte_40F862C = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (touchBlockObj = _4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL), (v6 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  MissionListViewManager__StartItemGetEffectAction(
    v6,
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v16; // x8
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *v18; // x21
  UserServantEntity_o *v19; // x20
  SummonAssetManager_o *Instance; // x0
  struct MissionListViewManager_o *v21; // x8
  System_Int32_array **Prefab; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct MissionListViewManager_o *v29; // x8
  struct GetSvts_array *v30; // x8
  __int64 v31; // x9
  GetSvts_o *v32; // x0
  bool Eff; // w0
  struct MissionListViewManager_o *v34; // x9
  ServantRewardAction_o *svtRewardComp; // x21
  __int64 v36; // x22
  __int64 v37; // x23
  int32_t v38; // w0
  __int128 v39; // q1
  int32_t v40; // w22
  int64_t v41; // x0
  __int64 v42; // x8
  int64_t v43; // x20
  struct MissionListViewManager_o *v44; // x8
  struct GetSvts_array *v45; // x8
  __int64 v46; // x9
  GetSvts_o *v47; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int32_t v52; // w0
  __int128 v53; // q1
  int32_t v54; // w22
  int64_t v55; // x0
  __int64 v56; // x8
  int64_t v57; // x20
  int32_t v58; // w0
  System_Action_o *_9__1; // x21
  MissionListViewManager_o *v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40F862D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__, v9);
    byte_40F862D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_45;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_46;
  v16 = getSvtList->m_Items[callCnt];
  if ( !v16 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
             v16->fields.userSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v18 = this->fields.__4__this;
  v19 = Entity;
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_45;
  if ( !Instance )
    goto LABEL_45;
  Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(
                                    Instance,
                                    v21->fields.instantiatingPOS,
                                    0,
                                    0LL);
  if ( !v18 )
    goto LABEL_45;
  v18->fields.svtRewardComp = (struct ServantRewardAction_o *)Prefab;
  sub_B16F98((BattleServantConfConponent_o *)&v18->fields.svtRewardComp, Prefab, v23, v24, v25, v26, v27, v28);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_45;
  v30 = v29->fields.getSvtList;
  if ( !v30 )
    goto LABEL_45;
  v31 = this->fields.callCnt;
  if ( (unsigned int)v31 >= v30->max_length )
  {
LABEL_46:
    sub_B17100(Master_WarQuestSelectionMaster, v11, v12);
    sub_B170A0();
  }
  v32 = v30->m_Items[v31];
  if ( !v32 )
    goto LABEL_45;
  Eff = GetSvts__isDoGetEff(v32, 0LL);
  v34 = this->fields.__4__this;
  if ( !v34 || !v19 )
    goto LABEL_45;
  svtRewardComp = v34->fields.svtRewardComp;
  v37 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( !Eff )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v72.fields.currentCryptoKey = v37;
    *(_QWORD *)&v72.fields.fakeValue = v36;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72, 0LL);
    v53 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
    v54 = v52;
    *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v69.fields.fakeValue = v53;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v67 = v69;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v67, 0LL);
    v56 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v73.fields.fakeValue = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
    v57 = v55;
    *(_QWORD *)&v73.fields.currentCryptoKey = v56;
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v54, v57, v58, 1, 0, 0, 2, 0LL);
      goto LABEL_41;
    }
LABEL_45:
    sub_B170D4();
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v70, 0LL);
  v39 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
  v40 = v38;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v68, 0LL);
  v42 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
  v43 = v41;
  *(_QWORD *)&v71.fields.currentCryptoKey = v42;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                  v71,
                                                                  0LL);
  v44 = this->fields.__4__this;
  if ( !v44 )
    goto LABEL_45;
  v45 = v44->fields.getSvtList;
  if ( !v45 )
    goto LABEL_45;
  v46 = this->fields.callCnt;
  if ( (unsigned int)v46 >= v45->max_length )
    goto LABEL_46;
  v47 = v45->m_Items[v46];
  if ( !v47 || !svtRewardComp )
    goto LABEL_45;
  ServantRewardAction__Setup(
    svtRewardComp,
    v40,
    v43,
    (int32_t)Master_WarQuestSelectionMaster,
    1,
    v47->fields.isNew,
    1,
    10,
    0LL);
LABEL_41:
  _9__1 = this->fields.__9__1;
  v60 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !v60 )
    goto LABEL_45;
  MissionListViewManager__SvtEffCaller(v60, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F862E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__, v5);
    byte_40F862E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Component_o *svtRewardComp; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_40F862F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F862F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (svtRewardComp = (UnityEngine_Component_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(svtRewardComp, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}