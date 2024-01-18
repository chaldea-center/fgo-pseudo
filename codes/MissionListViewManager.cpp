void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MissionListViewManager_c *v2; // x8

  if ( (byte_418732F & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewManager_TypeInfo, v1);
    byte_418732F = 1;
  }
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM = 7;
  v2 = MissionListViewManager_TypeInfo;
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  v2->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418732E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_418732E = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rewardItemGetEffectPlayList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4187324 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4187324 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v7; // x1

  if ( (byte_4187322 & 1) == 0 )
  {
    sub_B2C35C(&Method_MissionListViewManager_CloseItemDetail__, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4187322 = 1;
  }
  v4 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B2C364(Method_MissionListViewManager_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4187323 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4187323 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  AlphaTransitionCalculator_o *v6; // x20

  if ( (byte_4187319 & 1) == 0 )
  {
    sub_B2C35C(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B2C35C(&MissionListViewManager_TypeInfo, v2);
    byte_4187319 = 1;
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
  v6 = (AlphaTransitionCalculator_o *)sub_B2C42C(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0LL);
  return v6;
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
  __int64 v12; // x1
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_4187326 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, afterDetail);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__, v8);
    sub_B2C35C(&MissionListViewManager___c__DisplayClass54_0_TypeInfo, v9);
    byte_4187326 = 1;
  }
  v10 = sub_B2C42C(MissionListViewManager___c__DisplayClass54_0_TypeInfo);
  MissionListViewManager___c__DisplayClass54_0___ctor((MissionListViewManager___c__DisplayClass54_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = afterDetail;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v10 + 24),
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
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(rewardItemGetEffectPlayList, v12);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v28, 0LL);
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
        const MethodInfo_1AB37C8 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppClass *_0_System_Collections_Generic_List_TObject; // x19
  System_Collections_Generic_List_TObject__o *v10; // x19
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v13; // x3
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x0
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  const MethodInfo **v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF
  __int64 v24; // [xsp+48h] [xbp-28h]

  if ( (byte_41893E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41893E2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  HIDWORD(v24) = 0;
  _0_System_Collections_Generic_List_TObject = method->rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE2(_0_System_Collections_Generic_List_TObject->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_System_Collections_Generic_List_TObject_);
  v10 = (System_Collections_Generic_List_TObject__o *)sub_B2C42C(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      v17 = ((__int64 (__fastcall *)(Il2CppObject *, MethodInfo *))method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_->methodPointer)(
              current,
              method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      if ( !v10 )
        sub_B2C434(v17, v17);
      ((void (__fastcall *)(System_Collections_Generic_List_TObject__o *, __int64, MethodInfo *))method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add->methodPointer)(
        v10,
        v17,
        method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add);
    }
  }
  v24 = 0x10000004CLL;
  v22.fields.list = (struct System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Enumerator_GameObject__TypeInfo;
  if ( *(_WORD *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
        goto LABEL_19;
    }
    v20 = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->vtable._0_Equals.method + 2 * *p_offset;
  }
  else
  {
LABEL_19:
    v20 = (const MethodInfo **)sub_AC5258(&v22, System_IDisposable_TypeInfo, 0LL, v13);
  }
  ((void (__fastcall *)(int32_t *, const MethodInfo *))*v20)(&v22.fields.index, v20[1]);
  if ( (_DWORD)v24 == 76 )
    v24 = 76LL;
  return v10;
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

  if ( (byte_418731D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418731D = 1;
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
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B2C434(gameObject, v7);
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
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-18h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_4187320 & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v6);
    this = (MissionListViewManager_o *)sub_B2C35C(&Method_MissionListViewManager_CloseItemDetail__, v7);
    byte_4187320 = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v8 = resultEntity;
    v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v9, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  EquipEntity_o *v12; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187321 & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&objectId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EquipMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v7);
    sub_B2C35C(&Method_MissionListViewManager_CloseItemDetail__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187321 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v11);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v12 = (EquipEntity_o *)entity;
    v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    MissionInfoMaker__OpenEquipDetail(v12, v13, v14);
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
  System_Collections_Generic_List_TObject__o *v10; // x20
  signed __int64 size; // x8
  unsigned __int64 v12; // x24
  int v13; // w23
  MissionListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x4

  if ( (byte_418731C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__, v4);
    sub_B2C35C(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v5);
    sub_B2C35C(&Method_MissionListViewManager_OnMoveEnd__, v6);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v7);
    byte_418731C = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_1AB37C8 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_15:
    sub_B2C434(ObjectList_object, v9);
  v10 = ObjectList_object;
  this->fields.callbackCount = ObjectList_object->fields._size;
  LODWORD(size) = ObjectList_object->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = (MissionListViewObject_o *)v10->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      ++v13;
      MissionListViewObject__Init(v14, 4, v15, this->fields.listInDelay, 1, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v10->fields._size;
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  __int64 v16; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418731B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v12);
    sub_B2C35C(&Method_MissionListViewManager_OnMoveEnd__, v13);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v14);
    byte_418731B = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList_object = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewManager__GetObjectList_object_(this, (const MethodInfo_1AB37C8 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_B2C434(0LL, v16);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList_object,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v20, v21);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v19, delay, 1, v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_24421324(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_24420932(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewManager__SetMode_24420932(
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

  if ( (byte_418731A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&StringLiteral_11429/*"RequestInto"*/, v5);
    byte_418731A = 1;
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
        sub_B2C434(gameObject, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11429/*"RequestInto"*/,
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


void __fastcall MissionListViewManager__SetMode_24421264(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_24420932(this, mode, v11);
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
  if ( (byte_418731E & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_B2C35C(&MissionListViewObject_TypeInfo, obj);
    byte_418731E = 1;
  }
  if ( !obj
    || (v7 = *(&MissionListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != MissionListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  const MethodInfo *v21; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v24; // x8
  unsigned int MasterName_k__BackingField; // w9
  int v26; // w8
  GiftEntity_o *v27; // x20
  ItemEntity_o *Entity; // x20
  WebViewManager_o *v29; // x0
  CommonUI_o *v30; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v35; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v36; // x23
  struct GiftEntity_array *giftEnts; // x8
  const MethodInfo *v38; // x1
  int32_t type; // w0
  GiftMaster_o *v40; // x22
  bool IsServantEquip; // w23
  WebViewManager_o *v42; // x21
  ServantStatusDialog_EndDelegate_o *v43; // x22
  CommonUI_o *v44; // x0
  GiftEntity_o *v45; // x2
  ServantStatusDialog_EndDelegate_o *v46; // x3
  int32_t v47; // w0
  bool v48; // w23
  CommonUI_o *v49; // x22
  ServantStatusDialog_EndDelegate_o *v50; // x21
  CommandCodeEntity_o *cmdEnt; // x20
  WebViewManager_o *v52; // x0
  int32_t v53; // w0
  const MethodInfo *v54; // x1
  CommonUI_o *v55; // x21
  ServantStatusDialog_EndDelegate_o *v56; // x22
  struct System_String_o *v57; // x20
  __int64 v58; // x23
  int32_t v59; // w20
  ServantStatusDialog_EndDelegate_o *v60; // x22
  CommonUI_o *v61; // x0
  int32_t v62; // w2
  ServantStatusDialog_EndDelegate_o *v63; // x3
  struct ServantEntity_o *svtEnt; // x8
  __int64 v65; // x20
  __int64 v66; // x21
  int32_t v67; // w20
  ServantStatusDialog_EndDelegate_o *v68; // x21
  const MethodInfo *v69; // x2
  int32_t objectId; // w1
  int32_t v71; // w0
  struct GiftEntity_array *v72; // x8
  GiftEntity_o *v73; // x8
  int32_t v74; // w0
  const MethodInfo *v75; // x2
  __int64 v76; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_418731F & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, selectItem);
    sub_B2C35C(&Method_DataManager_GetMaster_CommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_B2C35C(&Method_MissionListViewManager_CloseCommandCodeDetail__, v14);
    sub_B2C35C(&Method_MissionListViewManager_CloseItemDetail__, v15);
    sub_B2C35C(&Method_MissionListViewManager_CloseServantStatusDetail__, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B2C35C(&SoundManager_TypeInfo, v19);
    byte_418731F = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v35 = (CommonUI_o *)Instance;
    v36 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v36,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v35 )
      goto LABEL_81;
    CommonUI__OpenItemDetailDialog_18036692(v35, nameTxt, rewardExtraDetailTxt, v36, 0LL);
    return;
  }
  if ( rewardType != 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  v24 = selectItem->fields.eventMissionEnt;
  if ( !v24 )
    goto LABEL_81;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_81;
  Master_WarQuestSelectionMaster = (GiftMaster_o *)GiftMaster__GetGiftListById(
                                                     Master_WarQuestSelectionMaster,
                                                     v24->fields.giftId,
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
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 v27->fields.objectId,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_24;
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                         v27->fields.objectId,
                                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      v40 = Master_WarQuestSelectionMaster;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
      v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v43 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v43,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v42 )
          goto LABEL_81;
        v44 = (CommonUI_o *)v42;
        v45 = v27;
        v46 = v43;
LABEL_47:
        CommonUI__OpenServantStatusDialog_17945944(v44, 7, v45, v46, 0LL);
        return;
      }
      v58 = *(_QWORD *)&v40->fields._MasterKind_k__BackingField;
      v57 = v40->fields._MasterName_k__BackingField;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v77.fields.currentCryptoKey = v58;
      *(_QWORD *)&v77.fields.fakeValue = v57;
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77, 0LL);
      v60 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v60,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v42 )
        goto LABEL_81;
      v61 = (CommonUI_o *)v42;
      v62 = v59;
      v63 = v60;
      goto LABEL_69;
    }
    if ( Gift__IsCommandCode(v27->fields.type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      cmdEnt = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                        v27->fields.objectId,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_56;
    }
    if ( Gift__IsCostumeRelease(v27->fields.type, 0LL) )
    {
      objectId = v27->fields.objectId;
LABEL_77:
      MissionListViewManager__OpenCostumeReleaseDetail(this, objectId, v69);
      return;
    }
    goto LABEL_78;
  }
  if ( MissionListViewItem__get_Type(selectItem, v21) == 2 )
  {
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Entity = selectItem->fields.itemEnt;
LABEL_24:
    v30 = (CommonUI_o *)v29;
    v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( v30 )
    {
      CommonUI__OpenItemDetailDialog(v30, Entity, v31, 50, 0LL);
      return;
    }
LABEL_81:
    sub_B2C434(Master_WarQuestSelectionMaster, v21);
  }
  v47 = MissionListViewItem__get_Type(selectItem, v38);
  if ( Gift__IsServant(v47, 0LL) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)selectItem->fields.svtEnt;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_81;
    v48 = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v49 = (CommonUI_o *)Master_WarQuestSelectionMaster;
    if ( v48 )
    {
      v50 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v50,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v49 )
        goto LABEL_81;
      v44 = v49;
      v45 = v27;
      v46 = v50;
      goto LABEL_47;
    }
    svtEnt = selectItem->fields.svtEnt;
    if ( !svtEnt )
      goto LABEL_81;
    v66 = *(_QWORD *)&svtEnt->fields.id.fields.currentCryptoKey;
    v65 = *(_QWORD *)&svtEnt->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v78.fields.currentCryptoKey = v66;
    *(_QWORD *)&v78.fields.fakeValue = v65;
    v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v78, 0LL);
    v68 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v68,
      (Il2CppObject *)this,
      Method_MissionListViewManager_CloseServantStatusDetail__,
      0LL);
    if ( !v49 )
      goto LABEL_81;
    v61 = v49;
    v62 = v67;
    v63 = v68;
LABEL_69:
    CommonUI__OpenServantStatusDialog_17985072(v61, 7, v62, v63, 0LL);
    return;
  }
  v53 = MissionListViewItem__get_Type(selectItem, v21);
  if ( !Gift__IsCommandCode(v53, 0LL) )
  {
    v71 = MissionListViewItem__get_Type(selectItem, v54);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)Gift__IsCostumeRelease(v71, 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v72 = selectItem->fields.giftEnts;
      if ( !v72 )
        goto LABEL_81;
      if ( v72->max_length )
      {
        v73 = v72->m_Items[0];
        if ( !v73 )
          goto LABEL_81;
        objectId = v73->fields.objectId;
        goto LABEL_77;
      }
LABEL_82:
      v76 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v76, 0LL);
    }
LABEL_78:
    v74 = MissionListViewItem__get_Type(selectItem, v21);
    if ( Gift__IsEquip(v74, 0LL) )
      MissionListViewManager__OpenEquipDetail(this, v27->fields.objectId, v75);
    return;
  }
  v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  cmdEnt = selectItem->fields.cmdEnt;
LABEL_56:
  v55 = (CommonUI_o *)v52;
  v56 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v56,
    (Il2CppObject *)this,
    Method_MissionListViewManager_CloseCommandCodeDetail__,
    0LL);
  if ( !v55 )
    goto LABEL_81;
  CommonUI__OpenServantEquipStatusDialog_17987504(v55, 25, cmdEnt, 0, v56, 0LL, 0LL);
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
  if ( (byte_4187325 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CommandCodeMaster___, gifts);
    sub_B2C35C(&Method_DataManager_GetMaster_EquipMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    this = (MissionListViewManager_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    byte_4187325 = 1;
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
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v24 || !this )
        goto LABEL_87;
      this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                                           (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v57, 0LL);
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
              this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            sub_B2C434(this, gifts);
          }
        }
      }
      goto LABEL_86;
    }
LABEL_88:
    v49 = sub_B2C460(this);
    sub_B2C400(v49, 0LL);
  }
  if ( Gift__IsCommandCode(name_high, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommandCodeMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v24 || !this )
        goto LABEL_87;
      this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &v54,
                                           *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                                           (const MethodInfo_24E412C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
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
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v58, 0LL);
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
      this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( gifts->max_length > idx )
      {
        if ( !*(_QWORD *)v24 || !this )
          goto LABEL_87;
        v46 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v46 )
        {
          v47 = v46;
          this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EquipMaster___);
  if ( gifts->max_length <= idx )
    goto LABEL_88;
  if ( !*(_QWORD *)v24 || !this )
    goto LABEL_87;
  this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                       &v51,
                                       *(_DWORD *)(*(_QWORD *)v24 + 24LL),
                                       (const MethodInfo_24E412C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
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
  __int64 v17; // x1
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
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v43; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21

  if ( (byte_4187328 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, name);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__, v13);
    sub_B2C35C(&MissionListViewManager___c__DisplayClass56_0_TypeInfo, v14);
    byte_4187328 = 1;
  }
  v15 = sub_B2C42C(MissionListViewManager___c__DisplayClass56_0_TypeInfo);
  MissionListViewManager___c__DisplayClass56_0___ctor((MissionListViewManager___c__DisplayClass56_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  *(_QWORD *)(v15 + 16) = name;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)name, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 32) = gifts;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)gifts, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v15 + 48) = afterDetail;
  *(_DWORD *)(v15 + 40) = idx;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v15 + 48),
    (System_Int32_array **)afterDetail,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v43 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
  v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v15,
    Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(touchBlockObj, v17);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v45, 0LL);
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
  __int64 v18; // x1
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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  QuestRewardInfo_o *v37; // x22
  __int64 v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x8
  __int64 v46; // x9
  __int64 v47; // x8
  __int64 v48; // x9
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v50; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v52; // x21
  __int64 v53; // x0

  if ( (byte_4187327 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v11);
    sub_B2C35C(&QuestRewardInfo_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__, v14);
    sub_B2C35C(&MissionListViewManager___c__DisplayClass55_0_TypeInfo, v15);
    byte_4187327 = 1;
  }
  v16 = sub_B2C42C(MissionListViewManager___c__DisplayClass55_0_TypeInfo);
  MissionListViewManager___c__DisplayClass55_0___ctor((MissionListViewManager___c__DisplayClass55_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 32) = gifts;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)gifts, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v16 + 48) = afterDetail;
  *(_DWORD *)(v16 + 40) = idx;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v16 + 48),
    (System_Int32_array **)afterDetail,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v37 = (QuestRewardInfo_o *)sub_B2C42C(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v37, 0LL);
  *(_QWORD *)(v16 + 16) = v37;
  v38 = v16 + 16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)v37, v39, v40, v41, v42, v43, v44);
  if ( !*(_QWORD *)(v16 + 16) )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)(v16 + 16) + 16LL) = 5;
  if ( !*(_QWORD *)v38 )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)v38 + 20LL) = equipId;
  v45 = *(_QWORD *)(v16 + 32);
  if ( !v45 )
    goto LABEL_16;
  v46 = *(int *)(v16 + 40);
  if ( (unsigned int)v46 >= *(_DWORD *)(v45 + 24) )
  {
    v53 = sub_B2C460(touchBlockObj);
    sub_B2C400(v53, 0LL);
  }
  v47 = *(_QWORD *)(v45 + 8 * v46 + 32);
  if ( !v47 )
    goto LABEL_16;
  v48 = *(_QWORD *)(v16 + 16);
  if ( !v48 )
    goto LABEL_16;
  *(_DWORD *)(v48 + 24) = *(_DWORD *)(v47 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v50 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v50 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v50->static_fields->DEFAULT_FADE_TIME;
  v52 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v16,
    Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_16:
    sub_B2C434(touchBlockObj, v18);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v52, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v23; // x1
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
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v43; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21

  if ( (byte_418732A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, userSvtID);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__, v19);
    sub_B2C35C(&MissionListViewManager___c__DisplayClass58_0_TypeInfo, v20);
    byte_418732A = 1;
  }
  v21 = sub_B2C42C(MissionListViewManager___c__DisplayClass58_0_TypeInfo);
  MissionListViewManager___c__DisplayClass58_0___ctor((MissionListViewManager___c__DisplayClass58_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_10;
  *(_DWORD *)(v21 + 16) = giftType;
  *(_QWORD *)(v21 + 24) = userSvtID;
  *(_QWORD *)(v21 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_BYTE *)(v21 + 40) = isDoEffect;
  *(_BYTE *)(v21 + 41) = isNew;
  *(_QWORD *)(v21 + 48) = gifts;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 48), (System_Int32_array **)gifts, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v21 + 64) = afterDetail;
  *(_DWORD *)(v21 + 56) = idx;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v21 + 64),
    (System_Int32_array **)afterDetail,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v43 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
  v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v21,
    Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(touchBlockObj, v23);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v45, 0LL);
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
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  QuestRewardInfo_o *v41; // x24
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 v50; // x9
  __int64 v51; // x8
  __int64 v52; // x9
  unsigned int ItemEffectId; // w0
  const MethodInfo *v54; // x4
  __int64 v55; // x8
  __int64 v56; // x8
  int v57; // w10
  unsigned int v58; // w9
  __int64 v59; // x10
  __int64 v60; // x11
  __int64 v61; // x11
  __int64 v62; // x10
  CommonUI_o *v63; // x20
  AvalonSceneManager_c *v64; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v66; // x21
  __int64 v67; // x0

  if ( (byte_4187329 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&itemId);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_B2C35C(&QuestRewardInfo_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__, v16);
    sub_B2C35C(&MissionListViewManager___c__DisplayClass57_0_TypeInfo, v17);
    byte_4187329 = 1;
  }
  v18 = sub_B2C42C(MissionListViewManager___c__DisplayClass57_0_TypeInfo);
  MissionListViewManager___c__DisplayClass57_0___ctor((MissionListViewManager___c__DisplayClass57_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_34;
  *(_QWORD *)(v18 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 40) = gifts;
  v27 = (__int64 *)(v18 + 40);
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)gifts, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v18 + 56) = afterDetail;
  v34 = v18 + 32;
  *(_DWORD *)(v18 + 48) = idx;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v18 + 56),
    (System_Int32_array **)afterDetail,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (QuestRewardInfo_o *)sub_B2C42C(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v41, 0LL);
  *(_QWORD *)(v18 + 32) = v41;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
  v48 = *(_QWORD *)(v18 + 32);
  if ( !v48 )
    goto LABEL_34;
  *(_DWORD *)(v48 + 16) = 2;
  if ( !*(_QWORD *)v34 )
    goto LABEL_34;
  *(_DWORD *)(*(_QWORD *)v34 + 20LL) = itemId;
  v49 = *(_QWORD *)(v18 + 40);
  if ( !v49 )
    goto LABEL_34;
  v50 = *(int *)(v18 + 48);
  if ( (unsigned int)v50 >= *(_DWORD *)(v49 + 24) )
    goto LABEL_35;
  v51 = *(_QWORD *)(v49 + 8 * v50 + 32);
  if ( !v51 )
    goto LABEL_34;
  v52 = *(_QWORD *)(v18 + 32);
  if ( !v52 )
    goto LABEL_34;
  *(_DWORD *)(v52 + 24) = *(_DWORD *)(v51 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v18 + 32), 0LL);
  *(_DWORD *)(v18 + 16) = ItemEffectId;
  v20 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_34;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v20,
         (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v18 + 40),
      *(_DWORD *)(v18 + 48) + 1,
      *(System_Action_o **)(v18 + 56),
      v54);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_34;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)Instance,
    *(_DWORD *)(v18 + 16),
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  v55 = *(_QWORD *)(v18 + 32);
  if ( !v55 )
    goto LABEL_34;
  *(_DWORD *)(v55 + 24) = 0;
  v56 = *v27;
  if ( !*v27 )
    goto LABEL_34;
  v57 = *(_DWORD *)(v56 + 24);
  if ( v57 >= 1 )
  {
    v58 = 0;
    while ( v58 < v57 )
    {
      v59 = *(_QWORD *)(v18 + 40);
      if ( !v59 )
        goto LABEL_34;
      v60 = *(int *)(v18 + 48);
      if ( (unsigned int)v60 >= *(_DWORD *)(v59 + 24) )
        break;
      v61 = *(_QWORD *)(v59 + 8 * v60 + 32);
      if ( !v61 )
        goto LABEL_34;
      v62 = *(_QWORD *)(v56 + 8LL * (int)v58 + 32);
      if ( !v62 )
        goto LABEL_34;
      if ( *(_DWORD *)(v61 + 24) == *(_DWORD *)(v62 + 24) )
      {
        if ( !*(_QWORD *)v34 )
          goto LABEL_34;
        *(_DWORD *)(*(_QWORD *)v34 + 24LL) += *(_DWORD *)(v62 + 28);
      }
      v57 = *(_DWORD *)(v56 + 24);
      if ( (int)++v58 >= v57 )
        goto LABEL_28;
    }
LABEL_35:
    v67 = sub_B2C460(Instance);
    sub_B2C400(v67, 0LL);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v63 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v64 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v64 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v64->static_fields->DEFAULT_FADE_TIME;
  v66 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v18,
    Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v63 )
LABEL_34:
    sub_B2C434(Instance, v20);
  CommonUI__maskFadeout(v63, 1, DEFAULT_FADE_TIME, v66, 0LL);
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
  struct GetSvts_array *getSvtList; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_418732B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&callCnt);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__, v9);
    sub_B2C35C(&MissionListViewManager___c__DisplayClass59_0_TypeInfo, v10);
    byte_418732B = 1;
  }
  v11 = sub_B2C42C(MissionListViewManager___c__DisplayClass59_0_TypeInfo);
  MissionListViewManager___c__DisplayClass59_0___ctor((MissionListViewManager___c__DisplayClass59_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = callback;
  *(_DWORD *)(v11 + 24) = callCnt;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_12;
  if ( *(_DWORD *)(v11 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v28 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
    v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v11,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v30, 0LL);
      return;
    }
LABEL_12:
    sub_B2C434(v12, v13);
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
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v24; // x20

  if ( (byte_418732C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__, v6);
    sub_B2C35C(&MissionListViewManager___c__DisplayClass60_0_TypeInfo, v7);
    byte_418732C = 1;
  }
  v8 = sub_B2C42C(MissionListViewManager___c__DisplayClass60_0_TypeInfo);
  MissionListViewManager___c__DisplayClass60_0___ctor((MissionListViewManager___c__DisplayClass60_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  svtRewardComp = this->fields.svtRewardComp;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
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
    sub_B2C434(v9, v10);
  ServantRewardAction__Play(svtRewardComp, v24, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  int32_t v10; // w20
  System_String_o *v11; // x0
  int32_t v12; // w21
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = objectId;
  if ( (byte_418732D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCostumeMaster___, resultEntity);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_418732D = 1;
  }
  Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_9;
  v8 = Master_WarQuestSelectionMaster;
  v9 = System_String__Substring_44369268(
         Master_WarQuestSelectionMaster,
         0,
         Master_WarQuestSelectionMaster->fields.m_stringLength - 2,
         0LL);
  v10 = System_Int32__Parse(v9, 0LL);
  v11 = System_String__Substring(v8, v8->fields.m_stringLength - 2, 0LL);
  v12 = System_Int32__Parse(v11, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  return ServantCostumeMaster__TryGetEntity(
           (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
           resultEntity,
           v10,
           v12,
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

  if ( (byte_4187318 & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewManager_TypeInfo, method);
    sub_B2C35C(&Method_TransitionCalculator_float__Update__, v3);
    byte_4187318 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v6 = (System_Int32_array **)MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = (struct AlphaTransitionCalculator_o *)v6;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator, v6, v7, v8, v9, v10, v11, v12);
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
  v15 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_26488C4 *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v15;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_27;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0LL) )
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
    sub_B2C434(rewardIconAlphaCalculator, v13);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0LL);
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

  if ( (byte_4187316 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187316 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4187317 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187317 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B2C728(v7);
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
    sub_B2C434(this, method);
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
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4185D2B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__, v4);
    byte_4185D2B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__LoadEquipGetEffect(v8, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4185D2C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__, v4);
    byte_4185D2C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__OpenEquipGetEffect(v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185D2D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185D2D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4185D2E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__, v4);
    byte_4185D2E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__LoadCostumeReleaseEffect(v8, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x21
  System_String_o *name; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4185D2F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__, v4);
    byte_4185D2F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__OpenCostumeReleaseEffect(v8, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185D30 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185D30 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4185D31 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v5);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__, v6);
    byte_4185D31 = 1;
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
  v12 = v10;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v12, _9__1, 1, 0LL);
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
  __int64 v13; // x20
  System_String_o *transform; // x0
  __int64 v15; // x1
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v33; // x21
  struct MissionListViewManager_o *_4__this; // x8
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  QuestRewardItemAction_o *v42; // x19
  System_Action_o *v43; // x21
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4185D32 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v5);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__, v11);
    sub_B2C35C(&MissionListViewManager___c__DisplayClass57_1_TypeInfo, v12);
    byte_4185D32 = 1;
  }
  v13 = sub_B2C42C(MissionListViewManager___c__DisplayClass57_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = data;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)data, v22, v23, v24, v25, v26, v27);
  v28 = *(AssetData_o **)(v13 + 24);
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
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v31, 0LL);
  if ( !v28 )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               v28,
                                                                               transform,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   Object_WarBoardWaitTimeSetting,
                                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_17;
  v33 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v33, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v33,
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  *(_QWORD *)(v13 + 16) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), Component_UIWidget, v36, v37, v38, v39, v40, v41);
  transform = *(System_String_o **)(v13 + 16);
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        v42 = *(QuestRewardItemAction_o **)(v13 + 16),
        v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v43,
          (Il2CppObject *)v13,
          Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !v42) )
  {
LABEL_17:
    sub_B2C434(transform, v15);
  }
  QuestRewardItemAction__Play(v42, 0, v43, 0.0, 0LL);
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

  if ( (byte_4185D33 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185D33 = 1;
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
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30152684(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_13:
    sub_B2C434(mRewardItemAction, method);
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
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4185D34 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v3);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__, v4);
    byte_4185D34 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  SummonAssetManager__LoadSummonAssets(v8, _9__1, 0LL);
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
  __int64 v13; // x1
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  UserServantEntity_o *v16; // x21
  struct MissionListViewManager_o *v17; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct MissionListViewManager_o *v24; // x8
  ServantRewardAction_o *svtRewardComp; // x20
  __int64 v26; // x22
  __int64 v27; // x23
  int32_t v28; // w0
  __int128 v29; // q1
  int32_t v30; // w22
  int64_t v31; // x0
  __int64 v32; // x8
  int64_t v33; // x21
  bool isNew; // w5
  int32_t v35; // w3
  bool v36; // w6
  int32_t v37; // w7
  ServantRewardAction_o *v38; // x0
  int32_t v39; // w1
  int64_t v40; // x2
  UserServantEntity_o *v41; // x0
  struct MissionListViewManager_o *v42; // x20
  UserServantEntity_o *v43; // x21
  struct MissionListViewManager_o *v44; // x8
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct MissionListViewManager_o *v51; // x8
  ServantRewardAction_o *v52; // x20
  __int128 v53; // q1
  bool v54; // w2
  int64_t v55; // x1
  bool v56; // w3
  int32_t v57; // w4
  ServantRewardAction_o *v58; // x0
  int32_t v59; // w0
  __int128 v60; // q1
  int32_t v61; // w22
  int64_t v62; // x0
  __int64 v63; // x8
  int64_t v64; // x21
  __int128 v65; // q1
  System_Action_o *_9__2; // x21
  MissionListViewManager_o *v67; // x20
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+90h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_4185D35 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__, v11);
    byte_4185D35 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                 this->fields.userSvtID,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v16 = Entity;
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v17 = this->fields.__4__this;
      if ( v17 )
      {
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                                      (SummonAssetManager_o *)Master_WarQuestSelectionMaster,
                                                      v17->fields.instantiatingPOS,
                                                      0,
                                                      0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&_4__this->fields.svtRewardComp,
              (System_Int32_array **)Master_WarQuestSelectionMaster,
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
                svtRewardComp = v24->fields.svtRewardComp;
                v27 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
                v26 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
                if ( this->fields.isDoEffect )
                {
                  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v79.fields.currentCryptoKey = v27;
                  *(_QWORD *)&v79.fields.fakeValue = v26;
                  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v79, 0LL);
                  v29 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
                  v30 = v28;
                  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v78.fields.fakeValue = v29;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v77 = v78;
                  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v77, 0LL);
                  v32 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v80.fields.fakeValue = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
                  v33 = v31;
                  *(_QWORD *)&v80.fields.currentCryptoKey = v32;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                     v80,
                                                     0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v35 = Master_WarQuestSelectionMaster;
                    v36 = 1;
                    v37 = 14;
                    v38 = svtRewardComp;
                    v39 = v30;
                    v40 = v33;
LABEL_46:
                    ServantRewardAction__Setup(v38, v39, v40, v35, 1, isNew, v36, v37, 0LL);
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
                  *(_QWORD *)&v81.fields.currentCryptoKey = v27;
                  *(_QWORD *)&v81.fields.fakeValue = v26;
                  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v81, 0LL);
                  v60 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
                  v61 = v59;
                  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v78.fields.fakeValue = v60;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v76 = v78;
                  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v76, 0LL);
                  v63 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v82.fields.fakeValue = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
                  v64 = v62;
                  *(_QWORD *)&v82.fields.currentCryptoKey = v63;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                     v82,
                                                     0LL);
                  if ( svtRewardComp )
                  {
                    v35 = Master_WarQuestSelectionMaster;
                    v37 = 6;
                    v38 = svtRewardComp;
                    v39 = v61;
                    v40 = v64;
                    isNew = 0;
                    v36 = 0;
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
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  }
  Master_WarQuestSelectionMaster = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v41 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
          this->fields.userSvtID,
          (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v42 = this->fields.__4__this;
  v43 = v41;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v44 = this->fields.__4__this;
  if ( !v44 )
    goto LABEL_57;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                              (SummonAssetManager_o *)Master_WarQuestSelectionMaster,
                                              v44->fields.instantiatingPOS,
                                              0,
                                              0LL);
  if ( !v42 )
    goto LABEL_57;
  v42->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v42->fields.svtRewardComp,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = this->fields.__4__this;
  if ( !v51 || !v43 )
    goto LABEL_57;
  v52 = v51->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v53 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
    *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v78.fields.fakeValue = v53;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v75 = v78;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v75, 0LL);
    if ( !v52 )
      goto LABEL_57;
    v54 = this->fields.isNew;
    v55 = Master_WarQuestSelectionMaster;
    v56 = 1;
    v57 = 14;
    v58 = v52;
  }
  else
  {
    v65 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
    *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v78.fields.fakeValue = v65;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v74 = v78;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v74, 0LL);
    if ( !v52 )
      goto LABEL_57;
    v55 = Master_WarQuestSelectionMaster;
    v57 = 6;
    v58 = v52;
    v54 = 0;
    v56 = 0;
  }
  ServantRewardAction__SetupCommandCode_28839180(v58, v55, v54, v56, v57, 0LL);
LABEL_53:
  _9__2 = this->fields.__9__2;
  v67 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !v67 )
    goto LABEL_57;
  MissionListViewManager__SvtEffCaller(v67, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8

  if ( (byte_4185D36 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, method);
    byte_4185D36 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  __int64 v11; // x1
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v15; // x8
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *v17; // x21
  UserServantEntity_o *v18; // x20
  struct MissionListViewManager_o *v19; // x8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct MissionListViewManager_o *v26; // x8
  struct GetSvts_array *v27; // x8
  __int64 v28; // x9
  struct MissionListViewManager_o *v29; // x9
  ServantRewardAction_o *svtRewardComp; // x21
  __int64 v31; // x22
  __int64 v32; // x23
  int32_t v33; // w0
  __int128 v34; // q1
  int32_t v35; // w22
  int64_t v36; // x0
  __int64 v37; // x8
  int64_t v38; // x20
  struct MissionListViewManager_o *v39; // x8
  struct GetSvts_array *v40; // x8
  __int64 v41; // x9
  GetSvts_o *v42; // x8
  int32_t v43; // w0
  __int128 v44; // q1
  int32_t v45; // w22
  int64_t v46; // x0
  __int64 v47; // x8
  int64_t v48; // x20
  System_Action_o *_9__1; // x21
  MissionListViewManager_o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4185D37 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__, v9);
    byte_4185D37 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_45;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_46;
  v15 = getSvtList->m_Items[callCnt];
  if ( !v15 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             Master_WarQuestSelectionMaster,
             v15->fields.userSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v17 = this->fields.__4__this;
  v18 = Entity;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SummonAssetManager__InstantiateSvtGetPrefab((SummonAssetManager_o *)Master_WarQuestSelectionMaster, v19->fields.instantiatingPOS, 0, 0LL);
  if ( !v17 )
    goto LABEL_45;
  v17->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v17->fields.svtRewardComp,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_45;
  v27 = v26->fields.getSvtList;
  if ( !v27 )
    goto LABEL_45;
  v28 = this->fields.callCnt;
  if ( (unsigned int)v28 >= v27->max_length )
  {
LABEL_46:
    v57 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v57, 0LL);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v27->m_Items[v28];
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_WarQuestSelectionMaster, 0LL);
  v29 = this->fields.__4__this;
  if ( !v29 || !v18 )
    goto LABEL_45;
  svtRewardComp = v29->fields.svtRewardComp;
  v32 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v63.fields.currentCryptoKey = v32;
    *(_QWORD *)&v63.fields.fakeValue = v31;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63, 0LL);
    v44 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
    v45 = v43;
    *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v60.fields.fakeValue = v44;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v58 = v60;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
    v47 = *(_QWORD *)&v18->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v64.fields.fakeValue = *(_QWORD *)&v18->fields.limitCount.fields.fakeValue;
    v48 = v46;
    *(_QWORD *)&v64.fields.currentCryptoKey = v47;
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64, 0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v45, v48, (int32_t)Master_WarQuestSelectionMaster, 1, 0, 0, 2, 0LL);
      goto LABEL_41;
    }
LABEL_45:
    sub_B2C434(Master_WarQuestSelectionMaster, v11);
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v32;
  *(_QWORD *)&v61.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61, 0LL);
  v34 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
  v35 = v33;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v34;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v59 = v60;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v59, 0LL);
  v37 = *(_QWORD *)&v18->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v62.fields.fakeValue = *(_QWORD *)&v18->fields.limitCount.fields.fakeValue;
  v38 = v36;
  *(_QWORD *)&v62.fields.currentCryptoKey = v37;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62, 0LL);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_45;
  v40 = v39->fields.getSvtList;
  if ( !v40 )
    goto LABEL_45;
  v41 = this->fields.callCnt;
  if ( (unsigned int)v41 >= v40->max_length )
    goto LABEL_46;
  v42 = v40->m_Items[v41];
  if ( !v42 || !svtRewardComp )
    goto LABEL_45;
  ServantRewardAction__Setup(
    svtRewardComp,
    v35,
    v38,
    (int32_t)Master_WarQuestSelectionMaster,
    1,
    v42->fields.isNew,
    1,
    10,
    0LL);
LABEL_41:
  _9__1 = this->fields.__9__1;
  v50 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v50 )
    goto LABEL_45;
  MissionListViewManager__SvtEffCaller(v50, _9__1, 0LL);
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
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4185D38 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__, v5);
    byte_4185D38 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v8 )
    sub_B2C434(Instance, v7);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
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
  if ( (byte_4185D39 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass60_0_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185D39 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass60_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_B2C434(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}