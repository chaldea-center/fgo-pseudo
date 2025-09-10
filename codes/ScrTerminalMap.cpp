void ScrTerminalMap___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ScrTerminalMap_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ScrTerminalMap_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ScrTerminalMap_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct ScrTerminalMap_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct ScrTerminalMap_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct ScrTerminalMap_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct ScrTerminalMap_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct ScrTerminalMap_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct ScrTerminalMap_StaticFields *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct ScrTerminalMap_StaticFields *v39; // x0
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct ScrTerminalMap_StaticFields *v43; // x0
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct ScrTerminalMap_StaticFields *v47; // x0
  int32_t v48; // w1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct ScrTerminalMap_StaticFields *v51; // x0
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct ScrTerminalMap_StaticFields *v55; // x0
  int32_t v56; // w1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct ScrTerminalMap_StaticFields *v59; // x0
  int32_t v60; // w1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct ScrTerminalMap_StaticFields *v63; // x0
  int32_t v64; // w1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct ScrTerminalMap_StaticFields *v67; // x8

  if ( (byte_4C244C3 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&StringLiteral_8889/*"MapEffect_{0:D6}_{1:D2}"*/);
    sub_1C2D490(&StringLiteral_10946/*"RAID_TIME_OVER_NOTICE_"*/);
    sub_1C2D490(&StringLiteral_8914/*"MapSpotPath_{0}"*/);
    sub_1C2D490(&StringLiteral_15598/*"Water"*/);
    sub_1C2D490(&StringLiteral_13689/*"Terminal/QuestMap/Capter{0:D4}"*/);
    sub_1C2D490(&StringLiteral_8908/*"MapGimmickPath_{0}"*/);
    sub_1C2D490(&StringLiteral_1394/*"3DSpot"*/);
    sub_1C2D490(&StringLiteral_20533/*"img_road{0:D4}_{1:D2}"*/);
    sub_1C2D490(&StringLiteral_8888/*"MapEffect_{0:D4}_{1:D2}"*/);
    sub_1C2D490(&StringLiteral_13690/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/);
    sub_1C2D490(&StringLiteral_19373/*"fadeIn"*/);
    sub_1C2D490(&StringLiteral_1393/*"3DMap"*/);
    sub_1C2D490(&StringLiteral_8911/*"MapGimmick_{0:D4}"*/);
    sub_1C2D490(&StringLiteral_20519/*"img_questmap_{0:D6}"*/);
    sub_1C2D490(&StringLiteral_13685/*"Terminal/MapImgs/"*/);
    sub_1C2D490(&StringLiteral_10804/*"QMap_Cap{0:D4}_Atlas"*/);
    sub_1C2D490(&StringLiteral_10805/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/);
    byte_4C244C3 = 1;
  }
  ScrTerminalMap_TypeInfo->static_fields->RAID_TIME_OVER_NOTICE_KEY = (struct System_String_o *)StringLiteral_10946/*"RAID_TIME_OVER_NOTICE_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)ScrTerminalMap_TypeInfo->static_fields, StringLiteral_10946/*"RAID_TIME_OVER_NOTICE_"*/, v1, v2);
  v3 = StringLiteral_13685/*"Terminal/MapImgs/"*/;
  static_fields = ScrTerminalMap_TypeInfo->static_fields;
  static_fields->MAP_IMAGE_ASSET_PATH = (struct System_String_o *)StringLiteral_13685/*"Terminal/MapImgs/"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->MAP_IMAGE_ASSET_PATH, v3, v5, v6);
  v7 = StringLiteral_13689/*"Terminal/QuestMap/Capter{0:D4}"*/;
  v8 = ScrTerminalMap_TypeInfo->static_fields;
  v8->ASSETS_NAME_PACK = (struct System_String_o *)StringLiteral_13689/*"Terminal/QuestMap/Capter{0:D4}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->ASSETS_NAME_PACK, v7, v9, v10);
  v11 = StringLiteral_13690/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/;
  v12 = ScrTerminalMap_TypeInfo->static_fields;
  v12->ASSETS_NAME_PACK_MULTI_MAP = (struct System_String_o *)StringLiteral_13690/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->ASSETS_NAME_PACK_MULTI_MAP, v11, v13, v14);
  v15 = StringLiteral_20519/*"img_questmap_{0:D6}"*/;
  v16 = ScrTerminalMap_TypeInfo->static_fields;
  v16->ASSETS_NAME_BG = (struct System_String_o *)StringLiteral_20519/*"img_questmap_{0:D6}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v16->ASSETS_NAME_BG, v15, v17, v18);
  v19 = StringLiteral_10804/*"QMap_Cap{0:D4}_Atlas"*/;
  v20 = ScrTerminalMap_TypeInfo->static_fields;
  v20->ASSETS_NAME_ATLAS = (struct System_String_o *)StringLiteral_10804/*"QMap_Cap{0:D4}_Atlas"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->ASSETS_NAME_ATLAS, v19, v21, v22);
  v23 = StringLiteral_10805/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/;
  v24 = ScrTerminalMap_TypeInfo->static_fields;
  v24->ASSETS_NAME_ATLAS_MULTI_MAP = (struct System_String_o *)StringLiteral_10805/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->ASSETS_NAME_ATLAS_MULTI_MAP, v23, v25, v26);
  v27 = StringLiteral_8888/*"MapEffect_{0:D4}_{1:D2}"*/;
  v28 = ScrTerminalMap_TypeInfo->static_fields;
  v28->ASSETS_NAME_MAP_EFFECT = (struct System_String_o *)StringLiteral_8888/*"MapEffect_{0:D4}_{1:D2}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->ASSETS_NAME_MAP_EFFECT, v27, v29, v30);
  v31 = StringLiteral_8889/*"MapEffect_{0:D6}_{1:D2}"*/;
  v32 = ScrTerminalMap_TypeInfo->static_fields;
  v32->ASSETS_NAME_MAP_EFFECT_UPPER = (struct System_String_o *)StringLiteral_8889/*"MapEffect_{0:D6}_{1:D2}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v32->ASSETS_NAME_MAP_EFFECT_UPPER, v31, v33, v34);
  v35 = ScrTerminalMap_TypeInfo->static_fields;
  v36 = StringLiteral_8911/*"MapGimmick_{0:D4}"*/;
  v35->ASSETS_NAME_MAP_GIMMICK = (struct System_String_o *)StringLiteral_8911/*"MapGimmick_{0:D4}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v35->ASSETS_NAME_MAP_GIMMICK, v36, v37, v38);
  v39 = ScrTerminalMap_TypeInfo->static_fields;
  v40 = StringLiteral_20533/*"img_road{0:D4}_{1:D2}"*/;
  v39->ASSETS_NAME_SPOT_ROAD = (struct System_String_o *)StringLiteral_20533/*"img_road{0:D4}_{1:D2}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v39->ASSETS_NAME_SPOT_ROAD, v40, v41, v42);
  v43 = ScrTerminalMap_TypeInfo->static_fields;
  v44 = StringLiteral_8914/*"MapSpotPath_{0}"*/;
  v43->ASSETS_NAME_SPOT_PATH = (struct System_String_o *)StringLiteral_8914/*"MapSpotPath_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v43->ASSETS_NAME_SPOT_PATH, v44, v45, v46);
  v47 = ScrTerminalMap_TypeInfo->static_fields;
  v48 = StringLiteral_8908/*"MapGimmickPath_{0}"*/;
  v47->ASSETS_NAME_MAP_GIMMICK_PATH = (struct System_String_o *)StringLiteral_8908/*"MapGimmickPath_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v47->ASSETS_NAME_MAP_GIMMICK_PATH, v48, v49, v50);
  v51 = ScrTerminalMap_TypeInfo->static_fields;
  v52 = StringLiteral_19373/*"fadeIn"*/;
  v51->FIRST_FADE_TYPE_DURATION = (struct System_String_o *)StringLiteral_19373/*"fadeIn"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v51->FIRST_FADE_TYPE_DURATION, v52, v53, v54);
  v55 = ScrTerminalMap_TypeInfo->static_fields;
  v56 = StringLiteral_15598/*"Water"*/;
  v55->MAP_DISP_LAYER_DEFAULT = (struct System_String_o *)StringLiteral_15598/*"Water"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v55->MAP_DISP_LAYER_DEFAULT, v56, v57, v58);
  v59 = ScrTerminalMap_TypeInfo->static_fields;
  v60 = StringLiteral_1393/*"3DMap"*/;
  v59->MAP_DISP_LAYER_MODEL = (struct System_String_o *)StringLiteral_1393/*"3DMap"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v59->MAP_DISP_LAYER_MODEL, v60, v61, v62);
  v63 = ScrTerminalMap_TypeInfo->static_fields;
  v64 = StringLiteral_1394/*"3DSpot"*/;
  v63->MAP_DISP_LAYER_SPOT = (struct System_String_o *)StringLiteral_1394/*"3DSpot"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v63->MAP_DISP_LAYER_SPOT, v64, v65, v66);
  v67 = ScrTerminalMap_TypeInfo->static_fields;
  *(_QWORD *)&v67->AUTO_QUEST_SQUARE_INDEX_1 = 0x1000000006LL;
  v67->AUTO_QUEST_SQUARE_INDEX_3 = 11;
}


void ScrTerminalMap___ctor(ScrTerminalMap_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  MapModelManager_c *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C244C2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapEffectComponent___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapGimmickComponent__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapEffectComponent__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
    sub_1C2D490(&MapModelManager_TypeInfo);
    byte_4C244C2 = 1;
  }
  this->fields.PLAYER_ICON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.currentWarId = -1;
  *(_QWORD *)&this->fields.PLAYER_ICON_POS.fields.x = 0x4220000000000000LL;
  this->fields.currentAssetId = -1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.assetsAtlases = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.assetsAtlases, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  this->fields.spotList = (struct System_Collections_Generic_List_SrcSpotBasePrefab__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.spotList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapGimmickComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapGimmickComponent___ctor__);
  this->fields.gimmickList = (struct System_Collections_Generic_List_MapGimmickComponent__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.gimmickList, (int32_t)v9, v10, v11);
  *(_QWORD *)&this->fields.requestFocusSpotId = -1;
  v12 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v12 = MapModelManager_TypeInfo;
  }
  this->fields.currentMapLayerId = v12->static_fields->LAYER_LOWER_ID;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mapEffectPrefabList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapEffectPrefabList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapEffectComponent___ctor__);
  this->fields.mapEffectList = (struct System_Collections_Generic_List_MapEffectComponent__o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapEffectList, (int32_t)v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScrTerminalMap__AfterActionPlay(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x19
  System_Action_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  EventMapManagerInterface_c *klass; // x8
  __int64 v8; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v10; // x0

  if ( (byte_4C24468 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__AfterActionPlay_b__339_0__);
    byte_4C24468 = 1;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrTerminalMap__AfterActionPlay_b__339_0__, 0);
  if ( !eventMapManagerInterface_k__BackingField )
    sub_1C2D6EC(v5, v6);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v8 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6];
  }
  else
  {
LABEL_8:
    v10 = sub_1C7DCA8(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 6);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, System_Action_o *, _QWORD))v10)(
    eventMapManagerInterface_k__BackingField,
    v4,
    *(_QWORD *)(v10 + 8));
}


void ScrTerminalMap__AllMaskEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *allMaskPanel; // x0

  if ( (byte_4C24461 & 1) == 0 )
  {
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4C24461 = 1;
  }
  allMaskPanel = (UnityEngine_GameObject_o *)this->fields.allMaskPanel;
  if ( !allMaskPanel
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))allMaskPanel->klass[1]._1.element_class)(
          allMaskPanel,
          allMaskPanel->klass[1]._1.castClass,
          1.0),
        (allMaskPanel = this->fields.allMaskObj) == 0) )
  {
    sub_1C2D6EC(allMaskPanel, method);
  }
  UnityEngine_GameObject__SetActive(allMaskPanel, 1, 0);
  GameObjectExtensions__SafeGetComponent_object_(
    this->fields.allMaskObj,
    (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  TweenAlpha__Begin(this->fields.allMaskObj, 0.25, 0.0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__AllMaskStart(
        ScrTerminalMap_o *this,
        bool isClearMask,
        bool isFixedAllMask,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x0
  void (__fastcall *element_class)(float); // x2

  if ( (byte_4C24460 & 1) == 0 )
  {
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4C24460 = 1;
  }
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf(spotMaskObj, 0) )
  {
    GameObjectExtensions__SafeGetComponent_object_(
      this->fields.spotMaskObj,
      (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    TweenAlpha__Begin(this->fields.spotMaskObj, 0.25, 0.0, 0);
  }
  spotMaskObj = this->fields.allMaskObj;
  if ( !spotMaskObj
    || (UnityEngine_GameObject__SetActive(spotMaskObj, 1, 0),
        (spotMaskObj = (UnityEngine_GameObject_o *)this->fields.allMaskPanel) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(spotMaskObj, isClearMask);
  }
  element_class = (void (__fastcall *)(float))spotMaskObj->klass[1]._1.element_class;
  if ( isFixedAllMask )
  {
    element_class(1.0);
  }
  else
  {
    element_class(0.0);
    if ( !isClearMask )
    {
      GameObjectExtensions__SafeGetComponent_object_(
        this->fields.allMaskObj,
        (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
      TweenAlpha__Begin(this->fields.allMaskObj, 0.25, 1.0, 0);
    }
  }
}


void ScrTerminalMap__AttachBillBoard(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v4; // x20
  struct MapModelManager_o *mapModelManager; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x21
  struct MapModelManager_o *v7; // x8
  struct MapModelCamera_o *v8; // x8
  UnityEngine_Object_o *cameraInstance; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Vector3_o *p_PLAYER_ICON_POS; // x19

  v4 = this;
  if ( (byte_4C24453 & 1) == 0 )
  {
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_BillBoard___);
    this = (ScrTerminalMap_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24453 = 1;
  }
  mapModelManager = v4->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_15;
  MapModelCamera_k__BackingField = (UnityEngine_Object_o *)mapModelManager->fields._MapModelCamera_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Equality(MapModelCamera_k__BackingField, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = v4->fields.mapModelManager;
    if ( !v7 )
      goto LABEL_15;
    v8 = v7->fields._MapModelCamera_k__BackingField;
    if ( !v8 )
      goto LABEL_15;
    cameraInstance = (UnityEngine_Object_o *)v8->fields.cameraInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(cameraInstance, 0, 0) )
    {
      this = (ScrTerminalMap_o *)GameObjectExtensions__SafeGetComponent_object_(
                                   targetObject,
                                   (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_BillBoard___);
      if ( this )
      {
        *(_QWORD *)&this->fields.PLAYER_ICON_POS.fields.x = cameraInstance;
        p_PLAYER_ICON_POS = &this->fields.PLAYER_ICON_POS;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.PLAYER_ICON_POS, (int32_t)cameraInstance, v10, v11);
        LOWORD(p_PLAYER_ICON_POS->fields.z) = 257;
        return;
      }
LABEL_15:
      sub_1C2D6EC(this, targetObject);
    }
  }
}


void ScrTerminalMap__AttachEventMapManager(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  EventMapManagerInterface_c *klass; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x21
  struct MapControl_WarInfo_o *mWarInfo; // x22
  struct MapCamera_o *mapCamera; // x23
  struct UnityEngine_GameObject_o *rootEffectP; // x24
  struct UnityEngine_GameObject_o *rootPathP; // x25
  struct UnityEngine_GameObject_o *rootGimmickP; // x26
  struct UnityEngine_GameObject_o *rootRoadP; // x29
  struct UnityEngine_GameObject_o *rootSpotP; // x27
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  struct EventMapManagerInterface_o *v21; // x19
  EventMapManagerInterface_c *v22; // x8
  __int64 v23; // x9
  EventMapManagerInterface_c **v24; // x10
  __int64 v25; // x0

  if ( (byte_4C2442A & 1) == 0 )
  {
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    byte_4C2442A = 1;
  }
  ScrTerminalMap__DetachEventMapManager(this, method);
  v3 = EventMapManagerFactory__AttachToTerminalMap(this, this->fields.mMapInfo, this->fields.mWarInfo, 0);
  this->fields._eventMapManagerInterface_k__BackingField = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._eventMapManagerInterface_k__BackingField, (int32_t)v3, v4, v5);
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
    goto LABEL_18;
  klass = eventMapManagerInterface_k__BackingField->klass;
  mWarInfo = this->fields.mWarInfo;
  mMapInfo = this->fields.mMapInfo;
  mapCamera = this->fields.mapCamera;
  rootEffectP = this->fields.rootEffectP;
  rootPathP = this->fields.rootPathP;
  rootGimmickP = this->fields.rootGimmickP;
  rootRoadP = this->fields.rootRoadP;
  rootSpotP = this->fields.rootSpotP;
  v18 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((EventMapManagerInterface_c **)p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_8;
    }
    v20 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v20 = sub_1C7DCA8(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 0);
  }
  v6 = (*(__int64 (__fastcall **)(struct EventMapManagerInterface_o *, ScrTerminalMap_o *, struct MapControl_MapInfo_o *, struct MapControl_WarInfo_o *, struct MapCamera_o *, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, _QWORD))v20)(
         eventMapManagerInterface_k__BackingField,
         this,
         mMapInfo,
         mWarInfo,
         mapCamera,
         rootEffectP,
         rootGimmickP,
         rootPathP,
         rootRoadP,
         rootSpotP,
         *(_QWORD *)(v20 + 8));
  v21 = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !v21 )
LABEL_18:
    sub_1C2D6EC(v6, v7);
  v22 = v21->klass;
  v23 = *(unsigned __int16 *)&v21->klass->_2.rank;
  if ( *(_WORD *)&v21->klass->_2.rank )
  {
    v24 = (EventMapManagerInterface_c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_15;
    }
    v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1];
  }
  else
  {
LABEL_15:
    v25 = sub_1C7DCA8(v21, EventMapManagerInterface_TypeInfo, 1);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
}


void ScrTerminalMap__Awake(ScrTerminalMap_o *this, const MethodInfo *method)
{
  char *spotMaskObj; // x0
  const MethodInfo *v4; // x2
  EventMapManagerIdle_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  MapModelManager_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct UnityEngine_GameObject_o *mapModelScreen; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UnityEngine_GameObject_o *spotModelScreen; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UnityEngine_GameObject_o *dispRoot; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UnityEngine_GameObject_o *subRootRoadP; // x1

  if ( (byte_4C24412 & 1) == 0 )
  {
    sub_1C2D490(&EventMapManagerIdle_TypeInfo);
    sub_1C2D490(&MapModelManager_TypeInfo);
    byte_4C24412 = 1;
  }
  spotMaskObj = (char *)this->fields.spotMaskObj;
  this->fields._IsCheckExpiration_k__BackingField = 0;
  this->fields._BeforeClearQuestIdForAction_k__BackingField = 0;
  if ( !spotMaskObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spotMaskObj, 0, 0);
  ScrTerminalMap__SetActiveDiceButton(this, 0, v4);
  this->fields.eventBoardGameSquareCount = 0;
  this->fields._currentMapImageW_k__BackingField = 0;
  this->fields._currentMapImageH_k__BackingField = 0;
  v5 = (EventMapManagerIdle_o *)sub_1C2D6DC(EventMapManagerIdle_TypeInfo);
  EventMapManagerIdle___ctor(v5, 0);
  this->fields._eventMapManagerInterface_k__BackingField = (struct EventMapManagerInterface_o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._eventMapManagerInterface_k__BackingField, (int32_t)v5, v6, v7);
  v8 = (MapModelManager_o *)sub_1C2D6DC(MapModelManager_TypeInfo);
  MapModelManager___ctor(v8, 0);
  this->fields.mapModelManager = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapModelManager, (int32_t)v8, v9, v10);
  spotMaskObj = (char *)this->fields.mapModelManager;
  if ( !spotMaskObj )
    goto LABEL_10;
  *((_QWORD *)spotMaskObj + 2) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(spotMaskObj + 16), (int32_t)this, v11, v12);
  spotMaskObj = (char *)this->fields.mapModelManager;
  if ( !spotMaskObj )
    goto LABEL_10;
  mapModelScreen = this->fields.mapModelScreen;
  *((_QWORD *)spotMaskObj + 7) = mapModelScreen;
  sub_1C2D434((CGThumbnailListItem_o *)(spotMaskObj + 56), (int32_t)mapModelScreen, v13, v14);
  spotMaskObj = (char *)this->fields.mapModelManager;
  if ( !spotMaskObj )
    goto LABEL_10;
  spotModelScreen = this->fields.spotModelScreen;
  *((_QWORD *)spotMaskObj + 8) = spotModelScreen;
  sub_1C2D434((CGThumbnailListItem_o *)(spotMaskObj + 64), (int32_t)spotModelScreen, v16, v17);
  spotMaskObj = (char *)this->fields.mapModelManager;
  if ( !spotMaskObj
    || (dispRoot = this->fields.dispRoot,
        *((_QWORD *)spotMaskObj + 9) = dispRoot,
        sub_1C2D434((CGThumbnailListItem_o *)(spotMaskObj + 72), (int32_t)dispRoot, v19, v20),
        (spotMaskObj = (char *)this->fields.mapModelManager) == 0) )
  {
LABEL_10:
    sub_1C2D6EC(spotMaskObj, method);
  }
  subRootRoadP = this->fields.subRootRoadP;
  *((_QWORD *)spotMaskObj + 10) = subRootRoadP;
  sub_1C2D434((CGThumbnailListItem_o *)(spotMaskObj + 80), (int32_t)subRootRoadP, v22, v23);
}


void ScrTerminalMap__BeginRaidUpdateRequest(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  NetworkManager_ResultCallbackFunc_o *v12; // x19

  if ( (byte_4C2441A & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_RaidAutoUpdateRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass248_0__BeginRaidUpdateRequest_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass248_0_TypeInfo);
    byte_4C2441A = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass248_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass248_0___ctor((ScrTerminalMap___c__DisplayClass248_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  this->fields._IsCheckExpiration_k__BackingField = 0;
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass248_0__BeginRaidUpdateRequest_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_RaidAutoUpdateRequest___);
  if ( !Request_object )
LABEL_8:
    sub_1C2D6EC(Request_object, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void ScrTerminalMap__ChangeBoardGameDiceButttonActive(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  AssetData_o *mapAssetData; // x0
  Il2CppObject *Object_object__51051712; // x20
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4C244A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8895/*"MapGimmickEffect_GappolyButtonActive"*/);
    byte_4C244A6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24506 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24506 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField )
    goto LABEL_25;
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    goto LABEL_25;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              mapAssetData,
                              (System_String_o *)StringLiteral_8895/*"MapGimmickEffect_GappolyButtonActive"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__Instantiate_object_(
           Object_object__51051712,
           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields._EventBoardDiceButtonEffectObj_k__BackingField = (struct UnityEngine_GameObject_o *)v7;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields._EventBoardDiceButtonEffectObj_k__BackingField,
      (int32_t)v7,
      v8,
      v9);
    if ( !UnityEngine_Object__op_Equality(
            (UnityEngine_Object_o *)this->fields._EventBoardDiceButtonEffectObj_k__BackingField,
            0,
            0) )
    {
      GameObjectExtensions__SafeSetParent_35924288(
        this->fields._EventBoardDiceButtonEffectObj_k__BackingField,
        this->fields.rootEventObjP,
        0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C24507 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24507 = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      v10->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
LABEL_25:
      ScrTerminalMap__SetEnabledDiceButton(this, 1, v2);
    }
  }
}


void ScrTerminalMap__ChangeMapUIStateDelayCall(ScrTerminalMap_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x20
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4C244C1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass439_0__ChangeMapUIStateDelayCall_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass439_0_TypeInfo);
    byte_4C244C1 = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass439_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass439_0___ctor((ScrTerminalMap___c__DisplayClass439_0_o *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = state;
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass439_0__ChangeMapUIStateDelayCall_b__0__,
    0);
  v11 = BasicHelper__WaitForEndOfFrameCall(v10, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v11, 0);
}


void ScrTerminalMap__ChangeSceneOnActionEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  const MethodInfo *v4; // x1
  void *SceneMoveQuestClearedInfo_k__BackingField; // x0
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  System_String_o **v10; // x20
  int32_t v11; // w19
  int32_t v12; // w20
  __int64 v13; // x21
  TerminalPramsManager_c *v14; // x0
  CGThumbnailListItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int *v16; // x20
  int32_t WarID_ByQuestID; // w0
  int32_t EventID; // w21
  int32_t v19; // w20
  SceneJumpInfo_o *v20; // x19
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C24477 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24477 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24500 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24500 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !System_String__IsNullOrEmpty(v3->static_fields->_SceneMoveQuestClearedInfo_k__BackingField, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24500 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24500 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    SceneMoveQuestClearedInfo_k__BackingField = v6->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
    if ( !SceneMoveQuestClearedInfo_k__BackingField )
      goto LABEL_48;
    SceneMoveQuestClearedInfo_k__BackingField = System_String__Split(
                                                  (System_String_o *)SceneMoveQuestClearedInfo_k__BackingField,
                                                  0x2Cu,
                                                  0,
                                                  0);
    if ( !SceneMoveQuestClearedInfo_k__BackingField )
      goto LABEL_48;
    v9 = *((_QWORD *)SceneMoveQuestClearedInfo_k__BackingField + 3);
    v10 = (System_String_o **)SceneMoveQuestClearedInfo_k__BackingField;
    if ( v9 )
    {
      if ( !(_DWORD)v9 )
        sub_1C2D6F4(SceneMoveQuestClearedInfo_k__BackingField, v4, v7);
      v11 = System_Int32__Parse(*((System_String_o **)SceneMoveQuestClearedInfo_k__BackingField + 4), 0);
      if ( *((int *)v10 + 6) >= 2 )
      {
        v12 = System_Int32__Parse(v10[5], 0);
LABEL_27:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = StringLiteral_1/*""*/;
        if ( !byte_4C24501 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24501 = 1;
        }
        v14 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v14 = TerminalPramsManager_TypeInfo;
        }
        p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v14->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
        p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v13;
        sub_1C2D434(p_SceneMoveQuestClearedInfo_k__BackingField, v13, v7, v8);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        SceneMoveQuestClearedInfo_k__BackingField = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !SceneMoveQuestClearedInfo_k__BackingField )
          goto LABEL_48;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)SceneMoveQuestClearedInfo_k__BackingField,
               &entity,
               v11,
               v12,
               0) )
        {
          SceneMoveQuestClearedInfo_k__BackingField = entity;
          if ( !entity )
            goto LABEL_48;
          SceneMoveQuestClearedInfo_k__BackingField = QuestPhaseEntity__GetMoveSceneInfo(entity, 0);
          if ( !SceneMoveQuestClearedInfo_k__BackingField )
            goto LABEL_48;
          v16 = (int *)SceneMoveQuestClearedInfo_k__BackingField;
          if ( *((int *)SceneMoveQuestClearedInfo_k__BackingField + 6) >= 1
            && *((_DWORD *)SceneMoveQuestClearedInfo_k__BackingField + 8) == 72 )
          {
            SceneMoveQuestClearedInfo_k__BackingField = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !SceneMoveQuestClearedInfo_k__BackingField )
              goto LABEL_48;
            WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                (QuestTree_o *)SceneMoveQuestClearedInfo_k__BackingField,
                                v11,
                                0);
            EventID = WarMaster__getEventID(WarID_ByQuestID, 0);
            v19 = v16[6] < 2 ? 1 : v16[9] + 1;
            v20 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_41257448(v20, (System_String_o *)StringLiteral_1/*""*/, EventID, v19, 0);
            SceneMoveQuestClearedInfo_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !SceneMoveQuestClearedInfo_k__BackingField )
              goto LABEL_48;
            AvalonSceneManager__transitionScene(
              (AvalonSceneManager_o *)SceneMoveQuestClearedInfo_k__BackingField,
              72,
              1,
              (Il2CppObject *)v20,
              0);
          }
        }
        return;
      }
    }
    else
    {
      v11 = 0;
    }
    v12 = 0;
    goto LABEL_27;
  }
  if ( !ScrTerminalMap__CheckNoticeLoginQuest(this, v4) )
  {
    SceneMoveQuestClearedInfo_k__BackingField = this->fields.terminalScene;
    if ( SceneMoveQuestClearedInfo_k__BackingField )
    {
      TerminalSceneComponent__PlayAutoExecuteQuest(
        (TerminalSceneComponent_o *)SceneMoveQuestClearedInfo_k__BackingField,
        0);
      return;
    }
LABEL_48:
    sub_1C2D6EC(SceneMoveQuestClearedInfo_k__BackingField, v4);
  }
}


void ScrTerminalMap__CheckAndWarningEventQuestBoardAllClear(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 IsEventBoardGameQuestAllClear; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  struct MapCamera_o *mapCamera; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  System_String_o *v19; // x24
  CommonConfirmDialog_ClickDelegate_o *v20; // x25

  if ( (byte_4C24494 & 1) == 0 )
  {
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass385_0__CheckAndWarningEventQuestBoardAllClear_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass385_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5521/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_CANCEL"*/);
    sub_1C2D490(&StringLiteral_5523/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_5524/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_TITLE"*/);
    sub_1C2D490(&StringLiteral_5522/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_DECIDE"*/);
    byte_4C24494 = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass385_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass385_0___ctor((ScrTerminalMap___c__DisplayClass385_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  v10 = v5 + 24;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v11, v12);
  IsEventBoardGameQuestAllClear = ScrTerminalMap__IsEventBoardGameQuestAllClear(this, v13);
  if ( IsEventBoardGameQuestAllClear )
  {
    mapCamera = this->fields.mapCamera;
    if ( mapCamera )
    {
      mapCamera->fields._IsTouchEnable_k__BackingField = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5524/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_TITLE"*/, 0);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5523/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_MESSAGE"*/, 0);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5522/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_DECIDE"*/, 0);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5521/*"EVENT_BOARD_GAME_DICE_ALLCLEAR_WARNING_CANCEL"*/, 0);
      v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v20,
        (Il2CppObject *)v5,
        Method_ScrTerminalMap___c__DisplayClass385_0__CheckAndWarningEventQuestBoardAllClear_b__0__,
        0);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(
          (CommonUI_o *)Instance,
          v16,
          v17,
          v18,
          v19,
          v20,
          0,
          0.0,
          15.0,
          0,
          0,
          0,
          240,
          0,
          1,
          0,
          0,
          0);
        return;
      }
    }
LABEL_13:
    sub_1C2D6EC(IsEventBoardGameQuestAllClear, v7);
  }
  if ( *(_QWORD *)v10 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v10 + 64LL),
      *(_QWORD *)(*(_QWORD *)v10 + 40LL));
}


bool ScrTerminalMap__CheckNoticeLoginQuest(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct TerminalSceneComponent_o *terminalScene; // x8

  terminalScene = this->fields.terminalScene;
  if ( !terminalScene || (this = (ScrTerminalMap_o *)terminalScene->fields.mTerminalList) == 0 )
    sub_1C2D6EC(this, method);
  return ScrTerminalListTop__CheckNoticeLoginQuest((ScrTerminalListTop_o *)this, 0);
}


void ScrTerminalMap__CheckRaidTimeLimit(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass252_0_o *v3; // x21
  EventRaidMaster_o *Master_object; // x0
  __int64 v5; // x1
  struct WarEntity_o *mWarEnt; // x8
  int32_t *p_eventId; // x19
  EventRaidMaster_o *v8; // x22
  _BOOL8 IsEventRaidAliveAny; // x0
  const MethodInfo *v10; // x2
  int64_t TimeLimitAt; // x0
  int64_t v12; // x23
  EventRaidMaster_o *v13; // x22
  __int64 v14; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v16; // x8
  int32_t v17; // w22
  ScrTerminalMap_c *v18; // x0
  System_String_o *RAID_TIME_OVER_NOTICE_KEY; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x20
  ScrTerminalMap_c *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x19
  System_String_o *v28; // x19

  if ( (byte_4C2441E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass252_0__CheckRaidTimeLimit_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass252_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5670/*"EVENT_RAID_TIME_OVER_NOTICE_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2441E = 1;
  }
  v3 = (ScrTerminalMap___c__DisplayClass252_0_o *)sub_1C2D6DC(ScrTerminalMap___c__DisplayClass252_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass252_0___ctor(v3, 0);
  if ( this->fields.isRaidMap )
  {
    mWarEnt = this->fields.mWarEnt;
    if ( !mWarEnt || !v3 )
      goto LABEL_48;
    v3->fields.eventId = mWarEnt->fields.eventId;
    p_eventId = &v3->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventRaidMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventRaidMaster___);
    if ( !Master_object )
      goto LABEL_48;
    v8 = Master_object;
    IsEventRaidAliveAny = EventRaidMaster__IsEventRaidAliveAny(Master_object, *p_eventId, 0);
    if ( IsEventRaidAliveAny )
    {
      TimeLimitAt = ScrTerminalMap__GetTimeLimitAt((ScrTerminalMap_o *)IsEventRaidAliveAny, *p_eventId, v10);
      if ( TimeLimitAt >= 1 )
      {
        v12 = TimeLimitAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( v12 - NetworkManager__getTime(0) <= 0 )
        {
          if ( !byte_4C244E7 )
          {
            sub_1C2D490(&RaidAutoUpdateRequest_TypeInfo);
            byte_4C244E7 = 1;
          }
          if ( RaidAutoUpdateRequest_TypeInfo->static_fields->accessCompletedTimeEventMap >= v12 )
          {
            Master_object = (EventRaidMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(v8, *p_eventId, 1, 0);
            if ( !Master_object )
              goto LABEL_48;
            v13 = Master_object;
            if ( Master_object->fields._MasterName_k__BackingField )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (EventRaidMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
              if ( !LODWORD(v13->fields._MasterName_k__BackingField) )
                goto LABEL_49;
              if ( !Master_object )
                goto LABEL_48;
              Master_object = (EventRaidMaster_o *)QuestReleaseMaster__getListByQuestID(
                                                     (QuestReleaseMaster_o *)Master_object,
                                                     v13->fields.revision,
                                                     0);
              if ( !Master_object )
                goto LABEL_48;
              MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
              if ( MasterName_k__BackingField )
              {
                if ( (_DWORD)MasterName_k__BackingField )
                {
                  v16 = *(_QWORD *)&Master_object->fields.revision;
                  if ( !v16 )
                    goto LABEL_48;
                  v17 = *(_DWORD *)(v16 + 24);
                  if ( !v17 )
                    return;
                  if ( !CondType_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  if ( !CondType__IsQuestClear_40102980(v17, -1, 0, 0) )
                    return;
                  goto LABEL_31;
                }
LABEL_49:
                sub_1C2D6F4(Master_object, v5, v14);
              }
            }
LABEL_31:
            if ( !this->fields.isLoadRaidTimerOverNotice )
            {
              this->fields.isLoadRaidTimerOverNotice = 1;
              v18 = ScrTerminalMap_TypeInfo;
              if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
                v18 = ScrTerminalMap_TypeInfo;
              }
              RAID_TIME_OVER_NOTICE_KEY = v18->static_fields->RAID_TIME_OVER_NOTICE_KEY;
              v20 = System_Int32__ToString((int)v3 + 16, 0);
              v21 = System_String__Concat_63457864(RAID_TIME_OVER_NOTICE_KEY, v20, 0);
              if ( UnityEngine_PlayerPrefs__GetInt_71121948(v21, 0) <= 0 )
              {
                v22 = sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(
                  (System_Action_o *)v22,
                  (Il2CppObject *)v3,
                  Method_ScrTerminalMap___c__DisplayClass252_0__CheckRaidTimeLimit_b__0__,
                  0);
                v23 = ScrTerminalMap_TypeInfo;
                if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
                if ( !ScrTerminalMap__IsDialogOnActive((const MethodInfo *)v23) )
                {
                  v24 = System_Int32__ToString((int)v3 + 16, 0);
                  v25 = System_String__Concat_63457864((System_String_o *)StringLiteral_5670/*"EVENT_RAID_TIME_OVER_NOTICE_"*/, v24, 0);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Master_object = (EventRaidMaster_o *)LocalizationManager__ContainsKey(v25, 0);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    v26 = System_Int32__ToString((int32_t)p_eventId, 0);
                    v27 = System_String__Concat_63457864((System_String_o *)StringLiteral_5670/*"EVENT_RAID_TIME_OVER_NOTICE_"*/, v26, 0);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v28 = LocalizationManager__Get(v27, 0);
                    Master_object = (EventRaidMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( Master_object )
                    {
                      CommonUI__OpenNotificationDialog(
                        (CommonUI_o *)Master_object,
                        (System_String_o *)StringLiteral_1/*""*/,
                        v28,
                        (System_Action_o *)v22,
                        -1,
                        0,
                        0,
                        0,
                        1,
                        0,
                        1,
                        0,
                        0,
                        0.0,
                        0,
                        0);
                      return;
                    }
                  }
                  else if ( v22 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 24))(*(_QWORD *)(v22 + 64), *(_QWORD *)(v22 + 40));
                    return;
                  }
LABEL_48:
                  sub_1C2D6EC(Master_object, v5);
                }
              }
            }
          }
        }
      }
    }
  }
}


void ScrTerminalMap__CheckUpdateRequest(
        ScrTerminalMap_o *this,
        bool isFromTerminal,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ScrTerminalMap_c *v7; // x0
  _BOOL8 IsDialogOnActive; // x0
  const MethodInfo *v9; // x2
  bool v10; // w22
  ScrTerminalMap_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_IEnumerator_o *v13; // x1
  bool v14; // w1
  ScrTerminalMap_o *v15; // x0
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24417 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24417 = 1;
  }
  v7 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  IsDialogOnActive = ScrTerminalMap__IsDialogOnActive((const MethodInfo *)v7);
  v10 = IsDialogOnActive;
  if ( IsDialogOnActive || !this->fields._IsCheckExpiration_k__BackingField )
  {
LABEL_11:
    if ( v10
      || !ScrTerminalMap__IsNeedMapUpdateOnSchedule((ScrTerminalMap_o *)IsDialogOnActive, this->fields.currentWarId, v9) )
    {
      if ( isFromTerminal )
        ActionExtensions__Call(callback, 0);
      return;
    }
LABEL_13:
    v14 = isFromTerminal;
    v15 = this;
LABEL_14:
    ScrTerminalMap__TerminalSceneRefresh(v15, v14, v9);
    return;
  }
  if ( !this->fields.isRaidMap )
  {
    IsDialogOnActive = TopHomeRequest__IsExpirationDateUpdateEventMap(0);
    if ( !IsDialogOnActive )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( isFromTerminal )
  {
    ScrTerminalMap__BeginRaidUpdateRequest(this, callback, v9);
    v13 = ScrTerminalMap__WaitConnecting(v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v13, 0);
    return;
  }
  if ( RaidAutoUpdateRequest__IsExpirationDateUpdateEventMap(0) )
  {
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    if ( static_fields->IsjumbleRaidHomeTopRequest )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      *(_WORD *)&static_fields->IsEventMapLoading = 1;
      v15 = this;
      v14 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    ScrTerminalMap__BeginRaidUpdateRequest(this, callback, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__ClickSpotOnMapModelScreen(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o mCamera; // x0
  UnityEngine_Vector2_o v4; // x1
  UnityEngine_Vector2_o TouchPos; // kr00_8 OVERLAPPED
  struct MapCamera_o *mapCamera; // x8
  int v7; // s2
  struct MapModelManager_o *mapModelManager; // x8
  UnityEngine_Object_o *v9; // x19
  Il2CppObject *Component_object; // x19
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2447E & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2447E = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos(0);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_19;
  mCamera = (UnityEngine_Vector2_o)mapCamera->fields.mCamera;
  if ( !*(_QWORD *)&mCamera )
    goto LABEL_19;
  v7 = 0;
  v11 = UnityEngine_Camera__ScreenToWorldPoint_70969996(
          (UnityEngine_Camera_o *)*(_QWORD *)&mCamera,
          *(UnityEngine_Vector3_o *)&TouchPos.fields.x,
          0);
  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_19;
  mCamera = (UnityEngine_Vector2_o)mapModelManager->fields._SpotModelCamera_k__BackingField;
  if ( !*(_QWORD *)&mCamera )
    goto LABEL_19;
  v9 = (UnityEngine_Object_o *)MapModelCamera__RayCast(*(MapModelCamera_o **)&mCamera, v11, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mCamera = (UnityEngine_Vector2_o)UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( (LOBYTE(mCamera.fields.x) & 1) == 0 )
  {
    if ( v9 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v9,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mCamera = (UnityEngine_Vector2_o)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( (LOBYTE(mCamera.fields.x) & 1) != 0 )
        return;
      if ( Component_object )
      {
        SrcSpotBasePrefab__cbfBtn_Click((SrcSpotBasePrefab_o *)Component_object, 0);
        return;
      }
    }
LABEL_19:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2D6EC)(mCamera, v4);
  }
}


UnityEngine_Vector3_o ScrTerminalMap__ConvertLocalToScreenPosition(
        ScrTerminalMap_o *this,
        UnityEngine_Vector3_o localPostion,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  z = localPostion.fields.z;
  y = localPostion.fields.y;
  x = localPostion.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C2D6EC(0, v8);
  v10.fields.x = x;
  v10.fields.y = y;
  v10.fields.z = z;
  v11 = UnityEngine_Transform__TransformPoint(transform, v10, 0);
  return ScrTerminalMap__ConvertWorldToScreenPosition(this, v11, v9);
}


UnityEngine_Vector3_o ScrTerminalMap__ConvertWorldToScreenPosition(
        ScrTerminalMap_o *this,
        UnityEngine_Vector3_o worldPostion,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  ScrTerminalMap_o *v6; // x19
  struct MapModelManager_o *mapModelManager; // x8
  struct MapModelCamera_o *MapModelCamera_k__BackingField; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 v10; // d0
  float v11; // s2
  float v12; // s1
  float v13; // [xsp+0h] [xbp-50h]
  float v14; // [xsp+10h] [xbp-40h]
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPostion.fields.z;
  y = worldPostion.fields.y;
  x = worldPostion.fields.x;
  v6 = this;
  if ( (byte_4C2445B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    this = (ScrTerminalMap_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2445B = 1;
  }
  mapModelManager = v6->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_16;
  MapModelCamera_k__BackingField = mapModelManager->fields._MapModelCamera_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Equality(
                               (UnityEngine_Object_o *)MapModelCamera_k__BackingField,
                               0,
                               0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( MapModelCamera_k__BackingField )
    {
      this = (ScrTerminalMap_o *)MapModelCamera_k__BackingField->fields.cameraInstance;
      if ( this )
      {
        v15.fields.x = x;
        v15.fields.y = y;
        v15.fields.z = z;
        v16 = UnityEngine_Camera__WorldToScreenPoint_70969972((UnityEngine_Camera_o *)this, v15, 0);
        this = (ScrTerminalMap_o *)v6->fields.mapModelScreen;
        v14 = v16.fields.x;
        v13 = v16.fields.y;
        if ( this )
        {
          this = (ScrTerminalMap_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
          if ( this )
          {
            v10 = vadd_f32(
                    (float32x2_t)__PAIR64__(LODWORD(v13), LODWORD(v14)),
                    vmul_f32(vcvt_f32_s32((int32x2_t)this->fields.rootGimmickP), (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
            v11 = 0.0;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_1C2D6EC(this, method);
  }
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v11 = static_fields->zeroVector.fields.z;
LABEL_15:
  v12 = *((float *)&v10 + 1);
  result.fields.x = *(float *)&v10;
  result.fields.z = v11;
  result.fields.y = v12;
  return result;
}


void ScrTerminalMap__CreateMapEff(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *mapEffectPrefabList; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *mapEffectList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C24421 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapEffectComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24421 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  mapEffectPrefabList = this->fields.mapEffectPrefabList;
  if ( !mapEffectPrefabList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)mapEffectPrefabList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__Instantiate_object_(
           current,
           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      sub_1C2D6EC(0, v6);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v5,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !v8 )
    {
      if ( !Component_object )
        sub_1C2D6EC(v8, v9);
      MapEffectComponent__Setup(
        (MapEffectComponent_o *)Component_object,
        this->fields.rootEffectP,
        this->fields.mapCamera,
        0);
      mapEffectList = (System_Collections_Generic_List_object__o *)this->fields.mapEffectList;
      if ( !mapEffectList )
        sub_1C2D6EC(0, v10);
      items = mapEffectList->fields._items;
      v15 = Method_System_Collections_Generic_List_MapEffectComponent__Add__;
      ++mapEffectList->fields._version;
      if ( !items )
        sub_1C2D6EC(mapEffectList, v10);
      size = mapEffectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          mapEffectList,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        mapEffectList->fields._size = size + 1;
        v17[4] = (Il2CppClass *)Component_object;
        sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)Component_object, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


MapGimmickComponent_o *ScrTerminalMap__CreateMapGimmick(
        ScrTerminalMap_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        bool isMapModel,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v6; // x20
  MapGimmickEntity_o *Mine; // x0
  UnityEngine_Object_o *mapGimmickPrefab; // x22
  MapGimmickEntity_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x24
  Il2CppObject *v16; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v21; // x8
  float v22; // s13
  float v23; // s14
  float w; // s11
  float v25; // s12
  MapGimmickComponent_o *v26; // x24
  UnityEngine_Object_o *subRootGimmickP; // x23
  bool v28; // w0
  __int64 v29; // x8
  const MethodInfo *v30; // x2
  bool v31; // w0
  __int64 v32; // x8
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v34; // x2
  MapGimmickPathEntity_o *v35; // x23
  Custom2dSplineMesh_o *PathByMapGimmickId; // x24
  int32_t id; // w25
  int32_t moveTime; // w23
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v39; // x21
  Il2CppObject *Component_object; // x0
  MapCamera_o *mapCamera; // x21
  System_Collections_Generic_List_UIAtlas__o *assetsAtlases; // x22
  AssetData_o *mapAssetData; // x23
  AssetData_o *mapMultiAssetData; // x25
  NetworkManager_ResultCallbackFunc_o *v45; // x26
  int32_t currentWarId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPositionOnMapModel; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v51; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v6 = this;
  if ( (byte_4C24452 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_MapGimmickComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&EventMapGimmickMoveManager_MapGimmickMoveData_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081720);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__CreateMapGimmick_b__311_0__);
    this = (ScrTerminalMap_o *)sub_1C2D490(&StringLiteral_8910/*"MapGimmick_{0:0000}"*/);
    byte_4C24452 = 1;
  }
  if ( !mapGimmickInfo )
    goto LABEL_47;
  Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0);
  mapGimmickPrefab = (UnityEngine_Object_o *)v6->fields.mapGimmickPrefab;
  v9 = Mine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Equality(mapGimmickPrefab, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_47;
    v13 = 0;
    if ( MapGimmickEntity__IsMonoColorRect(v9, 0) )
    {
      currentWarId = v6->fields.currentWarId;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentWarId, v10, v11, v12);
      v15 = System_String__Format((System_String_o *)StringLiteral_8910/*"MapGimmick_{0:0000}"*/, v14, 0);
      v13 = (Il2CppObject *)sub_1C2D6DC(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)v13, v15, 0);
      if ( !v13 )
        goto LABEL_47;
      this = (ScrTerminalMap_o *)UnityEngine_GameObject__AddComponent_object_(
                                   (UnityEngine_GameObject_o *)v13,
                                   (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_MapGimmickComponent___);
      if ( !this )
        goto LABEL_47;
      MapGimmickComponent__InitDefaultParam((MapGimmickComponent_o *)this, 0);
    }
  }
  else
  {
    v16 = (Il2CppObject *)v6->fields.mapGimmickPrefab;
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !byte_4C20DA7 )
    {
      sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
      byte_4C20DA7 = 1;
    }
    v21 = UnityEngine_Quaternion_TypeInfo->static_fields;
    v23 = v21->identityQuaternion.fields.x;
    v22 = v21->identityQuaternion.fields.y;
    v25 = v21->identityQuaternion.fields.z;
    w = v21->identityQuaternion.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    v51.fields.x = v23;
    v51.fields.y = v22;
    v51.fields.z = v25;
    v51.fields.w = w;
    v13 = UnityEngine_Object__Instantiate_object__51752724(
            v16,
            v48,
            v51,
            (const MethodInfo_315AF14 *)Method_UnityEngine_Object_Instantiate_GameObject____78081720);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
  v26 = 0;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v9 )
      goto LABEL_47;
    this = (ScrTerminalMap_o *)MapGimmickComponent__GetGobjName(v9->fields.id, 0);
    if ( !v13 )
      goto LABEL_47;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, (System_String_o *)this, 0);
    if ( isMapModel )
    {
      subRootGimmickP = (UnityEngine_Object_o *)v6->fields.subRootGimmickP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v28 = UnityEngine_Object__op_Inequality(subRootGimmickP, 0, 0);
      v29 = 168;
      if ( v28 )
        v29 = 184;
      GameObjectExtensions__SafeSetParent_35924288(
        (UnityEngine_GameObject_o *)v13,
        *(UnityEngine_GameObject_o **)((char *)&v6->klass + v29),
        0);
      LocalPositionOnMapModel = MapGimmickEntity__GetLocalPositionOnMapModel(v9, 0);
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v13, LocalPositionOnMapModel, 0);
      if ( MapGimmickEntity__IsEnabledBillBoard(v9, 0) )
        ScrTerminalMap__AttachBillBoard(v6, (UnityEngine_GameObject_o *)v13, v30);
    }
    else
    {
      v31 = MapGimmickEntity__InParentUIPanel(v9, 0);
      v32 = 168;
      if ( v31 )
        v32 = 176;
      GameObjectExtensions__SafeSetParent_35924288(
        (UnityEngine_GameObject_o *)v13,
        *(UnityEngine_GameObject_o **)((char *)&v6->klass + v32),
        0);
      v50.fields.x = (float)((float)v9->fields.x - v6->fields.mapImageOffsetX) + 0.0;
      v50.fields.y = (float)((float)((float)v6->fields._currentMapImageH_k__BackingField - (float)v9->fields.y)
                           - v6->fields.mapImageOffsetY)
                   + 0.0;
      v50.fields.z = 0.0;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v13, v50, 0);
      if ( v6->fields.isRaidMap )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
        if ( !this )
          goto LABEL_47;
        MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                                 (MapGimmickPathMaster_o *)this,
                                 v9->fields.id,
                                 0);
        if ( MapGimmickPathEntity )
        {
          v35 = MapGimmickPathEntity;
          PathByMapGimmickId = ScrTerminalMap__mfMap2d_Create_PathByMapGimmickId(v6, v9->fields.id, v34);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PathByMapGimmickId, 0, 0) )
          {
            id = v9->fields.id;
            moveTime = v35->fields.moveTime;
            v39 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)sub_1C2D6DC(EventMapGimmickMoveManager_MapGimmickMoveData_TypeInfo);
            EventMapGimmickMoveManager_MapGimmickMoveData___ctor(
              v39,
              id,
              (UnityEngine_GameObject_o *)v13,
              PathByMapGimmickId,
              moveTime,
              0);
            this = (ScrTerminalMap_o *)v6->fields.eventMapGimmickMoveManager;
            if ( !this )
              goto LABEL_47;
            EventMapGimmickMoveManager__Add((EventMapGimmickMoveManager_o *)this, v39, 0);
            this = (ScrTerminalMap_o *)v6->fields.eventMapGimmickMoveManager;
            if ( !this )
              goto LABEL_47;
            EventMapGimmickMoveManager__UpdateAllMapGimmickPosition((EventMapGimmickMoveManager_o *)this, 0);
          }
        }
      }
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v13,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    mapCamera = v6->fields.mapCamera;
    assetsAtlases = v6->fields.assetsAtlases;
    mapAssetData = v6->fields.mapAssetData;
    mapMultiAssetData = v6->fields.mapMultiAssetData;
    v26 = (MapGimmickComponent_o *)Component_object;
    v45 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v45,
      (Il2CppObject *)v6,
      Method_ScrTerminalMap__CreateMapGimmick_b__311_0__,
      0);
    if ( v26 )
    {
      MapGimmickComponent__Setup(v26, mapGimmickInfo, mapCamera, assetsAtlases, mapAssetData, mapMultiAssetData, v45, 0);
      return v26;
    }
LABEL_47:
    sub_1C2D6EC(this, mapGimmickInfo);
  }
  return v26;
}


UnityEngine_GameObject_o *ScrTerminalMap__CreatePathLengthObject(
        ScrTerminalMap_o *this,
        int64_t length,
        const MethodInfo *method)
{
  Il2CppObject *pfbPathLength; // x20
  Il2CppObject *v6; // x20
  __int64 v7; // x1
  bool v8; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *Component_object; // x21
  System_String_o *v11; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  int64_t v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C24450 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_5657/*"EVENT_RACE_PATH_LENGTH"*/);
    byte_4C24450 = 1;
  }
  pfbPathLength = (Il2CppObject *)this->fields.pfbPathLength;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         pfbPathLength,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0, 0);
  result = 0;
  if ( !v8 )
  {
    if ( !v6 )
      goto LABEL_12;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v6,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5657/*"EVENT_RACE_PATH_LENGTH"*/, 0);
    v16 = length;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16, v12, v13, v14);
    result = (UnityEngine_GameObject_o *)System_String__Format(v11, v15, 0);
    if ( !Component_object )
LABEL_12:
      sub_1C2D6EC(result, v7);
    UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)result, 0);
    return (UnityEngine_GameObject_o *)v6;
  }
  return result;
}


System_String_o *ScrTerminalMap__CreateSaveKey_PlayerIcon(int32_t warId, int32_t mapId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  bool v5; // cc
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  int32_t v9; // [xsp+8h] [xbp-28h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v9 = mapId;
  v10 = warId;
  if ( (byte_4C2440D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_13704/*"TerminalPlayerIcon"*/);
    byte_4C2440D = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v10, 0);
  v5 = mapId < 1;
  v6 = v4;
  if ( v5 )
    return System_String__Concat_63457864((System_String_o *)StringLiteral_13704/*"TerminalPlayerIcon"*/, v4, 0);
  v7 = System_Int32__ToString((int32_t)&v9, 0);
  return System_String__Concat_63498116(
           (System_String_o *)StringLiteral_13704/*"TerminalPlayerIcon"*/,
           v6,
           (System_String_o *)StringLiteral_16105/*"_"*/,
           v7,
           0);
}


System_String_o *ScrTerminalMap__CreateSaveKey_PlayerMap(int32_t warId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = warId;
  if ( (byte_4C2440F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13705/*"TerminalPlayerMap"*/);
    byte_4C2440F = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_13705/*"TerminalPlayerMap"*/, v2, 0);
}


void ScrTerminalMap__DestroyChildObjects(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *pearentObj,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v4; // x19
  int32_t v5; // w20
  UnityEngine_Object_o *Child; // x21
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C2443E & 1) == 0 )
  {
    this = (ScrTerminalMap_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2443E = 1;
  }
  if ( !pearentObj || (this = (ScrTerminalMap_o *)UnityEngine_GameObject__get_transform(pearentObj, 0)) == 0 )
LABEL_16:
    sub_1C2D6EC(this, pearentObj);
  v4 = this;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0) >= 1 )
  {
    v5 = 0;
    do
    {
      Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)v4, v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ScrTerminalMap_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !Child )
          goto LABEL_16;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704(gameObject, 0);
      }
      ++v5;
    }
    while ( v5 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)v4, 0) );
  }
}


void ScrTerminalMap__DestroyCooltimeObject(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventQuestCooltimeComponent; // x21
  struct EventQuestCooltimeComponent_o **p_eventQuestCooltimeComponent; // x20
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  EventQuestCooltimeComponent_o *v8; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *coolTimeButtonObj; // x20
  UnityEngine_Object_o *v11; // x19

  if ( (byte_4C244B3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244B3 = 1;
  }
  eventQuestCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventQuestCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_eventQuestCooltimeComponent = &this->fields.eventQuestCooltimeComponent;
  if ( UnityEngine_Object__op_Inequality(eventQuestCooltimeComponent, 0, 0) )
  {
    v8 = *p_eventQuestCooltimeComponent;
    if ( !*p_eventQuestCooltimeComponent
      || (EventQuestCooltimeComponent__DestroyObjects(v8, 0), (v8 = *p_eventQuestCooltimeComponent) == 0) )
    {
      sub_1C2D6EC(v8, v5);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
  this->fields.eventQuestCooltimeComponent = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventQuestCooltimeComponent, 0, v6, v7);
  coolTimeButtonObj = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coolTimeButtonObj, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v11, 0);
  }
}


void ScrTerminalMap__DestroyEventActionEffect(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventActionEffect; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C24420 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24420 = 1;
  }
  eventActionEffect = (UnityEngine_Object_o *)this->fields.eventActionEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventActionEffect, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.eventActionEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v4, 0);
  }
}


void ScrTerminalMap__DestroyEventBoardGameObj(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestReleaseEntity__o *EventBoardQuestReleaseList_k__BackingField; // x8
  int32_t size; // w2
  int v5; // w9
  UnityEngine_Object_o *EventBoardGameObj_k__BackingField; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *EventBoardPieceObj_k__BackingField; // x20
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *EventBoardQuestArrivalPanelObj_k__BackingField; // x20
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *EventBoardStopPanelObj_k__BackingField; // x20
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *EventBoardDiceButtonEffectObj_k__BackingField; // x20
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *diceCounterComponent; // x20
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct EventBoardGameDiceCounter_o *EventBoardDiceVoiceServantId; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  System_String_o *VoiceAssetName_42560796; // x20
  struct System_Int32_array *EventBoardGameArrivalVoiceSvtIdList_k__BackingField; // x8
  unsigned __int64 v26; // x23
  __int64 max_length; // x24
  System_String_o *v28; // x20
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C2448B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C2448B = 1;
  }
  EventBoardQuestReleaseList_k__BackingField = this->fields._EventBoardQuestReleaseList_k__BackingField;
  if ( EventBoardQuestReleaseList_k__BackingField )
  {
    size = EventBoardQuestReleaseList_k__BackingField->fields._size;
    v5 = EventBoardQuestReleaseList_k__BackingField->fields._version + 1;
    EventBoardQuestReleaseList_k__BackingField->fields._size = 0;
    EventBoardQuestReleaseList_k__BackingField->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)EventBoardQuestReleaseList_k__BackingField->fields._items, 0, size, 0);
  }
  EventBoardGameObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardGameObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardGameObj_k__BackingField, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields._EventBoardGameObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v7, 0);
  }
  EventBoardPieceObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardPieceObj_k__BackingField, 0, 0) )
  {
    v9 = (UnityEngine_Object_o *)this->fields._EventBoardPieceObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v9, 0);
  }
  EventBoardQuestArrivalPanelObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardQuestArrivalPanelObj_k__BackingField, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v11, 0);
  }
  EventBoardStopPanelObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardStopPanelObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardStopPanelObj_k__BackingField, 0, 0) )
  {
    v13 = (UnityEngine_Object_o *)this->fields._EventBoardStopPanelObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v13, 0);
  }
  EventBoardDiceButtonEffectObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardDiceButtonEffectObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(EventBoardDiceButtonEffectObj_k__BackingField, 0, 0) )
  {
    v15 = (UnityEngine_Object_o *)this->fields._EventBoardDiceButtonEffectObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v15, 0);
  }
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diceCounterComponent, 0, 0) )
  {
    EventBoardDiceVoiceServantId = this->fields.diceCounterComponent;
    if ( !EventBoardDiceVoiceServantId )
LABEL_57:
      sub_1C2D6EC(EventBoardDiceVoiceServantId, v17);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)EventBoardDiceVoiceServantId,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
  ScrTerminalMap__SetActiveDiceButton(this, 0, v18);
  EventBoardDiceVoiceServantId = (struct EventBoardGameDiceCounter_o *)ScrTerminalMap__GetEventBoardDiceVoiceServantId(
                                                                         this,
                                                                         v21);
  if ( (_DWORD)EventBoardDiceVoiceServantId )
  {
    VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796((int32_t)EventBoardDiceVoiceServantId, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_42560796, 0);
  }
  EventBoardGameArrivalVoiceSvtIdList_k__BackingField = this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
  if ( EventBoardGameArrivalVoiceSvtIdList_k__BackingField
    && (int)EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length >= 1 )
  {
    v26 = 0;
    max_length = (unsigned int)EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length;
    while ( 1 )
    {
      if ( v26 >= LODWORD(EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length) )
        sub_1C2D6F4(EventBoardDiceVoiceServantId, v17, v22);
      EventBoardDiceVoiceServantId = (struct EventBoardGameDiceCounter_o *)(unsigned int)EventBoardGameArrivalVoiceSvtIdList_k__BackingField->m_Items[v26];
      if ( (int)EventBoardDiceVoiceServantId >= 1 )
      {
        v28 = ServantVoiceEntity__getVoiceAssetName_42560796((int32_t)EventBoardDiceVoiceServantId, 0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__releaseAudioAssetStorage(v28, 0);
      }
      if ( max_length == ++v26 )
        break;
      EventBoardGameArrivalVoiceSvtIdList_k__BackingField = this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
      if ( !EventBoardGameArrivalVoiceSvtIdList_k__BackingField )
        goto LABEL_57;
    }
  }
  if ( this->fields._EventBoardDiceVoiceInfo_k__BackingField )
  {
    this->fields._EventBoardDiceVoiceInfo_k__BackingField = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EventBoardDiceVoiceInfo_k__BackingField, 0, v22, v23);
  }
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventBoardGameSpotPrefab, 0, 0) )
  {
    this->fields.eventBoardGameSpotPrefab = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventBoardGameSpotPrefab, 0, v30, v31);
  }
}


void ScrTerminalMap__DestroyMapEff(ScrTerminalMap_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mapEffectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapEffectComponent__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C24422 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapEffectComponent__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapEffectComponent__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24422 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  mapEffectList = (System_Collections_Generic_List_object__o *)this->fields.mapEffectList;
  if ( mapEffectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      mapEffectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapEffectComponent__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1C2D6EC(0, v4);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v12.fields._current,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704(gameObject, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapEffectComponent__Dispose__);
    v8 = this->fields.mapEffectList;
    if ( !v8 )
      sub_1C2D6EC(v6, v7);
    size = v8->fields._size;
    v10 = v8->fields._version + 1;
    v8->fields._size = 0;
    v8->fields._version = v10;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
  }
}


void ScrTerminalMap__DestroyMapObjs(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mapButtonGrid; // x20
  __int64 v4; // x1
  MapButtonControl_o *v5; // x0
  UnityEngine_Object_o *mapCamera; // x20
  struct MapCamera_o *v7; // x8
  MapScroll_o *mScrl; // x20
  UnityEngine_Object_o *rootSpotP; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *subRootSpotP; // x20
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  EventSpotMoveManager_o *eventSpotMoveManager; // x0
  EventMapGimmickMoveManager_o *eventMapGimmickMoveManager; // x0
  UnityEngine_Object_o *rootPathP; // x20
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *rootRoadP; // x20
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *subRootRoadP; // x20
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *rootGimmickP; // x20
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *subRootGimmickP; // x20
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *rootUIGimmickP; // x20
  _BOOL8 v33; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  EventMapManagerInterface_c *klass; // x8
  __int64 v40; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v42; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1

  if ( (byte_4C2443D & 1) == 0 )
  {
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2443D = 1;
  }
  mapButtonGrid = (UnityEngine_Object_o *)this->fields.mapButtonGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapButtonGrid, 0, 0) )
  {
    v5 = this->fields.mapButtonGrid;
    if ( !v5 )
      goto LABEL_61;
    MapButtonControl__DestroyButtons(v5, 0);
  }
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapCamera, 0, 0) )
  {
    v5 = (MapButtonControl_o *)this->fields.mapCamera;
    if ( !v5 )
      goto LABEL_61;
    MapCamera__RemoveMapTexture((MapCamera_o *)v5, 0);
    v7 = this->fields.mapCamera;
    if ( !v7 )
      goto LABEL_61;
    mScrl = v7->fields.mScrl;
    if ( mScrl )
    {
      if ( !byte_4C20C9A )
      {
        sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
        byte_4C20C9A = 1;
      }
      MapScroll__SetScrlPos(mScrl, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
    }
  }
  rootSpotP = (UnityEngine_Object_o *)this->fields.rootSpotP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(rootSpotP, 0, 0);
  if ( v10 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v10, this->fields.rootSpotP, v11);
  subRootSpotP = (UnityEngine_Object_o *)this->fields.subRootSpotP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality(subRootSpotP, 0, 0);
  if ( v13 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v13, this->fields.subRootSpotP, v14);
  eventSpotMoveManager = this->fields.eventSpotMoveManager;
  if ( eventSpotMoveManager )
    EventSpotMoveManager__Clear(eventSpotMoveManager, 0);
  eventMapGimmickMoveManager = this->fields.eventMapGimmickMoveManager;
  if ( eventMapGimmickMoveManager )
    EventMapGimmickMoveManager__Clear(eventMapGimmickMoveManager, 0);
  rootPathP = (UnityEngine_Object_o *)this->fields.rootPathP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__op_Inequality(rootPathP, 0, 0);
  if ( v18 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v18, this->fields.rootPathP, v19);
  rootRoadP = (UnityEngine_Object_o *)this->fields.rootRoadP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__op_Inequality(rootRoadP, 0, 0);
  if ( v21 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v21, this->fields.rootRoadP, v22);
  subRootRoadP = (UnityEngine_Object_o *)this->fields.subRootRoadP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__op_Inequality(subRootRoadP, 0, 0);
  if ( v24 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v24, this->fields.subRootRoadP, v25);
  rootGimmickP = (UnityEngine_Object_o *)this->fields.rootGimmickP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__op_Inequality(rootGimmickP, 0, 0);
  if ( v27 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v27, this->fields.rootGimmickP, v28);
  subRootGimmickP = (UnityEngine_Object_o *)this->fields.subRootGimmickP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v30 = UnityEngine_Object__op_Inequality(subRootGimmickP, 0, 0);
  if ( v30 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v30, this->fields.subRootGimmickP, v31);
  rootUIGimmickP = (UnityEngine_Object_o *)this->fields.rootUIGimmickP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v33 = UnityEngine_Object__op_Inequality(rootUIGimmickP, 0, 0);
  if ( v33 )
    ScrTerminalMap__DestroyChildObjects((ScrTerminalMap_o *)v33, this->fields.rootUIGimmickP, v35);
  ScrTerminalMap__DestroyMapEff(this, v34);
  ScrTerminalMap__DestroyEventBoardGameObj(this, v36);
  ScrTerminalMap__DestroyCooltimeObject(this, v37);
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
LABEL_61:
    sub_1C2D6EC(v5, v4);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v40 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v40;
      p_offset += 2;
      if ( !v40 )
        goto LABEL_58;
    }
    v42 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 10];
  }
  else
  {
LABEL_58:
    v42 = sub_1C7DCA8(this->fields._eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 10);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v42)(
    eventMapManagerInterface_k__BackingField,
    *(_QWORD *)(v42 + 8));
  ScrTerminalMap__DestroySpotCooltimeObjects(this, v43);
  ScrTerminalMap__ReleaseMapUseVoiceData(this, v44);
}


void ScrTerminalMap__DestroySpotCooltimeObjects(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  EventSpotCooltimeComponent_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *coolTimeButtonObj; // x20
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *rewardReceiveButtonObj; // x20
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4C244B4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244B4 = 1;
  }
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
  {
    v7 = this->fields.eventSpotCooltimeComponent;
    if ( !v7 || (EventSpotCooltimeComponent__DestroyObjects(v7, 0), (v7 = this->fields.eventSpotCooltimeComponent) == 0) )
      sub_1C2D6EC(v7, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
  this->fields.eventQuestCooltimeComponent = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventQuestCooltimeComponent, 0, v5, v6);
  coolTimeButtonObj = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(coolTimeButtonObj, 0, 0) )
  {
    v10 = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v10, 0);
  }
  rewardReceiveButtonObj = (UnityEngine_Object_o *)this->fields.rewardReceiveButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardReceiveButtonObj, 0, 0) )
  {
    v12 = (UnityEngine_Object_o *)this->fields.rewardReceiveButtonObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v12, 0);
  }
}


void ScrTerminalMap__DetachEventMapManager(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x21
  EventMapManagerInterface_c *klass; // x8
  __int64 v5; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v7; // x0
  EventMapManagerIdle_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v2 = this;
  if ( (byte_4C2442B & 1) == 0 )
  {
    sub_1C2D490(&EventMapManagerIdle_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    byte_4C2442B = 1;
  }
  eventMapManagerInterface_k__BackingField = v2->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
    sub_1C2D6EC(this, method);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v5 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v5;
      p_offset += 2;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)(&klass->_1.interfaceOffsets + 2 * *(_DWORD *)p_offset + 39);
  }
  else
  {
LABEL_8:
    v7 = sub_1C7DCA8(v2->fields._eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 11);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v7)(
    eventMapManagerInterface_k__BackingField,
    *(_QWORD *)(v7 + 8));
  EventMapManagerFactory__DetachFromTerminalMap(v2, 0);
  v8 = (EventMapManagerIdle_o *)sub_1C2D6DC(EventMapManagerIdle_TypeInfo);
  EventMapManagerIdle___ctor(v8, 0);
  v2->fields._eventMapManagerInterface_k__BackingField = (struct EventMapManagerInterface_o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._eventMapManagerInterface_k__BackingField, (int32_t)v8, v9, v10);
}


void ScrTerminalMap__EndBoardGameDiceEffect(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_o *terminalScene; // x0
  const MethodInfo *v5; // x1

  UnityEngine_RenderSettings__set_ambientLight(this->fields.eventBoardGameColorBuffer, 0);
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    sub_1C2D6EC(0, v3);
  TerminalSceneComponent__SetDirectionalLightActive(terminalScene, 1, 0);
  ScrTerminalMap__PlayBoardGamePieceEffect(this, v5);
}


void ScrTerminalMap__EndBoardGamePieceEffect(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *EventBoardPieceObj_k__BackingField; // x0
  Il2CppObject *Component_object; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Object_object__51051712; // x20
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x20
  System_Action_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t EventId; // w19
  Il2CppObject *MasterData_object; // x20
  int32_t value; // w19
  TerminalPramsManager_c *v16; // x0
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2449F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__EndBoardGamePieceEffect_b__398_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10640/*"PlayBoardGameStopPiecePanel"*/);
    sub_1C2D490(&StringLiteral_8907/*"MapGimmickEffect_StopPiece"*/);
    byte_4C2449F = 1;
  }
  entity = 0;
  EventBoardPieceObj_k__BackingField = this->fields._EventBoardPieceObj_k__BackingField;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       EventBoardPieceObj_k__BackingField,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)Component_object, 0);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.animationNameBuffer, 0) )
  {
    EventBoardPieceObj_k__BackingField = this->fields._EventBoardPieceObj_k__BackingField;
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_45;
    EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       EventBoardPieceObj_k__BackingField,
                                                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_45;
    UnityEngine_Animation__Stop_70908132(
      (UnityEngine_Animation_o *)EventBoardPieceObj_k__BackingField,
      this->fields.animationNameBuffer,
      0);
    this->fields.animationNameBuffer = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animationNameBuffer, 0, v5, v6);
  }
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)this->fields.mapAssetData;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_45;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              (AssetData_o *)EventBoardPieceObj_k__BackingField,
                              (System_String_o *)StringLiteral_8907/*"MapGimmickEffect_StopPiece"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         Object_object__51051712,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)v8,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)EventBoardPieceObj_k__BackingField & 1) != 0 )
  {
    GameObjectExtensions__SafeSetParent_35924288(
      (UnityEngine_GameObject_o *)v8,
      this->fields._EventBoardPieceObj_k__BackingField,
      0);
    Position = GameObjectExtensions__GetPosition(this->fields._EventBoardPieceObj_k__BackingField, 0);
    GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v8, Position, 0);
  }
  if ( !v8 )
    goto LABEL_45;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)v8,
         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
  {
    v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrTerminalMap__EndBoardGamePieceEffect_b__398_0__, 0);
    if ( !v9 )
      goto LABEL_45;
    v9[2].monitor = v10;
    sub_1C2D434((CGThumbnailListItem_o *)&v9[2].monitor, (int32_t)v10, v11, v12);
  }
  else
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10640/*"PlayBoardGameStopPiecePanel"*/,
      0.3,
      0);
  }
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)this->fields.mWarInfo;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_45;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)EventBoardPieceObj_k__BackingField, 0);
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)EventBoardPieceObj_k__BackingField,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_45;
  EventBoardPieceObj_k__BackingField = (UnityEngine_GameObject_o *)UserEventMaster__TryGetEntity(
                                                                     (UserEventMaster_o *)MasterData_object,
                                                                     &entity,
                                                                     *(_QWORD *)(EventBoardPieceObj_k__BackingField[7].fields.m_CachedPtr
                                                                               + 64),
                                                                     EventId,
                                                                     0);
  if ( ((unsigned __int8)EventBoardPieceObj_k__BackingField & 1) == 0 )
    return;
  if ( !entity )
LABEL_45:
    sub_1C2D6EC(EventBoardPieceObj_k__BackingField, method);
  value = entity->fields.value;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24503 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24503 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
}


void ScrTerminalMap__EndRequestDiceUse(ScrTerminalMap_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct MapCamera_o *mapCamera; // x8
  Il2CppObject *v13; // x0
  int32_t currentWarId; // w21
  QuestTree_o *v15; // x22
  System_Action_o *v16; // x23
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_4C2449A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass391_0__EndRequestDiceUse_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass391_0_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C2449A = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass391_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass391_0___ctor((ScrTerminalMap___c__DisplayClass391_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = result;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)result, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseEventItemListDialog((CommonUI_o *)Instance, 0);
  Instance = (Il2CppObject *)System_String__op_Equality(
                               *(System_String_o **)(v5 + 16),
                               (System_String_o *)StringLiteral_22195/*"ng"*/,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    mapCamera = this->fields.mapCamera;
    if ( mapCamera )
    {
      mapCamera->fields._IsTouchEnable_k__BackingField = 1;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
        return;
      }
    }
LABEL_11:
    sub_1C2D6EC(Instance, v7);
  }
  v13 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  currentWarId = this->fields.currentWarId;
  v15 = (QuestTree_o *)v13;
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass391_0__EndRequestDiceUse_b__0__,
    0);
  if ( !v15 )
    goto LABEL_11;
  v17 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v15, currentWarId, v16, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v17, 0);
}


void ScrTerminalMap__EventActionPlay(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  MapButtonControl_o *mapButtonGrid; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct WarEntity_o *mWarEnt; // x8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x21
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  struct TitleInfoControl_o *v14; // x19
  System_Action_o *v15; // x21
  TitleInfoControl_o *v16; // x0
  System_Action_o *v17; // x2
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2
  int32_t v22; // w21
  System_Action_o *v23; // x20
  const MethodInfo *v24; // x2
  TitleInfoControl_o *titleInfoControl; // x21
  int32_t v26; // w20
  System_Action_o *v27; // x22
  struct TitleInfoControl_o *v28; // x21
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2
  TitleInfoControl_o *v31; // x19
  System_Action_o *v32; // x21
  TerminalPramsManager_c *v33; // x0
  struct TitleInfoControl_o *v34; // x20
  System_Action_o *v35; // x19
  TerminalPramsManager_c *v36; // x0
  Il2CppObject *Master_object; // x20
  System_Action_o *v38; // x20
  const MethodInfo *v39; // x2
  _BOOL8 IsEventPanel; // x0
  TerminalPramsManager_c *v41; // x0
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x1
  EventDetailEntity_o *eventDetailEntity; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C24469 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&EventInfoUIProgressControl_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_EventScriptPlay__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__0__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__1__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__2__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__3__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass340_0_TypeInfo);
    byte_4C24469 = 1;
  }
  eventDetailEntity = 0;
  entity = 0;
  v3 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass340_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass340_0___ctor((ScrTerminalMap___c__DisplayClass340_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_96;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_96;
  MapButtonControl__PlayNewButtonEntryAnim(mapButtonGrid, 0);
  mWarEnt = this->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_96;
  *(_DWORD *)(v3 + 24) = mWarEnt->fields.eventId;
  mapButtonGrid = (MapButtonControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mapButtonGrid )
    goto LABEL_96;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)mapButtonGrid, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mapButtonGrid = (MapButtonControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !mapButtonGrid )
    goto LABEL_96;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)mapButtonGrid,
          &entity,
          *(_DWORD *)(v3 + 24),
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    goto LABEL_92;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mapButtonGrid = (MapButtonControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !mapButtonGrid )
    goto LABEL_96;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)mapButtonGrid,
          (Il2CppObject **)&eventDetailEntity,
          *(_DWORD *)(v3 + 24),
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_92;
  mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_96;
  if ( EventDetailEntity__isGroupRanking(eventDetailEntity, 0) )
  {
    v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)v3,
      Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__0__,
      0);
    ScrTerminalMap__ShowEventRaceBoostEffect(this, v12, v11, v13);
    return;
  }
  mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_96;
  mapButtonGrid = (MapButtonControl_o *)EventDetailEntity__IsEventConquest(eventDetailEntity, 0);
  if ( !eventDetailEntity )
    goto LABEL_96;
  if ( ((unsigned __int8)mapButtonGrid & 1) == 0 )
  {
    if ( EventDetailEntity__IsQuestCooltime(eventDetailEntity, 0) )
    {
      v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      ScrTerminalMap__HarvestGrowthDialogOpen(this, v18, v19);
      return;
    }
    v22 = *(_DWORD *)(v3 + 24);
    if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    if ( EventInfoUIProgressControl__IsDispEventProgress(v22, 0) )
    {
      v23 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      ScrTerminalMap__PlayEventProgressEffect(this, v23, v24);
      return;
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsEventUiCushion(eventDetailEntity, 0) )
    {
      titleInfoControl = this->fields.titleInfoControl;
      v26 = *(_DWORD *)(v3 + 24);
      v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      if ( !titleInfoControl )
        goto LABEL_96;
      TitleInfoControl__StartEventUICushionAnimation(titleInfoControl, v26, 1, v27, 0);
      return;
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsSpotCooltime(eventDetailEntity, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23DE0 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23DE0 = 1;
      }
      mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
      }
      v28 = this->fields.titleInfoControl;
      if ( SLODWORD(mapButtonGrid[1].fields.buttons->bounds) < 1 )
      {
        v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v35,
          (Il2CppObject *)v3,
          Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__2__,
          0);
        if ( v28 )
        {
          v16 = v28;
          v17 = v35;
          goto LABEL_25;
        }
        goto LABEL_96;
      }
      if ( !v28 )
        goto LABEL_96;
      TitleInfoControl__RedisplayEventUI(this->fields.titleInfoControl, 0);
      v29 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      ScrTerminalMap__EventAreaImproveResultDialogOpen(this, v29, v30);
      return;
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsPersonalBoss(eventDetailEntity, 0) )
    {
      v31 = this->fields.titleInfoControl;
      v32 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)v3,
        Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__3__,
        0);
      if ( !v31 )
        goto LABEL_96;
      TitleInfoControl__CheckPersonalBossHpAnim(v31, v32, 0);
      return;
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsEventCommandAssist(eventDetailEntity, 0) )
      goto LABEL_67;
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsEventCircleProgress(eventDetailEntity, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23CFD )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23CFD = 1;
      }
      v33 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v33 = TerminalPramsManager_TypeInfo;
      }
      if ( !v33->static_fields->_IsAutoResume_k__BackingField )
        goto LABEL_67;
      mapButtonGrid = (MapButtonControl_o *)this->fields.titleInfoControl;
      if ( !mapButtonGrid )
        goto LABEL_96;
      if ( !TitleInfoControl__IsPlayEventUIAnimation((TitleInfoControl_o *)mapButtonGrid, 1, 0) )
        goto LABEL_67;
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    if ( EventDetailEntity__IsEventHappiness(eventDetailEntity, 0) )
    {
LABEL_67:
      v34 = this->fields.titleInfoControl;
      v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
      if ( v34 )
      {
        v16 = v34;
        goto LABEL_24;
      }
LABEL_96:
      sub_1C2D6EC(mapButtonGrid, v5);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244F7 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244F7 = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v36 = TerminalPramsManager_TypeInfo;
    }
    if ( v36->static_fields->_EventActionQuestId_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C244F7 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C244F7 = 1;
      }
      mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_96;
      if ( ImagePartsGroupMaster__IsContainDispDialogEntityFromQuestId(
             (ImagePartsGroupMaster_o *)Master_object,
             (int32_t)mapButtonGrid[1].fields.buttons->m_Items[20],
             0) )
      {
        v38 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v38, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
        ScrTerminalMap__SkillGetDialogOpen(this, v38, v39);
        return;
      }
    }
    mapButtonGrid = (MapButtonControl_o *)eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_96;
    IsEventPanel = EventDetailEntity__IsEventPanel(eventDetailEntity, 0);
    if ( IsEventPanel )
      ScrTerminalMap__StartEventQuestCheckNewOpen((ScrTerminalMap_o *)IsEventPanel, eventDetailEntity, v9);
LABEL_92:
    v41 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v41 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (CGThumbnailListItem_o *)&v41->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = 0;
    sub_1C2D434(p_eventConquestInfos, 0, (int32_t)v9, v10);
    TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(0);
    p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = 0;
    sub_1C2D434(p_eventHarvestGrowthInfo, 0, v44, v45);
    TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(0);
    TerminalPramsManager__MapModelClearQuestInfo_SaveData(0);
    ScrTerminalMap__EventScriptPlay(this, v46);
    return;
  }
  if ( EventDetailEntity__IsMakeFarm(eventDetailEntity, 0) )
  {
    v14 = this->fields.titleInfoControl;
    v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v3,
      Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__1__,
      0);
    if ( v14 )
    {
      v16 = v14;
LABEL_24:
      v17 = v15;
LABEL_25:
      TitleInfoControl__StartEventUIAnimation(v16, 1, v17, 0);
      return;
    }
    goto LABEL_96;
  }
  v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ScrTerminalMap_EventScriptPlay__, 0);
  ScrTerminalMap__ProductivityGrowthDialogOpen(this, v20, v21);
}


void ScrTerminalMap__EventAreaImproveResultDialogOpen(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v14; // x22

  if ( (byte_4C2446C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass343_0__EventAreaImproveResultDialogOpen_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass343_0_TypeInfo);
    byte_4C2446C = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass343_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass343_0___ctor((ScrTerminalMap___c__DisplayClass343_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalList = mInstance->fields.mTerminalList) == 0
    || (mActionPanel = mTerminalList->fields.mActionPanel,
        v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass343_0__EventAreaImproveResultDialogOpen_b__0__,
          0),
        !titleInfoControl) )
  {
LABEL_14:
    sub_1C2D6EC(v6, v7);
  }
  TitleInfoControl__EventAreaImproveResultDialogOpen(titleInfoControl, mActionPanel, v14, 0);
}


void ScrTerminalMap__EventBoardCameraAction(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        bool isZoomUp,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x23
  ConstantStrMaster_o *v12; // x24
  float RateValue; // s8
  const MethodInfo *v14; // x2
  float v15; // s4
  UnityEngine_Vector3_o ValueVector3; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24495 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_5529/*"EVENT_BOARD_GAME_MAP_POSITION"*/);
    byte_4C24495 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  v12 = (ConstantStrMaster_o *)Instance;
  RateValue = 1.0;
  if ( !isZoomUp )
  {
    if ( !MasterData_object )
      goto LABEL_12;
    RateValue = ConstantMaster__GetRateValue(
                  (ConstantMaster_o *)MasterData_object,
                  (System_String_o *)StringLiteral_5529/*"EVENT_BOARD_GAME_MAP_POSITION"*/,
                  1.8,
                  0);
  }
  if ( !v12 )
LABEL_12:
    sub_1C2D6EC(Instance, v10);
  ValueVector3 = ConstantStrMaster__GetValueVector3(v12, (System_String_o *)StringLiteral_5529/*"EVENT_BOARD_GAME_MAP_POSITION"*/, 0);
  v15 = 0.0;
  if ( !isForce )
    v15 = 0.25;
  ScrTerminalMap__EventBoardCameraAction_36925232(this, ValueVector3, RateValue, v15, callback, v14);
}


System_Collections_IEnumerator_o *ScrTerminalMap__EventBoardCameraActionAuto_IE(
        ScrTerminalMap_o *this,
        int32_t squareId,
        int32_t clearCount,
        int32_t maxClearCount,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C244A2 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_TypeInfo);
    byte_4C244A2 = 1;
  }
  v11 = sub_1C2D6DC(ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_TypeInfo);
  ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401___ctor(
    (ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_o *)v11,
    0,
    0);
  if ( !v11 )
    sub_1C2D6EC(v12, v13);
  *(_QWORD *)(v11 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), (int32_t)this, v14, v15);
  *(_DWORD *)(v11 + 48) = squareId;
  *(_DWORD *)(v11 + 52) = clearCount;
  *(_DWORD *)(v11 + 56) = maxClearCount;
  *(_QWORD *)(v11 + 32) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)callback, v16, v17);
  return (System_Collections_IEnumerator_o *)v11;
}


void ScrTerminalMap__EventBoardCameraAction_36925232(
        ScrTerminalMap_o *this,
        UnityEngine_Vector3_o cameraPosition,
        float zoomScale,
        float actTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s11
  float x; // s12
  UnityEngine_Object_o *mapCamera; // x21
  MapZoom_o *mZoom; // x0
  __int64 v15; // x1
  struct MapCamera_o *v16; // x8
  struct MapCamera_o *v17; // x8
  MapCamera_o *v18; // x20
  const MethodInfo_38B3EC8 *v19; // x2
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v21; // x3
  System_Nullable_float__o size; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector3__o v23; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v24; // 0:x0.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  z = cameraPosition.fields.z;
  y = cameraPosition.fields.y;
  x = cameraPosition.fields.x;
  if ( (byte_4C24496 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24496 = 1;
  }
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mZoom = (MapZoom_o *)UnityEngine_Object__op_Equality(mapCamera, 0, 0);
  if ( ((unsigned __int8)mZoom & 1) != 0 )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    v16 = this->fields.mapCamera;
    if ( !v16 )
      goto LABEL_13;
    mZoom = v16->fields.mZoom;
    if ( !mZoom )
      goto LABEL_13;
    MapZoom__Stop(mZoom, 1, 0);
    v17 = this->fields.mapCamera;
    if ( !v17 )
      goto LABEL_13;
    mZoom = (MapZoom_o *)v17->fields.mScrl;
    if ( !mZoom )
      goto LABEL_13;
    MapScroll__Stop((MapScroll_o *)mZoom, 1, 0);
    v18 = this->fields.mapCamera;
    *(_QWORD *)&v24.fields.hasValue = &v23;
    v25.fields.x = x;
    v25.fields.y = y;
    *(_QWORD *)&v24.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    v25.fields.z = z;
    *(_QWORD *)&v23.fields.hasValue = 0;
    *(_QWORD *)&v23.fields.value.fields.y = 0;
    System_Nullable_Vector3____ctor(v24, v25, v19);
    p_size = (System_Nullable_float__o)&size;
    size = 0;
    System_Nullable_float____ctor(p_size, zoomScale, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
    if ( !v18 )
LABEL_13:
      sub_1C2D6EC(mZoom, v15);
    v21 = size;
    MapCamera__StartAutoWork(v18, actTime, v23, v21, 5, callback, 0);
  }
}


void ScrTerminalMap__EventScriptCaller(ScrTerminalMap_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  EventScriptEntity_o *v13; // x1
  DataManager_o *v14; // x23
  EventScriptEntity_o **v15; // x25
  __int64 v16; // x8
  int32_t v17; // w26
  int v18; // w19
  __int64 v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject **v22; // x22
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x8
  int v26; // w9
  int32_t v27; // w27
  int32_t v28; // w19
  int32_t RankedGroupId; // w21
  Il2CppObject *v30; // x22
  _QWORD *monitor; // x8
  __int64 v32; // x8
  int v33; // w9
  int64_t v34; // x23
  __int64 v35; // x8
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v37; // x0
  Il2CppObject *Object_object__51051712; // x21
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *v41; // x19
  struct System_Int32_array *groupIds; // x8
  __int64 v43; // x1
  __int64 v44; // x22
  int64_t v45; // x24
  ScriptManager_CallbackFunc_o *v46; // x25
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v48; // x27
  System_Text_StringBuilder_o *v49; // x25
  unsigned __int64 v50; // x26
  BalanceConfig_c *v51; // x0
  struct System_Int32_array *giftIds; // x19
  Il2CppObject *v53; // x28
  __int64 v54; // x8
  __int64 v55; // x21
  int v56; // w19
  unsigned int v57; // w29
  __int64 v58; // x22
  __int64 v59; // x8
  __int64 v60; // x22
  __int64 v61; // t1
  System_String_o *v62; // x24
  Il2CppObject *v63; // x23
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x20
  Il2CppObject *v67; // x0
  Il2CppObject *v68; // x0
  EventRaceMaster_o *v69; // x21
  unsigned __int64 v70; // x19
  __int64 v71; // x24
  __int64 v72; // x28
  __int64 v73; // x20
  float GoalRate; // s0
  float v75; // s0
  __int64 v76; // x8
  System_Text_StringBuilder_o *v77; // x21
  __int64 v78; // x8
  __int64 v79; // x28
  int v80; // w26
  unsigned int v81; // w19
  __int64 v82; // x29
  __int64 v83; // x8
  __int64 v84; // x29
  __int64 v85; // t1
  System_Text_StringBuilder_o *v86; // x20
  System_String_o *v87; // x21
  Il2CppObject *v88; // x24
  __int64 v89; // x3
  __int64 v90; // x4
  Il2CppObject *v91; // x23
  Il2CppObject *v92; // x0
  TerminalPramsManager_c *v93; // x0
  System_Text_StringBuilder_o *v94; // x26
  System_Collections_Generic_List_object__o *eventScriptMessages; // x21
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  __int64 v101; // x1
  Il2CppClass **v102; // x0
  struct System_String_o *name; // x21
  Il2CppObject *v104; // x28
  System_Collections_Generic_List_object__o *v105; // x20
  System_String_o *v106; // x23
  const MethodInfo *v107; // x3
  System_Object_array *v108; // x27
  const MethodInfo *v109; // x3
  const MethodInfo *v110; // x3
  Il2CppObject *v111; // x21
  const MethodInfo *v112; // x3
  Il2CppObject *v113; // x21
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  __int64 v119; // x1
  Il2CppClass **v120; // x0
  Il2CppObject *Component_object; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  __int64 v124; // x8
  __int64 v125; // x8
  int32_t v126; // w23
  EventRaceResultEffect_o *v127; // x20
  System_Int64_array *v128; // x21
  System_Action_o *v129; // x24
  __int64 v130; // x0
  GiftMaster_o *v131; // [xsp+10h] [xbp-E0h]
  UnityEngine_GameObject_o *v132; // [xsp+18h] [xbp-D8h]
  __int64 v133; // [xsp+20h] [xbp-D0h]
  DataManager_o *v134; // [xsp+28h] [xbp-C8h]
  SpotPathMaster_o *v135; // [xsp+30h] [xbp-C0h]
  System_Int64_array *restDistances; // [xsp+38h] [xbp-B8h]
  __int64 v137; // [xsp+40h] [xbp-B0h]
  int32_t termId; // [xsp+48h] [xbp-A8h]
  int32_t termIda[2]; // [xsp+48h] [xbp-A8h]
  int32_t eventId; // [xsp+54h] [xbp-9Ch]
  __int64 v141; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *v142; // [xsp+60h] [xbp-90h] BYREF
  int64_t goalTime; // [xsp+68h] [xbp-88h] BYREF
  System_Int64_array *v144; // [xsp+70h] [xbp-80h] BYREF
  EventRaceEntity_o *entity; // [xsp+78h] [xbp-78h] BYREF

  if ( (byte_4C24478 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventRaceResultEffect___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass356_0__EventScriptCaller_b__1__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass356_0_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass356_1__EventScriptCaller_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass356_1_TypeInfo);
    sub_1C2D490(&StringLiteral_6231/*"EventRaceResultEffect_{0}"*/);
    sub_1C2D490(&StringLiteral_5659/*"EVENT_RACE_RESULT_REWARD_DLG_ITEM"*/);
    sub_1C2D490(&StringLiteral_5660/*"EVENT_RACE_RESULT_REWARD_DLG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_5661/*"EVENT_RACE_RESULT_REWARD_DLG_TITLE"*/);
    byte_4C24478 = 1;
  }
  v144 = 0;
  entity = 0;
  v142 = 0;
  goalTime = 0;
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass356_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass356_0___ctor((ScrTerminalMap___c__DisplayClass356_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_144;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  eventScriptCallingList = this->fields.eventScriptCallingList;
  if ( !eventScriptCallingList )
    goto LABEL_144;
  if ( LODWORD(eventScriptCallingList->max_length) <= index )
    goto LABEL_107;
  v13 = eventScriptCallingList->m_Items[index];
  v14 = (DataManager_o *)Instance;
  *(_QWORD *)(v5 + 24) = v13;
  v15 = (EventScriptEntity_o **)(v5 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v13, (int32_t)v10, v11);
  v16 = *(_QWORD *)(v5 + 24);
  if ( !v16 )
    goto LABEL_144;
  v17 = *(_DWORD *)(v16 + 16);
  v18 = *(_DWORD *)(v16 + 40);
  v19 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass356_1_TypeInfo);
  ScrTerminalMap___c__DisplayClass356_1___ctor((ScrTerminalMap___c__DisplayClass356_1_o *)v19, 0);
  if ( !v19 )
    goto LABEL_144;
  *(_QWORD *)(v19 + 24) = v5;
  v22 = (Il2CppObject **)(v19 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v19 + 24), v5, v20, v21);
  if ( !*(_QWORD *)(v19 + 24) )
    goto LABEL_144;
  v25 = *(_QWORD *)(*(_QWORD *)(v19 + 24) + 24LL);
  if ( !v25 )
    goto LABEL_144;
  v26 = *(_DWORD *)(v25 + 28);
  v27 = v18 % 100;
  if ( v26 != 2 )
  {
    if ( v26 == 1 && *(_QWORD *)(v25 + 32) )
    {
      if ( !v14 )
        goto LABEL_144;
      v28 = *(_DWORD *)(v25 + 44);
      Instance = (__int64)DataManager__GetMasterData_object_(
                            v14,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
      if ( !Instance )
        goto LABEL_144;
      RankedGroupId = EventRaceResultMaster__GetRankedGroupId(
                        (EventRaceResultMaster_o *)Instance,
                        v17,
                        v27,
                        v28,
                        &goalTime,
                        0);
      Instance = (__int64)DataManager__GetMasterData_object_(
                            v14,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceMaster___);
      if ( !Instance )
        goto LABEL_144;
      Instance = EventRaceMaster__GetGroupIndex((EventRaceMaster_o *)Instance, v17, v27, RankedGroupId, 0);
      if ( (Instance & 0x80000000) != 0 )
      {
        v30 = *v22;
      }
      else
      {
        v30 = *v22;
        if ( !v30 )
          goto LABEL_144;
        monitor = v30[1].monitor;
        if ( !monitor )
          goto LABEL_144;
        v32 = monitor[4];
        if ( !v32 )
          goto LABEL_144;
        v33 = *(_DWORD *)(v32 + 24);
        if ( (int)Instance < v33 )
        {
          if ( (unsigned int)Instance < v33 )
          {
            v34 = *(_QWORD *)(v32 + 8LL * (unsigned int)Instance + 32);
LABEL_44:
            v45 = goalTime;
            v46 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
            ScriptManager_CallbackFunc___ctor(
              v46,
              v30,
              Method_ScrTerminalMap___c__DisplayClass356_0__EventScriptCaller_b__1__,
              0);
            if ( !ScriptManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            ScriptManager__PlayRaceResult(v34, v17, v27, RankedGroupId, v28, v45, v46, 0, 0);
            return;
          }
          goto LABEL_107;
        }
      }
      v34 = 0;
      goto LABEL_44;
    }
LABEL_41:
    ScrTerminalMap__OnEndEventScripts(this, *v15, v10);
    return;
  }
  v35 = *(_QWORD *)(v25 + 32);
  if ( !v35 )
    goto LABEL_144;
  if ( !*(_DWORD *)(v35 + 24) )
    goto LABEL_107;
  mapAssetData = this->fields.mapAssetData;
  v141 = *(_QWORD *)(v35 + 32);
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v141, v10, v23, v24);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_6231/*"EventRaceResultEffect_{0}"*/, v37, 0);
  if ( !mapAssetData )
    goto LABEL_144;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              mapAssetData,
                              (System_String_o *)Instance,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    goto LABEL_41;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        Object_object__51051712,
                        (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_144;
  mTerminalList = terminalScene->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_144;
  v41 = (UnityEngine_GameObject_o *)Instance;
  GameObjectExtensions__SafeSetParent_35924288(
    (UnityEngine_GameObject_o *)Instance,
    mTerminalList->fields.mActionPanel,
    0);
  GameObjectExtensions__ResetLocalScale(v41, 0);
  GameObjectExtensions__ResetLocalPosition(v41, 0);
  if ( !v14 )
    goto LABEL_144;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v14,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( !Instance )
    goto LABEL_144;
  if ( !EventRaceMaster__TryGetEntity((EventRaceMaster_o *)Instance, &entity, v17, v27, 0) )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v14,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_144;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, v17, v27, &v144, 0);
  if ( !Instance )
    goto LABEL_144;
  if ( !entity )
    goto LABEL_144;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_144;
  v43 = *(unsigned int *)(Instance + 24);
  v44 = Instance;
  if ( (int)v43 < SLODWORD(groupIds->max_length) )
    goto LABEL_41;
  termId = v27;
  v132 = v41;
  v133 = v19;
  eventId = v17;
  restDistances = (System_Int64_array *)sub_1C2D538(long___TypeInfo, v43);
  MasterData_object = DataManager__GetMasterData_object_(
                        v14,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  v48 = DataManager__GetMasterData_object_(
          v14,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  v134 = v14;
  v135 = (SpotPathMaster_o *)DataManager__GetMasterData_object_(
                               v14,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotPathMaster___);
  v49 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v49, 0);
  v50 = 0;
  v137 = v44;
  while ( 1 )
  {
    v51 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v50 >= v51->static_fields->raceRewardRankMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_144;
    if ( v50 >= *(unsigned int *)(v44 + 24) )
      goto LABEL_107;
    giftIds = entity->fields.giftIds;
    Instance = EventRaceEntity__GetGroupIdx(entity, *(_DWORD *)(v44 + 4 * v50 + 32), 0);
    if ( !giftIds )
      goto LABEL_144;
    if ( (unsigned int)Instance >= LODWORD(giftIds->max_length) )
      goto LABEL_107;
    if ( !MasterData_object )
      goto LABEL_144;
    v53 = MasterData_object;
    Instance = (__int64)GiftMaster__GetGiftListById(
                          (GiftMaster_o *)MasterData_object,
                          giftIds->m_Items[(int)Instance],
                          0);
    if ( !Instance )
      goto LABEL_144;
    v54 = *(_QWORD *)(Instance + 24);
    v55 = Instance;
    v56 = v54 - 1;
    if ( (int)v54 >= 1 )
    {
      v57 = 0;
      while ( 1 )
      {
        v58 = v55 + 8LL * (int)v57;
        v61 = *(_QWORD *)(v58 + 32);
        v60 = v58 + 32;
        v59 = v61;
        if ( !v61 || !v48 )
          goto LABEL_144;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
                     &v142,
                     *(_DWORD *)(v59 + 24),
                     (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_RACE_RESULT_REWARD_DLG_ITEM"*/, 0);
          if ( !v142 )
            goto LABEL_144;
          v62 = (System_String_o *)Instance;
          v63 = (Il2CppObject *)v142[1].monitor;
          Instance = (__int64)ItemType__GetCountableString((int32_t)v142[3].klass, 0);
          if ( v57 >= *(_DWORD *)(v55 + 24) )
            goto LABEL_107;
          if ( !*(_QWORD *)v60 )
            goto LABEL_144;
          v66 = (Il2CppObject *)Instance;
          LODWORD(v141) = *(_DWORD *)(*(_QWORD *)v60 + 28LL);
          v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v141, v10, v64, v65);
          Instance = (__int64)System_String__Format_63499224(v62, v63, v66, v67, 0);
          if ( !v49 )
            goto LABEL_144;
          Instance = (__int64)System_Text_StringBuilder__Append_63542928(v49, (System_String_o *)Instance, 0);
        }
        if ( v56 == v57 )
          break;
        if ( ++v57 >= *(_DWORD *)(v55 + 24) )
          goto LABEL_107;
      }
    }
    v44 = v137;
    ++v50;
    MasterData_object = v53;
  }
  v131 = (GiftMaster_o *)MasterData_object;
  v68 = DataManager__GetMasterData_object_(
          v134,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  if ( (int)*(_QWORD *)(v44 + 24) >= 1 )
  {
    v69 = (EventRaceMaster_o *)v68;
    v70 = 0;
    v71 = (unsigned int)*(_QWORD *)(v44 + 24) - 1LL;
    v72 = v44 + 32;
    while ( 1 )
    {
      Instance = (__int64)v135;
      if ( !v135 )
        break;
      Instance = (__int64)SpotPathMaster__GetSpotPathEntity(v135, eventId, termId, *(_DWORD *)(v72 + 4 * v70), 0);
      if ( v70 >= *(unsigned int *)(v44 + 24) )
        goto LABEL_107;
      if ( !v69 )
        break;
      v73 = Instance;
      GoalRate = EventRaceMaster__GetGoalRate(v69, eventId, termId, *(_DWORD *)(v72 + 4 * v70), 0);
      if ( !v73 )
        break;
      v75 = fmaxf(fminf(1.0 - GoalRate, 1.0), 0.0) * (float)*(__int64 *)(v73 + 40);
      v76 = (__int64)v75;
      if ( v75 == INFINITY )
        v76 = 0x8000000000000000LL;
      if ( v76 >= 9999999 )
        v76 = 9999999;
      if ( !restDistances )
        break;
      if ( v70 >= LODWORD(restDistances->max_length) )
        goto LABEL_107;
      restDistances->m_Items[v70] = v76 & ~(v76 >> 63);
      if ( v71 == v70 )
        goto LABEL_88;
      if ( ++v70 >= *(unsigned int *)(v44 + 24) )
        goto LABEL_107;
    }
LABEL_144:
    sub_1C2D6EC(Instance, v7);
  }
LABEL_88:
  v77 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v77, 0);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v134,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  if ( !entity )
    goto LABEL_144;
  if ( !Instance )
    goto LABEL_144;
  Instance = UserEventRaceMaster__GetTotalRacePointInTerm(
               (UserEventRaceMaster_o *)Instance,
               entity->fields.eventId,
               entity->fields.termId,
               0);
  *(_QWORD *)termIda = Instance;
  if ( !entity )
    goto LABEL_144;
  if ( !v131 )
    goto LABEL_144;
  Instance = (__int64)GiftMaster__GetGiftListById(v131, entity->fields.bonusGiftId, 0);
  if ( !Instance )
    goto LABEL_144;
  v78 = *(_QWORD *)(Instance + 24);
  v79 = Instance;
  v80 = v78 - 1;
  if ( (int)v78 >= 1 )
  {
    v81 = 0;
    while ( 1 )
    {
      v82 = v79 + 8LL * (int)v81;
      v85 = *(_QWORD *)(v82 + 32);
      v84 = v82 + 32;
      v83 = v85;
      if ( !v85 || !v48 )
        goto LABEL_144;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
                   &v142,
                   *(_DWORD *)(v83 + 24),
                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        v86 = v77;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_RACE_RESULT_REWARD_DLG_ITEM"*/, 0);
        if ( !v142 )
          goto LABEL_144;
        v87 = (System_String_o *)Instance;
        v88 = (Il2CppObject *)v142[1].monitor;
        Instance = (__int64)ItemType__GetCountableString((int32_t)v142[3].klass, 0);
        if ( v81 >= *(_DWORD *)(v79 + 24) )
          goto LABEL_107;
        if ( !*(_QWORD *)v84 )
          goto LABEL_144;
        v91 = (Il2CppObject *)Instance;
        v141 = *(_QWORD *)termIda * *(int *)(*(_QWORD *)v84 + 28LL);
        v92 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v141, v10, v89, v90);
        Instance = (__int64)System_String__Format_63499224(v87, v88, v91, v92, 0);
        if ( !v86 )
          goto LABEL_144;
        v77 = v86;
        Instance = (__int64)System_Text_StringBuilder__Append_63542928(v86, (System_String_o *)Instance, 0);
      }
      if ( v80 == v81 )
        break;
      if ( ++v81 >= *(_DWORD *)(v79 + 24) )
        goto LABEL_107;
    }
  }
  v93 = TerminalPramsManager_TypeInfo;
  v94 = v77;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  eventScriptMessages = (System_Collections_Generic_List_object__o *)v93->static_fields->eventScriptMessages;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_RACE_RESULT_REWARD_DLG_TITLE"*/, 0);
  if ( !eventScriptMessages )
    goto LABEL_144;
  items = eventScriptMessages->fields._items;
  v99 = Method_System_Collections_Generic_List_string__Add__;
  ++eventScriptMessages->fields._version;
  if ( !items )
    goto LABEL_144;
  size = eventScriptMessages->fields._size;
  v101 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventScriptMessages,
      (Il2CppObject *)Instance,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v102 = &items->obj.klass + size;
    eventScriptMessages->fields._size = size + 1;
    v102[4] = (Il2CppClass *)v101;
    sub_1C2D434((CGThumbnailListItem_o *)(v102 + 4), v101, v96, v97);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v134,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_144;
  Instance = (__int64)EventMaster__GetEventName((EventMaster_o *)Instance, eventId, 0);
  if ( !entity )
    goto LABEL_144;
  name = entity->fields.name;
  v104 = (Il2CppObject *)Instance;
  v105 = (System_Collections_Generic_List_object__o *)TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_RACE_RESULT_REWARD_DLG_MESSAGE"*/, 0);
  Instance = sub_1C2D538(object___TypeInfo, 4);
  if ( !Instance )
    goto LABEL_144;
  v108 = (System_Object_array *)Instance;
  if ( v104 )
  {
    Instance = sub_1C2D5CC(v104, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_145;
  }
  if ( !LODWORD(v108->max_length) )
    goto LABEL_107;
  v108->m_Items[0] = v104;
  sub_1C2D434((CGThumbnailListItem_o *)v108->m_Items, (int32_t)v104, (int32_t)v10, v107);
  if ( name )
  {
    Instance = sub_1C2D5CC(name, v108->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_145;
  }
  if ( LODWORD(v108->max_length) <= 1 )
    goto LABEL_107;
  v108->m_Items[1] = (Il2CppObject *)name;
  sub_1C2D434((CGThumbnailListItem_o *)&v108->m_Items[1], (int32_t)name, (int32_t)v10, v109);
  if ( !v49 )
    goto LABEL_144;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v49->klass->vtable._3_ToString.methodPtr)(
               v49,
               v49->klass->vtable._3_ToString.method);
  v111 = (Il2CppObject *)Instance;
  if ( Instance )
  {
    Instance = sub_1C2D5CC(Instance, v108->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_145;
  }
  if ( LODWORD(v108->max_length) <= 2 )
    goto LABEL_107;
  v108->m_Items[2] = v111;
  sub_1C2D434((CGThumbnailListItem_o *)&v108->m_Items[2], (int32_t)v111, (int32_t)v10, v110);
  if ( !v94 )
    goto LABEL_144;
  Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v94->klass->vtable._3_ToString.methodPtr)(
               v94,
               v94->klass->vtable._3_ToString.method);
  v113 = (Il2CppObject *)Instance;
  if ( Instance )
  {
    Instance = sub_1C2D5CC(Instance, v108->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_145:
      v130 = sub_1C2D710();
      sub_1C2D5B8(v130, 0);
    }
  }
  if ( LODWORD(v108->max_length) <= 3 )
LABEL_107:
    sub_1C2D6F4(Instance, v7, v10);
  v108->m_Items[3] = v113;
  sub_1C2D434((CGThumbnailListItem_o *)&v108->m_Items[3], (int32_t)v113, (int32_t)v10, v112);
  Instance = (__int64)System_String__Format_63499292(v106, v108, 0);
  if ( !v105 )
    goto LABEL_144;
  v116 = v105->fields._items;
  v117 = Method_System_Collections_Generic_List_string__Add__;
  ++v105->fields._version;
  if ( !v116 )
    goto LABEL_144;
  v118 = v105->fields._size;
  v119 = Instance;
  if ( (unsigned int)v118 >= LODWORD(v116->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v105,
      (Il2CppObject *)Instance,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
  }
  else
  {
    v120 = &v116->obj.klass + v118;
    v105->fields._size = v118 + 1;
    v120[4] = (Il2CppClass *)v119;
    sub_1C2D434((CGThumbnailListItem_o *)(v120 + 4), v119, v114, v115);
  }
  if ( !v132 )
    goto LABEL_144;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v132,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRaceResultEffect___);
  *(_QWORD *)(v133 + 16) = Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v133 + 16), (int32_t)Component_object, v122, v123);
  v124 = *(_QWORD *)(v133 + 24);
  if ( !v124 )
    goto LABEL_144;
  v125 = *(_QWORD *)(v124 + 24);
  if ( !v125 )
    goto LABEL_144;
  v126 = *(_DWORD *)(v125 + 16);
  v127 = *(EventRaceResultEffect_o **)(v133 + 16);
  v128 = v144;
  v129 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v129,
    (Il2CppObject *)v133,
    Method_ScrTerminalMap___c__DisplayClass356_1__EventScriptCaller_b__0__,
    0);
  if ( !v127 )
    goto LABEL_144;
  EventRaceResultEffect__SetUp(v127, v126, (System_Int32_array *)v44, v128, restDistances, v129, 0);
}


void ScrTerminalMap__EventScriptPlay(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  Il2CppObject *v9; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x1

  if ( (byte_4C24474 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__EventScriptPlay_b__352_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24474 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244FF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244FF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActionQuestId_k__BackingField = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  eventScriptCallingList = this->fields.eventScriptCallingList;
  if ( eventScriptCallingList && eventScriptCallingList->max_length )
  {
    this->fields.eventScriptCallingIdx = 0;
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ScrTerminalMap__EventScriptPlay_b__352_0__, 0);
    if ( v9 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v9, 2, DEFAULT_FADE_TIME, v12, 0);
      return;
    }
LABEL_17:
    sub_1C2D6EC(Instance, v5);
  }
  this->fields.eventScriptCallingList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventScriptCallingList, 0, v6, v7);
  ScrTerminalMap__OnEveryActionEnd(this, v13);
}


void ScrTerminalMap__FadeOutSpotMask(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x0
  UITweener_o *v4; // x20
  EventDelegate_Callback_o *v5; // x21

  if ( (byte_4C24462 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C2D490(&Method_ScrTerminalMap__FadeOutSpotMask_b__328_0__);
    byte_4C24462 = 1;
  }
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(spotMaskObj, 0) )
  {
    this->fields.isFadingSpotmask = 1;
    GameObjectExtensions__SafeGetComponent_object_(
      this->fields.spotMaskObj,
      (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    v4 = (UITweener_o *)TweenAlpha__Begin(this->fields.spotMaskObj, 0.25, 0.0, 0);
    v5 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap__FadeOutSpotMask_b__328_0__, 0);
    if ( v4 )
    {
      UITweener__SetOnFinished(v4, v5, 0);
      return;
    }
LABEL_8:
    sub_1C2D6EC(spotMaskObj, method);
  }
}


void ScrTerminalMap__Fadein_MapDisp_Start(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  TerminalPramsManager_c *v4; // x0
  ScrTerminalMap_c *v5; // x8
  int32_t EventBoardGameSquareIndex_k__BackingField; // w23
  TerminalPramsManager_c *v7; // x0
  ScrTerminalMap_c *v8; // x8
  int32_t v9; // w20

  if ( (byte_4C2448A & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2448A = 1;
  }
  if ( ScrTerminalMap__IsEventBoardGame(this, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244EA )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244EA = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v5 = ScrTerminalMap_TypeInfo;
    EventBoardGameSquareIndex_k__BackingField = v4->static_fields->_EventBoardGameSquareIndex_k__BackingField;
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
      v5 = ScrTerminalMap_TypeInfo;
    }
    if ( EventBoardGameSquareIndex_k__BackingField == v5->static_fields->AUTO_QUEST_SQUARE_INDEX_1 )
      goto LABEL_22;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244EA )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244EA = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v8 = ScrTerminalMap_TypeInfo;
    v9 = v7->static_fields->_EventBoardGameSquareIndex_k__BackingField;
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
      v8 = ScrTerminalMap_TypeInfo;
    }
    if ( v9 == v8->static_fields->AUTO_QUEST_SQUARE_INDEX_2 )
LABEL_22:
      ScrTerminalMap__FrameOutUI(this, 1, v3);
  }
}


void ScrTerminalMap__ForceOffSpotLarge(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *spotMaskObj; // x0

  if ( (byte_4C2445F & 1) == 0 )
  {
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4C2445F = 1;
  }
  GameObjectExtensions__SafeGetComponent_object_(
    this->fields.spotMaskObj,
    (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  TweenAlpha__Begin(this->fields.spotMaskObj, 0.0, 0.0, 0);
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj
    || (UnityEngine_GameObject__SetActive(spotMaskObj, 0, 0),
        (spotMaskObj = (UnityEngine_GameObject_o *)this->fields.spotLargeComponent) == 0) )
  {
    sub_1C2D6EC(spotMaskObj, v3);
  }
  SpotLargeComponent__ForceOff((SpotLargeComponent_o *)spotMaskObj, 0);
}


void ScrTerminalMap__FrameInUI(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0
  struct TerminalSceneComponent_o *terminalScene; // x8

  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (titleInfoControl = (TitleInfoControl_o *)TitleInfoControl__FrameIn(titleInfoControl, 0, 0),
        (terminalScene = this->fields.terminalScene) == 0)
    || (titleInfoControl = (TitleInfoControl_o *)terminalScene->fields.mPlayerStatus) == 0 )
  {
    sub_1C2D6EC(titleInfoControl, method);
  }
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)titleInfoControl, 0, 0);
  MainMenuBar__FrameIn(0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__FrameOutUI(ScrTerminalMap_o *this, bool isForce, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0
  struct TerminalSceneComponent_o *terminalScene; // x8
  bool v7; // w19

  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (titleInfoControl = (TitleInfoControl_o *)TitleInfoControl__FrameOut(titleInfoControl, isForce, 0),
        (terminalScene = this->fields.terminalScene) == 0)
    || (titleInfoControl = (TitleInfoControl_o *)terminalScene->fields.mPlayerStatus) == 0 )
  {
    sub_1C2D6EC(titleInfoControl, isForce);
  }
  v7 = isForce;
  ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)titleInfoControl, v7, 0);
  MainMenuBar__FrameOut(v7, 0);
}


UnityEngine_GameObject_o *ScrTerminalMap__GetAllMaskObj(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.allMaskObj;
}


System_String_o *ScrTerminalMap__GetAssetAtlasName(
        ScrTerminalMap_o *this,
        Il2CppObject *assetId,
        const MethodInfo *method)
{
  ScrTerminalMap_c *v4; // x0

  if ( (byte_4C24430 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24430 = 1;
  }
  v4 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v4 = ScrTerminalMap_TypeInfo;
  }
  return System_String__Format(v4->static_fields->ASSETS_NAME_ATLAS, assetId, 0);
}


AssetData_o *ScrTerminalMap__GetAssetData(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mapAssetData;
}


System_String_o *ScrTerminalMap__GetAssetMultiMapName(
        ScrTerminalMap_o *this,
        Il2CppObject *assetId,
        MapEntity_o *mapEntity,
        const MethodInfo *method)
{
  System_String_o *OverwriteMapAssetId; // x21
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  int32_t ReferrerMapId; // w21
  ScrTerminalMap_c *v13; // x0
  System_String_o *ASSETS_NAME_PACK_MULTI_MAP; // x20
  Il2CppObject *v15; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C24433 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24433 = 1;
  }
  if ( !mapEntity )
    sub_1C2D6EC(this, assetId);
  OverwriteMapAssetId = MapEntity__GetOverwriteMapAssetId(mapEntity, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(OverwriteMapAssetId, 0);
  if ( !IsNullOrEmpty )
    return ScrTerminalMap__GetAssetName((ScrTerminalMap_o *)IsNullOrEmpty, (Il2CppObject *)OverwriteMapAssetId, v8);
  ReferrerMapId = MapEntity__GetReferrerMapId(mapEntity, 0);
  if ( ReferrerMapId <= 0 )
    ReferrerMapId = mapEntity->fields.id;
  v13 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v13 = ScrTerminalMap_TypeInfo;
  }
  ASSETS_NAME_PACK_MULTI_MAP = v13->static_fields->ASSETS_NAME_PACK_MULTI_MAP;
  v17 = ReferrerMapId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v9, v10, v11);
  return System_String__Format_63499156(ASSETS_NAME_PACK_MULTI_MAP, assetId, v15, 0);
}


System_String_o *ScrTerminalMap__GetAssetName(ScrTerminalMap_o *this, Il2CppObject *assetId, const MethodInfo *method)
{
  ScrTerminalMap_c *v4; // x0

  if ( (byte_4C24432 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24432 = 1;
  }
  v4 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v4 = ScrTerminalMap_TypeInfo;
  }
  return System_String__Format(v4->static_fields->ASSETS_NAME_PACK, assetId, 0);
}


System_Collections_Generic_List_UIAtlas__o *ScrTerminalMap__GetAtlases(
        ScrTerminalMap_o *this,
        const MethodInfo *method)
{
  return this->fields.assetsAtlases;
}


int32_t ScrTerminalMap__GetBoardGamePieceAnimationEasingType(
        ScrTerminalMap_o *this,
        int32_t nowSquareId,
        bool isJump,
        const MethodInfo *method)
{
  if ( isJump )
    return 3;
  else
    return 1;
}


System_String_o *ScrTerminalMap__GetBoardGamePieceAnimationNameBySquareId(
        ScrTerminalMap_o *this,
        int32_t startSquareId,
        int32_t endSquareId,
        const MethodInfo *method)
{
  System_String_o **v6; // x8

  if ( (byte_4C244A7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8900/*"MapGimmickEffect_GappolyPiece_4"*/);
    sub_1C2D490(&StringLiteral_8898/*"MapGimmickEffect_GappolyPiece_2"*/);
    sub_1C2D490(&StringLiteral_8897/*"MapGimmickEffect_GappolyPiece_1"*/);
    sub_1C2D490(&StringLiteral_8899/*"MapGimmickEffect_GappolyPiece_3"*/);
    byte_4C244A7 = 1;
  }
  if ( endSquareId != 11 )
    goto LABEL_7;
  if ( startSquareId == 6 )
  {
    v6 = (System_String_o **)&StringLiteral_8899/*"MapGimmickEffect_GappolyPiece_3"*/;
    return *v6;
  }
  if ( startSquareId == 16 )
  {
    v6 = (System_String_o **)&StringLiteral_8900/*"MapGimmickEffect_GappolyPiece_4"*/;
  }
  else
  {
LABEL_7:
    v6 = (System_String_o **)&StringLiteral_8897/*"MapGimmickEffect_GappolyPiece_1"*/;
    if ( (unsigned int)(startSquareId - 1) > 9 )
      v6 = (System_String_o **)&StringLiteral_8898/*"MapGimmickEffect_GappolyPiece_2"*/;
  }
  return *v6;
}


void ScrTerminalMap__GetBoardGameSquareClearCountAndMaxCount(
        ScrTerminalMap_o *this,
        int32_t squareId,
        int32_t *clearCount,
        int32_t *maxClearCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x23
  Il2CppObject *MasterData_object; // x21
  struct System_Collections_Generic_List_QuestReleaseEntity__o *EventBoardQuestReleaseList_k__BackingField; // x9
  UserQuestMaster_o *v14; // x22
  Il2CppClass *v15; // x28
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t klass; // w24
  __int64 v19; // x1
  __int64 v20; // x1
  NetworkManager_c *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w24
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-A8h] BYREF
  UserQuestEntity_o *v25; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C244A8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C244A8 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v25 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this->fields.mWarInfo
    || (v11 = (DataManager_o *)Instance,
        Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(this->fields.mWarInfo, 0),
        !v11)
    || (MasterData_object = DataManager__GetMasterData_object_(
                              v11,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___),
        Instance = DataManager__GetMasterData_object_(
                     v11,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        *clearCount = 0,
        *maxClearCount = 0,
        (EventBoardQuestReleaseList_k__BackingField = this->fields._EventBoardQuestReleaseList_k__BackingField) == 0) )
  {
    sub_1C2D6EC(Instance, v10);
  }
  v14 = (UserQuestMaster_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)EventBoardQuestReleaseList_k__BackingField,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v15 = (Il2CppClass *)squareId;
  v27 = v24;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v16 )
      break;
    if ( !v27.fields._current )
      sub_1C2D6EC(v16, v17);
    if ( v27.fields._current[2].klass == v15 )
    {
      if ( !MasterData_object )
        sub_1C2D6EC(v16, v17);
      klass = (int32_t)v27.fields._current[1].klass;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             &entity,
             klass,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C2D6EC(0, v19);
        if ( !QuestEntity__HasFlag((QuestEntity_o *)entity, 0x8000000000LL, 0) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          v21 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v21 = NetworkManager_TypeInfo;
          }
          if ( !v14 )
            sub_1C2D6EC(v21, v20);
          if ( UserQuestMaster__TryGetEntity(v14, &v25, v21->static_fields->userIdNumber, klass, 0) )
          {
            if ( !v25 )
              sub_1C2D6EC(0, v22);
            v23 = *clearCount;
            *clearCount = UserQuestEntity__getClearNum(v25, 0) + v23;
          }
          ++*maxClearCount;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
}


int32_t ScrTerminalMap__GetEventBoardDiceVoiceServantId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *EventBoardDiceVoiceInfo_k__BackingField; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x0
  Il2CppObject *Item; // x0
  int32_t result; // w0
  ScrTerminalMap_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4C244AE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_KeyValuePair_string__object____);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_23846/*"svtId"*/);
    byte_4C244AE = 1;
  }
  EventBoardDiceVoiceInfo_k__BackingField = this->fields._EventBoardDiceVoiceInfo_k__BackingField;
  if ( !EventBoardDiceVoiceInfo_k__BackingField
    || !System_Linq_Enumerable__Any_KeyValuePair_object__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventBoardDiceVoiceInfo_k__BackingField,
          (const MethodInfo_30D9A68 *)Method_System_Linq_Enumerable_Any_KeyValuePair_string__object____) )
  {
    return 0;
  }
  v5 = this->fields._EventBoardDiceVoiceInfo_k__BackingField;
  if ( !v5 )
    sub_1C2D6EC(0, v4);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v5,
           (Il2CppObject *)StringLiteral_23846/*"svtId"*/,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return System_Int32__Parse((System_String_o *)Item, 0);
  sub_1C2D9AC(Item);
  ScrTerminalMap__SetupEventBoardGame(v8, v9);
  return result;
}


int32_t ScrTerminalMap__GetEventBoardGameSpotId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  MapControl_WarInfo_o *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C24482 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C24482 = 1;
  }
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  if ( mWarInfo )
  {
    if ( MapControl_WarInfo__GetEventId(mWarInfo, 0) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_13;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v6 = this->fields.mWarInfo;
      if ( !v6 )
        goto LABEL_13;
      v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(v6, 0);
      if ( !v7 )
        goto LABEL_13;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v7,
             &entity,
             (int32_t)Instance,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          LODWORD(mWarInfo) = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)entity, 0);
          return (int)mWarInfo;
        }
LABEL_13:
        sub_1C2D6EC(Instance, v5);
      }
    }
    LODWORD(mWarInfo) = 0;
  }
  return (int)mWarInfo;
}


UnityEngine_GameObject_o *ScrTerminalMap__GetEventBoardSquareObject(
        ScrTerminalMap_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *EventBoardGameObj_k__BackingField; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  bool v9; // w8
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C244AC & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23608/*"square_{0:D2}"*/);
    byte_4C244AC = 1;
  }
  EventBoardGameObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardGameObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(EventBoardGameObj_k__BackingField, 0, 0);
  result = 0;
  if ( !v9 )
  {
    v13 = index;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v6, v7, v8);
    v12 = System_String__Format((System_String_o *)StringLiteral_23608/*"square_{0:D2}"*/, v11, 0);
    return GameObjectExtensions__FindDeepWithLog(this->fields._EventBoardGameObj_k__BackingField, v12, 0, 0);
  }
  return result;
}


UnityEngine_Vector3_o ScrTerminalMap__GetEventBoardSquarePos(
        ScrTerminalMap_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EventBoardSquareObject; // x19

  if ( (byte_4C244AB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244AB = 1;
  }
  EventBoardSquareObject = ScrTerminalMap__GetEventBoardSquareObject(this, index, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EventBoardSquareObject, 0, 0) )
    return GameObjectExtensions__GetPosition(EventBoardSquareObject, 0);
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  return UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
}


SrcSpotBasePrefab_o *ScrTerminalMap__GetFocusSpot(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *monitor; // x20

  if ( (byte_4C24411 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C24411 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  monitor = (UnityEngine_Object_o *)Instance[11].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    return this->fields.mFocusSpot;
  return (SrcSpotBasePrefab_o *)monitor;
}


UnityEngine_GameObject_o *ScrTerminalMap__GetMapGimmickPathBaseObject(
        ScrTerminalMap_o *this,
        MapGimmickPathEntity_o *mapGimmickPathEnt,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  int32_t pathId; // w10
  System_String_o *ASSETS_NAME_MAP_GIMMICK_PATH; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  Il2CppObject *Object_object__51051712; // x20
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2444F & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C2444F = 1;
  }
  v8 = (System_String_o *)ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  if ( !mapGimmickPathEnt
    || (pathId = mapGimmickPathEnt->fields.pathId,
        ASSETS_NAME_MAP_GIMMICK_PATH = ScrTerminalMap_TypeInfo->static_fields->ASSETS_NAME_MAP_GIMMICK_PATH,
        v15 = pathId,
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, assetData, multiAssetData, method),
        v8 = System_String__Format(ASSETS_NAME_MAP_GIMMICK_PATH, v11, 0),
        !assetData) )
  {
    sub_1C2D6EC(v8, mapGimmickPathEnt);
  }
  v12 = v8;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              assetData,
                              v8,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
  {
    if ( !multiAssetData )
      return 0;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                multiAssetData,
                                v12,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
      return 0;
  }
  return (UnityEngine_GameObject_o *)Object_object__51051712;
}


AssetData_o *ScrTerminalMap__GetMapImgAssetData(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mapImgAssetData;
}


System_String_o *ScrTerminalMap__GetMapModelEntryAnimationName(
        ScrTerminalMap_o *this,
        int32_t clearQuestId,
        int32_t clearQuestPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4C24480 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C24480 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v7);
  return QuestPhaseMaster__GetMapModelEntryAnimationName(
           (QuestPhaseMaster_o *)Master_object,
           clearQuestId,
           clearQuestPhase,
           0);
}


System_String_o *ScrTerminalMap__GetMultiMapAssetAtlasName(
        ScrTerminalMap_o *this,
        Il2CppObject *assetId,
        MapEntity_o *mapEntity,
        const MethodInfo *method)
{
  System_String_o *OverwriteMapAssetId; // x21
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  int32_t ReferrerMapId; // w21
  ScrTerminalMap_c *v13; // x0
  System_String_o *ASSETS_NAME_ATLAS_MULTI_MAP; // x20
  Il2CppObject *v15; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C24431 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24431 = 1;
  }
  if ( !mapEntity )
    sub_1C2D6EC(this, assetId);
  OverwriteMapAssetId = MapEntity__GetOverwriteMapAssetId(mapEntity, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(OverwriteMapAssetId, 0);
  if ( !IsNullOrEmpty )
    return ScrTerminalMap__GetAssetAtlasName((ScrTerminalMap_o *)IsNullOrEmpty, (Il2CppObject *)OverwriteMapAssetId, v8);
  ReferrerMapId = MapEntity__GetReferrerMapId(mapEntity, 0);
  if ( ReferrerMapId <= 0 )
    ReferrerMapId = mapEntity->fields.id;
  v13 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v13 = ScrTerminalMap_TypeInfo;
  }
  ASSETS_NAME_ATLAS_MULTI_MAP = v13->static_fields->ASSETS_NAME_ATLAS_MULTI_MAP;
  v17 = ReferrerMapId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v9, v10, v11);
  return System_String__Format_63499156(ASSETS_NAME_ATLAS_MULTI_MAP, assetId, v15, 0);
}


AssetData_o *ScrTerminalMap__GetMultiMapAssetData(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mapMultiAssetData;
}


int32_t ScrTerminalMap__GetPlayerSpotId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mWarInfo; // x0
  const MethodInfo *v4; // x2
  System_String_o *SaveKey_PlayerIcon; // x20
  System_String_o *v6; // x0
  struct MapControl_WarInfo_o *v7; // x8
  System_String_o *v8; // x19

  if ( (byte_4C24443 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    byte_4C24443 = 1;
  }
  mWarInfo = (System_Collections_Generic_List_object__o *)this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_15;
  if ( MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)mWarInfo, 0) )
  {
    SaveKey_PlayerIcon = ScrTerminalMap__GetSaveKey_PlayerIcon(this, 1, v4);
    mWarInfo = (System_Collections_Generic_List_object__o *)UnityEngine_PlayerPrefs__HasKey(SaveKey_PlayerIcon, 0);
    if ( ((unsigned __int8)mWarInfo & 1) != 0 )
    {
      v6 = SaveKey_PlayerIcon;
      return UnityEngine_PlayerPrefs__GetInt_71121948(v6, 0);
    }
    v7 = this->fields.mWarInfo;
    if ( v7 )
    {
      mWarInfo = (System_Collections_Generic_List_object__o *)v7->fields.mapInfoList;
      if ( mWarInfo )
      {
        mWarInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mWarInfo,
                                                                  0,
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
        if ( mWarInfo )
        {
          if ( HIDWORD(mWarInfo->fields._items) != this->fields.currentMapId )
            return -1;
          goto LABEL_11;
        }
      }
    }
LABEL_15:
    sub_1C2D6EC(mWarInfo, method);
  }
LABEL_11:
  v8 = ScrTerminalMap__GetSaveKey_PlayerIcon(this, 0, v4);
  if ( UnityEngine_PlayerPrefs__HasKey(v8, 0) )
  {
    v6 = v8;
    return UnityEngine_PlayerPrefs__GetInt_71121948(v6, 0);
  }
  return -1;
}


System_String_o *ScrTerminalMap__GetSaveKey_BaseMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  int v2; // w19
  System_String_o *v3; // x0

  v2 = (int)this;
  if ( (byte_4C24410 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13691/*"TerminalBaseMap"*/);
    byte_4C24410 = 1;
  }
  v3 = System_Int32__ToString(v2 + 44, 0);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_13691/*"TerminalBaseMap"*/, v3, 0);
}


System_String_o *ScrTerminalMap__GetSaveKey_PlayerIcon(
        ScrTerminalMap_o *this,
        bool isMultiMap,
        const MethodInfo *method)
{
  int32_t currentWarId; // w19
  int32_t currentMapId; // w20

  if ( (byte_4C2440C & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C2440C = 1;
  }
  currentWarId = this->fields.currentWarId;
  if ( isMultiMap )
  {
    currentMapId = this->fields.currentMapId;
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  }
  else
  {
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    currentMapId = 0;
  }
  return ScrTerminalMap__CreateSaveKey_PlayerIcon(currentWarId, currentMapId, method);
}


System_String_o *ScrTerminalMap__GetSaveKey_PlayerMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  int32_t currentWarId; // w19

  if ( (byte_4C2440E & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C2440E = 1;
  }
  currentWarId = this->fields.currentWarId;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  return ScrTerminalMap__CreateSaveKey_PlayerMap(currentWarId, method);
}


UnityEngine_GameObject_o *ScrTerminalMap__GetSpotGameObject(
        ScrTerminalMap_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  System_String_o *GobjName; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  UnityEngine_Object_o *v8; // x19

  if ( (byte_4C24445 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SrcSpotBasePrefab_TypeInfo);
    byte_4C24445 = 1;
  }
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  GobjName = SrcSpotBasePrefab__GetGobjName(spotId, 0);
  if ( !this->fields.mapModelManager )
LABEL_17:
    sub_1C2D6EC(GobjName, v6);
  v7 = GobjName;
  if ( MapModelManager__get_IsMapModel(this->fields.mapModelManager, 0) )
  {
    GobjName = (System_String_o *)this->fields.subRootSpotP;
    if ( !GobjName )
      goto LABEL_17;
  }
  else
  {
    GobjName = (System_String_o *)this->fields.rootSpotP;
    if ( !GobjName )
      goto LABEL_17;
  }
  GobjName = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)GobjName, 0);
  if ( !GobjName )
    goto LABEL_17;
  v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)GobjName, v7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  GobjName = (System_String_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)GobjName & 1) == 0 )
    return 0;
  if ( !v8 )
    goto LABEL_17;
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
}


UnityEngine_GameObject_o *ScrTerminalMap__GetSpotMaskObj(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.spotMaskObj;
}


UnityEngine_GameObject_o *ScrTerminalMap__GetSpotPathBaseObject(
        ScrTerminalMap_o *this,
        SpotPathEntity_o *spotPathEnt,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  int32_t pathId; // w10
  System_String_o *ASSETS_NAME_SPOT_PATH; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  Il2CppObject *Object_object__51051712; // x20
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2444E & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C2444E = 1;
  }
  v8 = (System_String_o *)ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  if ( !spotPathEnt
    || (pathId = spotPathEnt->fields.pathId,
        ASSETS_NAME_SPOT_PATH = ScrTerminalMap_TypeInfo->static_fields->ASSETS_NAME_SPOT_PATH,
        v15 = pathId,
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, assetData, multiAssetData, method),
        v8 = System_String__Format(ASSETS_NAME_SPOT_PATH, v11, 0),
        !assetData) )
  {
    sub_1C2D6EC(v8, spotPathEnt);
  }
  v12 = v8;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              assetData,
                              v8,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
  {
    if ( !multiAssetData )
      return 0;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                multiAssetData,
                                v12,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
      return 0;
  }
  return (UnityEngine_GameObject_o *)Object_object__51051712;
}


SrcSpotBasePrefab_o *ScrTerminalMap__GetSpotPrefab(ScrTerminalMap_o *this, int32_t spotId, const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass292_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *spotList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C24444 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
    sub_1C2D490(&System_Predicate_SrcSpotBasePrefab__TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass292_0__GetSpotPrefab_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass292_0_TypeInfo);
    byte_4C24444 = 1;
  }
  v5 = (ScrTerminalMap___c__DisplayClass292_0_o *)sub_1C2D6DC(ScrTerminalMap___c__DisplayClass292_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass292_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.spotId = spotId,
        spotList = (System_Collections_Generic_List_object__o *)this->fields.spotList,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_SrcSpotBasePrefab__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass292_0__GetSpotPrefab_b__0__,
          0),
        !spotList) )
  {
    sub_1C2D6EC(v6, v7);
  }
  return (SrcSpotBasePrefab_o *)System_Collections_Generic_List_object___Find(
                                  spotList,
                                  (System_Predicate_T__o *)v9,
                                  (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
}


int64_t ScrTerminalMap__GetTimeLimitAt(ScrTerminalMap_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C2441D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2441D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v5);
  }
  return EventRaidMaster__GetEventRaidTimeLimitAt((EventRaidMaster_o *)Instance, eventId, 0);
}


int32_t ScrTerminalMap__GetUsedDiceItemId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  void *eventBoardGameUsingItem; // x0
  __int64 v4; // x1

  if ( (byte_4C244AF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C244AF = 1;
  }
  eventBoardGameUsingItem = this->fields.eventBoardGameUsingItem;
  if ( !eventBoardGameUsingItem )
  {
    eventBoardGameUsingItem = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !eventBoardGameUsingItem
      || (eventBoardGameUsingItem = DataManager__GetMasterData_object_(
                                      (DataManager_o *)eventBoardGameUsingItem,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
      || (eventBoardGameUsingItem = ItemMaster__GetEntityListByType((ItemMaster_o *)eventBoardGameUsingItem, 26, 0)) == 0
      || (eventBoardGameUsingItem = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)eventBoardGameUsingItem,
                                      0,
                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__)) == 0 )
    {
      sub_1C2D6EC(eventBoardGameUsingItem, v4);
    }
  }
  return *((_DWORD *)eventBoardGameUsingItem + 4);
}


void ScrTerminalMap__HarvestGrowthDialogOpen(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v14; // x22

  if ( (byte_4C2446B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass342_0__HarvestGrowthDialogOpen_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass342_0_TypeInfo);
    byte_4C2446B = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass342_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass342_0___ctor((ScrTerminalMap___c__DisplayClass342_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalList = mInstance->fields.mTerminalList) == 0
    || (mActionPanel = mTerminalList->fields.mActionPanel,
        v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass342_0__HarvestGrowthDialogOpen_b__0__,
          0),
        !titleInfoControl) )
  {
LABEL_14:
    sub_1C2D6EC(v6, v7);
  }
  TitleInfoControl__EventHarvestGrowthDialogOpen(titleInfoControl, mActionPanel, v14, 0);
}


void ScrTerminalMap__InitCheckUpdateRequest(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct MapControl_WarInfo_o *mWarInfo; // x8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  const MethodInfo *v9; // x3
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  _BOOL4 IsEventMapLoading; // w9
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C24416 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24416 = 1;
  }
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  this->fields._IsCheckExpiration_k__BackingField = 0;
  if ( !mWarInfo )
    goto LABEL_29;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.mWarInfo )
    goto LABEL_31;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(this->fields.mWarInfo, 0);
  if ( !v8 )
    goto LABEL_31;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v8,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_29;
  Instance = entity;
  if ( !entity )
    goto LABEL_31;
  if ( !EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)entity, 0) )
  {
LABEL_29:
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields._IsCheckExpiration_k__BackingField = 1;
  Instance = entity;
  if ( !entity )
LABEL_31:
    sub_1C2D6EC(Instance, v7);
  this->fields.isRaidMap = EventDetailEntity__IsRaid((EventDetailEntity_o *)entity, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244E5 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244E5 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( v10->static_fields->isCheckHomeExpirationDateEventMap )
  {
    ScrTerminalMap__CheckUpdateRequest(this, 1, callback, v9);
    return;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_4C244E6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244E6 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  IsEventMapLoading = static_fields->IsEventMapLoading;
  static_fields->isCheckHomeExpirationDateEventMap = 1;
  if ( IsEventMapLoading )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = TerminalPramsManager_TypeInfo->static_fields;
    }
    static_fields->IsEventMapLoading = 0;
    goto LABEL_29;
  }
}


void ScrTerminalMap__InitMapCamera(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapCamera_o *mapCamera; // x0

  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    sub_1C2D6EC(0, method);
  MapCamera__Init(mapCamera, 0);
}


void ScrTerminalMap__InitTitleInfo(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0

  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__setHeaderBgImg(titleInfoControl, 0, 0), (titleInfoControl = this->fields.titleInfoControl) == 0)
    || (TitleInfoControl__setTitleImg(titleInfoControl, 1, 1, 0, 0),
        (titleInfoControl = this->fields.titleInfoControl) == 0) )
  {
    sub_1C2D6EC(titleInfoControl, method);
  }
  TitleInfoControl__setBackBtnColliderEnable(titleInfoControl, 1, 0);
}


bool ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v4; // x1
  EventSpotCooltimeComponent_o *v5; // x0

  if ( (byte_4C244BC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244BC = 1;
  }
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
    return 0;
  v5 = this->fields.eventSpotCooltimeComponent;
  if ( !v5 )
    sub_1C2D6EC(0, v4);
  return EventSpotCooltimeComponent__IsActive_SpotCooltimeRewardDialog(v5, 0);
}


bool ScrTerminalMap__IsAllMaskActive(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *allMaskObj; // x0

  allMaskObj = this->fields.allMaskObj;
  if ( !allMaskObj )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf(allMaskObj, 0) )
  {
    allMaskObj = (UnityEngine_GameObject_o *)this->fields.allMaskPanel;
    if ( allMaskObj )
      return ((float (__fastcall *)(UnityEngine_GameObject_o *, _QWORD))allMaskObj->klass[1]._1.this_arg.data)(
               allMaskObj,
               *(_QWORD *)&allMaskObj->klass[1]._1.this_arg.bits) > 0.0;
LABEL_6:
    sub_1C2D6EC(allMaskObj, method);
  }
  return 0;
}


bool ScrTerminalMap__IsCreateBoardGameGimmick(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *EventBoardPieceObj_k__BackingField; // x19
  TerminalPramsManager_c *v6; // x0
  ScrTerminalMap_c *v7; // x8
  int32_t EventBoardGameSquareIndex_k__BackingField; // w22
  TerminalPramsManager_c *v9; // x0
  ScrTerminalMap_c *v10; // x8
  int32_t v11; // w19

  if ( (byte_4C24441 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24441 = 1;
  }
  if ( !ScrTerminalMap__IsEventBoardGame(this, method) || !ScrTerminalMap__IsDispEventBoardGameUI(this, v3) )
    return 0;
  EventBoardPieceObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(EventBoardPieceObj_k__BackingField, 0, 0) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v7 = ScrTerminalMap_TypeInfo;
  EventBoardGameSquareIndex_k__BackingField = v6->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v7 = ScrTerminalMap_TypeInfo;
  }
  if ( EventBoardGameSquareIndex_k__BackingField == v7->static_fields->AUTO_QUEST_SQUARE_INDEX_1 )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v10 = ScrTerminalMap_TypeInfo;
  v11 = v9->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v10 = ScrTerminalMap_TypeInfo;
  }
  return v11 == v10->static_fields->AUTO_QUEST_SQUARE_INDEX_2;
}


bool ScrTerminalMap__IsDataLostBattleAutoReset(
        ScrTerminalMap_o *this,
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t EventDataLostBattleId; // w0
  int32_t v10; // w20
  System_Collections_Generic_List_EventDataLostBattleResetEntity__o *DataLostBattleResetEntities; // x0

  if ( (byte_4C24470 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24470 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F8 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F8 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !v6->static_fields->_IsDataLostBattleAutoReset_k__BackingField )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_20;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0);
  if ( EventDataLostBattleId == -1 )
    return 0;
  v10 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
  if ( !Master_object )
LABEL_20:
    sub_1C2D6EC(Master_object, v8);
  DataLostBattleResetEntities = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                                  (EventDataLostBattleResetMaster_o *)Master_object,
                                  v10,
                                  eventId,
                                  0);
  if ( DataLostBattleResetEntities )
    return DataLostBattleResetEntities->fields._size != 0;
  return 0;
}


bool ScrTerminalMap__IsDialogOnActive(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  CommonUI_o *v3; // x19

  if ( (byte_4C2441F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2441F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  v3 = (CommonUI_o *)Instance;
  return CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0)
      || CommonUI__IsActive_ApRecvDlgComp(v3, 0)
      || CommonUI__IsActive_CommonConfirmDialog(v3, 0)
      || CommonUI__IsActive_NotifiDialog(v3, 0)
      || CommonUI__IsActive_TutorialBigDialog(v3, 0)
      || CommonUI__IsActive_MasterMission(v3, 0)
      || CommonUI__IsActive_MasterProfile(v3, 0)
      || CommonUI__IsActive_MissionListDialog(v3, 0)
      || CommonUI__IsActive_EventItemSelectDlgComp(v3, 0)
      || CommonUI__IsActive_AssistEffectConfirmDialog(v3, 0)
      || CommonUI__IsActive_CommandAssistConfirmDialog(v3, 0);
}


bool ScrTerminalMap__IsDispEventBoardGameUI(ScrTerminalMap_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  System_Int32_array *EventBoardGameMapIdList; // x20
  System_Func_int__bool__o *v5; // x21

  if ( (byte_4C24483 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__IsDispEventBoardGameUI_b__368_0__);
    byte_4C24483 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  EventBoardGameMapIdList = v3->static_fields->EventBoardGameMapIdList;
  if ( !EventBoardGameMapIdList )
    return 0;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    EventBoardGameMapIdList = BalanceConfig_TypeInfo->static_fields->EventBoardGameMapIdList;
  }
  v5 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap__IsDispEventBoardGameUI_b__368_0__, 0);
  return BasicHelper__Any_int__51083888(
           EventBoardGameMapIdList,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
}


bool ScrTerminalMap__IsEnabledToUseEventItem(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0
  int32_t EventId; // w19

  if ( (byte_4C24484 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C24484 = 1;
  }
  mWarInfo = this->fields.mWarInfo;
  if ( mWarInfo )
  {
    EventId = MapControl_WarInfo__GetEventId(mWarInfo, 0);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    LOBYTE(mWarInfo) = CondType__IsUserEventStatus(EventId, 7, 0);
  }
  return (char)mWarInfo;
}


bool ScrTerminalMap__IsEventBoardGame(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  MapControl_WarInfo_o *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C24481 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C24481 = 1;
  }
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  if ( mWarInfo )
  {
    if ( MapControl_WarInfo__GetEventId(mWarInfo, 0) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_13;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v6 = this->fields.mWarInfo;
      if ( !v6 )
        goto LABEL_13;
      v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(v6, 0);
      if ( !v7 )
        goto LABEL_13;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v7,
             &entity,
             (int32_t)Instance,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          LOBYTE(mWarInfo) = EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0);
          return (unsigned __int8)mWarInfo & 1;
        }
LABEL_13:
        sub_1C2D6EC(Instance, v5);
      }
    }
    LOBYTE(mWarInfo) = 0;
  }
  return (unsigned __int8)mWarInfo & 1;
}


// local variable allocation has failed, the output may be wrong!
bool ScrTerminalMap__IsEventBoardGameNextMapDisp(ScrTerminalMap_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0
  int32_t EventId; // w22
  DataManager_o *v7; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v9; // x23
  int32_t spotId; // w20
  clsQuestCheck_o *v11; // x19
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  QuestEntity_o *v15; // [xsp+0h] [xbp-50h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C244AA & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244AA = 1;
  }
  v15 = 0;
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_57;
  EventId = MapControl_WarInfo__GetEventId(mWarInfo, 0);
  mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mWarInfo )
    goto LABEL_57;
  v7 = (DataManager_o *)mWarInfo;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)mWarInfo,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  mWarInfo = (MapControl_WarInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    mWarInfo = (MapControl_WarInfo_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_57;
  mWarInfo = (MapControl_WarInfo_o *)UserEventMaster__TryGetEntity(
                                       (UserEventMaster_o *)v9,
                                       &entity,
                                       *(_QWORD *)(mWarInfo[2].fields.createdDateTime + 64),
                                       EventId,
                                       0);
  if ( ((unsigned __int8)mWarInfo & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244EA )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244EA = 1;
    }
    mWarInfo = (MapControl_WarInfo_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      mWarInfo = (MapControl_WarInfo_o *)TerminalPramsManager_TypeInfo;
    }
    if ( *(_DWORD *)(mWarInfo[2].fields.createdDateTime + 452) == 6 )
      goto LABEL_27;
    if ( !LODWORD(mWarInfo[3].fields.mapInfoList) )
      j_il2cpp_runtime_class_init_0(mWarInfo);
    if ( !byte_4C244EA )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244EA = 1;
    }
    mWarInfo = (MapControl_WarInfo_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      mWarInfo = (MapControl_WarInfo_o *)TerminalPramsManager_TypeInfo;
    }
    if ( *(_DWORD *)(mWarInfo[2].fields.createdDateTime + 452) == 16 )
    {
LABEL_27:
      if ( !entity )
        goto LABEL_57;
      if ( entity->fields.value == 11 )
        return 1;
    }
  }
  if ( !MasterData_object )
    goto LABEL_57;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          (Il2CppObject **)&v15,
          questId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 1;
  mWarInfo = (MapControl_WarInfo_o *)v15;
  if ( !v15 )
    goto LABEL_57;
  mWarInfo = (MapControl_WarInfo_o *)QuestEntity__GetTypeFlag(v15, 0);
  if ( (_DWORD)mWarInfo != 2 || this->fields.isEventBoardGameQuestListView )
    return 0;
  if ( !v15 )
    goto LABEL_57;
  spotId = v15->fields.spotId;
  if ( spotId != ScrTerminalMap__GetEventBoardGameSpotId(this, *(const MethodInfo **)&questId) )
    return 0;
  mWarInfo = (MapControl_WarInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v11 = (clsQuestCheck_o *)mWarInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v11 )
LABEL_57:
    sub_1C2D6EC(mWarInfo, *(_QWORD *)&questId);
  if ( !clsQuestCheck__CheckQuestPlayableNow(
          v11,
          BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
          0) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24302 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24302 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( v12->static_fields->_IsPlayScriptWithMap_k__BackingField )
    return 1;
  if ( !v12->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v12);
  if ( !byte_4C23E9B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E9B = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  return v13->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool ScrTerminalMap__IsEventBoardGameQuestAllClear(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t v4; // w20
  ScrTerminalMap_c *v5; // x0
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  int32_t maxClearCount[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C24497 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24497 = 1;
  }
  v4 = 1;
  while ( 1 )
  {
    *(_QWORD *)maxClearCount = 0;
    ScrTerminalMap__GetBoardGameSquareClearCountAndMaxCount(this, v4, &maxClearCount[1], maxClearCount, v2);
    v5 = ScrTerminalMap_TypeInfo;
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
      v5 = ScrTerminalMap_TypeInfo;
    }
    static_fields = v5->static_fields;
    if ( v4 != static_fields->AUTO_QUEST_SQUARE_INDEX_1 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = ScrTerminalMap_TypeInfo->static_fields;
      }
      if ( v4 != static_fields->AUTO_QUEST_SQUARE_INDEX_2 )
        break;
    }
    if ( maxClearCount[1] <= 0 )
      return 0;
LABEL_13:
    if ( ++v4 == 21 )
      return 1;
  }
  if ( maxClearCount[1] >= maxClearCount[0] )
    goto LABEL_13;
  return 0;
}


bool ScrTerminalMap__IsMapChangeable(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0

  mWarInfo = this->fields.mWarInfo;
  if ( mWarInfo )
    LOBYTE(mWarInfo) = MapControl_WarInfo__IsMultiMap(mWarInfo, 0);
  return (char)mWarInfo;
}


bool ScrTerminalMap__IsMapModel(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapModelManager_o *mapModelManager; // x0

  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager )
    sub_1C2D6EC(0, method);
  return MapModelManager__get_IsMapModel(mapModelManager, 0);
}


bool ScrTerminalMap__IsNeedMapUpdateOnSchedule(ScrTerminalMap_o *this, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v7; // x19

  if ( (byte_4C24418 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C24418 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, warId, 0);
  if ( WarInfoByWarID )
  {
    v7 = WarInfoByWarID;
    if ( MapControl_WarInfo__IsMapUpdateStateEnabled(WarInfoByWarID, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
      if ( Instance )
        return MapUpdateScheduleMaster__IsNeedMapUpdate((MapUpdateScheduleMaster_o *)Instance, v7, 0);
LABEL_11:
      sub_1C2D6EC(Instance, v5);
    }
  }
  return 0;
}


bool ScrTerminalMap__IsSkipCreateBoardGameGimmick(
        ScrTerminalMap_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  __int64 v4; // x2
  ScrTerminalMap_o *v5; // x20
  ScrTerminalMap_o *v6; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 v8; // x20
  __int64 v9; // x23

  if ( (byte_4C24442 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C24442 = 1;
  }
  if ( !mapGimmickInfo )
    goto LABEL_28;
  this = (ScrTerminalMap_o *)MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0);
  if ( !this )
    return (char)this;
  v5 = this;
  if ( LODWORD(this->fields.PLAYER_ICON_POS.fields.z) == 17 )
  {
    this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
    if ( !this )
      goto LABEL_28;
    this = (ScrTerminalMap_o *)QuestReleaseMaster__getListByQuestID(
                                 (QuestReleaseMaster_o *)this,
                                 v5->fields.currentWarId,
                                 0);
    v6 = this;
  }
  else
  {
    v6 = 0;
  }
  if ( v5->fields.currentAssetId != 17 )
    goto LABEL_14;
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___)) == 0 )
  {
LABEL_28:
    sub_1C2D6EC(this, mapGimmickInfo);
  }
  this = (ScrTerminalMap_o *)QuestReleaseMaster__getListByQuestID(
                               (QuestReleaseMaster_o *)this,
                               v5->fields.currentMapImageId,
                               0);
  v6 = this;
LABEL_14:
  if ( !v6 || (m_CancellationTokenSource = v6->fields.m_CancellationTokenSource, (int)m_CancellationTokenSource < 1) )
  {
LABEL_25:
    LOBYTE(this) = 0;
    return (char)this;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= (unsigned int)m_CancellationTokenSource )
      sub_1C2D6F4(this, mapGimmickInfo, v4);
    v9 = *((_QWORD *)&v6->fields.PLAYER_ICON_POS.fields.x + v8);
    if ( !v9 )
      goto LABEL_28;
    if ( *(_DWORD *)(v9 + 20) == 116 )
      break;
LABEL_24:
    if ( (int)++v8 >= (int)m_CancellationTokenSource )
      goto LABEL_25;
  }
  this = (ScrTerminalMap_o *)ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    this = (ScrTerminalMap_o *)ScrTerminalMap_TypeInfo;
  }
  if ( *(_QWORD *)(v9 + 32) != LODWORD(this->fields.subRootGimmickP[6].klass) )
  {
    m_CancellationTokenSource = v6->fields.m_CancellationTokenSource;
    goto LABEL_24;
  }
  LOBYTE(this) = 1;
  return (char)this;
}


void ScrTerminalMap__JumpEventBoardGamePiece(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  MapControl_WarInfo_o *mWarInfo; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  TerminalPramsManager_c *v12; // x0
  int32_t EventId; // w22
  Il2CppObject *MasterData_object; // x23
  int32_t value; // w8
  EventBoardGameCellEntity_o *EntityFromEventIdAndCellId; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // w1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  Il2CppObject *Component_object; // x21
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_String_o *BoardGamePieceAnimationNameBySquareId; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o EventBoardSquarePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C244A5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBoardGameCellMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass404_0_TypeInfo);
    byte_4C244A5 = 1;
  }
  entity = 0;
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass404_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass404_0___ctor((ScrTerminalMap___c__DisplayClass404_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 56) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 56), (int32_t)callback, v10, v11);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v5 + 48) = v12->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  *(_DWORD *)(v5 + 52) = 1;
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_41;
  EventId = MapControl_WarInfo__GetEventId(mWarInfo, 0);
  mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mWarInfo )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)mWarInfo,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  mWarInfo = (MapControl_WarInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    mWarInfo = (MapControl_WarInfo_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_41;
  mWarInfo = (MapControl_WarInfo_o *)UserEventMaster__TryGetEntity(
                                       (UserEventMaster_o *)MasterData_object,
                                       &entity,
                                       *(_QWORD *)(mWarInfo[2].fields.createdDateTime + 64),
                                       EventId,
                                       0);
  if ( ((unsigned __int8)mWarInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_41;
    value = entity->fields.value;
    *(_DWORD *)(v5 + 52) = value;
  }
  else
  {
    value = *(_DWORD *)(v5 + 52);
  }
  if ( *(_DWORD *)(v5 + 48) != value )
  {
    mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !mWarInfo )
      goto LABEL_41;
    mWarInfo = (MapControl_WarInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)mWarInfo,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBoardGameCellMaster___);
    if ( !mWarInfo )
      goto LABEL_41;
    EntityFromEventIdAndCellId = EventBoardGameCellMaster__GetEntityFromEventIdAndCellId(
                                   (EventBoardGameCellMaster_o *)mWarInfo,
                                   EventId,
                                   *(_DWORD *)(v5 + 48),
                                   0);
    if ( EntityFromEventIdAndCellId )
    {
      if ( EntityFromEventIdAndCellId->fields.cellType == 2 )
      {
        EventBoardSquarePos = ScrTerminalMap__GetEventBoardSquarePos(this, *(_DWORD *)(v5 + 48), v17);
        v18 = *(_DWORD *)(v5 + 52);
        *(UnityEngine_Vector3_o *)(v5 + 24) = EventBoardSquarePos;
        *(UnityEngine_Vector3_o *)(v5 + 36) = ScrTerminalMap__GetEventBoardSquarePos(this, v18, v19);
        mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( mWarInfo )
        {
          CommonUI__SetFadeMaskCollider((CommonUI_o *)mWarInfo, 1, 0);
          ScrTerminalMap__FrameOutUI(this, 0, v20);
          mWarInfo = (MapControl_WarInfo_o *)this->fields._EventBoardPieceObj_k__BackingField;
          if ( mWarInfo )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mWarInfo,
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
            if ( v22 )
            {
              v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(
                v24,
                (Il2CppObject *)v5,
                Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__0__,
                0);
              if ( !Component_object )
                goto LABEL_41;
              Component_object[2].klass = (Il2CppClass *)v24;
              sub_1C2D434((CGThumbnailListItem_o *)&Component_object[2], (int32_t)v24, v25, v26);
            }
            BoardGamePieceAnimationNameBySquareId = ScrTerminalMap__GetBoardGamePieceAnimationNameBySquareId(
                                                      (ScrTerminalMap_o *)v22,
                                                      *(_DWORD *)(v5 + 48),
                                                      *(_DWORD *)(v5 + 52),
                                                      v23);
            this->fields.animationNameBuffer = BoardGamePieceAnimationNameBySquareId;
            sub_1C2D434(
              (CGThumbnailListItem_o *)&this->fields.animationNameBuffer,
              (int32_t)BoardGamePieceAnimationNameBySquareId,
              v28,
              v29);
            mWarInfo = (MapControl_WarInfo_o *)this->fields._EventBoardPieceObj_k__BackingField;
            if ( mWarInfo )
            {
              mWarInfo = (MapControl_WarInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)mWarInfo,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              if ( mWarInfo )
              {
                UnityEngine_Animation__Play_70908988(
                  (UnityEngine_Animation_o *)mWarInfo,
                  this->fields.animationNameBuffer,
                  0);
                return;
              }
            }
          }
        }
LABEL_41:
        sub_1C2D6EC(mWarInfo, v7);
      }
    }
  }
  if ( !ScrTerminalMap__TryAutoQuest(this, v7) )
    ActionExtensions__Call(*(System_Action_o **)(v5 + 56), 0);
}


void ScrTerminalMap__LoadAssetsAtlases(
        ScrTerminalMap_o *this,
        AssetData_o *assetData,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v6; // x19
  Il2CppObject *Object_object__51051712; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *assetsAtlases; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  ScrTerminalMap_o *v14; // x1
  Il2CppClass **v15; // x0
  int i; // w8
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x8
  struct System_Object_array *v23; // x9
  _QWORD *v24; // x10
  __int64 v25; // x11
  ScrTerminalMap_o *v26; // x1
  Il2CppClass **v27; // x0
  int v28; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4C2442F & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    this = (ScrTerminalMap_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2442F = 1;
  }
  if ( !assetData )
    goto LABEL_25;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              assetData,
                              atlasName,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Object_object__51051712 )
    {
      this = (ScrTerminalMap_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)Object_object__51051712,
                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      assetsAtlases = (System_Collections_Generic_List_object__o *)v6->fields.assetsAtlases;
      if ( assetsAtlases )
      {
        items = assetsAtlases->fields._items;
        v12 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++assetsAtlases->fields._version;
        if ( items )
        {
          size = assetsAtlases->fields._size;
          v14 = this;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              assetsAtlases,
              (Il2CppObject *)this,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            assetsAtlases->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v14;
            sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v8, v9);
          }
          return;
        }
      }
    }
LABEL_25:
    sub_1C2D6EC(this, assetData);
  }
  for ( i = 1; ; i = v28 + 1 )
  {
    v28 = i;
    v17 = System_Int32__ToString((int32_t)&v28, 0);
    v18 = System_String__Concat_63457864(atlasName, v17, 0);
    v19 = AssetData__GetObject_object__51051712(
            assetData,
            v18,
            (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScrTerminalMap_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( !v19 )
      goto LABEL_25;
    this = (ScrTerminalMap_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v19,
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    v22 = (System_Collections_Generic_List_object__o *)v6->fields.assetsAtlases;
    if ( !v22 )
      goto LABEL_25;
    v23 = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_UIAtlas__Add__;
    ++v22->fields._version;
    if ( !v23 )
      goto LABEL_25;
    v25 = v22->fields._size;
    v26 = this;
    if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)this,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &v23->obj.klass + v25;
      v22->fields._size = v25 + 1;
      v27[4] = (Il2CppClass *)v26;
      sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v20, v21);
    }
  }
}


void ScrTerminalMap__LoadCooltimeMapObject(ScrTerminalMap_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  UnityEngine_Object_o *eventQuestCooltimeComponent; // x22
  struct EventQuestCooltimeComponent_o **p_eventQuestCooltimeComponent; // x21
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Object_object__51051712; // x22
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Object_o *coolTimeButtonObj; // x21
  struct UnityEngine_GameObject_o **p_coolTimeButtonObj; // x21
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *v21; // x19
  UnityEngine_GameObject_o *v22; // x0

  if ( (byte_4C24437 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventInfoCooltimeNoticeButton___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventQuestCooltimeComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_6212/*"EventHarvestNoticeButton"*/);
    sub_1C2D490(&StringLiteral_8892/*"MapGimmickEffect_EventQuestCooltime"*/);
    byte_4C24437 = 1;
  }
  eventQuestCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventQuestCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_eventQuestCooltimeComponent = &this->fields.eventQuestCooltimeComponent;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventQuestCooltimeComponent, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !assetData )
      goto LABEL_32;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                assetData,
                                (System_String_o *)StringLiteral_8892/*"MapGimmickEffect_EventQuestCooltime"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             Object_object__51051712,
                                             (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_32;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Instance,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventQuestCooltimeComponent___);
    *p_eventQuestCooltimeComponent = (struct EventQuestCooltimeComponent_o *)Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventQuestCooltimeComponent, (int32_t)Component_object, v11, v12);
    Instance = (UnityEngine_GameObject_o *)*p_eventQuestCooltimeComponent;
    if ( !*p_eventQuestCooltimeComponent )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetParent_35924212(gameObject, this->fields.rootEventObjP, 0);
    Instance = (UnityEngine_GameObject_o *)this->fields.eventQuestCooltimeComponent;
    if ( !Instance )
      goto LABEL_32;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !byte_4C20DA6 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  Instance = (UnityEngine_GameObject_o *)*p_eventQuestCooltimeComponent;
  if ( !*p_eventQuestCooltimeComponent )
    goto LABEL_32;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(Instance, 1, 0);
  Instance = (UnityEngine_GameObject_o *)*p_eventQuestCooltimeComponent;
  if ( !*p_eventQuestCooltimeComponent )
    goto LABEL_32;
  EventQuestCooltimeComponent__SetAssetData((EventQuestCooltimeComponent_o *)Instance, assetData, 0);
  coolTimeButtonObj = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(coolTimeButtonObj, 0, 0) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (UnityEngine_GameObject_o *)CommonReleaseMaster__IsOpen(
                                             (CommonReleaseMaster_o *)Instance,
                                             30062301,
                                             0,
                                             0,
                                             0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( assetData )
      {
        p_coolTimeButtonObj = &this->fields.coolTimeButtonObj;
        v17 = AssetData__GetObject_object__51051712(
                assetData,
                (System_String_o *)StringLiteral_6212/*"EventHarvestNoticeButton"*/,
                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v18 = UnityEngine_Object__Instantiate_object_(
                v17,
                (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.coolTimeButtonObj = (struct UnityEngine_GameObject_o *)v18;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.coolTimeButtonObj, (int32_t)v18, v19, v20);
        Instance = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
        if ( Instance )
        {
          v21 = *p_coolTimeButtonObj;
          v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          GameObjectExtensions__SafeSetParent_35924288(v21, v22, 0);
          Instance = *p_coolTimeButtonObj;
          if ( *p_coolTimeButtonObj )
          {
            Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     Instance,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCooltimeNoticeButton___);
            if ( Instance )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))Instance->klass[1]._1.image)(
                Instance,
                0,
                Instance->klass[1]._1.gc_desc);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_1C2D6EC(Instance, v8);
    }
  }
}


void ScrTerminalMap__LoadEventBoardGameDiceAsset(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x1
  int32_t EventBoardDiceVoiceServantId; // w0
  System_String_o *VoiceAssetName_42560796; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4C24486 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C24486 = 1;
  }
  if ( ScrTerminalMap__IsEventBoardGame(this, method) && ScrTerminalMap__IsDispEventBoardGameUI(this, v3) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    EventBoardDiceVoiceServantId = ScrTerminalMap__GetEventBoardDiceVoiceServantId(this, v5);
    VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(EventBoardDiceVoiceServantId, 0);
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_0__, 0);
    if ( !Instance )
      sub_1C2D6EC(v9, v10);
    SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, VoiceAssetName_42560796, v8, 1, 0);
  }
}


void ScrTerminalMap__LoadEventBoardGameMapObject(
        ScrTerminalMap_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *EventBoardQuestArrivalPanelObj_k__BackingField; // x0
  __int64 v7; // x1
  Il2CppObject *Object_object__51051712; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x20
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1

  if ( (byte_4C24436 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_8902/*"MapGimmickEffect_GappolyQuestArrivalPanel"*/);
    sub_1C2D490(&StringLiteral_8896/*"MapGimmickEffect_GappolyPiece"*/);
    sub_1C2D490(&StringLiteral_8894/*"MapGimmickEffect_GappolyBoard"*/);
    sub_1C2D490(&StringLiteral_8903/*"MapGimmickEffect_GappolyStopPanel"*/);
    byte_4C24436 = 1;
  }
  if ( ScrTerminalMap__IsDispEventBoardGameUI(this, (const MethodInfo *)assetData) )
  {
    ScrTerminalMap__SetupDiceButton(this, v5);
    if ( assetData )
    {
      Object_object__51051712 = AssetData__GetObject_object__51051712(
                                  assetData,
                                  (System_String_o *)StringLiteral_8894/*"MapGimmickEffect_GappolyBoard"*/,
                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__Instantiate_object_(
               Object_object__51051712,
               (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields._EventBoardGameObj_k__BackingField = (struct UnityEngine_GameObject_o *)v9;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EventBoardGameObj_k__BackingField, (int32_t)v9, v10, v11);
        GameObjectExtensions__SafeSetParent_35924288(
          this->fields._EventBoardGameObj_k__BackingField,
          this->fields.rootEventObjP,
          0);
      }
      v12 = AssetData__GetObject_object__51051712(
              assetData,
              (System_String_o *)StringLiteral_8896/*"MapGimmickEffect_GappolyPiece"*/,
              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__Instantiate_object_(
                v12,
                (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields._EventBoardPieceObj_k__BackingField = (struct UnityEngine_GameObject_o *)v13;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EventBoardPieceObj_k__BackingField, (int32_t)v13, v14, v15);
        GameObjectExtensions__SafeSetParent_35924288(
          this->fields._EventBoardPieceObj_k__BackingField,
          this->fields.rootEventObjP,
          0);
      }
      v16 = AssetData__GetObject_object__51051712(
              assetData,
              (System_String_o *)StringLiteral_8902/*"MapGimmickEffect_GappolyQuestArrivalPanel"*/,
              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0) )
        goto LABEL_24;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__Instantiate_object_(
              v16,
              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields._EventBoardQuestArrivalPanelObj_k__BackingField = (struct UnityEngine_GameObject_o *)v17;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&this->fields._EventBoardQuestArrivalPanelObj_k__BackingField,
        (int32_t)v17,
        v18,
        v19);
      GameObjectExtensions__SafeSetParent_35924288(
        this->fields._EventBoardQuestArrivalPanelObj_k__BackingField,
        this->fields.rootEventObjP,
        0);
      EventBoardQuestArrivalPanelObj_k__BackingField = this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
      if ( EventBoardQuestArrivalPanelObj_k__BackingField )
      {
        UnityEngine_GameObject__SetActive(EventBoardQuestArrivalPanelObj_k__BackingField, 0, 0);
LABEL_24:
        v20 = AssetData__GetObject_object__51051712(
                assetData,
                (System_String_o *)StringLiteral_8903/*"MapGimmickEffect_GappolyStopPanel"*/,
                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v22 = UnityEngine_Object__Instantiate_object_(
                  v20,
                  (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          this->fields._EventBoardStopPanelObj_k__BackingField = (struct UnityEngine_GameObject_o *)v22;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&this->fields._EventBoardStopPanelObj_k__BackingField,
            (int32_t)v22,
            v23,
            v24);
          GameObjectExtensions__SafeSetParent_35924288(
            this->fields._EventBoardStopPanelObj_k__BackingField,
            this->fields.rootEventObjP,
            0);
        }
        ScrTerminalMap__LoadEventBoardGameVoiceInfo(this, v21);
        ScrTerminalMap__LoadEventBoardGameDiceAsset(this, v25);
        return;
      }
    }
    sub_1C2D6EC(EventBoardQuestArrivalPanelObj_k__BackingField, v7);
  }
}


void ScrTerminalMap__LoadEventBoardGameVoiceInfo(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *Value; // x20
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct System_Int32_array *ValueArray; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C24485 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C2D490(&Method_JsonManager_Deserialize_Dictionary_string__object____);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_5532/*"EVENT_BOARD_GAME_QUEST_ARRIVAL_VOICE_SVT_ID_LIST"*/);
    sub_1C2D490(&StringLiteral_5527/*"EVENT_BOARD_GAME_DICE_VOICE_INFO"*/);
    byte_4C24485 = 1;
  }
  if ( ScrTerminalMap__IsEventBoardGame(this, method) && ScrTerminalMap__IsDispEventBoardGameUI(this, v3) )
  {
    Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_5527/*"EVENT_BOARD_GAME_DICE_VOICE_INFO"*/, 0);
    if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0) )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v5 = JsonManager__Deserialize_object_(
             Value,
             (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_Dictionary_string__object____);
      this->fields._EventBoardDiceVoiceInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v5;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EventBoardDiceVoiceInfo_k__BackingField, (int32_t)v5, v6, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
      {
        sub_1C2D6EC(Instance, v9);
      }
      ValueArray = ConstantStrMaster__GetValueArray(
                     (ConstantStrMaster_o *)Instance,
                     (System_String_o *)StringLiteral_5532/*"EVENT_BOARD_GAME_QUEST_ARRIVAL_VOICE_SVT_ID_LIST"*/,
                     0,
                     0);
      this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField = ValueArray;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField,
        (int32_t)ValueArray,
        v11,
        v12);
    }
  }
}


void ScrTerminalMap__LoadEventMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x19
  System_Action_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  EventMapManagerInterface_c *klass; // x8
  __int64 v8; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v10; // x0

  if ( (byte_4C24429 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__LoadEventMap_b__265_0__);
    byte_4C24429 = 1;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrTerminalMap__LoadEventMap_b__265_0__, 0);
  if ( !eventMapManagerInterface_k__BackingField )
    sub_1C2D6EC(v5, v6);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v8 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
  }
  else
  {
LABEL_8:
    v10 = sub_1C7DCA8(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 2);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, System_Action_o *, _QWORD))v10)(
    eventMapManagerInterface_k__BackingField,
    v4,
    *(_QWORD *)(v10 + 8));
}


void ScrTerminalMap__LoadEventMapObject(ScrTerminalMap_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  _BOOL8 IsEventBoardGame; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w21
  const MethodInfo *v10; // x2
  struct WarEntity_o *v11; // x8
  const MethodInfo *v12; // x3
  struct WarEntity_o *v13; // x8
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  EventMapManagerInterface_c *klass; // x8
  __int64 v16; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v18; // x0

  if ( (byte_4C24435 & 1) == 0 )
  {
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&EventQuestCooltimeComponent_TypeInfo);
    byte_4C24435 = 1;
  }
  IsEventBoardGame = ScrTerminalMap__IsEventBoardGame(this, (const MethodInfo *)assetData);
  if ( IsEventBoardGame )
    ScrTerminalMap__LoadEventBoardGameMapObject(this, assetData, v7);
  mWarEnt = this->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_22;
  eventId = mWarEnt->fields.eventId;
  if ( !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
  IsEventBoardGame = EventQuestCooltimeComponent__IsActiveEventQuestCooltime(eventId, 0);
  if ( IsEventBoardGame )
  {
    ScrTerminalMap__LoadCooltimeMapObject(this, assetData, v10);
  }
  else
  {
    v11 = this->fields.mWarEnt;
    if ( !v11 )
      goto LABEL_22;
    IsEventBoardGame = EventSpotCooltimeComponent__IsActiveEventSpotCooltime(v11->fields.eventId, 0);
    if ( IsEventBoardGame )
    {
      v13 = this->fields.mWarEnt;
      if ( !v13 )
        goto LABEL_22;
      ScrTerminalMap__LoadSpotCooltimeMapObject(this, v13->fields.eventId, assetData, v12);
    }
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
LABEL_22:
    sub_1C2D6EC(IsEventBoardGame, v6);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v16 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_19;
    }
    v18 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_19:
    v18 = sub_1C7DCA8(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 3);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, AssetData_o *, _QWORD))v18)(
    eventMapManagerInterface_k__BackingField,
    assetData,
    *(_QWORD *)(v18 + 8));
}


void ScrTerminalMap__LoadFinishMapPack(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C2442C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19110/*"evTexLoad_Finish"*/);
    byte_4C2442C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244E8 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244E8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->isInvisibleConnectAndLoad = 0;
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_19110/*"evTexLoad_Finish"*/, v2);
}


void ScrTerminalMap__LoadMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Component_o *mActionBgColl; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  ScrTerminalMap_o *v15; // x0
  const MethodInfo *v16; // x2
  System_String_o *AssetName; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  struct AssetData_o *mapAssetData; // x8
  __int64 v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  MapControl_WarInfo_o *mWarInfo; // x0
  bool IsMultiMap; // w20
  TerminalPramsManager_c *v30; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  struct MapModelManager_o *v32; // x21
  int32_t v33; // w22
  int32_t currentMapId; // w23
  System_Action_o *v35; // x24
  MapModelManager_o *v36; // x0
  const MethodInfo *v37; // x1
  ScrTerminalMap_o *v38; // x0
  const MethodInfo *v39; // x3
  System_String_o *AssetMultiMapName; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  struct AssetData_o *mapMultiAssetData; // x8
  struct AssetData_o **p_mapMultiAssetData; // x20
  AssetData_o *v47; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct MapModelManager_o *mapModelManager; // x20
  const MethodInfo *v51; // x2
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  ScrTerminalMap_c *v55; // x0
  System_String_o *ASSETS_NAME_MAP_GIMMICK; // x20
  Il2CppObject *v57; // x0
  Il2CppObject *Object_object__51051712; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Action_o *v61; // x20
  const MethodInfo *v62; // x2
  int32_t v63; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v64; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C24427 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_LoadEventMap__);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass262_0_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass262_1__LoadMap_b__1__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass262_1_TypeInfo);
    byte_4C24427 = 1;
  }
  v3 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass262_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass262_0___ctor((ScrTerminalMap___c__DisplayClass262_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_40;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_40;
  mTerminalList = terminalScene->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_40;
  mActionBgColl = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !mActionBgColl )
    goto LABEL_40;
  mActionBgColl = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mActionBgColl, 0);
  if ( !mActionBgColl )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mActionBgColl, 1, 0);
  ScrTerminalMap__DestroyMapObjs(this, v10);
  ScrTerminalMap__AttachEventMapManager(this, v11);
  currentAssetId = this->fields.currentAssetId;
  v15 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v12, v13, v14);
  AssetName = ScrTerminalMap__GetAssetName(v15, (Il2CppObject *)v15, v16);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)AssetName, v18, v19);
  mapAssetData = this->fields.mapAssetData;
  if ( mapAssetData && System_String__op_Equality(mapAssetData->fields.name, *(System_String_o **)(v3 + 24), 0) )
  {
    v22 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass262_1_TypeInfo);
    ScrTerminalMap___c__DisplayClass262_1___ctor((ScrTerminalMap___c__DisplayClass262_1_o *)v22, 0);
    if ( !v22 )
      goto LABEL_40;
    *(_QWORD *)(v22 + 24) = v3;
    sub_1C2D434((CGThumbnailListItem_o *)(v22 + 24), v3, v23, v24);
    mWarInfo = this->fields.mWarInfo;
    if ( mWarInfo )
      IsMultiMap = MapControl_WarInfo__IsMultiMap(mWarInfo, 0);
    else
      IsMultiMap = 0;
    v64 = this->fields.currentAssetId;
    v38 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v25, v26, v27);
    AssetMultiMapName = ScrTerminalMap__GetAssetMultiMapName(v38, (Il2CppObject *)v38, this->fields.mMapEnt, v39);
    *(_QWORD *)(v22 + 16) = AssetMultiMapName;
    sub_1C2D434((CGThumbnailListItem_o *)(v22 + 16), (int32_t)AssetMultiMapName, v41, v42);
    ScrTerminalMap__SetupFeildConfiguration(this, v43);
    if ( IsMultiMap )
    {
      mapMultiAssetData = this->fields.mapMultiAssetData;
      if ( !mapMultiAssetData )
        goto LABEL_34;
      p_mapMultiAssetData = &this->fields.mapMultiAssetData;
      if ( System_String__op_Inequality(mapMultiAssetData->fields.name, *(System_String_o **)(v22 + 16), 0) )
        goto LABEL_30;
      mActionBgColl = (UnityEngine_Component_o *)*p_mapMultiAssetData;
      if ( !*p_mapMultiAssetData )
        goto LABEL_40;
      if ( AssetData__get_IsEmpty((AssetData_o *)mActionBgColl, 0) )
      {
LABEL_30:
        v47 = *p_mapMultiAssetData;
        if ( *p_mapMultiAssetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40313100(v47, 0);
          *p_mapMultiAssetData = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapMultiAssetData, 0, v48, v49);
        }
LABEL_34:
        mapModelManager = this->fields.mapModelManager;
        currentMapId = this->fields.currentMapId;
        v33 = this->fields.currentAssetId;
        v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v35, (Il2CppObject *)v22, Method_ScrTerminalMap___c__DisplayClass262_1__LoadMap_b__1__, 0);
        if ( mapModelManager )
        {
          v36 = mapModelManager;
          goto LABEL_22;
        }
LABEL_40:
        sub_1C2D6EC(mActionBgColl, v5);
      }
    }
    ScrTerminalMap__LoadMapEffectPrefab(this, this->fields.mapAssetData, v44);
    ScrTerminalMap__LoadEventMapObject(this, this->fields.mapAssetData, v51);
    v55 = ScrTerminalMap_TypeInfo;
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
      v55 = ScrTerminalMap_TypeInfo;
    }
    ASSETS_NAME_MAP_GIMMICK = v55->static_fields->ASSETS_NAME_MAP_GIMMICK;
    v63 = this->fields.currentAssetId;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v52, v53, v54);
    mActionBgColl = (UnityEngine_Component_o *)System_String__Format(ASSETS_NAME_MAP_GIMMICK, v57, 0);
    if ( this->fields.mapAssetData )
    {
      Object_object__51051712 = AssetData__GetObject_object__51051712(
                                  this->fields.mapAssetData,
                                  (System_String_o *)mActionBgColl,
                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      this->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)Object_object__51051712;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapGimmickPrefab, (int32_t)Object_object__51051712, v59, v60);
      v61 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v61, (Il2CppObject *)this, Method_ScrTerminalMap_LoadEventMap__, 0);
      ScrTerminalMap__LoadMapImgTex(this, v61, v62);
      goto LABEL_23;
    }
    goto LABEL_40;
  }
  ScrTerminalMap__ReleaseMap(this, 1, v20);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2417B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2417B = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v30->static_fields->isInvisibleConnectAndLoad;
  mActionBgColl = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mActionBgColl )
    goto LABEL_40;
  CommonUI__SetLoadMode((CommonUI_o *)mActionBgColl, !isInvisibleConnectAndLoad, 0);
  v32 = this->fields.mapModelManager;
  currentMapId = this->fields.currentMapId;
  v33 = this->fields.currentAssetId;
  v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v3, Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__0__, 0);
  if ( !v32 )
    goto LABEL_40;
  v36 = v32;
LABEL_22:
  MapModelManager__LoadMapModel(v36, v33, currentMapId, v35, 0);
LABEL_23:
  ScrTerminalMap__LoadMapUseVoiceData(this, v37);
}


void ScrTerminalMap__LoadMapEffectPrefab(ScrTerminalMap_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  int i; // w23
  ScrTerminalMap_c *v10; // x0
  int32_t currentMapId; // w21
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  System_String_o *ASSETS_NAME_MAP_EFFECT; // x21
  Il2CppObject *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  MethodInfo *mapEffectPrefabList; // x0
  Il2CppObject *Object_object__51051712; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  InvokerMethod invoker_method; // x8
  _QWORD *v24; // x9
  __int64 name_low; // x10
  __int64 v26; // x8
  int v27; // [xsp+8h] [xbp-68h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C24434 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_GameObject___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24434 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mapEffectPrefabList,
          (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_GameObject___) )
  {
    for ( i = 1; ; ++i )
    {
      v10 = ScrTerminalMap_TypeInfo;
      currentMapId = this->fields.currentMapId;
      if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        v10 = ScrTerminalMap_TypeInfo;
      }
      static_fields = v10->static_fields;
      if ( currentMapId <= 9999 )
        ASSETS_NAME_MAP_EFFECT = static_fields->ASSETS_NAME_MAP_EFFECT;
      else
        ASSETS_NAME_MAP_EFFECT = static_fields->ASSETS_NAME_MAP_EFFECT_UPPER;
      v28 = this->fields.currentMapId;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v6, v7, v8);
      v27 = i;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v15, v16, v17);
      mapEffectPrefabList = (MethodInfo *)System_String__Format_63499156(ASSETS_NAME_MAP_EFFECT, v14, v18, 0);
      v5 = mapEffectPrefabList;
      if ( !assetData )
LABEL_21:
        sub_1C2D6EC(mapEffectPrefabList, v5);
      Object_object__51051712 = AssetData__GetObject_object__51051712(
                                  assetData,
                                  (System_String_o *)mapEffectPrefabList,
                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
        break;
      mapEffectPrefabList = (MethodInfo *)this->fields.mapEffectPrefabList;
      if ( !mapEffectPrefabList )
        goto LABEL_21;
      invoker_method = mapEffectPrefabList->invoker_method;
      v24 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(mapEffectPrefabList->name);
      if ( !invoker_method )
        goto LABEL_21;
      name_low = SLODWORD(mapEffectPrefabList->name);
      if ( (unsigned int)name_low >= *((_DWORD *)invoker_method + 6) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)mapEffectPrefabList,
          Object_object__51051712,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = (__int64)invoker_method + 8 * name_low;
        LODWORD(mapEffectPrefabList->name) = name_low + 1;
        *(_QWORD *)(v26 + 32) = Object_object__51051712;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 32), (int32_t)Object_object__51051712, v21, v22);
      }
    }
  }
  ScrTerminalMap__CreateMapEff(this, v5);
}


void ScrTerminalMap__LoadMapImgTex(ScrTerminalMap_o *this, System_Action_o *endCallback, const MethodInfo *method)
{
  __int64 v5; // x21
  AssetData_o *mapModelManager; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o **v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ScrTerminalMap_c *v16; // x0
  System_String_o *ASSETS_NAME_BG; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  struct AssetData_o *mapImgAssetData; // x8
  System_String_o *v24; // x22
  struct AssetData_o **p_mapImgAssetData; // x24
  AssetData_o *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  AssetLoader_LoadEndDataHandler_o *v29; // x23
  int32_t currentMapImageH_k__BackingField; // w21
  int32_t currentMapImageW_k__BackingField; // w22
  bool IsMapModel; // w4
  const MethodInfo *v33; // x5
  ScrTerminalMap_o *v34; // x0
  UnityEngine_Texture2D_o *v35; // x1
  UnityEngine_Object_o *currentMapTexture_k__BackingField; // x22
  Il2CppObject *Object_object__51051712; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct UnityEngine_Texture2D_o *v40; // x23
  int32_t currentMapImageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C24439 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass281_0__LoadMapImgTex_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass281_0_TypeInfo);
    byte_4C24439 = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass281_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass281_0___ctor((ScrTerminalMap___c__DisplayClass281_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = endCallback;
  v10 = (System_Action_o **)(v5 + 32);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)endCallback, v11, v12);
  v16 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v16 = ScrTerminalMap_TypeInfo;
  }
  ASSETS_NAME_BG = v16->static_fields->ASSETS_NAME_BG;
  currentMapImageId = this->fields.currentMapImageId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentMapImageId, v13, v14, v15);
  v19 = System_String__Format(ASSETS_NAME_BG, v18, 0);
  *(_QWORD *)(v5 + 24) = v19;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v19, v20, v21);
  v22 = System_String__Concat_63457864(
          ScrTerminalMap_TypeInfo->static_fields->MAP_IMAGE_ASSET_PATH,
          *(System_String_o **)(v5 + 24),
          0);
  mapImgAssetData = this->fields.mapImgAssetData;
  v24 = v22;
  if ( mapImgAssetData )
  {
    p_mapImgAssetData = &this->fields.mapImgAssetData;
    if ( !System_String__op_Inequality(mapImgAssetData->fields.name, v22, 0) )
    {
      mapModelManager = *p_mapImgAssetData;
      if ( !*p_mapImgAssetData )
        goto LABEL_28;
      if ( !AssetData__get_IsEmpty(mapModelManager, 0) )
      {
        currentMapTexture_k__BackingField = (UnityEngine_Object_o *)this->fields._currentMapTexture_k__BackingField;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(currentMapTexture_k__BackingField, 0, 0) )
        {
          mapModelManager = *p_mapImgAssetData;
          if ( !*p_mapImgAssetData )
            goto LABEL_28;
          Object_object__51051712 = AssetData__GetObject_object__51051712(
                                      mapModelManager,
                                      *(System_String_o **)(v5 + 24),
                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
          this->fields._currentMapTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__51051712;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&this->fields._currentMapTexture_k__BackingField,
            (int32_t)Object_object__51051712,
            v38,
            v39);
        }
        mapModelManager = (AssetData_o *)this->fields.mapModelManager;
        if ( mapModelManager )
        {
          currentMapImageW_k__BackingField = this->fields._currentMapImageW_k__BackingField;
          currentMapImageH_k__BackingField = this->fields._currentMapImageH_k__BackingField;
          v40 = this->fields._currentMapTexture_k__BackingField;
          IsMapModel = MapModelManager__get_IsMapModel((MapModelManager_o *)mapModelManager, 0);
          v34 = this;
          v35 = v40;
          goto LABEL_26;
        }
LABEL_28:
        sub_1C2D6EC(mapModelManager, v7);
      }
    }
    v26 = *p_mapImgAssetData;
    if ( *p_mapImgAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40313100(v26, 0);
      *p_mapImgAssetData = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapImgAssetData, 0, v27, v28);
    }
  }
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass281_0__LoadMapImgTex_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v24, v29, 1, 0) )
  {
    mapModelManager = (AssetData_o *)this->fields.mapModelManager;
    if ( mapModelManager )
    {
      currentMapImageW_k__BackingField = this->fields._currentMapImageW_k__BackingField;
      currentMapImageH_k__BackingField = this->fields._currentMapImageH_k__BackingField;
      IsMapModel = MapModelManager__get_IsMapModel((MapModelManager_o *)mapModelManager, 0);
      v34 = this;
      v35 = 0;
LABEL_26:
      ScrTerminalMap__SetMapBgTexture(
        v34,
        v35,
        currentMapImageW_k__BackingField,
        currentMapImageH_k__BackingField,
        IsMapModel,
        v33);
      ActionExtensions__Call(*v10, 0);
      return;
    }
    goto LABEL_28;
  }
}


void ScrTerminalMap__LoadMapUseVoiceData(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapEntity_o *mMapEnt; // x0
  struct System_Int32_array *UseVoiceSvtIDList; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Int32_array *v10; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x22
  int32_t v13; // w20
  Il2CppObject *Instance; // x19
  System_String_o *VoiceAssetName_42560796; // x0
  __int64 v16; // x1

  if ( (byte_4C2443A & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C2443A = 1;
  }
  mMapEnt = this->fields.mMapEnt;
  if ( mMapEnt )
  {
    UseVoiceSvtIDList = MapEntity__GetUseVoiceSvtIDList(mMapEnt, 0);
    this->fields.useVoiceSvtIDList = UseVoiceSvtIDList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.useVoiceSvtIDList, (int32_t)UseVoiceSvtIDList, v5, v6);
    v10 = this->fields.useVoiceSvtIDList;
    if ( v10 )
    {
      max_length = v10->max_length;
      if ( (int)max_length >= 1 )
      {
        v12 = 0;
        do
        {
          if ( v12 >= (unsigned int)max_length )
            sub_1C2D6F4(v7, v8, v9);
          v13 = v10->m_Items[v12];
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(v13, 0);
          if ( !Instance )
            sub_1C2D6EC(VoiceAssetName_42560796, v16);
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, VoiceAssetName_42560796, 0, 1, 0);
          LODWORD(max_length) = v10->max_length;
          ++v12;
        }
        while ( (__int64)v12 < (int)max_length );
      }
    }
  }
}


void ScrTerminalMap__LoadSpotCooltimeMapObject(
        ScrTerminalMap_o *this,
        int32_t eventId,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x23
  EventSpotCooltimeComponent_o **p_eventSpotCooltimeComponent; // x22
  UnityEngine_GameObject_o *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Object_object__51051712; // x23
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_Object_o *coolTimeButtonObj; // x23
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x24
  int32_t CommonReleaseIdByEventId; // w24
  struct UnityEngine_GameObject_o **p_coolTimeButtonObj; // x24
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Object_o *rewardReceiveButtonObj; // x23
  Il2CppObject *v28; // x23
  Il2CppObject *v29; // x24
  int32_t v30; // w24
  struct UnityEngine_GameObject_o **p_rewardReceiveButtonObj; // x24
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_GameObject_o *v36; // x0

  if ( (byte_4C24438 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeNoticeButton___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeRewardReceiveButton___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventSpotCooltimeComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_8893/*"MapGimmickEffect_EventSpotCooltime"*/);
    sub_1C2D490(&StringLiteral_6243/*"EventSpotCooltimeNoticeButton"*/);
    sub_1C2D490(&StringLiteral_6244/*"EventSpotCooltimeRewardReceiveButton"*/);
    byte_4C24438 = 1;
  }
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_eventSpotCooltimeComponent = &this->fields.eventSpotCooltimeComponent;
  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(eventSpotCooltimeComponent, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !assetData )
      goto LABEL_63;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                assetData,
                                (System_String_o *)StringLiteral_8893/*"MapGimmickEffect_EventSpotCooltime"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                  Object_object__51051712,
                                                  (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Master_object )
      goto LABEL_63;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Master_object,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventSpotCooltimeComponent___);
    *p_eventSpotCooltimeComponent = (EventSpotCooltimeComponent_o *)Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventSpotCooltimeComponent, (int32_t)Component_object, v13, v14);
    Master_object = (UnityEngine_GameObject_o *)*p_eventSpotCooltimeComponent;
    if ( !*p_eventSpotCooltimeComponent )
      goto LABEL_63;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    GameObjectExtensions__SetParent_35924212(gameObject, this->fields.rootEventObjP, 0);
    Master_object = (UnityEngine_GameObject_o *)this->fields.eventSpotCooltimeComponent;
    if ( !Master_object )
      goto LABEL_63;
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !byte_4C20DA6 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  Master_object = (UnityEngine_GameObject_o *)*p_eventSpotCooltimeComponent;
  if ( !*p_eventSpotCooltimeComponent )
    goto LABEL_63;
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive(Master_object, 1, 0);
  Master_object = (UnityEngine_GameObject_o *)*p_eventSpotCooltimeComponent;
  if ( !*p_eventSpotCooltimeComponent )
    goto LABEL_63;
  EventSpotCooltimeComponent__Initialize((EventSpotCooltimeComponent_o *)Master_object, eventId, assetData, 0);
  coolTimeButtonObj = (UnityEngine_Object_o *)this->fields.coolTimeButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(coolTimeButtonObj, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !assetData )
      goto LABEL_63;
    v18 = AssetData__GetObject_object__51051712(
            assetData,
            (System_String_o *)StringLiteral_6243/*"EventSpotCooltimeNoticeButton"*/,
            (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_63;
      v19 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v18,
              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeNoticeButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_63;
        CommonReleaseIdByEventId = EventInfoSpotCooltimeNoticeButton__GetCommonReleaseIdByEventId(
                                     (EventInfoSpotCooltimeNoticeButton_o *)v19,
                                     eventId,
                                     0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !Master_object )
          goto LABEL_63;
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseIdByEventId, 0, 0, 0) )
        {
          p_coolTimeButtonObj = &this->fields.coolTimeButtonObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v22 = UnityEngine_Object__Instantiate_object_(
                  v18,
                  (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          this->fields.coolTimeButtonObj = (struct UnityEngine_GameObject_o *)v22;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.coolTimeButtonObj, (int32_t)v22, v23, v24);
          Master_object = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
          if ( !Master_object )
            goto LABEL_63;
          v25 = *p_coolTimeButtonObj;
          v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
          GameObjectExtensions__SafeSetParent_35924288(v25, v26, 0);
          Master_object = *p_coolTimeButtonObj;
          if ( !*p_coolTimeButtonObj )
            goto LABEL_63;
          Master_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        Master_object,
                                                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeNoticeButton___);
          if ( !Master_object )
            goto LABEL_63;
          EventInfoSpotCooltimeNoticeButton__Initialization(
            (EventInfoSpotCooltimeNoticeButton_o *)Master_object,
            eventId,
            0);
        }
      }
    }
  }
  rewardReceiveButtonObj = (UnityEngine_Object_o *)this->fields.rewardReceiveButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(rewardReceiveButtonObj, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !assetData )
      goto LABEL_63;
    v28 = AssetData__GetObject_object__51051712(
            assetData,
            (System_String_o *)StringLiteral_6244/*"EventSpotCooltimeRewardReceiveButton"*/,
            (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_63;
      v29 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v28,
              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeRewardReceiveButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_63;
        v30 = EventInfoSpotCooltimeRewardReceiveButton__GetCommonReleaseIdByEventId(
                (EventInfoSpotCooltimeRewardReceiveButton_o *)v29,
                eventId,
                0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !Master_object )
          goto LABEL_63;
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v30, 0, 0, 0) )
        {
          p_rewardReceiveButtonObj = &this->fields.rewardReceiveButtonObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v32 = UnityEngine_Object__Instantiate_object_(
                  v28,
                  (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          this->fields.rewardReceiveButtonObj = (struct UnityEngine_GameObject_o *)v32;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rewardReceiveButtonObj, (int32_t)v32, v33, v34);
          Master_object = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
          if ( Master_object )
          {
            v35 = *p_rewardReceiveButtonObj;
            v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
            GameObjectExtensions__SafeSetParent_35924288(v35, v36, 0);
            Master_object = *p_rewardReceiveButtonObj;
            if ( *p_rewardReceiveButtonObj )
            {
              Master_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            Master_object,
                                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSpotCooltimeRewardReceiveButton___);
              if ( Master_object )
              {
                EventInfoSpotCooltimeRewardReceiveButton__Initialization(
                  (EventInfoSpotCooltimeRewardReceiveButton_o *)Master_object,
                  eventId,
                  *p_eventSpotCooltimeComponent,
                  assetData,
                  0,
                  0,
                  0);
                return;
              }
            }
          }
LABEL_63:
          sub_1C2D6EC(Master_object, v10);
        }
      }
    }
  }
}


UnityEngine_Vector3_o ScrTerminalMap__LocalPosFromCoord(
        ScrTerminalMap_o *this,
        float x,
        float y,
        float offsetX,
        float offsetY,
        const MethodInfo *method)
{
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v6 = (float)(x - this->fields.mapImageOffsetX) + offsetX;
  v7 = (float)((float)((float)this->fields._currentMapImageH_k__BackingField - y) - this->fields.mapImageOffsetY)
     + offsetY;
  v8 = 0.0;
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


System_String_o *ScrTerminalMap__LotteryEventBoardDiceVoiceCueName(
        ScrTerminalMap_o *this,
        int32_t diceItemId,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  Il2CppObject *v5; // x0
  Il2CppObject *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *EventBoardDiceVoiceInfo_k__BackingField; // x0
  System_String_array *v9; // x19
  System_Random_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = diceItemId;
  if ( (byte_4C244B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Random_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_21004/*"item"*/);
    sub_1C2D490(&StringLiteral_1151/*"0_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C244B0 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v15, 0);
  v5 = (Il2CppObject *)System_String__Concat_63457864((System_String_o *)StringLiteral_21004/*"item"*/, v4, 0);
  if ( this->fields._EventBoardDiceVoiceInfo_k__BackingField )
  {
    v6 = v5;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields._EventBoardDiceVoiceInfo_k__BackingField,
           v5,
           (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      EventBoardDiceVoiceInfo_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)this->fields._EventBoardDiceVoiceInfo_k__BackingField;
      if ( EventBoardDiceVoiceInfo_k__BackingField )
      {
        EventBoardDiceVoiceInfo_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(EventBoardDiceVoiceInfo_k__BackingField, v6, (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( EventBoardDiceVoiceInfo_k__BackingField )
        {
          if ( (System_String_c *)EventBoardDiceVoiceInfo_k__BackingField->klass != string_TypeInfo )
          {
            sub_1C2D9AC(EventBoardDiceVoiceInfo_k__BackingField);
            goto LABEL_16;
          }
          v9 = System_String__Split((System_String_o *)EventBoardDiceVoiceInfo_k__BackingField, 0x2Fu, 0, 0);
          v10 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
          System_Random___ctor(v10, 0);
          if ( v9 && v10 )
          {
            v11 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v10->klass->vtable._7_Next.methodPtr)(
                    v10,
                    LODWORD(v9->max_length),
                    v10->klass->vtable._7_Next.method);
            if ( (unsigned int)v11 < LODWORD(v9->max_length) )
              return System_String__Concat_63457864((System_String_o *)StringLiteral_1151/*"0_"*/, v9->m_Items[(int)v11], 0);
LABEL_16:
            sub_1C2D6F4(v11, v12, v13);
          }
        }
      }
      sub_1C2D6EC(EventBoardDiceVoiceInfo_k__BackingField, v7);
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void ScrTerminalMap__MakeFarmGrowthDialogOpen(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v14; // x22

  if ( (byte_4C2446D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass344_0__MakeFarmGrowthDialogOpen_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass344_0_TypeInfo);
    byte_4C2446D = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass344_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass344_0___ctor((ScrTerminalMap___c__DisplayClass344_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalList = mInstance->fields.mTerminalList) == 0
    || (mActionPanel = mTerminalList->fields.mActionPanel,
        v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass344_0__MakeFarmGrowthDialogOpen_b__0__,
          0),
        !titleInfoControl) )
  {
LABEL_14:
    sub_1C2D6EC(v6, v7);
  }
  TitleInfoControl__MakeFarmGrowthDialogOpen(titleInfoControl, mActionPanel, v14, 0);
}


void ScrTerminalMap__MapTouchEnableAuto(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  QuestTree_o *IsEventBoardGame; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  TerminalPramsManager_c *v11; // x0
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x21
  EventMapManagerInterface_c *klass; // x8
  __int64 v14; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v16; // x0
  TerminalPramsManager_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  Il2CppObject *Master_object; // x21
  const MethodInfo *v20; // x2
  TerminalPramsManager_c *v21; // x0
  UnityEngine_Object_o *SpotGameObject; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C24467 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__MapTouchEnableAuto_b__338_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24467 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_SpotId_k__BackingField < 0 )
    goto LABEL_87;
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  if ( !byte_4C244E9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244E9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_eventRaceBoost_k__BackingField )
    goto LABEL_87;
  IsEventBoardGame = (QuestTree_o *)ScrTerminalMap__IsEventBoardGame(this, method);
  if ( ((unsigned __int8)IsEventBoardGame & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    IsEventBoardGame = (QuestTree_o *)ScrTerminalMap__IsEventBoardGameNextMapDisp(
                                        this,
                                        v11->static_fields->_QuestId_k__BackingField,
                                        v10);
    if ( ((unsigned __int8)IsEventBoardGame & 1) != 0 )
      goto LABEL_87;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
    goto LABEL_84;
  klass = eventMapManagerInterface_k__BackingField->klass;
  v14 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_42;
    }
    v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_42:
    v16 = sub_1C7DCA8(this->fields._eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 5);
  }
  if ( ((*(__int64 (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v16)(
          eventMapManagerInterface_k__BackingField,
          *(_QWORD *)(v16 + 8))
      & 1) == 0 )
    goto LABEL_87;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F5 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F5 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( v17->static_fields->_IsFromRecollectionBoard_k__BackingField )
  {
    if ( !v17->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v17);
    if ( !byte_4C244F6 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244F6 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    if ( v18->static_fields->_SelectedStoryQuestId_k__BackingField < 1 )
      goto LABEL_87;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE0 = 1;
  }
  IsEventBoardGame = (QuestTree_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsEventBoardGame = (QuestTree_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_84;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          (int32_t)IsEventBoardGame[1].fields.questReleaseEntList->fields._items,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_87;
  IsEventBoardGame = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !IsEventBoardGame )
    goto LABEL_84;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond(IsEventBoardGame, (SpotEntity_o *)entity, 1, 0) )
    goto LABEL_87;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE0 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  SpotGameObject = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(
                                             this,
                                             v21->static_fields->_SpotId_k__BackingField,
                                             v20);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsEventBoardGame = (QuestTree_o *)UnityEngine_Object__op_Inequality(SpotGameObject, 0, 0);
  if ( ((unsigned __int8)IsEventBoardGame & 1) == 0 )
    goto LABEL_87;
  if ( !SpotGameObject )
    goto LABEL_84;
  IsEventBoardGame = (QuestTree_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)SpotGameObject,
                                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !IsEventBoardGame )
    goto LABEL_84;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)IsEventBoardGame, 0) )
  {
LABEL_87:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE6 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE6 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_SpotId_k__BackingField = -1;
    this->fields.isEventBoardGameQuestListView = 0;
    if ( !byte_4C23FAE )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
      byte_4C23FAE = 1;
    }
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrTerminalMap__MapTouchEnableAuto_b__338_0__, 0);
    if ( Instance )
    {
      QuestAfterAction__LoadVoice((QuestAfterAction_o *)Instance, v7, 0);
      return;
    }
LABEL_84:
    sub_1C2D6EC(IsEventBoardGame, v9);
  }
  this->fields.isEventBoardGameQuestListView = 0;
  ScrTerminalMap__EventActionPlay(this, v23);
  ScrTerminalMap__SetDisp(this, 1, v24);
  ScrTerminalMap__smfSpotBtn_Click(this, (UnityEngine_GameObject_o *)SpotGameObject, v25);
}


void ScrTerminalMap__MovePlayerIcon(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *spotObject,
        int32_t spotId,
        System_Action_o *endFunc,
        float time,
        const MethodInfo *method)
{
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *playerIcon; // x22
  const MethodInfo *v19; // x2
  System_Action_o *v20; // x0
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  System_Action_o *v25; // x20
  float32x2_t v26; // d1
  unsigned __int64 v27; // d1
  EasingObject_o *v28; // x21
  System_Action_o *v29; // x22

  if ( (byte_4C24424 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass259_0__MovePlayerIcon_b__0__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass259_0__MovePlayerIcon_b__1__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass259_0_TypeInfo);
    byte_4C24424 = 1;
  }
  v11 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass259_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass259_0___ctor((ScrTerminalMap___c__DisplayClass259_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_14;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 32) = endFunc;
  *(_DWORD *)(v11 + 24) = spotId;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)endFunc, v16, v17);
  playerIcon = (UnityEngine_Object_o *)this->fields.playerIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playerIcon, 0, 0) )
  {
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         this->fields.playerIcon,
                         (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v11 + 64) = Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)(v11 + 64), (int32_t)Component_object, v22, v23);
    *(UnityEngine_Vector3_o *)(v11 + 40) = GameObjectExtensions__GetPosition(this->fields.playerIcon, 0);
    ScrTerminalMap__SetPlayerIcon(this, spotObject, v24);
    *(UnityEngine_Vector3_o *)(v11 + 52) = GameObjectExtensions__GetPosition(this->fields.playerIcon, 0);
    v25 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v11,
      Method_ScrTerminalMap___c__DisplayClass259_0__MovePlayerIcon_b__0__,
      0);
    if ( time <= 0.0
      || (v26.n64_u64[0] = vsub_f32(*(float32x2_t *)(v11 + 44), *(float32x2_t *)(v11 + 56)).n64_u64[0],
          v27 = vmul_f32(v26, v26).n64_u64[0],
          (float)(*((float *)&v27 + 1)
                + (float)((float)((float)(*(float *)(v11 + 40) - *(float *)(v11 + 52))
                                * (float)(*(float *)(v11 + 40) - *(float *)(v11 + 52)))
                        + *(float *)&v27)) < 1.0e-10) )
    {
      v20 = v25;
      goto LABEL_13;
    }
    v28 = *(EasingObject_o **)(v11 + 64);
    v29 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_ScrTerminalMap___c__DisplayClass259_0__MovePlayerIcon_b__1__,
      0);
    if ( v28 )
    {
      EasingObject__Play(v28, time, v29, v25, 0.0, 0, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(v12, v13);
  }
  ScrTerminalMap__SetPlayerIcon(this, spotObject, v19);
  v20 = *(System_Action_o **)(v11 + 32);
LABEL_13:
  ActionExtensions__Call(v20, 0);
}


void ScrTerminalMap__OnClickMonoplyBoard(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *diceButton; // x0
  bool enabled; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4C24493 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_OnClickMonoplyBoard__);
    sub_1C2D490(&Method_ScrTerminalMap__OnClickMonoplyBoard_b__384_0__);
    byte_4C24493 = 1;
  }
  diceButton = (UnityEngine_Behaviour_o *)this->fields.diceButton;
  if ( !diceButton )
    sub_1C2D6EC(0, method);
  enabled = UnityEngine_Behaviour__get_enabled(diceButton, 0);
  v5 = Method_ScrTerminalMap_OnClickMonoplyBoard__;
  v6 = enabled;
  if ( (*((_BYTE *)Method_ScrTerminalMap_OnClickMonoplyBoard__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2D4A8(Method_ScrTerminalMap_OnClickMonoplyBoard__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
  if ( v6 )
  {
    OverwriteAssetSoundName__PlayCommonSe(v7, 18, 0, 0);
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__OnClickMonoplyBoard_b__384_0__, 0);
    ScrTerminalMap__CheckAndWarningEventQuestBoardAllClear(this, v8, v9);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
}


void ScrTerminalMap__OnDestroy(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  ScrTerminalMap__ReleaseMap(this, 1, v2);
  ScrTerminalMap__DetachEventMapManager(this, v4);
}


void ScrTerminalMap__OnEndEventScripts(
        ScrTerminalMap_o *this,
        EventScriptEntity_o *nowEventScriptEnt,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  _QWORD *monitor; // x8
  __int64 v6; // x8
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4C24479 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_EventScriptFlagRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&Method_ScrTerminalMap__OnEndEventScripts_b__357_0__);
    byte_4C24479 = 1;
  }
  monitor = v4[32].monitor;
  if ( !monitor )
    goto LABEL_12;
  v6 = monitor[32];
  if ( !v6 )
    goto LABEL_12;
  this = *(ScrTerminalMap_o **)(v6 + 144);
  if ( !this )
    goto LABEL_12;
  this = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, v4, Method_ScrTerminalMap__OnEndEventScripts_b__357_0__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (ScrTerminalMap_o *)NetworkManager__getRequest_object_(
                               v7,
                               (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_EventScriptFlagRequest___);
  if ( !nowEventScriptEnt || !this )
LABEL_12:
    sub_1C2D6EC(this, nowEventScriptEnt);
  EventScriptFlagRequest__beginRequest(
    (EventScriptFlagRequest_o *)this,
    nowEventScriptEnt->fields.eventId,
    nowEventScriptEnt->fields.flagId,
    0);
}


void ScrTerminalMap__OnEveryActionEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  EventMapManagerInterface_c *klass; // x8
  __int64 v7; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v9; // x0
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *v11; // x8
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_4C24476 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__OnEveryActionEnd_b__354_0__);
    this = (ScrTerminalMap_o *)sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C24476 = 1;
  }
  terminalScene = v2->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_22;
  mTerminalList = terminalScene->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_22;
  this = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl;
  if ( !this )
    goto LABEL_22;
  this = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  eventMapManagerInterface_k__BackingField = v2->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
    goto LABEL_22;
  klass = eventMapManagerInterface_k__BackingField->klass;
  v7 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_12;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8];
  }
  else
  {
LABEL_12:
    v9 = sub_1C7DCA8(v2->fields._eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 8);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v9)(
    eventMapManagerInterface_k__BackingField,
    *(_QWORD *)(v9 + 8));
  this = (ScrTerminalMap_o *)v2->fields.mMapEnt;
  v2->fields._BeforeClearQuestIdForAction_k__BackingField = 0;
  if ( !this )
    goto LABEL_22;
  titleInfoControl = v2->fields.titleInfoControl;
  this = (ScrTerminalMap_o *)MapEntity__GetPrioredHeaderId((MapEntity_o *)this, 0, 0, 0);
  if ( !titleInfoControl )
    goto LABEL_22;
  TitleInfoControl__RequestTitleImageChange(titleInfoControl, (int32_t)this, 0);
  v11 = v2->fields.terminalScene;
  if ( !v11 )
    goto LABEL_22;
  this = (ScrTerminalMap_o *)v11->fields.mTerminalList;
  if ( !this )
    goto LABEL_22;
  ScrTerminalListTop__RequestChangeTerminalListBG((ScrTerminalListTop_o *)this, 0, 0);
  if ( v2->fields.isPlayingDataLostBattleResetEffect )
  {
    this = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0);
      return;
    }
LABEL_22:
    sub_1C2D6EC(this, method);
  }
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v2, Method_ScrTerminalMap__OnEveryActionEnd_b__354_0__, 0);
  ScrTerminalMap__showEventScriptDlgs(v2, v12, v13);
}


void ScrTerminalMap__OnMapTouchDisableFinished(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  ScrTerminalListTop_o *v4; // x20
  System_Action_o *v5; // x21
  void *v6; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2447C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&Method_ScrTerminalMap__OnMapTouchDisableFinished_b__360_0__);
    byte_4C2447C = 1;
  }
  monitor = v2[32].monitor;
  if ( !monitor
    || (v4 = (ScrTerminalListTop_o *)*((_QWORD *)monitor + 32),
        v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v5, v2, Method_ScrTerminalMap__OnMapTouchDisableFinished_b__360_0__, 0),
        !v4)
    || (ScrTerminalListTop__CheckLimitCountUnSealQuestOpen(v4, v5, 0), (v6 = v2[32].monitor) == 0)
    || (this = (ScrTerminalMap_o *)*((_QWORD *)v6 + 32)) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)this, 1, 0);
}


void ScrTerminalMap__OnTouchDisp(ScrTerminalMap_o *this, const MethodInfo *method)
{
  _BOOL4 beginTouch; // w21
  TitleInfoControl_o *isDrag; // x0
  __int64 v5; // x1
  struct MapCamera_o *mapCamera; // x8
  struct MapZoom_o *mZoom; // x8
  System_Collections_Generic_List_T__o *gimmickList; // x20
  ScrTerminalMap___c_c *v9; // x0
  System_Func_object__bool__o *_9__438_0; // x21
  Il2CppObject *v11; // x22
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2
  int32_t MapUIState_k__BackingField; // w8
  const MethodInfo *v19; // x2

  if ( (byte_4C244C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_MapGimmickComponent___);
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&System_Func_MapGimmickComponent__bool__TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_OnTouchDisp__);
    sub_1C2D490(&Method_ScrTerminalMap___c__OnTouchDisp_b__438_0__);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    byte_4C244C0 = 1;
  }
  beginTouch = this->fields.beginTouch;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( beginTouch )
  {
    isDrag = (TitleInfoControl_o *)CTouch__isDrag(0);
    if ( ((unsigned __int8)isDrag & 1) != 0 )
      goto LABEL_10;
    mapCamera = this->fields.mapCamera;
    if ( !mapCamera )
      goto LABEL_33;
    mZoom = mapCamera->fields.mZoom;
    if ( !mZoom )
      goto LABEL_33;
    if ( mZoom->fields._UserTotalZoomAmount_k__BackingField > 0.0 )
LABEL_10:
      this->fields.touchGesture = 1;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isTouchRelease(0) )
    {
      if ( this->fields.touchGesture )
      {
LABEL_15:
        *(_WORD *)&this->fields.beginTouch = 0;
        return;
      }
      gimmickList = (System_Collections_Generic_List_T__o *)this->fields.gimmickList;
      if ( !gimmickList )
        goto LABEL_26;
      v9 = ScrTerminalMap___c_TypeInfo;
      if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
        v9 = ScrTerminalMap___c_TypeInfo;
      }
      _9__438_0 = (System_Func_object__bool__o *)v9->static_fields->__9__438_0;
      if ( !_9__438_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = ScrTerminalMap___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__438_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MapGimmickComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__438_0, v11, Method_ScrTerminalMap___c__OnTouchDisp_b__438_0__, 0);
        static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
        static_fields->__9__438_0 = (struct System_Func_MapGimmickComponent__bool__o *)_9__438_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__438_0, (int32_t)_9__438_0, v13, v14);
      }
      if ( !BasicHelper__Any_object_(
              gimmickList,
              (System_Func_T__bool__o *)_9__438_0,
              (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_MapGimmickComponent___) )
      {
LABEL_26:
        v15 = Method_ScrTerminalMap_OnTouchDisp__;
        if ( (*((_BYTE *)Method_ScrTerminalMap_OnTouchDisp__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_1C2D4A8(Method_ScrTerminalMap_OnTouchDisp__);
        v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
        MapUIState_k__BackingField = this->fields._MapUIState_k__BackingField;
        if ( !MapUIState_k__BackingField )
          goto LABEL_15;
        if ( MapUIState_k__BackingField == 1 )
        {
          ScrTerminalMap__SetDispSpotIcon(this, 0, v17);
          this->fields._MapUIState_k__BackingField = 2;
          goto LABEL_15;
        }
        ScrTerminalMap__SetDispMapUI(this, 1, v17);
        ScrTerminalMap__SetDispSpotIcon(this, 1, v19);
        isDrag = this->fields.titleInfoControl;
        if ( isDrag )
        {
          TitleInfoControl__SetDispTitleUI(isDrag, 1, 0);
          this->fields._MapUIState_k__BackingField = 0;
          goto LABEL_15;
        }
LABEL_33:
        sub_1C2D6EC(isDrag, v5);
      }
    }
  }
  else
  {
    this->fields.beginTouch = CTouch__isTouchPush(0);
    this->fields.touchGesture = 0;
  }
}


void ScrTerminalMap__OpenDiceSelectDialog(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x20
  Il2CppObject *v6; // x21
  System_String_o *v7; // x22
  System_Action_o *v8; // x23
  EventItemSelectDlgComponent_CallbackFunc_o *v9; // x24
  System_Action_o *v10; // x25

  if ( (byte_4C24498 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_0__);
    sub_1C2D490(&Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_1__);
    sub_1C2D490(&Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_2__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_5526/*"EVENT_BOARD_GAME_DICE_SELECT"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24498 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  EntityListByType = ItemMaster__GetEntityListByType((ItemMaster_o *)Instance, 26, 0);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5526/*"EVENT_BOARD_GAME_DICE_SELECT"*/, 0);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_0__, 0);
  v9 = (EventItemSelectDlgComponent_CallbackFunc_o *)sub_1C2D6DC(EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
  EventItemSelectDlgComponent_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_1__,
    0);
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrTerminalMap__OpenDiceSelectDialog_b__389_2__, 0);
  if ( !v6 )
LABEL_9:
    sub_1C2D6EC(Instance, v4);
  CommonUI__OpenEventItemSelectDialog(
    (CommonUI_o *)v6,
    EntityListByType,
    v7,
    (System_String_o *)StringLiteral_1/*""*/,
    v8,
    v9,
    v10,
    1,
    0);
}


void ScrTerminalMap__PlayBoardGameDiceEffect(
        ScrTerminalMap_o *this,
        int32_t actionType,
        int32_t diceType,
        int32_t diceNum,
        System_Action_o *callback,
        const MethodInfo *method)
{
  AssetData_o *boardGameDiceAssetData; // x23
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  Il2CppObject *Object_object__51051712; // x23
  Il2CppObject *v14; // x23
  TerminalSceneComponent_o *terminalScene; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x24
  const MethodInfo *v18; // x1
  int32_t EventBoardDiceVoiceServantId; // w25
  const MethodInfo *v20; // x1
  int32_t UsedDiceItemId; // w0
  const MethodInfo *v22; // x2
  System_String_o *v23; // x0
  AssetData_o *v24; // x27
  System_String_o *v25; // x26
  System_Action_o *v26; // x28
  Il2CppObject *v27; // x22
  struct TerminalSceneComponent_o *v28; // x8
  const MethodInfo *v29; // x4
  TerminalPramsManager_c *v30; // x0
  UnityEngine_Object_o *diceCounterComponent; // x23
  struct EventBoardGameDiceCounter_o **p_diceCounterComponent; // x22
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *v38; // x21
  struct TerminalSceneComponent_o *v39; // x8
  int32_t maxClearCount; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t clearCount; // [xsp+8h] [xbp-68h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v42 = actionType;
  if ( (byte_4C2449B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameDiceCounter___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameDiceEffectAction___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_EndBoardGameDiceEffect__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17190/*"bit_diceroll_"*/);
    sub_1C2D490(&StringLiteral_5255/*"DiceCounter"*/);
    byte_4C2449B = 1;
  }
  boardGameDiceAssetData = this->fields.boardGameDiceAssetData;
  if ( !boardGameDiceAssetData )
    goto LABEL_10;
  v11 = System_Int32__ToString((int32_t)&v42, 0);
  v12 = System_String__Concat_63457864((System_String_o *)StringLiteral_17190/*"bit_diceroll_"*/, v11, 0);
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              boardGameDiceAssetData,
                              v12,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    goto LABEL_10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object_(
          Object_object__51051712,
          (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  terminalScene = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0, 0);
  if ( ((unsigned __int8)terminalScene & 1) != 0 )
    goto LABEL_10;
  if ( !v14 )
    goto LABEL_53;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v14,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameDiceEffectAction___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    EventBoardDiceVoiceServantId = ScrTerminalMap__GetEventBoardDiceVoiceServantId(this, v18);
    UsedDiceItemId = ScrTerminalMap__GetUsedDiceItemId(this, v20);
    v23 = ScrTerminalMap__LotteryEventBoardDiceVoiceCueName(this, UsedDiceItemId, v22);
    v24 = this->fields.boardGameDiceAssetData;
    v25 = v23;
    v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ScrTerminalMap_EndBoardGameDiceEffect__, 0);
    if ( !Component_object )
      goto LABEL_53;
    EventBoardGameDiceEffectAction__Setup(
      (EventBoardGameDiceEffectAction_o *)Component_object,
      v24,
      diceType,
      diceNum,
      EventBoardDiceVoiceServantId,
      v25,
      v26,
      0);
  }
  v27 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)v14,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  terminalScene = (TerminalSceneComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0);
  if ( ((unsigned __int8)terminalScene & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_53;
    CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)v27, diceNum, 0, 0);
  }
  this->fields.eventBoardGameColorBuffer = UnityEngine_RenderSettings__get_ambientLight(0);
  v43.fields.r = 1.0;
  v43.fields.g = 1.0;
  v43.fields.b = 1.0;
  v43.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v43, 0);
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_53;
  TerminalSceneComponent__SetDirectionalLightActive(terminalScene, 0, 0);
  v28 = this->fields.terminalScene;
  if ( !v28 )
    goto LABEL_53;
  GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)v14, v28->fields.mEffectPanel, 0);
  maxClearCount = 0;
  clearCount = 0;
  ScrTerminalMap__GetBoardGameSquareClearCountAndMaxCount(this, 1, &clearCount, &maxClearCount, v29);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  this->fields.isForceStopPieceEffect = v30->static_fields->_EventBoardGameSquareIndex_k__BackingField + diceNum > 21
                                     && clearCount < maxClearCount;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_diceCounterComponent = &this->fields.diceCounterComponent;
  if ( !UnityEngine_Object__op_Equality(diceCounterComponent, 0, 0) )
  {
LABEL_43:
    v38 = (UnityEngine_Object_o *)*p_diceCounterComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v38, 0, 0) )
    {
      terminalScene = (TerminalSceneComponent_o *)*p_diceCounterComponent;
      if ( !*p_diceCounterComponent )
        goto LABEL_53;
      EventBoardGameDiceCounter__Setup((EventBoardGameDiceCounter_o *)terminalScene, diceNum, 0);
    }
    terminalScene = (TerminalSceneComponent_o *)*p_diceCounterComponent;
    if ( *p_diceCounterComponent )
    {
      terminalScene = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)terminalScene,
                                                    0);
      if ( terminalScene )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)terminalScene, 0, 0);
        terminalScene = (TerminalSceneComponent_o *)*p_diceCounterComponent;
        if ( *p_diceCounterComponent )
        {
          terminalScene = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)terminalScene,
                                                        0);
          v39 = this->fields.terminalScene;
          if ( v39 )
          {
            GameObjectExtensions__SafeSetParent_35924288(
              (UnityEngine_GameObject_o *)terminalScene,
              v39->fields.mEffectPanel,
              0);
            return;
          }
        }
      }
    }
LABEL_53:
    sub_1C2D6EC(terminalScene, v16);
  }
  terminalScene = (TerminalSceneComponent_o *)this->fields.boardGameDiceAssetData;
  if ( !terminalScene )
    goto LABEL_53;
  v33 = AssetData__GetObject_object__51051712(
          (AssetData_o *)terminalScene,
          (System_String_o *)StringLiteral_5255/*"DiceCounter"*/,
          (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v34 = UnityEngine_Object__Instantiate_object_(
            v33,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    terminalScene = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0, 0);
    if ( ((unsigned __int8)terminalScene & 1) == 0 )
    {
      if ( !v34 )
        goto LABEL_53;
      v35 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v34,
              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameDiceCounter___);
      *p_diceCounterComponent = (struct EventBoardGameDiceCounter_o *)v35;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.diceCounterComponent, (int32_t)v35, v36, v37);
      goto LABEL_43;
    }
  }
LABEL_10:
  ActionExtensions__Call(callback, 0);
}


void ScrTerminalMap__PlayBoardGamePieceEffect(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *mWarInfo; // x0
  int32_t EventId; // w20
  TerminalPramsManager_c *v5; // x0
  int32_t EventBoardGameSquareIndex_k__BackingField; // w8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x4
  int32_t value; // w8
  UnityEngine_Object_o *diceCounterComponent; // x20
  int32_t clearCount[2]; // [xsp+0h] [xbp-40h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2449C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2449C = 1;
  }
  *(_QWORD *)clearCount = 0;
  entity = 0;
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_31;
  EventId = MapControl_WarInfo__GetEventId(mWarInfo, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  EventBoardGameSquareIndex_k__BackingField = v5->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  this->fields.endSquareIndex = 1;
  this->fields.currentSquareIndex = EventBoardGameSquareIndex_k__BackingField;
  mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mWarInfo )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)mWarInfo,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  mWarInfo = (MapControl_WarInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    mWarInfo = (MapControl_WarInfo_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_31;
  mWarInfo = (MapControl_WarInfo_o *)UserEventMaster__TryGetEntity(
                                       (UserEventMaster_o *)MasterData_object,
                                       &entity,
                                       *(_QWORD *)(mWarInfo[2].fields.createdDateTime + 64),
                                       EventId,
                                       0);
  if ( ((unsigned __int8)mWarInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_31;
    value = entity->fields.value;
    if ( value > this->fields.eventBoardGameSquareCount )
      value = this->fields.eventBoardGameSquareCount;
    this->fields.endSquareIndex = value;
  }
  *(_QWORD *)clearCount = 0;
  ScrTerminalMap__GetBoardGameSquareClearCountAndMaxCount(this, 1, &clearCount[1], clearCount, v8);
  mWarInfo = (MapControl_WarInfo_o *)this->fields._EventBoardStopPanelObj_k__BackingField;
  if ( !mWarInfo )
LABEL_31:
    sub_1C2D6EC(mWarInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mWarInfo, clearCount[1] < clearCount[0], 0);
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diceCounterComponent, 0, 0) )
  {
    mWarInfo = (MapControl_WarInfo_o *)this->fields.diceCounterComponent;
    if ( mWarInfo )
    {
      mWarInfo = (MapControl_WarInfo_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mWarInfo, 0);
      if ( mWarInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mWarInfo, 1, 0);
        goto LABEL_30;
      }
    }
    goto LABEL_31;
  }
LABEL_30:
  this->fields.isEventBoardGamePieceEffectFirst = 1;
  ScrTerminalMap__StartBoardGamePieceEffectSub(this, method);
}


void ScrTerminalMap__PlayBoardGamePieceEffectSub(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  EventBoardGameDiceCounter_o *EventBoardPieceObj_k__BackingField; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  int32_t currentSquareIndex; // w20
  int32_t eventBoardGameSquareCount; // w8
  bool v11; // vf
  int32_t v12; // w8
  UnityEngine_Object_o *diceCounterComponent; // x22
  Il2CppObject *Component_object; // x22
  System_String_o **p_animationNameBuffer; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x23
  const MethodInfo *v19; // x2
  System_Action_o *v20; // x24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ScrTerminalMap_o *v23; // x0
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *v25; // x21
  const MethodInfo *v26; // x1
  struct System_String_o *BoardGamePieceAnimationNameBySquareId; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Vector3_o EventBoardSquarePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2449E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass397_0__PlayBoardGamePieceEffectSub_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass397_0_TypeInfo);
    byte_4C2449E = 1;
  }
  v3 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass397_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass397_0___ctor((ScrTerminalMap___c__DisplayClass397_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_34;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  *(UnityEngine_Vector3_o *)(v3 + 24) = ScrTerminalMap__GetEventBoardSquarePos(
                                          this,
                                          this->fields.currentSquareIndex,
                                          v8);
  currentSquareIndex = this->fields.currentSquareIndex;
  eventBoardGameSquareCount = this->fields.eventBoardGameSquareCount;
  v11 = __OFSUB__(currentSquareIndex + 1, eventBoardGameSquareCount);
  v12 = currentSquareIndex + 1 - eventBoardGameSquareCount;
  this->fields.currentSquareIndex = currentSquareIndex + 1;
  if ( !((v12 < 0) ^ v11 | (v12 == 0)) )
    this->fields.currentSquareIndex = v12;
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diceCounterComponent, 0, 0) )
  {
    EventBoardPieceObj_k__BackingField = this->fields.diceCounterComponent;
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_34;
    EventBoardGameDiceCounter__CountDown(EventBoardPieceObj_k__BackingField, 0);
  }
  EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)EventBoardPieceObj_k__BackingField,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)Component_object, 0);
  }
  p_animationNameBuffer = &this->fields.animationNameBuffer;
  if ( !System_String__IsNullOrEmpty(this->fields.animationNameBuffer, 0) )
  {
    EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)this->fields._EventBoardPieceObj_k__BackingField;
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_34;
    EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)EventBoardPieceObj_k__BackingField,
                                                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !EventBoardPieceObj_k__BackingField )
      goto LABEL_34;
    UnityEngine_Animation__Stop_70908132(
      (UnityEngine_Animation_o *)EventBoardPieceObj_k__BackingField,
      *p_animationNameBuffer,
      0);
    *p_animationNameBuffer = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animationNameBuffer, 0, v16, v17);
  }
  EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !EventBoardPieceObj_k__BackingField )
    goto LABEL_34;
  v18 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)EventBoardPieceObj_k__BackingField,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0) )
  {
    v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v3,
      Method_ScrTerminalMap___c__DisplayClass397_0__PlayBoardGamePieceEffectSub_b__0__,
      0);
    if ( !v18 )
      goto LABEL_34;
    v18[2].klass = (Il2CppClass *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)&v18[2], (int32_t)v20, v21, v22);
  }
  else
  {
    v25 = this->fields._EventBoardPieceObj_k__BackingField;
    EventBoardSquarePos = ScrTerminalMap__GetEventBoardSquarePos(this, this->fields.currentSquareIndex, v19);
    GameObjectExtensions__SetPosition(v25, EventBoardSquarePos, 0);
    if ( this->fields.currentSquareIndex == this->fields.endSquareIndex )
      ScrTerminalMap__EndBoardGamePieceEffect(this, v26);
    else
      ScrTerminalMap__StartBoardGamePieceEffectSub(this, v26);
  }
  BoardGamePieceAnimationNameBySquareId = ScrTerminalMap__GetBoardGamePieceAnimationNameBySquareId(
                                            v23,
                                            currentSquareIndex,
                                            this->fields.currentSquareIndex,
                                            v24);
  this->fields.animationNameBuffer = BoardGamePieceAnimationNameBySquareId;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.animationNameBuffer,
    (int32_t)BoardGamePieceAnimationNameBySquareId,
    v28,
    v29);
  EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !EventBoardPieceObj_k__BackingField
    || (EventBoardPieceObj_k__BackingField = (EventBoardGameDiceCounter_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)EventBoardPieceObj_k__BackingField,
                                                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
  {
LABEL_34:
    sub_1C2D6EC(EventBoardPieceObj_k__BackingField, v5);
  }
  UnityEngine_Animation__Play_70908988(
    (UnityEngine_Animation_o *)EventBoardPieceObj_k__BackingField,
    *p_animationNameBuffer,
    0);
}


void ScrTerminalMap__PlayBoardGameQuestArrivalEffect(
        ScrTerminalMap_o *this,
        int32_t squareId,
        System_Action_o *callback,
        bool isAuto,
        const MethodInfo *method)
{
  __int64 v9; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *diceCounterComponent; // x21
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  TerminalPramsManager_c *v20; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *Object_object__51051712; // x22
  Il2CppObject *Component_object; // x21
  Il2CppObject *v24; // x21
  System_Action_o *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x4

  if ( (byte_4C244A1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass400_0__PlayBoardGameQuestArrivalEffect_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass400_0_TypeInfo);
    sub_1C2D490(&StringLiteral_8901/*"MapGimmickEffect_GappolyQuestArrival"*/);
    byte_4C244A1 = 1;
  }
  v9 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass400_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass400_0___ctor((ScrTerminalMap___c__DisplayClass400_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_33;
  *(_BYTE *)(v9 + 16) = isAuto;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 48) = callback;
  *(_DWORD *)(v9 + 32) = squareId;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v14, v15);
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diceCounterComponent, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.diceCounterComponent;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  *(_DWORD *)(v9 + 36) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  ScrTerminalMap__GetBoardGameSquareClearCountAndMaxCount(
    this,
    *(_DWORD *)(v9 + 32),
    (int32_t *)(v9 + 36),
    (int32_t *)(v9 + 40),
    v17);
  ScrTerminalMap__SetBoardGameSquareHaveToken(this, *(_DWORD *)(v9 + 32), v18);
  if ( *(_DWORD *)(v9 + 36) >= *(_DWORD *)(v9 + 40) )
  {
    Component_object = 0;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE1 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE1 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_QuestId_k__BackingField = 0;
    ScrTerminalMap__SetEnabledDiceButton(this, 0, v19);
    ScrTerminalMap__PlayEventBoardGameQuestArrivalVoice(this, v21);
    gameObject = (UnityEngine_Component_o *)this->fields.mapAssetData;
    if ( !gameObject )
      goto LABEL_33;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                (AssetData_o *)gameObject,
                                (System_String_o *)StringLiteral_8901/*"MapGimmickEffect_GappolyQuestArrival"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = 0;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__Instantiate_object_(
              Object_object__51051712,
              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_35924288(
        (UnityEngine_GameObject_o *)v24,
        this->fields._EventBoardPieceObj_k__BackingField,
        0);
      if ( v24 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v24,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
          goto LABEL_28;
        v25 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v25,
          (Il2CppObject *)v9,
          Method_ScrTerminalMap___c__DisplayClass400_0__PlayBoardGameQuestArrivalEffect_b__0__,
          0);
        if ( Component_object )
        {
          Component_object[2].monitor = v25;
          sub_1C2D434((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v25, v26, v27);
          goto LABEL_28;
        }
      }
LABEL_33:
      sub_1C2D6EC(gameObject, v11);
    }
  }
LABEL_28:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0);
    ScrTerminalMap__UpdateBoardGameSquare(this, *(_DWORD *)(v9 + 32), *(_DWORD *)(v9 + 36), *(_DWORD *)(v9 + 40), v28);
  }
}


void ScrTerminalMap__PlayBoardGameStopPiecePanel(ScrTerminalMap_o *this, const MethodInfo *method)
{
  AssetData_o *mapAssetData; // x0
  Il2CppObject *Object_object__51051712; // x20
  Il2CppObject *v5; // x20
  Il2CppObject *Component_object; // x20
  System_Action_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TerminalPramsManager_c *v10; // x0
  int32_t EventBoardGameSquareIndex_k__BackingField; // w20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x4

  if ( (byte_4C244A0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_FrameInUI__);
    sub_1C2D490(&Method_ScrTerminalMap__PlayBoardGameStopPiecePanel_b__399_0__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8904/*"MapGimmickEffect_GappolyStopPiecePanel"*/);
    byte_4C244A0 = 1;
  }
  if ( this->fields.isForceStopPieceEffect )
  {
    mapAssetData = this->fields.mapAssetData;
    if ( !mapAssetData )
      goto LABEL_21;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                mapAssetData,
                                (System_String_o *)StringLiteral_8904/*"MapGimmickEffect_GappolyStopPiecePanel"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__Instantiate_object_(
             Object_object__51051712,
             (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_35924288(
        (UnityEngine_GameObject_o *)v5,
        this->fields._EventBoardPieceObj_k__BackingField,
        0);
      if ( !v5 )
        goto LABEL_21;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v5,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrTerminalMap__PlayBoardGameStopPiecePanel_b__399_0__, 0);
        if ( Component_object )
        {
          Component_object[2].monitor = v7;
          sub_1C2D434((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v7, v8, v9);
          return;
        }
LABEL_21:
        sub_1C2D6EC(mapAssetData, method);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  EventBoardGameSquareIndex_k__BackingField = v10->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ScrTerminalMap_FrameInUI__, 0);
  ScrTerminalMap__PlayBoardGameQuestArrivalEffect(this, EventBoardGameSquareIndex_k__BackingField, v12, 0, v13);
}


void ScrTerminalMap__PlayEventBoardGameArrivalEffectAuto(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventBoardGameSquareIndex_k__BackingField; // w20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_4C24488 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__PlayEventBoardGameArrivalEffectAuto_b__373_0__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24488 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventBoardGameSquareIndex_k__BackingField = v3->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScrTerminalMap__PlayEventBoardGameArrivalEffectAuto_b__373_0__,
    0);
  ScrTerminalMap__PlayBoardGameQuestArrivalEffect(this, EventBoardGameSquareIndex_k__BackingField, v5, 1, v6);
}


void ScrTerminalMap__PlayEventBoardGameQuestArrivalVoice(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalMap_o *v3; // x19
  struct System_Int32_array *EventBoardGameArrivalVoiceSvtIdList_k__BackingField; // x8
  int v5; // w27
  int m_CancellationTokenSource; // w8
  ScrTerminalMap_o *v7; // x20
  int v8; // w28
  char v9; // w24
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  System_Random_o *v13; // x20
  struct System_Int32_array *v14; // x8
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *v16; // x8
  System_String_o *VoiceAssetName_42560796; // x0
  SeManager_c *v18; // x8
  System_String_o *v19; // x19
  float DEFAULT_VOLUME; // s8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v3 = this;
  if ( (byte_4C244B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&System_Random_TypeInfo);
    sub_1C2D490(&SeManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&StringLiteral_1167/*"0_M040"*/);
    byte_4C244B1 = 1;
  }
  EventBoardGameArrivalVoiceSvtIdList_k__BackingField = v3->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
  if ( !EventBoardGameArrivalVoiceSvtIdList_k__BackingField )
    goto LABEL_32;
  if ( LODWORD(EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length) <= 1 )
    goto LABEL_33;
  v5 = EventBoardGameArrivalVoiceSvtIdList_k__BackingField->m_Items[1];
  if ( v5 >= 1 )
  {
    this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_32;
    this = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_32;
    this = (ScrTerminalMap_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)this, 0);
    if ( !this )
      goto LABEL_32;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v7 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        if ( v8 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_33;
        v10 = *((_QWORD *)&v7->fields.PLAYER_ICON_POS.fields.x + v8);
        if ( !v10 )
          goto LABEL_32;
        v12 = *(_QWORD *)(v10 + 80);
        v11 = *(_QWORD *)(v10 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v12;
        *(_QWORD *)&v21.fields.fakeValue = v11;
        this = (ScrTerminalMap_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
        if ( (_DWORD)this == v5 )
        {
          this = (ScrTerminalMap_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v10, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_25;
          v9 = 1;
        }
        m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
        ++v8;
      }
      while ( v8 < m_CancellationTokenSource );
      if ( (v9 & 1) != 0 )
      {
        v13 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
        System_Random___ctor(v13, 0);
        v14 = v3->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
        if ( v14 )
        {
          if ( v13 )
          {
            this = (ScrTerminalMap_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v13->klass->vtable._7_Next.methodPtr)(
                                         v13,
                                         LODWORD(v14->max_length),
                                         v13->klass->vtable._7_Next.method);
            v15 = v3->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
            if ( v15 )
            {
              if ( (unsigned int)this < LODWORD(v15->max_length) )
              {
                v16 = (struct System_Int32_array *)((char *)v15 + 4 * (int)this);
                goto LABEL_27;
              }
LABEL_33:
              sub_1C2D6F4(this, method, v2);
            }
          }
        }
LABEL_32:
        sub_1C2D6EC(this, method);
      }
    }
  }
LABEL_25:
  v16 = v3->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
  if ( !v16 )
    goto LABEL_32;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_33;
LABEL_27:
  VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(v16->m_Items[0], 0);
  v18 = SeManager_TypeInfo;
  v19 = VoiceAssetName_42560796;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v18 = SeManager_TypeInfo;
  }
  DEFAULT_VOLUME = v18->static_fields->DEFAULT_VOLUME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playVoice_41296680(v19, (System_String_o *)StringLiteral_1167/*"0_M040"*/, DEFAULT_VOLUME, 0, 0, 0);
}


void ScrTerminalMap__PlayEventProgressEffect(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0

  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    sub_1C2D6EC(0, callback);
  TitleInfoControl__StartEventUIAnimation(titleInfoControl, 1, callback, 0);
}


void ScrTerminalMap__PlayMapModelEntryAnimation(
        ScrTerminalMap_o *this,
        System_String_o *animName,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  MapButtonControl_o *mapButtonGrid; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  MapModelManager_o *mapModelManager; // x22
  System_Action_o *v16; // x23
  TerminalPramsManager_c *v17; // x0

  if ( (byte_4C2447F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass364_0__PlayMapModelEntryAnimation_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass364_0_TypeInfo);
    byte_4C2447F = 1;
  }
  v7 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass364_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass364_0___ctor((ScrTerminalMap___c__DisplayClass364_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)endAction, v12, v13);
  ScrTerminalMap__FrameOutUI(this, 1, v14);
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_16;
  MapButtonControl__FrameOut(mapButtonGrid, 0);
  mapButtonGrid = (MapButtonControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mapButtonGrid )
    goto LABEL_16;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)mapButtonGrid, 0);
  mapModelManager = this->fields.mapModelManager;
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_ScrTerminalMap___c__DisplayClass364_0__PlayMapModelEntryAnimation_b__0__,
    0);
  if ( !mapModelManager
    || (MapModelManager__PlayAnimation(mapModelManager, animName, v16, 0),
        (mapButtonGrid = (MapButtonControl_o *)this->fields.mapCamera) == 0)
    || (MapCamera__StartAutoZoom((MapCamera_o *)mapButtonGrid, 2.0, 0.0, 5, 0, 0),
        (mapButtonGrid = (MapButtonControl_o *)this->fields.spotModelScreen) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(mapButtonGrid, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapButtonGrid, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE6 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_SpotId_k__BackingField = -1;
}


void ScrTerminalMap__ProcessMapCamera(ScrTerminalMap_o *this, bool isMapTouchEnabled, const MethodInfo *method)
{
  MapCamera_o *mapCamera; // x0

  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    sub_1C2D6EC(0, isMapTouchEnabled);
  MapCamera__Process(mapCamera, isMapTouchEnabled, 0);
}


void ScrTerminalMap__ProductivityGrowthDialogOpen(
        ScrTerminalMap_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v16; // x22

  if ( (byte_4C2446A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass341_0__ProductivityGrowthDialogOpen_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass341_0_TypeInfo);
    byte_4C2446A = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass341_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass341_0___ctor((ScrTerminalMap___c__DisplayClass341_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalList = mInstance->fields.mTerminalList) == 0
    || (mActionPanel = mTerminalList->fields.mActionPanel,
        v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass341_0__ProductivityGrowthDialogOpen_b__0__,
          0),
        !titleInfoControl) )
  {
LABEL_14:
    sub_1C2D6EC(v6, v7);
  }
  TitleInfoControl__EventProductivityGrowthDialogOpen(titleInfoControl, mActionPanel, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__Quit(ScrTerminalMap_o *this, int32_t quitType, const MethodInfo *method)
{
  MapButtonControl_o *mapButtonGrid; // x0

  if ( quitType == 2 )
  {
    mapButtonGrid = this->fields.mapButtonGrid;
    if ( !mapButtonGrid )
      sub_1C2D6EC(0, quitType);
    MapButtonControl__DestroyButtons(mapButtonGrid, 0);
  }
  ScrTerminalMap__DestroyEventActionEffect(this, *(const MethodInfo **)&quitType);
}


void ScrTerminalMap__ReleaseMap(ScrTerminalMap_o *this, bool isReleaseAseets, const MethodInfo *method)
{
  UnityEngine_Object_o *allMaskObj; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *mapModelManager; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_UIAtlas__o *assetsAtlases; // x8
  int32_t size; // w2
  int v13; // w9
  struct System_Collections_Generic_List_GameObject__o *mapEffectPrefabList; // x8
  int32_t v15; // w2
  int v16; // w9
  AssetData_o *mapAssetData; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  AssetData_o *mapMultiAssetData; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  AssetData_o *mapImgAssetData; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  AssetData_o *mapInfoAssetData; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  AssetData_o *mapInfoEffectAssetData; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  AssetData_o *boardGameDiceAssetData; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x19
  EventMapManagerInterface_c *klass; // x8
  __int64 v37; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4C2443F & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2443F = 1;
  }
  allMaskObj = (UnityEngine_Object_o *)this->fields.allMaskObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(allMaskObj, 0, 0) )
  {
    mapModelManager = this->fields.allMaskObj;
    if ( !mapModelManager )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive(mapModelManager, 0, 0);
  }
  ScrTerminalMap__DestroyMapObjs(this, v6);
  if ( !isReleaseAseets )
    return;
  this->fields._currentMapTexture_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._currentMapTexture_k__BackingField, 0, v8, v9);
  assetsAtlases = this->fields.assetsAtlases;
  if ( !assetsAtlases )
    goto LABEL_52;
  size = assetsAtlases->fields._size;
  v13 = assetsAtlases->fields._version + 1;
  assetsAtlases->fields._size = 0;
  assetsAtlases->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)assetsAtlases->fields._items, 0, size, 0);
  mapEffectPrefabList = this->fields.mapEffectPrefabList;
  if ( !mapEffectPrefabList )
    goto LABEL_52;
  v15 = mapEffectPrefabList->fields._size;
  v16 = mapEffectPrefabList->fields._version + 1;
  mapEffectPrefabList->fields._size = 0;
  mapEffectPrefabList->fields._version = v16;
  if ( v15 >= 1 )
    System_Array__Clear((System_Array_o *)mapEffectPrefabList->fields._items, 0, v15, 0);
  this->fields.mapGimmickPrefab = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapGimmickPrefab, 0, v15, v10);
  mapAssetData = this->fields.mapAssetData;
  if ( mapAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(mapAssetData, 0);
    this->fields.mapAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapAssetData, 0, v18, v19);
  }
  mapMultiAssetData = this->fields.mapMultiAssetData;
  if ( mapMultiAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(mapMultiAssetData, 0);
    this->fields.mapMultiAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapMultiAssetData, 0, v21, v22);
  }
  mapModelManager = (UnityEngine_GameObject_o *)this->fields.mapModelManager;
  if ( mapModelManager )
  {
    MapModelManager__ReleaseMapModelObject((MapModelManager_o *)mapModelManager, 0);
    mapModelManager = (UnityEngine_GameObject_o *)this->fields.mapModelManager;
    if ( !mapModelManager )
      goto LABEL_52;
    MapModelManager__ReleaseAsset((MapModelManager_o *)mapModelManager, 0);
    mapModelManager = (UnityEngine_GameObject_o *)this->fields.mapModelManager;
    if ( !mapModelManager )
      goto LABEL_52;
    MapModelManager__ReleaseLineList((MapModelManager_o *)mapModelManager, 0);
  }
  mapImgAssetData = this->fields.mapImgAssetData;
  if ( mapImgAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(mapImgAssetData, 0);
    this->fields.mapImgAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapImgAssetData, 0, v24, v25);
  }
  mapInfoAssetData = this->fields.mapInfoAssetData;
  if ( mapInfoAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(mapInfoAssetData, 0);
    this->fields.mapInfoAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapInfoAssetData, 0, v27, v28);
  }
  mapInfoEffectAssetData = this->fields.mapInfoEffectAssetData;
  if ( mapInfoEffectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(mapInfoEffectAssetData, 0);
    this->fields.mapInfoEffectAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapInfoEffectAssetData, 0, v30, v31);
  }
  boardGameDiceAssetData = this->fields.boardGameDiceAssetData;
  if ( boardGameDiceAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(boardGameDiceAssetData, 0);
    this->fields.boardGameDiceAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.boardGameDiceAssetData, 0, v33, v34);
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
LABEL_52:
    sub_1C2D6EC(mapModelManager, v6);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v37 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v37;
      p_offset += 2;
      if ( !v37 )
        goto LABEL_48;
    }
    v39 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
  }
  else
  {
LABEL_48:
    v39 = sub_1C7DCA8(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 9);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, _QWORD))v39)(
    eventMapManagerInterface_k__BackingField,
    *(_QWORD *)(v39 + 8));
}


void ScrTerminalMap__ReleaseMapUseVoiceData(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ScrTerminalMap_o *v4; // x19
  struct System_Int32_array *useVoiceSvtIDList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x22
  System_String_o *VoiceAssetName_42560796; // x20

  v4 = this;
  if ( (byte_4C2443B & 1) == 0 )
  {
    this = (ScrTerminalMap_o *)sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C2443B = 1;
  }
  if ( v4->fields.mMapEnt )
  {
    useVoiceSvtIDList = v4->fields.useVoiceSvtIDList;
    if ( useVoiceSvtIDList )
    {
      max_length = useVoiceSvtIDList->max_length;
      if ( (int)max_length >= 1 )
      {
        v7 = 0;
        do
        {
          if ( v7 >= (unsigned int)max_length )
            sub_1C2D6F4(this, method, v2);
          VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(useVoiceSvtIDList->m_Items[v7], 0);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__releaseAudioAssetStorage(VoiceAssetName_42560796, 0);
          LODWORD(max_length) = useVoiceSvtIDList->max_length;
          ++v7;
        }
        while ( (__int64)v7 < (int)max_length );
      }
    }
  }
  v4->fields.useVoiceSvtIDList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.useVoiceSvtIDList, 0, v2, v3);
}


void ScrTerminalMap__RequestDiceUse(
        ScrTerminalMap_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v9; // x23
  Il2CppObject *Request_object; // x22
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4C24499 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_ItemUseRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_EndRequestDiceUse__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C24499 = 1;
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_ScrTerminalMap_EndRequestDiceUse__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_ItemUseRequest___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0), !Request_object) )
    sub_1C2D6EC(Instance, v12);
  ItemUseRequest__beginRequest((ItemUseRequest_o *)Request_object, itemId, num, eventId, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ScrTerminalMap__RequestMapChange(
        ScrTerminalMap_o *this,
        int32_t mapId,
        int32_t focusSpotd,
        int32_t playerSpotId,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v8; // x19
  struct MapControl_MapInfo_o *mMapInfo; // x8
  struct WarEntity_o *mWarEnt; // x8
  struct WarEntity_o *v11; // x8
  const MethodInfo *v12; // x2
  Il2CppObject *Instance; // x20
  ScrTerminalMap_o *v15; // x21
  Il2CppObject *ShortNameFirstPriority; // x0
  struct TerminalSceneComponent_o *terminalScene; // x8
  Il2CppObject *mTerminalList; // x22
  ScrTerminalMap_o *v19; // x19
  System_Action_o *v20; // x21
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4C24463 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalListTop_RefreshTerminalScene__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5678/*"EVENT_REWARD_END_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_19096/*"evChange_Map"*/);
    this = (ScrTerminalMap_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24463 = 1;
  }
  entity = 0;
  mMapInfo = v8->fields.mMapInfo;
  if ( !mMapInfo )
    goto LABEL_25;
  if ( mMapInfo->fields.mapId == mapId )
    return 0;
  mWarEnt = v8->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_25;
  if ( mWarEnt->fields.eventId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
    v11 = v8->fields.mWarEnt;
    if ( !v11 || !this )
      goto LABEL_25;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v11->fields.eventId,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      this = (ScrTerminalMap_o *)entity;
      if ( entity )
      {
        if ( EventEntity__IsOpen((EventEntity_o *)entity, 0, 0) )
          goto LABEL_14;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ScrTerminalMap_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5678/*"EVENT_REWARD_END_MESSAGE"*/, 0);
        if ( entity )
        {
          v15 = this;
          ShortNameFirstPriority = (Il2CppObject *)EventEntity__GetShortNameFirstPriority((EventEntity_o *)entity, 0);
          this = (ScrTerminalMap_o *)System_String__Format((System_String_o *)v15, ShortNameFirstPriority, 0);
          terminalScene = v8->fields.terminalScene;
          if ( terminalScene )
          {
            mTerminalList = (Il2CppObject *)terminalScene->fields.mTerminalList;
            v19 = this;
            v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(v20, mTerminalList, Method_ScrTerminalListTop_RefreshTerminalScene__, 0);
            if ( Instance )
            {
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_1/*""*/,
                (System_String_o *)v19,
                v20,
                -1,
                0,
                0,
                0,
                1,
                0,
                1,
                0,
                0,
                0.0,
                0,
                0);
              return 0;
            }
          }
        }
      }
LABEL_25:
      sub_1C2D6EC(this, *(_QWORD *)&mapId);
    }
    return 0;
  }
LABEL_14:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(0, 0);
  v8->fields.requestedMapId = mapId;
  v8->fields.requestFocusSpotId = focusSpotd;
  v8->fields.requestPlayerSpotId = playerSpotId;
  ScrTerminalMap__mfCallFsmEvent(v8, (System_String_o *)StringLiteral_19096/*"evChange_Map"*/, v12);
  return 1;
}


void ScrTerminalMap__RequestMapMove(ScrTerminalMap_o *this, int32_t layer, const MethodInfo *method)
{
  __int64 v5; // x21
  MapModelManager_o *mapModelManager; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MapModelManager_o *v10; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v15; // x1
  float v16; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s12
  float v20; // s11
  float MapCameraMoveTimeConstant; // s13
  const MethodInfo *v22; // x1
  float MapCameraMoveTimeCoefficient; // s14
  const MethodInfo *v24; // x1
  int32_t MapCameraMoveTimeLogarithmBase; // w22
  double v26; // d12
  System_Action_o *v27; // x22
  float v28; // s15
  float v29; // s11
  float v30; // s12
  float MapCamera2DResetSize; // s0
  MapCamera_o *mapCamera; // x23
  float v33; // s13
  const MethodInfo *v34; // x1
  float Camera2DResetDuration; // s14
  const MethodInfo_38B3EC8 *v36; // x2
  System_Nullable_float__o p_size; // x0
  const MethodInfo *v38; // x1
  System_Nullable_float__o v39; // x3
  MapModelManager_o *v40; // x23
  float v41; // s11
  float v42; // s14
  float v43; // s15
  float v44; // s0
  float v45; // s6
  float v46; // [xsp+Ch] [xbp-A4h]
  double v47; // [xsp+10h] [xbp-A0h]
  float v48; // [xsp+1Ch] [xbp-94h]
  System_Nullable_Vector3__o v49; // [xsp+20h] [xbp-90h] BYREF
  System_Nullable_float__o size; // [xsp+78h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v51; // 0:x0.16
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocationPostion; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o MapCamera2DResetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C24464 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass334_0__RequestMapMove_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass334_0_TypeInfo);
    byte_4C24464 = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass334_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass334_0___ctor((ScrTerminalMap___c__DisplayClass334_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_32;
  mapModelManager = (MapModelManager_o *)MapModelManager__get_IsMapModel(mapModelManager, 0);
  if ( ((unsigned __int8)mapModelManager & 1) != 0 && this->fields.currentMapLayerId != layer )
  {
    v10 = this->fields.mapModelManager;
    if ( !v10 )
      goto LABEL_32;
    mapModelManager = (MapModelManager_o *)v10->fields._MapModelCamera_k__BackingField;
    if ( !mapModelManager )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelManager, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
    mapModelManager = this->fields.mapModelManager;
    if ( !mapModelManager )
      goto LABEL_32;
    x = LocalPosition.fields.x;
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    LocationPostion = MapModelManager__GetLocationPostion(mapModelManager, layer, 0);
    *(UnityEngine_Vector3_o *)(v5 + 24) = LocationPostion;
    v16 = LocationPostion.fields.x;
    v17 = LocationPostion.fields.y;
    v18 = LocationPostion.fields.z;
    if ( !byte_4C20D9F )
    {
      sub_1C2D490(&System_Math_TypeInfo);
      byte_4C20D9F = 1;
    }
    v19 = y - v17;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v20 = sqrtf(
            (float)((float)(z - v18) * (float)(z - v18))
          + (float)((float)((float)(x - v16) * (float)(x - v16)) + (float)(v19 * v19)));
    if ( v20 > 0.0 )
    {
      MapCameraMoveTimeConstant = ScrTerminalMap__get_MapCameraMoveTimeConstant(this, v15);
      MapCameraMoveTimeCoefficient = ScrTerminalMap__get_MapCameraMoveTimeCoefficient(this, v22);
      MapCameraMoveTimeLogarithmBase = ScrTerminalMap__get_MapCameraMoveTimeLogarithmBase(this, v24);
      if ( !byte_4C244F0 )
      {
        sub_1C2D490(&System_Math_TypeInfo);
        byte_4C244F0 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v26 = System_Math__Log(v20, (float)MapCameraMoveTimeLogarithmBase, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      TerminalPramsManager__PlaySystemSE(0, 0);
      mapModelManager = (MapModelManager_o *)this->fields.mapButtonGrid;
      this->fields.currentMapLayerId = layer;
      if ( mapModelManager )
      {
        MapButtonControl__UpdateButtonSprite((MapButtonControl_o *)mapModelManager, 0);
        v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v27,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass334_0__RequestMapMove_b__0__,
          0);
        mapModelManager = (MapModelManager_o *)this->fields.titleInfoControl;
        if ( mapModelManager )
        {
          TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mapModelManager, 0, 0);
          mapModelManager = this->fields.mapModelManager;
          if ( mapModelManager )
          {
            v48 = MapCameraMoveTimeCoefficient;
            if ( MapModelManager__get_IsMapCamera2DReset(mapModelManager, 0) )
            {
              mapModelManager = this->fields.mapModelManager;
              v47 = v26;
              if ( !mapModelManager )
                goto LABEL_32;
              v46 = MapCameraMoveTimeConstant;
              MapCamera2DResetPosition = MapModelManager__get_MapCamera2DResetPosition(mapModelManager, 0);
              mapModelManager = this->fields.mapModelManager;
              if ( !mapModelManager )
                goto LABEL_32;
              v28 = MapCamera2DResetPosition.fields.x;
              v29 = MapCamera2DResetPosition.fields.y;
              v30 = MapCamera2DResetPosition.fields.z;
              MapCamera2DResetSize = MapModelManager__get_MapCamera2DResetSize(mapModelManager, 0);
              mapCamera = this->fields.mapCamera;
              v33 = MapCamera2DResetSize;
              Camera2DResetDuration = ScrTerminalMap__get_Camera2DResetDuration(this, v34);
              *(_QWORD *)&v51.fields.hasValue = &v49;
              v55.fields.x = v28;
              *(_QWORD *)&v51.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v55.fields.y = v29;
              v55.fields.z = v30;
              *(_QWORD *)&v49.fields.hasValue = 0;
              *(_QWORD *)&v49.fields.value.fields.y = 0;
              System_Nullable_Vector3____ctor(v51, v55, v36);
              p_size = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                p_size,
                v33,
                (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
              mapModelManager = (MapModelManager_o *)ScrTerminalMap__get_MapCameraMoveEasingType(this, v38);
              if ( !mapCamera )
                goto LABEL_32;
              v39 = size;
              MapCamera__StartAutoWork(mapCamera, Camera2DResetDuration, v49, v39, (int32_t)mapModelManager, 0, 0);
              MapCameraMoveTimeConstant = v46;
              v26 = v47;
            }
            v40 = this->fields.mapModelManager;
            v41 = *(float *)(v5 + 24);
            v42 = *(float *)(v5 + 28);
            v43 = *(float *)(v5 + 32);
            mapModelManager = (MapModelManager_o *)ScrTerminalMap__get_MapCameraMoveEasingType(this, v7);
            if ( v40 )
            {
              v44 = v26;
              v45 = MapCameraMoveTimeConstant + (float)(v48 * v44);
              v56.fields.x = x;
              v56.fields.y = y;
              v56.fields.z = z;
              v57.fields.x = v41;
              v57.fields.y = v42;
              v57.fields.z = v43;
              MapModelManager__MoveMapModelCamera(v40, layer, v56, v57, v45, (int32_t)mapModelManager, v27, 0);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_1C2D6EC(mapModelManager, v7);
    }
  }
}


void ScrTerminalMap__RequestMapMove_36894008(
        ScrTerminalMap_o *this,
        int32_t layer,
        float duration,
        int32_t easingType,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v11; // x21
  MapModelManager_o *mapModelManager; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct MapModelManager_o *v18; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s10
  float z; // s11
  float v23; // s12
  float v24; // s13
  float v25; // s14
  float v26; // s13
  System_Action_o *v27; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocationPostion; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24465 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass335_0__RequestMapMove_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass335_0_TypeInfo);
    byte_4C24465 = 1;
  }
  v11 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass335_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass335_0___ctor((ScrTerminalMap___c__DisplayClass335_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 40) = endAction;
  *(_DWORD *)(v11 + 24) = layer;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), (int32_t)endAction, v16, v17);
  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_19;
  mapModelManager = (MapModelManager_o *)MapModelManager__get_IsMapModel(mapModelManager, 0);
  if ( ((unsigned __int8)mapModelManager & 1) != 0 && this->fields.currentMapLayerId != *(_DWORD *)(v11 + 24) )
  {
    v18 = this->fields.mapModelManager;
    if ( !v18 )
      goto LABEL_19;
    mapModelManager = (MapModelManager_o *)v18->fields._MapModelCamera_k__BackingField;
    if ( !mapModelManager )
      goto LABEL_19;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelManager, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
    mapModelManager = this->fields.mapModelManager;
    if ( !mapModelManager )
      goto LABEL_19;
    x = LocalPosition.fields.x;
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    LocationPostion = MapModelManager__GetLocationPostion(mapModelManager, *(_DWORD *)(v11 + 24), 0);
    *(UnityEngine_Vector3_o *)(v11 + 28) = LocationPostion;
    v23 = LocationPostion.fields.x;
    v24 = LocationPostion.fields.y;
    v25 = LocationPostion.fields.z;
    if ( !byte_4C20D9F )
    {
      sub_1C2D490(&System_Math_TypeInfo);
      byte_4C20D9F = 1;
    }
    v26 = y - v24;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf(
           (float)((float)(z - v25) * (float)(z - v25))
         + (float)((float)((float)(x - v23) * (float)(x - v23)) + (float)(v26 * v26))) > 0.0 )
    {
      v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v11,
        Method_ScrTerminalMap___c__DisplayClass335_0__RequestMapMove_b__0__,
        0);
      mapModelManager = (MapModelManager_o *)this->fields.titleInfoControl;
      if ( mapModelManager )
      {
        TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mapModelManager, 0, 0);
        mapModelManager = this->fields.mapModelManager;
        if ( mapModelManager )
        {
          v30.fields.x = x;
          v30.fields.y = y;
          v30.fields.z = z;
          MapModelManager__MoveMapModelCamera(
            mapModelManager,
            *(_DWORD *)(v11 + 24),
            v30,
            *(UnityEngine_Vector3_o *)(v11 + 28),
            duration,
            easingType,
            v27,
            0);
          return;
        }
      }
LABEL_19:
      sub_1C2D6EC(mapModelManager, v13);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 40), 0);
}


void ScrTerminalMap__SetActiveDiceButton(ScrTerminalMap_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *diceButton; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C24490 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24490 = 1;
  }
  diceButton = (UnityEngine_Object_o *)this->fields.diceButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(diceButton, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.diceButton;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C2D6EC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__SetBoardGameSquareHaveToken(ScrTerminalMap_o *this, int32_t squareId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x21
  Il2CppObject *MasterData_object; // x27
  Il2CppObject *v9; // x22
  System_Collections_Generic_IEnumerable_TSource__o *datalist; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x24
  System_Collections_Generic_List_object__o *v12; // x26
  System_Collections_Generic_List_bool__o *v13; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  _BOOL8 HasFlag; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  ScrTerminalMap___c_c *v26; // x0
  System_Func_object__int__o *_9__409_0; // x27
  Il2CppObject *v28; // x28
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  Il2CppObject *current; // x26
  __int64 v34; // x27
  __int64 v35; // x0
  __int64 v36; // x1
  NetworkManager_c *v37; // x0
  __int64 v38; // x1
  bool v39; // w26
  System_Func_object__bool__o *v40; // x28
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x0
  __int64 v45; // x1
  System_Func_object__bool__o *v46; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_List_TSource__o *v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_TSource__o *v50; // x27
  int v51; // w8
  int i; // w28
  struct System_Boolean_array *v53; // x9
  _QWORD *v54; // x10
  __int64 v55; // x11
  struct System_Boolean_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  const MethodInfo *v59; // x2
  int32_t v60; // w22
  int32_t v61; // w19
  UnityEngine_GameObject_o *EventBoardSquareObject; // x23
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  UnityEngine_Object_o *GameObjectWithLog; // x23
  Il2CppObject *Component_object; // x23
  float v70; // s0 OVERLAPPED
  float v71; // s3
  float v72; // s1
  float v73; // s2
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+20h] [xbp-D0h] BYREF
  UserQuestEntity_o *v75; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_4C244A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBoardGameTokenRewardMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__getEntityList__);
    sub_1C2D490(&Method_DataMasterBase_GiftMaster__GiftEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_QuestEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SingleOrDefault_EventBoardGameTokenRewardEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_GiftEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_QuestEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C2D490(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_EventBoardGameTokenRewardEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_QuestEntity__int__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__SetBoardGameSquareHaveToken_b__409_0__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass409_0__SetBoardGameSquareHaveToken_b__1__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass409_0__SetBoardGameSquareHaveToken_b__2__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass409_0_TypeInfo);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    sub_1C2D490(&StringLiteral_24095/*"token_{0:D2}"*/);
    byte_4C244A9 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  entity = 0;
  memset(&v76, 0, sizeof(v76));
  v75 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v7 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBoardGameTokenRewardMaster___);
  if ( !Instance )
    goto LABEL_82;
  datalist = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.datalist;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_82;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.datalist;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  v13 = (System_Collections_Generic_List_bool__o *)sub_1C2D6DC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v13,
    (const MethodInfo_3742F40 *)Method_System_Collections_Generic_List_bool___ctor__);
  Instance = (DataManager_o *)this->fields._EventBoardQuestReleaseList_k__BackingField;
  if ( !Instance )
    goto LABEL_82;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v78 = v74;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v14 )
      break;
    if ( !v78.fields._current )
      sub_1C2D6EC(v14, v15);
    if ( v78.fields._current[2].klass == (Il2CppClass *)squareId )
    {
      if ( !MasterData_object )
        sub_1C2D6EC(v14, v15);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             &entity,
             (int32_t)v78.fields._current[1].klass,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C2D6EC(0, v16);
        HasFlag = QuestEntity__HasFlag((QuestEntity_o *)entity, 0x8000000000LL, 0);
        if ( !HasFlag )
        {
          if ( !v12 )
            sub_1C2D6EC(HasFlag, v18);
          v21 = entity;
          items = v12->fields._items;
          v23 = Method_System_Collections_Generic_List_QuestEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1C2D6EC(HasFlag, v21);
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v21,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v21;
            sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v21, v19, v20);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  v26 = ScrTerminalMap___c_TypeInfo;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v26 = ScrTerminalMap___c_TypeInfo;
  }
  _9__409_0 = (System_Func_object__int__o *)v26->static_fields->__9__409_0;
  if ( !_9__409_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = ScrTerminalMap___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__409_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_QuestEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__409_0,
      v28,
      Method_ScrTerminalMap___c__SetBoardGameSquareHaveToken_b__409_0__,
      0);
    static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
    static_fields->__9__409_0 = (struct System_Func_QuestEntity__int__o *)_9__409_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__409_0, (int32_t)_9__409_0, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                               (System_Func_TSource__TKey__o *)_9__409_0,
                                                               (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_QuestEntity__int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v32,
                                (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_QuestEntity___);
  if ( !Instance )
    goto LABEL_82;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v76 = v74;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
  {
    current = v76.fields._current;
    v34 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass409_0_TypeInfo);
    ScrTerminalMap___c__DisplayClass409_0___ctor((ScrTerminalMap___c__DisplayClass409_0_o *)v34, 0);
    if ( !current )
      sub_1C2D6EC(v35, v36);
    if ( !v34 )
      sub_1C2D6EC(v35, v36);
    *(_DWORD *)(v34 + 16) = current[1].klass;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    v37 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v37 = NetworkManager_TypeInfo;
    }
    if ( !v9 )
      sub_1C2D6EC(v37, v36);
    if ( UserQuestMaster__TryGetEntity(
           (UserQuestMaster_o *)v9,
           &v75,
           v37->static_fields->userIdNumber,
           *(_DWORD *)(v34 + 16),
           0) )
    {
      if ( !v75 )
        sub_1C2D6EC(0, v38);
      v39 = UserQuestEntity__getClearNum(v75, 0) > 0;
    }
    else
    {
      v39 = 0;
    }
    v40 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventBoardGameTokenRewardEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v40,
      (Il2CppObject *)v34,
      Method_ScrTerminalMap___c__DisplayClass409_0__SetBoardGameSquareHaveToken_b__1__,
      0);
    v41 = System_Linq_Enumerable__SingleOrDefault_object__51427640(
            datalist,
            (System_Func_TSource__bool__o *)v40,
            (const MethodInfo_310B938 *)Method_System_Linq_Enumerable_SingleOrDefault_EventBoardGameTokenRewardEntity___);
    *(_QWORD *)(v34 + 24) = v41;
    sub_1C2D434((CGThumbnailListItem_o *)(v34 + 24), (int32_t)v41, v42, v43);
    if ( *(_QWORD *)(v34 + 24) )
    {
      v46 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v34,
        Method_ScrTerminalMap___c__DisplayClass409_0__SetBoardGameSquareHaveToken_b__2__,
        0);
      v47 = System_Linq_Enumerable__Where_object_(
              v11,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
      v48 = System_Linq_Enumerable__ToList_object_(
              v47,
              (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
      v50 = v48;
      if ( !v48 )
        sub_1C2D6EC(0, v49);
      v51 = v48->fields._size;
      if ( v51 )
      {
        if ( v51 >= 1 )
        {
          for ( i = 0; i < v51; ++i )
          {
            if ( !v13 )
              sub_1C2D6EC(v48, v49);
            v53 = v13->fields._items;
            v54 = Method_System_Collections_Generic_List_bool__Add__;
            ++v13->fields._version;
            if ( !v53 )
              sub_1C2D6EC(v48, v49);
            v55 = v13->fields._size;
            if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
            {
              System_Collections_Generic_List_bool___AddWithResize(
                v13,
                v39,
                *(const MethodInfo_37437A4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              v51 = v50->fields._size;
            }
            else
            {
              v13->fields._size = v55 + 1;
              v53->m_Items[v55] = v39;
            }
          }
        }
      }
      else
      {
        if ( !v13 )
          sub_1C2D6EC(v48, v49);
        v56 = v13->fields._items;
        v57 = Method_System_Collections_Generic_List_bool__Add__;
        ++v13->fields._version;
        if ( !v56 )
          sub_1C2D6EC(v48, v49);
        v58 = v13->fields._size;
        if ( (unsigned int)v58 < LODWORD(v56->max_length) )
          goto LABEL_61;
LABEL_57:
        System_Collections_Generic_List_bool___AddWithResize(
          v13,
          v39,
          *(const MethodInfo_37437A4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v13 )
        sub_1C2D6EC(v44, v45);
      v56 = v13->fields._items;
      v57 = Method_System_Collections_Generic_List_bool__Add__;
      ++v13->fields._version;
      if ( !v56 )
        sub_1C2D6EC(v44, v45);
      v58 = v13->fields._size;
      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
        goto LABEL_57;
LABEL_61:
      v13->fields._size = v58 + 1;
      v56->m_Items[v58] = v39;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v13 )
LABEL_82:
    sub_1C2D6EC(Instance, v6);
  if ( v13->fields._size >= 1 )
  {
    v60 = 0;
    do
    {
      v61 = v60 + 1;
      EventBoardSquareObject = ScrTerminalMap__GetEventBoardSquareObject(this, squareId, v59);
      LODWORD(v74.fields._list) = v60 + 1;
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v63, v64, v65);
      v67 = System_String__Format((System_String_o *)StringLiteral_24095/*"token_{0:D2}"*/, v66, 0);
      GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                    EventBoardSquareObject,
                                                    v67,
                                                    0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Equality(GameObjectWithLog, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      if ( !GameObjectWithLog )
        goto LABEL_82;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectWithLog,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      Instance = (DataManager_o *)System_Collections_Generic_List_bool___get_Item(
                                    v13,
                                    v60,
                                    (const MethodInfo_37434A4 *)Method_System_Collections_Generic_List_bool__get_Item__);
      v70 = ((unsigned __int8)Instance & 1) != 0 ? 0.5 : 1.0;
      if ( !Component_object )
        goto LABEL_82;
      v71 = 1.0;
      v72 = v70;
      v73 = v70;
      UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v70, 0);
      ++v60;
    }
    while ( v61 < v13->fields._size );
  }
}


void ScrTerminalMap__SetCore(ScrTerminalMap_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  PlayMakerFSM_o *MyFsmP; // x0
  __int64 v6; // x1

  if ( (byte_4C24415 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12668/*"SelectCore"*/);
    byte_4C24415 = 1;
  }
  MyFsmP = ScrTerminalMap__mfGetMyFsmP(this, (const MethodInfo *)obj);
  if ( !MyFsmP
    || (MyFsmP = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(MyFsmP, 0)) == 0
    || (MyFsmP = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)MyFsmP,
                                     (System_String_o *)StringLiteral_12668/*"SelectCore"*/,
                                     0)) == 0 )
  {
    sub_1C2D6EC(MyFsmP, v6);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)MyFsmP, obj, 0);
}


void ScrTerminalMap__SetDiceButton(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  TerminalPramsManager_c *v4; // x0
  bool v5; // w1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4C24491 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24491 = 1;
  }
  if ( !ScrTerminalMap__IsEnabledToUseEventItem(this, method) )
    goto LABEL_11;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24302 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24302 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_4C24506 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24506 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v5 = !v6->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
  }
  else
  {
LABEL_11:
    v5 = 0;
  }
  ScrTerminalMap__SetEnabledDiceButton(this, v5, v3);
}


void ScrTerminalMap__SetDirectionalLightActive(ScrTerminalMap_o *this, bool isActive, const MethodInfo *method)
{
  TerminalSceneComponent_o *terminalScene; // x0

  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    sub_1C2D6EC(0, isActive);
  TerminalSceneComponent__SetDirectionalLightActive(terminalScene, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__SetDisp(ScrTerminalMap_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispRoot; // x0
  bool v5; // w21
  bool v7; // w21
  struct TerminalSceneComponent_o *terminalScene; // x8
  TitleInfoControl_o *titleInfoControl; // x19

  dispRoot = this->fields.dispRoot;
  if ( !dispRoot )
    goto LABEL_12;
  v5 = isDisp;
  UnityEngine_GameObject__SetActive(dispRoot, isDisp, 0);
  dispRoot = (UnityEngine_GameObject_o *)this->fields.mapCamera;
  if ( !dispRoot )
    goto LABEL_12;
  MapCamera__SetEnable((MapCamera_o *)dispRoot, v5, 0);
  dispRoot = (UnityEngine_GameObject_o *)this->fields.worldCamera;
  if ( !dispRoot )
    goto LABEL_12;
  dispRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispRoot, 0);
  if ( !dispRoot )
    goto LABEL_12;
  v7 = !isDisp;
  UnityEngine_GameObject__SetActive(dispRoot, !isDisp, 0);
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_12;
  dispRoot = (UnityEngine_GameObject_o *)terminalScene->fields.mEarthCore;
  if ( !dispRoot )
    goto LABEL_12;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, void *))dispRoot->klass[1]._1.fields)(
    dispRoot,
    !isDisp,
    dispRoot->klass[1]._1.events);
  dispRoot = this->fields.servantRoot;
  if ( !dispRoot
    || (UnityEngine_GameObject__SetActive(dispRoot, v7, 0), (dispRoot = this->fields.worldBg) == 0)
    || (UnityEngine_GameObject__SetActive(dispRoot, v7, 0), (dispRoot = this->fields.dispRoot) == 0)
    || (titleInfoControl = this->fields.titleInfoControl,
        dispRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(dispRoot, 0),
        !titleInfoControl) )
  {
LABEL_12:
    sub_1C2D6EC(dispRoot, isDisp);
  }
  TitleInfoControl__SetDispChangeBtn(titleInfoControl, (unsigned __int8)dispRoot & 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__SetDispMapUI(ScrTerminalMap_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mapModelManager; // x0
  UnityEngine_Object_o *subRootRoadP; // x21
  UnityEngine_Object_o *rootRoadP; // x21
  UnityEngine_Object_o *mapButtonGrid; // x21
  UnityEngine_Object_o *playerIcon; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *SpotPrefab; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *parent; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_Component_o *m_CachedPtr; // x0
  UnityEngine_Transform_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Component_o *v29; // x0
  __int64 v30; // x1
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  EventMapManagerInterface_c *klass; // x8
  __int64 v35; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C244BD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244BD = 1;
  }
  memset(&v39, 0, sizeof(v39));
  mapModelManager = (UnityEngine_GameObject_o *)this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_68;
  if ( MapModelManager__get_IsMapModel((MapModelManager_o *)mapModelManager, 0) )
  {
    subRootRoadP = (UnityEngine_Object_o *)this->fields.subRootRoadP;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(subRootRoadP, 0, 0) )
    {
      mapModelManager = this->fields.subRootRoadP;
      if ( !mapModelManager )
        goto LABEL_68;
      goto LABEL_14;
    }
  }
  else
  {
    rootRoadP = (UnityEngine_Object_o *)this->fields.rootRoadP;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rootRoadP, 0, 0) )
    {
      mapModelManager = this->fields.rootRoadP;
      if ( !mapModelManager )
        goto LABEL_68;
LABEL_14:
      UnityEngine_GameObject__SetActive(mapModelManager, isDisp, 0);
    }
  }
  mapButtonGrid = (UnityEngine_Object_o *)this->fields.mapButtonGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapButtonGrid, 0, 0) )
  {
    mapModelManager = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
    if ( !mapModelManager )
      goto LABEL_68;
    mapModelManager = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelManager, 0);
    if ( !mapModelManager )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive(mapModelManager, isDisp, 0);
  }
  playerIcon = (UnityEngine_Object_o *)this->fields.playerIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playerIcon, 0, 0) )
  {
    mapModelManager = this->fields.playerIcon;
    if ( !mapModelManager )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive(mapModelManager, isDisp, 0);
  }
  mapModelManager = (UnityEngine_GameObject_o *)this->fields.mMapInfo;
  if ( !mapModelManager )
    goto LABEL_68;
  mapModelManager = (UnityEngine_GameObject_o *)MapControl_MapInfo__GetSpotList(
                                                  (MapControl_MapInfo_o *)mapModelManager,
                                                  0);
  if ( !mapModelManager )
    goto LABEL_68;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)mapModelManager,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v10 )
      break;
    if ( !v39.fields._current )
      sub_1C2D6EC(v10, v11);
    SpotPrefab = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotPrefab(this, (int32_t)v39.fields._current[1].klass, v12);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Inequality(SpotPrefab, 0, 0);
    if ( v14 )
    {
      if ( isDisp )
      {
        if ( !SpotPrefab )
          sub_1C2D6EC(v14, v15);
        SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)SpotPrefab, 1, 0);
        SrcSpotBasePrefab__SetBtnColliderEnable((SrcSpotBasePrefab_o *)SpotPrefab, 1, 0);
      }
      else
      {
        if ( !SpotPrefab )
          sub_1C2D6EC(v14, v15);
        monitor = (UnityEngine_Component_o *)SpotPrefab[5].monitor;
        if ( !monitor )
          sub_1C2D6EC(0, v15);
        transform = UnityEngine_Component__get_transform(monitor, 0);
        if ( !transform )
          sub_1C2D6EC(0, v18);
        parent = UnityEngine_Transform__get_parent(transform, 0);
        if ( !parent )
          sub_1C2D6EC(0, v20);
        v21 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(parent, 0);
        if ( !v21 )
          sub_1C2D6EC(0, v22);
        gameObject = UnityEngine_Component__get_gameObject(v21, 0);
        if ( !gameObject )
          sub_1C2D6EC(0, v24);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        m_CachedPtr = (UnityEngine_Component_o *)SpotPrefab[5].fields.m_CachedPtr;
        if ( !m_CachedPtr )
          sub_1C2D6EC(0, v25);
        v27 = UnityEngine_Component__get_transform(m_CachedPtr, 0);
        if ( !v27 )
          sub_1C2D6EC(0, v28);
        v29 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v27, 0);
        if ( !v29 )
          sub_1C2D6EC(0, v30);
        v31 = UnityEngine_Component__get_gameObject(v29, 0);
        if ( !v31 )
          sub_1C2D6EC(0, v32);
        UnityEngine_GameObject__SetActive(v31, 0, 0);
        SrcSpotBasePrefab__SetDispNoticeNumber((SrcSpotBasePrefab_o *)SpotPrefab, 0, 0);
        SrcSpotBasePrefab__SetBtnColliderEnable((SrcSpotBasePrefab_o *)SpotPrefab, 0, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
LABEL_68:
    sub_1C2D6EC(mapModelManager, isDisp);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v35 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v35;
      p_offset += 2;
      if ( !v35 )
        goto LABEL_53;
    }
    v37 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_53:
    v37 = sub_1C7DCA8(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 12);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, bool, _QWORD))v37)(
    eventMapManagerInterface_k__BackingField,
    isDisp,
    *(_QWORD *)(v37 + 8));
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__SetDispSpotIcon(ScrTerminalMap_o *this, bool isDisp, const MethodInfo *method)
{
  MapControl_MapInfo_o *mMapInfo; // x0
  bool v6; // w20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *SpotPrefab; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UnityEngine_Component_o *m_CachedPtr; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C244BE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244BE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  mMapInfo = this->fields.mMapInfo;
  if ( !mMapInfo || (mMapInfo = (MapControl_MapInfo_o *)MapControl_MapInfo__GetSpotList(mMapInfo, 0)) == 0 )
    sub_1C2D6EC(mMapInfo, isDisp);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)mMapInfo,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v6 = isDisp;
  v17 = v16;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v17.fields._current )
      sub_1C2D6EC(v7, v8);
    SpotPrefab = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotPrefab(this, (int32_t)v17.fields._current[1].klass, v9);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality(SpotPrefab, 0, 0);
    if ( v11 )
    {
      if ( !SpotPrefab )
        sub_1C2D6EC(v11, v12);
      m_CachedPtr = (UnityEngine_Component_o *)SpotPrefab[4].fields.m_CachedPtr;
      if ( !m_CachedPtr )
        sub_1C2D6EC(0, v12);
      gameObject = UnityEngine_Component__get_gameObject(m_CachedPtr, 0);
      if ( !gameObject )
        sub_1C2D6EC(0, v15);
      UnityEngine_GameObject__SetActive(gameObject, v6, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}


void ScrTerminalMap__SetEnabledDiceButton(ScrTerminalMap_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_Object_o *diceButton; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *diceButtonArrow; // x0
  float v8; // s8
  TerminalPramsManager_c *v9; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2448F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2448F = 1;
  }
  diceButton = (UnityEngine_Object_o *)this->fields.diceButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(diceButton, 0, 0) )
  {
    diceButtonArrow = (UnityEngine_Behaviour_o *)this->fields.diceButton;
    if ( !diceButtonArrow )
      goto LABEL_20;
    v8 = isEnabled ? 1.0 : 0.5;
    UnityEngine_Behaviour__set_enabled(diceButtonArrow, isEnabled, 0);
    diceButtonArrow = (UnityEngine_Behaviour_o *)this->fields.diceButton;
    if ( !diceButtonArrow
      || (v10.fields.a = 1.0,
          v10.fields.r = v8,
          v10.fields.g = v8,
          v10.fields.b = v8,
          UIButtonColor__set_defaultColor((UIButtonColor_o *)diceButtonArrow, v10, 0),
          (diceButtonArrow = (UnityEngine_Behaviour_o *)this->fields.diceButtonArrow) == 0) )
    {
LABEL_20:
      sub_1C2D6EC(diceButtonArrow, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)diceButtonArrow, isEnabled, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24505 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24505 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = isEnabled;
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__SetEventBoardClearMarker(
        ScrTerminalMap_o *this,
        int32_t index,
        int32_t clearCount,
        int32_t maxClearCount,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EventBoardSquareObject; // x21
  UnityEngine_Object_o *GameObjectWithLog; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *Component_object; // x21
  int v17; // w8
  Il2CppObject *v18; // x0
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C244AD & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_18000/*"clear_marker"*/);
    sub_1C2D490(&StringLiteral_18001/*"clear_marker_{0:D2}"*/);
    byte_4C244AD = 1;
  }
  EventBoardSquareObject = ScrTerminalMap__GetEventBoardSquareObject(this, index, *(const MethodInfo **)&clearCount);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBoardSquareObject, 0, 0) )
  {
    GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                  EventBoardSquareObject,
                                                  (System_String_o *)StringLiteral_18000/*"clear_marker"*/,
                                                  0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (System_String_o *)UnityEngine_Object__op_Equality(GameObjectWithLog, 0, 0);
    if ( ((unsigned __int8)v11 & 1) == 0 )
    {
      if ( !GameObjectWithLog )
        goto LABEL_15;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectWithLog,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      v17 = maxClearCount - clearCount;
      if ( maxClearCount < clearCount )
        v17 = 0;
      v19 = v17;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
      v11 = System_String__Format((System_String_o *)StringLiteral_18001/*"clear_marker_{0:D2}"*/, v18, 0);
      if ( !Component_object )
LABEL_15:
        sub_1C2D6EC(v11, v12);
      UISprite__set_spriteName((UISprite_o *)Component_object, v11, 0);
    }
  }
}


void ScrTerminalMap__SetEventBoardGameSpotBadge(ScrTerminalMap_o *this, int32_t questCount, const MethodInfo *method)
{
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x21
  __int64 v6; // x1
  SrcSpotBasePrefab_o *v7; // x0

  if ( (byte_4C2448D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2448D = 1;
  }
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventBoardGameSpotPrefab, 0, 0) )
  {
    v7 = this->fields.eventBoardGameSpotPrefab;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    SrcSpotBasePrefab__mfSetQuestCount(v7, questCount, 0);
  }
}


void ScrTerminalMap__SetEventBoardQuestArrivalPanel(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *EventBoardQuestArrivalPanelObj_k__BackingField; // x20
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  TerminalPramsManager_c *IsEnabledToUseEventItem; // x0
  _BOOL8 v8; // x1

  if ( (byte_4C24492 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24492 = 1;
  }
  EventBoardQuestArrivalPanelObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(EventBoardQuestArrivalPanelObj_k__BackingField, 0, 0) )
  {
    eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(eventBoardGameSpotPrefab, 0, 0)
      && !this->fields.isWaitingViewEventBoardQuestArrivalPanel )
    {
      this->fields.isWaitingViewEventBoardQuestArrivalPanel = 1;
    }
    else
    {
      v6 = this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
      IsEnabledToUseEventItem = (TerminalPramsManager_c *)ScrTerminalMap__IsEnabledToUseEventItem(this, v5);
      if ( ((unsigned __int8)IsEnabledToUseEventItem & 1) != 0 )
      {
        v8 = 0;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C24302 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24302 = 1;
        }
        IsEnabledToUseEventItem = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          IsEnabledToUseEventItem = TerminalPramsManager_TypeInfo;
        }
        v8 = !IsEnabledToUseEventItem->static_fields->_IsPlayScriptWithMap_k__BackingField;
      }
      if ( !v6 )
        sub_1C2D6EC(IsEnabledToUseEventItem, v8);
      UnityEngine_GameObject__SetActive(v6, v8, 0);
      this->fields.isWaitingViewEventBoardQuestArrivalPanel = 0;
    }
  }
}


void ScrTerminalMap__SetIsFadingSpotMask(ScrTerminalMap_o *this, bool isFade, const MethodInfo *method)
{
  this->fields.isFadingSpotmask = isFade;
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__SetMapBgTexture(
        ScrTerminalMap_o *this,
        UnityEngine_Texture2D_o *tex,
        int32_t w,
        int32_t h,
        bool isMapModel,
        const MethodInfo *method)
{
  UIWidget_o *mapModelBg; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  struct MapCamera_o *mapCamera; // x8
  UnityEngine_GameObject_o *v14; // x21

  if ( (byte_4C2443C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2443C = 1;
  }
  if ( isMapModel )
  {
    mapModelBg = (UIWidget_o *)this->fields.mapModelBg;
    if ( !mapModelBg )
      goto LABEL_25;
    ((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture2D_o *, const MethodInfo *, _QWORD, bool, const MethodInfo *))mapModelBg->klass->vtable._27_set_mainTexture.methodPtr)(
      mapModelBg,
      tex,
      mapModelBg->klass->vtable._27_set_mainTexture.method,
      *(_QWORD *)&h,
      isMapModel,
      method);
    mapModelBg = (UIWidget_o *)this->fields.mapModelBg;
    if ( !mapModelBg )
      goto LABEL_25;
    UIWidget__set_width(mapModelBg, w, 0);
    mapModelBg = (UIWidget_o *)this->fields.mapModelBg;
    if ( !mapModelBg )
      goto LABEL_25;
    UIWidget__set_height(mapModelBg, h, 0);
  }
  mapModelBg = (UIWidget_o *)this->fields.mapCamera;
  if ( !mapModelBg )
    goto LABEL_25;
  MapCamera__SetMapTexture((MapCamera_o *)mapModelBg, (UnityEngine_Texture_o *)tex, w, h, 0);
  mapModelBg = (UIWidget_o *)this->fields.mapModelBg;
  if ( !mapModelBg )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelBg, 0);
  if ( isMapModel )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mapModelBg = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
  }
  else
  {
    mapModelBg = 0;
  }
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)mapModelBg & 1, 0);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_25;
  mapModelBg = (UIWidget_o *)mapCamera->fields.mMapBg;
  if ( !mapModelBg )
    goto LABEL_25;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mapModelBg, 0);
  if ( isMapModel )
  {
    mapModelBg = 0;
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mapModelBg = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
  }
  if ( !v14 )
LABEL_25:
    sub_1C2D6EC(mapModelBg, tex);
  UnityEngine_GameObject__SetActive(v14, (unsigned __int8)mapModelBg & 1, 0);
}


void ScrTerminalMap__SetMapButtonNextBySpotInfo(
        ScrTerminalMap_o *this,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mapButtonGrid; // x21
  __int64 v6; // x1
  MapButtonControl_o *v7; // x0

  if ( (byte_4C244BF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244BF = 1;
  }
  mapButtonGrid = (UnityEngine_Object_o *)this->fields.mapButtonGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mapButtonGrid, 0, 0) )
  {
    v7 = this->fields.mapButtonGrid;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    MapButtonControl__SetNext(v7, this->fields.mWarInfo, this->fields.mMapInfo, spotInfo, 0);
  }
}


void ScrTerminalMap__SetMapCamera(
        ScrTerminalMap_o *this,
        UnityEngine_Vector3_o pos,
        float time,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  ScrTerminalMap_o *v10; // x20
  struct MapCamera_o *mapCamera; // x8
  MapZoom_o *mZoom; // x21
  float ZoomSize; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v10 = this;
  if ( (byte_4C2444A & 1) == 0 )
  {
    this = (ScrTerminalMap_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2444A = 1;
  }
  mapCamera = v10->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_9;
  mZoom = mapCamera->fields.mZoom;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  ZoomSize = TerminalPramsManager__get_ZoomSize(0);
  if ( !mZoom
    || (MapZoom__SetZoomSize(mZoom, ZoomSize, 1, 0, 0), (this = (ScrTerminalMap_o *)v10->fields.mapCamera) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(this, endAction);
  }
  v14.fields.z = z;
  v14.fields.x = x;
  v14.fields.y = y;
  MapCamera__StartAutoMove((MapCamera_o *)this, v14, time, 15, endAction, 0);
}


void ScrTerminalMap__SetMapCameraTouchEnable(ScrTerminalMap_o *this, bool isEnable, const MethodInfo *method)
{
  struct MapCamera_o *mapCamera; // x8

  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    sub_1C2D6EC(this, isEnable);
  mapCamera->fields._IsTouchEnable_k__BackingField = isEnable;
}


void ScrTerminalMap__SetMapCamera_FocusSpot(
        ScrTerminalMap_o *this,
        SrcSpotBasePrefab_o *spot,
        float time,
        bool isMapModel,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !spot )
    sub_1C2D6EC(this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spot, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  if ( isMapModel )
    LocalPosition = ScrTerminalMap__ConvertLocalToScreenPosition(this, LocalPosition, v11);
  ScrTerminalMap__SetMapCamera(this, LocalPosition, time, endAction, v12);
}


void ScrTerminalMap__SetMapCamera_TutorialFocusSpot(
        ScrTerminalMap_o *this,
        SrcSpotBasePrefab_o *spot,
        float time,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x2
  struct UISprite_o *mcSpotSprite; // x8
  float v10; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !spot
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spot, 0),
        LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0),
        (mcSpotSprite = spot->fields.mcSpotSprite) == 0) )
  {
    sub_1C2D6EC(this, spot);
  }
  v10 = LocalPosition.fields.y + (float)(mcSpotSprite->fields.mHeight / 2);
  ScrTerminalMap__SetMapCamera(this, LocalPosition, time, 0, v8);
}


void ScrTerminalMap__SetPlayerIcon(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *spotObject,
        const MethodInfo *method)
{
  UnityEngine_Object_o *playerIcon; // x21
  Il2CppObject *pfbPlayerP; // x22
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x0

  if ( (byte_4C24423 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_13001/*"Spot_Player"*/);
    byte_4C24423 = 1;
  }
  playerIcon = (UnityEngine_Object_o *)this->fields.playerIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(playerIcon, 0, 0) )
  {
    pfbPlayerP = (Il2CppObject *)this->fields.pfbPlayerP;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__Instantiate_object_(
           pfbPlayerP,
           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.playerIcon = (struct UnityEngine_GameObject_o *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playerIcon, (int32_t)v7, v8, v9);
  }
  GameObjectExtensions__SetParent_35924212(this->fields.playerIcon, spotObject, 0);
  GameObjectExtensions__SetLocalPosition(this->fields.playerIcon, this->fields.PLAYER_ICON_POS, 0);
  GameObjectExtensions__ResetLocalRotation(this->fields.playerIcon, 0);
  GameObjectExtensions__SetLocalScale_35920668(this->fields.playerIcon, 0.8, 0.8, 1.0, 0);
  v11 = (UnityEngine_Object_o *)this->fields.playerIcon;
  if ( !v11 )
    sub_1C2D6EC(0, v10);
  UnityEngine_Object__set_name(v11, (System_String_o *)StringLiteral_13001/*"Spot_Player"*/, 0);
}


void ScrTerminalMap__SetSpotClickAct(ScrTerminalMap_o *this, System_Action_o *action, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mSpotClickAct = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mSpotClickAct, (int32_t)action, (int32_t)method, v3);
}


void ScrTerminalMap__SetupDiceButton(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *diceButton; // x0
  UISprite_o *Component_object; // x20
  __int64 v5; // x2
  _DWORD *v6; // x8
  float v7; // s8
  float v8; // s9
  float v9; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v11; // x20
  const MethodInfo *v12; // x2
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2448C & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&StringLiteral_16889/*"arrow"*/);
    sub_1C2D490(&StringLiteral_19733/*"game1_button"*/);
    byte_4C2448C = 1;
  }
  diceButton = (UnityEngine_Component_o *)this->fields.diceButton;
  if ( !diceButton )
    goto LABEL_20;
  diceButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(diceButton, 0);
  if ( !diceButton )
    goto LABEL_20;
  Component_object = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)diceButton,
                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  diceButton = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                            Component_object,
                                            (System_String_o *)StringLiteral_19733/*"game1_button"*/,
                                            0);
  if ( !Component_object )
    goto LABEL_20;
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))Component_object->klass->vtable._33_MakePixelPerfect.methodPtr)(
    Component_object,
    Component_object->klass->vtable._33_MakePixelPerfect.method);
  diceButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    diceButton = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  }
  v6 = *(_DWORD **)(diceButton[7].fields.m_CachedPtr + 824);
  if ( !v6 )
    goto LABEL_20;
  if ( v6[6] <= 2u )
    sub_1C2D6F4(diceButton, method, v5);
  diceButton = (UnityEngine_Component_o *)this->fields.diceButton;
  if ( !diceButton )
    goto LABEL_20;
  v7 = (float)(int)v6[8];
  v8 = (float)(int)v6[9];
  v9 = (float)(int)v6[10];
  gameObject = UnityEngine_Component__get_gameObject(diceButton, 0);
  GameObjectExtensions__SetLocalPosition_35918600(gameObject, v7, v8, v9, 0);
  diceButton = (UnityEngine_Component_o *)this->fields.diceButton;
  if ( !diceButton )
    goto LABEL_20;
  diceButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(diceButton, 0);
  if ( !diceButton )
    goto LABEL_20;
  diceButton = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)diceButton,
                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !diceButton )
    goto LABEL_20;
  v13.fields.y = (float)Component_object->fields.mHeight;
  v13.fields.x = (float)Component_object->fields.mWidth;
  v13.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)diceButton, v13, 0);
  diceButton = (UnityEngine_Component_o *)this->fields.diceButtonArrow;
  if ( !diceButton
    || (diceButton = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)diceButton,
                                                  0)) == 0
    || (v11 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)diceButton,
                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        diceButton = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                                  (UISprite_o *)v11,
                                                  (System_String_o *)StringLiteral_16889/*"arrow"*/,
                                                  0),
        !v11) )
  {
LABEL_20:
    sub_1C2D6EC(diceButton, method);
  }
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v11->klass->vtable[33].methodPtr)(
    v11,
    v11->klass->vtable[33].method);
  ScrTerminalMap__SetActiveDiceButton(this, 1, v12);
}


void ScrTerminalMap__SetupEventBoardGame(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *EventBoardPieceObj_k__BackingField; // x20
  __int64 v5; // x1
  MapControl_WarInfo_o *mWarInfo; // x0
  int32_t EventId; // w20
  DataManager_o *v8; // x21
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v10; // x2
  TerminalPramsManager_c *v11; // x0
  TerminalPramsManager_c *v12; // x0
  int32_t value; // w22
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v15; // x23
  struct System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x4
  TerminalPramsManager_c *v22; // x0
  const MethodInfo *v23; // x4
  int32_t v24; // w20
  int32_t v25; // w21
  int32_t v26; // w22
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x2
  TerminalPramsManager_c *v29; // x0
  ScrTerminalMap_c *v30; // x8
  int32_t EventBoardGameSquareIndex_k__BackingField; // w21
  TerminalPramsManager_c *v32; // x0
  ScrTerminalMap_c *v33; // x8
  int32_t v34; // w21
  ScrTerminalMap___c_c *v35; // x0
  System_Action_o *_9__372_0; // x20
  Il2CppObject *v37; // x21
  struct ScrTerminalMap___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t clearCount[2]; // [xsp+0h] [xbp-50h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o EventBoardSquarePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24487 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBoardGameCellMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__SetupEventBoardGame_b__372_0__);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    sub_1C2D490(&StringLiteral_10648/*"PlayEventBoardGameArrivalEffectAuto"*/);
    byte_4C24487 = 1;
  }
  *(_QWORD *)clearCount = 0;
  entity = 0;
  if ( ScrTerminalMap__IsEventBoardGame(this, method) && ScrTerminalMap__IsDispEventBoardGameUI(this, v3) )
  {
    EventBoardPieceObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardPieceObj_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(EventBoardPieceObj_k__BackingField, 0, 0) )
    {
      mWarInfo = this->fields.mWarInfo;
      if ( !mWarInfo )
        goto LABEL_100;
      EventId = MapControl_WarInfo__GetEventId(mWarInfo, 0);
      mWarInfo = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mWarInfo )
        goto LABEL_100;
      v8 = (DataManager_o *)mWarInfo;
      mWarInfo = (MapControl_WarInfo_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)mWarInfo,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBoardGameCellMaster___);
      if ( !mWarInfo )
        goto LABEL_100;
      this->fields.eventBoardGameSquareCount = EventBoardGameCellMaster__GetBoardSquareCount(
                                                 (EventBoardGameCellMaster_o *)mWarInfo,
                                                 EventId,
                                                 0);
      MasterData_object = DataManager__GetMasterData_object_(
                            v8,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      mWarInfo = (MapControl_WarInfo_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        mWarInfo = (MapControl_WarInfo_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_100;
      UserEventMaster__TryGetEntity(
        (UserEventMaster_o *)MasterData_object,
        &entity,
        *(_QWORD *)(mWarInfo[2].fields.createdDateTime + 64),
        EventId,
        0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C244EA )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C244EA = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      if ( v11->static_fields->_EventBoardGameSquareIndex_k__BackingField < 1 )
      {
        if ( entity )
        {
          value = entity->fields.value;
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11);
          if ( !byte_4C24503 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C24503 = 1;
          }
          v12 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v12 = TerminalPramsManager_TypeInfo;
          }
          static_fields = v12->static_fields;
        }
        else
        {
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11);
          if ( !byte_4C24503 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C24503 = 1;
          }
          v12 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v12 = TerminalPramsManager_TypeInfo;
          }
          static_fields = v12->static_fields;
          value = 1;
        }
        static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
      }
      else
      {
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11);
        if ( !byte_4C244EA )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C244EA = 1;
        }
        v12 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v12 = TerminalPramsManager_TypeInfo;
        }
        value = v12->static_fields->_EventBoardGameSquareIndex_k__BackingField;
      }
      if ( !v12->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v12);
      if ( !byte_4C244EA )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C244EA = 1;
      }
      mWarInfo = (MapControl_WarInfo_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        mWarInfo = (MapControl_WarInfo_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !entity )
        goto LABEL_100;
      if ( *(_DWORD *)(mWarInfo[2].fields.createdDateTime + 452) != 11 && entity->fields.value == 11 )
        ScrTerminalMap__SetEventBoardGameSpotBadge(this, 0, v10);
      v15 = this->fields._EventBoardPieceObj_k__BackingField;
      EventBoardSquarePos = ScrTerminalMap__GetEventBoardSquarePos(this, value, v10);
      GameObjectExtensions__SetPosition(v15, EventBoardSquarePos, 0);
      mWarInfo = (MapControl_WarInfo_o *)DataManager__GetMasterData_object_(
                                           v8,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !mWarInfo )
LABEL_100:
        sub_1C2D6EC(mWarInfo, v5);
      ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                                  (QuestReleaseMaster_o *)mWarInfo,
                                  EventId,
                                  116,
                                  0);
      this->fields._EventBoardQuestReleaseList_k__BackingField = ListByTargetAndCondType;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&this->fields._EventBoardQuestReleaseList_k__BackingField,
        (int32_t)ListByTargetAndCondType,
        v17,
        v18);
      ScrTerminalMap__SetDiceButton(this, v19);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23E9B )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E9B = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      if ( v22->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
      {
        ScrTerminalMap__EventBoardCameraAction(this, 0, 0, 1, v21);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10648/*"PlayEventBoardGameArrivalEffectAuto"*/,
          0.25,
          0);
      }
      else
      {
        ScrTerminalMap__SetEventBoardQuestArrivalPanel(this, v20);
      }
      if ( this->fields.eventBoardGameSquareCount >= 1 )
      {
        v24 = 1;
        do
        {
          *(_QWORD *)clearCount = 0;
          ScrTerminalMap__GetBoardGameSquareClearCountAndMaxCount(this, v24, &clearCount[1], clearCount, v23);
          v26 = clearCount[0];
          v25 = clearCount[1];
          ScrTerminalMap__SetEventBoardClearMarker(this, v24, clearCount[1], clearCount[0], v27);
          ScrTerminalMap__SetBoardGameSquareHaveToken(this, v24, v28);
          if ( v24 == 1 )
          {
            mWarInfo = (MapControl_WarInfo_o *)this->fields._EventBoardStopPanelObj_k__BackingField;
            if ( !mWarInfo )
              goto LABEL_100;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mWarInfo, v25 < v26, 0);
          }
          ++v24;
        }
        while ( v24 <= this->fields.eventBoardGameSquareCount );
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C244EA )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C244EA = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v30 = ScrTerminalMap_TypeInfo;
      EventBoardGameSquareIndex_k__BackingField = v29->static_fields->_EventBoardGameSquareIndex_k__BackingField;
      if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        v30 = ScrTerminalMap_TypeInfo;
      }
      if ( EventBoardGameSquareIndex_k__BackingField == v30->static_fields->AUTO_QUEST_SQUARE_INDEX_1 )
        goto LABEL_92;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C244EA )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C244EA = 1;
      }
      v32 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v32 = TerminalPramsManager_TypeInfo;
      }
      v33 = ScrTerminalMap_TypeInfo;
      v34 = v32->static_fields->_EventBoardGameSquareIndex_k__BackingField;
      if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        v33 = ScrTerminalMap_TypeInfo;
      }
      if ( v34 == v33->static_fields->AUTO_QUEST_SQUARE_INDEX_2 )
      {
LABEL_92:
        v35 = ScrTerminalMap___c_TypeInfo;
        if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
          v35 = ScrTerminalMap___c_TypeInfo;
        }
        _9__372_0 = v35->static_fields->__9__372_0;
        if ( !_9__372_0 )
        {
          if ( !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            v35 = ScrTerminalMap___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v35->static_fields->__9;
          _9__372_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(_9__372_0, v37, Method_ScrTerminalMap___c__SetupEventBoardGame_b__372_0__, 0);
          v38 = ScrTerminalMap___c_TypeInfo->static_fields;
          v38->__9__372_0 = _9__372_0;
          sub_1C2D434((CGThumbnailListItem_o *)&v38->__9__372_0, (int32_t)_9__372_0, v39, v40);
        }
        ScrTerminalMap__EventBoardCameraAction(this, _9__372_0, 0, 0, v23);
      }
    }
  }
}


void ScrTerminalMap__SetupFeildConfiguration(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *mapModelManager; // x0
  bool v4; // w1
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mapModelManager = (TerminalSceneComponent_o *)this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_12;
  if ( !MapModelManager__get_IsMapModel((MapModelManager_o *)mapModelManager, 0) )
  {
    mapModelManager = this->fields.terminalScene;
    if ( mapModelManager )
    {
      TerminalSceneComponent__InitLighting(mapModelManager, 0);
      mapModelManager = (TerminalSceneComponent_o *)this->fields.mapModelScreen;
      if ( mapModelManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapModelManager, 0, 0);
        mapModelManager = (TerminalSceneComponent_o *)this->fields.spotModelScreen;
        if ( mapModelManager )
        {
          v4 = 0;
          goto LABEL_11;
        }
      }
    }
LABEL_12:
    sub_1C2D6EC(mapModelManager, method);
  }
  v5.fields.r = 1.0;
  v5.fields.g = 1.0;
  v5.fields.b = 1.0;
  v5.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v5, 0);
  mapModelManager = this->fields.terminalScene;
  if ( !mapModelManager )
    goto LABEL_12;
  TerminalSceneComponent__SetDirectionalLightActive(mapModelManager, 0, 0);
  mapModelManager = (TerminalSceneComponent_o *)this->fields.mapModelScreen;
  if ( !mapModelManager )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapModelManager, 1, 0);
  mapModelManager = (TerminalSceneComponent_o *)this->fields.spotModelScreen;
  if ( !mapModelManager )
    goto LABEL_12;
  v4 = 1;
LABEL_11:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapModelManager, v4, 0);
}


void ScrTerminalMap__SetupMapGimmickBasePrefab(
        ScrTerminalMap_o *this,
        MapEntity_o *mapEnt,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  ScrTerminalMap_o *v8; // x19
  System_String_o *OverwriteMapAssetId; // x22
  bool IsNullOrEmpty; // w0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ScrTerminalMap_c *v14; // x8
  bool v15; // w24
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  System_String_o *ASSETS_NAME_MAP_GIMMICK; // x23
  Il2CppObject *v18; // x1
  System_String_o *v19; // x0
  ScrTerminalMap_o *v20; // x22
  Il2CppObject *Object_object__51051712; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *mapGimmickPrefab; // x21
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  v8 = this;
  if ( (byte_4C24428 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24428 = 1;
  }
  if ( !mapEnt )
    goto LABEL_16;
  OverwriteMapAssetId = MapEntity__GetOverwriteMapAssetId(mapEnt, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(OverwriteMapAssetId, 0);
  v14 = ScrTerminalMap_TypeInfo;
  v15 = IsNullOrEmpty;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v14 = ScrTerminalMap_TypeInfo;
  }
  static_fields = v14->static_fields;
  ASSETS_NAME_MAP_GIMMICK = static_fields->ASSETS_NAME_MAP_GIMMICK;
  if ( v15 )
  {
    currentAssetId = v8->fields.currentAssetId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v11, v12, v13);
    v19 = ASSETS_NAME_MAP_GIMMICK;
  }
  else
  {
    v19 = static_fields->ASSETS_NAME_MAP_GIMMICK;
    v18 = (Il2CppObject *)OverwriteMapAssetId;
  }
  this = (ScrTerminalMap_o *)System_String__Format(v19, v18, 0);
  v20 = this;
  if ( !multiAssetData )
    goto LABEL_13;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              multiAssetData,
                              (System_String_o *)this,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  v8->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)Object_object__51051712;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.mapGimmickPrefab, (int32_t)Object_object__51051712, v22, v23);
  mapGimmickPrefab = (UnityEngine_Object_o *)v8->fields.mapGimmickPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(mapGimmickPrefab, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_13:
    if ( assetData )
    {
      v25 = AssetData__GetObject_object__51051712(
              assetData,
              (System_String_o *)v20,
              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      v8->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)v25;
      sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.mapGimmickPrefab, (int32_t)v25, v26, v27);
      return;
    }
LABEL_16:
    sub_1C2D6EC(this, mapEnt);
  }
}


void ScrTerminalMap__ShowActivePlayerIcon(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *playerIcon; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v13; // d0
  float z; // s1
  System_Action_o *v15; // x19
  EasingObject_o *v16; // x21
  System_Action_o *v17; // x22

  if ( (byte_4C24473 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass351_0__ShowActivePlayerIcon_b__0__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass351_0__ShowActivePlayerIcon_b__1__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass351_0_TypeInfo);
    byte_4C24473 = 1;
  }
  v3 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass351_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass351_0___ctor((ScrTerminalMap___c__DisplayClass351_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  playerIcon = (UnityEngine_Object_o *)this->fields.playerIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playerIcon, 0, 0) )
  {
    v4 = this->fields.playerIcon;
    if ( v4 )
    {
      if ( UnityEngine_GameObject__get_activeSelf(v4, 0) )
        return;
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           this->fields.playerIcon,
                           (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      *(_QWORD *)(v3 + 48) = Component_object;
      sub_1C2D434((CGThumbnailListItem_o *)(v3 + 48), (int32_t)Component_object, v10, v11);
      if ( !byte_4C20DA1 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v13 = *(_QWORD *)&static_fields->zeroVector.fields.x;
      z = static_fields->zeroVector.fields.z;
      *(int32x2_t *)(v3 + 24) = vdup_n_s32(0x3F4CCCCDu);
      *(_DWORD *)(v3 + 32) = 1065353216;
      *(_QWORD *)(v3 + 36) = v13;
      *(float *)(v3 + 44) = z;
      v4 = this->fields.playerIcon;
      if ( v4 )
      {
        UnityEngine_GameObject__SetActive(v4, 1, 0);
        GameObjectExtensions__SetLocalScale(this->fields.playerIcon, *(UnityEngine_Vector3_o *)(v3 + 36), 0);
        v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v15,
          (Il2CppObject *)v3,
          Method_ScrTerminalMap___c__DisplayClass351_0__ShowActivePlayerIcon_b__0__,
          0);
        v16 = *(EasingObject_o **)(v3 + 48);
        v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v17,
          (Il2CppObject *)v3,
          Method_ScrTerminalMap___c__DisplayClass351_0__ShowActivePlayerIcon_b__1__,
          0);
        if ( v16 )
        {
          EasingObject__Play(v16, 0.25, v17, v15, 0.0, 0, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C2D6EC(v4, v5);
  }
}


void ScrTerminalMap__ShowEventRaceBoostEffect(
        ScrTerminalMap_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v6; // x0
  int *eventRaceBoost_k__BackingField; // x25
  QuestTree_o *Instance; // x0
  __int64 v9; // x1
  int32_t SpotID; // w0
  int32_t v11; // w21
  int32_t ImageId; // w22
  TerminalPramsManager_c *v13; // x0
  CGThumbnailListItem_o *v14; // x0
  Il2CppObject *Object_object__51051712; // x23
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *eventActionEffect; // x23
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v21; // x23
  const MethodInfo *v22; // x2
  UnityEngine_GameObject_o *SpotGameObject; // x0
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  EventRaceBoostEffect_o *v25; // x20
  bool v26; // w21
  QuestRacePointEntity_o *v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  TerminalPramsManager_c *v30; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  ItemEntity_o *v32; // [xsp+0h] [xbp-50h] BYREF
  QuestRacePointEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2447A & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestRacePointMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventRaceBoostEffect___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6229/*"EventRaceBoostEffect"*/);
    byte_4C2447A = 1;
  }
  v32 = 0;
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244E9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244E9 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  eventRaceBoost_k__BackingField = (int *)v6->static_fields->_eventRaceBoost_k__BackingField;
  if ( eventRaceBoost_k__BackingField && eventRaceBoost_k__BackingField[4] >= 1 )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (QuestTree_o *)QuestTree__GetQuestInfo(Instance, eventRaceBoost_k__BackingField[7], 0);
    if ( !Instance )
      goto LABEL_48;
    SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)Instance, 0);
    if ( SpotID >= 1 )
    {
      v11 = SpotID;
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      Instance = (QuestTree_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestRacePointMaster___);
      if ( !Instance )
        goto LABEL_48;
      if ( QuestRacePointMaster__TryGetEntity(
             (QuestRacePointMaster_o *)Instance,
             &entity,
             eventRaceBoost_k__BackingField[7],
             eventRaceBoost_k__BackingField[8],
             0) )
      {
        if ( eventRaceBoost_k__BackingField[8] < 1 )
          goto LABEL_31;
        Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        Instance = (QuestTree_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !Instance )
          goto LABEL_48;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&v32,
               eventRaceBoost_k__BackingField[8],
               (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = (QuestTree_o *)v32;
          if ( !v32 )
            goto LABEL_48;
          ImageId = ItemEntity__GetImageId(v32, 0);
        }
        else
        {
LABEL_31:
          ImageId = 0;
        }
        Instance = (QuestTree_o *)this->fields.mapAssetData;
        if ( Instance )
        {
          Object_object__51051712 = AssetData__GetObject_object__51051712(
                                      (AssetData_o *)Instance,
                                      (System_String_o *)StringLiteral_6229/*"EventRaceBoostEffect"*/,
                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v16 = UnityEngine_Object__Instantiate_object_(
                  Object_object__51051712,
                  (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          this->fields.eventActionEffect = (struct UnityEngine_GameObject_o *)v16;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventActionEffect, (int32_t)v16, v17, v18);
          eventActionEffect = this->fields.eventActionEffect;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
          GameObjectExtensions__SafeSetParent(eventActionEffect, transform, 0);
          GameObjectExtensions__ResetLocalScale(this->fields.eventActionEffect, 0);
          v21 = this->fields.eventActionEffect;
          SpotGameObject = ScrTerminalMap__GetSpotGameObject(this, v11, v22);
          LocalPosition = GameObjectExtensions__GetLocalPosition(SpotGameObject, 0);
          GameObjectExtensions__SetLocalPosition(v21, LocalPosition, 0);
          Instance = (QuestTree_o *)this->fields.eventActionEffect;
          if ( Instance )
          {
            Instance = (QuestTree_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRaceBoostEffect___);
            eventScriptCallingList = this->fields.eventScriptCallingList;
            v25 = (EventRaceBoostEffect_o *)Instance;
            v26 = !eventScriptCallingList || LODWORD(eventScriptCallingList->max_length) == 0;
            v27 = entity;
            if ( entity )
            {
              Instance = (QuestTree_o *)QuestRacePointEntity__GetEffectGrade(entity, 0);
              if ( v25 )
              {
                EventRaceBoostEffect__SetUpAndPlay(
                  v25,
                  v27,
                  (int32_t)Instance,
                  eventRaceBoost_k__BackingField[6],
                  ImageId,
                  v26,
                  callback,
                  0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C24502 )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C24502 = 1;
                }
                v30 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v30 = TerminalPramsManager_TypeInfo;
                }
                p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v30->static_fields->_eventRaceBoost_k__BackingField;
                p_eventRaceBoost_k__BackingField->klass = 0;
                sub_1C2D434(p_eventRaceBoost_k__BackingField, 0, v28, v29);
                return;
              }
            }
          }
        }
LABEL_48:
        sub_1C2D6EC(Instance, v9);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24502 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24502 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v14 = (CGThumbnailListItem_o *)&v13->static_fields->_eventRaceBoost_k__BackingField;
  v14->klass = 0;
  sub_1C2D434(v14, 0, (int32_t)callback, method);
  ActionExtensions__Call(callback, 0);
}


void ScrTerminalMap__SkillGetDialogOpen(ScrTerminalMap_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  TerminalSceneComponent_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TitleInfoControl_o *titleInfoControl; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w22
  System_Action_o *v16; // x23

  if ( (byte_4C2446E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass345_0__SkillGetDialogOpen_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass345_0_TypeInfo);
    byte_4C2446E = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass345_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass345_0___ctor((ScrTerminalMap___c__DisplayClass345_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_20;
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_20;
  mActionPanel = mTerminalList->fields.mActionPanel;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass345_0__SkillGetDialogOpen_b__0__,
    0);
  if ( !titleInfoControl )
LABEL_20:
    sub_1C2D6EC(v6, v7);
  TitleInfoControl__EventSkillGetDialogOpen(titleInfoControl, mActionPanel, QuestId_k__BackingField, v16, 0);
}


void ScrTerminalMap__SpotMaskEnd_FadeEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C2445E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11554/*"SEND_MES_END"*/);
    byte_4C2445E = 1;
  }
  if ( !this->fields.isFadingSpotmask )
  {
    spotMaskObj = this->fields.spotMaskObj;
    if ( !spotMaskObj )
      goto LABEL_8;
    UnityEngine_GameObject__SetActive(spotMaskObj, 0, 0);
  }
  spotMaskObj = (UnityEngine_GameObject_o *)this->fields.titleInfoControl;
  if ( !spotMaskObj )
LABEL_8:
    sub_1C2D6EC(spotMaskObj, method);
  TitleInfoControl__SetDispChangeBtn((TitleInfoControl_o *)spotMaskObj, 1, 0);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_11554/*"SEND_MES_END"*/, v4);
}


void ScrTerminalMap__SpotMaskStart_FadeEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C2445C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11554/*"SEND_MES_END"*/);
    byte_4C2445C = 1;
  }
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_11554/*"SEND_MES_END"*/, v2);
}


void ScrTerminalMap__Start(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C24413 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4C24413 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.targetFsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetFsm, (int32_t)Component_object, v4, v5);
  ScrTerminalMap__InitTitleInfo(this, v6);
}


void ScrTerminalMap__StartBoardGamePieceEffectSub(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *EventBoardPieceObj_k__BackingField; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C2449D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_10639/*"PlayBoardGamePieceEffectSub"*/);
    byte_4C2449D = 1;
  }
  EventBoardPieceObj_k__BackingField = (UnityEngine_Object_o *)this->fields._EventBoardPieceObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(EventBoardPieceObj_k__BackingField, 0, 0) )
  {
    ScrTerminalMap__EndBoardGamePieceEffect(this, v4);
  }
  else if ( this->fields.isEventBoardGamePieceEffectFirst )
  {
    ScrTerminalMap__PlayBoardGamePieceEffectSub(this, v4);
    this->fields.isEventBoardGamePieceEffectFirst = 0;
  }
  else
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10639/*"PlayBoardGamePieceEffectSub"*/,
      0.067,
      0);
  }
}


void ScrTerminalMap__StartDataLostBattleReset(
        ScrTerminalMap_o *this,
        int32_t eventId,
        int32_t warId,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  void *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ScrTerminalMap_o *v14; // x0
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t EventDataLostBattleId; // w21
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w19
  int32_t v21; // w21
  DataLostResetManager_ClickDelegate_o *v22; // x22
  __int64 v23; // x8
  TerminalPramsManager_c *v24; // x0
  int32_t v25; // w23
  int32_t v26; // w23
  int32_t v27; // w20
  int32_t v28; // w22
  int32_t v29; // w21
  NetworkManager_ResultCallbackFunc_o *v30; // x23

  if ( (byte_4C24471 & 1) == 0 )
  {
    sub_1C2D490(&DataLostResetManager_ClickDelegate_TypeInfo);
    sub_1C2D490(&DataLostResetManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_StartDataLostBattleResetEffect__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass349_0__StartDataLostBattleReset_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass349_0_TypeInfo);
    byte_4C24471 = 1;
  }
  v9 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass349_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass349_0___ctor((ScrTerminalMap___c__DisplayClass349_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_42;
  *(_QWORD *)(v9 + 24) = this;
  *(_DWORD *)(v9 + 16) = eventId;
  *(_DWORD *)(v9 + 20) = warId;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  if ( !ScrTerminalMap__IsDataLostBattleAutoReset(v14, *(_DWORD *)(v9 + 16), *(_DWORD *)(v9 + 20), v15) )
  {
    ActionExtensions__Call(endAction, 0);
    return;
  }
  this->fields.isPlayingDataLostBattleResetEffect = 1;
  this->fields.dataLostBattleResetEffectEndAct = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dataLostBattleResetEffectEndAct, (int32_t)endAction, v16, v17);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_42;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            *(_DWORD *)(v9 + 20),
                            *(_DWORD *)(v9 + 16),
                            0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
  if ( !Master_object )
    goto LABEL_42;
  Master_object = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)Master_object,
                    EventDataLostBattleId,
                    *(_DWORD *)(v9 + 16),
                    0);
  if ( !Master_object )
    goto LABEL_42;
  v19 = (System_Collections_Generic_List_object__o *)Master_object;
  if ( *((_DWORD *)Master_object + 6) == 2 )
  {
    v20 = *(_DWORD *)(v9 + 16);
    v21 = *(_DWORD *)(v9 + 20);
    v22 = (DataLostResetManager_ClickDelegate_o *)sub_1C2D6DC(DataLostResetManager_ClickDelegate_TypeInfo);
    DataLostResetManager_ClickDelegate___ctor(
      v22,
      (Il2CppObject *)v9,
      Method_ScrTerminalMap___c__DisplayClass349_0__StartDataLostBattleReset_b__0__,
      0);
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__OpenResetSelectDialog(v20, v21, 1, v22, 0);
    return;
  }
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_42;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Master_object, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  Master_object = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = TerminalSceneComponent_TypeInfo;
  }
  v23 = **((_QWORD **)Master_object + 23);
  if ( !v23 )
    goto LABEL_42;
  Master_object = *(void **)(v23 + 240);
  if ( !Master_object )
    goto LABEL_42;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)Master_object, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F9 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 1;
  v25 = *(_DWORD *)(v9 + 16);
  if ( !byte_4C244FA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4C244FA = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_DataLostBattleEventId_k__BackingField = v25;
  v26 = *(_DWORD *)(v9 + 20);
  if ( !byte_4C244FB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4C244FB = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_DataLostBattleWarId_k__BackingField = v26;
  v28 = *(_DWORD *)(v9 + 16);
  v27 = *(_DWORD *)(v9 + 20);
  Master_object = System_Collections_Generic_List_object___get_Item(
                    v19,
                    0,
                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
  if ( !Master_object )
LABEL_42:
    sub_1C2D6EC(Master_object, v11);
  v29 = *((_DWORD *)Master_object + 5);
  v30 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v30,
    (Il2CppObject *)this,
    Method_ScrTerminalMap_StartDataLostBattleResetEffect__,
    0);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__RequestResetDataLostBattle(v28, v27, v29, v30, 0);
}


void ScrTerminalMap__StartDataLostBattleResetEffect(
        ScrTerminalMap_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t DataLostBattleEventId_k__BackingField; // w21
  int32_t DataLostBattleWarId_k__BackingField; // w20
  System_Action_o *v8; // x22

  if ( (byte_4C24472 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&DataLostResetManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__StartDataLostBattleResetEffect_b__350_0__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24472 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244FC )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244FC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0);
  if ( !byte_4C244FD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244FD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  DataLostBattleEventId_k__BackingField = v5->static_fields->_DataLostBattleEventId_k__BackingField;
  if ( !byte_4C244FE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C244FE = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  DataLostBattleWarId_k__BackingField = v5->static_fields->_DataLostBattleWarId_k__BackingField;
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__StartDataLostBattleResetEffect_b__350_0__, 0);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__PlayResetEffect(
    (UnityEngine_MonoBehaviour_o *)this,
    DataLostBattleEventId_k__BackingField,
    DataLostBattleWarId_k__BackingField,
    v8,
    0);
}


void ScrTerminalMap__StartEventQuestCheckNewOpen(
        ScrTerminalMap_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v5; // x1
  System_Int32_array *v6; // x20
  __int64 v7; // x2
  CommonUI_o *v8; // x19
  int32_t v9; // w20
  ScrTerminalMap___c_c *v10; // x0
  System_Action_o *_9__346_0; // x22
  System_String_o *v12; // x21
  Il2CppObject *v13; // x23
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Nullable_float__o p_messagePosY; // x0
  System_Nullable_float__o v18; // x5
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2446F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__StartEventQuestCheckNewOpen_b__346_0__);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    sub_1C2D490(&StringLiteral_6933/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/);
    byte_4C2446F = 1;
  }
  if ( eventDetailEntity && EventDetailEntity__IsEventPanel(eventDetailEntity, 0) )
  {
    Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      Instance = clsQuestCheck__GetNewPlayableEventQuestId(
                   (clsQuestCheck_o *)Instance,
                   eventDetailEntity->fields.eventId,
                   0);
      if ( Instance )
      {
        v6 = Instance;
        if ( !Instance->max_length )
          return;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
        if ( !LODWORD(v6->max_length) )
          goto LABEL_24;
        if ( !Instance )
          goto LABEL_23;
        if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)Instance, v6->m_Items[0], 143, 0) )
          return;
        Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LODWORD(v6->max_length) )
LABEL_24:
          sub_1C2D6F4(Instance, v5, v7);
        v8 = (CommonUI_o *)Instance;
        v9 = v6->m_Items[0];
        v10 = ScrTerminalMap___c_TypeInfo;
        if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
          v10 = ScrTerminalMap___c_TypeInfo;
        }
        _9__346_0 = v10->static_fields->__9__346_0;
        v12 = (System_String_o *)StringLiteral_6933/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
        if ( !_9__346_0 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = ScrTerminalMap___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v10->static_fields->__9;
          _9__346_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(_9__346_0, v13, Method_ScrTerminalMap___c__StartEventQuestCheckNewOpen_b__346_0__, 0);
          static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
          static_fields->__9__346_0 = _9__346_0;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__346_0, (int32_t)_9__346_0, v15, v16);
        }
        p_messagePosY = (System_Nullable_float__o)&messagePosY;
        messagePosY = 0;
        System_Nullable_float____ctor(
          p_messagePosY,
          30.0,
          (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
        if ( v8 )
        {
          v18 = messagePosY;
          CommonUI__OpenQuestNewPlayableDialog(v8, v9, v12, _9__346_0, 0, v18, 0.0, 0);
          return;
        }
      }
    }
LABEL_23:
    sub_1C2D6EC(Instance, v5);
  }
}


void ScrTerminalMap__StartRaidAnimation(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct WarEntity_o *mWarEnt; // x8
  TitleInfoControl_o *titleInfoControl; // x20
  int32_t eventId; // w21
  System_Action_o *v6; // x22

  v2 = this;
  if ( (byte_4C2441C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ScrTerminalMap_o *)sub_1C2D490(&Method_ScrTerminalMap__StartRaidAnimation_b__250_0__);
    byte_4C2441C = 1;
  }
  if ( v2->fields.isRaidMap )
  {
    mWarEnt = v2->fields.mWarEnt;
    if ( !mWarEnt
      || (titleInfoControl = v2->fields.titleInfoControl,
          eventId = mWarEnt->fields.eventId,
          v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(v6, (Il2CppObject *)v2, Method_ScrTerminalMap__StartRaidAnimation_b__250_0__, 0),
          !titleInfoControl) )
    {
      sub_1C2D6EC(this, method);
    }
    TitleInfoControl__PlayEventRaidDefeatedEffect(titleInfoControl, eventId, 1, v6, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__TerminalSceneRefresh(ScrTerminalMap_o *this, bool isFromTerminal, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  struct MapControl_WarInfo_o *mWarInfo; // x8
  int32_t warId; // w21
  int32_t v8; // w2

  if ( (byte_4C24419 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24419 = 1;
  }
  this->fields._IsCheckExpiration_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(Instance[1].fields.sendData[45].klass) = 1;
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_23;
  warId = mWarInfo->fields.warId;
  if ( !byte_4C23BE7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C23BE7 = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(Instance[1].fields.sendData->klass) = warId;
  if ( !byte_4C244E6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C244E6 = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  LOBYTE(Instance[1].fields.sendData[45].monitor) = 0;
  TopHomeRequest__clearExpirationDate(0);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_23:
    sub_1C2D6EC(Instance, isFromTerminal);
  if ( isFromTerminal )
    v8 = 2;
  else
    v8 = 1;
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, v8, 0, 0, 0);
}


bool ScrTerminalMap__TryAutoQuest(ScrTerminalMap_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t v6; // x21
  int32_t value; // w20
  ScrTerminalMap_c *v8; // x0
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  Il2CppObject *v10; // x0
  ScrTerminalMap___c_c *v11; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *EventBoardQuestReleaseList_k__BackingField; // x20
  QuestPhaseMaster_o *v13; // x21
  System_Func_object__bool__o *_9__418_0; // x22
  Il2CppObject *v15; // x23
  struct ScrTerminalMap___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  bool v20; // w20
  Il2CppObject *current; // x24
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *diceCounterComponent; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  QuestPhaseEntity_array *List; // x19
  int32_t klass; // w21
  TerminalPramsManager_c *v34; // x0
  TerminalSceneComponent_c *v35; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  QuestPhaseEntity_o *v37; // x2
  ScrTerminalListTop_o *mTerminalList; // x0
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  int v41; // w19
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-70h] BYREF
  UserEventEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C244B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C2D490(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__TryAutoQuest_b__418_0__);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    byte_4C244B2 = 1;
  }
  entity = 0;
  memset(&v44, 0, sizeof(v44));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.mWarInfo )
    goto LABEL_67;
  v6 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Instance = (DataManager_o *)MapControl_WarInfo__GetEventId(this->fields.mWarInfo, 0);
  if ( !MasterData_object )
    goto LABEL_67;
  Instance = (DataManager_o *)UserEventMaster__TryGetEntity(
                                (UserEventMaster_o *)MasterData_object,
                                &entity,
                                v6,
                                (int32_t)Instance,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_67;
    value = entity->fields.value;
  }
  else
  {
    value = 0;
  }
  v8 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v8 = ScrTerminalMap_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( value != static_fields->AUTO_QUEST_SQUARE_INDEX_1 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ScrTerminalMap_TypeInfo->static_fields;
    }
    if ( value != static_fields->AUTO_QUEST_SQUARE_INDEX_2 )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v10 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v11 = ScrTerminalMap___c_TypeInfo;
  EventBoardQuestReleaseList_k__BackingField = this->fields._EventBoardQuestReleaseList_k__BackingField;
  v13 = (QuestPhaseMaster_o *)v10;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v11 = ScrTerminalMap___c_TypeInfo;
  }
  _9__418_0 = (System_Func_object__bool__o *)v11->static_fields->__9__418_0;
  if ( !_9__418_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ScrTerminalMap___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v11->static_fields->__9;
    _9__418_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__418_0, v15, Method_ScrTerminalMap___c__TryAutoQuest_b__418_0__, 0);
    v16 = ScrTerminalMap___c_TypeInfo->static_fields;
    v16->__9__418_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__418_0;
    sub_1C2D434((CGThumbnailListItem_o *)&v16->__9__418_0, (int32_t)_9__418_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventBoardQuestReleaseList_k__BackingField,
          (System_Func_TSource__bool__o *)_9__418_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v19,
                                (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
  if ( !Instance )
LABEL_67:
    sub_1C2D6EC(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v44 = v43;
  do
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v20 )
    {
      v41 = 4;
      goto LABEL_62;
    }
    current = v44.fields._current;
    v22 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !current )
      sub_1C2D6EC(v22, v23);
    if ( !v22 )
      sub_1C2D6EC(0, v23);
  }
  while ( !clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v22, (int32_t)current[1].klass, 0) );
  diceCounterComponent = (UnityEngine_Object_o *)this->fields.diceCounterComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v25 = UnityEngine_Object__op_Inequality(diceCounterComponent, 0, 0);
  if ( v25 )
  {
    v27 = (UnityEngine_Component_o *)this->fields.diceCounterComponent;
    if ( !v27 )
      sub_1C2D6EC(0, v26);
    gameObject = UnityEngine_Component__get_gameObject(v27, 0);
    if ( !gameObject )
      sub_1C2D6EC(0, v29);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  if ( !v13 )
    sub_1C2D6EC(v25, v26);
  List = QuestPhaseMaster__getList(v13, (int32_t)current[1].klass, 0);
  klass = (int32_t)current[1].klass;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE1 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->_QuestId_k__BackingField = klass;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v35 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v35 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v35->static_fields->mInstance;
  if ( !mInstance )
    sub_1C2D6EC(v35, v30);
  if ( !List )
    sub_1C2D6EC(v35, v30);
  if ( !LODWORD(List->max_length) )
    sub_1C2D6F4(v35, v30, v31);
  v37 = List->m_Items[0];
  if ( !v37 )
    sub_1C2D6EC(v35, v30);
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    sub_1C2D6EC(0, v30);
  ScrTerminalListTop__StartQuest(mTerminalList, v37->fields.phase, v37, 0);
  v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v39 )
    sub_1C2D6EC(0, v40);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)v39, 0, 0);
  v41 = 9;
LABEL_62:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v20 && v41 == 9;
}


void ScrTerminalMap__Update(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *MyFsmP; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  System_String_o *ActiveStateName; // x0
  System_String_o *v7; // x0
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3
  int32_t MapUIState_k__BackingField; // w8
  bool v11; // cf
  unsigned int v12; // w8

  if ( (byte_4C24414 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_UpdateEventRaidUI__);
    sub_1C2D490(&StringLiteral_8885/*"Map Touch Disable"*/);
    sub_1C2D490(&StringLiteral_8886/*"Map Touch Enable"*/);
    byte_4C24414 = 1;
  }
  MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(MyFsmP, 0, 0);
  if ( v4 )
  {
    if ( !MyFsmP )
      sub_1C2D6EC(v4, v5);
    ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0);
    if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_8886/*"Map Touch Enable"*/, 0)
      || (v7 = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0),
          System_String__op_Equality(v7, (System_String_o *)StringLiteral_8885/*"Map Touch Disable"*/, 0)) )
    {
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap_UpdateEventRaidUI__, 0);
      ScrTerminalMap__CheckUpdateRequest(this, 0, v8, v9);
    }
  }
  MapUIState_k__BackingField = this->fields._MapUIState_k__BackingField;
  v11 = MapUIState_k__BackingField != 0;
  v12 = MapUIState_k__BackingField - 1;
  if ( v11 && v12 <= 1 )
    ScrTerminalMap__OnTouchDisp(this, v5);
}


void ScrTerminalMap__UpdateAllMapGimmickComponent(ScrTerminalMap_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *gimmickList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  Il2CppObject *v8; // x20
  int32_t name_high; // w21
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  MapControl_MapGimmickInfo_o *MapGimmickInfo; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C24448 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C24448 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  gimmickList = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
  if ( !gimmickList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    gimmickList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C2D6EC(v4, v5);
    v8 = v16.fields._current + 7;
    klass = v16.fields._current[7].klass;
    if ( !klass )
      sub_1C2D6EC(v4, v5);
    name_high = HIDWORD(klass->_1.name);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v11);
    MapGimmickInfo = QuestTree__GetMapGimmickInfo((QuestTree_o *)Instance, name_high, 0);
    if ( MapGimmickInfo )
    {
      v8->klass = (Il2CppClass *)MapGimmickInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&current[7], (int32_t)MapGimmickInfo, v13, v14);
      MapGimmickComponent__ResetOldDispTime((MapGimmickComponent_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
}


void ScrTerminalMap__UpdateAllMovingMapGimmickPosition(ScrTerminalMap_o *this, const MethodInfo *method)
{
  EventMapGimmickMoveManager_o *eventMapGimmickMoveManager; // x0

  if ( this->fields.isRaidMap )
  {
    eventMapGimmickMoveManager = this->fields.eventMapGimmickMoveManager;
    if ( eventMapGimmickMoveManager )
      EventMapGimmickMoveManager__UpdateAllMapGimmickPosition(eventMapGimmickMoveManager, 0);
  }
}


void ScrTerminalMap__UpdateAllMovingSpotPosition(ScrTerminalMap_o *this, bool isFocedMove, const MethodInfo *method)
{
  EventSpotMoveManager_o *eventSpotMoveManager; // x0
  __int64 v6; // x1
  EventSpotMoveManager_o *v7; // x0

  if ( this->fields.isRaidMap )
  {
    eventSpotMoveManager = this->fields.eventSpotMoveManager;
    if ( eventSpotMoveManager )
    {
      if ( !EventSpotMoveManager__IsSpotObjectMoving(eventSpotMoveManager, 0) )
      {
        v7 = this->fields.eventSpotMoveManager;
        if ( !v7 )
          sub_1C2D6EC(0, v6);
        EventSpotMoveManager__UpdateAllSpotPosition(v7, isFocedMove, 0);
      }
    }
  }
}


void ScrTerminalMap__UpdateAllRaidProgressMapGimmickDisplay(ScrTerminalMap_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *gimmickList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C24449 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    byte_4C24449 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  gimmickList = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
  if ( !gimmickList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    gimmickList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C2D6EC(0, v4);
    MapGimmickComponent__SetDisplayByRaidProgress((MapGimmickComponent_o *)v5.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
}


void ScrTerminalMap__UpdateAllSpotGameObject(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapControl_MapInfo_o *mMapInfo; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C24447 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4C24447 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  mMapInfo = this->fields.mMapInfo;
  if ( !mMapInfo || (mMapInfo = (MapControl_MapInfo_o *)MapControl_MapInfo__GetSpotList(mMapInfo, 0)) == 0 )
    sub_1C2D6EC(mMapInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)mMapInfo,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields._current )
      sub_1C2D6EC(v4, v5);
    ScrTerminalMap__UpdateSpotGameObject(
      this,
      *(_DWORD *)((char *)&v7.fields._current->klass + (unsigned __int64)&word_10),
      v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}


void ScrTerminalMap__UpdateAreaBoardList(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct TerminalSceneComponent_o *terminalScene; // x8

  terminalScene = this->fields.terminalScene;
  if ( !terminalScene || (this = (ScrTerminalMap_o *)terminalScene->fields.mTerminalList) == 0 )
    sub_1C2D6EC(this, method);
  ScrTerminalListTop__UpdateAreaQuestInfoList((ScrTerminalListTop_o *)this, 0);
}


void ScrTerminalMap__UpdateBoardGameSquare(
        ScrTerminalMap_o *this,
        int32_t squareId,
        int32_t clearCount,
        int32_t maxClearCount,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_MapControl_MapGimmickInfo__o *MapGimmickList; // x0
  ScrTerminalMap___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *_9__402_0; // x21
  Il2CppObject *v17; // x22
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_T__o *v21; // x20
  System_Action_object__o *v22; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *mapCamera; // x20
  struct MapCamera_o *v27; // x8
  TerminalPramsManager_c *v28; // x0

  if ( (byte_4C244A3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_MapControl_MapGimmickInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_MapControl_MapGimmickInfo___);
    sub_1C2D490(&System_Func_MapControl_MapGimmickInfo__bool__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__UpdateBoardGameSquare_b__402_1__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__UpdateBoardGameSquare_b__402_0__);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    byte_4C244A3 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MissionNotifyManager__EndPause(Instance, 0);
  ScrTerminalMap__SetEventBoardClearMarker(this, squareId, clearCount, maxClearCount, v11);
  ScrTerminalMap__UpdateEventBoardGameSpot(this, v12);
  Instance = (MissionNotifyManager_o *)this->fields.mMapInfo;
  if ( !Instance )
    goto LABEL_28;
  MapGimmickList = MapControl_MapInfo__GetMapGimmickList((MapControl_MapInfo_o *)Instance, 0);
  v14 = ScrTerminalMap___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)MapGimmickList;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v14 = ScrTerminalMap___c_TypeInfo;
  }
  _9__402_0 = (System_Func_object__bool__o *)v14->static_fields->__9__402_0;
  if ( !_9__402_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ScrTerminalMap___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__402_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MapControl_MapGimmickInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__402_0, v17, Method_ScrTerminalMap___c__UpdateBoardGameSquare_b__402_0__, 0);
    static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
    static_fields->__9__402_0 = (struct System_Func_MapControl_MapGimmickInfo__bool__o *)_9__402_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__402_0, (int32_t)_9__402_0, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v15,
                                                         (System_Func_TSource__bool__o *)_9__402_0,
                                                         (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_MapControl_MapGimmickInfo___);
  v22 = (System_Action_object__o *)sub_1C2D6DC(System_Action_MapControl_MapGimmickInfo__TypeInfo);
  System_Action_object____ctor(v22, (Il2CppObject *)this, Method_ScrTerminalMap__UpdateBoardGameSquare_b__402_1__, 0);
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)v22,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_MapControl_MapGimmickInfo___);
  if ( ScrTerminalMap__IsEnabledToUseEventItem(this, v23) )
    ScrTerminalMap__ChangeBoardGameDiceButttonActive(this, v24);
  else
    ScrTerminalMap__SetEnabledDiceButton(this, 0, v25);
  mapCamera = (UnityEngine_Object_o *)this->fields.mapCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (MissionNotifyManager_o *)UnityEngine_Object__op_Inequality(mapCamera, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v27 = this->fields.mapCamera;
    if ( !v27 )
      goto LABEL_28;
    v27->fields._IsTouchEnable_k__BackingField = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E9B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E9B = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
      return;
    }
LABEL_28:
    sub_1C2D6EC(Instance, v10);
  }
}


void ScrTerminalMap__UpdateCaldeaFolderBoardList(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct TerminalSceneComponent_o *terminalScene; // x8

  terminalScene = this->fields.terminalScene;
  if ( !terminalScene || (this = (ScrTerminalMap_o *)terminalScene->fields.mTerminalList) == 0 )
    sub_1C2D6EC(this, method);
  ScrTerminalListTop__UpdateCaldeaFolderInfoList((ScrTerminalListTop_o *)this, 1, 0);
}


void ScrTerminalMap__UpdateEventBoardGame(ScrTerminalMap_o *this, System_Action_o *callback, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *diceButton; // x20
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4C244A4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_4352/*"ChangeBoardGameDiceButttonActive"*/);
    sub_1C2D490(&StringLiteral_12791/*"SetEventBoardQuestArrivalPanel"*/);
    byte_4C244A4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E9B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E9B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    CommonUI__SetFadeMaskCollider(Instance, 1, 0);
  }
  ScrTerminalMap__JumpEventBoardGamePiece(this, callback, method);
  if ( this->fields.isWaitingViewEventBoardQuestArrivalPanel )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12791/*"SetEventBoardQuestArrivalPanel"*/,
      1.0,
      0);
  diceButton = (UnityEngine_Object_o *)this->fields.diceButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diceButton, 0, 0) )
  {
    Instance = (CommonUI_o *)this->fields.diceButton;
    if ( Instance )
    {
      Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( Instance )
      {
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C24506 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C24506 = 1;
          }
          v9 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v9 = TerminalPramsManager_TypeInfo;
          }
          if ( v9->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField )
          {
            if ( !v9->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v9);
            if ( !byte_4C24302 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C24302 = 1;
            }
            v10 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v10 = TerminalPramsManager_TypeInfo;
            }
            if ( !v10->static_fields->_IsPlayScriptWithMap_k__BackingField )
              UnityEngine_MonoBehaviour__Invoke(
                (UnityEngine_MonoBehaviour_o *)this,
                (System_String_o *)StringLiteral_4352/*"ChangeBoardGameDiceButttonActive"*/,
                1.0,
                0);
          }
        }
        return;
      }
    }
LABEL_36:
    sub_1C2D6EC(Instance, v7);
  }
}


void ScrTerminalMap__UpdateEventBoardGameSpot(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  QuestTree_o *Instance; // x0
  __int64 v5; // x1
  struct SrcSpotBasePrefab_o *v6; // x8
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v8; // x20
  struct SrcSpotBasePrefab_o *v9; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4C2448E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C2448E = 1;
  }
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventBoardGameSpotPrefab, 0, 0) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v6 = this->fields.eventBoardGameSpotPrefab;
    if ( !v6 || !Instance )
      goto LABEL_14;
    SpotInfo = QuestTree__GetSpotInfo(Instance, v6->fields.miSpotID, 0);
    if ( !SpotInfo )
      return;
    v8 = SpotInfo;
    Instance = (QuestTree_o *)this->fields.eventBoardGameSpotPrefab;
    if ( !Instance
      || (SrcSpotBasePrefab__mfSetQuestCount((SrcSpotBasePrefab_o *)Instance, v8->fields.questCount, 0),
          (v9 = this->fields.eventBoardGameSpotPrefab) == 0)
      || (mMapCtrl_SpotInfo = v9->fields.mMapCtrl_SpotInfo) == 0 )
    {
LABEL_14:
      sub_1C2D6EC(Instance, v5);
    }
    mMapCtrl_SpotInfo->fields._IsNext_k__BackingField = v8->fields._IsNext_k__BackingField;
  }
}


void ScrTerminalMap__UpdateEventRaidUI(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  EventMapGimmickMoveManager_o *eventMapGimmickMoveManager; // x0

  ScrTerminalMap__StartRaidAnimation(this, method);
  ScrTerminalMap__UpdateAllMovingSpotPosition(this, 1, v3);
  ScrTerminalMap__UpdateAllRaidProgressMapGimmickDisplay(this, v4);
  if ( this->fields.isRaidMap )
  {
    eventMapGimmickMoveManager = this->fields.eventMapGimmickMoveManager;
    if ( eventMapGimmickMoveManager )
      EventMapGimmickMoveManager__UpdateAllMapGimmickPosition(eventMapGimmickMoveManager, 0);
  }
  ScrTerminalMap__CheckRaidTimeLimit(this, v5);
}


void ScrTerminalMap__UpdateMapButtonBadge(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapButtonControl_o *mapButtonGrid; // x0

  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    sub_1C2D6EC(0, method);
  MapButtonControl__UpdateBadge(mapButtonGrid, this->fields.mWarInfo, this->fields.mMapInfo, 0);
}


void ScrTerminalMap__UpdateSpotGameObject(ScrTerminalMap_o *this, int32_t spotId, const MethodInfo *method)
{
  UnityEngine_Object_o *SpotGameObject; // x20
  void *Instance; // x0
  __int64 v7; // x1
  SrcSpotBasePrefab_o *Component_object; // x20
  _BYTE *v9; // x19
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4C24446 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C24446 = 1;
  }
  SpotGameObject = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(this, spotId, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Equality(SpotGameObject, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !SpotGameObject )
      goto LABEL_16;
    Component_object = (SrcSpotBasePrefab_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)SpotGameObject,
                                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Instance )
      {
        Instance = QuestTree__GetSpotInfo((QuestTree_o *)Instance, spotId, 0);
        if ( !Instance )
          return;
        if ( Component_object )
        {
          v9 = Instance;
          SrcSpotBasePrefab__mfSetQuestCount(Component_object, *((_DWORD *)Instance + 7), 0);
          mMapCtrl_SpotInfo = Component_object->fields.mMapCtrl_SpotInfo;
          if ( mMapCtrl_SpotInfo )
          {
            mMapCtrl_SpotInfo->fields._IsNext_k__BackingField = v9[44];
            return;
          }
        }
      }
LABEL_16:
      sub_1C2D6EC(Instance, v7);
    }
  }
}


void ScrTerminalMap__ViewEventBoardGameQuestListAuto(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct SrcSpotBasePrefab_o *v7; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  UnityEngine_GameObject_o *SpotGameObject; // x20
  const MethodInfo *v10; // x2
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4C24489 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24489 = 1;
  }
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(eventBoardGameSpotPrefab, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v7 = this->fields.eventBoardGameSpotPrefab;
    if ( !v7 )
      goto LABEL_21;
    mMapCtrl_SpotInfo = v7->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_21;
    SpotGameObject = ScrTerminalMap__GetSpotGameObject(this, mMapCtrl_SpotInfo->fields.spotId, v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SpotGameObject, 0, 0) )
    {
      ScrTerminalMap__smfSpotBtn_Click(this, SpotGameObject, v10);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24504 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24504 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1C2D6EC(Instance, v5);
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
}


System_Collections_IEnumerator_o *ScrTerminalMap__WaitConnecting(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap__WaitConnecting_d__249_o *v2; // x19

  if ( (byte_4C2441B & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap__WaitConnecting_d__249_TypeInfo);
    byte_4C2441B = 1;
  }
  v2 = (ScrTerminalMap__WaitConnecting_d__249_o *)sub_1C2D6DC(ScrTerminalMap__WaitConnecting_d__249_TypeInfo);
  ScrTerminalMap__WaitConnecting_d__249___ctor(v2, 0, 0);
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *ScrTerminalMap__WaitScriptLoad(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C24457 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap__WaitScriptLoad_d__316_TypeInfo);
    byte_4C24457 = 1;
  }
  v3 = sub_1C2D6DC(ScrTerminalMap__WaitScriptLoad_d__316_TypeInfo);
  ScrTerminalMap__WaitScriptLoad_d__316___ctor((ScrTerminalMap__WaitScriptLoad_d__316_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void ScrTerminalMap___AfterActionPlay_b__339_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C244CD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__AfterActionPlay_b__339_1__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C244CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrTerminalMap__AfterActionPlay_b__339_1__, 0);
  if ( !Instance )
    sub_1C2D6EC(v5, v6);
  QuestAfterAction__Play((QuestAfterAction_o *)Instance, v4, 0);
}


void ScrTerminalMap___AfterActionPlay_b__339_1(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x19
  System_Action_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  EventMapManagerInterface_c *klass; // x8
  __int64 v8; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v10; // x0

  if ( (byte_4C244CE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_EventActionPlay__);
    byte_4C244CE = 1;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrTerminalMap_EventActionPlay__, 0);
  if ( !eventMapManagerInterface_k__BackingField )
    sub_1C2D6EC(v5, v6);
  klass = eventMapManagerInterface_k__BackingField->klass;
  v8 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7];
  }
  else
  {
LABEL_8:
    v10 = sub_1C7DCA8(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 7);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, System_Action_o *, _QWORD))v10)(
    eventMapManagerInterface_k__BackingField,
    v4,
    *(_QWORD *)(v10 + 8));
}


void ScrTerminalMap___CreateMapGimmick_b__311_0(
        ScrTerminalMap_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfoControl; // x0

  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    sub_1C2D6EC(0, result);
  TitleInfoControl__UpdateEventInfo(titleInfoControl, 0, 0);
}


void ScrTerminalMap___EndBoardGamePieceEffect_b__398_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !ScrTerminalMap__TryAutoQuest(this, method) )
    ScrTerminalMap__PlayBoardGameStopPiecePanel(this, v3);
}


void ScrTerminalMap___EventScriptPlay_b__352_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrTerminalMap__EventScriptCaller(this, this->fields.eventScriptCallingIdx, v2);
}


void ScrTerminalMap___FadeOutSpotMask_b__328_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x8

  if ( this->fields.isFadingSpotmask )
  {
    spotMaskObj = this->fields.spotMaskObj;
    this->fields.isFadingSpotmask = 0;
    if ( !spotMaskObj )
      sub_1C2D6EC(this, method);
    UnityEngine_GameObject__SetActive(spotMaskObj, 0, 0);
  }
}


bool ScrTerminalMap___IsDispEventBoardGameUI_b__368_0(ScrTerminalMap_o *this, int32_t mapId, const MethodInfo *method)
{
  return this->fields.currentMapId == mapId;
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *EventBoardGameArrivalVoiceSvtIdList_k__BackingField; // x8
  SoundManager_o *v7; // x20
  System_String_o *VoiceAssetName_42560796; // x21
  System_Action_o *v9; // x22

  if ( (byte_4C244DB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_1__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C244DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  EventBoardGameArrivalVoiceSvtIdList_k__BackingField = this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
  if ( !EventBoardGameArrivalVoiceSvtIdList_k__BackingField )
    goto LABEL_7;
  if ( !LODWORD(EventBoardGameArrivalVoiceSvtIdList_k__BackingField->max_length) )
    sub_1C2D6F4(Instance, v4, v5);
  v7 = (SoundManager_o *)Instance;
  VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(
                              EventBoardGameArrivalVoiceSvtIdList_k__BackingField->m_Items[0],
                              0);
  v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_1__, 0);
  if ( !v7 )
LABEL_7:
    sub_1C2D6EC(Instance, v4);
  SoundManager__LoadAudioAssetStorage(v7, VoiceAssetName_42560796, v9, 1, 0);
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_1(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v5; // x8
  SoundManager_o *v6; // x20
  System_String_o *VoiceAssetName_42560796; // x21
  System_Action_o *v8; // x22
  AssetLoader_LoadEndDataHandler_o *v9; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4C244DC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_2__);
    sub_1C2D490(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_3__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    this = (ScrTerminalMap_o *)sub_1C2D490(&StringLiteral_5868/*"Effect/Dice"*/);
    byte_4C244DC = 1;
  }
  klass = v3[46].klass;
  if ( !klass )
    goto LABEL_13;
  if ( LODWORD(klass->_1.namespaze) <= 1 )
LABEL_14:
    sub_1C2D6F4(this, method, v2);
  if ( SHIDWORD(klass->_1.byval_arg.data) >= 1 )
  {
    this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v5 = v3[46].klass;
    if ( !v5 )
      goto LABEL_13;
    if ( LODWORD(v5->_1.namespaze) > 1 )
    {
      v6 = (SoundManager_o *)this;
      VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(HIDWORD(v5->_1.byval_arg.data), 0);
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v8, v3, Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_2__, 0);
      if ( v6 )
      {
        SoundManager__LoadAudioAssetStorage(v6, VoiceAssetName_42560796, v8, 1, 0);
        return;
      }
LABEL_13:
      sub_1C2D6EC(this, method);
    }
    goto LABEL_14;
  }
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, v3, Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_3__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5868/*"Effect/Dice"*/, v9, 1, 0);
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_2(ScrTerminalMap_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4C244DD & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_4__);
    sub_1C2D490(&StringLiteral_5868/*"Effect/Dice"*/);
    byte_4C244DD = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScrTerminalMap__LoadEventBoardGameDiceAsset_b__371_4__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5868/*"Effect/Dice"*/, v3, 1, 0);
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_3(
        ScrTerminalMap_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.boardGameDiceAssetData = effectData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.boardGameDiceAssetData, (int32_t)effectData, (int32_t)method, v3);
}


void ScrTerminalMap___LoadEventBoardGameDiceAsset_b__371_4(
        ScrTerminalMap_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.boardGameDiceAssetData = effectData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.boardGameDiceAssetData, (int32_t)effectData, (int32_t)method, v3);
}


void ScrTerminalMap___MapTouchEnableAuto_b__338_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct TerminalSceneComponent_o *v5; // x8
  struct ScrTerminalListTop_o *v6; // x8
  QuestBoardListViewManager_o *mQuestBoardListViewManager; // x20
  System_Action_o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  TerminalSceneComponent_o *v15; // x20
  AvalonSceneManager_c *v16; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  v2 = this;
  if ( (byte_4C244CC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__MapTouchEnableAuto_b__338_2__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__MapTouchEnableAuto_b__338_1__);
    this = (ScrTerminalMap_o *)sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    byte_4C244CC = 1;
  }
  terminalScene = v2->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_30;
  mTerminalList = terminalScene->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_30;
  this = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager;
  if ( !this )
    goto LABEL_30;
  QuestBoardListViewManager__SetOutPosition((QuestBoardListViewManager_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C242EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242EA = 1;
  }
  this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( SHIDWORD(this->fields.subRootGimmickP[1].monitor) >= 1 )
  {
    v5 = v2->fields.terminalScene;
    if ( !v5 )
      goto LABEL_30;
    v6 = v5->fields.mTerminalList;
    if ( !v6 )
      goto LABEL_30;
    mQuestBoardListViewManager = v6->fields.mQuestBoardListViewManager;
    this = (ScrTerminalMap_o *)ScrTerminalMap___c_TypeInfo;
    if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
      this = (ScrTerminalMap_o *)ScrTerminalMap___c_TypeInfo;
    }
    monitor = (System_Action_o *)this->fields.subRootGimmickP[1].monitor;
    if ( !monitor )
    {
      if ( !LODWORD(this->fields.pfbBaseP) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (ScrTerminalMap_o *)ScrTerminalMap___c_TypeInfo;
      }
      klass = (Il2CppObject *)this->fields.subRootGimmickP->klass;
      monitor = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(monitor, klass, Method_ScrTerminalMap___c__MapTouchEnableAuto_b__338_1__, 0);
      static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
      static_fields->__9__338_1 = monitor;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__338_1, (int32_t)monitor, v11, v12);
    }
    if ( !mQuestBoardListViewManager )
      goto LABEL_30;
    QuestBoardListViewManager__SetMode(mQuestBoardListViewManager, 0, monitor, 0, 0, 0, 0);
  }
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
    goto LABEL_30;
  if ( QuestAfterAction__IsRemainFadeCommand((QuestAfterAction_o *)this, 0) )
  {
    ScrTerminalMap__SetDisp(v2, 1, v13);
    ScrTerminalMap__AfterActionPlay(v2, v14);
    return;
  }
  v15 = v2->fields.terminalScene;
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v2, Method_ScrTerminalMap__MapTouchEnableAuto_b__338_2__, 0);
  if ( !v15 )
LABEL_30:
    sub_1C2D6EC(this, method);
  TerminalSceneComponent__Fadein_MapDisp(v15, DEFAULT_FADE_TIME, v18, 0);
}


void ScrTerminalMap___OnClickMonoplyBoard_b__384_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct MapCamera_o *mapCamera; // x8
  UnityEngine_Object_o *eventBoardGameSpotPrefab; // x20
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  struct SrcSpotBasePrefab_o *v11; // x8
  int32_t miSpotID; // w20
  TerminalPramsManager_c *v13; // x0
  bool IsMultiMap; // w0
  const MethodInfo *v15; // x2
  System_String_o *SaveKey_PlayerIcon; // x20
  TerminalPramsManager_c *v17; // x0
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x4

  if ( (byte_4C244DF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_OpenDiceSelectDialog__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244DF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__SetFadeMaskCollider(Instance, 1, 0);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_23;
  mapCamera->fields._IsTouchEnable_k__BackingField = 0;
  eventBoardGameSpotPrefab = (UnityEngine_Object_o *)this->fields.eventBoardGameSpotPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventBoardGameSpotPrefab, 0, 0) )
  {
    Instance = (CommonUI_o *)this->fields.eventBoardGameSpotPrefab;
    if ( Instance )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      this->fields.spotTouchObj = gameObject;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.spotTouchObj, (int32_t)gameObject, v8, v9);
      v11 = this->fields.eventBoardGameSpotPrefab;
      if ( v11 )
      {
        miSpotID = v11->fields.miSpotID;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C23BE6 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23BE6 = 1;
        }
        v13 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v13 = TerminalPramsManager_TypeInfo;
        }
        v13->static_fields->_SpotId_k__BackingField = miSpotID;
        ScrTerminalMap__SetPlayerIcon(this, this->fields.spotTouchObj, v10);
        Instance = (CommonUI_o *)this->fields.mWarInfo;
        if ( Instance )
        {
          IsMultiMap = MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)Instance, 0);
          SaveKey_PlayerIcon = ScrTerminalMap__GetSaveKey_PlayerIcon(this, IsMultiMap, v15);
          if ( !byte_4C23DE0 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C23DE0 = 1;
          }
          v17 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v17 = TerminalPramsManager_TypeInfo;
          }
          UnityEngine_PlayerPrefs__SetInt(SaveKey_PlayerIcon, v17->static_fields->_SpotId_k__BackingField, 0);
          goto LABEL_22;
        }
      }
    }
LABEL_23:
    sub_1C2D6EC(Instance, v4);
  }
LABEL_22:
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ScrTerminalMap_OpenDiceSelectDialog__, 0);
  ScrTerminalMap__EventBoardCameraAction(this, v18, 0, 0, v19);
}


void ScrTerminalMap___OnEndEventScripts_b__357_0(
        ScrTerminalMap_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScrTerminalMap_o *v4; // x19
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  v4 = this;
  if ( (byte_4C244D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ScrTerminalMap_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244D3 = 1;
  }
  eventScriptCallingList = v4->fields.eventScriptCallingList;
  v6 = (unsigned int)(v4->fields.eventScriptCallingIdx + 1);
  v4->fields.eventScriptCallingIdx = v6;
  if ( !eventScriptCallingList )
    goto LABEL_22;
  if ( (int)v6 < SLODWORD(eventScriptCallingList->max_length) )
  {
    ScrTerminalMap__EventScriptCaller(v4, v6, method);
    return;
  }
  v4->fields.eventScriptCallingList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.eventScriptCallingList, 0, (int32_t)method, v3);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4C23BE6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C23BE6 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SpotId_k__BackingField = -1;
  if ( !byte_4C23BE1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C23BE1 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestId_k__BackingField = -1;
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_22:
    sub_1C2D6EC(this, v6);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0, 0, 0);
}


void ScrTerminalMap___OnEveryActionEnd_b__354_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *TalkScriptInfo_k__BackingField; // x20
  TerminalPramsManager_c *v8; // x0
  struct WarEntity_o *mWarEnt; // x8
  bool v10; // w19
  TerminalSceneComponent_o *terminalScene; // x20
  System_Action_o *v12; // x21
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C244D0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_ScrTerminalMap__OnEveryActionEnd_b__354_1__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244D0 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24327 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24327 = 1;
  }
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_TalkScriptInfo_k__BackingField )
      goto LABEL_9;
LABEL_25:
    if ( !TerminalPramsManager__IsAuto(0) )
      goto LABEL_40;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23DE0 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23DE0 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    if ( v8->static_fields->_SpotId_k__BackingField > 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
      mWarEnt = this->fields.mWarEnt;
      if ( !mWarEnt || !Master_object )
        goto LABEL_73;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             Master_object,
             &entity,
             mWarEnt->fields.eventId,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
        if ( !entity )
          goto LABEL_73;
        v10 = !EventDetailEntity__IsEventCircleProgress((EventDetailEntity_o *)entity, 0);
      }
      else
      {
        v10 = 1;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23E9B )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E9B = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      if ( !v13->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
      {
        if ( !v13->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v13);
        if ( !byte_4C24508 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24508 = 1;
        }
        v14 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v14 = TerminalPramsManager_TypeInfo;
        }
        if ( !v14->static_fields->_IsDataLostBattleNoticePause_k__BackingField )
        {
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          if ( !byte_4C24313 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C24313 = 1;
          }
          v15 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v15 = TerminalPramsManager_TypeInfo;
          }
          if ( !v15->static_fields->_isIncomingCall_k__BackingField && v10 )
            goto LABEL_21;
        }
      }
    }
    else
    {
LABEL_40:
      terminalScene = this->fields.terminalScene;
      v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ScrTerminalMap__OnEveryActionEnd_b__354_1__, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C24403 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24403 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !terminalScene )
        goto LABEL_73;
      TerminalSceneComponent__CheckRewardPopupChain(
        terminalScene,
        v12,
        1,
        BYTE2(Master_object[2].fields.list[3].klass),
        0);
    }
    return;
  }
  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TalkScriptInfo_k__BackingField = TerminalPramsManager_TypeInfo->static_fields->_TalkScriptInfo_k__BackingField;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( !TalkScriptInfo_k__BackingField )
      goto LABEL_25;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !TalkScriptInfo_k__BackingField )
      goto LABEL_25;
  }
LABEL_9:
  if ( !byte_4C23E9B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E9B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4C24508 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24508 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    if ( !v4->static_fields->_IsDataLostBattleNoticePause_k__BackingField )
    {
LABEL_21:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Master_object )
      {
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Master_object, 0);
        return;
      }
LABEL_73:
      sub_1C2D6EC(Master_object, v6);
    }
  }
}


void ScrTerminalMap___OnEveryActionEnd_b__354_1(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *terminalScene; // x0
  TerminalSceneComponent_o *v4; // x20
  System_Action_o *v5; // x21
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4C244D1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__OnEveryActionEnd_b__354_2__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244D1 = 1;
  }
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene
    || (TerminalSceneComponent__PlayTutorial(terminalScene, 0), (terminalScene = this->fields.terminalScene) == 0)
    || (TerminalSceneComponent__PlayRaidTutorial(terminalScene, 0),
        v4 = this->fields.terminalScene,
        v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap__OnEveryActionEnd_b__354_2__, 0),
        !v4) )
  {
    sub_1C2D6EC(terminalScene, method);
  }
  TerminalSceneComponent__PlayEventTutorial(v4, v5, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24509 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24509 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !v6->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField )
  {
    if ( !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21ACD = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_IsAutoResume_k__BackingField = 0;
  }
}


void ScrTerminalMap___OnEveryActionEnd_b__354_2(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C244D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244D2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E9B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E9B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4C24508 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24508 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    if ( !v4->static_fields->_IsDataLostBattleNoticePause_k__BackingField )
    {
      if ( !v4->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v4);
      if ( !byte_4C24403 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24403 = 1;
      }
      v5 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = TerminalPramsManager_TypeInfo;
      }
      if ( !v5->static_fields->_IsPlayGetEffect_k__BackingField )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          sub_1C2D6EC(0, v7);
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
      }
    }
  }
  ScrTerminalMap__ChangeSceneOnActionEnd(this, method);
}


void ScrTerminalMap___OpenDiceSelectDialog_b__389_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct MapCamera_o *mapCamera; // x8
  struct MapCamera_o *v4; // x8

  v2 = this;
  if ( (byte_4C244E0 & 1) == 0 )
  {
    this = (ScrTerminalMap_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C244E0 = 1;
  }
  mapCamera = v2->fields.mapCamera;
  if ( !mapCamera
    || (this = (ScrTerminalMap_o *)mapCamera->fields.mZoom) == 0
    || (MapZoom__Stop((MapZoom_o *)this, 1, 0), (v4 = v2->fields.mapCamera) == 0)
    || (this = (ScrTerminalMap_o *)v4->fields.mScrl) == 0
    || (MapScroll__Stop((MapScroll_o *)this, 1, 0),
        (this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 0, 0);
}


void ScrTerminalMap___OpenDiceSelectDialog_b__389_1(
        ScrTerminalMap_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t id; // w21
  int32_t EventId; // w3
  const MethodInfo *v15; // x4

  if ( (byte_4C244E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C244E1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 1, 0),
        ScrTerminalMap__SetEnabledDiceButton(this, 0, v9),
        ScrTerminalMap__FrameOutUI(this, 0, v10),
        this->fields.eventBoardGameUsingItem = selectedItem,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventBoardGameUsingItem, (int32_t)selectedItem, v11, v12),
        !selectedItem)
    || (Instance = (CommonUI_o *)this->fields.mWarInfo) == 0 )
  {
    sub_1C2D6EC(Instance, v8);
  }
  id = selectedItem->fields.id;
  EventId = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)Instance, 0);
  ScrTerminalMap__RequestDiceUse(this, id, spendNum, EventId, v15);
}


void ScrTerminalMap___OpenDiceSelectDialog_b__389_2(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct MapCamera_o *mapCamera; // x8
  TerminalPramsManager_c *v4; // x0

  v2 = this;
  if ( (byte_4C244E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ScrTerminalMap_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244E2 = 1;
  }
  mapCamera = v2->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_12;
  mapCamera->fields._IsTouchEnable_k__BackingField = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SpotId_k__BackingField = -1;
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_12:
    sub_1C2D6EC(this, method);
  CommonUI__CloseEventItemListDialog((CommonUI_o *)this, 0);
}


void ScrTerminalMap___PlayBoardGameStopPiecePanel_b__399_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventBoardGameSquareIndex_k__BackingField; // w20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_4C244E3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_FrameInUI__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244E3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventBoardGameSquareIndex_k__BackingField = v3->static_fields->_EventBoardGameSquareIndex_k__BackingField;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap_FrameInUI__, 0);
  ScrTerminalMap__PlayBoardGameQuestArrivalEffect(this, EventBoardGameSquareIndex_k__BackingField, v5, 0, v6);
}


void ScrTerminalMap___PlayEventBoardGameArrivalEffectAuto_b__373_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  if ( (byte_4C244DE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15330/*"ViewEventBoardGameQuestListAuto"*/);
    byte_4C244DE = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15330/*"ViewEventBoardGameQuestListAuto"*/, 1.0, 0);
}


void ScrTerminalMap___StartDataLostBattleResetEffect_b__350_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C244CF & 1) == 0 )
  {
    sub_1C2D490(&DataLostResetManager_TypeInfo);
    byte_4C244CF = 1;
  }
  ActionExtensions__Call(this->fields.dataLostBattleResetEffectEndAct, 0);
  this->fields.dataLostBattleResetEffectEndAct = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dataLostBattleResetEffectEndAct, 0, v3, v4);
  this->fields.isPlayingDataLostBattleResetEffect = 0;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__ResetAfterInit(0);
}


void ScrTerminalMap___StartRaidAnimation_b__250_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  RaidAutoUpdateRequest__UpdateAccessTime(0);
  this->fields._IsCheckExpiration_k__BackingField = 1;
}


void ScrTerminalMap___UpdateBoardGameSquare_b__402_1(
        ScrTerminalMap_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_object__o *Index; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *gimmickList; // x20
  System_Predicate_object__o *v11; // x23
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w22
  Il2CppObject *syncRoot; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4C244E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Item__);
    sub_1C2D490(&System_Predicate_MapGimmickComponent__TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass402_0__UpdateBoardGameSquare_b__2__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass402_0_TypeInfo);
    byte_4C244E4 = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass402_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass402_0___ctor((ScrTerminalMap___c__DisplayClass402_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = x;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)x, v8, v9);
  gimmickList = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
  v11 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapGimmickComponent__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass402_0__UpdateBoardGameSquare_b__2__,
    0);
  if ( !gimmickList )
    goto LABEL_19;
  Index = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindIndex(
                                                         gimmickList,
                                                         (System_Predicate_T__o *)v11,
                                                         (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapGimmickComponent__FindIndex__);
  v13 = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
  if ( (_DWORD)Index != -1 )
  {
    if ( v13 )
    {
      v14 = (int)Index;
      Index = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this->fields.gimmickList,
                                                             (int32_t)Index,
                                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MapGimmickComponent__get_Item__);
      if ( Index )
      {
        syncRoot = Index[2].fields._syncRoot;
        if ( syncRoot )
        {
          if ( LODWORD(syncRoot[1].klass) )
            return;
          Index = (System_Collections_Generic_List_object__o *)this->fields.gimmickList;
          if ( Index )
          {
            Index = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   Index,
                                                                   v14,
                                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MapGimmickComponent__get_Item__);
            if ( Index )
            {
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)Index, 1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C2D6EC(Index, v7);
  }
  Index = (System_Collections_Generic_List_object__o *)ScrTerminalMap__CreateMapGimmick(
                                                         this,
                                                         *(MapControl_MapGimmickInfo_o **)(v5 + 16),
                                                         0,
                                                         v12);
  if ( !v13 )
    goto LABEL_19;
  items = v13->fields._items;
  v19 = Method_System_Collections_Generic_List_MapGimmickComponent__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v13->fields._size;
  v21 = Index;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)Index,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = size + 1;
    v22 = &items->obj.klass + size;
    v22[4] = (Il2CppClass *)v21;
    sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
  }
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalSceneComponent_o *terminalScene; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C244D4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_1__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244D4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E9D )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E9D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
  terminalScene = this->fields.terminalScene;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_1__, 0);
  if ( !terminalScene )
    sub_1C2D6EC(v6, v7);
  TerminalSceneComponent__CheckRewardPopupChain(terminalScene, v5, 1, 0, 0);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_1(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventID; // w0
  const MethodInfo *v5; // x1
  int32_t v6; // w20
  MissionNotifyManager_o *Master_object; // x0
  __int64 v8; // x1
  TitleInfoControl_o *titleInfoControl; // x21
  System_Action_o *v10; // x22
  TitleInfoControl_o *v11; // x20
  System_Action_o *v12; // x21
  struct TerminalSceneComponent_o *terminalScene; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  System_Action_o *v15; // x21
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x2
  TitleInfoControl_o *v18; // x21
  System_Action_o *v19; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C244D5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&EventInfoUIProgressControl_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_2__);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_3__);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_4__);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_5__);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_6__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244D5 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventID = WarMaster__getEventID(v3->static_fields->_WarId_k__BackingField, 0);
  if ( EventID <= 0 )
    goto LABEL_47;
  v6 = EventID;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MissionNotifyManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_49;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         v6,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsEventUiCushion((EventDetailEntity_o *)entity, 0) )
    {
      Master_object = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Master_object )
      {
        MissionNotifyManager__StartPause(Master_object, 0);
        titleInfoControl = this->fields.titleInfoControl;
        v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_2__, 0);
        if ( titleInfoControl )
        {
          TitleInfoControl__StartEventUICushionAnimation(titleInfoControl, v6, 1, v10, 0);
          return;
        }
      }
LABEL_49:
      sub_1C2D6EC(Master_object, v8);
    }
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsSpotCooltime((EventDetailEntity_o *)entity, 0) )
      goto LABEL_27;
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsEventCommandAssist((EventDetailEntity_o *)entity, 0) )
      goto LABEL_27;
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsEventCircleProgress((EventDetailEntity_o *)entity, 0) )
      goto LABEL_27;
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)entity, 0) )
    {
LABEL_27:
      Master_object = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_49;
      MissionNotifyManager__StartPause(Master_object, 0);
      Master_object = (MissionNotifyManager_o *)this->fields.terminalScene;
      if ( !Master_object )
        goto LABEL_49;
      TerminalSceneComponent__SetActionBGColl((TerminalSceneComponent_o *)Master_object, 1, 0, 0);
      v11 = this->fields.titleInfoControl;
      v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_3__, 0);
      if ( !v11 )
        goto LABEL_49;
      TitleInfoControl__StartEventUIAnimation(v11, 1, v12, 0);
      return;
    }
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)entity, 0) )
    {
      Master_object = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_49;
      MissionNotifyManager__StartPause(Master_object, 0);
      terminalScene = this->fields.terminalScene;
      if ( !terminalScene )
        goto LABEL_49;
      mTerminalList = terminalScene->fields.mTerminalList;
      v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_4__, 0);
      if ( !mTerminalList )
        goto LABEL_49;
      ScrTerminalListTop__CheckIncomingCall(mTerminalList, v15, 0);
      return;
    }
    if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    if ( EventInfoUIProgressControl__IsDispEventProgress(v6, 0) )
    {
      Master_object = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_49;
      MissionNotifyManager__StartPause(Master_object, 0);
      Master_object = (MissionNotifyManager_o *)this->fields.terminalScene;
      if ( !Master_object )
        goto LABEL_49;
      TerminalSceneComponent__SetActionBGColl((TerminalSceneComponent_o *)Master_object, 1, 0, 0);
      v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_5__, 0);
      ScrTerminalMap__PlayEventProgressEffect(this, v16, v17);
      return;
    }
    Master_object = (MissionNotifyManager_o *)entity;
    if ( !entity )
      goto LABEL_49;
    if ( EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)entity, 0) )
    {
      v18 = this->fields.titleInfoControl;
      v19 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_6__, 0);
      if ( !v18 )
        goto LABEL_49;
      TitleInfoControl__ShowEventInfoReleaseCraftItemDialog(v18, v6, v19, 0);
      return;
    }
LABEL_47:
    ScrTerminalMap__OnMapTouchDisableFinished(this, v5);
  }
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_2(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C244D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C244D6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v5);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_3(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *terminalScene; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C244D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C244D7 = 1;
  }
  terminalScene = this->fields.terminalScene;
  if ( !terminalScene
    || (TerminalSceneComponent__SetActionBGColl(terminalScene, 0, 0, 0),
        (terminalScene = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(terminalScene, method);
  }
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)terminalScene, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v4);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_4(ScrTerminalMap_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C244D8 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C244D8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v5);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_5(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C244D9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C244D9 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__CancelPause(Instance, 0),
        (Instance = (MissionNotifyManager_o *)this->fields.terminalScene) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  TerminalSceneComponent__SetActionBGColl((TerminalSceneComponent_o *)Instance, 0, 0, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v5);
}


void ScrTerminalMap___mcbfMapTouchDisable_b__359_6(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap___c_c *v3; // x0
  TerminalSceneComponent_o *terminalScene; // x20
  System_Action_o *_9__359_7; // x21
  Il2CppObject *v6; // x22
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  if ( (byte_4C244DA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__mcbfMapTouchDisable_b__359_7__);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    byte_4C244DA = 1;
  }
  v3 = ScrTerminalMap___c_TypeInfo;
  terminalScene = this->fields.terminalScene;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v3 = ScrTerminalMap___c_TypeInfo;
  }
  _9__359_7 = v3->static_fields->__9__359_7;
  if ( !_9__359_7 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ScrTerminalMap___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__359_7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(_9__359_7, v6, Method_ScrTerminalMap___c__mcbfMapTouchDisable_b__359_7__, 0);
    static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
    static_fields->__9__359_7 = _9__359_7;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__359_7, (int32_t)_9__359_7, v8, v9);
  }
  if ( !terminalScene )
    sub_1C2D6EC(v3, method);
  TerminalSceneComponent__CheckOpenCampaignDirectBonus(terminalScene, _9__359_7, 0);
  ScrTerminalMap__OnMapTouchDisableFinished(this, v10);
}


void ScrTerminalMap___mcbfMapTouchEnable_b__337_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C244CB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244CB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E91 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E91 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsQuestClear_k__BackingField = 0;
  if ( !byte_4C23E92 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23E92 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPhaseClear_k__BackingField = 0;
  ScrTerminalMap__EventActionPlay(this, method);
}


void ScrTerminalMap___mcbfMapTouchEnable_b__337_1(ScrTerminalMap_o *this, const MethodInfo *method)
{
  if ( (byte_4C244CA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8915/*"MapTouchEnableAuto"*/);
    byte_4C244CA = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_8915/*"MapTouchEnableAuto"*/, 1.0, 0);
}


void ScrTerminalMap___mcbfSpotMaskStart_b__319_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfoControl; // x0

  if ( (byte_4C244C9 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C244C9 = 1;
  }
  ScrTerminalMap__SpotMaskStart_FadeEnd(this, method);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(102, 0) )
  {
    titleInfoControl = this->fields.titleInfoControl;
    if ( !titleInfoControl )
      sub_1C2D6EC(0, v3);
    TitleInfoControl__setBackBtnColliderEnable(titleInfoControl, 1, 0);
  }
}


void ScrTerminalMap___mcbfWhiteOut_b__318_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4C244C8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C244C8 = 1;
  }
  ScrTerminalMap__DestroyMapObjs(this, method);
  ScrTerminalMap__InitTitleInfo(this, v3);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, v4);
}


void ScrTerminalMap___smfMap2d_SpotMarkCreate_b__288_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4C244C7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19105/*"evMap2D_Mark_Create_Finish"*/);
    byte_4C244C7 = 1;
  }
  ScrTerminalMap__SetupEventBoardGame(this, method);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_19105/*"evMap2D_Mark_Create_Finish"*/, v3);
}


void ScrTerminalMap___smfSetMapChange_b__269_0(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  ScrTerminalMap_o *v6; // x0
  const MethodInfo *v7; // x2
  System_String_o *AssetName; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C244C4 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__smfSetMapChange_b__269_1__);
    byte_4C244C4 = 1;
  }
  ScrTerminalMap__SetupFeildConfiguration(this, method);
  currentAssetId = this->fields.currentAssetId;
  v6 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v3, v4, v5);
  AssetName = ScrTerminalMap__GetAssetName(v6, (Il2CppObject *)v6, v7);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_ScrTerminalMap__smfSetMapChange_b__269_1__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v9, 1, 0);
}


void ScrTerminalMap___smfSetMapChange_b__269_1(
        ScrTerminalMap_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  MapControl_WarInfo_o *mWarInfo; // x0
  ScrTerminalMap_o *v10; // x0
  const MethodInfo *v11; // x3
  System_String_o *AssetMultiMapName; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  AssetData_o *mapAssetData; // x20
  ScrTerminalMap_o *v15; // x0
  const MethodInfo *v16; // x2
  System_String_o *AssetAtlasName; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x2
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C244C5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_LoadEventMap__);
    sub_1C2D490(&Method_ScrTerminalMap__smfSetMapChange_b__269_2__);
    byte_4C244C5 = 1;
  }
  this->fields.mapAssetData = assetData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapAssetData, (int32_t)assetData, (int32_t)method, v3);
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo || !MapControl_WarInfo__IsMultiMap(mWarInfo, 0) )
    goto LABEL_8;
  currentAssetId = this->fields.currentAssetId;
  v10 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v6, v7, v8);
  AssetMultiMapName = ScrTerminalMap__GetAssetMultiMapName(v10, (Il2CppObject *)v10, this->fields.mMapEnt, v11);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_ScrTerminalMap__smfSetMapChange_b__269_2__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetMultiMapName, v13, 1, 0) )
  {
LABEL_8:
    mapAssetData = this->fields.mapAssetData;
    v23 = this->fields.currentAssetId;
    v15 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v6, v7, v8);
    AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v15, (Il2CppObject *)v15, v16);
    ScrTerminalMap__LoadAssetsAtlases(this, mapAssetData, AssetAtlasName, v18);
    ScrTerminalMap__LoadMapEffectPrefab(this, this->fields.mapAssetData, v19);
    ScrTerminalMap__LoadEventMapObject(this, this->fields.mapAssetData, v20);
    v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ScrTerminalMap_LoadEventMap__, 0);
    ScrTerminalMap__LoadMapImgTex(this, v21, v22);
  }
}


void ScrTerminalMap___smfSetMapChange_b__269_2(
        ScrTerminalMap_o *this,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *mapAssetData; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  ScrTerminalMap_o *v10; // x0
  const MethodInfo *v11; // x2
  System_String_o *AssetAtlasName; // x0
  const MethodInfo *v13; // x3
  AssetData_o *mapMultiAssetData; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ScrTerminalMap_o *v18; // x0
  const MethodInfo *v19; // x3
  System_String_o *MultiMapAssetAtlasName; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C244C6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_LoadEventMap__);
    byte_4C244C6 = 1;
  }
  this->fields.mapMultiAssetData = multiAssetData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapMultiAssetData, (int32_t)multiAssetData, (int32_t)method, v3);
  mapAssetData = this->fields.mapAssetData;
  currentAssetId = this->fields.currentAssetId;
  v10 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v7, v8, v9);
  AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v10, (Il2CppObject *)v10, v11);
  ScrTerminalMap__LoadAssetsAtlases(this, mapAssetData, AssetAtlasName, v13);
  mapMultiAssetData = this->fields.mapMultiAssetData;
  v26 = this->fields.currentAssetId;
  v18 = (ScrTerminalMap_o *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v15, v16, v17);
  MultiMapAssetAtlasName = ScrTerminalMap__GetMultiMapAssetAtlasName(
                             v18,
                             (Il2CppObject *)v18,
                             this->fields.mMapEnt,
                             v19);
  ScrTerminalMap__LoadAssetsAtlases(this, mapMultiAssetData, MultiMapAssetAtlasName, v21);
  ScrTerminalMap__LoadMapEffectPrefab(this, this->fields.mapAssetData, v22);
  ScrTerminalMap__LoadEventMapObject(this, this->fields.mapAssetData, v23);
  v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ScrTerminalMap_LoadEventMap__, 0);
  ScrTerminalMap__LoadMapImgTex(this, v24, v25);
}


void ScrTerminalMap__afterFadeInMapDisp(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapButtonControl_o *mapButtonGrid; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C24458 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C24458 = 1;
  }
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    sub_1C2D6EC(0, method);
  MapButtonControl__FrameIn(mapButtonGrid, 0);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, v4);
}


void ScrTerminalMap__eventInfoAssetLoad(ScrTerminalMap_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  MapControl_WarInfo_o *mWarInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  AssetLoader_LoadEndDataHandler_o *v14; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2442E & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass270_0__eventInfoAssetLoad_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass270_0_TypeInfo);
    sub_1C2D490(&StringLiteral_13682/*"Terminal/Info"*/);
    byte_4C2442E = 1;
  }
  entity = 0;
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass270_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass270_0___ctor((ScrTerminalMap___c__DisplayClass270_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_15;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (Il2CppObject *)MapControl_WarInfo__GetEventId(mWarInfo, 0);
  if ( !v13 )
    goto LABEL_15;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v13,
                               &entity,
                               (int32_t)Instance,
                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
LABEL_15:
    sub_1C2D6EC(Instance, v7);
  if ( HIDWORD(entity[9].klass) != 6 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
LABEL_10:
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_ScrTerminalMap___c__DisplayClass270_0__eventInfoAssetLoad_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13682/*"Terminal/Info"*/, v14, 1, 0);
}


UnityEngine_GameObject_o *ScrTerminalMap__getDispRoot(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.dispRoot;
}


AssetData_o *ScrTerminalMap__getMapInfoAssetData(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mapInfoAssetData;
}


AssetData_o *ScrTerminalMap__getMapInfoEffectAssetData(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mapInfoEffectAssetData;
}


int32_t ScrTerminalMap__get_AssetId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.currentAssetId;
}


int32_t ScrTerminalMap__get_BeforeClearQuestIdForAction(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._BeforeClearQuestIdForAction_k__BackingField;
}


float ScrTerminalMap__get_Camera2DResetDuration(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapEntity_o *mMapEnt; // x0
  BalanceConfig_c *v5; // x0

  if ( (byte_4C2440B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2440B = 1;
  }
  mMapEnt = this->fields.mMapEnt;
  if ( mMapEnt )
    return MapEntity__get_Camera2DResetDuration(mMapEnt, 0);
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v5->static_fields->Camera2DResetDuration;
}


UnityEngine_GameObject_o *ScrTerminalMap__get_EventBoardDiceButtonEffectObj(
        ScrTerminalMap_o *this,
        const MethodInfo *method)
{
  return this->fields._EventBoardDiceButtonEffectObj_k__BackingField;
}


System_Collections_Generic_Dictionary_string__object__o *ScrTerminalMap__get_EventBoardDiceVoiceInfo(
        ScrTerminalMap_o *this,
        const MethodInfo *method)
{
  return this->fields._EventBoardDiceVoiceInfo_k__BackingField;
}


System_Int32_array *ScrTerminalMap__get_EventBoardGameArrivalVoiceSvtIdList(
        ScrTerminalMap_o *this,
        const MethodInfo *method)
{
  return this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField;
}


UnityEngine_GameObject_o *ScrTerminalMap__get_EventBoardGameObj(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._EventBoardGameObj_k__BackingField;
}


UnityEngine_GameObject_o *ScrTerminalMap__get_EventBoardPieceObj(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._EventBoardPieceObj_k__BackingField;
}


UnityEngine_GameObject_o *ScrTerminalMap__get_EventBoardQuestArrivalPanelObj(
        ScrTerminalMap_o *this,
        const MethodInfo *method)
{
  return this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
}


System_Collections_Generic_List_QuestReleaseEntity__o *ScrTerminalMap__get_EventBoardQuestReleaseList(
        ScrTerminalMap_o *this,
        const MethodInfo *method)
{
  return this->fields._EventBoardQuestReleaseList_k__BackingField;
}


UnityEngine_GameObject_o *ScrTerminalMap__get_EventBoardStopPanelObj(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._EventBoardStopPanelObj_k__BackingField;
}


bool ScrTerminalMap__get_IsCheckExpiration(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._IsCheckExpiration_k__BackingField;
}


bool ScrTerminalMap__get_IsRaidMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.isRaidMap;
}


int32_t ScrTerminalMap__get_MapCameraMoveEasingType(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapEntity_o *mMapEnt; // x0
  BalanceConfig_c *v5; // x0

  if ( (byte_4C2440A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2440A = 1;
  }
  mMapEnt = this->fields.mMapEnt;
  if ( mMapEnt )
    return MapEntity__get_MapCameraMoveEasingType(mMapEnt, 0);
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v5->static_fields->MapCameraMoveEasingType;
}


float ScrTerminalMap__get_MapCameraMoveTimeCoefficient(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapEntity_o *mMapEnt; // x0
  BalanceConfig_c *v5; // x0

  if ( (byte_4C24408 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C24408 = 1;
  }
  mMapEnt = this->fields.mMapEnt;
  if ( mMapEnt )
    return MapEntity__get_MapCameraMoveTimeCoefficient(mMapEnt, 0);
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v5->static_fields->MapCameraMoveTimeCoefficient;
}


float ScrTerminalMap__get_MapCameraMoveTimeConstant(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapEntity_o *mMapEnt; // x0
  BalanceConfig_c *v5; // x0

  if ( (byte_4C24407 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C24407 = 1;
  }
  mMapEnt = this->fields.mMapEnt;
  if ( mMapEnt )
    return MapEntity__get_MapCameraMoveTimeConstant(mMapEnt, 0);
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v5->static_fields->MapCameraMoveTimeConstant;
}


int32_t ScrTerminalMap__get_MapCameraMoveTimeLogarithmBase(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapEntity_o *mMapEnt; // x0
  BalanceConfig_c *v5; // x0

  if ( (byte_4C24409 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C24409 = 1;
  }
  mMapEnt = this->fields.mMapEnt;
  if ( mMapEnt )
    return MapEntity__get_MapCameraMoveTimeLogarithmBase(mMapEnt, 0);
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return v5->static_fields->MapCameraMoveTimeLogarithmBase;
}


int32_t ScrTerminalMap__get_MapId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.currentMapId;
}


int32_t ScrTerminalMap__get_MapLayerId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.currentMapLayerId;
}


int32_t ScrTerminalMap__get_MapUIState(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._MapUIState_k__BackingField;
}


UnityEngine_GameObject_o *ScrTerminalMap__get_SubRootGimmickP(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.subRootGimmickP;
}


int32_t ScrTerminalMap__get_WarId(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.currentWarId;
}


int32_t ScrTerminalMap__get_currentMapImageH(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._currentMapImageH_k__BackingField;
}


int32_t ScrTerminalMap__get_currentMapImageW(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._currentMapImageW_k__BackingField;
}


UnityEngine_Texture2D_o *ScrTerminalMap__get_currentMapTexture(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields._currentMapTexture_k__BackingField;
}


EventMapManagerInterface_o *ScrTerminalMap__get_eventMapManagerInterface(
        ScrTerminalMap_o *this,
        const MethodInfo *method)
{
  return this->fields._eventMapManagerInterface_k__BackingField;
}


SubmarineMapManager_o *ScrTerminalMap__get_submarineEventMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C24406 & 1) == 0 )
  {
    sub_1C2D490(&SubmarineMapManager_TypeInfo);
    byte_4C24406 = 1;
  }
  eventMapManagerInterface_k__BackingField = this->fields._eventMapManagerInterface_k__BackingField;
  if ( !eventMapManagerInterface_k__BackingField )
    return 0;
  naturalAligment = SubmarineMapManager_TypeInfo->_2.naturalAligment;
  if ( eventMapManagerInterface_k__BackingField->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (SubmarineMapManager_c *)eventMapManagerInterface_k__BackingField->klass->_2.typeHierarchy[naturalAligment - 1] == SubmarineMapManager_TypeInfo )
    return (SubmarineMapManager_o *)this->fields._eventMapManagerInterface_k__BackingField;
  return 0;
}


void ScrTerminalMap__mcbfCheckSceneStatus(ScrTerminalMap_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x2
  TerminalPramsManager_c *v7; // x0
  int32_t meSceneStatus; // w8
  __int64 *v9; // x8
  TerminalPramsManager_c *v10; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C244BB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5740/*"EV_SCENE_STATUS_RESUME_FROM_SCRIPT"*/);
    sub_1C2D490(&StringLiteral_5738/*"EV_SCENE_STATUS_INIT"*/);
    sub_1C2D490(&StringLiteral_5739/*"EV_SCENE_STATUS_RESUME"*/);
    byte_4C244BB = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_33:
    sub_1C2D6EC(Instance, v4);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL),
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    goto LABEL_23;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_33;
  if ( WarEntity__IsFolder((WarEntity_o *)entity, 0) )
    goto LABEL_23;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C242EC )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242EC = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  meSceneStatus = v7->static_fields->meSceneStatus;
  if ( meSceneStatus != 2 )
  {
    if ( meSceneStatus == 3 )
    {
      v9 = &StringLiteral_5740/*"EV_SCENE_STATUS_RESUME_FROM_SCRIPT"*/;
      goto LABEL_31;
    }
LABEL_23:
    ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_5738/*"EV_SCENE_STATUS_INIT"*/, v6);
    return;
  }
  if ( !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  if ( !byte_4C23E9D )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E9D = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
  v9 = &StringLiteral_5739/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_31:
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)*v9, v6);
  Instance = (DataManager_o *)this->fields.titleInfoControl;
  if ( !Instance )
    goto LABEL_33;
  TitleInfoControl__setHeaderBgImg((TitleInfoControl_o *)Instance, this->fields.currentWarId, 0);
}


void ScrTerminalMap__mcbfMapTouchDisable(ScrTerminalMap_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_o *terminalScene; // x20
  AvalonSceneManager_c *v5; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  TerminalSceneComponent_o *v8; // x0
  __int64 v9; // x8
  ScrTerminalListTop_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4C2447B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_OnMapTouchDisableFinished__);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_0__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C2447B = 1;
  }
  ScrTerminalMap__SetupFeildConfiguration(this, method);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsAuto(0) )
  {
    terminalScene = this->fields.terminalScene;
    v5 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v5 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
    v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchDisable_b__359_0__, 0);
    if ( terminalScene )
    {
      TerminalSceneComponent__Fadein_MapDisp(terminalScene, DEFAULT_FADE_TIME, v7, 0);
      goto LABEL_19;
    }
LABEL_21:
    sub_1C2D6EC(v8, v3);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v8 = (TerminalSceneComponent_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = (TerminalSceneComponent_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = **(_QWORD **)&v8->fields.TUTORIAL_MENU_ARROW_POS2;
  if ( !v9 )
    goto LABEL_21;
  v10 = *(ScrTerminalListTop_o **)(v9 + 256);
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrTerminalMap_OnMapTouchDisableFinished__, 0);
  if ( !v10 )
    goto LABEL_21;
  ScrTerminalListTop__CheckIncomingCall(v10, v11, 0);
LABEL_19:
  v8 = this->fields.terminalScene;
  if ( !v8 )
    goto LABEL_21;
  TerminalSceneComponent__PlayRaidTutorial(v8, 0);
}


void ScrTerminalMap__mcbfMapTouchEnable(ScrTerminalMap_o *this, const MethodInfo *method)
{
  DataManager_o *IsAuto; // x0
  const MethodInfo *v4; // x1
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w21
  TerminalPramsManager_c *v7; // x0
  Il2CppObject *MasterData_object; // x21
  struct WarEntity_o *v9; // x8
  int32_t m_CancellationTokenSource_high; // w23
  TerminalPramsManager_c *v11; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v13; // x22
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *v16; // x21
  System_Action_o *v17; // x22
  TerminalPramsManager_c *v18; // x0

  if ( (byte_4C24466 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchEnable_b__337_0__);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfMapTouchEnable_b__337_1__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C24466 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(102, 0) )
    MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsAuto = (DataManager_o *)TerminalPramsManager__IsAuto(0);
  if ( ((unsigned __int8)IsAuto & 1) != 0 )
  {
    mWarEnt = this->fields.mWarEnt;
    if ( !mWarEnt )
      goto LABEL_67;
    eventId = mWarEnt->fields.eventId;
    if ( !eventId )
      goto LABEL_65;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244F1 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244F1 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    if ( eventId != v7->static_fields->_TimeStatusEventId_k__BackingField )
      goto LABEL_65;
    IsAuto = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsAuto )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          IsAuto,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    IsAuto = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsAuto = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v9 = this->fields.mWarEnt;
    if ( !v9 )
      goto LABEL_67;
    if ( !MasterData_object )
      goto LABEL_67;
    IsAuto = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                (UserEventMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)&IsAuto[1].fields._DispLog + 64LL),
                                v9->fields.eventId,
                                0);
    if ( !IsAuto )
      goto LABEL_67;
    m_CancellationTokenSource_high = HIDWORD(IsAuto->fields.m_CancellationTokenSource);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244F2 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244F2 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    if ( m_CancellationTokenSource_high <= v11->static_fields->_TimeStatusLoopCount_k__BackingField )
    {
LABEL_65:
      ScrTerminalMap__MapTouchEnableAuto(this, v4);
      return;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchEnable_b__337_1__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.5, v13, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C24325 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24325 = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      v14->static_fields->_TimeStatusLoopCount_k__BackingField = m_CancellationTokenSource_high;
      TerminalPramsManager__EventStatusSave_SaveData(0);
      return;
    }
LABEL_67:
    sub_1C2D6EC(IsAuto, v4);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE6 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_SpotId_k__BackingField = -1;
  if ( !byte_4C244F3 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4C244F3 = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( !v15->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField )
  {
    ScrTerminalMap__EventActionPlay(this, v4);
    return;
  }
  IsAuto = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !IsAuto )
    goto LABEL_67;
  QuestAfterAction__Init((QuestAfterAction_o *)IsAuto, 0);
  IsAuto = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !IsAuto )
    goto LABEL_67;
  QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)IsAuto, 0, 0);
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfMapTouchEnable_b__337_0__, 0);
  if ( !v16 )
    goto LABEL_67;
  QuestAfterAction__Play((QuestAfterAction_o *)v16, v17, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F4 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F4 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(0);
}


void ScrTerminalMap__mcbfSpotMaskEnd(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x0
  struct TerminalSceneComponent_o *terminalScene; // x8
  _BOOL4 isFadingSpotmask; // w20
  const MethodInfo *v6; // x1
  SpotLargeComponent_o *spotLargeComponent; // x20
  System_Action_o *v8; // x21
  struct TerminalSceneComponent_o *v9; // x8

  if ( (byte_4C2445D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfSpotMaskEnd_b__323_0__);
    byte_4C2445D = 1;
  }
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj )
    goto LABEL_15;
  spotMaskObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(spotMaskObj, 0);
  if ( ((unsigned __int8)spotMaskObj & 1) != 0 )
  {
    terminalScene = this->fields.terminalScene;
    if ( !terminalScene )
      goto LABEL_15;
    spotMaskObj = (UnityEngine_GameObject_o *)terminalScene->fields.mTerminalList;
    if ( !spotMaskObj )
      goto LABEL_15;
    isFadingSpotmask = this->fields.isFadingSpotmask;
    ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)spotMaskObj, 0, 0);
    spotMaskObj = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
    if ( !spotMaskObj )
      goto LABEL_15;
    MapButtonControl__FrameIn((MapButtonControl_o *)spotMaskObj, 0);
    if ( !isFadingSpotmask )
    {
      GameObjectExtensions__SafeGetComponent_object_(
        this->fields.spotMaskObj,
        (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
      TweenAlpha__Begin(this->fields.spotMaskObj, 0.25, 0.0, 0);
      spotLargeComponent = this->fields.spotLargeComponent;
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfSpotMaskEnd_b__323_0__, 0);
      if ( spotLargeComponent )
      {
        SpotLargeComponent__LargeOut(spotLargeComponent, v8, 0);
        return;
      }
LABEL_15:
      sub_1C2D6EC(spotMaskObj, method);
    }
  }
  else
  {
    v9 = this->fields.terminalScene;
    if ( !v9 )
      goto LABEL_15;
    spotMaskObj = (UnityEngine_GameObject_o *)v9->fields.mTerminalList;
    if ( !spotMaskObj )
      goto LABEL_15;
    ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)spotMaskObj, 0, 0);
  }
  ScrTerminalMap__SpotMaskEnd_FadeEnd(this, v6);
}


void ScrTerminalMap__mcbfSpotMaskStart(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *spotMaskObj; // x0
  bool IsMapModel; // w20
  const MethodInfo *v5; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  SpotLargeComponent_o *spotLargeComponent; // x21
  struct MapModelManager_o *mapModelManager; // x8
  MapModelCamera_o *MapModelCamera_k__BackingField; // x24
  MapCamera_o *mapCamera; // x23
  SrcSpotBasePrefab_o *v14; // x22
  System_Action_o *v15; // x25
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2445A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfSpotMaskStart_b__319_0__);
    byte_4C2445A = 1;
  }
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf(spotMaskObj, 0) )
  {
    ScrTerminalMap__SpotMaskStart_FadeEnd(this, method);
    return;
  }
  spotMaskObj = (UnityEngine_GameObject_o *)this->fields.mapButtonGrid;
  if ( !spotMaskObj )
    goto LABEL_18;
  MapButtonControl__FrameOut((MapButtonControl_o *)spotMaskObj, 0);
  spotMaskObj = this->fields.spotMaskObj;
  if ( !spotMaskObj )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(spotMaskObj, 1, 0);
  GameObjectExtensions__SafeGetComponent_object_(
    this->fields.spotMaskObj,
    (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  TweenAlpha__Begin(this->fields.spotMaskObj, 0.25, 1.0, 0);
  spotMaskObj = (UnityEngine_GameObject_o *)this->fields.mapModelManager;
  if ( !spotMaskObj )
    goto LABEL_18;
  IsMapModel = MapModelManager__get_IsMapModel((MapModelManager_o *)spotMaskObj, 0);
  if ( IsMapModel )
  {
    Position = GameObjectExtensions__GetPosition(this->fields.spotTouchObj, 0);
    v17 = ScrTerminalMap__ConvertWorldToScreenPosition(this, Position, v5);
    x = v17.fields.x;
    y = v17.fields.y;
    z = v17.fields.z;
  }
  else
  {
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  spotMaskObj = this->fields.spotTouchObj;
  if ( !spotMaskObj )
    goto LABEL_18;
  spotLargeComponent = this->fields.spotLargeComponent;
  spotMaskObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              spotMaskObj,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
  mapModelManager = this->fields.mapModelManager;
  if ( !mapModelManager
    || (MapModelCamera_k__BackingField = mapModelManager->fields._MapModelCamera_k__BackingField,
        mapCamera = this->fields.mapCamera,
        v14 = (SrcSpotBasePrefab_o *)spotMaskObj,
        v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfSpotMaskStart_b__319_0__, 0),
        !spotLargeComponent) )
  {
LABEL_18:
    sub_1C2D6EC(spotMaskObj, method);
  }
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  SpotLargeComponent__LargeIn(
    spotLargeComponent,
    v14,
    mapCamera,
    MapModelCamera_k__BackingField,
    v15,
    IsMapModel,
    v18,
    0);
}


void ScrTerminalMap__mcbfWhiteIn_ToMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapButtonControl_o *mapButtonGrid; // x0
  struct WarEntity_o *mWarEnt; // x8
  struct EventScriptEntity_array *Available; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct EventScriptEntity_array *eventScriptCallingList; // x8
  TerminalPramsManager_c *v9; // x0
  System_String_o *v10; // x21
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct TerminalSceneComponent_o *v12; // x23
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *MasterData_object; // x21
  QuestPhaseEntity_array *List; // x21
  Il2CppObject *v18; // x22
  ConstantStrMaster_o *v19; // x23
  float RateValue; // s0
  float v21; // s10
  struct MapCamera_o *mapCamera; // x8
  float x; // s8
  float y; // s9
  struct MapCamera_o *v25; // x8
  __int64 v26; // x2
  Il2CppClass *klass; // x8
  ScrTerminalListTop_o *v28; // x22
  const MethodInfo *v29; // x1
  System_Collections_IEnumerator_o *v30; // x0
  struct TerminalSceneComponent_o *v31; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct TerminalSceneComponent_o *v33; // x8
  struct ScrTerminalListTop_o *v34; // x8
  System_String_o *v35; // x20
  struct TerminalSceneComponent_o *v36; // x20
  int32_t v37; // w22
  System_Action_o *v38; // x21
  float v39; // s0
  TerminalSceneComponent_o *v40; // x0
  struct TerminalSceneComponent_o *v41; // x20
  AvalonSceneManager_c *v42; // x0
  float DEFAULT_FADE_TIME; // s8
  const MethodInfo *v44; // x2
  int32_t fadeTime; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *fadeType; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector2_o v47; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o ValueVector3; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24456 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_ScrTerminalMap_afterFadeInMapDisp__);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    sub_1C2D490(&StringLiteral_5529/*"EVENT_BOARD_GAME_MAP_POSITION"*/);
    byte_4C24456 = 1;
  }
  fadeType = 0;
  fadeTime = 0;
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_132;
  MapButtonControl__CreateMapButtons(
    mapButtonGrid,
    this->fields.mWarInfo,
    this->fields.mMapInfo,
    this->fields.assetsAtlases,
    this,
    this->fields.mapAssetData,
    0);
  mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mapButtonGrid )
    goto LABEL_132;
  mapButtonGrid = (MapButtonControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)mapButtonGrid,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventScriptMaster___);
  mWarEnt = this->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_132;
  if ( !mapButtonGrid )
    goto LABEL_132;
  Available = EventScriptMaster__GetAvailable((EventScriptMaster_o *)mapButtonGrid, mWarEnt->fields.eventId, 0);
  this->fields.eventScriptCallingList = Available;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventScriptCallingList, (int32_t)Available, v6, v7);
  eventScriptCallingList = this->fields.eventScriptCallingList;
  if ( !eventScriptCallingList )
    goto LABEL_132;
  v9 = TerminalPramsManager_TypeInfo;
  if ( eventScriptCallingList->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE6 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE6 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SpotId_k__BackingField = -1;
  }
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9);
  mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager__IsAuto(0);
  if ( ((unsigned __int8)mapButtonGrid & 1) != 0 )
  {
    if ( this->fields.isFirstFade )
    {
      mapButtonGrid = (MapButtonControl_o *)this->fields.mMapEnt;
      if ( !mapButtonGrid )
        goto LABEL_132;
      if ( MapEntity__GetFirstFadeInfo((MapEntity_o *)mapButtonGrid, &fadeType, &fadeTime, 0) )
      {
        v10 = fadeType;
        mapButtonGrid = (MapButtonControl_o *)ScrTerminalMap_TypeInfo;
        if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        if ( !v10 )
          goto LABEL_132;
        mapButtonGrid = (MapButtonControl_o *)System_String__Equals_63493168(
                                                v10,
                                                ScrTerminalMap_TypeInfo->static_fields->FIRST_FADE_TYPE_DURATION,
                                                0);
        if ( ((unsigned __int8)mapButtonGrid & 1) != 0 )
        {
          terminalScene = this->fields.terminalScene;
          if ( !terminalScene )
            goto LABEL_132;
          terminalScene->fields._FirstFadeTime_k__BackingField = (float)fadeTime / 1000.0;
        }
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244EB )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244EB = 1;
    }
    mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE1(mapButtonGrid[1].fields.buttons->m_Items[16]) )
    {
      if ( !LODWORD(mapButtonGrid[2].fields.m_CachedPtr) )
        j_il2cpp_runtime_class_init_0(mapButtonGrid);
      if ( !byte_4C244EC )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C244EC = 1;
      }
      mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( *((float *)&mapButtonGrid[1].fields.buttons->m_Items[16] + 1) != 0.0 )
      {
        v12 = this->fields.terminalScene;
        if ( !LODWORD(mapButtonGrid[2].fields.m_CachedPtr) )
          j_il2cpp_runtime_class_init_0(mapButtonGrid);
        if ( !byte_4C244EC )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C244EC = 1;
        }
        mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v12 )
          goto LABEL_132;
        v12->fields._FirstFadeTime_k__BackingField = *((float *)&mapButtonGrid[1].fields.buttons->m_Items[16] + 1);
        if ( !byte_4C244ED )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
          byte_4C244ED = 1;
        }
        if ( !LODWORD(mapButtonGrid[2].fields.m_CachedPtr) )
        {
          j_il2cpp_runtime_class_init_0(mapButtonGrid);
          mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
        }
        BYTE1(mapButtonGrid[1].fields.buttons->m_Items[16]) = 0;
        if ( !byte_4C244EE )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
          byte_4C244EE = 1;
        }
        if ( !LODWORD(mapButtonGrid[2].fields.m_CachedPtr) )
        {
          j_il2cpp_runtime_class_init_0(mapButtonGrid);
          mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
        }
        HIDWORD(mapButtonGrid[1].fields.buttons->m_Items[16]) = 0;
      }
    }
    if ( !LODWORD(mapButtonGrid[2].fields.m_CachedPtr) )
      j_il2cpp_runtime_class_init_0(mapButtonGrid);
    if ( !byte_4C24327 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24327 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    if ( v13->static_fields->_TalkScriptInfo_k__BackingField )
    {
      if ( !v13->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v13);
      if ( !byte_4C24326 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24326 = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      if ( v14->static_fields->_QuestMessageScriptQuestId_k__BackingField >= 1 )
      {
        if ( !v14->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v14);
        if ( !byte_4C244EF )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C244EF = 1;
        }
        v15 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v15 = TerminalPramsManager_TypeInfo;
        }
        if ( (v15->static_fields->_QuestMessageScriptQuestPhase_k__BackingField & 0x80000000) == 0 )
        {
          mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( mapButtonGrid )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)mapButtonGrid,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C24326 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C24326 = 1;
            }
            mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
            }
            if ( MasterData_object )
            {
              List = QuestPhaseMaster__getList(
                       (QuestPhaseMaster_o *)MasterData_object,
                       (int32_t)mapButtonGrid[1].fields.buttons->m_Items[88],
                       0);
              mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( mapButtonGrid )
              {
                v18 = DataManager__GetMasterData_object_(
                        (DataManager_o *)mapButtonGrid,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantMaster___);
                mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( mapButtonGrid )
                {
                  mapButtonGrid = (MapButtonControl_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)mapButtonGrid,
                                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
                  if ( v18 )
                  {
                    v19 = (ConstantStrMaster_o *)mapButtonGrid;
                    RateValue = ConstantMaster__GetRateValue(
                                  (ConstantMaster_o *)v18,
                                  (System_String_o *)StringLiteral_5529/*"EVENT_BOARD_GAME_MAP_POSITION"*/,
                                  1.8,
                                  0);
                    if ( v19 )
                    {
                      v21 = RateValue;
                      ValueVector3 = ConstantStrMaster__GetValueVector3(v19, (System_String_o *)StringLiteral_5529/*"EVENT_BOARD_GAME_MAP_POSITION"*/, 0);
                      mapCamera = this->fields.mapCamera;
                      if ( mapCamera )
                      {
                        mapButtonGrid = (MapButtonControl_o *)mapCamera->fields.mZoom;
                        if ( mapButtonGrid )
                        {
                          x = ValueVector3.fields.x;
                          y = ValueVector3.fields.y;
                          MapZoom__SetZoomSize((MapZoom_o *)mapButtonGrid, v21, 0, 0, 0);
                          v25 = this->fields.mapCamera;
                          if ( v25 )
                          {
                            mapButtonGrid = (MapButtonControl_o *)v25->fields.mScrl;
                            if ( mapButtonGrid )
                            {
                              v47.fields.x = x;
                              v47.fields.y = y;
                              MapScroll__SetScrlPos((MapScroll_o *)mapButtonGrid, v47, 0);
                              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                              if ( !byte_4C21383 )
                              {
                                sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                                byte_4C21383 = 1;
                              }
                              mapButtonGrid = (MapButtonControl_o *)TerminalSceneComponent_TypeInfo;
                              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                                mapButtonGrid = (MapButtonControl_o *)TerminalSceneComponent_TypeInfo;
                              }
                              klass = mapButtonGrid[1].fields.buttons->obj.klass;
                              if ( klass )
                              {
                                v28 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
                                if ( !byte_4C244EF )
                                {
                                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                                  byte_4C244EF = 1;
                                }
                                mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
                                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                  mapButtonGrid = (MapButtonControl_o *)TerminalPramsManager_TypeInfo;
                                }
                                if ( List )
                                {
                                  if ( !LODWORD(List->max_length) )
                                    sub_1C2D6F4(mapButtonGrid, method, v26);
                                  if ( v28 )
                                  {
                                    ScrTerminalListTop__ResumeQuestScriptWithMap(
                                      v28,
                                      HIDWORD(mapButtonGrid[1].fields.buttons->m_Items[88]),
                                      List->m_Items[0],
                                      0);
                                    v30 = ScrTerminalMap__WaitScriptLoad(this, v29);
                                    UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                                      (UnityEngine_MonoBehaviour_o *)this,
                                      v30,
                                      0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_132:
          sub_1C2D6EC(mapButtonGrid, method);
        }
      }
    }
    mapButtonGrid = this->fields.mapButtonGrid;
    if ( !mapButtonGrid )
      goto LABEL_132;
    MapButtonControl__FrameIn(mapButtonGrid, 0);
    ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, v44);
  }
  else
  {
    v31 = this->fields.terminalScene;
    if ( !v31 )
      goto LABEL_132;
    mTerminalList = v31->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_132;
    mapButtonGrid = (MapButtonControl_o *)mTerminalList->fields.mQuestBoardListViewManager;
    if ( !mapButtonGrid )
      goto LABEL_132;
    QuestBoardListViewManager__SetOutPosition((QuestBoardListViewManager_o *)mapButtonGrid, 0);
    v33 = this->fields.terminalScene;
    if ( !v33 )
      goto LABEL_132;
    v34 = v33->fields.mTerminalList;
    if ( !v34 )
      goto LABEL_132;
    mapButtonGrid = (MapButtonControl_o *)v34->fields.mQuestBoardListViewManager;
    if ( !mapButtonGrid )
      goto LABEL_132;
    QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)mapButtonGrid, 0, 0, 0, 0, 0, 0);
    if ( !this->fields.isFirstFade )
      goto LABEL_125;
    mapButtonGrid = (MapButtonControl_o *)this->fields.mMapEnt;
    if ( !mapButtonGrid )
      goto LABEL_132;
    if ( !MapEntity__GetFirstFadeInfo((MapEntity_o *)mapButtonGrid, &fadeType, &fadeTime, 0) )
      goto LABEL_125;
    v35 = fadeType;
    mapButtonGrid = (MapButtonControl_o *)ScrTerminalMap_TypeInfo;
    if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    if ( !v35 )
      goto LABEL_132;
    if ( System_String__Equals_63493168(v35, ScrTerminalMap_TypeInfo->static_fields->FIRST_FADE_TYPE_DURATION, 0) )
    {
      v36 = this->fields.terminalScene;
      v37 = fadeTime;
      v38 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v38, (Il2CppObject *)this, Method_ScrTerminalMap_afterFadeInMapDisp__, 0);
      if ( !v36 )
        goto LABEL_132;
      v39 = (float)v37 / 1000.0;
      v40 = v36;
    }
    else
    {
LABEL_125:
      v41 = this->fields.terminalScene;
      v42 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v42 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v42->static_fields->DEFAULT_FADE_TIME;
      v38 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v38, (Il2CppObject *)this, Method_ScrTerminalMap_afterFadeInMapDisp__, 0);
      if ( !v41 )
        goto LABEL_132;
      v40 = v41;
      v39 = DEFAULT_FADE_TIME;
    }
    TerminalSceneComponent__Fadein_MapDisp(v40, v39, v38, 0);
  }
}


void ScrTerminalMap__mcbfWhiteOut(ScrTerminalMap_o *this, const MethodInfo *method)
{
  MapButtonControl_o *mapButtonGrid; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21

  if ( (byte_4C24459 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfWhiteOut_b__318_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C24459 = 1;
  }
  mapButtonGrid = this->fields.mapButtonGrid;
  if ( !mapButtonGrid )
    goto LABEL_8;
  MapButtonControl__FrameOut(mapButtonGrid, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrTerminalMap__mcbfWhiteOut_b__318_0__, 0);
  if ( !v6 )
LABEL_8:
    sub_1C2D6EC(mapButtonGrid, method);
  CommonUI__maskFadeout(v6, 2, DEFAULT_FADE_TIME, v8, 0);
}


void ScrTerminalMap__mcbfWhiteOut_ToMap(ScrTerminalMap_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  void *Instance; // x0
  const MethodInfo *v5; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o **p_mWarInfo; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct WarEntity_o *Mine; // x0
  struct WarEntity_o **p_mWarEnt; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct MapControl_MapInfo_o **p_mMapInfo; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  MapControl_WarInfo_o *v17; // x23
  MapControl_MapInfo_o *Map; // x0
  const MethodInfo *v19; // x1
  MapControl_MapInfo_o *v20; // x22
  System_String_o *SaveKey_BaseMap; // x23
  const MethodInfo *v22; // x1
  int32_t Int_71121948; // w0
  struct MapControl_MapInfo_o *v24; // x23
  System_String_o *v25; // x0
  MapControl_MapInfo_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  MapControl_WarInfo_o *v29; // x22
  int32_t v30; // w24
  MapControl_MapInfo_o *ActionMap; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *SaveKey_PlayerMap; // x0
  System_String_o *v38; // x22
  MapControl_MapInfo_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int32_t currentWarId; // w21
  int32_t mapId; // w22
  System_String_o *SaveKey_PlayerIcon; // x0
  struct MapControl_MapInfo_o *v47; // x8
  struct MapEntity_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct TerminalSceneComponent_o *terminalScene; // x8
  TitleInfoControl_o *titleInfoControl; // x20
  MapEntity_o *mMapEnt; // x21
  int32_t BeforeClearQuestIdForAction_k__BackingField; // w22
  TerminalSceneComponent_o *v55; // x20
  TerminalSceneComponent_PlayChapterStartCallback_o *v56; // x21

  if ( (byte_4C24454 & 1) == 0 )
  {
    sub_1C2D490(&TerminalSceneComponent_PlayChapterStartCallback_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__mcbfWhiteOut_ToMap_b__313_0__);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24454 = 1;
  }
  *(_WORD *)&this->fields.isFirstFade = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  this->fields.currentWarId = v3->static_fields->_WarId_k__BackingField;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, this->fields.currentWarId, 0);
  p_mWarInfo = &this->fields.mWarInfo;
  this->fields.mWarInfo = WarInfoByWarID;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mWarInfo, (int32_t)WarInfoByWarID, v8, v9);
  Instance = this->fields.mWarInfo;
  if ( !Instance )
    goto LABEL_64;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0);
  p_mWarEnt = &this->fields.mWarEnt;
  this->fields.mWarEnt = Mine;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mWarEnt, (int32_t)Mine, v12, v13);
  p_mMapInfo = &this->fields.mMapInfo;
  this->fields.mMapInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapInfo, 0, v15, v16);
  Instance = this->fields.mWarInfo;
  if ( !Instance )
    goto LABEL_64;
  Instance = (void *)MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)Instance, 0);
  v17 = *p_mWarInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = *p_mWarEnt;
    if ( *p_mWarEnt )
    {
      Instance = (void *)WarEntity__GetBaseMap((WarEntity_o *)Instance, 0);
      if ( v17 )
      {
        Map = MapControl_WarInfo__GetMap(v17, (int32_t)Instance, 0);
        if ( Map )
        {
          v20 = Map;
          SaveKey_BaseMap = ScrTerminalMap__GetSaveKey_BaseMap(this, v19);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !TerminalPramsManager__IsAuto(0)
            || !UnityEngine_PlayerPrefs__HasKey(SaveKey_BaseMap, 0)
            || (Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(SaveKey_BaseMap, 0),
                v24 = 0,
                Int_71121948 != v20->fields.mapId) )
          {
            v25 = ScrTerminalMap__GetSaveKey_BaseMap(this, v22);
            UnityEngine_PlayerPrefs__SetInt(v25, v20->fields.mapId, 0);
            v24 = v20;
          }
        }
        else
        {
          v24 = 0;
        }
        v29 = *p_mWarInfo;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( Instance )
        {
          v30 = *((_DWORD *)Instance + 51);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( Instance )
          {
            if ( v29 )
            {
              ActionMap = MapControl_WarInfo__GetActionMap(v29, v30, *((_DWORD *)Instance + 52), 0);
              *p_mMapInfo = ActionMap;
              sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)ActionMap, v32, v33);
              if ( !*p_mMapInfo )
              {
                *p_mMapInfo = v24;
                sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)v24, v35, v36);
              }
              SaveKey_PlayerMap = ScrTerminalMap__GetSaveKey_PlayerMap(this, v34);
              v38 = SaveKey_PlayerMap;
              if ( !this->fields.mMapInfo )
              {
                if ( UnityEngine_PlayerPrefs__HasKey(SaveKey_PlayerMap, 0) )
                  v5 = (const MethodInfo *)(unsigned int)UnityEngine_PlayerPrefs__GetInt_71121948(v38, 0);
                else
                  v5 = 0;
                Instance = *p_mWarInfo;
                if ( !*p_mWarInfo )
                  goto LABEL_64;
                v39 = MapControl_WarInfo__GetMap((MapControl_WarInfo_o *)Instance, (int32_t)v5, 0);
                *p_mMapInfo = v39;
                sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)v39, v40, v41);
              }
              if ( !UnityEngine_PlayerPrefs__HasKey(v38, 0) )
                goto LABEL_43;
              Instance = this->fields.mapModelManager;
              if ( !Instance )
                goto LABEL_64;
              Instance = (void *)MapModelManager__get_IsMapModel((MapModelManager_o *)Instance, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                mMapInfo = this->fields.mMapInfo;
                if ( !mMapInfo )
                  goto LABEL_64;
                currentWarId = this->fields.currentWarId;
                mapId = mMapInfo->fields.mapId;
                if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
                SaveKey_PlayerIcon = ScrTerminalMap__CreateSaveKey_PlayerIcon(currentWarId, mapId, v42);
                if ( !UnityEngine_PlayerPrefs__HasKey(SaveKey_PlayerIcon, 0) )
LABEL_43:
                  this->fields.isFirstMap = 1;
              }
              Instance = ScrTerminalMap__GetSaveKey_PlayerMap(this, v5);
              v47 = this->fields.mMapInfo;
              if ( v47 )
              {
                UnityEngine_PlayerPrefs__SetInt((System_String_o *)Instance, v47->fields.mapId, 0);
                goto LABEL_46;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_1C2D6EC(Instance, v5);
  }
  if ( !v17 )
    goto LABEL_64;
  v26 = MapControl_WarInfo__GetMap(*p_mWarInfo, 0, 0);
  *p_mMapInfo = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)v26, v27, v28);
LABEL_46:
  Instance = *p_mMapInfo;
  if ( !*p_mMapInfo )
    goto LABEL_64;
  this->fields.currentMapId = *((_DWORD *)Instance + 5);
  v48 = MapControl_MapInfo__GetMine((MapControl_MapInfo_o *)Instance, 0);
  this->fields.mMapEnt = v48;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapEnt, (int32_t)v48, v49, v50);
  terminalScene = this->fields.terminalScene;
  this->fields.requestedMapId = -1;
  if ( !terminalScene )
    goto LABEL_64;
  Instance = terminalScene->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_64;
  ScrTerminalListTop__SwitchDispBlankEarthObj((ScrTerminalListTop_o *)Instance, 0, 0);
  Instance = this->fields.titleInfoControl;
  if ( !Instance )
    goto LABEL_64;
  TitleInfoControl__setHeaderBgImg((TitleInfoControl_o *)Instance, this->fields.currentWarId, 0);
  titleInfoControl = this->fields.titleInfoControl;
  mMapEnt = this->fields.mMapEnt;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
    BeforeClearQuestIdForAction_k__BackingField = this->fields._BeforeClearQuestIdForAction_k__BackingField;
  else
    BeforeClearQuestIdForAction_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21463 = 1;
  }
  Instance = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = TerminalPramsManager_TypeInfo;
  }
  if ( !mMapEnt )
    goto LABEL_64;
  Instance = (void *)MapEntity__GetPrioredHeaderId(
                       mMapEnt,
                       BeforeClearQuestIdForAction_k__BackingField,
                       *(_DWORD *)(*((_QWORD *)Instance + 23) + 24LL) + 1,
                       0);
  if ( !titleInfoControl )
    goto LABEL_64;
  TitleInfoControl__setTitleImgFromBanner(titleInfoControl, (int32_t)Instance, 1, 1, 0, 0);
  v55 = this->fields.terminalScene;
  v56 = (TerminalSceneComponent_PlayChapterStartCallback_o *)sub_1C2D6DC(TerminalSceneComponent_PlayChapterStartCallback_TypeInfo);
  TerminalSceneComponent_PlayChapterStartCallback___ctor(
    v56,
    (Il2CppObject *)this,
    Method_ScrTerminalMap__mcbfWhiteOut_ToMap_b__313_0__,
    0);
  if ( !v55 )
    goto LABEL_64;
  TerminalSceneComponent__PlayChapterStart(v55, v56, 0);
}


void ScrTerminalMap__mcbfWhiteOut_ToMap_End(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C24455 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C24455 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E9A )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E9A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->meSceneStatus = 0;
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, v2);
}


void ScrTerminalMap__mfCallFsmEvent(ScrTerminalMap_o *this, System_String_o *fsmEventName, const MethodInfo *method)
{
  UnityEngine_Object_o *MyFsmP; // x20
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v7; // x1

  if ( (byte_4C244B6 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244B6 = 1;
  }
  MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP(this, (const MethodInfo *)fsmEventName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Fsm = (HutongGames_PlayMaker_Fsm_o *)UnityEngine_Object__op_Equality(MyFsmP, 0, 0);
  if ( ((unsigned __int8)Fsm & 1) == 0 )
  {
    if ( !MyFsmP || (Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)MyFsmP, 0)) == 0 )
      sub_1C2D6EC(Fsm, v7);
    HutongGames_PlayMaker_Fsm__Event_66280936(Fsm, fsmEventName, 0);
  }
}


int32_t ScrTerminalMap__mfGetFsmValueInt(ScrTerminalMap_o *this, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *MyFsmP; // x20
  HutongGames_PlayMaker_FsmVariables_o *Fsm; // x0
  __int64 v7; // x1

  if ( (byte_4C244B8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244B8 = 1;
  }
  MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP(this, (const MethodInfo *)name);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Fsm = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Equality(MyFsmP, 0, 0);
  if ( ((unsigned __int8)Fsm & 1) != 0 )
    return 0;
  if ( !MyFsmP
    || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)MyFsmP, 0)) == 0
    || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)Fsm->fields.gameObjectVariables) == 0
    || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(Fsm, name, 0)) == 0 )
  {
    sub_1C2D6EC(Fsm, v7);
  }
  return HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Fsm, 0);
}


MapEntity_o *ScrTerminalMap__mfGetMapEnt(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mMapEnt;
}


MapControl_MapInfo_o *ScrTerminalMap__mfGetMapInfo(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mMapInfo;
}


PlayMakerFSM_o *ScrTerminalMap__mfGetMyFsmP(ScrTerminalMap_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFsm; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C244B5 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244B5 = 1;
  }
  targetFsm = (UnityEngine_Object_o *)this->fields.targetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0, targetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.targetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetFsm, (int32_t)Component_object, v5, v6);
  }
  return this->fields.targetFsm;
}


WarEntity_o *ScrTerminalMap__mfGetWarEnt(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mWarEnt;
}


MapControl_WarInfo_o *ScrTerminalMap__mfGetWarInfo(ScrTerminalMap_o *this, const MethodInfo *method)
{
  return this->fields.mWarInfo;
}


void ScrTerminalMap__mfMap2d_Create_LineBySpotID(
        ScrTerminalMap_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  int32_t v8; // w24
  _DWORD *v9; // x21
  Il2CppObject *Entity; // x23
  Il2CppObject *v11; // x0
  Il2CppObject *pfbLineP; // x22
  Il2CppObject *v13; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v18; // x8
  float v19; // s13
  float v20; // s14
  float w; // s11
  float v22; // s12
  Il2CppObject *v23; // x22
  Il2CppObject *Component_object; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  float v27; // s0
  float mapImageOffsetX; // s0
  float mapImageOffsetY; // s1
  float currentMapImageH_k__BackingField; // s2
  float v31; // s6
  float v32; // s4
  float v33; // s5
  System_String_o *OverwriteMapAssetId; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  bool IsNullOrEmpty; // w25
  ScrTerminalMap_c *v39; // x8
  System_String_o *ASSETS_NAME_SPOT_ROAD; // x24
  System_Int32_c *v41; // x0
  int *v42; // x1
  Il2CppObject *v43; // x0
  System_String_o *v44; // x21
  UIAtlas_o *UIAtlasBySpriteName; // x0
  float v46; // s0
  int v47; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t currentAssetId; // [xsp+8h] [xbp-88h] BYREF
  int v49; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector2_o v50; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v51; // 0:s2.4,4:s3.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v53; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C24451 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_srcLineSprite___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081720);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24451 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !spotRoadInfo )
    goto LABEL_32;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = MapControl_SpotRoadInfo__GetMine(spotRoadInfo, 0);
  if ( !Master_object || !v7 )
    goto LABEL_32;
  v8 = *((_DWORD *)Master_object + 7);
  v9 = Master_object;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v7,
             *((_DWORD *)Master_object + 6),
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v11 = DataMasterBase_object__object__int___GetEntity(
          v7,
          v8,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  pfbLineP = (Il2CppObject *)this->fields.pfbLineP;
  v13 = v11;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4C20DA7 )
  {
    sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
    byte_4C20DA7 = 1;
  }
  v18 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v20 = v18->identityQuaternion.fields.x;
  v19 = v18->identityQuaternion.fields.y;
  v22 = v18->identityQuaternion.fields.z;
  w = v18->identityQuaternion.fields.w;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v52.fields.x = x;
  v52.fields.y = y;
  v52.fields.z = z;
  v53.fields.x = v20;
  v53.fields.y = v19;
  v53.fields.z = v22;
  v53.fields.w = w;
  v23 = UnityEngine_Object__Instantiate_object__51752724(
          pfbLineP,
          v52,
          v53,
          (const MethodInfo_315AF14 *)Method_UnityEngine_Object_Instantiate_GameObject____78081720);
  Master_object = srcLineSprite__GetGobjName(v9[4], 0);
  if ( !v23 )
    goto LABEL_32;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v23, (System_String_o *)Master_object, 0);
  GameObjectExtensions__SetParent_35924212((UnityEngine_GameObject_o *)v23, this->fields.rootRoadP, 0);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v23, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v23,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_srcLineSprite___);
  Master_object = (void *)UnityEngine_Object__op_Inequality(0, (UnityEngine_Object_o *)Component_object, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !Component_object )
    goto LABEL_32;
  Component_object[8].klass = (Il2CppClass *)spotRoadInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&Component_object[8], (int32_t)spotRoadInfo, v25, v26);
  v27 = 1.0;
  if ( !spotRoadInfo->fields.dispType )
    v27 = 0.0;
  srcLineSprite__mfSetITweenSize((srcLineSprite_o *)Component_object, v27, v27, 0.0, 0);
  if ( !Entity )
    goto LABEL_32;
  if ( !v13 )
    goto LABEL_32;
  mapImageOffsetX = this->fields.mapImageOffsetX;
  mapImageOffsetY = this->fields.mapImageOffsetY;
  currentMapImageH_k__BackingField = (float)this->fields._currentMapImageH_k__BackingField;
  v31 = (float)SHIDWORD(v13[2].monitor) - mapImageOffsetX;
  v32 = (float)(currentMapImageH_k__BackingField - (float)SLODWORD(Entity[3].klass)) - mapImageOffsetY;
  v50.fields.x = (float)((float)SHIDWORD(Entity[2].monitor) - mapImageOffsetX) + 0.0;
  v33 = (float)(currentMapImageH_k__BackingField - (float)SLODWORD(v13[3].klass)) - mapImageOffsetY;
  v51.fields.x = v31 + 0.0;
  v50.fields.y = v32 + 0.0;
  v51.fields.y = v33 + 0.0;
  srcLineSprite__mfSetPos2((srcLineSprite_o *)Component_object, v50, v51, 0);
  Master_object = this->fields.mMapInfo;
  if ( !Master_object || (Master_object = MapControl_MapInfo__GetMine((MapControl_MapInfo_o *)Master_object, 0)) == 0 )
LABEL_32:
    sub_1C2D6EC(Master_object, v6);
  OverwriteMapAssetId = MapEntity__GetOverwriteMapAssetId((MapEntity_o *)Master_object, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(OverwriteMapAssetId, 0);
  v39 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v39 = ScrTerminalMap_TypeInfo;
  }
  ASSETS_NAME_SPOT_ROAD = v39->static_fields->ASSETS_NAME_SPOT_ROAD;
  if ( IsNullOrEmpty )
  {
    currentAssetId = this->fields.currentAssetId;
    OverwriteMapAssetId = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v35, v36, v37);
    v41 = int_TypeInfo;
    v42 = &v47;
    v47 = v9[9];
  }
  else
  {
    v42 = &v49;
    v49 = v9[9];
    v41 = int_TypeInfo;
  }
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(v41, v42, v35, v36, v37);
  v44 = System_String__Format_63499156(ASSETS_NAME_SPOT_ROAD, (Il2CppObject *)OverwriteMapAssetId, v43, 0);
  UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(this->fields.assetsAtlases, v44, 0);
  srcLineSprite__mfSetAtlas((srcLineSprite_o *)Component_object, UIAtlasBySpriteName, v44, 0);
  v46 = 1.0;
  if ( spotRoadInfo->fields.dispType == 2 )
    v46 = 0.5;
  srcLineSprite__SetContrast((srcLineSprite_o *)Component_object, v46, 0);
}


Custom2dSplineMesh_o *ScrTerminalMap__mfMap2d_Create_PathByMapGimmickId(
        ScrTerminalMap_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  Custom2dSplineMesh_o *result; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  UnityEngine_Object_o *MapGimmickPathBaseObject; // x20
  bool v9; // w8
  Il2CppObject *v10; // x0
  UnityEngine_GameObject_o *rootPathP; // x1
  UnityEngine_GameObject_o *v12; // x19
  Il2CppObject *Component_object; // x19
  bool v14; // w8

  if ( (byte_4C2444D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Custom2dSplineMesh___);
    sub_1C2D490(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2444D = 1;
  }
  SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (Custom2dSplineMesh_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !result )
    goto LABEL_19;
  result = (Custom2dSplineMesh_o *)MapGimmickPathMaster__GetMapGimmickPathEntity(
                                     (MapGimmickPathMaster_o *)result,
                                     mapGimmickId,
                                     0);
  if ( result )
  {
    MapGimmickPathBaseObject = (UnityEngine_Object_o *)ScrTerminalMap__GetMapGimmickPathBaseObject(
                                                         (ScrTerminalMap_o *)result,
                                                         (MapGimmickPathEntity_o *)result,
                                                         this->fields.mapAssetData,
                                                         this->fields.mapMultiAssetData,
                                                         v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality(MapGimmickPathBaseObject, 0, 0);
    result = 0;
    if ( !v9 )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__Instantiate_object_(
              (Il2CppObject *)MapGimmickPathBaseObject,
              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      rootPathP = this->fields.rootPathP;
      v12 = (UnityEngine_GameObject_o *)v10;
      GameObjectExtensions__SetParent_35924212((UnityEngine_GameObject_o *)v10, rootPathP, 0);
      GameObjectExtensions__ResetLocalScale(v12, 0);
      GameObjectExtensions__ResetLocalPosition(v12, 0);
      if ( v12 )
      {
        result = (Custom2dSplineMesh_o *)UnityEngine_GameObject__get_transform(v12, 0);
        if ( result )
        {
          result = (Custom2dSplineMesh_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)result, 0, 0);
          if ( result )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)result,
                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Custom2dSplineMesh___);
            v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
            result = 0;
            if ( v14 )
              return result;
            if ( Component_object )
            {
              Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Component_object, 0.0, 0);
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Component_object, 0);
              return (Custom2dSplineMesh_o *)Component_object;
            }
          }
        }
      }
LABEL_19:
      sub_1C2D6EC(result, v6);
    }
  }
  return result;
}


Custom2dSplineMesh_o *ScrTerminalMap__mfMap2d_Create_PathBySpotId(
        ScrTerminalMap_o *this,
        int32_t spotId,
        UnityEngine_GameObject_o **pathLength,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x4
  UnityEngine_Object_o *SpotPathBaseObject; // x22
  bool v15; // w8
  Custom2dSplineMesh_o *result; // x0
  Il2CppObject *v17; // x22
  Il2CppObject *Component_object; // x22
  bool v19; // w8
  SpotAddMaster_o *v20; // x24
  float v21; // s0
  float v22; // s8
  Il2CppObject *v23; // x21
  int monitor; // w8
  float GoalRate; // s0
  const MethodInfo *v26; // x2
  float v27; // s0
  int64_t v28; // x1
  UnityEngine_GameObject_o *PathLengthObject; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t klass; // w19
  int32_t monitor_high; // w20
  int32_t data; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2444C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Custom2dSplineMesh___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C2D490(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
    sub_1C2D490(&EventSpotMoveManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2444C = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  *pathLength = 0;
  sub_1C2D434((CGThumbnailListItem_o *)pathLength, 0, v8, v9);
  entity = 0;
  if ( !Instance )
    goto LABEL_47;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotPathMaster___);
  if ( !MasterData_object )
    goto LABEL_47;
  v12 = DataMasterBase_object__object__int___TryGetEntity(
          MasterData_object,
          &entity,
          spotId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  if ( !v12 )
    return 0;
  SpotPathBaseObject = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotPathBaseObject(
                                                 (ScrTerminalMap_o *)v12,
                                                 (SpotPathEntity_o *)entity,
                                                 this->fields.mapAssetData,
                                                 this->fields.mapMultiAssetData,
                                                 v13);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Equality(SpotPathBaseObject, 0, 0);
  result = 0;
  if ( !v15 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)SpotPathBaseObject,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SetParent_35924212((UnityEngine_GameObject_o *)v17, this->fields.rootPathP, 0);
    GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v17, 0);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v17, 0);
    if ( !v17 )
      goto LABEL_47;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)v17,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_47;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__GetChild(
                                                                        (UnityEngine_Transform_o *)MasterData_object,
                                                                        0,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_47;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)MasterData_object,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Custom2dSplineMesh___);
    v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( !v19 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( MasterData_object )
      {
        v20 = (SpotAddMaster_o *)MasterData_object;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SpotAddMaster__HasPrioredData(
                                                                            (SpotAddMaster_o *)MasterData_object,
                                                                            2,
                                                                            spotId,
                                                                            &data,
                                                                            0);
        if ( (unsigned int)data <= 0x3E8 && ((unsigned __int8)MasterData_object & 1) != 0 )
        {
          if ( Component_object )
          {
            v21 = (float)data / 1000.0;
LABEL_45:
            Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Component_object, v21, 0);
LABEL_46:
            Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Component_object, 0);
            return (Custom2dSplineMesh_o *)Component_object;
          }
        }
        else
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SpotAddMaster__HasPrioredData(
                                                                              v20,
                                                                              3,
                                                                              spotId,
                                                                              &data,
                                                                              0);
          v22 = 2.0;
          if ( (unsigned int)data <= 0x3E8 && ((unsigned __int8)MasterData_object & 1) != 0 )
            v22 = (float)data / 1000.0;
          v23 = entity;
          if ( entity )
          {
            monitor = (int)entity[1].monitor;
            if ( monitor == 2 )
            {
              monitor_high = HIDWORD(entity[1].monitor);
              klass = (int32_t)entity[2].klass;
              if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
              v21 = EventSpotMoveManager__CalcSpotPathRate(monitor_high, klass, (SpotPathEntity_o *)v23, 0);
              if ( Component_object )
                goto LABEL_45;
            }
            else if ( monitor == 1 )
            {
              MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceMaster___);
              if ( entity && MasterData_object )
              {
                GoalRate = EventRaceMaster__GetGoalRate(
                             (EventRaceMaster_o *)MasterData_object,
                             SHIDWORD(entity[1].monitor) / 100,
                             SHIDWORD(entity[1].monitor) % 100,
                             (int32_t)entity[2].klass,
                             0);
                if ( v22 >= GoalRate )
                  v22 = GoalRate;
                if ( Component_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Component_object, v22, 0);
                  if ( entity )
                  {
                    v27 = (float)(1.0 - v22) * (float)(__int64)entity[2].monitor;
                    if ( v27 > 0.0 )
                    {
                      if ( v27 == INFINITY )
                        v28 = 0x8000000000000000LL;
                      else
                        v28 = (__int64)v27;
                      PathLengthObject = ScrTerminalMap__CreatePathLengthObject(this, v28, v26);
                      *pathLength = PathLengthObject;
                      sub_1C2D434((CGThumbnailListItem_o *)pathLength, (int32_t)PathLengthObject, v30, v31);
                    }
                    goto LABEL_46;
                  }
                }
              }
            }
            else if ( Component_object )
            {
              v21 = 0.0;
              goto LABEL_45;
            }
          }
        }
      }
LABEL_47:
      sub_1C2D6EC(MasterData_object, v11);
    }
  }
  return result;
}


SrcSpotBasePrefab_o *ScrTerminalMap__mfMap2d_Create_SpotBySpotInfo(
        ScrTerminalMap_o *this,
        int32_t spotId,
        bool isMapModel,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w25
  int32_t v10; // w24
  _DWORD *v11; // x21
  SpotEntity_o *v12; // x23
  Il2CppObject *Component_object; // x26
  const MethodInfo *v14; // x3
  Custom2dSplineMesh_o *v15; // x27
  __int64 v16; // x28
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *pfbBaseP; // x26
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v24; // x8
  float v25; // s13
  float v26; // s14
  float w; // s11
  float v28; // s12
  Il2CppObject *v29; // x0
  int32_t id; // w29
  UnityEngine_Object_o *v31; // x26
  __int64 v32; // x8
  MapEntity_o *mMapEnt; // x0
  struct UnityEngine_Vector3_StaticFields *v34; // x8
  float v35; // s8
  float v36; // s9
  float v37; // s10
  float SpotScale; // s0
  struct UnityEngine_Vector3_StaticFields *v39; // x8
  ScrTerminalMap_c *v40; // x0
  int32_t v41; // w29
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct MapModelManager_o *mapModelManager; // x8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x27
  struct MapModelManager_o *v46; // x8
  struct MapModelCamera_o *v47; // x8
  UnityEngine_Object_o *cameraInstance; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v50; // x27
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_String_o *Name; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  float v58; // s0
  struct MapModelManager_o *v59; // x8
  struct MapModelCamera_o *v60; // x1
  struct UnityEngine_GameObject_o *subRootEffectP; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  float v64; // s0
  bool IsTutorialActive; // w0
  int32_t ofsY[2]; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_GameObject_o *pathLength; // [xsp+18h] [xbp-98h] BYREF
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPositionOnMapModel; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v75; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C2444B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SpotAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081720);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&EventSpotMoveManager_SpotMoveData_TypeInfo);
    sub_1C2D490(&SrcSpotBasePrefab_TypeInfo);
    byte_4C2444B = 1;
  }
  *(_QWORD *)ofsY = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = QuestTree__GetSpotInfo((QuestTree_o *)Instance, spotId, 0);
  if ( !Instance )
    goto LABEL_78;
  v9 = *((_DWORD *)Instance + 7);
  v10 = *((_DWORD *)Instance + 10);
  v11 = Instance;
  Instance = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_78;
  v12 = (SpotEntity_o *)Instance;
  Component_object = 0;
  if ( !SpotEntity__HasFlag((SpotEntity_o *)Instance, 2, 0) )
  {
    pathLength = 0;
    if ( SpotEntity__HasFlag(v12, 4, 0) )
    {
      v15 = ScrTerminalMap__mfMap2d_Create_PathBySpotId(this, spotId, &pathLength, v14);
      v16 = sub_1C2D6DC(EventSpotMoveManager_SpotMoveData_TypeInfo);
      EventSpotMoveManager_SpotMoveData___ctor((EventSpotMoveManager_SpotMoveData_o *)v16, 0);
      if ( !v16 )
        goto LABEL_78;
      *(_QWORD *)(v16 + 32) = v15;
      *(_DWORD *)(v16 + 16) = spotId;
      sub_1C2D434((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v15, v17, v18);
      Instance = this->fields.eventSpotMoveManager;
      if ( !Instance )
        goto LABEL_78;
      EventSpotMoveManager__Add((EventSpotMoveManager_o *)Instance, (EventSpotMoveManager_SpotMoveData_o *)v16, 0);
    }
    else
    {
      v16 = 0;
      v15 = 0;
    }
    pfbBaseP = (Il2CppObject *)this->fields.pfbBaseP;
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !byte_4C20DA7 )
    {
      sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
      byte_4C20DA7 = 1;
    }
    v24 = UnityEngine_Quaternion_TypeInfo->static_fields;
    v26 = v24->identityQuaternion.fields.x;
    v25 = v24->identityQuaternion.fields.y;
    v28 = v24->identityQuaternion.fields.z;
    w = v24->identityQuaternion.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v69.fields.x = x;
    v69.fields.y = y;
    v69.fields.z = z;
    v75.fields.x = v26;
    v75.fields.y = v25;
    v75.fields.z = v28;
    v75.fields.w = w;
    v29 = UnityEngine_Object__Instantiate_object__51752724(
            pfbBaseP,
            v69,
            v75,
            (const MethodInfo_315AF14 *)Method_UnityEngine_Object_Instantiate_GameObject____78081720);
    id = v12->fields.id;
    v31 = (UnityEngine_Object_o *)v29;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    Instance = SrcSpotBasePrefab__GetGobjName(id, 0);
    if ( !v31 )
LABEL_78:
      sub_1C2D6EC(Instance, v8);
    UnityEngine_Object__set_name(v31, (System_String_o *)Instance, 0);
    v32 = 136;
    if ( isMapModel )
      v32 = 144;
    GameObjectExtensions__SetParent_35924212(
      (UnityEngine_GameObject_o *)v31,
      *(UnityEngine_GameObject_o **)((char *)&this->klass + v32),
      0);
    if ( !byte_4C20DA6 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    mMapEnt = this->fields.mMapEnt;
    v34 = UnityEngine_Vector3_TypeInfo->static_fields;
    v35 = v34->oneVector.fields.x;
    v36 = v34->oneVector.fields.y;
    v37 = v34->oneVector.fields.z;
    if ( mMapEnt )
    {
      SpotScale = MapEntity__GetSpotScale(mMapEnt, 0);
      v35 = v35 * SpotScale;
      v36 = v36 * SpotScale;
      v37 = v37 * SpotScale;
    }
    if ( !v11[5] )
    {
      if ( !byte_4C20DA1 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      v39 = UnityEngine_Vector3_TypeInfo->static_fields;
      v35 = v39->zeroVector.fields.x;
      v36 = v39->zeroVector.fields.y;
      v37 = v39->zeroVector.fields.z;
    }
    v70.fields.x = v35;
    v70.fields.y = v36;
    v70.fields.z = v37;
    GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)v31, v70, 0);
    if ( isMapModel )
    {
      v40 = ScrTerminalMap_TypeInfo;
      if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
        v40 = ScrTerminalMap_TypeInfo;
      }
      v41 = UnityEngine_LayerMask__NameToLayer(v40->static_fields->MAP_DISP_LAYER_SPOT, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v31, v41, 0);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v16 )
      {
        *(_QWORD *)(v16 + 24) = v31;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 24), (int32_t)v31, v42, v43);
      }
      if ( !v15 )
        goto LABEL_78;
      PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v15, v15->fields.PathRate, 0);
      GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v31, PointAsWorldFlatten, 0);
    }
    else if ( isMapModel )
    {
      LocalPositionOnMapModel = SpotEntity__GetLocalPositionOnMapModel(v12, 0);
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v31, LocalPositionOnMapModel, 0);
      mapModelManager = this->fields.mapModelManager;
      if ( !mapModelManager )
        goto LABEL_78;
      MapModelCamera_k__BackingField = (UnityEngine_Object_o *)mapModelManager->fields._MapModelCamera_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (void *)UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v46 = this->fields.mapModelManager;
        if ( !v46 )
          goto LABEL_78;
        v47 = v46->fields._MapModelCamera_k__BackingField;
        if ( !v47 )
          goto LABEL_78;
        cameraInstance = (UnityEngine_Object_o *)v47->fields.cameraInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (void *)UnityEngine_Object__op_Inequality(cameraInstance, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !cameraInstance )
            goto LABEL_78;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cameraInstance, 0);
          LocalEulerAngles = GameObjectExtensions__GetLocalEulerAngles(gameObject, 0);
          GameObjectExtensions__SetLocalEulerAngle((UnityEngine_GameObject_o *)v31, LocalEulerAngles, 0);
        }
      }
    }
    else
    {
      v74.fields.x = (float)((float)v12->fields.x - this->fields.mapImageOffsetX) + 0.0;
      v74.fields.y = (float)((float)((float)this->fields._currentMapImageH_k__BackingField - (float)v12->fields.y)
                           - this->fields.mapImageOffsetY)
                   + 0.0;
      v74.fields.z = 0.0;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v31, v74, 0);
    }
    v50 = (UnityEngine_Object_o *)pathLength;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v50, 0, 0) )
      GameObjectExtensions__SafeSetParent_35924288(pathLength, (UnityEngine_GameObject_o *)v31, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v31,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(0, (UnityEngine_Object_o *)Component_object, 0) )
    {
      ofsY[1] = v12->fields.nameOfsX;
      ofsY[0] = v12->fields.nameOfsY;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SpotAddMaster___);
      if ( Instance )
      {
        SpotAddMaster__OverwriteNamePanelOffset((SpotAddMaster_o *)Instance, spotId, &ofsY[1], ofsY, 0);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( Component_object )
        {
          Component_object[5].klass = (Il2CppClass *)Instance;
          sub_1C2D434((CGThumbnailListItem_o *)&Component_object[5], (int32_t)Instance, v51, v52);
          SrcSpotBasePrefab__mfSetSpotID((SrcSpotBasePrefab_o *)Component_object, spotId, 0);
          SrcSpotBasePrefab__mfSetQuestCount((SrcSpotBasePrefab_o *)Component_object, v9, 0);
          SrcSpotBasePrefab__SetFreeQuestCount((SrcSpotBasePrefab_o *)Component_object, v10, 0);
          SrcSpotBasePrefab__mfSetAtlas((SrcSpotBasePrefab_o *)Component_object, this->fields.assetsAtlases, 0);
          Name = SpotEntity__GetName(v12, 0);
          SrcSpotBasePrefab__mfSetSpotName((SrcSpotBasePrefab_o *)Component_object, Name, ofsY[1], -ofsY[0], 0);
          SrcSpotBasePrefab__mfSetPositions(
            (SrcSpotBasePrefab_o *)Component_object,
            v12->fields.questOfsX,
            -v12->fields.questOfsY,
            v12->fields.nextOfsX,
            -v12->fields.nextOfsY,
            0);
          Component_object[14].monitor = v11;
          sub_1C2D434((CGThumbnailListItem_o *)&Component_object[14].monitor, (int32_t)v11, v54, v55);
          Instance = this->fields.mMapEnt;
          if ( Instance )
          {
            v58 = MapEntity__GetSpotScale((MapEntity_o *)Instance, 0);
            SrcSpotBasePrefab__SetSelfScale((SrcSpotBasePrefab_o *)Component_object, v58, 0);
          }
          if ( isMapModel )
          {
            BYTE4(Component_object[15].klass) = 1;
            v59 = this->fields.mapModelManager;
            if ( !v59 )
              goto LABEL_78;
            v60 = v59->fields._MapModelCamera_k__BackingField;
            Component_object[15].monitor = v60;
            sub_1C2D434((CGThumbnailListItem_o *)&Component_object[15].monitor, (int32_t)v60, v56, v57);
            subRootEffectP = this->fields.subRootEffectP;
            Component_object[16].klass = (Il2CppClass *)subRootEffectP;
            sub_1C2D434((CGThumbnailListItem_o *)&Component_object[16], (int32_t)subRootEffectP, v62, v63);
            LODWORD(Component_object[15].klass) = this->fields.currentMapLayerId;
          }
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)Component_object, 0, 0);
          v64 = 1.0;
          if ( v11[5] == 2 )
            v64 = 0.5;
          SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)Component_object, v64, 0);
          SrcSpotBasePrefab__SetTouchType_36999716((SrcSpotBasePrefab_o *)Component_object, 0);
          Instance = this->fields.terminalScene;
          if ( Instance )
          {
            IsTutorialActive = TerminalSceneComponent__get_IsTutorialActive((TerminalSceneComponent_o *)Instance, 0);
            SrcSpotBasePrefab__SetBtnColliderEnable((SrcSpotBasePrefab_o *)Component_object, !IsTutorialActive, 0);
            return (SrcSpotBasePrefab_o *)Component_object;
          }
        }
      }
      goto LABEL_78;
    }
  }
  return (SrcSpotBasePrefab_o *)Component_object;
}


void ScrTerminalMap__mfSetFsmValueBool(
        ScrTerminalMap_o *this,
        System_String_o *name,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *MyFsmP; // x21
  HutongGames_PlayMaker_FsmVariables_o *Fsm; // x0
  __int64 v9; // x1

  if ( (byte_4C244B9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244B9 = 1;
  }
  MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP(this, (const MethodInfo *)name);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Fsm = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Equality(MyFsmP, 0, 0);
  if ( ((unsigned __int8)Fsm & 1) == 0 )
  {
    if ( !MyFsmP
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)MyFsmP, 0)) == 0
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)Fsm->fields.gameObjectVariables) == 0
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(Fsm, name, 0)) == 0 )
    {
      sub_1C2D6EC(Fsm, v9);
    }
    LOBYTE(Fsm->fields.vector3Variables) = value;
  }
}


void ScrTerminalMap__mfSetFsmValueInt(
        ScrTerminalMap_o *this,
        System_String_o *name,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *MyFsmP; // x21
  HutongGames_PlayMaker_FsmVariables_o *Fsm; // x0
  __int64 v9; // x1

  if ( (byte_4C244B7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244B7 = 1;
  }
  MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP(this, (const MethodInfo *)name);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Fsm = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Equality(MyFsmP, 0, 0);
  if ( ((unsigned __int8)Fsm & 1) == 0 )
  {
    if ( !MyFsmP
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)MyFsmP, 0)) == 0
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)Fsm->fields.gameObjectVariables) == 0
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(Fsm, name, 0)) == 0 )
    {
      sub_1C2D6EC(Fsm, v9);
    }
    LODWORD(Fsm->fields.vector3Variables) = value;
  }
}


void ScrTerminalMap__mfSetFsmValueVector3(
        ScrTerminalMap_o *this,
        System_String_o *name,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *MyFsmP; // x20
  HutongGames_PlayMaker_FsmVariables_o *Fsm; // x0
  __int64 v11; // x1

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C244BA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C244BA = 1;
  }
  MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP(this, (const MethodInfo *)name);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Fsm = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Equality(MyFsmP, 0, 0);
  if ( ((unsigned __int8)Fsm & 1) == 0 )
  {
    if ( !MyFsmP
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)MyFsmP, 0)) == 0
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)Fsm->fields.gameObjectVariables) == 0
      || (Fsm = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__GetFsmVector3(Fsm, name, 0)) == 0 )
    {
      sub_1C2D6EC(Fsm, v11);
    }
    *(float *)&Fsm->fields.vector3Variables = x;
    *((float *)&Fsm->fields.vector3Variables + 1) = y;
    *(float *)&Fsm->fields.colorVariables = z;
  }
}


void ScrTerminalMap__set_BeforeClearQuestIdForAction(ScrTerminalMap_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._BeforeClearQuestIdForAction_k__BackingField = value;
}


void ScrTerminalMap__set_EventBoardDiceButtonEffectObj(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventBoardDiceButtonEffectObj_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventBoardDiceButtonEffectObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_EventBoardDiceVoiceInfo(
        ScrTerminalMap_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventBoardDiceVoiceInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventBoardDiceVoiceInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_EventBoardGameArrivalVoiceSvtIdList(
        ScrTerminalMap_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_EventBoardGameObj(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventBoardGameObj_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventBoardGameObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_EventBoardPieceObj(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventBoardPieceObj_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventBoardPieceObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_EventBoardQuestArrivalPanelObj(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventBoardQuestArrivalPanelObj_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventBoardQuestArrivalPanelObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_EventBoardQuestReleaseList(
        ScrTerminalMap_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventBoardQuestReleaseList_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventBoardQuestReleaseList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_EventBoardStopPanelObj(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventBoardStopPanelObj_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._EventBoardStopPanelObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_IsCheckExpiration(ScrTerminalMap_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsCheckExpiration_k__BackingField = value;
}


void ScrTerminalMap__set_MapLayerId(ScrTerminalMap_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.currentMapLayerId = value;
}


void ScrTerminalMap__set_MapUIState(ScrTerminalMap_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MapUIState_k__BackingField = value;
}


void ScrTerminalMap__set_currentMapImageH(ScrTerminalMap_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._currentMapImageH_k__BackingField = value;
}


void ScrTerminalMap__set_currentMapImageW(ScrTerminalMap_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._currentMapImageW_k__BackingField = value;
}


void ScrTerminalMap__set_currentMapTexture(
        ScrTerminalMap_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._currentMapTexture_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._currentMapTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__set_eventMapManagerInterface(
        ScrTerminalMap_o *this,
        EventMapManagerInterface_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._eventMapManagerInterface_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._eventMapManagerInterface_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScrTerminalMap__showEventScriptDlgs(ScrTerminalMap_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *eventScriptMessages; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_string__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  Il2CppObject *Instance; // x0
  TerminalPramsManager_c *v16; // x8
  CommonUI_o *v17; // x20
  System_String_o *v18; // x21
  Il2CppObject *Item; // x22
  System_Action_o *v20; // x23

  if ( (byte_4C24475 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass353_0__showEventScriptDlgs_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass353_0_TypeInfo);
    byte_4C24475 = 1;
  }
  v5 = sub_1C2D6DC(ScrTerminalMap___c__DisplayClass353_0_TypeInfo);
  ScrTerminalMap___c__DisplayClass353_0___ctor((ScrTerminalMap___c__DisplayClass353_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  eventScriptMessages = (System_Collections_Generic_List_object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    eventScriptMessages = (System_Collections_Generic_List_object__o *)TerminalPramsManager_TypeInfo;
  }
  v12 = *(struct System_Collections_Generic_List_string__o **)(*(_QWORD *)&eventScriptMessages[4].fields._size + 304LL);
  if ( !v12 )
    goto LABEL_19;
  if ( v12->fields._size >= 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = TerminalPramsManager_TypeInfo;
    v17 = (CommonUI_o *)Instance;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    eventScriptMessages = (System_Collections_Generic_List_object__o *)v16->static_fields->eventScriptMessages;
    if ( eventScriptMessages )
    {
      eventScriptMessages = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           eventScriptMessages,
                                                                           0,
                                                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages )
      {
        v18 = (System_String_o *)eventScriptMessages;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages,
                 1,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
        v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v20,
          (Il2CppObject *)v5,
          Method_ScrTerminalMap___c__DisplayClass353_0__showEventScriptDlgs_b__0__,
          0);
        if ( v17 )
        {
          CommonUI__OpenNotificationDialog(
            v17,
            v18,
            (System_String_o *)Item,
            v20,
            -1,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0.0,
            0,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C2D6EC(eventScriptMessages, v7);
  }
  if ( !eventScriptMessages[5].fields._size )
  {
    j_il2cpp_runtime_class_init_0(eventScriptMessages);
    v12 = TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
    if ( !v12 )
      goto LABEL_19;
  }
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0);
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
}


void ScrTerminalMap__smfMap2d_LoadStart(ScrTerminalMap_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarEntity_o *mWarEnt; // x0
  __int64 v5; // x1
  struct MapControl_WarInfo_o *mWarInfo; // x8
  int32_t warId; // w9
  struct MapControl_MapInfo_o *mMapInfo; // x8
  MapEntity_o *mMapEnt; // x8
  struct MapEntity_o *v10; // x8
  int32x2_t v11; // d0
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4C24426 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_LoadMap__);
    byte_4C24426 = 1;
  }
  ScrTerminalMap__ReleaseMap(this, 0, v2);
  mWarInfo = this->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_9;
  warId = mWarInfo->fields.warId;
  mMapInfo = this->fields.mMapInfo;
  this->fields.currentWarId = warId;
  if ( !mMapInfo )
    goto LABEL_9;
  mWarEnt = this->fields.mWarEnt;
  this->fields.currentMapId = mMapInfo->fields.mapId;
  if ( !mWarEnt
    || (mWarEnt = (WarEntity_o *)WarEntity__GetAssetId(mWarEnt, 0),
        mMapEnt = this->fields.mMapEnt,
        this->fields.currentAssetId = (int)mWarEnt,
        !mMapEnt)
    || (mWarEnt = (WarEntity_o *)MapEntity__GetPrioredMapImageId(mMapEnt, 0),
        v10 = this->fields.mMapEnt,
        this->fields.currentMapImageId = (int)mWarEnt,
        !v10) )
  {
LABEL_9:
    sub_1C2D6EC(mWarEnt, v5);
  }
  v11.n64_u64[0] = *(unsigned __int64 *)&v10->fields.mapImageW;
  *(int32x2_t *)&this->fields._currentMapImageW_k__BackingField = v11;
  *(float32x2_t *)&this->fields.mapImageOffsetX = vmul_f32(vcvt_f32_s32(v11), (float32x2_t)0x3F0000003F000000LL);
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ScrTerminalMap_LoadMap__, 0);
  ScrTerminalMap__InitCheckUpdateRequest(this, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap__smfMap2d_SpotMarkCreate(ScrTerminalMap_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x19
  struct MapControl_WarInfo_o *mWarInfo; // x8
  int32_t warId; // w9
  struct MapControl_MapInfo_o *mMapInfo; // x8
  bool IsMapModel; // w20
  const MethodInfo *v7; // x1
  System_String_o *SaveKey_PlayerMap; // x0
  bool IsMultiMap; // w0
  const MethodInfo *v10; // x2
  System_String_o *SaveKey_PlayerIcon; // x0
  TerminalPramsManager_c *v12; // x0
  const MethodInfo *v13; // x1
  EventSpotMoveManager_o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  EventMapGimmickMoveManager_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  ScrTerminalMap_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x21
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  __int64 v24; // x9
  int32_t v25; // w22
  struct System_Collections_Generic_List_SrcSpotBasePrefab__o *spotList; // x8
  int32_t size; // w2
  int v28; // w9
  char v29; // w23
  UnityEngine_Object_o *v30; // x21
  _BOOL8 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  MapControl_SpotInfo_o *current; // x27
  UnityEngine_Object_o *SpotBySpotInfo; // x26
  _BOOL8 IsNextDisp; // x0
  __int64 v37; // x1
  UnityEngine_Object_o *v38; // x8
  UnityEngine_Object_o *v39; // x8
  MapControl_SpotInfo_o *m_CachedPtr; // x0
  SpotEntity_o *Mine; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_List_object__o *v49; // x0
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x8
  UnityEngine_Object_o *eventQuestCooltimeComponent; // x28
  const MethodInfo *v55; // x1
  Il2CppObject *Instance; // x0
  __int64 v57; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v59; // x1
  UserEventQuestCooltimeEntity_o *EntityFromSpotId; // x28
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x1
  EventQuestCooltimeComponent_o *v64; // x0
  UnityEngine_Object_o *submarineEventMap; // x28
  const MethodInfo *v66; // x1
  SubmarineMapManager_o *v67; // x0
  __int64 v68; // x1
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x28
  __int64 v70; // x1
  Il2CppObject *Master_object; // x28
  MapControl_WarInfo_o *v72; // x0
  __int64 EventId; // x0
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x1
  EventSpotCooltimeComponent_o *v75; // x0
  const MethodInfo *v76; // x2
  int32_t requestPlayerSpotId; // w1
  UnityEngine_Object_o *SpotGameObject; // x23
  UnityEngine_Object_o *v79; // x24
  Il2CppObject *v80; // x28
  __int64 v81; // x1
  MapModelManager_o *mapModelManager; // x0
  const MethodInfo *v83; // x2
  UnityEngine_GameObject_o *MapGimmickRootObject; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct System_Collections_Generic_List_MapGimmickComponent__o *gimmickList; // x8
  int32_t v88; // w2
  int v89; // w9
  _BOOL8 v90; // x0
  const MethodInfo *v91; // x2
  Il2CppObject *v92; // x25
  const MethodInfo *v93; // x3
  System_Collections_Generic_List_object__o *v94; // x24
  Il2CppObject *MapGimmick; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  Il2CppObject *v98; // x1
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  const MethodInfo *v103; // x3
  System_Collections_Generic_List_object__o *v104; // x24
  Il2CppObject *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  Il2CppObject *v108; // x1
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  struct EventSpotMoveManager_o *eventSpotMoveManager; // x8
  struct EventSpotMoveManager_o *v114; // x8
  Il2CppObject *v115; // x23
  ScrTerminalMap___c__DisplayClass288_0_o *v116; // x24
  __int64 v117; // x0
  __int64 v118; // x1
  EventSpotMoveManager_o *v119; // x0
  SpotPathEntity_o *SpotPathEntity; // x0
  SpotPathEntity_o *v121; // x25
  __int64 MapGimmickEffectId; // x0
  __int64 v123; // x1
  System_Collections_Generic_List_object__o *v124; // x26
  System_Predicate_object__o *v125; // x27
  __int64 v126; // x0
  __int64 v127; // x1
  Il2CppObject *v128; // x26
  __int64 v129; // x0
  __int64 v130; // x1
  float v131; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v134; // x0
  UnityEngine_GameObject_o *v135; // x0
  int32_t MapGimmickId; // w0
  System_Collections_Generic_List_object__o *v137; // x25
  System_Predicate_object__o *v138; // x26
  __int64 v139; // x0
  __int64 v140; // x1
  Il2CppObject *v141; // x24
  __int64 v142; // x0
  __int64 v143; // x1
  float v144; // s8
  float v145; // s9
  float v146; // s10
  UnityEngine_GameObject_o *v147; // x0
  UnityEngine_Object_o *v148; // x24
  UnityEngine_Object_o *v149; // x22
  struct WarEntity_o *mWarEnt; // x8
  UnityEngine_Object_o *v151; // x23
  char v152; // w25
  UnityEngine_Object_o *v153; // x24
  UnityEngine_GameObject_o *v154; // x0
  const MethodInfo *v155; // x2
  bool v156; // w0
  const MethodInfo *v157; // x2
  System_String_o *v158; // x0
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  UnityEngine_Object_o **p_mFocusSpot; // x22
  MapZoom_c *v162; // x0
  float ZOOM_DEFAULT; // s8
  TerminalPramsManager_c *v164; // x0
  CGThumbnailListItem_o *v165; // x0
  int32_t v166; // w1
  UnityEngine_Object_o *v167; // x23
  const MethodInfo *v168; // x2
  TerminalPramsManager_c *v169; // x0
  TerminalPramsManager_c *v170; // x0
  UnityEngine_Object_o *v171; // x23
  Il2CppObject *v172; // x0
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  struct MapControl_MapInfo_o *v175; // x8
  const MethodInfo *v176; // x2
  char v177; // w25
  float v178; // s0 OVERLAPPED
  float v179; // s1
  float v180; // s2
  MapModelManager_c *v181; // x0
  UnityEngine_Object_o *v182; // x23
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  UnityEngine_Object_o *v185; // x23
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  const MethodInfo *v188; // x2
  UnityEngine_Object_o *SpotPrefab; // x21
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  __int64 v192; // x1
  Il2CppObject *v193; // x0
  UnityEngine_Object_o *v194; // x21
  const MethodInfo *v195; // x4
  struct EventMapManagerInterface_o *eventMapManagerInterface_k__BackingField; // x20
  System_Action_o *v197; // x21
  EventMapManagerInterface_c *klass; // x8
  __int64 v199; // x9
  EventMapManagerInterface_c **p_offset; // x10
  __int64 v201; // x0
  struct EventRaceBoostInfo_o *eventRaceBoost_k__BackingField; // [xsp+10h] [xbp-170h]
  CGThumbnailListItem_o *p_eventBoardGameSpotPrefab; // [xsp+18h] [xbp-168h]
  int32_t EventBoardGameSpotId; // [xsp+24h] [xbp-15Ch]
  UnityEngine_Object_o *x; // [xsp+28h] [xbp-158h]
  int32_t PlayerSpotId; // [xsp+30h] [xbp-150h]
  System_Collections_Generic_List_Enumerator_object__o v207; // [xsp+38h] [xbp-148h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v208; // [xsp+50h] [xbp-130h] BYREF
  UnityEngine_Vector3_o pos; // [xsp+70h] [xbp-110h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v210; // [xsp+80h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v211; // [xsp+A0h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+C0h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v213; // [xsp+E0h] [xbp-A0h] BYREF
  UnityEngine_Object_o *Component_object; // [xsp+108h] [xbp-78h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v216; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v218; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C24440 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_EventSpotMoveManager_SpotMoveData___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&EventMapGimmickMoveManager_TypeInfo);
    sub_1C2D490(&EventMapManagerInterface_TypeInfo);
    sub_1C2D490(&EventSpotMoveManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapGimmickComponent__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
    sub_1C2D490(&MapModelManager_TypeInfo);
    sub_1C2D490(&MapZoom_TypeInfo);
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Predicate_MapGimmickComponent__TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap__smfMap2d_SpotMarkCreate_b__288_0__);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass288_0__smfMap2d_SpotMarkCreate_b__1__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass288_0__smfMap2d_SpotMarkCreate_b__2__);
    this = (ScrTerminalMap_o *)sub_1C2D490(&ScrTerminalMap___c__DisplayClass288_0_TypeInfo);
    byte_4C24440 = 1;
  }
  memset(&v213, 0, sizeof(v213));
  memset(&i, 0, sizeof(i));
  memset(&v211, 0, sizeof(v211));
  memset(&v210, 0, sizeof(v210));
  pos.fields.z = 0.0;
  *(_QWORD *)&pos.fields.x = 0;
  memset(&v208, 0, sizeof(v208));
  mWarInfo = v2->fields.mWarInfo;
  if ( !mWarInfo )
    goto LABEL_311;
  warId = mWarInfo->fields.warId;
  mMapInfo = v2->fields.mMapInfo;
  v2->fields.currentWarId = warId;
  if ( !mMapInfo )
    goto LABEL_311;
  this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
  v2->fields.currentMapId = mMapInfo->fields.mapId;
  if ( !this )
    goto LABEL_311;
  IsMapModel = MapModelManager__get_IsMapModel((MapModelManager_o *)this, 0);
  PlayerSpotId = ScrTerminalMap__GetPlayerSpotId(v2, v7);
  if ( PlayerSpotId < 0 )
  {
    SaveKey_PlayerMap = ScrTerminalMap__GetSaveKey_PlayerMap(v2, method);
    if ( !UnityEngine_PlayerPrefs__HasKey(SaveKey_PlayerMap, 0) || v2->fields.isFirstMap )
    {
      this = (ScrTerminalMap_o *)v2->fields.mWarInfo;
      v2->fields.isFirstFade = 1;
      if ( !this )
        goto LABEL_311;
      IsMultiMap = MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)this, 0);
      SaveKey_PlayerIcon = ScrTerminalMap__GetSaveKey_PlayerIcon(v2, IsMultiMap, v10);
      UnityEngine_PlayerPrefs__SetInt(SaveKey_PlayerIcon, 0, 0);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244E9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244E9 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  eventRaceBoost_k__BackingField = v12->static_fields->_eventRaceBoost_k__BackingField;
  if ( ScrTerminalMap__IsDispEventBoardGameUI(v2, method) )
    EventBoardGameSpotId = ScrTerminalMap__GetEventBoardGameSpotId(v2, v13);
  else
    EventBoardGameSpotId = 0;
  if ( v2->fields.isRaidMap )
  {
    this = (ScrTerminalMap_o *)v2->fields.eventSpotMoveManager;
    if ( !this )
    {
      v14 = (EventSpotMoveManager_o *)sub_1C2D6DC(EventSpotMoveManager_TypeInfo);
      EventSpotMoveManager___ctor(v14, 0);
      v2->fields.eventSpotMoveManager = v14;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.eventSpotMoveManager, (int32_t)v14, v15, v16);
      this = (ScrTerminalMap_o *)v2->fields.eventSpotMoveManager;
      if ( !this )
        goto LABEL_311;
    }
    EventSpotMoveManager__Init((EventSpotMoveManager_o *)this, 0);
    this = (ScrTerminalMap_o *)v2->fields.eventMapGimmickMoveManager;
    if ( !this )
    {
      v17 = (EventMapGimmickMoveManager_o *)sub_1C2D6DC(EventMapGimmickMoveManager_TypeInfo);
      EventMapGimmickMoveManager___ctor(v17, 0);
      v2->fields.eventMapGimmickMoveManager = v17;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.eventMapGimmickMoveManager, (int32_t)v17, v18, v19);
      this = (ScrTerminalMap_o *)v2->fields.eventMapGimmickMoveManager;
      if ( !this )
        goto LABEL_311;
    }
    EventMapGimmickMoveManager__Init((EventMapGimmickMoveManager_o *)this, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  v21 = ScrTerminalMap_TypeInfo;
  v22 = gameObject;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v21 = ScrTerminalMap_TypeInfo;
  }
  static_fields = v21->static_fields;
  v24 = 112;
  if ( IsMapModel )
    v24 = 120;
  v25 = UnityEngine_LayerMask__NameToLayer(
          *(System_String_o **)((char *)&static_fields->RAID_TIME_OVER_NOTICE_KEY + v24),
          0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v22, v25, 0);
  spotList = v2->fields.spotList;
  if ( !spotList )
    goto LABEL_311;
  size = spotList->fields._size;
  v28 = spotList->fields._version + 1;
  spotList->fields._size = 0;
  spotList->fields._version = v28;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)spotList->fields._items, 0, size, 0);
  this = (ScrTerminalMap_o *)v2->fields.mMapInfo;
  if ( !this )
    goto LABEL_311;
  this = (ScrTerminalMap_o *)MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)this, 0);
  if ( !this )
    goto LABEL_311;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v207,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v29 = 0;
  v30 = 0;
  v213 = v207;
  x = 0;
  Component_object = 0;
  p_eventBoardGameSpotPrefab = (CGThumbnailListItem_o *)&v2->fields.eventBoardGameSpotPrefab;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v213,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    if ( !v31 )
      break;
    current = (MapControl_SpotInfo_o *)v213.fields._current;
    if ( !v213.fields._current )
      sub_1C2D6EC(v31, v32);
    SpotBySpotInfo = (UnityEngine_Object_o *)ScrTerminalMap__mfMap2d_Create_SpotBySpotInfo(
                                               v2,
                                               (int32_t)v213.fields._current[1].klass,
                                               IsMapModel,
                                               v33);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNextDisp = UnityEngine_Object__op_Inequality(SpotBySpotInfo, 0, 0);
    if ( IsNextDisp && current->fields.dispType == 1 )
    {
      v38 = Component_object;
      if ( current->fields.spotId == PlayerSpotId )
        v38 = SpotBySpotInfo;
      Component_object = v38;
      if ( (v29 & 1) != 0 )
      {
        v29 = 1;
      }
      else
      {
        IsNextDisp = MapControl_SpotInfo__IsNextDisp(current, 0);
        if ( IsNextDisp )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsNextDisp = UnityEngine_Object__op_Equality(x, 0, 0);
          v29 = !IsNextDisp;
          if ( IsNextDisp )
            v39 = SpotBySpotInfo;
          else
            v39 = 0;
          x = v39;
        }
        else
        {
          v29 = 0;
        }
      }
      if ( !SpotBySpotInfo )
        sub_1C2D6EC(IsNextDisp, v37);
      m_CachedPtr = (MapControl_SpotInfo_o *)SpotBySpotInfo[9].fields.m_CachedPtr;
      if ( !m_CachedPtr )
        sub_1C2D6EC(0, v37);
      Mine = MapControl_SpotInfo__GetMine(m_CachedPtr, 0);
      if ( !Mine )
        sub_1C2D6EC(0, v42);
      if ( SpotEntity__GetPrioredImgId(Mine, 0) )
        v30 = SpotBySpotInfo;
      if ( ScrTerminalMap__IsDispEventBoardGameUI(v2, v43) && current->fields.spotId == EventBoardGameSpotId )
      {
        p_eventBoardGameSpotPrefab->klass = (CGThumbnailListItem_c *)SpotBySpotInfo;
        sub_1C2D434(p_eventBoardGameSpotPrefab, (int32_t)SpotBySpotInfo, v44, v45);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(SpotBySpotInfo, 0, 0) )
    {
      v49 = (System_Collections_Generic_List_object__o *)v2->fields.spotList;
      if ( !v49 )
        sub_1C2D6EC(0, v46);
      items = v49->fields._items;
      v51 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
      ++v49->fields._version;
      if ( !items )
        sub_1C2D6EC(v49, v46);
      v52 = v49->fields._size;
      if ( (unsigned int)v52 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          (Il2CppObject *)SpotBySpotInfo,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + v52;
        v49->fields._size = v52 + 1;
        v53[4] = (Il2CppClass *)SpotBySpotInfo;
        sub_1C2D434((CGThumbnailListItem_o *)(v53 + 4), (int32_t)SpotBySpotInfo, v47, v48);
      }
      eventQuestCooltimeComponent = (UnityEngine_Object_o *)v2->fields.eventQuestCooltimeComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(eventQuestCooltimeComponent, 0, 0) )
        goto LABEL_82;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C2D6EC(0, v57);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventQuestCooltimeMaster___);
      if ( !MasterData_object )
        sub_1C2D6EC(0, v59);
      EntityFromSpotId = UserEventQuestCooltimeMaster__GetEntityFromSpotId(
                           (UserEventQuestCooltimeMaster_o *)MasterData_object,
                           current->fields.spotId,
                           0);
      if ( EntityFromSpotId )
      {
        v61 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !v61 )
          sub_1C2D6EC(0, v62);
        if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v61, EntityFromSpotId->fields.questId, 0) )
        {
          v64 = v2->fields.eventQuestCooltimeComponent;
          if ( !v64 )
            sub_1C2D6EC(0, v63);
          EventQuestCooltimeComponent__SetSpot(v64, EntityFromSpotId, (SrcSpotBasePrefab_o *)SpotBySpotInfo, 0);
          goto LABEL_82;
        }
      }
      else
      {
LABEL_82:
        submarineEventMap = (UnityEngine_Object_o *)ScrTerminalMap__get_submarineEventMap(v2, v55);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(submarineEventMap, 0, 0) )
        {
          v67 = ScrTerminalMap__get_submarineEventMap(v2, v66);
          if ( !v67 )
            sub_1C2D6EC(0, v68);
          SubmarineMapManager__AdjustSpotPosition(v67, (SrcSpotBasePrefab_o *)SpotBySpotInfo, 0);
        }
        eventSpotCooltimeComponent = (UnityEngine_Object_o *)v2->fields.eventSpotCooltimeComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
          v72 = v2->fields.mWarInfo;
          if ( !v72 )
            sub_1C2D6EC(0, v70);
          EventId = MapControl_WarInfo__GetEventId(v72, 0);
          if ( !Master_object )
            sub_1C2D6EC(EventId, (unsigned int)EventId);
          CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                 (UserEventCooltimeRewardMaster_o *)Master_object,
                                 EventId,
                                 current->fields.spotId,
                                 0);
          if ( CurrentLevelEntity )
          {
            v75 = v2->fields.eventSpotCooltimeComponent;
            if ( !v75 )
              sub_1C2D6EC(0, CurrentLevelEntity);
            EventSpotCooltimeComponent__SetSpot(v75, CurrentLevelEntity, (SrcSpotBasePrefab_o *)SpotBySpotInfo, 0);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v213,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  requestPlayerSpotId = v2->fields.requestPlayerSpotId;
  if ( (requestPlayerSpotId & 0x80000000) == 0 )
  {
    SpotGameObject = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(v2, requestPlayerSpotId, v76);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(SpotGameObject, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( SpotGameObject )
      {
        Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)SpotGameObject,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
        goto LABEL_103;
      }
      goto LABEL_311;
    }
LABEL_103:
    v2->fields.requestPlayerSpotId = -1;
  }
  method = (const MethodInfo *)(unsigned int)v2->fields.requestFocusSpotId;
  if ( ((unsigned int)method & 0x80000000) != 0 )
  {
    v80 = 0;
    if ( !IsMapModel )
      goto LABEL_134;
  }
  else
  {
    v79 = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(v2, (int32_t)method, v76);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v79, 0, 0);
    v80 = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v79 )
        goto LABEL_311;
      v80 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v79,
              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    }
    v2->fields.requestFocusSpotId = -1;
    if ( !IsMapModel )
    {
LABEL_134:
      this = (ScrTerminalMap_o *)v2->fields.mMapInfo;
      if ( !this )
        goto LABEL_311;
      this = (ScrTerminalMap_o *)MapControl_MapInfo__GetSpotRoadList((MapControl_MapInfo_o *)this, 0);
      if ( !this )
        goto LABEL_311;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v207,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
      for ( i = v207;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
            ScrTerminalMap__mfMap2d_Create_LineBySpotID(v2, (MapControl_SpotRoadInfo_o *)i.fields._current, v83) )
      {
        ;
      }
      goto LABEL_139;
    }
  }
  this = (ScrTerminalMap_o *)v2->fields.mMapInfo;
  if ( !this )
    goto LABEL_311;
  this = (ScrTerminalMap_o *)MapControl_MapInfo__GetSpotRoadList((MapControl_MapInfo_o *)this, 0);
  if ( !this )
    goto LABEL_311;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v207,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
  for ( i = v207;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
        MapModelManager__CreateModelLineBySpotId(
          mapModelManager,
          (MapControl_SpotRoadInfo_o *)i.fields._current,
          v2->fields.pfbModelLineP,
          0) )
  {
    mapModelManager = v2->fields.mapModelManager;
    if ( !mapModelManager )
      sub_1C2D6EC(0, v81);
  }
LABEL_139:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
  this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
  if ( !this )
    goto LABEL_311;
  MapGimmickRootObject = MapModelManager__GetMapGimmickRootObject((MapModelManager_o *)this, 0);
  v2->fields.subRootGimmickP = MapGimmickRootObject;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.subRootGimmickP, (int32_t)MapGimmickRootObject, v85, v86);
  gimmickList = v2->fields.gimmickList;
  if ( !gimmickList )
    goto LABEL_311;
  v88 = gimmickList->fields._size;
  v89 = gimmickList->fields._version + 1;
  gimmickList->fields._size = 0;
  gimmickList->fields._version = v89;
  if ( v88 >= 1 )
    System_Array__Clear((System_Array_o *)gimmickList->fields._items, 0, v88, 0);
  if ( ScrTerminalMap__IsCreateBoardGameGimmick(v2, method) )
  {
    this = (ScrTerminalMap_o *)v2->fields.mMapInfo;
    if ( !this )
      goto LABEL_311;
    this = (ScrTerminalMap_o *)MapControl_MapInfo__GetMapGimmickList((MapControl_MapInfo_o *)this, 0);
    if ( !this )
      goto LABEL_311;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v207,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    v211 = v207;
    while ( 1 )
    {
      v90 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v211,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
      if ( !v90 )
        break;
      v92 = v211.fields._current;
      if ( !ScrTerminalMap__IsSkipCreateBoardGameGimmick(
              (ScrTerminalMap_o *)v90,
              (MapControl_MapGimmickInfo_o *)v211.fields._current,
              v91) )
      {
        v94 = (System_Collections_Generic_List_object__o *)v2->fields.gimmickList;
        MapGimmick = (Il2CppObject *)ScrTerminalMap__CreateMapGimmick(
                                       v2,
                                       (MapControl_MapGimmickInfo_o *)v92,
                                       IsMapModel,
                                       v93);
        v98 = MapGimmick;
        if ( !v94 )
          sub_1C2D6EC(MapGimmick, MapGimmick);
        v99 = v94->fields._items;
        v100 = Method_System_Collections_Generic_List_MapGimmickComponent__Add__;
        ++v94->fields._version;
        if ( !v99 )
          sub_1C2D6EC(MapGimmick, MapGimmick);
        v101 = v94->fields._size;
        if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v94,
            MapGimmick,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
        }
        else
        {
          v102 = &v99->obj.klass + v101;
          v94->fields._size = v101 + 1;
          v102[4] = (Il2CppClass *)v98;
          sub_1C2D434((CGThumbnailListItem_o *)(v102 + 4), (int32_t)v98, v96, v97);
        }
      }
    }
  }
  else
  {
    this = (ScrTerminalMap_o *)v2->fields.mMapInfo;
    if ( !this )
      goto LABEL_311;
    this = (ScrTerminalMap_o *)MapControl_MapInfo__GetMapGimmickList((MapControl_MapInfo_o *)this, 0);
    if ( !this )
      goto LABEL_311;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v207,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    v211 = v207;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v211,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__) )
    {
      v104 = (System_Collections_Generic_List_object__o *)v2->fields.gimmickList;
      v105 = (Il2CppObject *)ScrTerminalMap__CreateMapGimmick(
                               v2,
                               (MapControl_MapGimmickInfo_o *)v211.fields._current,
                               IsMapModel,
                               v103);
      v108 = v105;
      if ( !v104 )
        sub_1C2D6EC(v105, v105);
      v109 = v104->fields._items;
      v110 = Method_System_Collections_Generic_List_MapGimmickComponent__Add__;
      ++v104->fields._version;
      if ( !v109 )
        sub_1C2D6EC(v105, v105);
      v111 = v104->fields._size;
      if ( (unsigned int)v111 >= LODWORD(v109->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v104,
          v105,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
      }
      else
      {
        v112 = &v109->obj.klass + v111;
        v104->fields._size = v111 + 1;
        v112[4] = (Il2CppClass *)v108;
        sub_1C2D434((CGThumbnailListItem_o *)(v112 + 4), (int32_t)v108, v106, v107);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v211,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  if ( v2->fields.isRaidMap )
  {
    eventSpotMoveManager = v2->fields.eventSpotMoveManager;
    if ( eventSpotMoveManager )
    {
      this = (ScrTerminalMap_o *)System_Linq_Enumerable__Any_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)eventSpotMoveManager->fields.eventSpotMoveDataList,
                                   (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_EventSpotMoveManager_SpotMoveData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v114 = v2->fields.eventSpotMoveManager;
        if ( !v114 )
          goto LABEL_311;
        this = (ScrTerminalMap_o *)v114->fields.eventSpotMoveDataList;
        if ( !this )
          goto LABEL_311;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v207,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
        v210 = v207;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v210,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
        {
          v115 = v210.fields._current;
          v116 = (ScrTerminalMap___c__DisplayClass288_0_o *)sub_1C2D6DC(ScrTerminalMap___c__DisplayClass288_0_TypeInfo);
          ScrTerminalMap___c__DisplayClass288_0___ctor(v116, 0);
          if ( !v115 )
            sub_1C2D6EC(v117, v118);
          v119 = v2->fields.eventSpotMoveManager;
          if ( !v119 )
            sub_1C2D6EC(0, v118);
          SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(v119, (int32_t)v115[1].klass, 0);
          v121 = SpotPathEntity;
          if ( SpotPathEntity )
          {
            MapGimmickEffectId = SpotPathEntity__GetMapGimmickEffectId(SpotPathEntity, 0);
            if ( !v116 )
              sub_1C2D6EC(MapGimmickEffectId, v123);
            v116->fields.gimmickEffectId = MapGimmickEffectId;
            if ( (int)MapGimmickEffectId >= 1 )
            {
              v124 = (System_Collections_Generic_List_object__o *)v2->fields.gimmickList;
              v125 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapGimmickComponent__TypeInfo);
              System_Predicate_object____ctor(
                v125,
                (Il2CppObject *)v116,
                Method_ScrTerminalMap___c__DisplayClass288_0__smfMap2d_SpotMarkCreate_b__2__,
                0);
              if ( !v124 )
                sub_1C2D6EC(v126, v127);
              v128 = System_Collections_Generic_List_object___Find(
                       v124,
                       (System_Predicate_T__o *)v125,
                       (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapGimmickComponent__Find__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v128, 0, 0) )
              {
                LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v115[1].monitor, 0);
                if ( !v128 )
                  sub_1C2D6EC(v129, v130);
                v131 = LocalPosition.fields.x;
                y = LocalPosition.fields.y;
                z = LocalPosition.fields.z;
                v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v128, 0);
                v216.fields.x = v131;
                v216.fields.y = y;
                v216.fields.z = z;
                GameObjectExtensions__SetLocalPosition(v134, v216, 0);
                v135 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v128, 0);
                GameObjectExtensions__SafeSetParent_35924288(v135, (UnityEngine_GameObject_o *)v115[1].monitor, 0);
              }
            }
            MapGimmickId = SpotPathEntity__GetMapGimmickId(v121, 0);
            v116->fields.gimmickId = MapGimmickId;
            if ( MapGimmickId >= 1 )
            {
              v137 = (System_Collections_Generic_List_object__o *)v2->fields.gimmickList;
              v138 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapGimmickComponent__TypeInfo);
              System_Predicate_object____ctor(
                v138,
                (Il2CppObject *)v116,
                Method_ScrTerminalMap___c__DisplayClass288_0__smfMap2d_SpotMarkCreate_b__1__,
                0);
              if ( !v137 )
                sub_1C2D6EC(v139, v140);
              v141 = System_Collections_Generic_List_object___Find(
                       v137,
                       (System_Predicate_T__o *)v138,
                       (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapGimmickComponent__Find__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v141, 0, 0) )
              {
                Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)v115[1].monitor, 0);
                if ( !v141 )
                  sub_1C2D6EC(v142, v143);
                v144 = Position.fields.x;
                v145 = Position.fields.y;
                v146 = Position.fields.z;
                v147 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v141, 0);
                v218.fields.x = v144;
                v218.fields.y = v145;
                v218.fields.z = v146;
                GameObjectExtensions__SetPosition(v147, v218, 0);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v210,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
      }
    }
  }
  v148 = (UnityEngine_Object_o *)v2->fields.eventQuestCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v148, 0, 0);
  v149 = x;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    mWarEnt = v2->fields.mWarEnt;
    if ( !mWarEnt )
      goto LABEL_311;
    this = (ScrTerminalMap_o *)v2->fields.eventQuestCooltimeComponent;
    if ( !this )
      goto LABEL_311;
    EventQuestCooltimeComponent__SetGimmickList(
      (EventQuestCooltimeComponent_o *)this,
      mWarEnt->fields.eventId,
      v2->fields.gimmickList,
      0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v151 = Component_object;
  if ( !UnityEngine_Object__op_Equality(Component_object, 0, 0) )
    v149 = v151;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v152 = UnityEngine_Object__op_Equality(v149, 0, 0);
  if ( (v152 & 1) != 0 )
    v153 = v30;
  else
    v153 = v149;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v153, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v153 )
      goto LABEL_311;
    v154 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v153, 0);
    ScrTerminalMap__SetPlayerIcon(v2, v154, v155);
    if ( (v152 & 1) == 0 )
    {
      this = (ScrTerminalMap_o *)v2->fields.mWarInfo;
      if ( !this )
        goto LABEL_311;
      v156 = MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)this, 0);
      v158 = ScrTerminalMap__GetSaveKey_PlayerIcon(v2, v156, v157);
      UnityEngine_PlayerPrefs__SetInt(v158, (int32_t)v153[6].klass, 0);
    }
    if ( eventRaceBoost_k__BackingField )
    {
      this = (ScrTerminalMap_o *)v2->fields.playerIcon;
      if ( !this )
        goto LABEL_311;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
  }
  this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
    goto LABEL_311;
  p_mFocusSpot = (UnityEngine_Object_o **)&v2->fields.mFocusSpot;
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)this, 0) )
  {
    *p_mFocusSpot = v153;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)v153, v159, v160);
    v162 = MapZoom_TypeInfo;
    if ( !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v162 = MapZoom_TypeInfo;
    }
    ZOOM_DEFAULT = v162->static_fields->ZOOM_DEFAULT;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23DDF )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23DDF = 1;
    }
    v164 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v164 = TerminalPramsManager_TypeInfo;
    }
    v164->static_fields->mZoomSize = ZOOM_DEFAULT;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v80, 0, 0) )
    {
      *p_mFocusSpot = (UnityEngine_Object_o *)v80;
      v165 = (CGThumbnailListItem_o *)&v2->fields.mFocusSpot;
      v166 = (int)v80;
      goto LABEL_233;
    }
  }
  else if ( eventRaceBoost_k__BackingField )
  {
    *p_mFocusSpot = v153;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)v153, v159, v160);
  }
  else
  {
    v166 = (int)x;
    v165 = (CGThumbnailListItem_o *)&v2->fields.mFocusSpot;
    *p_mFocusSpot = x;
LABEL_233:
    sub_1C2D434(v165, v166, v159, v160);
    v167 = *p_mFocusSpot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v152 &= !UnityEngine_Object__op_Inequality(v167, 0, 0);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsAuto(0) )
    goto LABEL_257;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE0 = 1;
  }
  v169 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v169 = TerminalPramsManager_TypeInfo;
  }
  if ( v169->static_fields->_SpotId_k__BackingField < 0 )
    goto LABEL_257;
  if ( !v169->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v169);
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE0 = 1;
  }
  v170 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v170 = TerminalPramsManager_TypeInfo;
  }
  v171 = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotGameObject(
                                   v2,
                                   v170->static_fields->_SpotId_k__BackingField,
                                   v168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v171, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v171 )
      goto LABEL_311;
    v172 = UnityEngine_GameObject__GetComponent_object_(
             (UnityEngine_GameObject_o *)v171,
             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    *p_mFocusSpot = (UnityEngine_Object_o *)v172;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)v172, v173, v174);
LABEL_266:
    v177 = 0;
  }
  else
  {
LABEL_257:
    if ( (v152 & 1) == 0 )
      goto LABEL_266;
    pos.fields.z = 0.0;
    *(_QWORD *)&pos.fields.x = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapCondMaster___);
    v175 = v2->fields.mMapInfo;
    if ( !v175 || !this )
      goto LABEL_311;
    v177 = 0;
    if ( MapCondMaster__TryGetOnMapCameraOffset((MapCondMaster_o *)this, v175->fields.mapId, &pos, 0, 0, 0) )
    {
      v178 = pos.fields.x;
      v179 = pos.fields.y;
      v180 = pos.fields.z;
      if ( IsMapModel )
      {
        *(UnityEngine_Vector3_o *)&v178 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                            v2,
                                            *(UnityEngine_Vector3_o *)&v178,
                                            method);
        pos.fields.x = v178;
        pos.fields.y = v179;
        pos.fields.z = v180;
      }
      ScrTerminalMap__SetMapCamera(v2, *(UnityEngine_Vector3_o *)&v178, 0.001, 0, v176);
      v177 = 1;
    }
  }
  v181 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v181 = MapModelManager_TypeInfo;
  }
  v2->fields.currentMapLayerId = v181->static_fields->LAYER_LOWER_ID;
  if ( (v177 & 1) == 0 )
  {
    v182 = *p_mFocusSpot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v182, 0, 0) )
    {
      *p_mFocusSpot = v153;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)v153, v183, v184);
    }
    v185 = *p_mFocusSpot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v185, 0, 0) )
    {
      *p_mFocusSpot = x;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)x, v186, v187);
    }
  }
  if ( IsMapModel )
  {
    this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
    if ( !this )
      goto LABEL_311;
    v2->fields.currentMapLayerId = MapModelManager__GetLayerBySpotPrefab(
                                     (MapModelManager_o *)this,
                                     v2->fields.mFocusSpot,
                                     0);
    this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !this )
      goto LABEL_311;
    if ( ((__int64)this->fields.rootEventObjP & 0x80000000) == 0 )
    {
      this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_311;
      SpotPrefab = (UnityEngine_Object_o *)ScrTerminalMap__GetSpotPrefab(v2, (int32_t)this->fields.rootEventObjP, v188);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(SpotPrefab, 0, 0) )
      {
        v2->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)SpotPrefab;
        sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.mFocusSpot, (int32_t)SpotPrefab, v190, v191);
        this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
        if ( !this )
          goto LABEL_311;
        v2->fields.currentMapLayerId = MapModelManager__GetLayerBySpotPrefab(
                                         (MapModelManager_o *)this,
                                         v2->fields.mFocusSpot,
                                         0);
      }
      this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( this )
      {
        LODWORD(this->fields.rootEventObjP) = -1;
        goto LABEL_290;
      }
LABEL_311:
      sub_1C2D6EC(this, method);
    }
LABEL_290:
    this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
    if ( !this )
      goto LABEL_311;
    MapModelManager__SetMapModelCameraPositionByLayer((MapModelManager_o *)this, v2->fields.currentMapLayerId, 0);
    this = (ScrTerminalMap_o *)v2->fields.spotList;
    if ( !this )
      goto LABEL_311;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v207,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
    v208 = v207;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v208,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__) )
    {
      v193 = v208.fields._current;
      if ( !v208.fields._current )
        sub_1C2D6EC(0, v192);
      LODWORD(v208.fields._current[15].klass) = v2->fields.currentMapLayerId;
      SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v193, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v208,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
    this = (ScrTerminalMap_o *)v2->fields.mapModelManager;
    if ( !this )
      goto LABEL_311;
    MapModelManager__UpdateLineDispAll((MapModelManager_o *)this, 0);
  }
  if ( (v177 & 1) == 0 )
  {
    v194 = *p_mFocusSpot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v194, 0, 0) )
      ScrTerminalMap__SetMapCamera_FocusSpot(v2, v2->fields.mFocusSpot, 0.001, IsMapModel, 0, v195);
  }
  eventMapManagerInterface_k__BackingField = v2->fields._eventMapManagerInterface_k__BackingField;
  v197 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v197, (Il2CppObject *)v2, Method_ScrTerminalMap__smfMap2d_SpotMarkCreate_b__288_0__, 0);
  if ( !eventMapManagerInterface_k__BackingField )
    goto LABEL_311;
  klass = eventMapManagerInterface_k__BackingField->klass;
  v199 = *(unsigned __int16 *)&eventMapManagerInterface_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&eventMapManagerInterface_k__BackingField->klass->_2.rank )
  {
    p_offset = (EventMapManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != EventMapManagerInterface_TypeInfo )
    {
      --v199;
      p_offset += 2;
      if ( !v199 )
        goto LABEL_308;
    }
    v201 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
  }
  else
  {
LABEL_308:
    v201 = sub_1C7DCA8(eventMapManagerInterface_k__BackingField, EventMapManagerInterface_TypeInfo, 4);
  }
  (*(void (__fastcall **)(struct EventMapManagerInterface_o *, System_Action_o *, _QWORD))v201)(
    eventMapManagerInterface_k__BackingField,
    v197,
    *(_QWORD *)(v201 + 8));
}


void ScrTerminalMap__smfSetMapChange(ScrTerminalMap_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  void *mapModelManager; // x0
  const MethodInfo *requestedMapId; // x1
  struct System_Collections_Generic_List_UIAtlas__o *assetsAtlases; // x8
  int32_t size; // w2
  int v9; // w9
  struct System_Collections_Generic_List_GameObject__o *mapEffectPrefabList; // x8
  int32_t v11; // w2
  int v12; // w9
  AssetData_o *mapAssetData; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  AssetData_o *mapMultiAssetData; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  MapControl_WarInfo_o *mWarInfo; // x20
  struct MapControl_MapInfo_o *Map; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w21
  int32_t v24; // w21
  struct MapControl_MapInfo_o *ActionMap; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct MapEntity_o *Mine; // x0
  struct MapEntity_o **p_mMapEnt; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int32_t BeforeClearQuestIdForAction_k__BackingField; // w22
  TitleInfoControl_o *titleInfoControl; // x21
  MapEntity_o *mMapEnt; // x23
  struct MapEntity_o *v36; // x8
  int32x2_t v37; // d0
  MapModelManager_o *v38; // x20
  int32_t currentAssetId; // w21
  int32_t currentMapId; // w22
  System_Action_o *v41; // x23
  struct MapControl_MapInfo_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3

  if ( (byte_4C2442D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C2D490(&Method_ScrTerminalMap__smfSetMapChange_b__269_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2442D = 1;
  }
  this->fields._currentMapTexture_k__BackingField = 0;
  *(_WORD *)&this->fields.isFirstFade = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._currentMapTexture_k__BackingField, 0, v2, v3);
  assetsAtlases = this->fields.assetsAtlases;
  if ( !assetsAtlases )
    goto LABEL_52;
  size = assetsAtlases->fields._size;
  v9 = assetsAtlases->fields._version + 1;
  assetsAtlases->fields._size = 0;
  assetsAtlases->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)assetsAtlases->fields._items, 0, size, 0);
  mapEffectPrefabList = this->fields.mapEffectPrefabList;
  if ( !mapEffectPrefabList )
    goto LABEL_52;
  v11 = mapEffectPrefabList->fields._size;
  v12 = mapEffectPrefabList->fields._version + 1;
  mapEffectPrefabList->fields._size = 0;
  mapEffectPrefabList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)mapEffectPrefabList->fields._items, 0, v11, 0);
  ScrTerminalMap__DestroyMapObjs(this, requestedMapId);
  mapAssetData = this->fields.mapAssetData;
  if ( mapAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(mapAssetData, 0);
    this->fields.mapAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapAssetData, 0, v14, v15);
  }
  mapMultiAssetData = this->fields.mapMultiAssetData;
  if ( mapMultiAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(mapMultiAssetData, 0);
    this->fields.mapMultiAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapMultiAssetData, 0, v17, v18);
  }
  mapModelManager = this->fields.mapModelManager;
  if ( mapModelManager )
    MapModelManager__ReleaseAsset((MapModelManager_o *)mapModelManager, 0);
  requestedMapId = (const MethodInfo *)(unsigned int)this->fields.requestedMapId;
  mWarInfo = this->fields.mWarInfo;
  if ( (int)requestedMapId > 0 )
  {
    if ( !mWarInfo )
      goto LABEL_52;
    Map = MapControl_WarInfo__GetMap(this->fields.mWarInfo, (int32_t)requestedMapId, 0);
    this->fields.mMapInfo = Map;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)Map, v21, v22);
LABEL_22:
    v23 = 0;
    goto LABEL_28;
  }
  mapModelManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mapModelManager )
    goto LABEL_52;
  v24 = *((_DWORD *)mapModelManager + 51);
  mapModelManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mapModelManager || !mWarInfo )
    goto LABEL_52;
  ActionMap = MapControl_WarInfo__GetActionMap(mWarInfo, v24, *((_DWORD *)mapModelManager + 52), 0);
  this->fields.mMapInfo = ActionMap;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)ActionMap, v26, v27);
  if ( !this->fields.mMapInfo )
  {
    mapModelManager = this->fields.mWarInfo;
    if ( !mapModelManager )
      goto LABEL_52;
    v42 = MapControl_WarInfo__GetMap((MapControl_WarInfo_o *)mapModelManager, this->fields.currentMapId, 0);
    this->fields.mMapInfo = v42;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapInfo, (int32_t)v42, v43, v44);
    mapModelManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !mapModelManager )
      goto LABEL_52;
    QuestAfterAction__SkipToNextAction((QuestAfterAction_o *)mapModelManager, 0);
    goto LABEL_22;
  }
  v23 = 1;
LABEL_28:
  mapModelManager = this->fields.mMapInfo;
  if ( !mapModelManager )
    goto LABEL_52;
  this->fields.currentMapId = *((_DWORD *)mapModelManager + 5);
  Mine = MapControl_MapInfo__GetMine((MapControl_MapInfo_o *)mapModelManager, 0);
  p_mMapEnt = &this->fields.mMapEnt;
  this->fields.mMapEnt = Mine;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mMapEnt, (int32_t)Mine, v30, v31);
  mapModelManager = this->fields.mWarInfo;
  if ( !mapModelManager )
    goto LABEL_52;
  if ( MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)mapModelManager, 0) )
  {
    mapModelManager = ScrTerminalMap__GetSaveKey_PlayerMap(this, requestedMapId);
    mMapInfo = this->fields.mMapInfo;
    if ( !mMapInfo )
      goto LABEL_52;
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)mapModelManager, mMapInfo->fields.mapId, 0);
  }
  mapModelManager = this->fields.titleInfoControl;
  this->fields.requestedMapId = -1;
  if ( !mapModelManager )
    goto LABEL_52;
  TitleInfoControl__setHeaderBgImg((TitleInfoControl_o *)mapModelManager, this->fields.currentWarId, 0);
  if ( v23 )
    BeforeClearQuestIdForAction_k__BackingField = this->fields._BeforeClearQuestIdForAction_k__BackingField;
  else
    BeforeClearQuestIdForAction_k__BackingField = 0;
  titleInfoControl = this->fields.titleInfoControl;
  mMapEnt = this->fields.mMapEnt;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21463 = 1;
  }
  mapModelManager = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    mapModelManager = TerminalPramsManager_TypeInfo;
  }
  if ( !mMapEnt )
    goto LABEL_52;
  mapModelManager = (void *)MapEntity__GetPrioredHeaderId(
                              mMapEnt,
                              BeforeClearQuestIdForAction_k__BackingField,
                              *(_DWORD *)(*((_QWORD *)mapModelManager + 23) + 24LL) + 1,
                              0);
  if ( !titleInfoControl )
    goto LABEL_52;
  TitleInfoControl__setTitleImgFromBanner(titleInfoControl, (int32_t)mapModelManager, 1, 1, 0, 0);
  mapModelManager = *p_mMapEnt;
  if ( !*p_mMapEnt )
    goto LABEL_52;
  mapModelManager = (void *)MapEntity__GetPrioredMapImageId((MapEntity_o *)mapModelManager, 0);
  v36 = this->fields.mMapEnt;
  this->fields.currentMapImageId = (int)mapModelManager;
  if ( !v36 )
    goto LABEL_52;
  v37.n64_u64[0] = *(unsigned __int64 *)&v36->fields.mapImageW;
  *(int32x2_t *)&this->fields._currentMapImageW_k__BackingField = v37;
  *(float32x2_t *)&this->fields.mapImageOffsetX = vmul_f32(vcvt_f32_s32(v37), (float32x2_t)0x3F0000003F000000LL);
  ScrTerminalMap__AttachEventMapManager(this, requestedMapId);
  v38 = this->fields.mapModelManager;
  currentMapId = this->fields.currentMapId;
  currentAssetId = this->fields.currentAssetId;
  v41 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_ScrTerminalMap__smfSetMapChange_b__269_0__, 0);
  if ( !v38 )
LABEL_52:
    sub_1C2D6EC(mapModelManager, requestedMapId);
  MapModelManager__LoadMapModel(v38, currentAssetId, currentMapId, v41, 0);
}


void ScrTerminalMap__smfSpotBtn_Click(
        ScrTerminalMap_o *this,
        UnityEngine_GameObject_o *spotObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MapControl_WarInfo_o *Component_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  MapControl_WarInfo_o *v9; // x20
  int32_t DEFAULT_WAR_CHECK_STATUS; // w23
  TerminalPramsManager_c *v11; // x0
  bool IsMultiMap; // w0
  const MethodInfo *v13; // x2
  System_String_o *SaveKey_PlayerIcon; // x0
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  Il2CppObject *MasterData_object; // x21
  MapControl_WarInfo_o *v18; // x8
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  if ( (byte_4C2447D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19108/*"evSpotSelect_GoQuestSelect"*/);
    byte_4C2447D = 1;
  }
  this->fields.spotTouchObj = spotObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.spotTouchObj, (int32_t)spotObject, (int32_t)method, v3);
  if ( !spotObject )
    goto LABEL_39;
  Component_object = (MapControl_WarInfo_o *)UnityEngine_GameObject__GetComponent_object_(
                                               spotObject,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
  if ( !Component_object )
    goto LABEL_39;
  v9 = Component_object;
  DEFAULT_WAR_CHECK_STATUS = Component_object[2].fields.DEFAULT_WAR_CHECK_STATUS;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE6 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_SpotId_k__BackingField = DEFAULT_WAR_CHECK_STATUS;
  this->fields.isEventBoardGameQuestListView = 1;
  ScrTerminalMap__SetPlayerIcon(this, spotObject, v8);
  Component_object = this->fields.mWarInfo;
  if ( !Component_object )
    goto LABEL_39;
  IsMultiMap = MapControl_WarInfo__IsMultiMap(Component_object, 0);
  SaveKey_PlayerIcon = ScrTerminalMap__GetSaveKey_PlayerIcon(this, IsMultiMap, v13);
  UnityEngine_PlayerPrefs__SetInt(SaveKey_PlayerIcon, v9[2].fields.DEFAULT_WAR_CHECK_STATUS, 0);
  Component_object = (MapControl_WarInfo_o *)this->fields.titleInfoControl;
  if ( !Component_object )
    goto LABEL_39;
  TitleInfoControl__setBackBtnSprite_39620988((TitleInfoControl_o *)Component_object, 1, 1, 0, 0);
  Component_object = (MapControl_WarInfo_o *)this->fields.titleInfoControl;
  if ( !Component_object )
    goto LABEL_39;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Component_object, 0, 0);
  Component_object = (MapControl_WarInfo_o *)this->fields.titleInfoControl;
  if ( !Component_object )
    goto LABEL_39;
  TitleInfoControl__SetDispChangeBtn((TitleInfoControl_o *)Component_object, 0, 0);
  if ( !byte_4C244F6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F6 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( v15->static_fields->_SelectedStoryQuestId_k__BackingField >= 1 )
  {
    if ( !v15->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v15);
    if ( !byte_4C242EA )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C242EA = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    if ( !v16->static_fields->_SelectedRecollectionWarId_k__BackingField )
    {
      Component_object = (MapControl_WarInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Component_object )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Component_object,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C244F6 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C244F6 = 1;
        }
        Component_object = (MapControl_WarInfo_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Component_object = (MapControl_WarInfo_o *)TerminalPramsManager_TypeInfo;
        }
        if ( MasterData_object )
        {
          Component_object = (MapControl_WarInfo_o *)QuestMaster__getQuestEntity(
                                                       (QuestMaster_o *)MasterData_object,
                                                       *(_DWORD *)(Component_object[2].fields.createdDateTime + 32),
                                                       0);
          if ( Component_object )
          {
            v18 = Component_object;
            Component_object = (MapControl_WarInfo_o *)this->fields.titleInfoControl;
            if ( Component_object )
            {
              TitleInfoControl__SetBackStoryButtonEnable(
                (TitleInfoControl_o *)Component_object,
                v9[2].fields.DEFAULT_WAR_CHECK_STATUS == v18->fields.mapUpdateState,
                0);
              goto LABEL_38;
            }
          }
        }
      }
LABEL_39:
      sub_1C2D6EC(Component_object, v7);
    }
  }
LABEL_38:
  ActionExtensions__Call(this->fields.mSpotClickAct, 0);
  this->fields.mSpotClickAct = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mSpotClickAct, 0, v19, v20);
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_19108/*"evSpotSelect_GoQuestSelect"*/, v21);
}


void ScrTerminalMap__smfSpot_SetPos(ScrTerminalMap_o *this, int32_t spotId, const MethodInfo *method)
{
  if ( (byte_4C24425 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19109/*"evSpotSet_Finish"*/);
    byte_4C24425 = 1;
  }
  ScrTerminalMap__mfCallFsmEvent(this, (System_String_o *)StringLiteral_19109/*"evSpotSet_Finish"*/, method);
}


void ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401___ctor(
        ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401__MoveNext(
        ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  struct ScrTerminalMap___c__DisplayClass401_0_o **p__8__1; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ScrTerminalMap___c__DisplayClass401_0_o *v11; // x0
  struct System_Action_o *callback; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ScrTerminalMap_o *v15; // x1
  struct ScrTerminalMap___c__DisplayClass401_0_o *v16; // x8
  UnityEngine_WaitForSeconds_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool result; // w0
  ScrTerminalMap_o *_4__this; // x20
  Il2CppObject *_8__1; // x21
  System_Action_o *v24; // x19

  if ( (byte_4C24534 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass401_0__EventBoardCameraActionAuto_IE_b__0__);
    sub_1C2D490(&ScrTerminalMap___c__DisplayClass401_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C24534 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      _8__1,
      Method_ScrTerminalMap___c__DisplayClass401_0__EventBoardCameraActionAuto_IE_b__0__,
      0);
    if ( !_4__this )
      goto LABEL_12;
    ScrTerminalMap__EventBoardCameraAction(_4__this, v24, 1, 0, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C2D6DC(ScrTerminalMap___c__DisplayClass401_0_TypeInfo);
    System_Object___ctor(v4, 0);
    this->fields.__8__1 = (struct ScrTerminalMap___c__DisplayClass401_0_o *)v4;
    p__8__1 = &this->fields.__8__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v4, v6, v7);
    v11 = this->fields.__8__1;
    if ( v11 )
    {
      callback = this->fields.callback;
      v11->fields.callback = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&v11->fields, (int32_t)callback, v9, v10);
      v11 = this->fields.__8__1;
      if ( v11 )
      {
        v15 = this->fields.__4__this;
        v11->fields.__4__this = v15;
        sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.__4__this, (int32_t)v15, v13, v14);
        v16 = *p__8__1;
        if ( *p__8__1 )
        {
          *(_QWORD *)&v16->fields.squareId = *(_QWORD *)&this->fields.squareId;
          v16->fields.maxClearCount = this->fields.maxClearCount;
          v17 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v17, 0.5, 0);
          this->fields.__2__current = (Il2CppObject *)v17;
          p__2__current = &this->fields.__2__current;
          sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v17, v19, v20);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
    }
LABEL_12:
    sub_1C2D6EC(v11, v8);
  }
  return 0;
}


Il2CppObject *ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401__System_Collections_IEnumerator_Reset(
        ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401__System_Collections_IEnumerator_get_Current(
        ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401__System_IDisposable_Dispose(
        ScrTerminalMap__EventBoardCameraActionAuto_IE_d__401_o *this,
        const MethodInfo *method)
{
  ;
}


void ScrTerminalMap__WaitConnecting_d__249___ctor(
        ScrTerminalMap__WaitConnecting_d__249_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ScrTerminalMap__WaitConnecting_d__249__MoveNext(
        ScrTerminalMap__WaitConnecting_d__249_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  ManagerConfig_c *v4; // x0
  float SLOW_CONNECT_WAIT_TIME; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  ScrTerminalMap___c_c *v13; // x0
  System_Func_bool__o *_9__249_0; // x20
  Il2CppObject *v15; // x21
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_WaitWhile_o *v19; // x21
  Il2CppObject **v20; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C24535 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__WaitConnecting_b__249_0__);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C24535 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
      return 0;
    }
LABEL_23:
    sub_1C2D6EC(Instance, v12);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v4 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v4 = ManagerConfig_TypeInfo;
      }
      SLOW_CONNECT_WAIT_TIME = v4->static_fields->SLOW_CONNECT_WAIT_TIME;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, SLOW_CONNECT_WAIT_TIME, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !NetworkManager__CommunicationIsBusy(0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
  v13 = ScrTerminalMap___c_TypeInfo;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v13 = ScrTerminalMap___c_TypeInfo;
  }
  _9__249_0 = v13->static_fields->__9__249_0;
  if ( !_9__249_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ScrTerminalMap___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__249_0 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__249_0, v15, Method_ScrTerminalMap___c__WaitConnecting_b__249_0__, 0);
    static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
    static_fields->__9__249_0 = _9__249_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__249_0, (int32_t)_9__249_0, v17, v18);
  }
  v19 = (UnityEngine_WaitWhile_o *)sub_1C2D6DC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v19, _9__249_0, 0);
  this->fields.__2__current = (Il2CppObject *)v19;
  v20 = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)v20, (int32_t)v19, v21, v22);
  *((_DWORD *)v20 - 2) = 2;
  return 1;
}


Il2CppObject *ScrTerminalMap__WaitConnecting_d__249__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ScrTerminalMap__WaitConnecting_d__249_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ScrTerminalMap__WaitConnecting_d__249__System_Collections_IEnumerator_Reset(
        ScrTerminalMap__WaitConnecting_d__249_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ScrTerminalMap__WaitConnecting_d__249_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *ScrTerminalMap__WaitConnecting_d__249__System_Collections_IEnumerator_get_Current(
        ScrTerminalMap__WaitConnecting_d__249_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ScrTerminalMap__WaitConnecting_d__249__System_IDisposable_Dispose(
        ScrTerminalMap__WaitConnecting_d__249_o *this,
        const MethodInfo *method)
{
  ;
}


void ScrTerminalMap__WaitScriptLoad_d__316___ctor(
        ScrTerminalMap__WaitScriptLoad_d__316_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ScrTerminalMap__WaitScriptLoad_d__316__MoveNext(
        ScrTerminalMap__WaitScriptLoad_d__316_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  ScrTerminalMap___c_c *v4; // x0
  System_Func_bool__o *_9__316_0; // x20
  Il2CppObject *v6; // x21
  struct ScrTerminalMap___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_WaitUntil_o *v10; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  struct ScrTerminalMap_o *_4__this; // x19
  MapButtonControl_o *mapButtonGrid; // x0
  ScrTerminalMap___c_c *v17; // x0
  System_Func_bool__o *_9__316_1; // x20
  Il2CppObject *v19; // x21
  struct ScrTerminalMap___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_WaitUntil_o *v23; // x21
  Il2CppObject **v24; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C24536 & 1) == 0 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__WaitScriptLoad_b__316_0__);
    sub_1C2D490(&Method_ScrTerminalMap___c__WaitScriptLoad_b__316_1__);
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C2D490(&StringLiteral_6973/*"GO_NEXT"*/);
    byte_4C24536 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4C24714 )
    {
      sub_1C2D490(&BgmManager_TypeInfo);
      byte_4C24714 = 1;
    }
    mapButtonGrid = (MapButtonControl_o *)BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      mapButtonGrid = (MapButtonControl_o *)BgmManager_TypeInfo;
    }
    if ( LOBYTE(mapButtonGrid[1].fields.buttons->m_Items[0]) )
    {
      if ( !LODWORD(mapButtonGrid[2].fields.m_CachedPtr) )
        j_il2cpp_runtime_class_init_0(mapButtonGrid);
      BgmManager__SetMute(0, 0);
    }
    if ( _4__this )
    {
      mapButtonGrid = _4__this->fields.mapButtonGrid;
      if ( mapButtonGrid )
      {
        MapButtonControl__FrameIn(mapButtonGrid, 0);
        ScrTerminalMap__mfCallFsmEvent(_4__this, (System_String_o *)StringLiteral_6973/*"GO_NEXT"*/, 0);
        return 0;
      }
    }
LABEL_39:
    sub_1C2D6EC(mapButtonGrid, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v4 = ScrTerminalMap___c_TypeInfo;
      if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
        v4 = ScrTerminalMap___c_TypeInfo;
      }
      _9__316_0 = v4->static_fields->__9__316_0;
      if ( !_9__316_0 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = ScrTerminalMap___c_TypeInfo;
        }
        v6 = (Il2CppObject *)v4->static_fields->__9;
        _9__316_0 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(_9__316_0, v6, Method_ScrTerminalMap___c__WaitScriptLoad_b__316_0__, 0);
        static_fields = ScrTerminalMap___c_TypeInfo->static_fields;
        static_fields->__9__316_0 = _9__316_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__316_0, (int32_t)_9__316_0, v8, v9);
      }
      v10 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v10, _9__316_0, 0);
      this->fields.__2__current = (Il2CppObject *)v10;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v10, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  mapButtonGrid = (MapButtonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !mapButtonGrid )
    goto LABEL_39;
  if ( ScriptManager__IsJumpLine((ScriptManager_o *)mapButtonGrid, 0) )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    BgmManager__SetMute(1, 0);
  }
  v17 = ScrTerminalMap___c_TypeInfo;
  if ( !ScrTerminalMap___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap___c_TypeInfo);
    v17 = ScrTerminalMap___c_TypeInfo;
  }
  _9__316_1 = v17->static_fields->__9__316_1;
  if ( !_9__316_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ScrTerminalMap___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__316_1 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__316_1, v19, Method_ScrTerminalMap___c__WaitScriptLoad_b__316_1__, 0);
    v20 = ScrTerminalMap___c_TypeInfo->static_fields;
    v20->__9__316_1 = _9__316_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v20->__9__316_1, (int32_t)_9__316_1, v21, v22);
  }
  v23 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v23, _9__316_1, 0);
  this->fields.__2__current = (Il2CppObject *)v23;
  v24 = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)v24, (int32_t)v23, v25, v26);
  *((_DWORD *)v24 - 2) = 2;
  return 1;
}


Il2CppObject *ScrTerminalMap__WaitScriptLoad_d__316__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ScrTerminalMap__WaitScriptLoad_d__316_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ScrTerminalMap__WaitScriptLoad_d__316__System_Collections_IEnumerator_Reset(
        ScrTerminalMap__WaitScriptLoad_d__316_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ScrTerminalMap__WaitScriptLoad_d__316_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *ScrTerminalMap__WaitScriptLoad_d__316__System_Collections_IEnumerator_get_Current(
        ScrTerminalMap__WaitScriptLoad_d__316_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ScrTerminalMap__WaitScriptLoad_d__316__System_IDisposable_Dispose(
        ScrTerminalMap__WaitScriptLoad_d__316_o *this,
        const MethodInfo *method)
{
  ;
}


void ScrTerminalMap___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2450F & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap___c_TypeInfo);
    byte_4C2450F = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ScrTerminalMap___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScrTerminalMap___c_TypeInfo->static_fields->__9 = (struct ScrTerminalMap___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ScrTerminalMap___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ScrTerminalMap___c___ctor(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c___MapTouchEnableAuto_b__338_1(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  ;
}


bool ScrTerminalMap___c___OnTouchDisp_b__438_0(
        ScrTerminalMap___c_o *this,
        MapGimmickComponent_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C2D6EC(this, 0);
  return MapGimmickComponent__IsTouched(v, 0);
}


int32_t ScrTerminalMap___c___SetBoardGameSquareHaveToken_b__409_0(
        ScrTerminalMap___c_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return QuestEntity__getPriority(x, 0);
}


void ScrTerminalMap___c___SetupEventBoardGame_b__372_0(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  ;
}


void ScrTerminalMap___c___StartEventQuestCheckNewOpen_b__346_0(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  ;
}


bool ScrTerminalMap___c___TryAutoQuest_b__418_0(
        ScrTerminalMap___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  int64_t value; // x19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4C24515 & 1) == 0 )
  {
    this = (ScrTerminalMap___c_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24515 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  value = x->fields.value;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244EA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return value == v5->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


bool ScrTerminalMap___c___UpdateBoardGameSquare_b__402_0(
        ScrTerminalMap___c_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C24514 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C24514 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  return QuestTree__CheckMapGimmickCond_36417004((QuestTree_o *)Instance, x, 0);
}


bool ScrTerminalMap___c___WaitConnecting_b__249_0(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  if ( (byte_4C24510 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C24510 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__CommunicationIsBusy(0);
}


bool ScrTerminalMap___c___WaitScriptLoad_b__316_0(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24511 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C24511 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  return !ScriptManager__get_IsLoading((ScriptManager_o *)Instance, 0);
}


bool ScrTerminalMap___c___WaitScriptLoad_b__316_1(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24512 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C24512 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  return !ScriptManager__IsJumpLine((ScriptManager_o *)Instance, 0);
}


void ScrTerminalMap___c___mcbfMapTouchDisable_b__359_7(ScrTerminalMap___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24513 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C24513 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v3);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0);
}


void ScrTerminalMap___c__DisplayClass248_0___ctor(
        ScrTerminalMap___c__DisplayClass248_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass248_0___BeginRaidUpdateRequest_b__0(
        ScrTerminalMap___c__DisplayClass248_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  struct ScrTerminalMap_o *_4__this; // x8

  TopHomeRequest__UpdateAccessTime(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(v4, v5);
  _4__this->fields._IsCheckExpiration_k__BackingField = 1;
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass252_0___ctor(
        ScrTerminalMap___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass252_0___CheckRaidTimeLimit_b__0(
        ScrTerminalMap___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  ScrTerminalMap_c *v3; // x0
  System_String_o *RAID_TIME_OVER_NOTICE_KEY; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0

  v2 = (int)this;
  if ( (byte_4C24516 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    byte_4C24516 = 1;
  }
  v3 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v3 = ScrTerminalMap_TypeInfo;
  }
  RAID_TIME_OVER_NOTICE_KEY = v3->static_fields->RAID_TIME_OVER_NOTICE_KEY;
  v5 = System_Int32__ToString(v2 + 16, 0);
  v6 = System_String__Concat_63457864(RAID_TIME_OVER_NOTICE_KEY, v5, 0);
  UnityEngine_PlayerPrefs__SetInt(v6, 1, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void ScrTerminalMap___c__DisplayClass259_0___ctor(
        ScrTerminalMap___c__DisplayClass259_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass259_0___MovePlayerIcon_b__0(
        ScrTerminalMap___c__DisplayClass259_0_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *_4__this; // x8
  ScrTerminalMap___c__DisplayClass259_0_o *v3; // x19
  struct ScrTerminalMap_o *v4; // x20
  bool IsMultiMap; // w0
  System_String_o *SaveKey_PlayerIcon; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        GameObjectExtensions__SetLocalPosition(_4__this->fields.playerIcon, _4__this->fields.PLAYER_ICON_POS, 0),
        (v4 = v3->fields.__4__this) == 0)
    || (this = (ScrTerminalMap___c__DisplayClass259_0_o *)v4->fields.mWarInfo) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  IsMultiMap = MapControl_WarInfo__IsMultiMap((MapControl_WarInfo_o *)this, 0);
  SaveKey_PlayerIcon = ScrTerminalMap__GetSaveKey_PlayerIcon(v4, IsMultiMap, 0);
  UnityEngine_PlayerPrefs__SetInt(SaveKey_PlayerIcon, v3->fields.spotId, 0);
  ActionExtensions__Call(v3->fields.endFunc, 0);
}


void ScrTerminalMap___c__DisplayClass259_0___MovePlayerIcon_b__1(
        ScrTerminalMap___c__DisplayClass259_0_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *_4__this; // x8
  struct EasingObject_o *easingObject; // x9
  UnityEngine_GameObject_o *playerIcon; // x19
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this || (easingObject = this->fields.easingObject) == 0 )
    sub_1C2D6EC(this, method);
  playerIcon = _4__this->fields.playerIcon;
  v5 = Easing__Func(this->fields.from, this->fields.to, easingObject->fields.mNow, 0, 0);
  GameObjectExtensions__SetPosition(playerIcon, v5, 0);
}


void ScrTerminalMap___c__DisplayClass262_0___ctor(
        ScrTerminalMap___c__DisplayClass262_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass262_0___LoadMap_b__0(
        ScrTerminalMap___c__DisplayClass262_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0
  AssetLoader_LoadEndDataHandler_o *_9__3; // x21
  System_String_o *assetMapName; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C24518 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__3__);
    byte_4C24518 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  ScrTerminalMap__SetupFeildConfiguration(_4__this, 0);
  _9__3 = this->fields.__9__3;
  assetMapName = this->fields.assetMapName;
  if ( !_9__3 )
  {
    _9__3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v6, v7);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetMapName, _9__3, 1, 0);
}


void ScrTerminalMap___c__DisplayClass262_0___LoadMap_b__2(
        ScrTerminalMap___c__DisplayClass262_0_o *this,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScrTerminalMap___c__DisplayClass262_0_o *v5; // x19
  struct ScrTerminalMap_o *_4__this; // x8
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  ScrTerminalMap_o *v10; // x20
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v12; // x0
  System_String_o *AssetAtlasName; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  ScrTerminalMap_o *v17; // x20
  AssetData_o *mapMultiAssetData; // x21
  struct ScrTerminalMap_o *v19; // x8
  System_String_o *MultiMapAssetAtlasName; // x0
  Il2CppObject *v21; // x19
  System_Action_o *v22; // x20
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4C24517 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass262_0_o *)sub_1C2D490(&Method_ScrTerminalMap_LoadEventMap__);
    byte_4C24517 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.mapMultiAssetData = multiAssetData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&_4__this->fields.mapMultiAssetData,
    (int32_t)multiAssetData,
    (int32_t)method,
    v3);
  v10 = v5->fields.__4__this;
  if ( !v10 )
    goto LABEL_12;
  mapAssetData = v10->fields.mapAssetData;
  currentAssetId = v10->fields.currentAssetId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v7, v8, v9);
  AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v10, v12, 0);
  ScrTerminalMap__LoadAssetsAtlases(v10, mapAssetData, AssetAtlasName, 0);
  v17 = v5->fields.__4__this;
  if ( !v17 )
    goto LABEL_12;
  mapMultiAssetData = v17->fields.mapMultiAssetData;
  v23 = v17->fields.currentAssetId;
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v14, v15, v16);
  v19 = v5->fields.__4__this;
  if ( !v19 )
    goto LABEL_12;
  MultiMapAssetAtlasName = ScrTerminalMap__GetMultiMapAssetAtlasName(v17, (Il2CppObject *)this, v19->fields.mMapEnt, 0);
  ScrTerminalMap__LoadAssetsAtlases(v17, mapMultiAssetData, MultiMapAssetAtlasName, 0);
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_12;
  ScrTerminalMap__LoadMapEffectPrefab((ScrTerminalMap_o *)this, (AssetData_o *)this[4].fields.assetMapName, 0);
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)v5->fields.__4__this;
  if ( !this
    || (ScrTerminalMap__LoadEventMapObject((ScrTerminalMap_o *)this, (AssetData_o *)this[4].fields.assetMapName, 0),
        (this = (ScrTerminalMap___c__DisplayClass262_0_o *)v5->fields.__4__this) == 0)
    || (ScrTerminalMap__SetupMapGimmickBasePrefab(
          (ScrTerminalMap_o *)this,
          (MapEntity_o *)this[6].fields.__9__2,
          (AssetData_o *)this[4].fields.assetMapName,
          (AssetData_o *)this[4].fields.__9__2,
          0),
        v21 = (Il2CppObject *)v5->fields.__4__this,
        v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v22, v21, Method_ScrTerminalMap_LoadEventMap__, 0),
        !v21) )
  {
LABEL_12:
    sub_1C2D6EC(this, multiAssetData);
  }
  ScrTerminalMap__LoadMapImgTex((ScrTerminalMap_o *)v21, v22, 0);
}


void ScrTerminalMap___c__DisplayClass262_0___LoadMap_b__3(
        ScrTerminalMap___c__DisplayClass262_0_o *this,
        AssetData_o *asData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *v4; // x20
  __int64 _4__this; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct ScrTerminalMap_o *v10; // x20
  struct ScrTerminalMap_o *v11; // x8
  System_String_o *AssetMultiMapName; // x0
  AssetLoader_LoadEndDataHandler_o *_9__4; // x21
  System_String_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct ScrTerminalMap_o *v20; // x20
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v22; // x0
  System_String_o *AssetAtlasName; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct ScrTerminalMap_o *v27; // x8
  System_String_o *ASSETS_NAME_MAP_GIMMICK; // x20
  Il2CppObject *v29; // x0
  struct ScrTerminalMap_o *v30; // x20
  Il2CppObject *Object_object__51051712; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x19
  System_Action_o *v35; // x20
  int32_t v36; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  v4 = asData;
  if ( (byte_4C24519 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_LoadEventMap__);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__4__);
    byte_4C24519 = 1;
  }
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  *(_QWORD *)(_4__this + 248) = v4;
  sub_1C2D434((CGThumbnailListItem_o *)(_4__this + 248), (int32_t)v4, (int32_t)method, v3);
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  _4__this = ScrTerminalMap__IsMapChangeable((ScrTerminalMap_o *)_4__this, 0);
  if ( (_4__this & 1) == 0 )
    goto LABEL_13;
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_25;
  currentAssetId = v10->fields.currentAssetId;
  _4__this = j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v7, v8, v9);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_25;
  AssetMultiMapName = ScrTerminalMap__GetAssetMultiMapName(v10, (Il2CppObject *)_4__this, v11->fields.mMapEnt, 0);
  _9__4 = this->fields.__9__4;
  v14 = AssetMultiMapName;
  if ( !_9__4 )
  {
    _9__4 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v15, v16);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v14, _9__4, 1, 0) )
  {
LABEL_13:
    _4__this = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
      v20 = this->fields.__4__this;
      if ( v20 )
      {
        mapAssetData = v20->fields.mapAssetData;
        v37 = v20->fields.currentAssetId;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v17, v18, v19);
        AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v20, v22, 0);
        ScrTerminalMap__LoadAssetsAtlases(v20, mapAssetData, AssetAtlasName, 0);
        _4__this = (__int64)this->fields.__4__this;
        if ( _4__this )
        {
          ScrTerminalMap__LoadMapEffectPrefab((ScrTerminalMap_o *)_4__this, *(AssetData_o **)(_4__this + 248), 0);
          _4__this = (__int64)this->fields.__4__this;
          if ( _4__this )
          {
            ScrTerminalMap__LoadEventMapObject((ScrTerminalMap_o *)_4__this, *(AssetData_o **)(_4__this + 248), 0);
            _4__this = (__int64)ScrTerminalMap_TypeInfo;
            if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
            v27 = this->fields.__4__this;
            if ( v27 )
            {
              ASSETS_NAME_MAP_GIMMICK = ScrTerminalMap_TypeInfo->static_fields->ASSETS_NAME_MAP_GIMMICK;
              v36 = v27->fields.currentAssetId;
              v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v24, v25, v26);
              _4__this = (__int64)System_String__Format(ASSETS_NAME_MAP_GIMMICK, v29, 0);
              v30 = this->fields.__4__this;
              if ( v30 )
              {
                asData = (AssetData_o *)_4__this;
                _4__this = (__int64)v30->fields.mapAssetData;
                if ( _4__this )
                {
                  Object_object__51051712 = AssetData__GetObject_object__51051712(
                                              (AssetData_o *)_4__this,
                                              (System_String_o *)asData,
                                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
                  v30->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)Object_object__51051712;
                  sub_1C2D434(
                    (CGThumbnailListItem_o *)&v30->fields.mapGimmickPrefab,
                    (int32_t)Object_object__51051712,
                    v32,
                    v33);
                  v34 = (Il2CppObject *)this->fields.__4__this;
                  v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(v35, v34, Method_ScrTerminalMap_LoadEventMap__, 0);
                  if ( v34 )
                  {
                    ScrTerminalMap__LoadMapImgTex((ScrTerminalMap_o *)v34, v35, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C2D6EC(_4__this, asData);
  }
}


void ScrTerminalMap___c__DisplayClass262_0___LoadMap_b__4(
        ScrTerminalMap___c__DisplayClass262_0_o *this,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScrTerminalMap___c__DisplayClass262_0_o *v5; // x19
  struct ScrTerminalMap_o *_4__this; // x8
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  ScrTerminalMap_o *v10; // x20
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v12; // x0
  System_String_o *AssetAtlasName; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  ScrTerminalMap_o *v17; // x20
  AssetData_o *mapMultiAssetData; // x21
  struct ScrTerminalMap_o *v19; // x8
  System_String_o *MultiMapAssetAtlasName; // x0
  Il2CppObject *v21; // x19
  System_Action_o *v22; // x20
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4C2451A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_LoadEventMap__);
    this = (ScrTerminalMap___c__DisplayClass262_0_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2451A = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.mapMultiAssetData = multiAssetData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&_4__this->fields.mapMultiAssetData,
    (int32_t)multiAssetData,
    (int32_t)method,
    v3);
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  v10 = v5->fields.__4__this;
  if ( !v10 )
    goto LABEL_13;
  mapAssetData = v10->fields.mapAssetData;
  currentAssetId = v10->fields.currentAssetId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v7, v8, v9);
  AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v10, v12, 0);
  ScrTerminalMap__LoadAssetsAtlases(v10, mapAssetData, AssetAtlasName, 0);
  v17 = v5->fields.__4__this;
  if ( !v17 )
    goto LABEL_13;
  mapMultiAssetData = v17->fields.mapMultiAssetData;
  v23 = v17->fields.currentAssetId;
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v14, v15, v16);
  v19 = v5->fields.__4__this;
  if ( !v19 )
    goto LABEL_13;
  MultiMapAssetAtlasName = ScrTerminalMap__GetMultiMapAssetAtlasName(v17, (Il2CppObject *)this, v19->fields.mMapEnt, 0);
  ScrTerminalMap__LoadAssetsAtlases(v17, mapMultiAssetData, MultiMapAssetAtlasName, 0);
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  ScrTerminalMap__LoadMapEffectPrefab((ScrTerminalMap_o *)this, (AssetData_o *)this[4].fields.assetMapName, 0);
  this = (ScrTerminalMap___c__DisplayClass262_0_o *)v5->fields.__4__this;
  if ( !this
    || (ScrTerminalMap__LoadEventMapObject((ScrTerminalMap_o *)this, (AssetData_o *)this[4].fields.assetMapName, 0),
        (this = (ScrTerminalMap___c__DisplayClass262_0_o *)v5->fields.__4__this) == 0)
    || (ScrTerminalMap__SetupMapGimmickBasePrefab(
          (ScrTerminalMap_o *)this,
          (MapEntity_o *)this[6].fields.__9__2,
          (AssetData_o *)this[4].fields.assetMapName,
          (AssetData_o *)this[4].fields.__9__2,
          0),
        v21 = (Il2CppObject *)v5->fields.__4__this,
        v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v22, v21, Method_ScrTerminalMap_LoadEventMap__, 0),
        !v21) )
  {
LABEL_13:
    sub_1C2D6EC(this, multiAssetData);
  }
  ScrTerminalMap__LoadMapImgTex((ScrTerminalMap_o *)v21, v22, 0);
}


void ScrTerminalMap___c__DisplayClass262_1___ctor(
        ScrTerminalMap___c__DisplayClass262_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass262_1___LoadMap_b__1(
        ScrTerminalMap___c__DisplayClass262_1_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass262_1_o *v2; // x19
  struct ScrTerminalMap___c__DisplayClass262_0_o *CS___8__locals1; // x20
  struct ScrTerminalMap_o *_4__this; // x8
  struct System_Collections_Generic_List_UIAtlas__o *assetsAtlases; // x8
  int32_t size; // w2
  int v7; // w9
  System_String_o *assetMultiMapName; // x21
  AssetLoader_LoadEndDataHandler_o *_9__2; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct ScrTerminalMap___c__DisplayClass262_0_o *v15; // x8
  ScrTerminalMap_o *v16; // x20
  AssetData_o *mapAssetData; // x21
  Il2CppObject *v18; // x0
  System_String_o *AssetAtlasName; // x0
  struct ScrTerminalMap___c__DisplayClass262_0_o *v20; // x8
  struct ScrTerminalMap___c__DisplayClass262_0_o *v21; // x8
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct ScrTerminalMap___c__DisplayClass262_0_o *v25; // x8
  struct ScrTerminalMap_o *v26; // x8
  struct ScrTerminalMap_o *v27; // x20
  Il2CppObject *v28; // x0
  struct ScrTerminalMap___c__DisplayClass262_0_o *v29; // x8
  struct ScrTerminalMap_o *v30; // x20
  Il2CppObject *Object_object__51051712; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct ScrTerminalMap___c__DisplayClass262_0_o *v34; // x8
  Il2CppObject *v35; // x19
  System_Action_o *v36; // x20
  int32_t v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t currentAssetId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C2451B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_LoadEventMap__);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass262_1_o *)sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__2__);
    byte_4C2451B = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  assetsAtlases = _4__this->fields.assetsAtlases;
  if ( !assetsAtlases )
    goto LABEL_30;
  size = assetsAtlases->fields._size;
  v7 = assetsAtlases->fields._version + 1;
  assetsAtlases->fields._size = 0;
  assetsAtlases->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)assetsAtlases->fields._items, 0, size, 0);
    CS___8__locals1 = v2->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_30;
  }
  assetMultiMapName = v2->fields.assetMultiMapName;
  _9__2 = CS___8__locals1->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_ScrTerminalMap___c__DisplayClass262_0__LoadMap_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (ScrTerminalMap___c__DisplayClass262_1_o *)AssetManager__loadAssetStorage(assetMultiMapName, _9__2, 1, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v15 = v2->fields.CS___8__locals1;
    if ( v15 )
    {
      v16 = v15->fields.__4__this;
      if ( v16 )
      {
        mapAssetData = v16->fields.mapAssetData;
        currentAssetId = v16->fields.currentAssetId;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentAssetId, v12, v13, v14);
        AssetAtlasName = ScrTerminalMap__GetAssetAtlasName(v16, v18, 0);
        ScrTerminalMap__LoadAssetsAtlases(v16, mapAssetData, AssetAtlasName, 0);
        v20 = v2->fields.CS___8__locals1;
        if ( v20 )
        {
          this = (ScrTerminalMap___c__DisplayClass262_1_o *)v20->fields.__4__this;
          if ( this )
          {
            ScrTerminalMap__LoadMapEffectPrefab(
              (ScrTerminalMap_o *)this,
              (AssetData_o *)this[7].fields.CS___8__locals1,
              0);
            v21 = v2->fields.CS___8__locals1;
            if ( v21 )
            {
              this = (ScrTerminalMap___c__DisplayClass262_1_o *)v21->fields.__4__this;
              if ( this )
              {
                ScrTerminalMap__LoadEventMapObject(
                  (ScrTerminalMap_o *)this,
                  (AssetData_o *)this[7].fields.CS___8__locals1,
                  0);
                this = (ScrTerminalMap___c__DisplayClass262_1_o *)ScrTerminalMap_TypeInfo;
                if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
                  this = (ScrTerminalMap___c__DisplayClass262_1_o *)ScrTerminalMap_TypeInfo;
                }
                v25 = v2->fields.CS___8__locals1;
                if ( v25 )
                {
                  v26 = v25->fields.__4__this;
                  if ( v26 )
                  {
                    v27 = this[5].fields.CS___8__locals1[1].fields.__4__this;
                    v37 = v26->fields.currentAssetId;
                    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v22, v23, v24);
                    this = (ScrTerminalMap___c__DisplayClass262_1_o *)System_String__Format(
                                                                        (System_String_o *)v27,
                                                                        v28,
                                                                        0);
                    v29 = v2->fields.CS___8__locals1;
                    if ( v29 )
                    {
                      v30 = v29->fields.__4__this;
                      if ( v30 )
                      {
                        method = (const MethodInfo *)this;
                        this = (ScrTerminalMap___c__DisplayClass262_1_o *)v30->fields.mapAssetData;
                        if ( this )
                        {
                          Object_object__51051712 = AssetData__GetObject_object__51051712(
                                                      (AssetData_o *)this,
                                                      (System_String_o *)method,
                                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
                          v30->fields.mapGimmickPrefab = (struct UnityEngine_GameObject_o *)Object_object__51051712;
                          sub_1C2D434(
                            (CGThumbnailListItem_o *)&v30->fields.mapGimmickPrefab,
                            (int32_t)Object_object__51051712,
                            v32,
                            v33);
                          v34 = v2->fields.CS___8__locals1;
                          if ( v34 )
                          {
                            v35 = (Il2CppObject *)v34->fields.__4__this;
                            v36 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                            System_Action___ctor(v36, v35, Method_ScrTerminalMap_LoadEventMap__, 0);
                            if ( v35 )
                            {
                              ScrTerminalMap__LoadMapImgTex((ScrTerminalMap_o *)v35, v36, 0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C2D6EC(this, method);
  }
}


void ScrTerminalMap___c__DisplayClass270_0___ctor(
        ScrTerminalMap___c__DisplayClass270_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass270_0___eventInfoAssetLoad_b__0(
        ScrTerminalMap___c__DisplayClass270_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScrTerminalMap___c__DisplayClass270_0_o *v5; // x19
  struct ScrTerminalMap_o *_4__this; // x8
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v5 = this;
  if ( (byte_4C2451C & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass270_0__eventInfoAssetLoad_b__1__);
    this = (ScrTerminalMap___c__DisplayClass270_0_o *)sub_1C2D490(&StringLiteral_5876/*"Effect/Race"*/);
    byte_4C2451C = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, assetData);
  _4__this->fields.mapInfoAssetData = assetData;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.mapInfoAssetData, (int32_t)assetData, (int32_t)method, v3);
  _9__1 = v5->fields.__9__1;
  v8 = (System_String_o *)StringLiteral_5876/*"Effect/Race"*/;
  if ( !_9__1 )
  {
    _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_ScrTerminalMap___c__DisplayClass270_0__eventInfoAssetLoad_b__1__,
      0);
    v5->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v8, _9__1, 1, 0);
}


void ScrTerminalMap___c__DisplayClass270_0___eventInfoAssetLoad_b__1(
        ScrTerminalMap___c__DisplayClass270_0_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScrTerminalMap_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, effectData);
  _4__this->fields.mapInfoEffectAssetData = effectData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&_4__this->fields.mapInfoEffectAssetData,
    (int32_t)effectData,
    (int32_t)method,
    v3);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass281_0___ctor(
        ScrTerminalMap___c__DisplayClass281_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass281_0___LoadMapImgTex_b__0(
        ScrTerminalMap___c__DisplayClass281_0_o *this,
        AssetData_o *mapImgData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScrTerminalMap___c__DisplayClass281_0_o *v5; // x19
  struct ScrTerminalMap_o *_4__this; // x8
  struct ScrTerminalMap_o *v7; // x20
  Il2CppObject *Object_object__51051712; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ScrTerminalMap_o *v11; // x20
  UnityEngine_Texture2D_o *currentMapTexture_k__BackingField; // x21
  int32_t currentMapImageW_k__BackingField; // w22
  int32_t currentMapImageH_k__BackingField; // w23
  bool IsMapModel; // w0

  v5 = this;
  if ( (byte_4C2451D & 1) == 0 )
  {
    this = (ScrTerminalMap___c__DisplayClass281_0_o *)sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    byte_4C2451D = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.mapImgAssetData = mapImgData;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.mapImgAssetData, (int32_t)mapImgData, (int32_t)method, v3);
  v7 = v5->fields.__4__this;
  if ( !v7
    || (this = (ScrTerminalMap___c__DisplayClass281_0_o *)v7->fields.mapImgAssetData) == 0
    || (Object_object__51051712 = AssetData__GetObject_object__51051712(
                                    (AssetData_o *)this,
                                    v5->fields.textureName,
                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112),
        v7->fields._currentMapTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__51051712,
        sub_1C2D434(
          (CGThumbnailListItem_o *)&v7->fields._currentMapTexture_k__BackingField,
          (int32_t)Object_object__51051712,
          v9,
          v10),
        (v11 = v5->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C2D6EC(this, mapImgData);
  }
  currentMapTexture_k__BackingField = v11->fields._currentMapTexture_k__BackingField;
  currentMapImageW_k__BackingField = v11->fields._currentMapImageW_k__BackingField;
  currentMapImageH_k__BackingField = v11->fields._currentMapImageH_k__BackingField;
  IsMapModel = ScrTerminalMap__IsMapModel(v5->fields.__4__this, 0);
  ScrTerminalMap__SetMapBgTexture(
    v11,
    currentMapTexture_k__BackingField,
    currentMapImageW_k__BackingField,
    currentMapImageH_k__BackingField,
    IsMapModel,
    0);
  ActionExtensions__Call(v5->fields.endCallback, 0);
}


void ScrTerminalMap___c__DisplayClass288_0___ctor(
        ScrTerminalMap___c__DisplayClass288_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScrTerminalMap___c__DisplayClass288_0___smfMap2d_SpotMarkCreate_b__1(
        ScrTerminalMap___c__DisplayClass288_0_o *this,
        MapGimmickComponent_o *n,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( !n || (mMapCtrl_MapGimmickInfo = n->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C2D6EC(this, n);
  return mMapCtrl_MapGimmickInfo->fields.mapGimmickId == this->fields.gimmickId;
}


bool ScrTerminalMap___c__DisplayClass288_0___smfMap2d_SpotMarkCreate_b__2(
        ScrTerminalMap___c__DisplayClass288_0_o *this,
        MapGimmickComponent_o *n,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( !n || (mMapCtrl_MapGimmickInfo = n->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C2D6EC(this, n);
  return mMapCtrl_MapGimmickInfo->fields.mapGimmickId == this->fields.gimmickEffectId;
}


void ScrTerminalMap___c__DisplayClass292_0___ctor(
        ScrTerminalMap___c__DisplayClass292_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScrTerminalMap___c__DisplayClass292_0___GetSpotPrefab_b__0(
        ScrTerminalMap___c__DisplayClass292_0_o *this,
        SrcSpotBasePrefab_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C2D6EC(this, 0);
  return n->fields.miSpotID == this->fields.spotId;
}


void ScrTerminalMap___c__DisplayClass334_0___ctor(
        ScrTerminalMap___c__DisplayClass334_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass334_0___RequestMapMove_b__0(
        ScrTerminalMap___c__DisplayClass334_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass334_0_o *v2; // x19
  struct ScrTerminalMap_o *_4__this; // x8
  struct MapModelManager_o *mapModelManager; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ScrTerminalMap_o *v6; // x8
  struct ScrTerminalMap_o *v7; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct ScrTerminalMap_o *v11; // x8
  Il2CppObject *current; // x0
  struct ScrTerminalMap_o *v13; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C2451E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__get_Current__);
    this = (ScrTerminalMap___c__DisplayClass334_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
    byte_4C2451E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  mapModelManager = _4__this->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_20;
  this = (ScrTerminalMap___c__DisplayClass334_0_o *)mapModelManager->fields._MapModelCamera_k__BackingField;
  if ( !this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, v2->fields.endedPos, 0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_20;
  this = (ScrTerminalMap___c__DisplayClass334_0_o *)v6->fields.titleInfoControl;
  if ( !this )
    goto LABEL_20;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_20;
  this = (ScrTerminalMap___c__DisplayClass334_0_o *)v7->fields.spotList;
  if ( !this )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    if ( !v8 )
      break;
    v11 = v2->fields.__4__this;
    if ( !v11 )
      sub_1C2D6EC(v8, v9);
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C2D6EC(0, v9);
    *(_DWORD *)((char *)&v14.fields._current->klass + (unsigned __int64)&qword_F0) = v11->fields.currentMapLayerId;
    SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)current, 1, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
  v13 = v2->fields.__4__this;
  if ( !v13 || (this = (ScrTerminalMap___c__DisplayClass334_0_o *)v13->fields.mapModelManager) == 0 )
LABEL_20:
    sub_1C2D6EC(this, method);
  MapModelManager__UpdateLineDispAll((MapModelManager_o *)this, 0);
}


void ScrTerminalMap___c__DisplayClass335_0___ctor(
        ScrTerminalMap___c__DisplayClass335_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass335_0___RequestMapMove_b__0(
        ScrTerminalMap___c__DisplayClass335_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass335_0_o *v2; // x19
  struct ScrTerminalMap_o *_4__this; // x8
  struct ScrTerminalMap_o *v4; // x8
  struct MapModelManager_o *mapModelManager; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ScrTerminalMap_o *v7; // x8
  struct ScrTerminalMap_o *v8; // x8
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct ScrTerminalMap_o *v12; // x8
  Il2CppObject *current; // x0
  struct ScrTerminalMap_o *v14; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C2451F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__get_Current__);
    this = (ScrTerminalMap___c__DisplayClass335_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
    byte_4C2451F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  this = (ScrTerminalMap___c__DisplayClass335_0_o *)_4__this->fields.mapButtonGrid;
  _4__this->fields.currentMapLayerId = v2->fields.layer;
  if ( !this )
    goto LABEL_22;
  MapButtonControl__UpdateButtonSprite((MapButtonControl_o *)this, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_22;
  mapModelManager = v4->fields.mapModelManager;
  if ( !mapModelManager )
    goto LABEL_22;
  this = (ScrTerminalMap___c__DisplayClass335_0_o *)mapModelManager->fields._MapModelCamera_k__BackingField;
  if ( !this )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, v2->fields.endedPos, 0);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_22;
  this = (ScrTerminalMap___c__DisplayClass335_0_o *)v7->fields.titleInfoControl;
  if ( !this )
    goto LABEL_22;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_22;
  this = (ScrTerminalMap___c__DisplayClass335_0_o *)v8->fields.spotList;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__MoveNext__);
    if ( !v9 )
      break;
    v12 = v2->fields.__4__this;
    if ( !v12 )
      sub_1C2D6EC(v9, v10);
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C2D6EC(0, v10);
    *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&qword_F0) = v12->fields.currentMapLayerId;
    SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)current, 1, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SrcSpotBasePrefab__Dispose__);
  v14 = v2->fields.__4__this;
  if ( !v14 || (this = (ScrTerminalMap___c__DisplayClass335_0_o *)v14->fields.mapModelManager) == 0 )
LABEL_22:
    sub_1C2D6EC(this, method);
  MapModelManager__UpdateLineDispAll((MapModelManager_o *)this, 0);
  ActionExtensions__Call(v2->fields.endAction, 0);
}


void ScrTerminalMap___c__DisplayClass340_0___ctor(
        ScrTerminalMap___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass340_0___EventActionPlay_b__0(
        ScrTerminalMap___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (ScrTerminalMap__ShowActivePlayerIcon(_4__this, 0), (_4__this = this->fields.__4__this) == 0) )
    sub_1C2D6EC(_4__this, method);
  ScrTerminalMap__EventScriptPlay(_4__this, 0);
}


void ScrTerminalMap___c__DisplayClass340_0___EventActionPlay_b__1(
        ScrTerminalMap___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass340_0_o *v2; // x19
  System_Action_o *_9__4; // x22
  ScrTerminalMap_o *_4__this; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v2 = this;
  if ( (byte_4C24520 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass340_0_o *)sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__4__);
    byte_4C24520 = 1;
  }
  _9__4 = v2->fields.__9__4;
  _4__this = v2->fields.__4__this;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_ScrTerminalMap___c__DisplayClass340_0__EventActionPlay_b__4__,
      0);
    v2->fields.__9__4 = _9__4;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v5, v6);
  }
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  ScrTerminalMap__MakeFarmGrowthDialogOpen(_4__this, _9__4, 0);
}


void ScrTerminalMap___c__DisplayClass340_0___EventActionPlay_b__2(
        ScrTerminalMap___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x19
  System_Action_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C24522 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_EventScriptPlay__);
    byte_4C24522 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, _4__this, Method_ScrTerminalMap_EventScriptPlay__, 0);
  if ( !_4__this )
    sub_1C2D6EC(v5, v6);
  ScrTerminalMap__EventAreaImproveResultDialogOpen((ScrTerminalMap_o *)_4__this, v4, 0);
}


void ScrTerminalMap___c__DisplayClass340_0___EventActionPlay_b__3(
        ScrTerminalMap___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass340_0_o *v2; // x20
  Il2CppObject *_4__this; // x19
  _DWORD *monitor; // x8
  int32_t eventId; // w20
  int32_t v6; // w21
  System_Action_o *v7; // x22

  v2 = this;
  if ( (byte_4C24523 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass340_0_o *)sub_1C2D490(&Method_ScrTerminalMap_EventScriptPlay__);
    byte_4C24523 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this || (monitor = _4__this[22].monitor) == 0 )
    sub_1C2D6EC(this, method);
  eventId = v2->fields.eventId;
  v6 = monitor[4];
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, _4__this, Method_ScrTerminalMap_EventScriptPlay__, 0);
  ScrTerminalMap__StartDataLostBattleReset((ScrTerminalMap_o *)_4__this, eventId, v6, v7, 0);
}


void ScrTerminalMap___c__DisplayClass340_0___EventActionPlay_b__4(
        ScrTerminalMap___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *_4__this; // x20
  TitleInfoControl_o *klass; // x21
  int32_t eventId; // w19
  System_Action_o *v7; // x22

  if ( (byte_4C24521 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_EventScriptPlay__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24521 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( v3->static_fields->_SpotId_k__BackingField >= 1 )
  {
    ScrTerminalMap__EventScriptPlay(this->fields.__4__this, 0);
    return;
  }
  klass = (TitleInfoControl_o *)_4__this[21].klass;
  eventId = this->fields.eventId;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, _4__this, Method_ScrTerminalMap_EventScriptPlay__, 0);
  if ( !klass )
LABEL_14:
    sub_1C2D6EC(v3, method);
  TitleInfoControl__ShowEventInfoReleaseCraftItemDialog(klass, eventId, v7, 0);
}


void ScrTerminalMap___c__DisplayClass341_0___ctor(
        ScrTerminalMap___c__DisplayClass341_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass341_0___ProductivityGrowthDialogOpen_b__0(
        ScrTerminalMap___c__DisplayClass341_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass341_0_o *v2; // x19
  struct ScrTerminalMap_o *_4__this; // x8
  TitleInfoControl_o *titleInfoControl; // x20
  System_Action_o *_9__1; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4C24524 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass341_0_o *)sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass341_0__ProductivityGrowthDialogOpen_b__1__);
    byte_4C24524 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  titleInfoControl = _4__this->fields.titleInfoControl;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ScrTerminalMap___c__DisplayClass341_0__ProductivityGrowthDialogOpen_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !titleInfoControl )
LABEL_8:
    sub_1C2D6EC(this, method);
  TitleInfoControl__StartEventUIAnimation(titleInfoControl, 1, _9__1, 0);
}


void ScrTerminalMap___c__DisplayClass341_0___ProductivityGrowthDialogOpen_b__1(
        ScrTerminalMap___c__DisplayClass341_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  const MethodInfo *v7; // x0

  if ( (byte_4C24525 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24525 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (CGThumbnailListItem_o *)&v5->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0;
  sub_1C2D434(p_eventConquestInfos, 0, v2, v3);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v7);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass342_0___ctor(
        ScrTerminalMap___c__DisplayClass342_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass342_0___HarvestGrowthDialogOpen_b__0(
        ScrTerminalMap___c__DisplayClass342_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  const MethodInfo *v7; // x0

  if ( (byte_4C24526 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24526 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v5->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0;
  sub_1C2D434(p_eventHarvestGrowthInfo, 0, v2, v3);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v7);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass343_0___ctor(
        ScrTerminalMap___c__DisplayClass343_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass343_0___EventAreaImproveResultDialogOpen_b__0(
        ScrTerminalMap___c__DisplayClass343_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_eventAreaImproveResultInfo; // x0

  if ( (byte_4C24527 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24527 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_eventAreaImproveResultInfo = (CGThumbnailListItem_o *)&v5->static_fields->eventAreaImproveResultInfo;
  p_eventAreaImproveResultInfo->klass = 0;
  sub_1C2D434(p_eventAreaImproveResultInfo, 0, v2, v3);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass344_0___ctor(
        ScrTerminalMap___c__DisplayClass344_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass344_0___MakeFarmGrowthDialogOpen_b__0(
        ScrTerminalMap___c__DisplayClass344_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass345_0___ctor(
        ScrTerminalMap___c__DisplayClass345_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass345_0___SkillGetDialogOpen_b__0(
        ScrTerminalMap___c__DisplayClass345_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass349_0___ctor(
        ScrTerminalMap___c__DisplayClass349_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap___c__DisplayClass349_0___StartDataLostBattleReset_b__0(
        ScrTerminalMap___c__DisplayClass349_0_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass349_0_o *v4; // x20
  TerminalPramsManager_c *v5; // x0
  int32_t eventId; // w22
  int32_t warId; // w22
  int32_t v8; // w21
  int32_t v9; // w22
  Il2CppObject *v10; // x23
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  struct ScrTerminalMap_o *_4__this; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ScrTerminalMap_o *v15; // x8
  struct ScrTerminalMap_o *v16; // x8

  v4 = this;
  if ( (byte_4C24528 & 1) == 0 )
  {
    sub_1C2D490(&DataLostResetManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap_StartDataLostBattleResetEffect__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (ScrTerminalMap___c__DisplayClass349_0_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24528 = 1;
  }
  if ( resetIdx == -1 )
  {
    _4__this = v4->fields.__4__this;
    if ( _4__this )
    {
      ActionExtensions__Call(_4__this->fields.dataLostBattleResetEffectEndAct, 0);
      v15 = v4->fields.__4__this;
      if ( v15 )
      {
        v15->fields.dataLostBattleResetEffectEndAct = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.dataLostBattleResetEffectEndAct, 0, v13, v14);
        v16 = v4->fields.__4__this;
        if ( v16 )
        {
          v16->fields.isPlayingDataLostBattleResetEffect = 0;
          return;
        }
      }
    }
LABEL_26:
    sub_1C2D6EC(this, *(_QWORD *)&resetIdx);
  }
  this = (ScrTerminalMap___c__DisplayClass349_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 1;
  eventId = v4->fields.eventId;
  if ( !byte_4C244FA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C244FA = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleEventId_k__BackingField = eventId;
  warId = v4->fields.warId;
  if ( !byte_4C244FB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C244FB = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleWarId_k__BackingField = warId;
  v8 = v4->fields.eventId;
  v9 = v4->fields.warId;
  v10 = (Il2CppObject *)v4->fields.__4__this;
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, v10, Method_ScrTerminalMap_StartDataLostBattleResetEffect__, 0);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__RequestResetDataLostBattle(v8, v9, resetIdx, v11, 0);
}


void ScrTerminalMap___c__DisplayClass351_0___ctor(
        ScrTerminalMap___c__DisplayClass351_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass351_0___ShowActivePlayerIcon_b__0(
        ScrTerminalMap___c__DisplayClass351_0_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  GameObjectExtensions__SetLocalScale(_4__this->fields.playerIcon, this->fields.endScale, 0);
}


void ScrTerminalMap___c__DisplayClass351_0___ShowActivePlayerIcon_b__1(
        ScrTerminalMap___c__DisplayClass351_0_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *_4__this; // x8
  struct EasingObject_o *easingObject; // x9
  UnityEngine_GameObject_o *playerIcon; // x19
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this || (easingObject = this->fields.easingObject) == 0 )
    sub_1C2D6EC(this, method);
  playerIcon = _4__this->fields.playerIcon;
  v5 = Easing__Func(this->fields.startScale, this->fields.endScale, easingObject->fields.mNow, 0, 0);
  GameObjectExtensions__SetLocalScale(playerIcon, v5, 0);
}


void ScrTerminalMap___c__DisplayClass353_0___ctor(
        ScrTerminalMap___c__DisplayClass353_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass353_0___showEventScriptDlgs_b__0(
        ScrTerminalMap___c__DisplayClass353_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *eventScriptMessages; // x0
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C24529 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass353_0__showEventScriptDlgs_b__1__);
    byte_4C24529 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  eventScriptMessages = (Il2CppObject *)v3->static_fields->eventScriptMessages;
  if ( !eventScriptMessages )
    goto LABEL_10;
  System_Collections_Generic_List_object___RemoveRange(
    (System_Collections_Generic_List_object__o *)eventScriptMessages,
    0,
    2,
    (const MethodInfo_378B3F0 *)Method_System_Collections_Generic_List_string__RemoveRange__);
  eventScriptMessages = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)eventScriptMessages;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ScrTerminalMap___c__DisplayClass353_0__showEventScriptDlgs_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
LABEL_10:
    sub_1C2D6EC(eventScriptMessages, method);
  CommonUI__CloseNotificationDialog_31170484(v6, _9__1, 0);
}


void ScrTerminalMap___c__DisplayClass353_0___showEventScriptDlgs_b__1(
        ScrTerminalMap___c__DisplayClass353_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  ScrTerminalMap__showEventScriptDlgs(_4__this, this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass356_0___ctor(
        ScrTerminalMap___c__DisplayClass356_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass356_0___EventScriptCaller_b__1(
        ScrTerminalMap___c__DisplayClass356_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, isExit);
  ScrTerminalMap__OnEndEventScripts(_4__this, this->fields.eventScriptEntity, 0);
}


void ScrTerminalMap___c__DisplayClass356_0___EventScriptCaller_b__2(
        ScrTerminalMap___c__DisplayClass356_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  ScrTerminalMap__OnEndEventScripts(_4__this, this->fields.eventScriptEntity, 0);
}


void ScrTerminalMap___c__DisplayClass356_1___ctor(
        ScrTerminalMap___c__DisplayClass356_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass356_1___EventScriptCaller_b__0(
        ScrTerminalMap___c__DisplayClass356_1_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass356_1_o *v2; // x19
  struct ScrTerminalMap___c__DisplayClass356_0_o *CS___8__locals1; // x20
  EventRaceResultEffect_o *effect; // x19
  System_Action_o *_9__2; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4C2452A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass356_1_o *)sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass356_0__EventScriptCaller_b__2__);
    byte_4C2452A = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  effect = v2->fields.effect;
  _9__2 = CS___8__locals1->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_ScrTerminalMap___c__DisplayClass356_0__EventScriptCaller_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !effect )
LABEL_8:
    sub_1C2D6EC(this, method);
  EventRaceResultEffect__Play(effect, _9__2, 0);
}


void ScrTerminalMap___c__DisplayClass364_0___ctor(
        ScrTerminalMap___c__DisplayClass364_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass364_0___PlayMapModelEntryAnimation_b__0(
        ScrTerminalMap___c__DisplayClass364_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass364_0_o *v2; // x19
  struct ScrTerminalMap_o *_4__this; // x8
  struct ScrTerminalMap_o *v4; // x8

  v2 = this;
  if ( (byte_4C2452B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (ScrTerminalMap___c__DisplayClass364_0_o *)sub_1C2D490(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    byte_4C2452B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (ScrTerminalMap___c__DisplayClass364_0_o *)_4__this->fields.spotModelScreen;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ScrTerminalMap___c__DisplayClass364_0_o *)v2->fields.__4__this;
  if ( !this
    || (ScrTerminalMap__FrameInUI((ScrTerminalMap_o *)this, 0), (v4 = v2->fields.__4__this) == 0)
    || (this = (ScrTerminalMap___c__DisplayClass364_0_o *)v4->fields.mapButtonGrid) == 0
    || (MapButtonControl__FrameIn((MapButtonControl_o *)this, 0),
        (this = (ScrTerminalMap___c__DisplayClass364_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0),
        (this = (ScrTerminalMap___c__DisplayClass364_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(this, method);
  }
  RewardMiniPopupExecutor__AddTaskOnBattleToTerminal((RewardMiniPopupExecutor_o *)this, 0);
  ActionExtensions__Call(v2->fields.endAction, 0);
}


void ScrTerminalMap___c__DisplayClass385_0___ctor(
        ScrTerminalMap___c__DisplayClass385_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrTerminalMap___c__DisplayClass385_0___CheckAndWarningEventQuestBoardAllClear_b__0(
        ScrTerminalMap___c__DisplayClass385_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass385_0_o *v4; // x20
  struct ScrTerminalMap_o *_4__this; // x8
  struct MapCamera_o *mapCamera; // x8
  struct System_Action_o *callback; // x8

  v4 = this;
  if ( (byte_4C2452C & 1) == 0 )
  {
    this = (ScrTerminalMap___c__DisplayClass385_0_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2452C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  mapCamera = _4__this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_10;
  mapCamera->fields._IsTouchEnable_k__BackingField = 1;
  if ( isDecide )
  {
    callback = v4->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method,
        method);
  }
  this = (ScrTerminalMap___c__DisplayClass385_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_10:
    sub_1C2D6EC(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}


void ScrTerminalMap___c__DisplayClass391_0___ctor(
        ScrTerminalMap___c__DisplayClass391_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass391_0___EndRequestDiceUse_b__0(
        ScrTerminalMap___c__DisplayClass391_0_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v5; // x1
  struct ScrTerminalMap_o *_4__this; // x8
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  struct ScrTerminalMap_o *v8; // x8
  struct ScrTerminalMap_o *v9; // x8
  struct TerminalSceneComponent_o *terminalScene; // x8
  struct ScrTerminalMap_o *v11; // x8
  int32_t v12; // w20
  Il2CppObject *Item; // x21
  int32_t v14; // w21
  System_Action_o *_9__1; // x23
  ScrTerminalMap_o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C2452D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass391_0__EndRequestDiceUse_b__1__);
    sub_1C2D490(&StringLiteral_18607/*"diceType"*/);
    sub_1C2D490(&StringLiteral_18608/*"diceValue"*/);
    byte_4C2452D = 1;
  }
  result = this->fields.result;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  v7 = Dictionary;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.titleInfoControl;
  if ( !Dictionary )
    goto LABEL_24;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)Dictionary, 0);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_24;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.titleInfoControl;
  if ( !Dictionary )
    goto LABEL_24;
  TitleInfoControl__UpdateEventMissionClearInfo((TitleInfoControl_o *)Dictionary, 0);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_24;
  terminalScene = v9->fields.terminalScene;
  if ( !terminalScene )
    goto LABEL_24;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)terminalScene->fields.mTerminalList;
  if ( !Dictionary )
    goto LABEL_24;
  ScrTerminalListTop__UpdateList((ScrTerminalListTop_o *)Dictionary, 0);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_24;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.eventBoardGameUsingItem;
  if ( !Dictionary )
    goto LABEL_24;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)ItemEntity__getScript(
                                                                            (ItemEntity_o *)Dictionary,
                                                                            (System_String_o *)StringLiteral_18607/*"diceType"*/,
                                                                            1,
                                                                            0);
  if ( !v7 )
    goto LABEL_24;
  v12 = (int)Dictionary;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                            v7,
                                                                            (Il2CppObject *)StringLiteral_18608/*"diceValue"*/,
                                                                            (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  if ( ((unsigned __int8)Dictionary & 1) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             v7,
             (Il2CppObject *)StringLiteral_18608/*"diceValue"*/,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Convert__ToInt32(Item, 0);
    v14 = (int)Dictionary;
  }
  else
  {
    v14 = 1;
  }
  _9__1 = this->fields.__9__1;
  v16 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ScrTerminalMap___c__DisplayClass391_0__EndRequestDiceUse_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v17, v18);
  }
  if ( !v16 )
LABEL_24:
    sub_1C2D6EC(Dictionary, v5);
  ScrTerminalMap__PlayBoardGameDiceEffect(v16, 1, v12, v14, _9__1, 0);
}


void ScrTerminalMap___c__DisplayClass391_0___EndRequestDiceUse_b__1(
        ScrTerminalMap___c__DisplayClass391_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  ScrTerminalMap__EndBoardGameDiceEffect(_4__this, 0);
}


void ScrTerminalMap___c__DisplayClass397_0___ctor(
        ScrTerminalMap___c__DisplayClass397_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass397_0___PlayBoardGamePieceEffectSub_b__0(
        ScrTerminalMap___c__DisplayClass397_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0
  struct ScrTerminalMap_o *v4; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_GameObject_o *v8; // x8
  float v9; // w10
  UITweener_o *v10; // x19
  struct ScrTerminalMap_o *v11; // x22
  int32_t currentSquareIndex; // w20
  int32_t endSquareIndex; // w23
  System_Collections_Generic_List_object__o *onFinished; // x21
  EventDelegate_o *v15; // x0
  bool v16; // zf
  Il2CppObject *v17; // x20
  System_String_o **v18; // x8
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Vector3_o EventBoardSquarePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2452E & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&StringLiteral_13047/*"StartBoardGamePieceEffectSub"*/);
    sub_1C2D490(&StringLiteral_5974/*"EndBoardGamePieceEffect"*/);
    byte_4C2452E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  EventBoardSquarePos = ScrTerminalMap__GetEventBoardSquarePos(_4__this, _4__this->fields.currentSquareIndex, 0);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_18;
  _4__this = (ScrTerminalMap_o *)v4->fields._EventBoardPieceObj_k__BackingField;
  if ( !_4__this )
    goto LABEL_18;
  x = EventBoardSquarePos.fields.x;
  y = EventBoardSquarePos.fields.y;
  z = EventBoardSquarePos.fields.z;
  _4__this = (ScrTerminalMap_o *)UnityEngine_GameObject__AddComponent_object_(
                                   (UnityEngine_GameObject_o *)_4__this,
                                   (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  if ( !_4__this )
    goto LABEL_18;
  LOBYTE(_4__this->fields.subRootEffectP) = 1;
  v8 = *(struct UnityEngine_GameObject_o **)&this->fields.oldPos.fields.x;
  v9 = this->fields.oldPos.fields.z;
  *((float *)&_4__this->fields.rootSpotP + 1) = x;
  *(float *)&_4__this->fields.subRootSpotP = y;
  *((float *)&_4__this->fields.subRootSpotP + 1) = z;
  *(float *)&_4__this->fields.rootSpotP = v9;
  _4__this->fields.subRootRoadP = v8;
  _4__this->fields.currentMapImageId = 1051595899;
  v10 = (UITweener_o *)_4__this;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  _4__this = (ScrTerminalMap_o *)ScrTerminalMap__GetBoardGamePieceAnimationEasingType(
                                   _4__this,
                                   _4__this->fields.currentSquareIndex,
                                   0,
                                   0);
  v10->fields.method = (int)_4__this;
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_18;
  currentSquareIndex = v11->fields.currentSquareIndex;
  endSquareIndex = v11->fields.endSquareIndex;
  onFinished = (System_Collections_Generic_List_object__o *)v10->fields.onFinished;
  v15 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
  v16 = currentSquareIndex == endSquareIndex;
  v17 = (Il2CppObject *)v15;
  v18 = (System_String_o **)(v16 ? &StringLiteral_5974/*"EndBoardGamePieceEffect"*/ : &StringLiteral_13047/*"StartBoardGamePieceEffectSub"*/);
  EventDelegate___ctor_49171260(v15, (UnityEngine_MonoBehaviour_o *)v11, *v18, 0);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v22 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C2D6EC(_4__this, method);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      v17,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v17;
    sub_1C2D434((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
  }
  UITweener__PlayForward(v10, 0);
}


void ScrTerminalMap___c__DisplayClass400_0___ctor(
        ScrTerminalMap___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass400_0___PlayBoardGameQuestArrivalEffect_b__0(
        ScrTerminalMap___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass400_0_o *v2; // x20
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v4; // x1
  System_Action_o *_9__1; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4C2452F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ScrTerminalMap___c__DisplayClass400_0_o *)sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass400_0__PlayBoardGameQuestArrivalEffect_b__1__);
    byte_4C2452F = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
  if ( v2->fields.isAuto )
  {
    if ( _4__this )
    {
      v4 = ScrTerminalMap__EventBoardCameraActionAuto_IE(
             v2->fields.__4__this,
             v2->fields.squareId,
             v2->fields.clearCount,
             v2->fields.maxClearCount,
             v2->fields.callback,
             0);
      UnityEngine_MonoBehaviour__StartCoroutine_71149276(_4__this, v4, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(this, method);
  }
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ScrTerminalMap___c__DisplayClass400_0__PlayBoardGameQuestArrivalEffect_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !_4__this )
    goto LABEL_10;
  ScrTerminalMap__EventBoardCameraAction((ScrTerminalMap_o *)_4__this, _9__1, 1, 0, 0);
}


void ScrTerminalMap___c__DisplayClass400_0___PlayBoardGameQuestArrivalEffect_b__1(
        ScrTerminalMap___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *EventBoardQuestArrivalPanelObj_k__BackingField; // x0
  __int64 v4; // x1
  struct ScrTerminalMap_o *_4__this; // x8

  ActionExtensions__Call(this->fields.callback, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardQuestArrivalPanelObj_k__BackingField = (struct ScrTerminalMap_o *)_4__this->fields._EventBoardQuestArrivalPanelObj_k__BackingField) == 0
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)EventBoardQuestArrivalPanelObj_k__BackingField,
          1,
          0),
        (EventBoardQuestArrivalPanelObj_k__BackingField = this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(EventBoardQuestArrivalPanelObj_k__BackingField, v4);
  }
  ScrTerminalMap__UpdateBoardGameSquare(
    EventBoardQuestArrivalPanelObj_k__BackingField,
    this->fields.squareId,
    this->fields.clearCount,
    this->fields.maxClearCount,
    0);
}


void ScrTerminalMap___c__DisplayClass401_0___ctor(
        ScrTerminalMap___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass401_0___EventBoardCameraActionAuto_IE_b__0(
        ScrTerminalMap___c__DisplayClass401_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v3; // x0
  __int64 v4; // x1
  struct ScrTerminalMap_o *_4__this; // x8
  UnityEngine_Object_o *EventBoardQuestArrivalPanelObj_k__BackingField; // x20
  struct ScrTerminalMap_o *v7; // x8

  if ( (byte_4C24530 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24530 = 1;
  }
  ActionExtensions__Call(this->fields.callback, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventBoardQuestArrivalPanelObj_k__BackingField = (UnityEngine_Object_o *)_4__this->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                     EventBoardQuestArrivalPanelObj_k__BackingField,
                                     0,
                                     0);
  if ( ((unsigned __int8)v3 & 1) != 0 )
  {
    v7 = this->fields.__4__this;
    if ( v7 )
    {
      v3 = v7->fields._EventBoardQuestArrivalPanelObj_k__BackingField;
      if ( v3 )
      {
        UnityEngine_GameObject__SetActive(v3, 1, 0);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_1C2D6EC(v3, v4);
  }
LABEL_10:
  v3 = (UnityEngine_GameObject_o *)this->fields.__4__this;
  if ( !v3 )
    goto LABEL_12;
  ScrTerminalMap__UpdateBoardGameSquare(
    (ScrTerminalMap_o *)v3,
    this->fields.squareId,
    this->fields.clearCount,
    this->fields.maxClearCount,
    0);
}


void ScrTerminalMap___c__DisplayClass402_0___ctor(
        ScrTerminalMap___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScrTerminalMap___c__DisplayClass402_0___UpdateBoardGameSquare_b__2(
        ScrTerminalMap___c__DisplayClass402_0_o *this,
        MapGimmickComponent_o *y,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct MapControl_MapGimmickInfo_o *x; // x9

  if ( !y || (mMapCtrl_MapGimmickInfo = y->fields.mMapCtrl_MapGimmickInfo) == 0 || (x = this->fields.x) == 0 )
    sub_1C2D6EC(this, y);
  return mMapCtrl_MapGimmickInfo->fields.mapGimmickId == x->fields.mapGimmickId;
}


void ScrTerminalMap___c__DisplayClass404_0___ctor(
        ScrTerminalMap___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass404_0___JumpEventBoardGamePiece_b__0(
        ScrTerminalMap___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass404_0_o *v2; // x20
  struct ScrTerminalMap_o *_4__this; // x8
  __int64 v4; // x9
  float z; // w8
  struct System_Action_o *v6; // x9
  UITweener_o *v7; // x19
  System_Collections_Generic_List_object__o *onFinished; // x21
  EventDelegate_Callback_o *_9__1; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  EventDelegate_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v2 = this;
  if ( (byte_4C24531 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    this = (ScrTerminalMap___c__DisplayClass404_0_o *)sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__1__);
    byte_4C24531 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (ScrTerminalMap___c__DisplayClass404_0_o *)_4__this->fields._EventBoardPieceObj_k__BackingField;
  if ( !this )
    goto LABEL_15;
  this = (ScrTerminalMap___c__DisplayClass404_0_o *)UnityEngine_GameObject__AddComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  if ( !this )
    goto LABEL_15;
  LOBYTE(this[1].fields.__9__1) = 1;
  v4 = *(_QWORD *)&v2->fields.oldPos.fields.x;
  *(float *)&this[1].fields.callback = v2->fields.oldPos.fields.z;
  *(_QWORD *)&this[1].fields.oldIndex = v4;
  z = v2->fields.newPos.fields.z;
  v6 = *(struct System_Action_o **)&v2->fields.newPos.fields.x;
  LODWORD(this->fields.callback) = 1060823368;
  v7 = (UITweener_o *)this;
  *((float *)&this[1].fields.__9__2 + 1) = z;
  *(struct System_Action_o **)((char *)&this[1].fields.callback + 4) = v6;
  this = (ScrTerminalMap___c__DisplayClass404_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  v7->fields.method = ScrTerminalMap__GetBoardGamePieceAnimationEasingType(
                        (ScrTerminalMap_o *)this,
                        v2->fields.oldIndex,
                        1,
                        0);
  onFinished = (System_Collections_Generic_List_object__o *)v7->fields.onFinished;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  v12 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49170772(v12, _9__1, 0);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v16 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_15:
    sub_1C2D6EC(this, method);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      (Il2CppObject *)v12,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  UITweener__PlayForward(v7, 0);
}


void ScrTerminalMap___c__DisplayClass404_0___JumpEventBoardGamePiece_b__1(
        ScrTerminalMap___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0
  int32_t endIndex; // w20
  System_Action_o *_9__2; // x22
  ScrTerminalMap_o *v6; // x20
  int32_t v7; // w21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ScrTerminalMap_o *v10; // x8
  struct ScrTerminalMap_o *v11; // x8
  struct ScrTerminalMap_o *v12; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ScrTerminalMap_o *v15; // x8
  int32_t v16; // w20
  TerminalPramsManager_c *v17; // x0

  if ( (byte_4C24532 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&ScrTerminalMap_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__2__);
    byte_4C24532 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  if ( ScrTerminalMap__TryAutoQuest(_4__this, 0) )
    return;
  endIndex = this->fields.endIndex;
  _4__this = (ScrTerminalMap_o *)ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    _4__this = (ScrTerminalMap_o *)ScrTerminalMap_TypeInfo;
  }
  if ( endIndex == LODWORD(_4__this->fields.subRootGimmickP[6].klass) )
  {
    _9__2 = this->fields.__9__2;
    v6 = this->fields.__4__this;
    v7 = this->fields.endIndex;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ScrTerminalMap___c__DisplayClass404_0__JumpEventBoardGamePiece_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
    }
    if ( v6 )
    {
      ScrTerminalMap__PlayBoardGameQuestArrivalEffect(v6, v7, _9__2, 0, 0);
      return;
    }
    goto LABEL_30;
  }
  _4__this = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_30;
  CommonUI__SetFadeMaskCollider((CommonUI_o *)_4__this, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  ScrTerminalMap__FrameInUI(_4__this, 0);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_30;
  _4__this = (ScrTerminalMap_o *)System_String__IsNullOrEmpty(v10->fields.animationNameBuffer, 0);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
  {
    v11 = this->fields.__4__this;
    if ( !v11 )
      goto LABEL_30;
    _4__this = (ScrTerminalMap_o *)v11->fields._EventBoardPieceObj_k__BackingField;
    if ( !_4__this )
      goto LABEL_30;
    _4__this = (ScrTerminalMap_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)_4__this,
                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_30;
    if ( !_4__this )
      goto LABEL_30;
    UnityEngine_Animation__Stop_70908132((UnityEngine_Animation_o *)_4__this, v12->fields.animationNameBuffer, 0);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_30;
    v15->fields.animationNameBuffer = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.animationNameBuffer, 0, v13, v14);
  }
  v16 = this->fields.endIndex;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24503 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24503 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_EventBoardGameSquareIndex_k__BackingField = v16;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_30:
    sub_1C2D6EC(_4__this, method);
  ScrTerminalMap__UpdateEventBoardGameSpot(_4__this, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass404_0___JumpEventBoardGamePiece_b__2(
        ScrTerminalMap___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct ScrTerminalMap_o *_4__this; // x8
  struct ScrTerminalMap_o *v6; // x8
  struct ScrTerminalMap_o *v7; // x8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ScrTerminalMap_o *v10; // x8
  int32_t endIndex; // w20
  TerminalPramsManager_c *v12; // x0

  if ( (byte_4C24533 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24533 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetFadeMaskCollider(Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_21;
  ScrTerminalMap__FrameInUI((ScrTerminalMap_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  Instance = (CommonUI_o *)System_String__IsNullOrEmpty(_4__this->fields.animationNameBuffer, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_21;
    Instance = (CommonUI_o *)v6->fields._EventBoardPieceObj_k__BackingField;
    if ( !Instance )
      goto LABEL_21;
    Instance = (CommonUI_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Instance,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_21;
    if ( !Instance )
      goto LABEL_21;
    UnityEngine_Animation__Stop_70908132((UnityEngine_Animation_o *)Instance, v7->fields.animationNameBuffer, 0);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_21;
    v10->fields.animationNameBuffer = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.animationNameBuffer, 0, v8, v9);
  }
  endIndex = this->fields.endIndex;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24503 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24503 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_EventBoardGameSquareIndex_k__BackingField = endIndex;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
LABEL_21:
    sub_1C2D6EC(Instance, v4);
  ScrTerminalMap__UpdateEventBoardGameSpot((ScrTerminalMap_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ScrTerminalMap___c__DisplayClass409_0___ctor(
        ScrTerminalMap___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScrTerminalMap___c__DisplayClass409_0___SetBoardGameSquareHaveToken_b__1(
        ScrTerminalMap___c__DisplayClass409_0_o *this,
        EventBoardGameTokenRewardEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.questId == this->fields.questId;
}


bool ScrTerminalMap___c__DisplayClass409_0___SetBoardGameSquareHaveToken_b__2(
        ScrTerminalMap___c__DisplayClass409_0_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  ScrTerminalMap___c__DisplayClass409_0_o *v4; // x20
  struct EventBoardGameTokenRewardEntity_o *rewardEnt; // x8

  if ( !x )
    goto LABEL_6;
  v4 = this;
  this = (ScrTerminalMap___c__DisplayClass409_0_o *)GiftEntity__checkGiftType(x, 13, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    rewardEnt = v4->fields.rewardEnt;
    if ( rewardEnt )
      return x->fields.id == rewardEnt->fields.giftId;
LABEL_6:
    sub_1C2D6EC(this, x);
  }
  return 0;
}


void ScrTerminalMap___c__DisplayClass439_0___ctor(
        ScrTerminalMap___c__DisplayClass439_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrTerminalMap___c__DisplayClass439_0___ChangeMapUIStateDelayCall_b__0(
        ScrTerminalMap___c__DisplayClass439_0_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  _4__this->fields._MapUIState_k__BackingField = this->fields.state;
}