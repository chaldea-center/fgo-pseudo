void __fastcall MissionListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MissionListViewManager_c *v4; // x8

  if ( (byte_42E877C & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewManager_TypeInfo, v1, v2, v3);
    byte_42E877C = 1;
  }
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM = 7;
  v4 = MissionListViewManager_TypeInfo;
  MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  v4->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall MissionListViewManager___ctor(MissionListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E877B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v5, v6, v7);
    byte_42E877B = 1;
  }
  *(_QWORD *)&this->fields.openItemTime = 0x3FC000003F000000LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.rewardItemGetEffectPlayList = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rewardItemGetEffectPlayList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MissionListViewManager__CloseCommandCodeDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E8771 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E8771 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall MissionListViewManager__CloseItemDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E876F & 1) == 0 )
  {
    sub_B5D5C4(&Method_MissionListViewManager_CloseItemDetail__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E876F = 1;
  }
  v7 = Method_MissionListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_MissionListViewManager_CloseItemDetail__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_MissionListViewManager_CloseItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall MissionListViewManager__CloseServantStatusDetail(
        MissionListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E8770 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E8770 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MissionListViewManager__CreateRewardIconAlphaCalculator(
        MissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  MissionListViewManager_c *v7; // x0
  float v8; // s8
  System_Func_float__float__float__float__o *v9; // x19
  AlphaTransitionCalculator_o *v10; // x20

  if ( (byte_42E8766 & 1) == 0 )
  {
    sub_B5D5C4(&AlphaTransitionCalculator_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MissionListViewManager_TypeInfo, v4, v5, v6);
    byte_42E8766 = 1;
  }
  v7 = MissionListViewManager_TypeInfo;
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v7 = MissionListViewManager_TypeInfo;
  }
  v8 = ChangedFPSUtil__CovertFrameNumToSecond(v7->static_fields->REWARD_ICON_FADE_FRAME_NUM, 0LL);
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MissionListViewManager_TypeInfo->static_fields->REWARD_ICON_FADE_FRAME_NUM,
         0LL);
  v10 = (AlphaTransitionCalculator_o *)sub_B5D694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v10, v8, v9, 0LL);
  return v10;
}


void __fastcall MissionListViewManager__EndItemGetEffectAction(
        MissionListViewManager_o *this,
        System_Action_o *afterDetail,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x19
  System_Collections_Generic_List_int__o *rewardItemGetEffectPlayList; // x0
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x21

  if ( (byte_42E8773 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)afterDetail, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__, v15, v16, v17);
    sub_B5D5C4(&MissionListViewManager___c__DisplayClass54_0_TypeInfo, v18, v19, v20);
    byte_42E8773 = 1;
  }
  v21 = sub_B5D694(MissionListViewManager___c__DisplayClass54_0_TypeInfo);
  MissionListViewManager___c__DisplayClass54_0___ctor((MissionListViewManager___c__DisplayClass54_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_10;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = afterDetail;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)afterDetail,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  rewardItemGetEffectPlayList = this->fields.rewardItemGetEffectPlayList;
  if ( !rewardItemGetEffectPlayList )
    goto LABEL_10;
  System_Collections_Generic_List_int___Clear(
    rewardItemGetEffectPlayList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v37 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v37 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
  v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v21,
    Method_MissionListViewManager___c__DisplayClass54_0__EndItemGetEffectAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(rewardItemGetEffectPlayList, v23);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v39, 0LL);
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
        const MethodInfo_1E649B4 *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  Il2CppClass *_0_System_Collections_Generic_List_TObject; // x19
  System_Collections_Generic_List_TObject__o *v22; // x19
  __int64 v23; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v25; // x3
  Il2CppObject *current; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  const MethodInfo **v32; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-50h] BYREF
  __int64 v36; // [xsp+48h] [xbp-28h]

  if ( (byte_42EC204 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42EC204 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  HIDWORD(v36) = 0;
  _0_System_Collections_Generic_List_TObject = method->rgctx_data->_0_System_Collections_Generic_List_TObject_;
  if ( (BYTE2(_0_System_Collections_Generic_List_TObject->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_0_System_Collections_Generic_List_TObject_);
  v22 = (System_Collections_Generic_List_TObject__o *)sub_B5D694(_0_System_Collections_Generic_List_TObject);
  method->rgctx_data->_1_System_Collections_Generic_List_TObject___ctor->methodPointer();
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v23);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v35.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v27 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v27 )
    {
      if ( !current )
        sub_B5D69C(v27, v28);
      v29 = ((__int64 (__fastcall *)(Il2CppObject *, MethodInfo *))method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_->methodPointer)(
              current,
              method->rgctx_data->_2_UnityEngine_GameObject_GetComponent_TObject_);
      if ( !v22 )
        sub_B5D69C(v29, v29);
      ((void (__fastcall *)(System_Collections_Generic_List_TObject__o *, __int64, MethodInfo *))method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add->methodPointer)(
        v22,
        v29,
        method->rgctx_data->_3_System_Collections_Generic_List_TObject__Add);
    }
  }
  v36 = 0x10000004CLL;
  v34.fields.list = (struct System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Enumerator_GameObject__TypeInfo;
  if ( *(_WORD *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->_2.bitflags1 )
        goto LABEL_19;
    }
    v32 = &System_Collections_Generic_List_Enumerator_GameObject__TypeInfo->vtable._0_Equals.method + 2 * *p_offset;
  }
  else
  {
LABEL_19:
    v32 = (const MethodInfo **)sub_AF54C0(&v34, System_IDisposable_TypeInfo, 0LL, v25);
  }
  ((void (__fastcall *)(int32_t *, const MethodInfo *))*v32)(&v34.fields.index, v32[1]);
  if ( (_DWORD)v36 == 76 )
    v36 = 76LL;
  return v22;
}


void __fastcall MissionListViewManager__OnChangeAlphaAnim(MissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MissionListViewManager__OnMoveEnd(MissionListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42E876A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E876A = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
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
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B5D69C(gameObject, v9);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantCostumeEntity_o *v12; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x2
  ServantCostumeEntity_o *resultEntity; // [xsp+8h] [xbp-18h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_42E876D & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, objectId, (_DWORD)method, v3);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v6, v7, v8);
    this = (MissionListViewManager_o *)sub_B5D5C4(&Method_MissionListViewManager_CloseItemDetail__, v9, v10, v11);
    byte_42E876D = 1;
  }
  resultEntity = 0LL;
  if ( MissionListViewManager__TryGetServantCostumeEntity(this, &resultEntity, objectId, v3) )
  {
    v12 = resultEntity;
    v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(v13, v5, (intptr_t)Method_MissionListViewManager_CloseItemDetail__, 0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    MissionInfoMaker__OpenCostumeReleaseDetail(v12, v13, v14);
  }
}


void __fastcall MissionListViewManager__OpenEquipDetail(
        MissionListViewManager_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  EquipEntity_o *v23; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E876E & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, objectId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_MissionListViewManager_CloseItemDetail__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E876E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v22);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         objectId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
  {
    v23 = (EquipEntity_o *)entity;
    v24 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    }
    MissionInfoMaker__OpenEquipDetail(v23, v24, v25);
  }
}


void __fastcall MissionListViewManager__RequestInto(MissionListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_TObject__o *ObjectList_object; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_TObject__o *v22; // x20
  signed __int64 size; // x8
  unsigned __int64 v24; // x24
  int v25; // w23
  MissionListViewObject_o *v26; // x21
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x4

  if ( (byte_42E8769 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_MissionListViewManager_OnMoveEnd__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v17, v18, v19);
    byte_42E8769 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList_object = MissionListViewManager__GetObjectList_object_(
                        this,
                        (const MethodInfo_1E649B4 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
LABEL_15:
    sub_B5D69C(ObjectList_object, v21);
  v22 = ObjectList_object;
  this->fields.callbackCount = ObjectList_object->fields._size;
  LODWORD(size) = ObjectList_object->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v24 = 0LL;
  v25 = 0;
  do
  {
    if ( v24 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v26 = (MissionListViewObject_o *)v22->fields._items->m_Items[v24];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v26, 0LL) )
    {
      v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !v26 )
        goto LABEL_15;
      ++v25;
      MissionListViewObject__Init(v26, 4, v27, this->fields.listInDelay, 1, v28);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v22->fields._size;
    ++v24;
  }
  while ( (__int64)v24 < size );
  if ( !v25 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList_object; // x0
  __int64 v33; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x4
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8768 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_MissionListViewManager_GetObjectList_MissionListViewObject___, v23, v24, v25);
    sub_B5D5C4(&Method_MissionListViewManager_OnMoveEnd__, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v29, v30, v31);
    byte_42E8768 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  ObjectList_object = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewManager__GetObjectList_object_(this, (const MethodInfo_1E649B4 *)Method_MissionListViewManager_GetObjectList_MissionListViewObject___);
  if ( !ObjectList_object )
    sub_B5D69C(0LL, v33);
  size = ObjectList_object->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v40,
      ObjectList_object,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MissionListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__MoveNext__) )
    {
      current = v40.fields.current;
      v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v36, (Il2CppObject *)this, Method_MissionListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v37, v38);
      MissionListViewObject__Init((MissionListViewObject_o *)current, mode, v36, delay, 1, v39);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MissionListViewObject__Dispose__);
  }
}


void __fastcall MissionListViewManager__RequestListObject_25051480(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MissionListViewManager__SetMode_25051088(this, mode, v10);
}


void __fastcall MissionListViewManager__SetMode_25051088(
        MissionListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t v13; // w1

  if ( (byte_42E8767 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11562/*"RequestInto"*/, v6, v7, v8);
    byte_42E8767 = 1;
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
        sub_B5D69C(gameObject, v11);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11562/*"RequestInto"*/,
      0.0,
      0LL);
  }
  else if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 3 )
      v13 = 3;
    else
      v13 = 2;
    MissionListViewManager__RequestListObject(this, v13, 0.0, v9);
  }
}


void __fastcall MissionListViewManager__SetMode_25051420(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  MissionListViewManager__SetMode_25051088(this, mode, v11);
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
  if ( (byte_42E876B & 1) == 0 )
  {
    this = (MissionListViewManager_o *)sub_B5D5C4(&MissionListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)item, method);
    byte_42E876B = 1;
  }
  if ( !obj
    || (v7 = *(&MissionListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MissionListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != MissionListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v52; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t rewardType; // w8
  struct EventMissionEntity_o *v55; // x8
  unsigned int MasterName_k__BackingField; // w9
  int v57; // w8
  GiftEntity_o *v58; // x20
  ItemEntity_o *Entity; // x20
  WebViewManager_o *v60; // x0
  CommonUI_o *v61; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v62; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *nameTxt; // x20
  System_String_o *rewardExtraDetailTxt; // x21
  CommonUI_o *v66; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v67; // x23
  struct GiftEntity_array *giftEnts; // x8
  const MethodInfo *v69; // x1
  int32_t type; // w0
  GiftMaster_o *v71; // x22
  bool IsServantEquip; // w23
  WebViewManager_o *v73; // x21
  ServantStatusDialog_EndDelegate_o *v74; // x22
  CommonUI_o *v75; // x0
  GiftEntity_o *v76; // x2
  ServantStatusDialog_EndDelegate_o *v77; // x3
  int32_t v78; // w0
  bool v79; // w23
  CommonUI_o *v80; // x22
  ServantStatusDialog_EndDelegate_o *v81; // x21
  CommandCodeEntity_o *cmdEnt; // x20
  WebViewManager_o *v83; // x0
  int32_t v84; // w0
  const MethodInfo *v85; // x1
  CommonUI_o *v86; // x21
  ServantStatusDialog_EndDelegate_o *v87; // x22
  struct System_String_o *v88; // x20
  __int64 v89; // x23
  int32_t v90; // w20
  ServantStatusDialog_EndDelegate_o *v91; // x22
  CommonUI_o *v92; // x0
  int32_t v93; // w2
  ServantStatusDialog_EndDelegate_o *v94; // x3
  struct ServantEntity_o *svtEnt; // x8
  __int64 v96; // x20
  __int64 v97; // x21
  int32_t v98; // w20
  ServantStatusDialog_EndDelegate_o *v99; // x21
  const MethodInfo *v100; // x2
  int32_t objectId; // w1
  int32_t v102; // w0
  struct GiftEntity_array *v103; // x8
  GiftEntity_o *v104; // x8
  int32_t v105; // w0
  const MethodInfo *v106; // x2
  __int64 v107; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_42E876C & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_MissionListViewManager_CloseCommandCodeDetail__, v33, v34, v35);
    sub_B5D5C4(&Method_MissionListViewManager_CloseItemDetail__, v36, v37, v38);
    sub_B5D5C4(&Method_MissionListViewManager_CloseServantStatusDetail__, v39, v40, v41);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&SoundManager_TypeInfo, v48, v49, v50);
    byte_42E876C = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = selectItem->fields.nameTxt;
    rewardExtraDetailTxt = selectItem->fields.rewardExtraDetailTxt;
    v66 = (CommonUI_o *)Instance;
    v67 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v67,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( !v66 )
      goto LABEL_81;
    CommonUI__OpenItemDetailDialog_18267660(v66, nameTxt, rewardExtraDetailTxt, v67, 0LL);
    return;
  }
  if ( rewardType != 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  v55 = selectItem->fields.eventMissionEnt;
  if ( !v55 )
    goto LABEL_81;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_81;
  Master_WarQuestSelectionMaster = (GiftMaster_o *)GiftMaster__GetGiftListById(
                                                     Master_WarQuestSelectionMaster,
                                                     v55->fields.giftId,
                                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_81;
  MasterName_k__BackingField = (unsigned int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v57 = this->fields.alphaAnimCnt % (int)MasterName_k__BackingField;
  if ( v57 >= MasterName_k__BackingField )
    goto LABEL_82;
  v58 = (GiftEntity_o *)*((_QWORD *)&Master_WarQuestSelectionMaster->fields.list + v57);
  if ( !v58 )
    goto LABEL_81;
  if ( v58->fields._IsReplacedData_k__BackingField )
    goto LABEL_19;
  giftEnts = selectItem->fields.giftEnts;
  if ( !giftEnts )
    goto LABEL_81;
  if ( giftEnts->max_length != 1 )
  {
    type = v58->fields.type;
    if ( type == 2 )
    {
LABEL_19:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 v58->fields.objectId,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_24;
    }
    if ( Gift__IsServant(type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                         v58->fields.objectId,
                                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      v71 = Master_WarQuestSelectionMaster;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
      v73 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        v74 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v74,
          (Il2CppObject *)this,
          Method_MissionListViewManager_CloseServantStatusDetail__,
          0LL);
        if ( !v73 )
          goto LABEL_81;
        v75 = (CommonUI_o *)v73;
        v76 = v58;
        v77 = v74;
LABEL_47:
        CommonUI__OpenServantStatusDialog_18176692(v75, 7, v76, v77, 0LL);
        return;
      }
      v89 = *(_QWORD *)&v71->fields._MasterKind_k__BackingField;
      v88 = v71->fields._MasterName_k__BackingField;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v108.fields.currentCryptoKey = v89;
      *(_QWORD *)&v108.fields.fakeValue = v88;
      v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v108, 0LL);
      v91 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v91,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v73 )
        goto LABEL_81;
      v92 = (CommonUI_o *)v73;
      v93 = v90;
      v94 = v91;
      goto LABEL_69;
    }
    if ( Gift__IsCommandCode(v58->fields.type, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_81;
      cmdEnt = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                        v58->fields.objectId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v83 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      goto LABEL_56;
    }
    if ( Gift__IsCostumeRelease(v58->fields.type, 0LL) )
    {
      objectId = v58->fields.objectId;
LABEL_77:
      MissionListViewManager__OpenCostumeReleaseDetail(this, objectId, v100);
      return;
    }
    goto LABEL_78;
  }
  if ( MissionListViewItem__get_Type(selectItem, v52) == 2 )
  {
    v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Entity = selectItem->fields.itemEnt;
LABEL_24:
    v61 = (CommonUI_o *)v60;
    v62 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v62,
      (Il2CppObject *)this,
      (intptr_t)Method_MissionListViewManager_CloseItemDetail__,
      0LL);
    if ( v61 )
    {
      CommonUI__OpenItemDetailDialog(v61, Entity, v62, 50, 0LL);
      return;
    }
LABEL_81:
    sub_B5D69C(Master_WarQuestSelectionMaster, v52);
  }
  v78 = MissionListViewItem__get_Type(selectItem, v69);
  if ( Gift__IsServant(v78, 0LL) )
  {
    Master_WarQuestSelectionMaster = (GiftMaster_o *)selectItem->fields.svtEnt;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_81;
    v79 = ServantEntity__get_IsServantEquip((ServantEntity_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v80 = (CommonUI_o *)Master_WarQuestSelectionMaster;
    if ( v79 )
    {
      v81 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v81,
        (Il2CppObject *)this,
        Method_MissionListViewManager_CloseServantStatusDetail__,
        0LL);
      if ( !v80 )
        goto LABEL_81;
      v75 = v80;
      v76 = v58;
      v77 = v81;
      goto LABEL_47;
    }
    svtEnt = selectItem->fields.svtEnt;
    if ( !svtEnt )
      goto LABEL_81;
    v97 = *(_QWORD *)&svtEnt->fields.id.fields.currentCryptoKey;
    v96 = *(_QWORD *)&svtEnt->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v109.fields.currentCryptoKey = v97;
    *(_QWORD *)&v109.fields.fakeValue = v96;
    v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v109, 0LL);
    v99 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v99,
      (Il2CppObject *)this,
      Method_MissionListViewManager_CloseServantStatusDetail__,
      0LL);
    if ( !v80 )
      goto LABEL_81;
    v92 = v80;
    v93 = v98;
    v94 = v99;
LABEL_69:
    CommonUI__OpenServantStatusDialog_18215952(v92, 7, v93, v94, 0LL);
    return;
  }
  v84 = MissionListViewItem__get_Type(selectItem, v52);
  if ( !Gift__IsCommandCode(v84, 0LL) )
  {
    v102 = MissionListViewItem__get_Type(selectItem, v85);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)Gift__IsCostumeRelease(v102, 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v103 = selectItem->fields.giftEnts;
      if ( !v103 )
        goto LABEL_81;
      if ( v103->max_length )
      {
        v104 = v103->m_Items[0];
        if ( !v104 )
          goto LABEL_81;
        objectId = v104->fields.objectId;
        goto LABEL_77;
      }
LABEL_82:
      v107 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v107, 0LL);
    }
LABEL_78:
    v105 = MissionListViewItem__get_Type(selectItem, v52);
    if ( Gift__IsEquip(v105, 0LL) )
      MissionListViewManager__OpenEquipDetail(this, v58->fields.objectId, v106);
    return;
  }
  v83 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  cmdEnt = selectItem->fields.cmdEnt;
LABEL_56:
  v86 = (CommonUI_o *)v83;
  v87 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v87,
    (Il2CppObject *)this,
    Method_MissionListViewManager_CloseCommandCodeDetail__,
    0LL);
  if ( !v86 )
    goto LABEL_81;
  CommonUI__OpenServantEquipStatusDialog_18218384(v86, 25, cmdEnt, 0, v87, 0LL, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int32_t max_length; // w8
  Il2CppClass **v46; // x24
  Il2CppClass *v47; // x8
  char *v48; // x24
  Il2CppClass *v49; // t1
  int32_t name_high; // w23
  const MethodInfo *v51; // x4
  int v52; // w24
  GetSvts_array *getSvtList; // x24
  struct System_String_o *age; // x25
  __int64 v55; // x26
  const MethodInfo *v56; // x3
  int32_t v57; // w25
  UnityEngine_Object_o *getCommandCodeList; // x24
  int64_t userSvtId; // x24
  bool isNew; // w25
  bool Eff; // w0
  GetCommandCodes_array *v62; // x24
  struct System_String_o *v63; // x25
  __int64 v64; // x26
  const MethodInfo *v65; // x3
  int32_t v66; // w25
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x5
  const MethodInfo *v69; // x5
  WarEntity_o *v70; // x0
  WarEntity_o *v71; // x23
  const MethodInfo *v72; // x5
  __int64 v73; // x0
  const MethodInfo *v74; // [xsp+0h] [xbp-80h]
  WarEntity_o *v75; // [xsp+10h] [xbp-70h] BYREF
  ServantCostumeEntity_o *resultEntity; // [xsp+18h] [xbp-68h] BYREF
  GetCommandCodes_o *v77; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v78; // [xsp+28h] [xbp-58h] BYREF
  GetSvts_o *data; // [xsp+30h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  v8 = this;
  if ( (byte_42E8772 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommandCodeMaster___, (_DWORD)gifts, idx, afterDetail);
    sub_B5D5C4(&Method_DataManager_GetMaster_EquipMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v30, v31, v32);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40, v41);
    this = (MissionListViewManager_o *)sub_B5D5C4(
                                         &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                         v42,
                                         v43,
                                         v44);
    byte_42E8772 = 1;
  }
  data = 0LL;
  entity = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v75 = 0LL;
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
  v46 = &gifts->obj.klass + idx;
  v49 = v46[4];
  v48 = (char *)(v46 + 4);
  v47 = v49;
  if ( !v49 )
    goto LABEL_87;
  name_high = HIDWORD(v47->_1.name);
  if ( Gift__IsServant(name_high, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v48 || !this )
        goto LABEL_87;
      this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &entity,
                                           *(_DWORD *)(*(_QWORD *)v48 + 24LL),
                                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_87;
        this = (MissionListViewManager_o *)SvtType__IsCombineMaterial(*(&entity->fields.startType + 1), 0LL);
        if ( !entity )
          goto LABEL_87;
        v52 = (int)this;
        this = (MissionListViewManager_o *)SvtType__IsStatusUp(*(&entity->fields.startType + 1), 0LL);
        if ( ((v52 | (unsigned int)this) & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_87;
          getSvtList = v8->fields.getSvtList;
          v55 = *(_QWORD *)&entity->fields.id;
          age = entity->fields.age;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v81.fields.currentCryptoKey = v55;
          *(_QWORD *)&v81.fields.fakeValue = age;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v81, 0LL);
          if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          }
          if ( MissionInfoMaker__GetSvtListData(getSvtList, &data, v57, v56) )
          {
            this = (MissionListViewManager_o *)entity;
            if ( !entity )
              goto LABEL_87;
            if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
            {
              this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                v74);
              return;
            }
LABEL_87:
            sub_B5D69C(this, gifts);
          }
        }
      }
      goto LABEL_86;
    }
LABEL_88:
    v73 = sub_B5D6C8(this);
    sub_B5D668(v73, 0LL);
  }
  if ( Gift__IsCommandCode(name_high, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommandCodeMaster___);
    if ( gifts->max_length > idx )
    {
      if ( !*(_QWORD *)v48 || !this )
        goto LABEL_87;
      this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           &v78,
                                           *(_DWORD *)(*(_QWORD *)v48 + 24LL),
                                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v78 )
          goto LABEL_87;
        v62 = v8->fields.getCommandCodeList;
        v64 = *(_QWORD *)&v78->fields.id;
        v63 = v78->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v82.fields.currentCryptoKey = v64;
        *(_QWORD *)&v82.fields.fakeValue = v63;
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v82, 0LL);
        if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        }
        if ( MissionInfoMaker__GetCommandCodeData(v62, &v77, v66, v65) )
        {
          this = (MissionListViewManager_o *)v77;
          if ( v77 )
          {
            userSvtId = v77->fields.userCommandCodeId;
            isNew = v77->fields.isNew;
            Eff = GetCommandCodes__isDoGetEff(v77, 0LL);
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
    if ( !*(_QWORD *)v48 )
      goto LABEL_87;
    this = (MissionListViewManager_o *)MissionListViewManager__TryGetServantCostumeEntity(
                                         this,
                                         &resultEntity,
                                         *(_DWORD *)(*(_QWORD *)v48 + 24LL),
                                         v67);
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
        v68);
      return;
    }
LABEL_86:
    MissionListViewManager__StartItemGetEffectAction(v8, gifts, idx + 1, afterDetail, v51);
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
      this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( gifts->max_length > idx )
      {
        if ( !*(_QWORD *)v48 || !this )
          goto LABEL_87;
        v70 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                *(_DWORD *)(*(_QWORD *)v48 + 24LL),
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v70 )
        {
          v71 = v70;
          this = (MissionListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_87;
          if ( CommonUI__IsGetItemEffect((CommonUI_o *)this, v71->fields.id, 0LL) )
          {
            MissionListViewManager__StartRewardItemGetEffect(v8, v71->fields.id, gifts, idx, afterDetail, v72);
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
  this = (MissionListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EquipMaster___);
  if ( gifts->max_length <= idx )
    goto LABEL_88;
  if ( !*(_QWORD *)v48 || !this )
    goto LABEL_87;
  this = (MissionListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                       &v75,
                                       *(_DWORD *)(*(_QWORD *)v48 + 24LL),
                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_86;
  if ( gifts->max_length <= idx )
    goto LABEL_88;
  if ( !*(_QWORD *)v48 )
    goto LABEL_87;
  MissionListViewManager__StartRewardEquipGetEffect(
    v8,
    *(_DWORD *)(*(_QWORD *)v48 + 24LL),
    gifts,
    idx,
    afterDetail,
    v69);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v25; // x1
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
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v51; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v53; // x21

  if ( (byte_42E8775 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)name, (_DWORD)gifts, *(_QWORD *)&idx);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(
      &Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&MissionListViewManager___c__DisplayClass56_0_TypeInfo, v20, v21, v22);
    byte_42E8775 = 1;
  }
  v23 = sub_B5D694(MissionListViewManager___c__DisplayClass56_0_TypeInfo);
  MissionListViewManager___c__DisplayClass56_0___ctor((MissionListViewManager___c__DisplayClass56_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_10;
  *(_QWORD *)(v23 + 16) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)name, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v23 + 32) = gifts;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)gifts, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v23 + 48) = afterDetail;
  *(_DWORD *)(v23 + 40) = idx;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v23 + 48),
    (System_Int32_array **)afterDetail,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v51 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v51 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v51->static_fields->DEFAULT_FADE_TIME;
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v23,
    Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(touchBlockObj, v25);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v53, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v28; // x1
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
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  QuestRewardInfo_o *v47; // x22
  __int64 v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x8
  __int64 v56; // x9
  __int64 v57; // x8
  __int64 v58; // x9
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v60; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v62; // x21
  __int64 v63; // x0

  if ( (byte_42E8774 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, equipId, (_DWORD)gifts, *(_QWORD *)&idx);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&QuestRewardInfo_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__, v20, v21, v22);
    sub_B5D5C4(&MissionListViewManager___c__DisplayClass55_0_TypeInfo, v23, v24, v25);
    byte_42E8774 = 1;
  }
  v26 = sub_B5D694(MissionListViewManager___c__DisplayClass55_0_TypeInfo);
  MissionListViewManager___c__DisplayClass55_0___ctor((MissionListViewManager___c__DisplayClass55_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_16;
  *(_QWORD *)(v26 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 32) = gifts;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 32), (System_Int32_array **)gifts, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v26 + 48) = afterDetail;
  *(_DWORD *)(v26 + 40) = idx;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v26 + 48),
    (System_Int32_array **)afterDetail,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  v47 = (QuestRewardInfo_o *)sub_B5D694(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v47, 0LL);
  *(_QWORD *)(v26 + 16) = v47;
  v48 = v26 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)v47, v49, v50, v51, v52, v53, v54);
  if ( !*(_QWORD *)(v26 + 16) )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)(v26 + 16) + 16LL) = 5;
  if ( !*(_QWORD *)v48 )
    goto LABEL_16;
  *(_DWORD *)(*(_QWORD *)v48 + 20LL) = equipId;
  v55 = *(_QWORD *)(v26 + 32);
  if ( !v55 )
    goto LABEL_16;
  v56 = *(int *)(v26 + 40);
  if ( (unsigned int)v56 >= *(_DWORD *)(v55 + 24) )
  {
    v63 = sub_B5D6C8(touchBlockObj);
    sub_B5D668(v63, 0LL);
  }
  v57 = *(_QWORD *)(v55 + 8 * v56 + 32);
  if ( !v57 )
    goto LABEL_16;
  v58 = *(_QWORD *)(v26 + 16);
  if ( !v58 )
    goto LABEL_16;
  *(_DWORD *)(v58 + 24) = *(_DWORD *)(v57 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v60 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
  v62 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v62,
    (Il2CppObject *)v26,
    Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_16:
    sub_B5D69C(touchBlockObj, v28);
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
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  __int64 v29; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v51; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v53; // x21

  if ( (byte_42E8777 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, userSvtID, isNew, isDoEffect);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__, v23, v24, v25);
    sub_B5D5C4(&MissionListViewManager___c__DisplayClass58_0_TypeInfo, v26, v27, v28);
    byte_42E8777 = 1;
  }
  v29 = sub_B5D694(MissionListViewManager___c__DisplayClass58_0_TypeInfo);
  MissionListViewManager___c__DisplayClass58_0___ctor((MissionListViewManager___c__DisplayClass58_0_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_10;
  *(_DWORD *)(v29 + 16) = giftType;
  *(_QWORD *)(v29 + 24) = userSvtID;
  *(_QWORD *)(v29 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v29 + 32), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  *(_BYTE *)(v29 + 40) = isDoEffect;
  *(_BYTE *)(v29 + 41) = isNew;
  *(_QWORD *)(v29 + 48) = gifts;
  sub_B5D560((BattleServantConfConponent_o *)(v29 + 48), (System_Int32_array **)gifts, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v29 + 64) = afterDetail;
  *(_DWORD *)(v29 + 56) = idx;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v29 + 64),
    (System_Int32_array **)afterDetail,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v51 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v51 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v51->static_fields->DEFAULT_FADE_TIME;
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v29,
    Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(touchBlockObj, v31);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v53, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  __int64 v32; // x19
  CommonUI_o *Instance; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  QuestRewardInfo_o *v55; // x24
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 v64; // x9
  __int64 v65; // x8
  __int64 v66; // x9
  unsigned int ItemEffectId; // w0
  const MethodInfo *v68; // x4
  __int64 v69; // x8
  __int64 v70; // x8
  int v71; // w10
  unsigned int v72; // w9
  __int64 v73; // x10
  __int64 v74; // x11
  __int64 v75; // x11
  __int64 v76; // x10
  CommonUI_o *v77; // x20
  AvalonSceneManager_c *v78; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v80; // x21
  __int64 v81; // x0

  if ( (byte_42E8776 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, itemId, (_DWORD)gifts, *(_QWORD *)&idx);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v17, v18, v19);
    sub_B5D5C4(&QuestRewardInfo_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__, v26, v27, v28);
    sub_B5D5C4(&MissionListViewManager___c__DisplayClass57_0_TypeInfo, v29, v30, v31);
    byte_42E8776 = 1;
  }
  v32 = sub_B5D694(MissionListViewManager___c__DisplayClass57_0_TypeInfo);
  MissionListViewManager___c__DisplayClass57_0___ctor((MissionListViewManager___c__DisplayClass57_0_o *)v32, 0LL);
  if ( !v32 )
    goto LABEL_34;
  *(_QWORD *)(v32 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 24), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v32 + 40) = gifts;
  v41 = (__int64 *)(v32 + 40);
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 40), (System_Int32_array **)gifts, v42, v43, v44, v45, v46, v47);
  *(_QWORD *)(v32 + 56) = afterDetail;
  v48 = v32 + 32;
  *(_DWORD *)(v32 + 48) = idx;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v32 + 56),
    (System_Int32_array **)afterDetail,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (QuestRewardInfo_o *)sub_B5D694(QuestRewardInfo_TypeInfo);
  QuestRewardInfo___ctor(v55, 0LL);
  *(_QWORD *)(v32 + 32) = v55;
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 32), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v62 = *(_QWORD *)(v32 + 32);
  if ( !v62 )
    goto LABEL_34;
  *(_DWORD *)(v62 + 16) = 2;
  if ( !*(_QWORD *)v48 )
    goto LABEL_34;
  *(_DWORD *)(*(_QWORD *)v48 + 20LL) = itemId;
  v63 = *(_QWORD *)(v32 + 40);
  if ( !v63 )
    goto LABEL_34;
  v64 = *(int *)(v32 + 48);
  if ( (unsigned int)v64 >= *(_DWORD *)(v63 + 24) )
    goto LABEL_35;
  v65 = *(_QWORD *)(v63 + 8 * v64 + 32);
  if ( !v65 )
    goto LABEL_34;
  v66 = *(_QWORD *)(v32 + 32);
  if ( !v66 )
    goto LABEL_34;
  *(_DWORD *)(v66 + 24) = *(_DWORD *)(v65 + 28);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  ItemEffectId = CommonUI__GetItemEffectId(Instance, *(QuestRewardInfo_o **)(v32 + 32), 0LL);
  *(_DWORD *)(v32 + 16) = ItemEffectId;
  v34 = ItemEffectId;
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_34;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)Instance,
         v34,
         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    MissionListViewManager__StartItemGetEffectAction(
      this,
      *(GiftEntity_array **)(v32 + 40),
      *(_DWORD *)(v32 + 48) + 1,
      *(System_Action_o **)(v32 + 56),
      v68);
    return;
  }
  Instance = (CommonUI_o *)this->fields.rewardItemGetEffectPlayList;
  if ( !Instance )
    goto LABEL_34;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)Instance,
    *(_DWORD *)(v32 + 16),
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  v69 = *(_QWORD *)(v32 + 32);
  if ( !v69 )
    goto LABEL_34;
  *(_DWORD *)(v69 + 24) = 0;
  v70 = *v41;
  if ( !*v41 )
    goto LABEL_34;
  v71 = *(_DWORD *)(v70 + 24);
  if ( v71 >= 1 )
  {
    v72 = 0;
    while ( v72 < v71 )
    {
      v73 = *(_QWORD *)(v32 + 40);
      if ( !v73 )
        goto LABEL_34;
      v74 = *(int *)(v32 + 48);
      if ( (unsigned int)v74 >= *(_DWORD *)(v73 + 24) )
        break;
      v75 = *(_QWORD *)(v73 + 8 * v74 + 32);
      if ( !v75 )
        goto LABEL_34;
      v76 = *(_QWORD *)(v70 + 8LL * (int)v72 + 32);
      if ( !v76 )
        goto LABEL_34;
      if ( *(_DWORD *)(v75 + 24) == *(_DWORD *)(v76 + 24) )
      {
        if ( !*(_QWORD *)v48 )
          goto LABEL_34;
        *(_DWORD *)(*(_QWORD *)v48 + 24LL) += *(_DWORD *)(v76 + 28);
      }
      v71 = *(_DWORD *)(v70 + 24);
      if ( (int)++v72 >= v71 )
        goto LABEL_28;
    }
LABEL_35:
    v81 = sub_B5D6C8(Instance);
    sub_B5D668(v81, 0LL);
  }
LABEL_28:
  Instance = (CommonUI_o *)this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v77 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v78 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v78 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v78->static_fields->DEFAULT_FADE_TIME;
  v80 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v80,
    (Il2CppObject *)v32,
    Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__0__,
    0LL);
  if ( !v77 )
LABEL_34:
    sub_B5D69C(Instance, v34);
  CommonUI__maskFadeout(v77, 1, DEFAULT_FADE_TIME, v80, 0LL);
}


void __fastcall MissionListViewManager__StartSvtListGetEffect(
        MissionListViewManager_o *this,
        int32_t callCnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
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
  struct GetSvts_array *getSvtList; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21

  if ( (byte_42E8778 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, callCnt, (_DWORD)callback, method);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__, v13, v14, v15);
    sub_B5D5C4(&MissionListViewManager___c__DisplayClass59_0_TypeInfo, v16, v17, v18);
    byte_42E8778 = 1;
  }
  v19 = sub_B5D694(MissionListViewManager___c__DisplayClass59_0_TypeInfo);
  MissionListViewManager___c__DisplayClass59_0___ctor((MissionListViewManager___c__DisplayClass59_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_12;
  *(_QWORD *)(v19 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 32) = callback;
  *(_DWORD *)(v19 + 24) = callCnt;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 32), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_12;
  if ( *(_DWORD *)(v19 + 24) < (signed int)getSvtList->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v36 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
    v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v19,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v38, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(v20, v21);
  }
  ActionExtensions__Call(*(System_Action_o **)(v19 + 32), 0LL);
}


void __fastcall MissionListViewManager__SvtEffCaller(
        MissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  AvalonSceneManager_c *v16; // x0
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
  ServantRewardAction_o *svtRewardComp; // x19
  System_Action_o *v31; // x20

  if ( (byte_42E8779 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__, v9, v10, v11);
    sub_B5D5C4(&MissionListViewManager___c__DisplayClass60_0_TypeInfo, v12, v13, v14);
    byte_42E8779 = 1;
  }
  v15 = sub_B5D694(MissionListViewManager___c__DisplayClass60_0_TypeInfo);
  MissionListViewManager___c__DisplayClass60_0___ctor((MissionListViewManager___c__DisplayClass60_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_9;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  svtRewardComp = this->fields.svtRewardComp;
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v15,
    Method_MissionListViewManager___c__DisplayClass60_0__SvtEffCaller_b__0__,
    0LL);
  v16 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !svtRewardComp )
LABEL_9:
    sub_B5D69C(v16, v17);
  ServantRewardAction__Play(svtRewardComp, v31, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
}


bool __fastcall MissionListViewManager__TryGetServantCostumeEntity(
        MissionListViewManager_o *this,
        ServantCostumeEntity_o **resultEntity,
        int32_t objectId,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  int32_t v12; // w20
  System_String_o *v13; // x0
  int32_t v14; // w21
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = objectId;
  if ( (byte_42E877A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCostumeMaster___, (_DWORD)resultEntity, objectId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E877A = 1;
  }
  Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v16, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_9;
  v10 = Master_WarQuestSelectionMaster;
  v11 = System_String__Substring_44641524(
          Master_WarQuestSelectionMaster,
          0,
          Master_WarQuestSelectionMaster->fields.m_stringLength - 2,
          0LL);
  v12 = System_Int32__Parse(v11, 0LL);
  v13 = System_String__Substring(v10, v10->fields.m_stringLength - 2, 0LL);
  v14 = System_Int32__Parse(v13, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
  return ServantCostumeMaster__TryGetEntity(
           (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
           resultEntity,
           v12,
           v14,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AlphaTransitionCalculator_o *rewardIconAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_rewardIconAlphaCalculator; // x20
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  float realtimeSinceStartup; // s0
  float v19; // s0
  float v20; // s0
  float alphaAnimTimeOld; // s9
  float v22; // s8
  MissionListViewManager_c *v23; // x0
  float v24; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v26; // w21
  MissionListViewManager_c *v27; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v29; // w21

  if ( (byte_42E8765 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TransitionCalculator_float__Update__, v5, v6, v7);
    byte_42E8765 = 1;
  }
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  p_rewardIconAlphaCalculator = &this->fields.rewardIconAlphaCalculator;
  if ( !rewardIconAlphaCalculator )
  {
    v10 = (System_Int32_array **)MissionListViewManager__CreateRewardIconAlphaCalculator(0LL, method);
    *p_rewardIconAlphaCalculator = (struct AlphaTransitionCalculator_o *)v10;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.rewardIconAlphaCalculator,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
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
  v19 = TransitionCalculator_float___Update(
          (TransitionCalculator_float__o *)rewardIconAlphaCalculator,
          (const MethodInfo_264E3D0 *)Method_TransitionCalculator_float__Update__);
  rewardIconAlphaCalculator = this->fields.rewardIconAlphaCalculator;
  this->fields.alphaAnimNow = v19;
  if ( !rewardIconAlphaCalculator )
    goto LABEL_27;
  if ( AlphaTransitionCalculator__IsFadeInFinished(rewardIconAlphaCalculator, 0LL) )
  {
    v20 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v22 = v20;
    v23 = MissionListViewManager_TypeInfo;
    if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
      v23 = MissionListViewManager_TypeInfo;
    }
    if ( (float)(v22 - alphaAnimTimeOld) >= v23->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    sub_B5D69C(rewardIconAlphaCalculator, v17);
  AlphaTransitionCalculator__StartFadeIn(rewardIconAlphaCalculator, 0LL);
  v24 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  alphaAnimCnt = this->fields.alphaAnimCnt;
  this->fields.alphaAnimTimeOld = v24;
  v26 = alphaAnimCnt + 1;
  this->fields.alphaAnimCnt = alphaAnimCnt + 1;
  v27 = MissionListViewManager_TypeInfo;
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
    v27 = MissionListViewManager_TypeInfo;
  }
  ALPHA_ANIM_COUNT_RESET_VAL = v27->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
  if ( v26 >= ALPHA_ANIM_COUNT_RESET_VAL )
  {
    v29 = this->fields.alphaAnimCnt;
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      ALPHA_ANIM_COUNT_RESET_VAL = MissionListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    }
    this->fields.alphaAnimCnt = v29 - ALPHA_ANIM_COUNT_RESET_VAL;
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MissionListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8763 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8763 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MissionListViewManager_o *)sub_B5D990(v8);
  MissionListViewManager__remove_callbackFunc2(v11, v12, v13);
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MissionListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E8764 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8764 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MissionListViewManager_o *)sub_B5D990(v8);
  MissionListViewManager__get_ReceiveMissionReward(v11, v12);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v14; // x20

  if ( (byte_42E5F55 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__, v8, v9, v10);
    byte_42E5F55 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__LoadEquipGetEffect(v14, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__1(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x21
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_42E5F56 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__, v8, v9, v10);
    byte_42E5F56 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass55_0__StartRewardEquipGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__OpenEquipGetEffect(v14, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass55_0___StartRewardEquipGetEffect_b__2(
        MissionListViewManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5F57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F57 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseEquipGetEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v14; // x20

  if ( (byte_42E5F58 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(
      &Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__,
      v8,
      v9,
      v10);
    byte_42E5F58 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__LoadCostumeReleaseEffect(v14, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__1(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x21
  System_String_o *name; // x20

  if ( (byte_42E5F59 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(
      &Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__,
      v8,
      v9,
      v10);
    byte_42E5F59 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  name = this->fields.name;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass56_0__StartRewardCostumeReleaseGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__OpenCostumeReleaseEffect(v14, 0, name, _9__2, 23, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass56_0___StartRewardCostumeReleaseGetEffect_b__2(
        MissionListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5F5A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F5A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ReleaseCostumeReleaseEffect(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  MissionInfoMaker_c *v17; // x0
  System_String_o *ITEM_GET_ASSET_NAME; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v22; // x20
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E5F5B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__, v14, v15, v16);
    byte_42E5F5B = 1;
  }
  v17 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v17 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_ASSET_NAME = v17->static_fields->ITEM_GET_ASSET_NAME;
  effectId = this->fields.effectId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  v20 = System_String__Format(ITEM_GET_ASSET_NAME, v19, 0LL);
  _9__1 = this->fields.__9__1;
  v22 = v20;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass57_0__StartRewardItemGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v22, _9__1, 1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass57_0___StartRewardItemGetEffect_b__1(
        MissionListViewManager___c__DisplayClass57_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  Il2CppObject *v30; // x20
  System_String_o *transform; // x0
  __int64 v32; // x1
  AssetData_o *monitor; // x21
  MissionInfoMaker_c *v34; // x0
  System_String_o *ITEM_GET_EFFECT_NAME; // x22
  Il2CppObject *v36; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *v38; // x21
  struct MissionListViewManager_o *_4__this; // x8
  QuestRewardItemAction_o *klass; // x19
  System_Action_o *v41; // x21
  int32_t effectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E5F5C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__, v24, v25, v26);
    sub_B5D5C4(&MissionListViewManager___c__DisplayClass57_1_TypeInfo, v27, v28, v29);
    byte_42E5F5C = 1;
  }
  v30 = (Il2CppObject *)sub_B5D694(MissionListViewManager___c__DisplayClass57_1_TypeInfo);
  System_Object___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_17;
  v30[2].klass = (Il2CppClass *)this;
  sub_B5D560(&v30[2]);
  v30[1].monitor = data;
  sub_B5D560(&v30[1].monitor);
  monitor = (AssetData_o *)v30[1].monitor;
  v34 = MissionInfoMaker_TypeInfo;
  if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v34 = MissionInfoMaker_TypeInfo;
  }
  ITEM_GET_EFFECT_NAME = v34->static_fields->ITEM_GET_EFFECT_NAME;
  effectId = this->fields.effectId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &effectId);
  transform = System_String__Format(ITEM_GET_EFFECT_NAME, v36, 0LL);
  if ( !monitor )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               monitor,
                                                                               transform,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   Object_WarBoardWaitTimeSetting,
                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_17;
  v38 = (UnityEngine_GameObject_o *)transform;
  transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.instantiatingPOS, 0LL);
  GameObjectExtensions__ResetTransform(v38, 0LL);
  v30[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                  v38,
                                  (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_QuestRewardItemAction___);
  sub_B5D560(&v30[1]);
  transform = (System_String_o *)v30[1].klass;
  if ( !transform
    || (QuestRewardItemAction__Setup((QuestRewardItemAction_o *)transform, this->fields.questRewardInfo, 0LL),
        klass = (QuestRewardItemAction_o *)v30[1].klass,
        v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v41,
          v30,
          Method_MissionListViewManager___c__DisplayClass57_1__StartRewardItemGetEffect_b__2__,
          0LL),
        !klass) )
  {
LABEL_17:
    sub_B5D69C(transform, v32);
  }
  QuestRewardItemAction__Play(klass, 0, v41, 0.0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *mRewardItemAction; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *data; // x20
  struct MissionListViewManager___c__DisplayClass57_0_o *CS___8__locals1; // x8

  if ( (byte_42E5F5D & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E5F5D = 1;
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
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30657564(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (mRewardItemAction = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
LABEL_13:
    sub_B5D69C(mRewardItemAction, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__1; // x22
  SummonAssetManager_o *v14; // x20

  if ( (byte_42E5F5E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__, v8, v9, v10);
    byte_42E5F5E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  _9__1 = this->fields.__9__1;
  v14 = (SummonAssetManager_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  SummonAssetManager__LoadSummonAssets(v14, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__1(
        MissionListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v33; // x1
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *_4__this; // x20
  UserServantEntity_o *v36; // x21
  struct MissionListViewManager_o *v37; // x8
  struct MissionListViewManager_o *v38; // x8
  ServantRewardAction_o *svtRewardComp; // x20
  __int64 v40; // x22
  __int64 v41; // x23
  int32_t v42; // w0
  __int128 v43; // q1
  int32_t v44; // w22
  int64_t v45; // x0
  __int64 v46; // x8
  int64_t v47; // x21
  bool isNew; // w5
  int32_t v49; // w3
  bool v50; // w6
  int32_t v51; // w7
  ServantRewardAction_o *v52; // x0
  int32_t v53; // w1
  int64_t v54; // x2
  UserServantEntity_o *v55; // x0
  struct MissionListViewManager_o *v56; // x20
  UserServantEntity_o *v57; // x21
  struct MissionListViewManager_o *v58; // x8
  struct MissionListViewManager_o *v59; // x8
  ServantRewardAction_o *v60; // x20
  __int128 v61; // q1
  bool v62; // w2
  int64_t v63; // x1
  bool v64; // w3
  int32_t v65; // w4
  ServantRewardAction_o *v66; // x0
  int32_t v67; // w0
  __int128 v68; // q1
  int32_t v69; // w22
  int64_t v70; // x0
  __int64 v71; // x8
  int64_t v72; // x21
  __int128 v73; // q1
  System_Action_o *_9__2; // x21
  MissionListViewManager_o *v75; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+90h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_42E5F5F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__, v29, v30, v31);
    byte_42E5F5F = 1;
  }
  if ( Gift__IsServant(this->fields.giftType, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                 this->fields.userSvtID,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      _4__this = this->fields.__4__this;
      v36 = Entity;
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v37 = this->fields.__4__this;
      if ( v37 )
      {
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                                      (SummonAssetManager_o *)Master_WarQuestSelectionMaster,
                                                      v37->fields.instantiatingPOS,
                                                      0,
                                                      0LL);
          if ( _4__this )
          {
            _4__this->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
            sub_B5D560(&_4__this->fields.svtRewardComp);
            v38 = this->fields.__4__this;
            if ( v38 )
            {
              if ( v36 )
              {
                svtRewardComp = v38->fields.svtRewardComp;
                v41 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
                v40 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
                if ( this->fields.isDoEffect )
                {
                  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v81.fields.currentCryptoKey = v41;
                  *(_QWORD *)&v81.fields.fakeValue = v40;
                  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v81, 0LL);
                  v43 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
                  v44 = v42;
                  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v80.fields.fakeValue = v43;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v79 = v80;
                  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v79, 0LL);
                  v46 = *(_QWORD *)&v36->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v82.fields.fakeValue = *(_QWORD *)&v36->fields.limitCount.fields.fakeValue;
                  v47 = v45;
                  *(_QWORD *)&v82.fields.currentCryptoKey = v46;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                     v82,
                                                     0LL);
                  if ( svtRewardComp )
                  {
                    isNew = this->fields.isNew;
                    v49 = Master_WarQuestSelectionMaster;
                    v50 = 1;
                    v51 = 14;
                    v52 = svtRewardComp;
                    v53 = v44;
                    v54 = v47;
LABEL_46:
                    ServantRewardAction__Setup(v52, v53, v54, v49, 1, isNew, v50, v51, 0LL);
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
                  *(_QWORD *)&v83.fields.currentCryptoKey = v41;
                  *(_QWORD *)&v83.fields.fakeValue = v40;
                  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v83, 0LL);
                  v68 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
                  v69 = v67;
                  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v80.fields.fakeValue = v68;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v78 = v80;
                  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v78, 0LL);
                  v71 = *(_QWORD *)&v36->fields.limitCount.fields.currentCryptoKey;
                  *(_QWORD *)&v84.fields.fakeValue = *(_QWORD *)&v36->fields.limitCount.fields.fakeValue;
                  v72 = v70;
                  *(_QWORD *)&v84.fields.currentCryptoKey = v71;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                     v84,
                                                     0LL);
                  if ( svtRewardComp )
                  {
                    v49 = Master_WarQuestSelectionMaster;
                    v51 = 6;
                    v52 = svtRewardComp;
                    v53 = v69;
                    v54 = v72;
                    isNew = 0;
                    v50 = 0;
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v33);
  }
  Master_WarQuestSelectionMaster = Gift__IsCommandCode(this->fields.giftType, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
    goto LABEL_53;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  v55 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
          this->fields.userSvtID,
          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v56 = this->fields.__4__this;
  v57 = v55;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v58 = this->fields.__4__this;
  if ( !v58 )
    goto LABEL_57;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  Master_WarQuestSelectionMaster = (int64_t)SummonAssetManager__InstantiateSvtGetPrefab(
                                              (SummonAssetManager_o *)Master_WarQuestSelectionMaster,
                                              v58->fields.instantiatingPOS,
                                              0,
                                              0LL);
  if ( !v56 )
    goto LABEL_57;
  v56->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B5D560(&v56->fields.svtRewardComp);
  v59 = this->fields.__4__this;
  if ( !v59 || !v57 )
    goto LABEL_57;
  v60 = v59->fields.svtRewardComp;
  if ( this->fields.isDoEffect )
  {
    v61 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
    *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v80.fields.fakeValue = v61;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v77 = v80;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v77, 0LL);
    if ( !v60 )
      goto LABEL_57;
    v62 = this->fields.isNew;
    v63 = Master_WarQuestSelectionMaster;
    v64 = 1;
    v65 = 14;
    v66 = v60;
  }
  else
  {
    v73 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
    *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v80.fields.fakeValue = v73;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v76 = v80;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v76, 0LL);
    if ( !v60 )
      goto LABEL_57;
    v63 = Master_WarQuestSelectionMaster;
    v65 = 6;
    v66 = v60;
    v62 = 0;
    v64 = 0;
  }
  ServantRewardAction__SetupCommandCode_29038332(v66, v63, v62, v64, v65, 0LL);
LABEL_53:
  _9__2 = this->fields.__9__2;
  v75 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass58_0__StartRewardGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v75 )
    goto LABEL_57;
  MissionListViewManager__SvtEffCaller(v75, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass58_0___StartRewardGetEffect_b__2(
        MissionListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonAssetManager_o *Instance; // x0
  __int64 v6; // x1
  struct MissionListViewManager_o *_4__this; // x8

  if ( (byte_42E5F60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F60 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance
    || (SummonAssetManager__UnloadSummonAssets(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (SummonAssetManager_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x1
  struct MissionListViewManager_o *_4__this; // x8
  struct GetSvts_array *getSvtList; // x8
  __int64 callCnt; // x9
  GetSvts_o *v31; // x8
  UserServantEntity_o *Entity; // x0
  struct MissionListViewManager_o *v33; // x21
  UserServantEntity_o *v34; // x20
  struct MissionListViewManager_o *v35; // x8
  struct MissionListViewManager_o *v36; // x8
  struct GetSvts_array *v37; // x8
  __int64 v38; // x9
  struct MissionListViewManager_o *v39; // x9
  ServantRewardAction_o *svtRewardComp; // x21
  __int64 v41; // x22
  __int64 v42; // x23
  int32_t v43; // w0
  __int128 v44; // q1
  int32_t v45; // w22
  int64_t v46; // x0
  __int64 v47; // x8
  int64_t v48; // x20
  struct MissionListViewManager_o *v49; // x8
  struct GetSvts_array *v50; // x8
  __int64 v51; // x9
  GetSvts_o *v52; // x8
  int32_t v53; // w0
  __int128 v54; // q1
  int32_t v55; // w22
  int64_t v56; // x0
  __int64 v57; // x8
  int64_t v58; // x20
  System_Action_o *_9__1; // x21
  MissionListViewManager_o *v60; // x20
  __int64 v61; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_42E5F61 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__, v23, v24, v25);
    byte_42E5F61 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  getSvtList = _4__this->fields.getSvtList;
  if ( !getSvtList )
    goto LABEL_45;
  callCnt = this->fields.callCnt;
  if ( (unsigned int)callCnt >= getSvtList->max_length )
    goto LABEL_46;
  v31 = getSvtList->m_Items[callCnt];
  if ( !v31 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             Master_WarQuestSelectionMaster,
             v31->fields.userSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v33 = this->fields.__4__this;
  v34 = Entity;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v35 = this->fields.__4__this;
  if ( !v35 )
    goto LABEL_45;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SummonAssetManager__InstantiateSvtGetPrefab((SummonAssetManager_o *)Master_WarQuestSelectionMaster, v35->fields.instantiatingPOS, 0, 0LL);
  if ( !v33 )
    goto LABEL_45;
  v33->fields.svtRewardComp = (struct ServantRewardAction_o *)Master_WarQuestSelectionMaster;
  sub_B5D560(&v33->fields.svtRewardComp);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_45;
  v37 = v36->fields.getSvtList;
  if ( !v37 )
    goto LABEL_45;
  v38 = this->fields.callCnt;
  if ( (unsigned int)v38 >= v37->max_length )
  {
LABEL_46:
    v61 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v61, 0LL);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v37->m_Items[v38];
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)GetSvts__isDoGetEff((GetSvts_o *)Master_WarQuestSelectionMaster, 0LL);
  v39 = this->fields.__4__this;
  if ( !v39 || !v34 )
    goto LABEL_45;
  svtRewardComp = v39->fields.svtRewardComp;
  v42 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v67.fields.currentCryptoKey = v42;
    *(_QWORD *)&v67.fields.fakeValue = v41;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v67, 0LL);
    v54 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
    v55 = v53;
    *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v64.fields.fakeValue = v54;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v62 = v64;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v62, 0LL);
    v57 = *(_QWORD *)&v34->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v68.fields.fakeValue = *(_QWORD *)&v34->fields.limitCount.fields.fakeValue;
    v58 = v56;
    *(_QWORD *)&v68.fields.currentCryptoKey = v57;
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v68, 0LL);
    if ( svtRewardComp )
    {
      ServantRewardAction__Setup(svtRewardComp, v55, v58, (int32_t)Master_WarQuestSelectionMaster, 1, 0, 0, 2, 0LL);
      goto LABEL_41;
    }
LABEL_45:
    sub_B5D69C(Master_WarQuestSelectionMaster, v27);
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v65.fields.currentCryptoKey = v42;
  *(_QWORD *)&v65.fields.fakeValue = v41;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v65, 0LL);
  v44 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
  v45 = v43;
  *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v64.fields.fakeValue = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v63 = v64;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v63, 0LL);
  v47 = *(_QWORD *)&v34->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v66.fields.fakeValue = *(_QWORD *)&v34->fields.limitCount.fields.fakeValue;
  v48 = v46;
  *(_QWORD *)&v66.fields.currentCryptoKey = v47;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
  v49 = this->fields.__4__this;
  if ( !v49 )
    goto LABEL_45;
  v50 = v49->fields.getSvtList;
  if ( !v50 )
    goto LABEL_45;
  v51 = this->fields.callCnt;
  if ( (unsigned int)v51 >= v50->max_length )
    goto LABEL_46;
  v52 = v50->m_Items[v51];
  if ( !v52 || !svtRewardComp )
    goto LABEL_45;
  ServantRewardAction__Setup(
    svtRewardComp,
    v45,
    v48,
    (int32_t)Master_WarQuestSelectionMaster,
    1,
    v52->fields.isNew,
    1,
    10,
    0LL);
LABEL_41:
  _9__1 = this->fields.__9__1;
  v60 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v60 )
    goto LABEL_45;
  MissionListViewManager__SvtEffCaller(v60, _9__1, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__1(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21

  if ( (byte_42E5F62 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__, v11, v12, v13);
    byte_42E5F62 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_MissionListViewManager___c__DisplayClass59_0__StartSvtListGetEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v16 )
    sub_B5D69C(Instance, v15);
  CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, _9__2, 0LL);
}


void __fastcall MissionListViewManager___c__DisplayClass59_0___StartSvtListGetEffect_b__2(
        MissionListViewManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  MissionListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  MissionListViewManager___c__DisplayClass60_0_o *v4; // x19
  struct MissionListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *gameObject; // x20

  v4 = this;
  if ( (byte_42E5F63 & 1) == 0 )
  {
    this = (MissionListViewManager___c__DisplayClass60_0_o *)sub_B5D5C4(
                                                               &UnityEngine_Object_TypeInfo,
                                                               (_DWORD)method,
                                                               v2,
                                                               v3);
    byte_42E5F63 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (this = (MissionListViewManager___c__DisplayClass60_0_o *)_4__this->fields.svtRewardComp) == 0LL )
    sub_B5D69C(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}