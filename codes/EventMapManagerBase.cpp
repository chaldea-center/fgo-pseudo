void __fastcall EventMapManagerBase___ctor(EventMapManagerBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventMapManagerBase__AllTouchBlockForceFalse(EventMapManagerBase_o *this, const MethodInfo *method)
{
  EventMapManagerBase_c *klass; // x8

  klass = this->klass;
  *(_QWORD *)&this->fields.touchBlockNum = 0LL;
  ((void (__fastcall *)(EventMapManagerBase_o *, _QWORD, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
    this,
    0LL,
    klass->vtable._31_SetCameraWorkBlock.methodPtr);
}


void __fastcall EventMapManagerBase__DestroyMapObjects(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventMapManagerBase__ExtractMapObjectFromAssetData(
        EventMapManagerBase_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMapManagerBase__Finish(EventMapManagerBase_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  ((void (__fastcall *)(EventMapManagerBase_o *, Il2CppMethodPointer))this->klass->vtable._26_DestroyMapObjects.method)(
    this,
    this->klass->vtable._27_ReleaseAssets.methodPtr);
  ((void (__fastcall *)(EventMapManagerBase_o *, Il2CppMethodPointer))this->klass->vtable._27_ReleaseAssets.method)(
    this,
    this->klass->vtable._28_Finish.methodPtr);
  this->fields.terminalMap = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.terminalMap, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.mapCamera = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mapCamera, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.rootRoadP = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rootRoadP, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.rootSpotP = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rootSpotP, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.rootPathP = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rootPathP, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.rootGimmickP = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rootGimmickP, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.rootEffectP = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rootEffectP, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.warInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.warInfo, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.mapInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mapInfo, 0LL, v51, v52, v53, v54, v55, v56);
}


void __fastcall EventMapManagerBase__Initialize(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall EventMapManagerBase__IsShowQuestListWhenComingBackToMap(
        EventMapManagerBase_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall EventMapManagerBase__LoadAssets(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall EventMapManagerBase__LocateDialogToUiRoot(
        EventMapManagerBase_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_GameObject_o *mInstance; // x0
  System_Nullable_Vector3__o v6; // 0:x2.16

  if ( (byte_4215A1C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, dialog);
    byte_4215A1C = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, dialog);
    byte_421083D = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_GameObject_o *)v4->static_fields->mInstance;
  if ( !mInstance
    || (*(_QWORD *)&v6.fields.value.fields.x = 0LL,
        *(_QWORD *)&v6.fields.value.fields.z = 0LL,
        TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, dialog, v6, 0LL),
        !dialog)
    || (mInstance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL )
  {
    sub_B0D97C(mInstance);
  }
  UnityEngine_GameObject__SetActive(mInstance, 0, 0LL);
}


void __fastcall EventMapManagerBase__OnAfterQuestAfterAction(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall EventMapManagerBase__OnAfterSpotCreated(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall EventMapManagerBase__OnBeforeQuestAfterAction(
        EventMapManagerBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall EventMapManagerBase__OnEveryActionEnd(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventMapManagerBase__ReleaseAssets(EventMapManagerBase_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapManagerBase__SetAllTouchBlock(
        EventMapManagerBase_o *this,
        bool value,
        const MethodInfo *method)
{
  EventMapManagerBase_o *v4; // x20
  int32_t touchBlockNum; // w8
  int v6; // w9

  v4 = this;
  if ( (byte_4215A1A & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, value);
    byte_4215A1A = 1;
  }
  if ( !v4
    || ((touchBlockNum = v4->fields.touchBlockNum, value) ? (v6 = 1) : (v6 = -1),
        v4->fields.touchBlockNum = touchBlockNum + v6,
        v4->fields.touchBlockNum = UnityEngine_Mathf__Max_40819140(touchBlockNum + v6, 0, 0LL),
        (this = (EventMapManagerBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  CommonUI__SetEventFadeMaskCollider((CommonUI_o *)this, v4->fields.touchBlockNum > 0, 0LL);
  ((void (__fastcall *)(EventMapManagerBase_o *, bool, Il2CppMethodPointer))v4->klass->vtable._31_SetCameraWorkBlock.method)(
    v4,
    value,
    v4->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapManagerBase__SetCameraWorkBlock(
        EventMapManagerBase_o *this,
        bool value,
        const MethodInfo *method)
{
  EventMapManagerBase_o *v4; // x19
  int32_t cameraWorkBlockNum; // w8
  int v6; // w9
  UnityEngine_Object_o *mapCamera; // x20
  struct MapCamera_o *v8; // x8

  v4 = this;
  if ( (byte_4215A1B & 1) == 0 )
  {
    this = (EventMapManagerBase_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, value);
    byte_4215A1B = 1;
  }
  if ( !v4 )
    goto LABEL_14;
  cameraWorkBlockNum = v4->fields.cameraWorkBlockNum;
  if ( value )
    v6 = 1;
  else
    v6 = -1;
  v4->fields.cameraWorkBlockNum = cameraWorkBlockNum + v6;
  v4->fields.cameraWorkBlockNum = UnityEngine_Mathf__Max_40819140(cameraWorkBlockNum + v6, 0, 0LL);
  mapCamera = (UnityEngine_Object_o *)v4->fields.mapCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventMapManagerBase_o *)UnityEngine_Object__op_Inequality(mapCamera, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v4->fields.mapCamera;
    if ( v8 )
    {
      v8->fields._IsTouchEnable_k__BackingField = v4->fields.cameraWorkBlockNum < 1;
      return;
    }
LABEL_14:
    sub_B0D97C(this);
  }
}


void __fastcall EventMapManagerBase__SetClickPanelEnable(
        EventMapManagerBase_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventMapManagerBase__SetTerminalMapInfo(
        EventMapManagerBase_o *this,
        ScrTerminalMap_o *terminalMap,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        MapCamera_o *mapCamera,
        UnityEngine_GameObject_o *rootEffectP,
        UnityEngine_GameObject_o *rootGimmickP,
        UnityEngine_GameObject_o *rootPathP,
        UnityEngine_GameObject_o *rootRoadP,
        UnityEngine_GameObject_o *rootSpotP,
        const MethodInfo *method)
{
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
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  this->fields.terminalMap = terminalMap;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.terminalMap,
    (System_Int32_array **)terminalMap,
    (System_String_array **)mapInfo,
    (System_String_array **)warInfo,
    (System_Boolean_array **)mapCamera,
    (System_Int32_array **)rootEffectP,
    (System_Int32_array *)rootGimmickP,
    (System_Int32_array *)rootPathP);
  this->fields.mapInfo = mapInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mapInfo,
    (System_Int32_array **)mapInfo,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.warInfo = warInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.warInfo,
    (System_Int32_array **)warInfo,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.mapCamera = mapCamera;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mapCamera,
    (System_Int32_array **)mapCamera,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.rootEffectP = rootEffectP;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rootEffectP,
    (System_Int32_array **)rootEffectP,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.rootGimmickP = rootGimmickP;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rootGimmickP,
    (System_Int32_array **)rootGimmickP,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.rootPathP = rootPathP;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rootPathP,
    (System_Int32_array **)rootPathP,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.rootRoadP = rootRoadP;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rootRoadP,
    (System_Int32_array **)rootRoadP,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.rootSpotP = rootSpotP;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rootSpotP,
    (System_Int32_array **)rootSpotP,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
}