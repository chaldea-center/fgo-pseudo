void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  MissionListViewManager_c *v1; // x8

  if ( (byte_42AFA7E & 1) == 0 )
  {
    sub_B52984(&MissionListViewManager_TypeInfo);
    byte_42AFA7E = 1;
  }
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM = 7;
  v1 = MissionListViewManager_TypeInfo;
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  v1->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
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

  if ( (byte_42AFA7D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AFA7D = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rewardItemGetEffectPlayList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.rewardItemGetEffectPlayList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AFA73 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFA73 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
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

  if ( (byte_42AFA71 & 1) == 0 )
  {
    sub_B52984(&Method_MissionListViewManager_CloseItemDetail__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFA71 = 1;
  }
  v3 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_MissionListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AFA72 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFA72 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
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

  if ( (byte_42AFA68 & 1) == 0 )
  {
    sub_B52984(&AlphaTransitionCalculator_TypeInfo);
    sub_B52984(&MissionListViewManager_TypeInfo);
    byte_42AFA68 = 1;
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
  v5 = (AlphaTransitionCalculator_o *)sub_B52A54(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0LL);
  return v5;
}


void __fastcall MissionListViewManager__EndItemGetEffectAction(
        MissionListViewManager_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v5; // x19
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_42AFA75 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__);
    sub_B52984(&MissionListViewManager___c__DisplayClass54_0_TypeInfo);
    byte_42AFA75 = 1;
  }
  v5 = sub_B52A54(MissionListViewManager___c__DisplayClass54_0_TypeInfo);
  MissionListViewManager___c__DisplayClass54_0___ctor((MissionListViewManager___c__DisplayClass54_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = afterDetail;
  sub_B52920(
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
    goto LABEL_10;
  System_Collections_Generic_List_int___Clear(
    rewardItemGetEffectPlayList,
    (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B52A5C(rewardItemGetEffectPlayList, v7);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v23, 0LL);
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
        const MethodInfo_1F6F894 *method)
{
  Il2CppClass *_0_System_Collections_Generic_List_TObject; // x19
  System_Collections_Generic_List_TObject__o *v5; // x19
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v8; // x3
  Il2CppObject *current; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x0
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  const MethodInfo **v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF
  __int64 v19; // [xsp+48h] [xbp-28h]

  if ( (byte_42B418B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B418B = 1;
  }
  memset(&v18, 0, sizeof(v18));
  HIDWORD(v19) = 0;
  _0_System_Collections_Generic_List_TObject = method->rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE2(_0_System_Collections_Generic_List_TObject->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_0_System_Collections_Generic_List_TObject_);
  v5 = (System_Collections_Generic_List_TObject__o *)sub_B52A54(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v10 )
    {
      if ( !current )
        sub_B52A5C(v10, v11);
      v12 = ((__int64 (__fastcall *)(Il2CppObject *, MethodInfo *))method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_->methodPointer)(
              current,
              method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      if ( !v5 )
        sub_B52A5C(v12, v12);
      ((void (__fastcall *)(System_Collections_Generic_List_TObject__o *, __int64, MethodInfo *))method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add->methodPointer)(
        v5,
        v12,
        method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add);
    }
  }
  v19 = 0x10000004CLL;
  v17.fields.list = (struct System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Enumerator_GameObject__TypeInfo;
  if ( *(_WORD *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
        goto LABEL_19;
    }
    v15 = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->vtable._0_Equals.method + 2 * *p_offset;
  }
  else
  {
LABEL_19:
    v15 = (const MethodInfo **)sub_AEB880(&v17, System_IDisposable_TypeInfo, 0LL, v8);
  }
  ((void (__fastcall *)(int32_t *, const MethodInfo *))*v15)(&v17.fields.index, v15[1]);
  if ( (_DWORD)v19 == 76 )
    v19 = 76LL;
  return v5;
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

  if ( (byte_42AFA6C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFA6C = 1;
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
          sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B52A5C(gameObject, v7);
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
  if ( (byte_42AFA6F & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&MissionInfoMaker_TypeInfo);
    this = (MissionListViewManager_o *)sub_B52984(&Method_MissionListViewManager_CloseItemDetail__);
    byte_42AFA6F = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v6 = resultEntity;
    v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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

  if ( (byte_42AFA70 & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B52984(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_B52984(&MissionInfoMaker_TypeInfo);
    sub_B52984(&Method_MissionListViewManager_CloseItemDetail__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFA70 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v7 = (EquipEntity_o *)entity;
    v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
  const MethodInfo *v11; // x4

  if ( (byte_42AFA6B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__);
    sub_B52984(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_B52984(&Method_MissionListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42AFA6B = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_1F6F894 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_15:
    sub_B52A5C(ObjectList_object, v4);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v9 = (MissionListViewObject_o *)v5->fields._items->m_Items[v7];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v9, 0LL) )
    {
      v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !v9 )
        goto LABEL_15;
      ++v8;
      MissionListViewObject__Init(v9, 4, v10, this->fields.listInDelay, 1, v11);
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
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
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
  const MethodInfo *v14; // x4
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AFA6A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__);
    sub_B52984(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
    sub_B52984(&Method_MissionListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42AFA6A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList_object = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewManager__GetObjectList_object_(this, (const MethodInfo_1F6F894 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_B52A5C(0LL, v8);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList_object,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v11, delay, 1, v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_24544680(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_24544288(this, mode, v10);
}


void __fastcall MissionListViewManager__SetMode_24544288(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t v9; // w1

  if ( (byte_42AFA69 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_11516/*"RequestInto"*/);
    byte_42AFA69 = 1;
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
        sub_B52A5C(gameObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11516/*"RequestInto"*/,
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


void __fastcall MissionListViewManager__SetMode_24544620(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_24544288(this, mode, v11);
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
  if ( (byte_42AFA6D & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_B52984(&MissionListViewObject_TypeInfo);
    byte_42AFA6D = 1;
  }
  if ( !obj
    || (v7 = *(&MissionListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != MissionListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v9; // x8
  unsigned int MasterName_k__BackingField; // w9
  int v11; // w8
  GiftEntity_o *v12; // x20
  ItemEntity_o *Entity; // x20
  WebViewManager_o *v14; // x0
  CommonUI_o *v15; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v20; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v21; // x23
  struct GiftEntity_array *giftEnts; // x8
  const MethodInfo *v23; // x1
  int32_t type; // w0
  GiftMaster_o *v25; // x22
  bool IsServantEquip; // w23
  WebViewManager_o *v27; // x21
  ServantStatusDialog_EndDelegate_o *v28; // x22
  CommonUI_o *v29; // x0
  GiftEntity_o *v30; // x2
  ServantStatusDialog_EndDelegate_o *v31; // x3
  int32_t v32; // w0
  bool v33; // w23
  CommonUI_o *v34; // x22
  ServantStatusDialog_EndDelegate_o *v35; // x21
  CommandCodeEntity_o *cmdEnt; // x20
  WebViewManager_o *v37; // x0
  int32_t v38; // w0
  const MethodInfo *v39; // x1
  CommonUI_o *v40; // x21
  ServantStatusDialog_EndDelegate_o *v41; // x22
  struct System_String_o *v42; // x20
  __int64 v43; // x23
  int32_t v44; // w20
  ServantStatusDialog_EndDelegate_o *v45; // x22
  CommonUI_o *v46; // x0
  int32_t v47; // w2
  ServantStatusDialog_EndDelegate_o *v48; // x3
  struct ServantEntity_o *svtEnt; // x8
  __int64 v50; // x20
  __int64 v51; // x21
  int32_t v52; // w20
  ServantStatusDialog_EndDelegate_o *v53; // x21
  const MethodInfo *v54; // x2
  int32_t objectId; // w1
  int32_t v56; // w0
  struct GiftEntity_array *v57; // x8
  GiftEntity_o *v58; // x8
  int32_t v59; // w0
  const MethodInfo *v60; // x2
  __int64 v61; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_42AFA6E & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_MissionListViewManager_CloseCommandCodeDetail__);
    sub_B52984(&Method_MissionListViewManager_CloseItemDetail__);
    sub_B52984(&Method_MissionListViewManager_CloseServantStatusDetail__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AFA6E = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v20 = (CommonUI_o *)Instance;
    v21 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v20 )
      goto LABEL_81;
    CommonUI__OpenItemDetailDialog_18223668(v20, nameTxt, rewardExtraDetailTxt, v21, 0LL);
    return;
  }
  if ( rewardType != 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
  v9 = selectItem->fields.eventMissionEnt;
  if ( !v9 )
    goto LABEL_81;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_81;
  Master_WarQuestSelectionMaster = (GiftMaster_o *)GiftMaster__GetGiftListById(
                                                     Master_WarQuestSelectionMaster,
                                                     v9->fields.giftId,
                                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterName_k__BackingField = (unsigned int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v11 = this->fields.alphaAnimCnt % (int)MasterName_k__BackingField;
  if ( v11 >= MasterName_k__BackingField )
    goto LABEL_82;
  v12 = (GiftEntity_o *)*((_QWORD *)&Master_WarQuestSelectionMaster->fields.list + v11);
  if ( !v12 )
    goto LABEL_81;
  if ( v12->fields._IsReplacedData_k__BackingField )
    goto LABEL_19;
  giftEnts = selectItem->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_81;
  if ( giftEnts->max_length != 1 )
  {
    type = v12->fields.type;
    if ( type == 2 )
    {
LABEL_19:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 v12->fields.objectId,
                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_24;
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                         v12->fields.objectId,
                                                         (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      v25 = Master_WarQuestSelectionMaster;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
      v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v28 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v28,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v27 )
          goto LABEL_81;
        v29 = (CommonUI_o *)v27;
        v30 = v12;
        v31 = v28;
LABEL_47:
        CommonUI__OpenServantStatusDialog_18132752(v29, 7, v30, v31, 0LL);
        return;
      }
      v43 = *(_QWORD *)&v25->fields._MasterKind_k__BackingField;
      v42 = v25->fields._MasterName_k__BackingField;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v62.fields.currentCryptoKey = v43;
      *(_QWORD *)&v62.fields.fakeValue = v42;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v62, 0LL);
      v45 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v45,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v27 )
        goto LABEL_81;
      v46 = (CommonUI_o *)v27;
      v47 = v44;
      v48 = v45;
      goto LABEL_69;
    }
    if ( Gift__IsCommandCode(v12->fields.type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      cmdEnt = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                        v12->fields.objectId,
                                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_56;
    }
    if ( Gift__IsCostumeRelease(v12->fields.type, 0LL) )
    {
      objectId = v12->fields.objectId;
LABEL_77:
      MissionListViewManager__OpenCostumeReleaseDetail(this, objectId, v54);
      return;
    }
    goto LABEL_78;
  }
  if ( MissionListViewItem__get_Type(selectItem, v6) == 2 )
  {
    v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Entity = selectItem->fields.itemEnt;
LABEL_24:
    v15 = (CommonUI_o *)v14;
    v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( v15 )
    {
      CommonUI__OpenItemDetailDialog(v15, Entity, v16, 50, 0LL);
      return;
    }
LABEL_81:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  }
  v32 = MissionListViewItem__get_Type(selectItem, v23);
  if ( Gift__IsServant(v32, 0LL) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)selectItem->fields.svtEnt;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_81;
    v33 = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v34 = (CommonUI_o *)Master_WarQuestSelectionMaster;
    if ( v33 )
    {
      v35 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v35,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v34 )
        goto LABEL_81;
      v29 = v34;
      v30 = v12;
      v31 = v35;
      goto LABEL_47;
    }
    svtEnt = selectItem->fields.svtEnt;
    if ( !svtEnt )
      goto LABEL_81;
    v51 = *(_QWORD *)&svtEnt->fields.id.fields.currentCryptoKey;
    v50 = *(_QWORD *)&svtEnt->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v63.fields.currentCryptoKey = v51;
    *(_QWORD *)&v63.fields.fakeValue = v50;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v63, 0LL);
    v53 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v53,
      (Il2CppObject *)this,
      Method_MissionListViewManager_CloseServantStatusDetail__,
      0LL);
    if ( !v34 )
      goto LABEL_81;
    v46 = v34;
    v47 = v52;
    v48 = v53;
LABEL_69:
    CommonUI__OpenServantStatusDialog_18172016(v46, 7, v47, v48, 0LL);
    return;
  }
  v38 = MissionListViewItem__get_Type(selectItem, v6);
  if ( !Gift__IsCommandCode(v38, 0LL) )
  {
    v56 = MissionListViewItem__get_Type(selectItem, v39);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)Gift__IsCostumeRelease(v56, 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v57 = selectItem->fields.giftEnts;
      if ( !v57 )
        goto LABEL_81;
      if ( v57->max_length )
      {
        v58 = v57->m_Items[0];
        if ( !v58 )
          goto LABEL_81;
        objectId = v58->fields.objectId;
        goto LABEL_77;
      }
LABEL_82:
      v61 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v61, 0LL);
    }
LABEL_78:
    v59 = MissionListViewItem__get_Type(selectItem, v6);
    if ( Gift__IsEquip(v59, 0LL) )
      MissionListViewManager__OpenEquipDetail(this, v12->fields.objectId, v60);
    return;
  }
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  cmdEnt = selectItem->fields.cmdEnt;
LABEL_56:
  v40 = (CommonUI_o *)v37;
  v41 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v41,
    (Il2CppObject *)this,
    Method_MissionListViewManager_CloseCommandCodeDetail__,
    0LL);
  if ( !v40 )
    goto LABEL_81;
  CommonUI__OpenServantEquipStatusDialog_18174448(v40, 25, cmdEnt, 0, v41, 0LL, 0LL);
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
  int32_t max_length; // w8
  Il2CppClass **v10; // x24
  Il2CppClass *v11; // x8
  char *v12; // x24
  Il2CppClass *v13; // t1
  int32_t name_high; // w23
  const MethodInfo *v15; // x4
  int v16; // w24
  GetSvts_array *getSvtList; // x24
  struct System_String_o *age; // x25
  __int64 v19; // x26
  const MethodInfo *v20; // x3
  int32_t v21; // w25
  UnityEngine_Object_o *getCommandCodeList; // x24
  int64_t userSvtId; // x24
  bool isNew; // w25
  bool Eff; // w0
  GetCommandCodes_array *v26; // x24
  struct System_String_o *v27; // x25
  __int64 v28; // x26
  const MethodInfo *v29; // x3
  int32_t v30; // w25
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x5
  WarEntity_o *v34; // x0
  WarEntity_o *v35; // x23
  const MethodInfo *v36; // x5
  __int64 v37; // x0
  const MethodInfo *v38; // [xsp+0h] [xbp-80h]
  WarEntity_o *v39; // [xsp+10h] [xbp-70h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+18h] [xbp-68h] BYREF
  GetCommandCodes_o *v41; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v42; // [xsp+28h] [xbp-58h] BYREF
  GetSvts_o *data; // [xsp+30h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v8 = this;
  if ( (byte_42AFA74 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EquipMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&MissionInfoMaker_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (MissionListViewManager_o *)sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFA74 = 1;
  }
  data = 0LL;
  entity = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
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
  v10 = &gifts->obj.klass + idx;
  v13 = v10[4];
  v12 = (char *)(v10 + 4);
  v11 = v13;
  if ( !v13 )
    goto LABEL_87;
  name_high = HIDWORD(v11->_1.name);
  if ( Gift__IsServant(name_high, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v12 || !this )
        goto LABEL_87;
      this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           *(_DWORD *)(*(_QWORD *)v12 + 24LL),
                                           (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_87;
        this = (MissionListViewManager_o *)SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
        if ( !entity )
          goto LABEL_87;
        v16 = (int)this;
        this = (MissionListViewManager_o *)SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL);
        if ( ((v16 | (unsigned int)this) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_87;
          getSvtList = v8->fields.getSvtList;
          v19 = *(_QWORD *)&entity->fields.id;
          age = entity->fields.age;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v45.fields.currentCryptoKey = v19;
          *(_QWORD *)&v45.fields.fakeValue = age;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
          if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          }
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v21, v20) )
          {
            this = (MissionListViewManager_o *)entity;
            if ( !entity )
              goto LABEL_87;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                v38);
              return;
            }
LABEL_87:
            sub_B52A5C(this, gifts);
          }
        }
      }
      goto LABEL_86;
    }
LABEL_88:
    v37 = sub_B52A88(this);
    sub_B52A28(v37, 0LL);
  }
  if ( Gift__IsCommandCode(name_high, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommandCodeMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v12 || !this )
        goto LABEL_87;
      this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &v42,
                                           *(_DWORD *)(*(_QWORD *)v12 + 24LL),
                                           (const MethodInfo_23E2334 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_87;
        v26 = v8->fields.getCommandCodeList;
        v28 = *(_QWORD *)&v42->fields.id;
        v27 = v42->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v46.fields.currentCryptoKey = v28;
        *(_QWORD *)&v46.fields.fakeValue = v27;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v46, 0LL);
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetCommandCodeData(v26, &v41, v30, v29) )
        {
          this = (MissionListViewManager_o *)v41;
          if ( v41 )
          {
            userSvtId = v41->fields.userCommandCodeId;
            isNew = v41->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v41, 0LL);
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
    if ( !*(_QWORD *)v12 )
      goto LABEL_87;
    this = (MissionListViewManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         this,
                                         &resultEntity,
                                         *(_DWORD *)(*(_QWORD *)v12 + 24LL),
                                         v31);
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
        v32);
      return;
    }
LABEL_86:
    MissionListViewManager__StartItemGetEffectAction(v8, gifts, idx + 1, afterDetail, v15);
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
      this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( gifts->max_length > idx )
      {
        if ( !*(_QWORD *)v12 || !this )
          goto LABEL_87;
        v34 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                *(_DWORD *)(*(_QWORD *)v12 + 24LL),
                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v34 )
        {
          v35 = v34;
          this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_87;
          if ( CommonUI__IsGetItemEffect((CommonUI_o *)this, v35->fields.id, 0LL) )
          {
            MissionListViewManager__StartRewardItemGetEffect(v8, v35->fields.id, gifts, idx, afterDetail, v36);
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
  this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EquipMaster___);
  if ( gifts->max_length <= idx )
    goto LABEL_88;
  if ( !*(_QWORD *)v12 || !this )
    goto LABEL_87;
  this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                       &v39,
                                       *(_DWORD *)(*(_QWORD *)v12 + 24LL),
                                       (const MethodInfo_23E2334 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_86;
  if ( gifts->max_length <= idx )
    goto LABEL_88;
  if ( !*(_QWORD *)v12 )
    goto LABEL_87;
  MissionListViewManager__StartRewardEquipGetEffect(
    v8,
    *(_DWORD *)(*(_QWORD *)v12 + 24LL),
    gifts,
    idx,
    afterDetail,
    v33);
}


void __fastcall MissionListViewManager__StartRewardCostumeReleaseGetEffect(
        MissionListViewManager_o *this,
        System_String_o *name,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x19
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_42AFA77 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__);
    sub_B52984(&MissionListViewManager___c__DisplayClass56_0_TypeInfo);
    byte_42AFA77 = 1;
  }
  v11 = sub_B52A54(MissionListViewManager___c__DisplayClass56_0_TypeInfo);
  MissionListViewManager___c__DisplayClass56_0___ctor((MissionListViewManager___c__DisplayClass56_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = name;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_B52920(
    (BattleServantConfConponent_o *)(v11 + 48),
    (System_Int32_array **)afterDetail,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v39 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
  v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B52A5C(touchBlockObj, v13);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v41, 0LL);
}


void __fastcall MissionListViewManager__StartRewardEquipGetEffect(
        MissionListViewManager_o *this,
        int32_t equipId,
        GiftEntity_array *gifts,
        int32_t idx,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v11; // x19
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
  QuestRewardInfo_o *v32; // x22
  __int64 v33; // x21
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v45; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v47; // x21
  __int64 v48; // x0

  if ( (byte_42AFA76 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&QuestRewardInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__);
    sub_B52984(&MissionListViewManager___c__DisplayClass55_0_TypeInfo);
    byte_42AFA76 = 1;
  }
  v11 = sub_B52A54(MissionListViewManager___c__DisplayClass55_0_TypeInfo);
  MissionListViewManager___c__DisplayClass55_0___ctor((MissionListViewManager___c__DisplayClass55_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = gifts;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)gifts, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 48) = afterDetail;
  *(_DWORD *)(v11 + 40) = idx;
  sub_B52920(
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
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v32 = (QuestRewardInfo_o *)sub_B52A54(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v32, 0LL);
  *(_QWORD *)(v11 + 16) = v32;
  v33 = v11 + 16;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)(v11 + 16) + 16LL) = 5;
  if ( !*(_QWORD *)v33 )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)v33 + 20LL) = equipId;
  v40 = *(_QWORD *)(v11 + 32);
  if ( !v40 )
    goto LABEL_16;
  v41 = *(int *)(v11 + 40);
  if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 24) )
  {
    v48 = sub_B52A88(touchBlockObj);
    sub_B52A28(v48, 0LL);
  }
  v42 = *(_QWORD *)(v40 + 8 * v41 + 32);
  if ( !v42 )
    goto LABEL_16;
  v43 = *(_QWORD *)(v11 + 16);
  if ( !v43 )
    goto LABEL_16;
  *(_DWORD *)(v43 + 24) = *(_DWORD *)(v42 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v45 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v45->static_fields->DEFAULT_FADE_TIME;
  v47 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_16:
    sub_B52A5C(touchBlockObj, v13);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v47, 0LL);
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
  __int64 v17; // x19
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_42AFA79 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__);
    sub_B52984(&MissionListViewManager___c__DisplayClass58_0_TypeInfo);
    byte_42AFA79 = 1;
  }
  v17 = sub_B52A54(MissionListViewManager___c__DisplayClass58_0_TypeInfo);
  MissionListViewManager___c__DisplayClass58_0___ctor((MissionListViewManager___c__DisplayClass58_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_DWORD *)(v17 + 16) = giftType;
  *(_QWORD *)(v17 + 24) = userSvtID;
  *(_QWORD *)(v17 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v17 + 40) = isDoEffect;
  *(_BYTE *)(v17 + 41) = isNew;
  *(_QWORD *)(v17 + 48) = gifts;
  sub_B52920((BattleServantConfConponent_o *)(v17 + 48), (System_Int32_array **)gifts, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 64) = afterDetail;
  *(_DWORD *)(v17 + 56) = idx;
  sub_B52920(
    (BattleServantConfConponent_o *)(v17 + 64),
    (System_Int32_array **)afterDetail,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v39 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
  v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v17,
    Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B52A5C(touchBlockObj, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v41, 0LL);
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

  if ( (byte_42AFA78 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&QuestRewardInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__);
    sub_B52984(&MissionListViewManager___c__DisplayClass57_0_TypeInfo);
    byte_42AFA78 = 1;
  }
  v11 = sub_B52A54(MissionListViewManager___c__DisplayClass57_0_TypeInfo);
  MissionListViewManager___c__DisplayClass57_0___ctor((MissionListViewManager___c__DisplayClass57_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_34;
  *(_QWORD *)(v11 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = gifts;
  v20 = (__int64 *)(v11 + 40);
  sub_B52920((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)gifts, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v11 + 56) = afterDetail;
  v27 = v11 + 32;
  *(_DWORD *)(v11 + 48) = idx;
  sub_B52920(
    (BattleServantConfConponent_o *)(v11 + 56),
    (System_Int32_array **)afterDetail,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (QuestRewardInfo_o *)sub_B52A54(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v34, 0LL);
  *(_QWORD *)(v11 + 32) = v34;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
         (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
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
    v60 = sub_B52A88(Instance);
    sub_B52A28(v60, 0LL);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v56 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v57 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v57 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v57->static_fields->DEFAULT_FADE_TIME;
  v59 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v11,
    Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v56 )
LABEL_34:
    sub_B52A5C(Instance, v13);
  CommonUI__maskFadeout(v56, 1, DEFAULT_FADE_TIME, v59, 0LL);
}


void __fastcall MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x19
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v24; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_42AFA7A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__);
    sub_B52984(&MissionListViewManager___c__DisplayClass59_0_TypeInfo);
    byte_42AFA7A = 1;
  }
  v7 = sub_B52A54(MissionListViewManager___c__DisplayClass59_0_TypeInfo);
  MissionListViewManager___c__DisplayClass59_0___ctor((MissionListViewManager___c__DisplayClass59_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  *(_DWORD *)(v7 + 24) = callCnt;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_12;
  if ( *(_DWORD *)(v7 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
    v26 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v26, 0LL);
      return;
    }
LABEL_12:
    sub_B52A5C(v8, v9);
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
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

  if ( (byte_42AFA7B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__);
    sub_B52984(&MissionListViewManager___c__DisplayClass60_0_TypeInfo);
    byte_42AFA7B = 1;
  }
  v5 = sub_B52A54(MissionListViewManager___c__DisplayClass60_0_TypeInfo);
  MissionListViewManager___c__DisplayClass60_0___ctor((MissionListViewManager___c__DisplayClass60_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  svtRewardComp = this->fields.svtRewardComp;
  v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__,
    0LL);
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtRewardComp )
LABEL_9:
    sub_B52A5C(v6, v7);
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
  if ( (byte_42AFA7C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42AFA7C = 1;
  }
  Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_9;
  v7 = Master_WarQuestSelectionMaster;
  v8 = System_String__Substring_44632052(
         Master_WarQuestSelectionMaster,
         0,
         Master_WarQuestSelectionMaster->fields.m_stringLength - 2,
         0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  v10 = System_String__Substring(v7, v7->fields.m_stringLength - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
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

  if ( (byte_42AFA67 & 1) == 0 )
  {
    sub_B52984(&MissionListViewManager_TypeInfo);
    sub_B52984(&Method_TransitionCalculator_float__Update__);
    byte_42AFA67 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v5 = (System_Int32_array **)MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = (struct AlphaTransitionCalculator_o *)v5;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator, v5, v6, v7, v8, v9, v10, v11);
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
          (const MethodInfo_25D3F60 *)Method_TransitionCalculator_float__Update__);
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
    sub_B52A5C(rewardIconAlphaCalculator, v12);
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

  if ( (byte_42AFA65 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AFA65 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42AFA66 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AFA66 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MissionListViewManager_o *)sub_B52D50(v7);
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
    sub_B52A5C(this, method);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20

  if ( (byte_42ADCCE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__);
    byte_42ADCCE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__LoadEquipGetEffect(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_42ADCCF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__);
    byte_42ADCCF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(&this->fields.__9__2);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__OpenEquipGetEffect(v6, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42ADCD0 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42ADCD0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20

  if ( (byte_42ADCD1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__);
    byte_42ADCD1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__LoadCostumeReleaseEffect(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x21
  System_String_o *name; // x20

  if ( (byte_42ADCD2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__);
    byte_42ADCD2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(&this->fields.__9__2);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__OpenCostumeReleaseEffect(v6, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42ADCD3 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42ADCD3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
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
  MissionInfoMaker_c *v3; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v8; // x20
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42ADCD4 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&MissionInfoMaker_TypeInfo);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__);
    byte_42ADCD4 = 1;
  }
  v3 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v3 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v3->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v6 = System_String__Format(ITEM_GET_ASSET_NAME, v5, 0LL);
  _9__1 = this->fields.__9__1;
  v8 = v6;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v8, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass57_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass57_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  System_String_o *transform; // x0
  __int64 v7; // x1
  AssetData_o *monitor; // x21
  MissionInfoMaker_c *v9; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v11; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v13; // x21
  struct MissionListViewManager_o *_4__this; // x8
  QuestRewardItemAction_o *klass; // x19
  System_Action_o *v16; // x21
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42ADCD5 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&MissionInfoMaker_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__);
    sub_B52984(&MissionListViewManager___c__DisplayClass57_1_TypeInfo);
    byte_42ADCD5 = 1;
  }
  v5 = (Il2CppObject *)sub_B52A54(MissionListViewManager___c__DisplayClass57_1_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_17;
  v5[2].klass = (Il2CppClass *)this;
  sub_B52920(&v5[2]);
  v5[1].monitor = data;
  sub_B52920(&v5[1].monitor);
  monitor = (AssetData_o *)v5[1].monitor;
  v9 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v9 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v9->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v11, 0LL);
  if ( !monitor )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               monitor,
                                                                               transform,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   Object_WarBoardWaitTimeSetting,
                                   (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_17;
  v13 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v13, 0LL);
  v5[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                 v13,
                                 (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  sub_B52920(&v5[1]);
  transform = (System_String_o *)v5[1].klass;
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        klass = (QuestRewardItemAction_o *)v5[1].klass,
        v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          v5,
          Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !klass) )
  {
LABEL_17:
    sub_B52A5C(transform, v7);
  }
  QuestRewardItemAction__Play(klass, 0, v16, 0.0, 0LL);
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
  UnityEngine_Component_o *mRewardItemAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass57_0_o *CS___8__locals1; // x8

  if ( (byte_42ADCD6 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADCD6 = 1;
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
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30359936(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_13:
    sub_B52A5C(mRewardItemAction, method);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v6; // x20

  if ( (byte_42ADCD7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__);
    byte_42ADCD7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  SummonAssetManager__LoadSummonAssets(v6, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass58_0_o *this,
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

  if ( (byte_42ADCD8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__);
    byte_42ADCD8 = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                 this->fields.userSvtID,
                 (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v7 = Entity;
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
            sub_B52920(&_4__this->fields.svtRewardComp);
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
                  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v52, 0LL);
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
                  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
                  v17 = *(_QWORD *)&v7->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v53.fields.fakeValue = *(_QWORD *)&v7->fields.limitCount.fields.fakeValue;
                  v18 = v16;
                  *(_QWORD *)&v53.fields.currentCryptoKey = v17;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
                  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v54, 0LL);
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
                  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
                  v42 = *(_QWORD *)&v7->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&v7->fields.limitCount.fields.fakeValue;
                  v43 = v41;
                  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  }
  Master_WarQuestSelectionMaster = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v26 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
          this->fields.userSvtID,
          (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v27 = this->fields.__4__this;
  v28 = v26;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
  sub_B52920(&v27->fields.svtRewardComp);
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
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v48, 0LL);
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
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v47, 0LL);
    if ( !v31 )
      goto LABEL_57;
    v34 = Master_WarQuestSelectionMaster;
    v36 = 6;
    v37 = v31;
    v33 = 0;
    v35 = 0;
  }
  ServantRewardAction__SetupCommandCode_28961064(v37, v34, v33, v35, v36, 0LL);
LABEL_53:
  _9__2 = this->fields.__9__2;
  v46 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(&this->fields.__9__2);
  }
  if ( !v46 )
    goto LABEL_57;
  MissionListViewManager__SvtEffCaller(v46, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct MissionListViewManager_o *_4__this; // x8

  if ( (byte_42ADCD9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_42ADCD9 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42ADCDA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__);
    byte_42ADCDA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
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
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v10 = this->fields.__4__this;
  v11 = Entity;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SummonAssetManager__InstantiateSvtGetPrefab((SummonAssetManager_o *)Master_WarQuestSelectionMaster, v12->fields.instantiatingPOS, 0, 0LL);
  if ( !v10 )
    goto LABEL_45;
  v10->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B52920(&v10->fields.svtRewardComp);
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
    v38 = sub_B52A88(Master_WarQuestSelectionMaster);
    sub_B52A28(v38, 0LL);
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
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v44, 0LL);
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
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v39, 0LL);
    v34 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
    v35 = v33;
    *(_QWORD *)&v45.fields.currentCryptoKey = v34;
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v32, v35, (int32_t)Master_WarQuestSelectionMaster, 1, 0, 0, 2, 0LL);
      goto LABEL_41;
    }
LABEL_45:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v19;
  *(_QWORD *)&v42.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v42, 0LL);
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
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v40, 0LL);
  v24 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v43.fields.fakeValue = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
  v25 = v23;
  *(_QWORD *)&v43.fields.currentCryptoKey = v24;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
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
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  if ( !v37 )
    goto LABEL_45;
  MissionListViewManager__SvtEffCaller(v37, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21

  if ( (byte_42ADCDB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__);
    byte_42ADCDB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(&this->fields.__9__2);
  }
  if ( !v5 )
    sub_B52A5C(Instance, v4);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
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
  if ( (byte_42ADCDC & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass60_0_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADCDC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass60_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_B52A5C(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}